#import "UnityAppController.h"
#import "UnityAppController+Thermal.h"
#import "UnityAppController+ViewHandling.h"
#import "UnityAppController+Rendering.h"
#import "UnityTrampolineInterface.h"
#import "iPhone_Sensors.h"

#import <CoreGraphics/CoreGraphics.h>
#import <QuartzCore/QuartzCore.h>
#import <QuartzCore/CADisplayLink.h>
#import <Availability.h>
#import <AVFoundation/AVFoundation.h>
#import <GameController/GameController.h>

#include <mach/mach_time.h>

// MSAA_DEFAULT_SAMPLE_COUNT was removed
// kFPS define for removed: you can use Application.targetFrameRate (30 fps by default)
// DisplayLink is the only run loop mode now - all others were removed

#include "CrashReporter.h"

#include "UI/OrientationSupport.h"
#include "UI/UnityView.h"
#include "UI/Keyboard.h"
#include "UI/UnityViewControllerBase.h"
#include "Unity/DisplayManager.h"
#include "Unity/Logging.h"
#include "Unity/ObjCRuntime.h"
#include "PluginBase/AppDelegateListener.h"

#include <assert.h>
#include <stdbool.h>

#if PLATFORM_IOS || PLATFORM_VISIONOS
@interface UnityView (iOSScrollWheel)
- (void)teardownIndirectMouseInput;
@end
#endif

// we assume that app delegate is never changed and we can cache it, instead of re-query UIApplication every time
UnityAppController* _UnityAppController = nil;
UnityAppController* GetAppController()
{
    return _UnityAppController;
}

// we keep old bools around to support "old" code that might have used them
__attribute__((deprecated("Obsolete", "UnityAppController.engineLoadState")))
bool _unityEngineLoaded = false, _unityEngineInitialized = false, _renderingInited = false, _unityAppReady = false;

static UInt32 _iosMajorVersion = 0;
static UInt32 _iosMinorVersion = 0;

// was app "resigned active": some operations do not make sense while app is in background
bool _didResignActive = false;

@implementation UnityAppController
{
    UnityEngineLoadState _engineLoadState;
    BOOL _unityExplicitlyPaused;           // we pause/resume with the app, but Unity can also be paused for other reasons
    BOOL _sceneConfigured;
}

@synthesize unityView                   = _unityView;
@synthesize unityDisplayLink            = _displayLink;
@synthesize unityUsesMetalDisplayLink   = _usesMetalDisplayLink;

#if UNITY_USES_METAL_DISPLAY_LINK
    @synthesize unityMetalDisplayLink   = _metalDisplayLink;
#endif

@synthesize rootView                = _rootView;
@synthesize rootViewController      = _rootController;
@synthesize mainDisplay             = _mainDisplay;
@synthesize engineLoadState         = _engineLoadState;
@synthesize renderDelegate          = _renderDelegate;
@synthesize quitHandler             = _quitHandler;

#if UNITY_SUPPORT_ROTATION
@synthesize interfaceOrientation    = _curOrientation;
#endif

- (id)init
{
    if ((self = _UnityAppController = [super init]))
    {
        // due to clang issues with generating warning for overriding deprecated methods
        // we will simply assert if deprecated methods are present
        // NB: methods table is initied at load (before this call), so it is ok to check for override
        NSAssert(![self respondsToSelector: @selector(createUnityViewImpl)],
            @"createUnityViewImpl is deprecated and will not be called. Override createUnityView"
        );
        NSAssert(![self respondsToSelector: @selector(createViewHierarchyImpl)],
            @"createViewHierarchyImpl is deprecated and will not be called. Override willStartWithViewController"
        );
        NSAssert(![self respondsToSelector: @selector(createViewHierarchy)],
            @"createViewHierarchy is deprecated and will not be implemented. Use createUI"
        );
    }
    return self;
}

- (bool)didResignActive
{
    return _didResignActive;
}

- (void)setWindow:(id)object        {}
- (UIWindow*)window                 { return _window; }


- (void)shouldAttachRenderDelegate  {}
- (void)preStartUnity               {}

