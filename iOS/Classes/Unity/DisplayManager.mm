#include "DisplayManager.h"

#include "UnityAppController.h"
#include "UI/UnityView.h"
#include "UI/UnityAppController+ViewHandling.h"

#import <CoreGraphics/CoreGraphics.h>
#import <Metal/Metal.h>
#import <QuartzCore/QuartzCore.h>

#if !(defined(__IPHONE_16_0) || defined(__TVOS_16_0))
@interface CAMetalLayer (UnityForSdk16)
{
}
@property BOOL wantsExtendedDynamicRangeContent API_AVAILABLE(ios(16.0), macCatalyst(16.0)) API_UNAVAILABLE(tvos, watchos);
@end
@interface UIScreen (UnityForSdk16)
{
}
@property CGFloat potentialEDRHeadroom API_AVAILABLE(ios(16.0), tvos(16.0), macCatalyst(16.0)) API_UNAVAILABLE(watchos);
@property CGFloat currentEDRHeadroom API_AVAILABLE(ios(16.0), tvos(16.0), macCatalyst(16.0)) API_UNAVAILABLE(watchos);
@end
#endif

static DisplayManager* _DisplayManager = nil;

@implementation DisplayConnection
{
    BOOL                        _needRecreateSurface;

#if !PLATFORM_VISIONOS
    UIScreen*                   _screen;
#endif
    UIWindow*                   _window;
    UIView*                     _view;

    CGSize                      _screenSize;

    UnityDisplaySurfaceBase*    _surface;
}

#if !PLATFORM_VISIONOS
@synthesize screen      = _screen;
#endif
@synthesize window      = _window;
@synthesize view        = _view;
@synthesize screenSize  = _screenSize;
@synthesize surface     = _surface;

@synthesize surfaceMTL;
- (UnityDisplaySurfaceMTL*)surfaceMTL
{
    assert(_surface->api == apiMetal);
    return (UnityDisplaySurfaceMTL*)_surface;
}

#if !PLATFORM_VISIONOS
- (id)init:(UIScreen*)targetScreen
{
    if ((self = [super init]))
    {
        self->_screen = targetScreen;

#if !PLATFORM_TVOS
        targetScreen.currentMode = targetScreen.preferredMode;
#endif

        // UIScreenOverscanCompensationNone == UIScreenOverscanCompensationInsetApplicationFrame so it will work with pre-ios9 just fine
        targetScreen.overscanCompensation = UIScreenOverscanCompensationNone;

        self->_screenSize = targetScreen.currentMode.size;

        self->_needRecreateSurface = NO;
    }
    return self;
}
#else
- (id)init
{
    if ((self = [super init]))
    {
        self->_screenSize = CGSizeMake(1920, 1080);
        self->_needRecreateSurface = NO;
    }
    return self;
}
#endif

- (void)createWithWindow:(UIWindow*)window andView:(UIView*)view
{
    _window = window;
    _view   = view;

    CGSize layerSize = _view.layer.bounds.size;
    _screenSize = CGSizeMake(::roundf(layerSize.width * _view.contentScaleFactor), ::roundf(layerSize.height * _view.contentScaleFactor));

    if ([_view.layer isKindOfClass: [CAMetalLayer class]])
    {
        // UnityView either has CAMetalLayer backing, when running on Metal, or CALayer, when running in 'nographics' mode
        ((CAMetalLayer*)_view.layer).drawableSize = layerSize;
    }
}

- (void)createView:(BOOL)useForRendering
{
    [self createView: useForRendering showRightAway: YES];
}

#if !PLATFORM_VISIONOS
- (UIWindowScene*) sceneForScreen:(UIScreen*)screen {
    for (UIScene* scene in UIApplication.sharedApplication.connectedScenes) {
        if ([scene isKindOfClass:[UIWindowScene class]]) {
            UIWindowScene* windowScene = (UIWindowScene *)scene;
            if (windowScene.screen == screen) {
                return windowScene;
            }
        }
    }
    return nil;
}
#endif

