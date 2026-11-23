#pragma once

#include <stdint.h>
#include "UnityInternalGraphicsInterface.h"



// if this is set, then variables that there were moved from UnityDisplaySurfaceMTL to swapchain
//   will be still updated when acquiring drawable.
// NOTE: in this case we assume that all the UnityViewSwapchain pointers passed to unity players are coming from UnityDisplaySurfaceMTL
// if this is set UnityDisplaySurfaceBase still has removed variables, but they are no longer updated
#if !defined(UNITY_DISPLAY_SURFACE_MTL_BACKWARD_COMPATIBILITY) && UNITY_TRAMPOLINE_IN_USE
    #define UNITY_DISPLAY_SURFACE_MTL_BACKWARD_COMPATIBILITY 1
#endif

// unity internal native render buffer struct (the one you acquire in C# with RenderBuffer.GetNativeRenderBufferPtr())
struct RenderSurfaceBase;
typedef struct RenderSurfaceBase* UnityRenderBufferHandle;

// be aware that this struct is shared with unity implementation so you should absolutely not change it
typedef struct UnityRenderBufferDesc
{
    unsigned    width, height, depth;
    unsigned    samples;

    int         backbuffer;
} UnityRenderBufferDesc;

// trick to make structure inheritance work transparently between c/cpp
// for c we use "anonymous struct"
#ifdef __cplusplus
    #define START_STRUCT(T, Base)   struct T : Base {
    #define END_STRUCT(T)           };
#else
    #define START_STRUCT(T, Base)   typedef struct T { struct Base;
    #define END_STRUCT(T)           } T;
#endif

// unity common rendering (display) surface
typedef struct UnityDisplaySurfaceBase
{
    UnityRenderBufferHandle unityColorBuffer;
    UnityRenderBufferHandle unityDepthBuffer;

    UnityRenderBufferHandle systemColorBuffer;

    unsigned            targetW, targetH;
    unsigned            systemW, systemH;

    int                 msaaSamples;
    int                 srgb;                   // [bool]
    int                 wideColor;              // [bool]
    int                 hdr;                    // [bool]
    int                 disableDepthAndStencil; // [bool]
    int                 allowScreenshot;        // [bool] currently we allow screenshots (from script) only on main display
    int                 memorylessDepth;        // [bool]

    int                 api;                    // [UnityRenderingAPI]

    // these are no longer supported, we keep them only to avoid breaking compilation
#if UNITY_DISPLAY_SURFACE_MTL_BACKWARD_COMPATIBILITY
    UnityRenderBufferHandle systemDepthBuffer   __attribute__((deprecated));
    int                 useCVTextureCache       __attribute__((deprecated));
    void*               cvTextureCache          __attribute__((deprecated));
    void*               cvTextureCacheTexture   __attribute__((deprecated));
    void*               cvPixelBuffer           __attribute__((deprecated));
#endif

} UnityDisplaySurfaceBase;

// START_STRUCT confuse clang c compiler (though it is idiomatic c code that works)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-declarations"

// on iOS/tvOS: we render to the drawable directly
//              and we need proxy only to delay acquiring drawable until we actually want to render to the "backbuffer"
//              thus just one proxy and it will be marked as "empty" (we only need it to query texture params, like extents)
// on macOS:    we render to the offscreen RT and blit to the drawable, thus we need several proxy RT
//              and all of them will be full blown textures (with GPU backing)
#if PLATFORM_OSX
    #define kUnityNumOffscreenSurfaces 2
#else
    #define kUnityNumOffscreenSurfaces 1
#endif

// Metal display surface
START_STRUCT(UnityDisplaySurfaceMTL, UnityDisplaySurfaceBase)
OBJC_OBJECT_PTR MTLDeviceRef        device;

// These are no longer used
UnityViewSwapchain                  swapchain;
UnityRenderBufferHandle             targetColorRB;
UnityRenderBufferHandle             targetAAColorRB;

OBJC_OBJECT_PTR MTLTextureRef       drawableProxyRT[kUnityNumOffscreenSurfaces];
UnityRenderBufferHandle             drawableProxyRS[kUnityNumOffscreenSurfaces];

// This is used on a Mac with drawableProxyRT when off-screen rendering is used
int                                 proxySwaps;         // Counts times proxy RTs have swapped since surface recreated
int                                 proxyReady;         // [bool] Proxy RT has swapped since last present; frame ended
int                                 calledPresentDrawable; // Tracks presenting for editor.
int                                 vsync;              // Is vsync enabled or not

unsigned                            colorFormat;        // [MTLPixelFormat]
unsigned                            depthFormat;        // [MTLPixelFormat]
int                                 framebufferOnly;

// these were moved to a separate structure. to simplify the lives of plugin writers we are keeping them here for some time
// if these need to be updated XXX need to be defined: we will try to update these, but please move on from using them
#if UNITY_DISPLAY_SURFACE_MTL_BACKWARD_COMPATIBILITY
OBJC_OBJECT_PTR CAMetalLayer*       layer           __attribute__((deprecated));
OBJC_OBJECT_PTR CAMetalDrawableRef  nextDrawable    __attribute__((deprecated));
OBJC_OBJECT_PTR CAMetalDrawableRef  drawable        __attribute__((deprecated));
OBJC_OBJECT_PTR MTLTextureRef       drawableTex     __attribute__((deprecated));

// these are no longer used, and should have never been used before - we still keep them around but they stay zero-inited
OBJC_OBJECT_PTR MTLTextureRef       systemColorRB __attribute__((deprecated));
int                                 drawableProxyNeedsClear[kUnityNumOffscreenSurfaces] __attribute__((deprecated));