- (BOOL)shouldUseMetalDisplayLink
{
    // if we start in batchmode (command line argument), we expect to never render to "backbuffer"
    // metal display link does not make sense in this case
    if (UnityIsBatchmode())
        return NO;

    // if we start in nographics mode, all rendering is ignored
    // metal display link does not make sense in this case
    if (![_unityView.layer isKindOfClass: [CAMetalLayer class]])
        return NO;

    // check if we want metal display link (player settings)
    if (!UnityShouldUseMetalDisplayLink())
        return NO;

    // currently not supported on visionOS
    #if PLATFORM_VISIONOS
        return NO;
    #endif

    return YES;
}

- (void)startUnity
{
    NSAssert(self.engineLoadState < kUnityEngineLoadStateAppReady, @"[UnityAppController startUnity:] called after Unity has been initialized");

    const auto initResult = UnityInitApplicationGraphicsAndInputBegin();
    switch (initResult.state)
    {
        case kUnityInitApplicationGraphicsAndInputFailed:
            puts("Failed to initialize graphics");
            exit(1);
        case kUnityInitApplicationGraphicsAndInputCompleted:
            [self startUnityAfterInitGfxAndInput];
            break;
        case kUnityInitApplicationGraphicsAndInputWaitingForDebugger:
            [self showWaitForDebuggerDialogWithPort: initResult.debuggerPort];
            return;
        default:
            assert(false && "Unsupported init result");
            abort();
    }
}

- (void)startUnityAfterDebugger
{
    if (!UnityInitApplicationGraphicsAndInputFinish())
    {
        puts("Failed to initialize graphics");
        exit(1);
    }

    [self startUnityAfterInitGfxAndInput];
}

- (void)startUnityAfterInitGfxAndInput
{
#if !PLATFORM_VISIONOS
    // we make sure that first level gets correct display list and orientation
    [[DisplayManager Instance] prepareForFirstScene];
#endif

#if PLATFORM_VISIONOS && UNITY_HAS_VISIONOSSDK_2_0
    // https://developer.apple.com/documentation/visionos-release-notes/visionos-2-release-notes
    // Game controllers can be used to interact with system UI on visionOS.
    // Apps built with the visionOS 2 SDK that use the Game Controller
    // framework for input in one or more of their views must add an instance
    // of GCEventInteraction to those views (UIKit) or apply a
    // handlesGameControllerEvents(matching: .gamepad) modifier to those views (SwiftUI).
    GCEventInteraction* gamepadInteraction = [[GCEventInteraction alloc] init];
    gamepadInteraction.handledEventTypes = GCUIEventTypeGamepad;
    NSMutableArray* interactions = [NSMutableArray array];
    [interactions addObject:gamepadInteraction];
    [interactions addObjectsFromArray:_rootView.interactions];
    _rootView.interactions = interactions;
#endif

    UnityLoadFirstScene();

    [self createDisplayLink];
    [self showGameUI];

    UnitySetPlayerFocus(true);

    AVAudioSession* audioSession = [AVAudioSession sharedInstance];
    // If Unity audio is disabled, we set the category to ambient to make sure we don't mute other app's audio. We set the audio session
    // to active so we can get outputVolume callbacks. If Unity audio is enabled, FMOD should have already handled all of this AVAudioSession init.
    if (!UnityIsAudioManagerAvailableAndEnabled())
    {
        [audioSession setCategory: AVAudioSessionCategoryAmbient error: nil];
        [audioSession setActive: YES error: nil];
    }
    [audioSession addObserver: self forKeyPath: @"outputVolume" options: 0 context: nil];

    UnityUpdateMuteState([audioSession outputVolume] < 0.01f);

    [self subscribeToThermalChanges];
}