- (void)createView:(BOOL)useForRendering showRightAway:(BOOL)showRightAway;
{
#if !PLATFORM_VISIONOS
    NSAssert(_screen != [UIScreen mainScreen], @"DisplayConnection for mainScreen should be created with createWithWindow:andView:");
#endif
    if (_view == nil)
    {
    #if !PLATFORM_VISIONOS
        UIWindow* window = [[UIWindow alloc] initWithFrame: _screen.bounds];
        UIWindowScene* scene = [self sceneForScreen: _screen];
        window.windowScene = scene;

        UIView* view = [(useForRendering ? [UnityRenderingView alloc] : [UIView alloc]) initWithFrame: _screen.bounds];
        view.contentScaleFactor = UnityScreenScaleFactor(_screen);
    #else
        UIWindow* window = [[UIWindow alloc] init];
        UIView* view = [(useForRendering ? [UnityRenderingView alloc] : [UIView alloc]) init];
    #endif

        [self createWithWindow: window andView: view];

    #if !PLATFORM_VISIONOS
        if (useForRendering && [view.layer isKindOfClass: [CAMetalLayer class]])
            UnityActivateDisplaySwapchain((__bridge void*)_screen, (__bridge void*)(CAMetalLayer*)view.layer);
    #endif

        if (showRightAway)
        {
            [window addSubview: view];
            window.hidden = NO;
        }
    }
}

- (void)shouldShowWindow:(BOOL)show
{
    if (_window.hidden != show)
        return;

    _window.hidden = !show;

#if !PLATFORM_VISIONOS
    _window.windowScene = show ? [self sceneForScreen: _screen] : nil;
#endif
}

- (UnityDisplaySurfaceBase*)initRendering
{
    if (_surface)
        return _surface;

    UnityDisplaySurfaceBase* ret = NULL;
    const int api = UnitySelectedRenderingAPI();
    if (api == apiMetal)
    {
        UnityDisplaySurfaceMTL* surf = new UnityDisplaySurfaceMTL();
        surf->swapchain.layer = (CAMetalLayer*)_view.layer;
        surf->device = UnityGetMetalDevice();
        ret = surf;
    }
    else
        ret = new UnityDisplaySurfaceBase();

    ret->api = api;
    return ret;
}

- (void)recreateSurface:(RenderingSurfaceParams)params
{
    UnityDisplaySurfaceBase* surface = [self initRendering];

    // On metal we depend on hardware screen compositor to handle upscaling this way avoiding additional blit
    CGSize layerSize = _view.layer.bounds.size;
    float scale = _view.contentScaleFactor;
    _screenSize = CGSizeMake(::roundf(layerSize.width * scale), ::roundf(layerSize.height * scale));

    const bool hdrChanged = surface->hdr != params.hdr;

    surface->systemW = (unsigned)_screenSize.width;
    surface->systemH = (unsigned)_screenSize.height;

    surface->srgb = params.srgb;
    surface->wideColor = params.wideColor;
    surface->hdr = params.hdr;

    const int api = UnitySelectedRenderingAPI();
    if (api == apiMetal)
        ((UnityDisplaySurfaceMTL*)surface)->framebufferOnly = params.metalFramebufferOnly;

    CreateSystemRenderingSurface(surface);

    if (api == apiMetal && hdrChanged)
    {
#if !PLATFORM_TVOS
        if (@available(iOS 16.0, *))
        {
            UnityDisplaySurfaceMTL* mtlSurf = (UnityDisplaySurfaceMTL*)surface;
            mtlSurf->swapchain.layer.wantsExtendedDynamicRangeContent = surface->hdr != 0;
        }
#endif
        UnitySetHDRMode(surface->hdr);
    }
    _surface = surface;
#if !PLATFORM_VISIONOS
    UnityInvalidateDisplayDataCache((__bridge void*)_screen);
#endif
}

- (void)destroySurface
{
    if (_surface)
    {
        const int api = UnitySelectedRenderingAPI();
        if (api == apiMetal)
        {
            self.surfaceMTL->device = nil;
            self.surfaceMTL->swapchain.layer  = nil;
        }
    }

    delete _surface;
    _surface = 0;
}

