#import "UnityScene.h"
#import "UnityViewControllerBase.h"
#include "UnityAppController.h"
#include "UnityInternalInterface.h"
#import "PluginBase/AppDelegateListener.h"

@implementation UnityScene {
    UIOpenURLContext *_pendingURLContext;
    NSUserActivity *_pendingUserActivity;
}

- (void)sceneDidBecomeActive:(UIScene *)scene {
    ::printf("-> sceneDidBecomeActive()\n");
    auto appController = GetAppController();
    if ([appController respondsToSelector:@selector(applicationDidBecomeActive:)])
    {
        [appController applicationDidBecomeActive:UIApplication.sharedApplication];
    }
}

- (void)sceneWillResignActive:(UIScene *)scene {
    ::printf("-> sceneWillResignActive()\n");
    auto appController = GetAppController();
    if ([appController respondsToSelector:@selector(applicationWillResignActive:)])
    {
        [appController applicationWillResignActive:UIApplication.sharedApplication];
    }
}

- (void)sceneWillEnterForeground:(UIScene *)scene {
    ::printf("-> sceneWillEnterForeground()\n");
    auto appController = GetAppController();
    UIWindowScene *windowScene = (UIWindowScene *)scene;
    [appController initUnityWithScene: windowScene];

    if (_pendingURLContext != nil)
        [self applyURL: _pendingURLContext.URL sourceApplication: _pendingURLContext.options.sourceApplication annotation: _pendingURLContext.options.annotation];
    else if (_pendingUserActivity != nil)
        [self applyURL: _pendingUserActivity.webpageURL sourceApplication: nil annotation: nil];

    _pendingURLContext = nil;
    _pendingUserActivity = nil;

    if ([appController respondsToSelector:@selector(applicationWillEnterForeground:)])
    {
        [appController applicationWillEnterForeground:UIApplication.sharedApplication];
    }
}

- (void)sceneDidEnterBackground:(UIScene *)scene {
    ::printf("-> sceneDidEnterBackground()\n");
    auto appController = GetAppController();
    if ([appController respondsToSelector:@selector(applicationDidEnterBackground:)])
    {
        [appController applicationDidEnterBackground:UIApplication.sharedApplication];
    }
}

- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)URLContexts {
    UIOpenURLContext *ctx = [self firstValidContextFromContexts: URLContexts];
    if (ctx != nil)
        [self applyURL: ctx.URL sourceApplication: ctx.options.sourceApplication annotation: ctx.options.annotation];
}

- (void)scene:(UIScene *)scene willConnectToSession:(UISceneSession *)session options:(UISceneConnectionOptions *)connectionOptions {
    _pendingURLContext = [self firstValidContextFromContexts: connectionOptions.URLContexts];
    _pendingUserActivity = [self firstBrowsingActivityFromActivities: connectionOptions.userActivities];

    // Set the URL immediately so Application.absoluteURL is available during first-scene Awake().
    // Requires minimal engine init first (UnitySetAbsoluteURL accesses PlayerSettings).
    // The kUnityOnOpenURL notification is deferred to sceneWillEnterForeground (after full init) for listeners/plugins.
    NSURL *url = [self pendingURL];
    if (url != nil)
    {
        [GetAppController() initUnityApplicationNoGraphics];
        UnitySetAbsoluteURL(url.absoluteString.UTF8String);
    }
}

- (void)scene:(UIScene *)scene continueUserActivity:(NSUserActivity *)userActivity {
    if (userActivity != nil)
        [self applyURL: userActivity.webpageURL sourceApplication: nil annotation: nil];
}

- (UIOpenURLContext *)firstValidContextFromContexts:(NSSet<UIOpenURLContext *> *)contexts {
    for (UIOpenURLContext *ctx in contexts)
    {
        if (ctx.URL != nil && ctx.URL.absoluteString != nil)
            return ctx;
    }
    return nil;
}

- (NSURL *)pendingURL {
    if (_pendingURLContext != nil)
        return _pendingURLContext.URL;
    if (_pendingUserActivity != nil)
        return _pendingUserActivity.webpageURL;
    return nil;
}

- (NSUserActivity *)firstBrowsingActivityFromActivities:(NSSet<NSUserActivity *> *)activities {
    for (NSUserActivity *activity in activities)
    {
        if ([activity.activityType isEqualToString: NSUserActivityTypeBrowsingWeb] && activity.webpageURL != nil && activity.webpageURL.absoluteString != nil)
            return activity;
    }
    return nil;
}

- (void)applyURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    if (url == nil || url.absoluteString == nil)
        return;

    [GetAppController() initUnityApplicationNoGraphics];
    UnitySetAbsoluteURL(url.absoluteString.UTF8String);

    NSMutableDictionary<NSString*, id>* notifData = [NSMutableDictionary dictionaryWithCapacity: 3];
    notifData[@"url"] = url;
    if (sourceApplication != nil)
        notifData[@"sourceApplication"] = sourceApplication;
    if (annotation != nil)
        notifData[@"annotation"] = annotation;

    AppController_SendNotificationWithArg(kUnityOnOpenURL, notifData);
}
@end