- (void)showWaitForDebuggerDialogWithPort: (unsigned)port
{
    UIViewController *vc = nil;
    // Some VisionOS modes use delegate without selector for window
    if ([UIApplication.sharedApplication.delegate respondsToSelector:@selector(window)])
        vc = UIApplication.sharedApplication.delegate.window.rootViewController;

    // Fallback in case we don't have view controller available
    if (vc == nil)
    {
        NSLog(@"************************************\n* WAITING 30s FOR MANAGED DEBUGGER *\nDebugger is using port %u\n************************************", port);
        [self performSelector:@selector(startUnityAfterDebugger) withObject:nil afterDelay:30];
        return;
    }

    auto msg = [NSString stringWithFormat:@"You can attach a managed debugger now if you want. Debugger is using port: %u", port];
    auto alert = [UIAlertController alertControllerWithTitle:@"Debug"
        message:msg preferredStyle:UIAlertControllerStyleAlert];
    auto ok = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
        handler:^(UIAlertAction* _Nonnull action) { [self startUnityAfterDebugger]; }];

    [alert addAction:ok];

    [vc presentViewController:alert animated:NO completion:nil];
}

extern "C" void UnityEngineDidQuit(UnityEngineQuitLevel level)
{
    switch (level)
    {
        case kUnityEngineUnload:
            [GetAppController() downgradeEngineLoadState: kUnityEngineLoadStateRenderingInitialized];
            [NSNotificationCenter.defaultCenter postNotificationName: kUnityDidUnload object: nil];
            break;
        case kUnityEngineAppQuit:
            [GetAppController() downgradeEngineLoadState: kUnityEngineLoadStateNotStarted];
            [NSNotificationCenter.defaultCenter postNotificationName: kUnityDidQuit object: nil];
            _didResignActive = true;
            if (GetAppController().quitHandler)
                GetAppController().quitHandler();
            else
                exit(0);
            break;
    }
}

extern void SensorsCleanup();
extern "C" void UnityCleanupTrampoline()
{
    // Prevent multiple cleanups
    if (_UnityAppController == nil)
        return;

    // Unity view and viewController will not necessary be destroyed right after this function execution.
    // We need to ensure that these objects will not receive any callbacks from system during that time.
    _UnityAppController.window.rootViewController = nil;
#if PLATFORM_IOS || PLATFORM_VISIONOS
    // Stop GCMouse callbacks before detaching: the view can outlive cleanup in UaaL.
    [_UnityAppController.unityView teardownIndirectMouseInput];
#endif
    [_UnityAppController.unityView removeFromSuperview];

    [KeyboardDelegate Destroy];

    SensorsCleanup();

#if !PLATFORM_VISIONOS
    [DisplayManager Destroy];
#endif

    // there are two ways we can end up here:
    // 1. normal shutdown sequence: let's be fair, in this case ios will just (cleanly) kills everything so we don't care that much
    // 2. unity unload (UaaL): in this case, run loop continues to exist.
    //      Alas on some device/ios-versions, if we invalidate/destroy (metal) display link here, it gets a crash later on
    //      referencing null pointer in displaylink dispatcher
    // so we take the safest route: we just pause display link here. Note that we *never* run unity again after this point
    [_UnityAppController pauseDisplayLink];
    _UnityAppController = nil;
}

#if UNITY_SUPPORT_ROTATION

- (NSUInteger)application:(UIApplication*)application supportedInterfaceOrientationsForWindow:(UIWindow*)window
{
    // No rootViewController is set because we are switching from one view controller to another, all orientations should be enabled
    if ([window rootViewController] == nil)
        return UIInterfaceOrientationMaskAll;

    // During splash screen show phase no forced orientations should be allowed.
    // This will prevent unwanted rotation while splash screen is on and application is not yet ready to present (Ex. Fogbugz cases: 1190428, 1269547).
    if (self.engineLoadState < kUnityEngineLoadStateAppReady)
        return [_rootController supportedInterfaceOrientations];

    // Returning orientations from view controller because they might have changed dynamically
    return [[window rootViewController] supportedInterfaceOrientations];
}

#endif

#if UNITY_USES_REMOTE_NOTIFICATIONS

- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken
{
    AppController_SendNotificationWithArg(kUnityDidRegisterForRemoteNotificationsWithDeviceToken, deviceToken);
}

#if !PLATFORM_TVOS
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))handler
{
    AppController_SendNotificationWithArg(kUnityDidReceiveRemoteNotification, userInfo);

    if (handler)
    {
        handler(UIBackgroundFetchResultNoData);
    }
}

#endif

- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error
{
    AppController_SendNotificationWithArg(kUnityDidFailToRegisterForRemoteNotificationsWithError, error);

    // alas people do not check remote notification error through api (which is clunky, i agree) so log here to have at least some visibility
    ::printf("\nFailed to register for remote notifications:\n%s\n\n", [[error localizedDescription] UTF8String]);
}

#endif

// UIApplicationOpenURLOptionsKey was added only in ios10 sdk, while we still support ios9 sdk
- (BOOL)application:(UIApplication*)app openURL:(NSURL*)url options:(NSDictionary<NSString*, id>*)options
{
    id sourceApplication = options[UIApplicationOpenURLOptionsSourceApplicationKey], annotation = options[UIApplicationOpenURLOptionsAnnotationKey];

    NSMutableDictionary<NSString*, id>* notifData = [NSMutableDictionary dictionaryWithCapacity: 3];
    if (url)
    {
        notifData[@"url"] = url;
        [self initUnityApplicationNoGraphics];
        UnitySetAbsoluteURL(url.absoluteString.UTF8String);
    }
    if (sourceApplication) notifData[@"sourceApplication"] = sourceApplication;
    if (annotation) notifData[@"annotation"] = annotation;

    AppController_SendNotificationWithArg(kUnityOnOpenURL, notifData);
    return YES;
}

- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray<id<UIUserActivityRestoring> > * _Nullable restorableObjects))restorationHandler
{
    NSURL* url = userActivity.webpageURL;
    if (url)
    {
        [self initUnityApplicationNoGraphics];
        UnitySetAbsoluteURL(url.absoluteString.UTF8String);
    }
    return YES;
}

- (BOOL)application:(UIApplication*)application willFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    AppController_SendNotificationWithArg(kUnityWillFinishLaunchingWithOptions, launchOptions);
    NSURL* url = [self extractURLFromLaunchOptions: launchOptions];
    if (url != nil)
    {
        [self initUnityApplicationNoGraphics];
        UnitySetAbsoluteURL(url.absoluteString.UTF8String);
    }
    return YES;
}

// Helper method to extract URL from launch options
- (NSURL*)extractURLFromLaunchOptions:(NSDictionary*)launchOptions
{
    // Check for the direct launch URL
    NSURL* url = launchOptions[UIApplicationLaunchOptionsURLKey];
    if (url != nil)
    {
        return url;
    }

    // Check for the user activity dictionary and URL from user activity
    NSUserActivity* userActivity = launchOptions[UIApplicationLaunchOptionsUserActivityDictionaryKey][@"UIApplicationLaunchOptionsUserActivityKey"];
    if (userActivity != nil && [userActivity.activityType isEqualToString: NSUserActivityTypeBrowsingWeb])
    {
        url = userActivity.webpageURL;
        if (url != nil)
        {
            return url;
        }
    }

    return nil;
}

- (UIWindowScene*)pickStartupWindowScene:(NSSet<UIScene*>*)scenes
{
    // if we have scene with UISceneActivationStateForegroundActive - pick it
    // otherwise UISceneActivationStateForegroundInactive will work
    //   it will be the scene going into active state
    // if there were no active/inactive scenes (only background) we should allow background scene
    //   this might happen in some cases with native plugins doing "things"
    UIWindowScene *foregroundScene = nil, *backgroundScene = nil;
    for (UIScene* scene in scenes)
    {
        if (![scene isKindOfClass: [UIWindowScene class]])
            continue;
        UIWindowScene* windowScene = (UIWindowScene*)scene;

        if (scene.activationState == UISceneActivationStateForegroundActive)
            return windowScene;
        if (scene.activationState == UISceneActivationStateForegroundInactive)
            foregroundScene = windowScene;
        else if (scene.activationState == UISceneActivationStateBackground)
            backgroundScene = windowScene;
    }

    return foregroundScene ? foregroundScene : backgroundScene;
}

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    ::printf("-> applicationDidFinishLaunching()\n");
    [self sceneValidation];

    // make sure orientation notifications are sent
#if !PLATFORM_TVOS && !PLATFORM_VISIONOS
    if ([UIDevice currentDevice].generatesDeviceOrientationNotifications == NO)
        [[UIDevice currentDevice] beginGeneratingDeviceOrientationNotifications];