- (void)dealloc
{
    NSAssert(_surface == 0, @"At this point surface should be already destroyed!");

    _view   = nil;
    _window = nil;
}

@end


#if !PLATFORM_VISIONOS

#if PLATFORM_IOS && UNITY_HAS_IOSSDK_27_0
@interface DisplayManager (UnityExternalDisplayScene)
- (void)externalDisplaySceneDidConnect:(UIWindowScene*)scene;
- (void)externalDisplaySceneDidDisconnect:(UIWindowScene*)scene;
@end

// Scene delegate for accessory scenes. Deliberately not UnityScene as that one would init unity
// against the external display scene.
API_AVAILABLE(ios(27.0))
@interface UnityExternalDisplaySceneDelegate : UIResponder<UIWindowSceneDelegate>
@end

@implementation UnityExternalDisplaySceneDelegate
- (void)scene:(UIScene*)scene willConnectToSession:(UISceneSession*)session options:(UISceneConnectionOptions*)connectionOptions
{
    if ([scene isKindOfClass: [UIWindowScene class]])
        [[DisplayManager Instance] externalDisplaySceneDidConnect: (UIWindowScene*)scene];
}

- (void)sceneDidDisconnect:(UIScene*)scene
{
    if ([scene isKindOfClass: [UIWindowScene class]])
        [[DisplayManager Instance] externalDisplaySceneDidDisconnect: (UIWindowScene*)scene];
}

@end
#endif

@implementation DisplayManager
{
    NSMapTable*         _displayConnection;
    DisplayConnection*  _mainDisplay;
#if PLATFORM_IOS && UNITY_HAS_IOSSDK_27_0
    // UISceneAccessoryRegistration. An ivar can't have an iOS 27 only type.
    id                  _externalDisplayAccessoryRegistration;
    __weak UIViewController* _externalDisplayAccessoryHost;
    // scene -> screen, so disconnect need not trust scene.screen (may already be torn down)
    NSMapTable*         _screenForExternalDisplayScene;
#endif
}

@synthesize mainDisplay     = _mainDisplay;
@synthesize displayCount;
- (NSUInteger)displayCount { return _displayConnection.count; }


- (void)registerScreen:(UIScreen*)screen
{
    if([_displayConnection objectForKey:screen] == nil)
        [_displayConnection setObject: [[DisplayConnection alloc] init: screen] forKey: screen];
}

- (void)unregisterScreen:(UIScreen*)screen
{
    if (screen == nil)
        return;

    DisplayConnection* conn = (DisplayConnection*)self[screen];
    // tearing down the main display here would kill rendering
    if (conn == nil || conn == _mainDisplay)
        return;

    UnityDeactivateDisplaySwapchain((__bridge void*)screen);

    [conn destroySurface];
    conn = nil;

    [_displayConnection removeObjectForKey: screen];
    [self updateDisplayListCacheInUnity];
}

#if PLATFORM_IOS && UNITY_HAS_IOSSDK_27_0
- (void)externalDisplaySceneDidConnect:(UIWindowScene*)scene
{
    UIScreen* screen = scene.screen;
    // main screen comes from the application scene, registering it again would duplicate it
    if (screen == nil || screen == [UIScreen mainScreen])
        return;

    if (_screenForExternalDisplayScene == nil)
    {
        _screenForExternalDisplayScene = [NSMapTable mapTableWithKeyOptions: NSPointerFunctionsWeakMemory | NSPointerFunctionsObjectPointerPersonality
                                                             valueOptions: NSPointerFunctionsWeakMemory | NSPointerFunctionsObjectPointerPersonality];
    }
    [_screenForExternalDisplayScene setObject: screen forKey: scene];

    [self registerScreen: screen];
    [self updateDisplayListCacheInUnity];
}

- (void)externalDisplaySceneDidDisconnect:(UIWindowScene*)scene
{
    UIScreen* screen = [_screenForExternalDisplayScene objectForKey: scene];
    [_screenForExternalDisplayScene removeObjectForKey: scene];

    [self unregisterScreen: screen != nil ? screen : scene.screen];
}

