#pragma once

#import <UnityFramework/LifeCycleListener.h>

struct UnityDisplaySurfaceBase; // Unity/UnityRendering.h
struct RenderingSurfaceParams;  // Unity/DisplayManager.h

// due to delicate nature of render loop we have just one delegate in app
// if you need to use several rendering delegates you need to do one of:
// 1. create custom delegate that will have code to combine effects by itself
// 2. use helper that simply holds array of delegates (which will work only in easiest cases)
@protocol RenderPluginDelegate<LifeCycleListener, NSObject>

@required
// this will be called right after gles intialization.
// surface pointer will never be changed, so you should keep it.
// the only valid fields in there as of now are layer and context
- (void)mainDisplayInited:(struct UnityDisplaySurfaceBase*)surface;

@optional

// this will be called before recreating main display surface (from [UnityView recreateRenderingSurface])
// you can tweak params here.
- (void)onBeforeMainDisplaySurfaceRecreate:(struct RenderingSurfaceParams*)params;

// this will be called right after recreating main display surface (from [UnityView recreateRenderingSurface])
// as [UnityView recreateRenderingSurface] is the only place where unity itself will trigger surface recreate
// you can use this method to update your rendering depending on changes
- (void)onAfterMainDisplaySurfaceRecreate;

// This is no longer called
- (void)onFrameResolved __attribute__((deprecated));
@end


// simple helper for common plugin stuff
// you can implement protocol directly, but subclassing this will provide some common implementation
@interface RenderPluginDelegate : NSObject<RenderPluginDelegate>
{
    struct UnityDisplaySurfaceBase* mainDisplaySurface;
}
- (void)mainDisplayInited:(struct UnityDisplaySurfaceBase*)surface;
@end


// simple helper to have an array of render delegates.
// be warned that it works in simplest cases only, when there is no interop between delegates
@interface RenderPluginArrayDelegate : RenderPluginDelegate
{
    NSArray* delegateArray;
}
@property(nonatomic, retain) NSArray* delegateArray;
- (void)mainDisplayInited:(struct UnityDisplaySurfaceBase*)surface;
- (void)onBeforeMainDisplaySurfaceRecreate:(struct RenderingSurfaceParams*)params;
- (void)onAfterMainDisplaySurfaceRecreate;

- (void)didBecomeActive:(NSNotification*)notification;
- (void)willResignActive:(NSNotification*)notification;
- (void)didEnterBackground:(NSNotification*)notification;
- (void)willEnterForeground:(NSNotification*)notification;
- (void)willTerminate:(NSNotification*)notification;
@end