#endif

    return YES;
}

- (void)initUnityApplicationNoGraphics
{
    if ([self advanceEngineLoadState: kUnityEngineLoadStateMinimal])
        UnityInitApplicationNoGraphics(UnityDataBundleDir());
}

- (void)initUnityWithScene:(UIWindowScene*)scene
{
    if (self.engineLoadState >= kUnityEngineLoadStateCoreInitialized)
        return;
    // basic unity init
    [self initUnityApplicationNoGraphics];
    // initUnityApplicationNoGraphics progresses the state & does initialization if necessary
    // so the next state bump has to be after it to not skip the init part
    [self advanceEngineLoadState: kUnityEngineLoadStateCoreInitialized];

    // we want to initialize DisplayManager first, since unity view might need it on creation
    [DisplayManager Initialize];

    // init main window
    if (scene == nil)
        _window = [[UIWindow alloc] init];
    else
        _window = [[UIWindow alloc] initWithWindowScene: scene];

    // init unity view
    [self selectRenderingAPI];
    [UnityRenderingView InitializeForAPI: self.renderingAPI];
    _unityView = [self createUnityView];

    if ([_unityView.layer isKindOfClass: [CAMetalLayer class]])
        UnityActivateMainDisplaySwapchain((__bridge void*)_unityView.layer);

    // connect main display with window and unity view
    _mainDisplay = [DisplayManager Instance].mainDisplay;
    [_mainDisplay createWithWindow: _window andView: _unityView];

    // create UI hierarchy, and proceed with unity graphics init
    [self createUI];
    [self preStartUnity];

    // if you wont use keyboard you may comment it out at save some memory
    [KeyboardDelegate Initialize];

#if UNITY_DEVELOPER_BUILD
    // Causes a black screen after splash screen, but would deadlock if waiting for manged debugger otherwise
    [self performSelector: @selector(startUnity) withObject: nil afterDelay: 0];
#else
    [self startUnity];
#endif
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSKeyValueChangeKey, id> *)change context:(void *)context
{
    if ([keyPath isEqual: @"outputVolume"])
    {
        UnityUpdateMuteState([[AVAudioSession sharedInstance] outputVolume] < 0.01f);
    }
}

- (void)applicationDidEnterBackground:(UIApplication*)application
{
    ::printf("-> applicationDidEnterBackground()\n");

    [self pauseDisplayLink];
    UnityCancelTouches();

#if PLATFORM_VISIONOS
    if (UnityIsFocused())
        UnitySetPlayerFocus(true);

    if (!UnityShouldRunInBackground() && !UnityIsPaused())
        UnitySetPlayerPause(kUnityPauseModePause);
#endif
}

- (void)applicationWillEnterForeground:(UIApplication*)application
{
    ::printf("-> applicationWillEnterForeground()\n");

    [self unpauseDisplayLink];

    // applicationWillEnterForeground: might sometimes arrive *before* actually initing unity (e.g. locking on startup)
    if (self.engineLoadState >= kUnityEngineLoadStateAppReady)
    {
#if PLATFORM_VISIONOS
        if (!UnityIsFocused())
            UnitySetPlayerFocus(true);

        if (UnityIsPaused() && _unityExplicitlyPaused == false)
            UnitySetPlayerPause(kUnityPauseModeResume);
#endif

        // if we were showing video before going to background - the view size may be changed while we are in background
        [GetAppController().unityView recreateRenderingSurfaceIfNeeded];
    }

}

- (void)applicationDidBecomeActive:(UIApplication*)application
{
    ::printf("-> applicationDidBecomeActive()\n");

    [self removeSnapshotViewController];

    if (self.engineLoadState >= kUnityEngineLoadStateAppReady)
    {
        // Pause/unpause is handled by repaint if CompositorLayer is in use
        if (self.usingCompositorLayer == NO && UnityIsPaused() && _unityExplicitlyPaused == NO)
            UnitySetPlayerPause(kUnityPauseModeResume, kPauseFlagSetEngineRunState|kPauseFlagSchedulePauseMessage);
        if (_unityExplicitlyPaused)
        {
            if (UnityIsFullScreenPlaying())
                TryResumeFullScreenVideo();
        }
        // need to do this with delay because FMOD restarts audio in AVAudioSessionInterruptionNotification handler
        [self performSelector: @selector(updateUnityAudioOutput) withObject: nil afterDelay: 0.1];

        // In case we got to applicationWillEnterForeground before Unity was initialized (or any other edge case)
        if (!UnityIsFocused())
            UnitySetPlayerFocus(true);
    }
    else
    {
        UIWindowScene *scene = [self pickStartupWindowScene:application.connectedScenes];
        [self initUnityWithScene: scene];
    }

    _didResignActive = false;
}