- (void)registerExternalDisplaySceneAccessoryForViewController:(UIViewController*)viewController
{
    if (@available(iOS 27.0, *))
    {
        // bound to the view controller it was registered against, so a replaced one needs a fresh one
        if (_externalDisplayAccessoryRegistration != nil)
        {
            [_externalDisplayAccessoryHost unregisterSceneAccessory: _externalDisplayAccessoryRegistration];
            _externalDisplayAccessoryRegistration = nil;
            _externalDisplayAccessoryHost = nil;
        }

        if (viewController == nil)
            return;

        UISceneConfiguration* config = [[UISceneConfiguration alloc] initWithName: @"UnityExternalDisplayConfiguration"];
        config.delegateClass = [UnityExternalDisplaySceneDelegate class];

        UISceneAccessoryRegistration* registration =
            [viewController registerSceneAccessory: [UISceneAccessory externalNonInteractiveSceneAccessoryWithConfiguration: config]];
        registration.enabled = YES;

        _externalDisplayAccessoryRegistration = registration;
        _externalDisplayAccessoryHost = viewController;
    }
}
#elif PLATFORM_IOS
- (void)registerExternalDisplaySceneAccessoryForViewController:(UIViewController*)viewController
{
}
#endif

- (id)init
{
    if ((self = [super init]))
    {
        const NSPointerFunctionsOptions options = NSPointerFunctionsStrongMemory | NSPointerFunctionsObjectPointerPersonality;
        _displayConnection = [NSMapTable mapTableWithKeyOptions: options valueOptions: options];

        [self registerScreen: [UIScreen mainScreen]];
        _mainDisplay = self[[UIScreen mainScreen]];
    }
    return self;
}

- (void)prepareForFirstScene
{
#if PLATFORM_IOS && UNITY_HAS_IOSSDK_27_0
    // On iOS 27+ displays come only from accessory scenes. Registering from the deprecated UIScreen
    // path as well would hand unity a display before its scene exists, and its window never attaches.
    if (@available(iOS 27.0, *))
    {
        [self updateDisplayListCacheInUnity];
        return;
    }
#endif

    [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(screenDidConnect:) name: UIScreenDidConnectNotification object: nil];
    [[NSNotificationCenter defaultCenter] addObserver: self selector: @selector(screenDidDisconnect:) name: UIScreenDidDisconnectNotification object: nil];

    for (UIScreen* screen in [UIScreen screens])
        [self registerScreen: screen];

    [self updateDisplayListCacheInUnity];
}

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver: self];
}

- (BOOL)displayAvailable:(UIScreen*)targetScreen;
{
    return self[targetScreen] != nil;
}

- (DisplayConnection*)display:(UIScreen*)targetScreen
{
    return self[targetScreen];
}

- (id)objectForKeyedSubscript:(id)key
{
    NSAssert([key isKindOfClass: [UIScreen class]], @"DisplayManager allows only UIScreen as subscript");
    return [_displayConnection objectForKey: (UIScreen*)key];
}

- (void)updateDisplayListCacheInUnity
{
    // [UIScreen screens] might be out of sync to what is indicated to the
    // application via UIScreenDidConnectNotification and UIScreenDidDisconnectNotification
    // notifications. For example, on disconnection [UIScreen screens] might still
    // have the screen that the display manager no longer knows about.

    const unsigned MAX_DISPLAYS_SUPPORTED = 8; // sync this to the value on Unity side
    void* screens[MAX_DISPLAYS_SUPPORTED];
    unsigned screenCount = 0;

    UIScreen* mainScreen = [UIScreen mainScreen];
    screens[screenCount++] = (__bridge void*)mainScreen;

    for (UIScreen* screen in _displayConnection)
    {
        if (screen == mainScreen)
            continue;
        screens[screenCount++] = (__bridge void*)screen;
    }

    UnityUpdateDisplayListCache(screens, screenCount);
}

- (void)enumerateDisplaysWithBlock:(void (^)(DisplayConnection* conn))block
{
    for (UIScreen* screen in _displayConnection)
    {
        // if we want simple mirroring unity wont create rendering backing for display
        // in that case we dont want to touch Display
        DisplayConnection* conn = [_displayConnection objectForKey: screen];
        if (conn.surface != nil)
            block(conn);
    }
}

