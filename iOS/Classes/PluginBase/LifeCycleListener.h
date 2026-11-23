#pragma once

// important app life-cycle events

@protocol LifeCycleListener<NSObject>
@optional
- (void)didFinishLaunching:(NSNotification*)notification;
- (void)didBecomeActive:(NSNotification*)notification;
- (void)willResignActive:(NSNotification*)notification;
- (void)didEnterBackground:(NSNotification*)notification;
- (void)willEnterForeground:(NSNotification*)notification;
- (void)willTerminate:(NSNotification*)notification;
- (void)unityDidUnload:(NSNotification*)notification;
- (void)unityDidQuit:(NSNotification*)notification;
@end


#ifdef __cplusplus
// these two function have C++ linkage, don't expose them to Objective-C
void UnityRegisterLifeCycleListener(id<LifeCycleListener> obj);
void UnityUnregisterLifeCycleListener(id<LifeCycleListener> obj);


extern "C" {
#endif

extern __attribute__((visibility("default"))) NSString* const kUnityDidUnload;
extern __attribute__((visibility("default"))) NSString* const kUnityDidQuit;

#ifdef __cplusplus
} // extern "C"
#endif