- (UISceneConfiguration *)application:(UIApplication *)application
configurationForConnectingSceneSession:(UISceneSession *)connectingSceneSession
options:(UISceneConnectionOptions *)options
{
#if UNITY_DEVELOPER_BUILD
    [[NSUserDefaults standardUserDefaults] setBool:NO forKey:@"Unity_LastLaunchSwiftUI"];
#endif
    _sceneConfigured = YES;
    return [[UISceneConfiguration alloc] initWithName:@"Default Configuration" sessionRole:connectingSceneSession.role];
}

- (void)updateUnityAudioOutput
{
    UnityUpdateMuteState([[AVAudioSession sharedInstance] outputVolume] < 0.01f);
}

- (void)addSnapshotViewController
{
    if (!_didResignActive || self->_snapshotViewController)
    {
        return;
    }

    UIView* snapshotView = [self createSnapshotView];

    if (snapshotView != nil)
    {
        UIViewController* snapshotViewController = [AllocUnityViewController() init];
        snapshotViewController.modalPresentationStyle = UIModalPresentationFullScreen;
        snapshotViewController.view = snapshotView;

        [self->_rootController presentViewController: snapshotViewController animated: false completion: nil];
        self->_snapshotViewController = snapshotViewController;
    }
}

- (void)sceneValidation
{
#if UNITY_DEVELOPER_BUILD
    if (![[NSUserDefaults standardUserDefaults] boolForKey:@"Unity_LastLaunchSwiftUI"])
        return;

    // If no scene was configured, we are in unrecoverable state.
    // This can happen when launching UIKit app when the app was launched as a SwiftUI app before and not terminated completely.
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if (!self->_sceneConfigured) {
            NSLog(@"Scene was not configured. The app must be terminated from the app switcher and restarted.");
            abort();
        }

    });

#endif
}

- (void)removeSnapshotViewController
{
    // do this on the main queue async so that if we try to create one
    // and remove in the same frame, this always happens after in the same queue
    dispatch_async(dispatch_get_main_queue(), ^{
        if (self->_snapshotViewController)
        {
            // we've got a view on top of the snapshot view (3rd party plugin/social media login etc).
            if (self->_snapshotViewController.presentedViewController)
            {
                [self performSelector: @selector(removeSnapshotViewController) withObject: nil afterDelay: 0.05];
                return;
            }

            [self->_snapshotViewController dismissViewControllerAnimated: NO completion: nil];
            self->_snapshotViewController = nil;

            // Make sure that the keyboard input field regains focus after the application becomes active.
            [[KeyboardDelegate Instance] becomeFirstResponder];
        }
    });
}