- (void)enumerateNonMainDisplaysWithBlock:(void (^)(DisplayConnection* conn))block
{
    for (UIScreen* screen in _displayConnection)
    {
        DisplayConnection* conn = [_displayConnection objectForKey: screen];
        if (conn != _mainDisplay && conn.surface != nil)
            block(conn);
    }
}


- (void)screenDidConnect:(NSNotification*)notification
{
    [self registerScreen: (UIScreen*)[notification object]];
    [self updateDisplayListCacheInUnity];
}

- (void)screenDidDisconnect:(NSNotification*)notification
{
    [self unregisterScreen: (UIScreen*)[notification object]];
}

+ (void)Initialize
{
    NSAssert(_DisplayManager == nil, @"[DisplayManager Initialize] called after creating handler");
    if (!_DisplayManager)
        _DisplayManager = [[DisplayManager alloc] init];
}

+ (DisplayManager*)Instance
{
    if (!_DisplayManager)
        _DisplayManager = [[DisplayManager alloc] init];

    return _DisplayManager;
}

+ (void)Destroy
{
    _DisplayManager = nil;
}

@end
#else
// xros DisplayManager
@implementation DisplayManager
{
    DisplayConnection*  _mainDisplay;
}

@synthesize mainDisplay     = _mainDisplay;
@synthesize displayCount;
- (NSUInteger)displayCount { return 1; }

- (id)init
{
    if ((self = [super init]))
    {
        _mainDisplay = [[DisplayConnection alloc] init];

        // Unity needs a non-zero screen in order for renderloop to run
        const int screenCount = 1;
        void* screens[screenCount] = {(void*)0x1};
        UnityUpdateDisplayListCache(screens, screenCount);
    }
    return self;
}

- (void)dealloc
{
}

+ (void)Initialize
{
    NSAssert(_DisplayManager == nil, @"[DisplayManager Initialize] called after creating handler");
    if (!_DisplayManager)
        _DisplayManager = [[DisplayManager alloc] init];
}

+ (DisplayManager*)Instance
{
    if (!_DisplayManager)
        _DisplayManager = [[DisplayManager alloc] init];

    return _DisplayManager;
}
@end
#endif

//==============================================================================
//
//  Unity Interface:

static void EnsureDisplayIsInited(DisplayConnection* conn)
{
    // main screen view will be created in AppController,
    // so we can assume that we need to init secondary display from script
    // meaning: gles + show right away

    if (conn.view == nil)
        [conn createView: YES];

    int api = UnitySelectedRenderingAPI();

    bool needRecreate = false;
    if (conn.surface == 0)
        needRecreate = true;
    else if (api == apiMetal)
        needRecreate = conn.surfaceMTL->swapchain.layer == nil;

    if (needRecreate)
    {
        RenderingSurfaceParams params =
        {
            .msaaSampleCount        = UnityGetDesiredMSAASampleCount(1),
            .srgb                   = UnityGetSRGBRequested(),
            .wideColor              = 0,    // i am not sure how to handle wide color here (and if it is even supported for airplay)
            .hdr                    = 0,
            .metalFramebufferOnly   = UnityMetalFramebufferOnly(),
            .metalMemorylessDepth   = UnityMetalMemorylessDepth(),
            .disableDepthAndStencil = UnityDisableDepthAndStencilBuffers(),
        };

        [conn recreateSurface: params];
    }
}

#if !PLATFORM_TVOS
extern "C" int UnityDisplayManager_DisplayCount()
{
    return (int)[DisplayManager Instance].displayCount;
}

extern "C" bool UnityDisplayManager_DisplayAvailable(void* nativeDisplay)
{
#if !PLATFORM_VISIONOS
    if (nativeDisplay == NULL)
        return false;

    return [[DisplayManager Instance] displayAvailable: (__bridge UIScreen*)nativeDisplay];
#else
    return false;
#endif
}

