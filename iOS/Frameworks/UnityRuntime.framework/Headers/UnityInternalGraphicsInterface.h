#ifndef UnityInternalGraphicsInterface_h
#define UnityInternalGraphicsInterface_h

#include <stdbool.h>

//
// forward declarations
//

#ifdef __OBJC__
    @class CAMetalLayer;
    @protocol CAMetalDrawable;
    @protocol MTLDrawable;
    @protocol MTLDevice;
    @protocol MTLTexture;
    @protocol MTLCommandBuffer;
    @protocol MTLCommandQueue;
    @protocol MTLCommandEncoder;

    typedef id<CAMetalDrawable>     CAMetalDrawableRef;
    typedef id<MTLDevice>           MTLDeviceRef;
    typedef id<MTLTexture>          MTLTextureRef;
    typedef id<MTLCommandBuffer>    MTLCommandBufferRef;
    typedef id<MTLCommandQueue>     MTLCommandQueueRef;
    typedef id<MTLCommandEncoder>   MTLCommandEncoderRef;
#else
    typedef struct objc_object      CAMetalLayer;
    typedef struct objc_object*     CAMetalDrawableRef;
    typedef struct objc_object*     MTLDeviceRef;
    typedef struct objc_object*     MTLTextureRef;
    typedef struct objc_object*     MTLCommandBufferRef;
    typedef struct objc_object*     MTLCommandQueueRef;
    typedef struct objc_object*     MTLCommandEncoderRef;
#endif

// we will keep objc objects in struct, so we need to explicitely mark references as strong to not confuse ARC
// please note that actual object lifetime is managed in objc++ code, so __unsafe_unretained is good enough for objc code
// NOTE: all the members of unity structs have an owner, that is the place where their lifetime is actually managed
// NOTE: in c/objc code (as opposed to c++/objc++) you should not assign them or store,
// NOTE:   since this wont be caught by ARC (due to unsafe unretained)
//
// NOTE: we use __unsafe_unretained in c to keep structs POD ()
#ifdef __OBJC__
    #ifdef __cplusplus
        #define OBJC_OBJECT_PTR __strong
    #else
        #define OBJC_OBJECT_PTR __unsafe_unretained
    #endif
#else
    #define OBJC_OBJECT_PTR
#endif

// unity internal native render buffer struct (the one you acquire in C# with RenderBuffer.GetNativeRenderBufferPtr())
struct RenderSurfaceBase;
typedef struct RenderSurfaceBase* UnityRenderBufferHandle;

//
// swapchain: this is used to connect unity rendering (inside player) to the drawable handling (inside trampoline)
//

typedef struct UnityViewSwapchain
{
    OBJC_OBJECT_PTR CAMetalLayer*       layer;

    // drawable handling:
    // CADisplayLink: we will call [CAMetalLayer nextDrawable] first time we need to use "backbuffer"
    // CAMetalDisplayLink: we are getting drawable to render to from the callback
    // CODE ARCHEOLOGY: we were having nextDrawable here, to be inited from metal displaylink callback
    // CODE ARCHEOLOGY: it turned out we must finish commandbuffer encoding in callback
    // CODE ARCHEOLOGY: so we now ensure we do not use drawable after PlayerLoop is done
    OBJC_OBJECT_PTR CAMetalDrawableRef  drawable;
    OBJC_OBJECT_PTR MTLTextureRef       drawableTexture;
} UnityViewSwapchain;

// be aware that this enum is shared with unity implementation so you should absolutely not change it
typedef enum UnityRenderingAPI
{
    apiMetal        = 4,

    // command line argument: -nographics
    // does not initialize real graphics device and bypass all the rendering
    // currently supported only on simulators
    apiNoGraphics   = -1,
} UnityRenderingAPI;

//
// api
//