- (void)applicationWillResignActive:(UIApplication*)application
{
    ::printf("-> applicationWillResignActive()\n");

    if (self.engineLoadState >= kUnityEngineLoadStateAppReady)
    {
        // This should be covered by applicationDidEnterBackground but double-check just in case we missed it
         if (UnityIsFocused())
            UnitySetPlayerFocus(false);

        // signal unity that the frame rendering have ended
        // as we will not get the callback from the display link current frame
        UnityDisplayLinkCallback(0);

        _unityExplicitlyPaused = UnityIsPaused();
        // Pause/unpause is handled by repaint if CompositorLayer is in use
        if (self.usingCompositorLayer == NO && _unityExplicitlyPaused == NO)
        {
            // Pause Unity only if we don't need special background processing
            // otherwise batched player loop can be called to run user scripts.
            if (!UnityGetUseCustomAppBackgroundBehavior())
            {
                uint32_t pauseFlags = kPauseFlagSetEngineRunState|kPauseFlagSendPauseMessage;
#if UNITY_SNAPSHOT_VIEW_ON_APPLICATION_PAUSE
                // we cannot repaint without drawable given to us by CAMetalDisplayLink
                // TODO: there should be a way to handle this somehow
                if(!self.unityUsesMetalDisplayLink)
                {
                    // Force player to do one more frame, so scripts get a chance to render custom screen for minimized app in task manager.
                    // NB: UnityWillPause will schedule OnApplicationPause message, which will be sent normally inside repaint (unity player loop)
                    // NB: We will actually pause after the loop (when calling UnitySetPlayerPause).
                    UnitySetPlayerPause(kUnityPauseModePause, kPauseFlagSchedulePauseMessage);
                    pauseFlags = kPauseFlagSetEngineRunState;
                    [self repaint];
                    [self addSnapshotViewController];
                }
#endif

#if PLATFORM_VISIONOS
                if (!UnityShouldRunInBackground())
                    UnitySetPlayerPause(kUnityPauseModePause, pauseFlags);
#else
                UnitySetPlayerPause(kUnityPauseModePause, pauseFlags);
#endif                
            }
        }
    }

    _didResignActive = true;
}

- (void)applicationDidReceiveMemoryWarning:(UIApplication*)application
{
    UnityLowMemory();
}

- (void)applicationWillTerminate:(UIApplication*)application
{
    ::printf("-> applicationWillTerminate()\n");

    // Only clean up if Unity has finished initializing, else the clean up process will crash,
    // this happens if the app is force closed immediately after opening it.
    if (self.engineLoadState >= kUnityEngineLoadStateAppReady)
    {
        // make sure that we are in a "unity cannot be touched" state
        // if there was some complex UI shown when terminating, we can get extra UI calls from iOS after applicationWillTerminate:
        // and we want to make sure we never do anything touching unity runtime at this point
        _engineLoadState = kUnityEngineLoadStateMinimal;

        // keep "old" way of tracking state synced
        _unityAppReady = _renderingInited = _unityEngineInitialized = false;

        _didResignActive = true;

        UnityCleanup();
        UnityCleanupTrampoline();
    }

    CleanupCrashHandling();
}

- (void)application:(UIApplication*)application handleEventsForBackgroundURLSession:(nonnull NSString *)identifier completionHandler:(nonnull void (^)())completionHandler
{
    NSDictionary* arg = @{identifier: completionHandler};
    AppController_SendNotificationWithArg(kUnityHandleEventsForBackgroundURLSession, arg);
}

// advance the load state to newState, if it's not there or higher yet
// returns YES if state was less than newState
// returns NO if previous state was already the requested one or even higher than that
- (BOOL)advanceEngineLoadState:(UnityEngineLoadState)newState
{
    if (_engineLoadState >= newState)
        return NO;
    _engineLoadState = newState;

    // Old individual variables; fall-through because higher level also has to set all lower ones
    switch (_engineLoadState)
    {
        case kUnityEngineLoadStateAppReady:
            _unityAppReady = true;
        case kUnityEngineLoadStateRenderingInitialized:
            _renderingInited = true;
        case kUnityEngineLoadStateCoreInitialized:
            _unityEngineInitialized = true;
        case kUnityEngineLoadStateMinimal:
            _unityEngineLoaded = true;
        case kUnityEngineLoadStateNotStarted:
            break;
    }

    return YES;
}

// the opposite of advanceEngineLoadState:
- (BOOL)downgradeEngineLoadState:(UnityEngineLoadState)newState
{
    if (newState >= _engineLoadState)
        return NO;
    _engineLoadState = newState;

    switch (_engineLoadState)
    {
        case kUnityEngineLoadStateNotStarted:
            _unityEngineLoaded = false;
        case kUnityEngineLoadStateMinimal:
            _unityEngineInitialized = false;
        case kUnityEngineLoadStateCoreInitialized:
            _renderingInited = false;
        case kUnityEngineLoadStateRenderingInitialized:
            _unityAppReady = false;
        case kUnityEngineLoadStateAppReady:
            break;
    }

    return YES;
}

@end


