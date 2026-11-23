#include "UnityAppController+Rendering.h"
#include "UnityAppController+Thermal.h"
#include "UnityAppController+ViewHandling.h"

#include "Unity/DisplayManager.h"

#include "UI/Keyboard.h"
#include "UI/UnityView.h"

#include <dlfcn.h>

#import <Metal/Metal.h>

static int _renderingAPI = 0;
static void SelectRenderingAPIImpl();


@implementation UnityAppController (Rendering)

#if !PLATFORM_VISIONOS
- (BOOL)usingCompositorLayer
{
    return NO;
}
#endif

- (void)createCADisplayLink
{
    _displayLink = [CADisplayLink displayLinkWithTarget: self selector: @selector(repaintDisplayLink)];
    [self callbackFramerateChange: -1];
    [_displayLink addToRunLoop: [NSRunLoop currentRunLoop] forMode: NSRunLoopCommonModes];

    printf_console("CADisplayLink created\n");
}

#if UNITY_USES_METAL_DISPLAY_LINK
- (void)createMetalDisplayLink API_AVAILABLE(ios(17.0), tvos(17.0))
{
    _usesMetalDisplayLink = YES;

    _metalDisplayLink = [[CAMetalDisplayLink alloc] initWithMetalLayer:(CAMetalLayer*)_unityView.layer];
    _metalDisplayLink.preferredFrameLatency = 2;
    _metalDisplayLink.paused = NO;
    _metalDisplayLink.delegate = self;

    [self callbackFramerateChange: -1];
    [_metalDisplayLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSRunLoopCommonModes];

    printf_console("CAMetalDisplayLink created\n");
}
#endif

- (void)createDisplayLink
{
    _usesMetalDisplayLink = NO; // we will set it to YES inside createMetalDisplayLink

#if UNITY_USES_METAL_DISPLAY_LINK
    if (@available(iOS 17.0, tvOS 17.0, *))
    {
        if ([self shouldUseMetalDisplayLink])
            [self createMetalDisplayLink];
    }
#endif

    if (!_usesMetalDisplayLink)
        [self createCADisplayLink];
}

- (void)destroyDisplayLink
{
    [_displayLink invalidate];
    _displayLink = nil;

#if UNITY_USES_METAL_DISPLAY_LINK
    if (@available(iOS 17.0, tvOS 17.0, *))
    {
        [_metalDisplayLink invalidate];
        _metalDisplayLink = nil;
    }
#endif
}

- (void)pauseDisplayLink
{
    _displayLink.paused = YES;
#if UNITY_USES_METAL_DISPLAY_LINK
    if (@available(iOS 17.0, tvOS 17.0, *))
        _metalDisplayLink.paused = YES;
#endif
}
- (void)unpauseDisplayLink
{
    _displayLink.paused = NO;
#if UNITY_USES_METAL_DISPLAY_LINK
    if (@available(iOS 17.0, tvOS 17.0, *))
        _metalDisplayLink.paused = NO;
#endif
}

- (void)switchToCADisplayLinkImpl
{
    if (_usesMetalDisplayLink)
    {
    #if UNITY_USES_METAL_DISPLAY_LINK
        if (@available(iOS 17.0, tvOS 17.0, *))
        {
            _metalDisplayLink.paused = YES;
            [_metalDisplayLink invalidate];
            _metalDisplayLink = nil;
        }
    #endif

        _usesMetalDisplayLink = NO;
        [self createCADisplayLink];
    }
}

- (void)switchToCADisplayLink
{
    dispatch_async(dispatch_get_main_queue(), ^() {
        [self switchToCADisplayLinkImpl];
    });
}

#if UNITY_USES_METAL_DISPLAY_LINK
- (void)switchToMetalDisplayLinkImpl API_AVAILABLE(ios(17.0), tvos(17.0))
{
    if (!_usesMetalDisplayLink && [self shouldUseMetalDisplayLink])
    {
        _displayLink.paused = YES;
        [_displayLink invalidate];
        _displayLink = nil;

        [self createMetalDisplayLink];
    }
}

- (void)switchToMetalDisplayLink
{
    dispatch_async(dispatch_get_main_queue(), ^() {
        [self switchToMetalDisplayLinkImpl];
    });
}
#endif


