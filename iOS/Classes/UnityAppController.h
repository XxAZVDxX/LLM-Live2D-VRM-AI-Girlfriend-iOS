#pragma once

#import <QuartzCore/CADisplayLink.h>

// we want to use CAMetalDisplayLink if it is available
// if CADisplayLink is always preferred, this can be changed to #define UNITY_USES_METAL_DISPLAY_LINK 0
// further, shouldUseMetalDisplayLink method can be overriden/tweaked to disable metal display link at runtime
//   e.g. you might want to use old display link on slower devices where stable frametime cannot be guaranteed
#define UNITY_USES_METAL_DISPLAY_LINK (UNITY_HAS_IOSSDK_17_0 || UNITY_HAS_TVOSSDK_17_0)
#if UNITY_USES_METAL_DISPLAY_LINK
    #import <QuartzCore/CAMetalDisplayLink.h>
#endif

#import <UnityFramework/RenderPluginDelegate.h>

@class UnityView;
@class UnityViewControllerBase;
@class DisplayConnection;

typedef enum
{
    kUnityEngineLoadStateNotStarted = 0,
    // Minimal initialization done, allowing limited API use, such as reporting URL app was launched with
    kUnityEngineLoadStateMinimal = 1,
    // Core of Unity engine is loaded, but no graphics or first scene yet
    kUnityEngineLoadStateCoreInitialized = 2,
    // Rendering was initialized, nothing related to rendering should be touched before this state
    kUnityEngineLoadStateRenderingInitialized = 3,
    // Unity is fully initialized, it's not safe to call Unity APIs before this state
    kUnityEngineLoadStateAppReady = 4,
} UnityEngineLoadState;

__attribute__ ((visibility("default")))
@interface UnityAppController : NSObject<UIApplicationDelegate>
{
    UnityView*          _unityView;
    CADisplayLink*      _displayLink;
#if UNITY_USES_METAL_DISPLAY_LINK
    CAMetalDisplayLink* _metalDisplayLink API_AVAILABLE(ios(17.0), tvos(17.0));
#endif
    // since we can have CAMetalDisplayLink not available both at runtime (old ios) and at compile time (old xcode)
    //   and we can have it disabled completely (not all applications need it)
    // the code supporting both CAMetalDisplayLink and CADisplayLink can easily become very convoluted
    // hence we add a boolean to check CAMetalDisplayLink usage without checks for @available and preprocessor ifdefs
    BOOL                _usesMetalDisplayLink;

    UIWindow*           _window;
    UIView*             _rootView;
    UIViewController*   _rootController;
    UIViewController*   _snapshotViewController;

    DisplayConnection*  _mainDisplay;

    // CODE ARCHEOLOGY: we were caching view controllers, both autorotation one and per-fixed-orientation ones
    // CODE ARCHEOLOGY: we stopped doing this as the performance impact is negligible,
    // CODE ARCHEOLOGY: yet it introduces corner cases and in general lots of code

#if UNITY_SUPPORT_ROTATION
    UIInterfaceOrientation  _curOrientation;
#endif

    id<RenderPluginDelegate>    _renderDelegate;
}

// override it to add your render plugin delegate
- (void)shouldAttachRenderDelegate;

// this one is called at the very end of didFinishLaunchingWithOptions:
// after views have been created but before initing engine itself
// override it to register plugins, tweak UI etc
- (void)preStartUnity;

- (void)initUnityApplicationNoGraphics;

// this one is called at at the very end of didFinishLaunchingWithOptions:
// it will start showing unity view and rendering unity content
- (void)initUnityWithScene:(UIWindowScene*)scene;

// this one is called at at the very end of didFinishLaunchingWithOptions:
// it will start showing unity view and rendering unity content
- (void)startUnity;

// override it if you want to have custom logic for the decision to use CAMetalDisplayLink or not
// in any case, CAMetalDisplayLink will be used only if actually supported by the device
// this will be called once on startup, before any rendering but after initializing unity
- (BOOL)shouldUseMetalDisplayLink;

- (BOOL)advanceEngineLoadState:(UnityEngineLoadState)newState;
- (BOOL)downgradeEngineLoadState:(UnityEngineLoadState)newState;

// this is a part of UIApplicationDelegate protocol starting with ios5
// setter will be generated empty
@property (retain, nonatomic) UIWindow* window;

@property (readonly, copy, nonatomic) UnityView*            unityView;
@property (readonly, copy, nonatomic) CADisplayLink*        unityDisplayLink;
@property (readonly, nonatomic) BOOL                        unityUsesMetalDisplayLink;

#if UNITY_USES_METAL_DISPLAY_LINK
@property (readonly, copy, nonatomic) CAMetalDisplayLink*   unityMetalDisplayLink API_AVAILABLE(ios(17.0), tvos(17.0));
#endif

@property (readonly, copy, nonatomic) UIView*               rootView;
@property (readonly, copy, nonatomic) UIViewController*     rootViewController;
@property (readonly, copy, nonatomic) DisplayConnection*    mainDisplay;

#if UNITY_SUPPORT_ROTATION
@property (readonly, nonatomic) UIInterfaceOrientation      interfaceOrientation;
#endif

@property (readonly) UnityEngineLoadState                   engineLoadState;
@property (readonly) bool                                   didResignActive;
@property (nonatomic, retain) id                            renderDelegate;
@property (nonatomic, copy)                                 void (^quitHandler)(void);

@end

// accessing app controller
#ifdef __cplusplus
extern "C" {
#endif

extern UnityAppController* _UnityAppController;
extern UnityAppController* GetAppController(void);

#ifdef __cplusplus
} // extern "C"
#endif

// Put this into mm file with your subclass implementation
// pass subclass name to define

#define IMPL_APP_CONTROLLER_SUBCLASS(ClassName) \
@interface ClassName(OverrideAppDelegate)       \
{                                               \
}                                               \
+(void)load;                                    \
@end                                            \
@implementation ClassName(OverrideAppDelegate)  \
+(void)load                                     \
{                                               \
    extern const char* AppControllerClassName;  \
    AppControllerClassName = #ClassName;        \
}                                               \
@end                                            \


// plugins

#define APP_CONTROLLER_RENDER_PLUGIN_METHOD(method)                         \
do {                                                                        \
    id<RenderPluginDelegate> delegate = GetAppController().renderDelegate;  \
    if([delegate respondsToSelector:@selector(method)])                     \
        [delegate method];                                                  \
} while(0)

#define APP_CONTROLLER_RENDER_PLUGIN_METHOD_ARG(method, arg)                \
do {                                                                        \
    id<RenderPluginDelegate> delegate = GetAppController().renderDelegate;  \
    if([delegate respondsToSelector:@selector(method:)])                    \
        [delegate method:arg];                                              \
} while(0)


// these are simple wrappers about ios api, added for convenience
void AppController_SendNotification(NSString* name);
void AppController_SendNotificationWithArg(NSString* name, id arg);

void AppController_SendUnityViewControllerNotification(NSString* name);

// in the case when apple adds new api that has easy fallback path for old ios
// we will add new api methods at runtime on older ios, so we can switch to new api universally
// in that case we still need actual declaration: we will do it here as it is the most convenient place

// history:
// [CADisplayLink preferredFramesPerSecond], [UIScreen maximumFramesPerSecond], [UIView safeAreaInsets]
//   were removed after we started to enforce xcode9 (sdk 11)