#ifdef __cplusplus
extern "C" {
#endif

// drawable acquisition
// CADisplayLink: we will either call [CAMetalLayer nextDrawable] or return cached (this frame) drawable
// CAMetalDisplayLink: we will use the drawable given to us in the callback
MTLTextureRef AcquireSwapchainDrawable(UnityViewSwapchain* swapchain);

// external render surfaces and textures are "out of scope" for memory profiler, hence we add means to register them separately
// the separate mechanism is needed because unity cannot know what manages the lifetime of textures in this case
//   specifically since we allow external render surfaces and textures to share metal textures
void UnityRegisterExternalRenderSurfaceTextureForMemoryProfiler(MTLTextureRef tex);
void UnityRegisterExternalTextureForMemoryProfiler(MTLTextureRef tex);
void UnityUnregisterMetalTextureForMemoryProfiler(MTLTextureRef tex);

UnityRenderingAPI  UnityGetRenderingAPI(void);
void UnityDisplayLinkCallback(double unused);
void UnityFinishRendering(void);
void UnityGLInvalidateState(void);
void UnityActivateScreenForRendering(void* nativeDisplay);
uint32_t UnityMainScreenRefreshRate(void);
bool UnityIsFullscreen(void);

// resolution/orientation handling
void UnityGetRenderingResolution(unsigned* w, unsigned* h);
void UnityGetSystemResolution(unsigned* w, unsigned* h);
void UnityRequestRenderingResolution(unsigned w, unsigned h);
bool UnityDeviceCanShowWideColor(void);


// handling of unity "backbuffer"
// internally we still pretend that backbuffer has depth, can have MSAA, or extents different from the window/view size
// we had UnityCreateExternal* api before that was slightly too "wordy" to use, and was also using UnityDisplaySurfaceMTL
//   which is wrong, and introduced to big a coupling
// now, we have two things happening (with different velocities), triggering the need to update API
//   even if this is not (might be not) the final form
// first of all we are working on introducing swift trampoline, where we can simplify rendering logic;
//   but also we do not want to drag in the whole UnityDisplaySurfaceMTL (it doesn't make sense nowadays)
// thus we introduce intermediate explicit "swapchain" structure
// this also plays nicely with moving towards having explicit "swapchain" concept internally,
//   where (not matching view) resolution, MSAA, etc will be handled separately from "here is the connection to window to give to compositor"
// hence we introduce the api using new UnityViewSwapchain structure (with minimal connection to view internals)
// alas we are not yet ready to fully switch to have only swapchain in the platform layer (trampoline)
//   thus we still keep the possibility to create "AA backbuffer that will be resolved to swapchain" or even custom resolution (copied to actual drawable)
// another thing to note is that we are still bound to support "old" CADisplayLink, thus we need to be able to delay acquiring drawable
//   so we still need to make sure we have RenderBuffer connecting to a "swapchain" to do the magic when we want to render to it
// and that's why we have such a big api surface instead of simple "here is your swapchain, please render to it"
//   but this will hopefully change soon
// things of note:
//   * note that we always pass "current" pointer (rbBackbuffer param)
//     this api is working similarly to realloc: if you pass null we allocate and create new render buffer, otherwise we update the existing one
//   * due to this, UnitySwapchainDestroyBackbuffer is called only if we really do not need this type of surface anymore

UnityRenderBufferHandle UnitySwapchainCreateBackbuffer(UnityViewSwapchain* swapchain, UnityRenderBufferHandle rbBackbuffer);
UnityRenderBufferHandle UnitySwapchainCreateBackbufferForExtents(UnityViewSwapchain* swapchain, UnityRenderBufferHandle rbBackbuffer, unsigned width, unsigned height);
UnityRenderBufferHandle UnitySwapchainCreateAABackbufferResolveToSwapchain(UnityViewSwapchain* swapchain, UnityRenderBufferHandle rbBackbuffer, unsigned sampleCount);
UnityRenderBufferHandle UnitySwapchainCreateAABackbuffer(UnityViewSwapchain* swapchain, UnityRenderBufferHandle rbBackbuffer, unsigned sampleCount, UnityRenderBufferHandle rbResolveTo);
UnityRenderBufferHandle UnitySwapchainCreateDepthForBackbuffer(UnityViewSwapchain* swapchain, UnityRenderBufferHandle rbColorBackbuffer, UnityRenderBufferHandle rbDepthBackbuffer);
void                    UnitySwapchainDestroyBackbuffer(UnityViewSwapchain* swapchain, UnityRenderBufferHandle rbBackbuffer);
void                    UnitySwapchainBlitBackbuffer(UnityViewSwapchain* swapchain, UnityRenderBufferHandle rbColorBackbuffer, MTLCommandBufferRef cb);

#ifdef __cplusplus
}   // extern "C"
#endif

#endif /* UnityInternalGraphicsInterface_h */