- (void)repaintDisplayLink
{
    if (self.usingCompositorLayer == NO)
    {
        UnityDisplayLinkCallback(_displayLink.timestamp);
        [self repaint];
    }
    else
    {
        [self repaintCompositorLayer];
    }
}

#if UNITY_USES_METAL_DISPLAY_LINK
- (void)metalDisplayLink:(CAMetalDisplayLink*)link needsUpdate:(CAMetalDisplayLinkUpdate*)update
{
    UnityDisplayLinkCallback(0);
    UnityUpdateMainDisplaySwapchain((__bridge void*)update);
    [self repaint];
}
#endif

- (void)repaint
{
    // floating/docking keyboard on iPad has otherwise uncatchable edge cases
    [KeyboardDelegate.Instance updateInputPosition];
    if (_unityView.skipRendering)
        return;

#if UNITY_SUPPORT_ROTATION
    [self checkOrientationRequest];
#endif

    [_unityView recreateRenderingSurfaceIfNeeded];
    [_unityView processKeyboard];

    // before it was happening on present display: since now present is handled internally
    // we move it to another place (now happens right before player loop, which is correct)
    {
        CGFloat maxEDR = 1.0f, currentEDR = 1.0f;
    #if !PLATFORM_VISIONOS
        UIScreen* screen = [UIScreen mainScreen];
        if (!screen.captured)
        {
            if (@available(iOS 16.0, tvOS 16.0, *))
            {
                maxEDR = screen.potentialEDRHeadroom;
                currentEDR = screen.currentEDRHeadroom;
            }
        }
    #endif
        UnitySetEDRValues(maxEDR, currentEDR);
    }

    // we want to support both CADisplayLink and CAMetalDisplayLink
    // the major complication is that they work quite differently under the hood
    // CADisplayLink: you can consider this a simple timer-based callback
    //   so if we get this while in background - we might be not allowed to render at all
    //   and before we were having an explicit check to repain only if we are not paused
    // CAMetalDisplayLink: unlike CADisplayLink (where we query drawable from view),
    //   the callback comes when we are asked explicitly to render view contents (we are given drawable)
    //   and we cannot bypass rendering when asked at all

    if (UnityIsPaused())
    {
        if(self.unityUsesMetalDisplayLink)
            UnityRenderWithoutPlayerLoop();
    }
    else if (UnityIsBatchmode())
        UnityBatchPlayerLoop();
    else
        UnityPlayerLoop();

#if !PLATFORM_VISIONOS
    if (UnityResolutionScalingFixedDPIFactorChanged())
        _unityView.contentScaleFactor = UnityScreenScaleFactor([UIScreen mainScreen]);
#endif

    UnityCheckUnloadAndQuit();
}

#if !PLATFORM_VISIONOS
- (void)repaintCompositorLayer
{
}
#endif

- (void)callbackGfxInited
{
    assert(self.engineLoadState < kUnityEngineLoadStateRenderingInitialized && "Graphics should not have been initialized at this point");
    InitRendering();
    [self advanceEngineLoadState: kUnityEngineLoadStateRenderingInitialized];

    [self shouldAttachRenderDelegate];
    [_unityView updateLayerDrawableSizeFromBounds];
    [_unityView updateUnityBackbufferSize];
    [_unityView recreateRenderingSurface];

    [_renderDelegate mainDisplayInited: _mainDisplay.surface];

    _mainDisplay.surface->allowScreenshot = 1;
}

- (void)callbackFramerateChange:(int)targetFPS
{
    if (targetFPS <= 0)
        targetFPS = UnityGetTargetFPS();

    // on tvos it is possible to start application without a screen attached
    // alas, mainScreen is set in this case, but the values provided are bogus
    //   and in the case of maxFPS = 0 we will end up in endless recursion
#if !PLATFORM_VISIONOS
    const int maxFPS = (int)[UIScreen mainScreen].maximumFramesPerSecond;
#else
    // no UIScreen on VisionOS
    const int maxFPS = 90;
#endif
    if (maxFPS > 0 && targetFPS > maxFPS)
    {
        targetFPS = maxFPS;
        // note that this changes FPS, resulting in UnityFramerateChangeCallback call, calling this method recursively recursively
        UnitySetTargetFPS(targetFPS);
        return;
    }

    if (UnityShouldAdjustPerformanceOnThermalStateChange())
        targetFPS = [self adjustFrameRateForThermalState:targetFPS];

    if(_usesMetalDisplayLink)
    {
    #if UNITY_USES_METAL_DISPLAY_LINK
        if (@available(iOS 17.0, tvOS 17.0, *))
            _metalDisplayLink.preferredFrameRateRange = CAFrameRateRangeMake(targetFPS, targetFPS, targetFPS);
    #endif
    }
    else
    {
            _displayLink.preferredFrameRateRange = CAFrameRateRangeMake(targetFPS, targetFPS, targetFPS);
    }
}