// these we removed in favor of RTs managed inside player library, we now have renderbuffers instead
OBJC_OBJECT_PTR MTLTextureRef       targetColorRT   __attribute__((deprecated));
OBJC_OBJECT_PTR MTLTextureRef       targetAAColorRT __attribute__((deprecated));

OBJC_OBJECT_PTR MTLTextureRef       depthRB         __attribute__((deprecated));
OBJC_OBJECT_PTR MTLTextureRef       stencilRB       __attribute__((deprecated));
#endif

END_STRUCT(UnityDisplaySurfaceMTL)

// START_STRUCT confuse clang c compiler (though it is idiomatic c code that works)
#pragma clang diagnostic pop


typedef struct RenderingSurfaceParams
{
    // rendering setup
    int msaaSampleCount;
    int renderW;
    int renderH;
    int srgb;
    int wideColor;
    int hdr;
    int metalFramebufferOnly;
    int metalMemorylessDepth;

    // unity setup
    int disableDepthAndStencil;

    // no longer supported
#if UNITY_DISPLAY_SURFACE_MTL_BACKWARD_COMPATIBILITY
    int useCVTextureCache   __attribute__((deprecated));
#endif
} RenderingSurfaceParams;

#ifdef __cplusplus
extern "C" {
#endif
int UnitySelectedRenderingAPI(void);
#ifdef __cplusplus
} // extern "C"
#endif

// metal
#ifdef __cplusplus
extern "C" {
#endif

void InitRenderingMTL(void);

void CreateSystemRenderingSurfaceMTL(UnityDisplaySurfaceMTL* surface);
void PreparePresentMTL(UnityDisplaySurfaceMTL* surface, MTLCommandBufferRef cb);
void PresentMTL(UnityDisplaySurfaceMTL* surface, MTLCommandBufferRef cb);

// Acquires CAMetalDrawable resource for the surface and returns the drawable texture
MTLTextureRef AcquireSwapchainDrawable(UnityViewSwapchain* swapchain);

unsigned UnityHDRSurfaceDepth(void);

// starting with ios11 apple insists on having just one presentDrawable per command buffer
// hence we keep normal processing for main screen, but when airplay is used we will create extra command buffers
void PreparePresentNonMainScreenMTL(UnityDisplaySurfaceMTL* surface);

#ifdef __cplusplus
} // extern "C"
#endif

// no graphics
#ifdef __cplusplus
extern "C" {
#endif

void InitRenderingNULL(void);
void CreateSystemRenderingSurfaceNULL(UnityDisplaySurfaceBase* surface);
void PreparePresentNULL(UnityDisplaySurfaceBase* surface);
void PresentNULL(UnityDisplaySurfaceBase* surface);

#ifdef __cplusplus
} // extern "C"
#endif


#ifdef __cplusplus
extern "C" {
#endif

// for Create* functions if surf is null we will actuially create new one, otherwise we update the one provided
// metal: resolveTex should be non-nil only if tex have AA
UnityRenderBufferHandle UnityCreateExternalSurfaceMTL(UnityRenderBufferHandle surf, int isColor, MTLTextureRef tex, const UnityRenderBufferDesc* desc);
// Passing non-nil displaySurface will mark render surface as proxy and will do a delayed drawable acquisition when setting up framebuffer
UnityRenderBufferHandle UnityCreateExternalColorSurfaceMTL(UnityRenderBufferHandle surf, MTLTextureRef tex, MTLTextureRef resolveTex, const UnityRenderBufferDesc* desc, UnityDisplaySurfaceMTL* displaySurface);
UnityRenderBufferHandle UnityCreateExternalDepthSurfaceMTL(UnityRenderBufferHandle surf, MTLTextureRef tex, MTLTextureRef stencilTex, const UnityRenderBufferDesc* desc);
// creates "dummy" surface - will indicate "missing" buffer (e.g. depth-only RT will have color as dummy)
UnityRenderBufferHandle UnityCreateDummySurface(UnityRenderBufferHandle surf, int isColor, const UnityRenderBufferDesc* desc);

// disable rendering to render buffers (all Cameras that were rendering to one of buffers would be reset to use backbuffer)
void    UnityDisableRenderBuffers(UnityRenderBufferHandle color, UnityRenderBufferHandle depth);
// destroys render buffer
void    UnityDestroyExternalSurface(UnityRenderBufferHandle surf);
// sets current render target
void    UnitySetRenderTarget(UnityRenderBufferHandle color, UnityRenderBufferHandle depth);

// get native renderbuffer from handle
UnityRenderBufferHandle UnityNativeRenderBufferFromHandle(void *rb);

MTLCommandBufferRef UnityCurrentMTLCommandBuffer(void);

#ifdef __cplusplus
} // extern "C"
#endif

// metal/gles unification

#define GLES_METAL_COMMON_IMPL_SURF(f)                                                                  \
inline void f(UnityDisplaySurfaceBase* surface)                                                         \
{                                                                                                       \
    switch(surface->api) {                                                                              \
        case apiMetal:                          f ## MTL((UnityDisplaySurfaceMTL*)surface);     break;  \
        case apiNoGraphics:                     f ## NULL(surface);                             break;  \
    }                                                                                                   \
}                                                                                                       \

#define GLES_METAL_COMMON_IMPL(f)                                       \
inline void f()                                                         \
{                                                                       \
    switch(UnitySelectedRenderingAPI()) {                               \
        case apiMetal:                          f ## MTL();     break;  \
        case apiNoGraphics:                     f ## NULL();    break;  \
    }                                                                   \
}                                                                       \


GLES_METAL_COMMON_IMPL(InitRendering);

GLES_METAL_COMMON_IMPL_SURF(CreateSystemRenderingSurface);

#undef GLES_METAL_COMMON_IMPL_SURF
#undef GLES_METAL_COMMON_IMPL