void AppController_SendNotification(NSString* name)
{
    [[NSNotificationCenter defaultCenter] postNotificationName: name object: GetAppController()];
}

void AppController_SendNotificationWithArg(NSString* name, id arg)
{
    [[NSNotificationCenter defaultCenter] postNotificationName: name object: GetAppController() userInfo: arg];
}

void AppController_SendUnityViewControllerNotification(NSString* name)
{
    [[NSNotificationCenter defaultCenter] postNotificationName: name object: UnityGetGLViewController()];
}

extern "C" UIWindow*            UnityGetMainWindow()        { return GetAppController().mainDisplay.window; }
extern "C" UIViewController*    UnityGetGLViewController()  { return GetAppController().rootViewController; }
extern "C" UnityView*           UnityGetUnityView()         { return GetAppController().unityView; }
extern "C" UIView*              UnityGetGLView()            { return UnityGetUnityView(); }


extern "C" ScreenOrientation    UnityCurrentOrientation()   { return GetAppController().unityView.contentOrientation; }


static void AddNewAPIImplIfNeeded();

void UnityInitTrampoline()
{
    InitCrashHandling();

    NSString* version = [[UIDevice currentDevice] systemVersion];
    const char* versionStr = version.UTF8String;
    char* dot = NULL;
    UInt32 major = (UInt32)std::strtoul(versionStr, &dot, 10);
    UInt32 minor = 0;
    if (major > 0 && *dot == '.')
        minor = (UInt32)std::strtoul(++dot, NULL, 10);
    _iosMajorVersion = major;
    _iosMinorVersion = minor;

    AddNewAPIImplIfNeeded();
    UnitySetupDefaultLogHandler();
}

extern "C" bool UnityiOS81orNewer() { return true; }
extern "C" bool UnityiOS82orNewer() { return true; }
extern "C" bool UnityiOS90orNewer() { return true; }
extern "C" bool UnityiOS91orNewer() { return true; }
extern "C" bool UnityiOS100orNewer() { return true; }
extern "C" bool UnityiOS101orNewer() { return true; }
extern "C" bool UnityiOS102orNewer() { return true; }
extern "C" bool UnityiOS103orNewer() { return true; }
extern "C" bool UnityiOS110orNewer() { return true; }
extern "C" bool UnityiOS111orNewer() { return true; }
extern "C" bool UnityiOS112orNewer() { return true; }
extern "C" bool UnityiOS130orNewer() { return true; }
extern "C" bool UnityiOS140orNewer() { return true; }
extern "C" bool UnityiOS150orNewer() { return true; }
extern "C" bool UnityiOS160orNewer() { return UnityiOSVersionIsAtLeast(16, 0); }
extern "C" bool UnityiOSVersionIsAtLeast(uint32_t major, uint32_t minor)
{
    if (major < _iosMajorVersion)
        return true;
    if (major > _iosMajorVersion)
        return false;
    return minor <= _iosMinorVersion;
}

extern "C" UIView* UnityGetRenderingView(void)
{
    return GetAppController().unityView;
}

// sometimes apple adds new api with obvious fallback on older ios.
// in that case we simply add these functions ourselves to simplify code
static void AddNewAPIImplIfNeeded()
{
#if !PLATFORM_VISIONOS
    if (![[UIScreen class] instancesRespondToSelector: @selector(maximumFramesPerSecond)])
    {
        IMP UIScreen_MaximumFramesPerSecond_IMP = imp_implementationWithBlock(^NSInteger(id _self) {
            return 60;
        });
        class_replaceMethod([UIScreen class], @selector(maximumFramesPerSecond), UIScreen_MaximumFramesPerSecond_IMP, UIScreen_maximumFramesPerSecond_Enc);
    }

    if (![[UIView class] instancesRespondToSelector: @selector(safeAreaInsets)])
    {
        IMP UIView_SafeAreaInsets_IMP = imp_implementationWithBlock(^UIEdgeInsets(id _self) {
            return UIEdgeInsetsZero;
        });
        class_replaceMethod([UIView class], @selector(safeAreaInsets), UIView_SafeAreaInsets_IMP, UIView_safeAreaInsets_Enc);
    }
#endif
}