- (void)selectRenderingAPI
{
    NSAssert(_renderingAPI == 0, @"[UnityAppController selectRenderingApi] called twice");
    SelectRenderingAPIImpl();
}

- (UnityRenderingAPI)renderingAPI
{
    NSAssert(_renderingAPI != 0, @"[UnityAppController renderingAPI] called before [UnityAppController selectRenderingApi]");
    return (UnityRenderingAPI)_renderingAPI;
}

@end


extern "C" void UnityGfxInitedCallback()
{
    [GetAppController() callbackGfxInited];
}

extern "C" void UnityFramerateChangeCallback(int targetFPS)
{
    [GetAppController() callbackFramerateChange: targetFPS];
}

static NSBundle*            _MetalBundle        = nil;
static id<MTLDevice>        _MetalDevice        = nil;
static id<MTLCommandQueue>  _MetalCommandQueue  = nil;

static void SelectRenderingAPIImpl()
{
    assert(_renderingAPI == 0 && "Rendering API selection was done twice");

    _renderingAPI = UnityGetRenderingAPI();
    if (_renderingAPI == apiMetal)
    {
        _MetalBundle        = [NSBundle bundleWithPath: @"/System/Library/Frameworks/Metal.framework"];
        _MetalDevice        = MTLCreateSystemDefaultDevice();
        _MetalCommandQueue  = [_MetalDevice newCommandQueueWithMaxCommandBufferCount: UnityCommandQueueMaxCommandBufferCountMTL()];

        assert(_MetalDevice != nil && _MetalCommandQueue != nil && "Could not initialize Metal.");
    }
}

extern "C" MTLDeviceRef         UnityMetalDevice()          { return _MetalDevice; } // Exposed for Trampoline scope in UnityTrampolineInterface.h TODO: reuse UnityGetMetalDevice ?

extern "C" NSBundle*            UnityGetMetalBundle()       { return _MetalBundle; }
extern "C" MTLDeviceRef         UnityGetMetalDevice()       { return _MetalDevice; }
extern "C" MTLCommandQueueRef   UnityGetMetalCommandQueue() { return _MetalCommandQueue; }
extern "C" int                  UnitySelectedRenderingAPI() { return _renderingAPI; }
extern "C" void                 UnitySelectRenderingAPI()   { SelectRenderingAPIImpl(); }

// deprecated and no longer used by unity itself (will soon be removed)
extern "C" MTLCommandQueueRef   UnityGetMetalDrawableCommandQueue() { return UnityGetMetalCommandQueue(); }

extern "C" void UnityRepaint()
{
    @autoreleasepool
    {
        if (UnityIsBatchmode())
            UnityBatchPlayerLoop();
        else
            UnityPlayerLoop();
    }
}

extern "C" void UnitySetMaxQueuedFrames(unsigned count)
{
    assert(2 <= count && count <= 3);

    UnityAppController* app = GetAppController();

    if (app.unityUsesMetalDisplayLink)
    {
    #if UNITY_USES_METAL_DISPLAY_LINK
        if (@available(iOS 17.0, tvOS 17.0, *))
            app.unityMetalDisplayLink.preferredFrameLatency = count - 1;
    #endif
    }
    else
    {
        dispatch_async(dispatch_get_main_queue(), ^() {
            CALayer* layer = app.unityView.layer;
            if ([layer isKindOfClass: [CAMetalLayer class]])
                ((CAMetalLayer*)layer).maximumDrawableCount = count;
        });
    }
}