extern "C" bool UnityDisplayManager_DisplayActive(void* nativeDisplay)
{
#if !PLATFORM_VISIONOS
    return UnityDisplayManager_DisplayAvailable(nativeDisplay);
#else
    return true;
#endif
}

extern "C" void UnityDisplayManager_DisplaySystemResolution(void* nativeDisplay, int* w, int* h)
{
#if !PLATFORM_VISIONOS
    if (nativeDisplay == NULL)
        return;

    DisplayConnection* conn = [DisplayManager Instance][(__bridge UIScreen*)nativeDisplay];
    if (conn.view == nil)
    {
        const CGSize screenSize = conn.screen.nativeBounds.size; const float scale = conn.screen.nativeScale;
        *w = (int)::roundf(screenSize.width * scale);
        *h = (int)::roundf(screenSize.height * scale);
    }
    else
    {
        const CGSize layerSize = conn.view.layer.bounds.size; const float scale = conn.view.contentScaleFactor;
        *w = (int)::roundf(layerSize.width * scale);
        *h = (int)::roundf(layerSize.height * scale);
    }
#endif
}

extern "C" int UnityDisplayManager_PrimaryDisplayIndex()
{
    return 0;
}

#endif

extern "C" void UnityActivateScreenForRendering(void* nativeDisplay)
{
    if (nativeDisplay == NULL)
        return;

#if !PLATFORM_VISIONOS
    DisplayConnection* conn = [DisplayManager Instance][(__bridge UIScreen*)nativeDisplay];
#else
    DisplayConnection* conn = [DisplayManager Instance].mainDisplay;
#endif

    EnsureDisplayIsInited(conn);
    [conn shouldShowWindow: YES];
}

#if !PLATFORM_VISIONOS
extern "C" float UnityScreenScaleFactor(UIScreen* screen)
{
    // NOTE: All views handled by Unity have their contentScaleFactor initialized
    // to value returned by this function.

    // we should query nativeScale if available to get the true device resolution
    // this way we avoid unnecessarily large frame buffers and downscaling.
    //   e.g. iPhone 6+ pretends to be a x3 device, while its physical screen is x2.6 something.

    // On AppleTV screen.nativeScale returns NaN when device is in sleep mode and starting from tvOS 10 (?) it returns 0.
    if (isnan(screen.nativeScale) || (screen.nativeScale == 0))
        return 1.0f;
    else
    {
        float scalingFactor = UnityCalculateScalingFactorFromTargetDPI(screen);
        if (scalingFactor > 0.0f)
            return scalingFactor;
        else
            return screen.nativeScale;
    }

    return screen.scale;
}

extern "C" uint32_t UnityMainScreenRefreshRate()
{
    return (uint32_t)[UIScreen mainScreen].maximumFramesPerSecond;
}

extern "C" void UnityDestroyUnityRenderSurfaces()
{
    [[DisplayManager Instance] enumerateDisplaysWithBlock:^(DisplayConnection* conn) {
        [conn destroySurface];
    }];
}

extern "C" void UnitySetBrightness(float brightness)
{
#if !PLATFORM_TVOS
    UIScreen.mainScreen.brightness = brightness;
#endif
}

extern "C" float UnityGetBrightness()
{
#if !PLATFORM_TVOS
    UIScreen* screen  = [UIScreen mainScreen];
    return screen.brightness;
#else
    return 1.0f;
#endif
}

extern "C" bool UnityIsFullscreen()
{
    CGSize screenSize = [[[[DisplayManager Instance] mainDisplay] screen] bounds].size;
    CGSize viewSize = [[[[DisplayManager Instance] mainDisplay] view] bounds].size;

    return screenSize.width == viewSize.width && screenSize.height == viewSize.height;
}
#else
extern "C" uint32_t UnityMainScreenRefreshRate()
{
    return 90;
}

extern "C" void UnityDestroyUnityRenderSurfaces()
{
    [[DisplayManager Instance].mainDisplay destroySurface];
}

extern "C" void UnitySetBrightness(float brightness)
{
}

extern "C" float UnityGetBrightness()
{
    return 1.0f;
}

extern "C" bool UnityIsFullscreen()
{
    return false;
}
#endif
