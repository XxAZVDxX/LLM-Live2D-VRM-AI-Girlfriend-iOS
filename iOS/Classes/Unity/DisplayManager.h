#pragma once

#include "UnityRendering.h"
#include <UIKit/UIKit.h>

@class UnityView;

@interface DisplayConnection : NSObject
#if !PLATFORM_VISIONOS
- (id)init:(UIScreen*)targetScreen;
#else
- (id)init;
#endif
- (void)dealloc;

- (void)createView:(BOOL)useForRendering showRightAway:(BOOL)showRightAway;
- (void)createView:(BOOL)useForRendering;
- (void)createWithWindow:(UIWindow*)window andView:(UIView*)view;
- (UnityDisplaySurfaceBase*)initRendering;
- (void)recreateSurface:(RenderingSurfaceParams)params;
- (void)destroySurface;

- (void)shouldShowWindow:(BOOL)show;

#if !PLATFORM_VISIONOS
@property (readonly, copy, nonatomic)   UIScreen*               screen;
#endif
@property (readonly, copy, nonatomic)   UIWindow*               window;
@property (readonly, copy, nonatomic)   UIView*                 view;


@property (readonly, nonatomic)         CGSize                      screenSize;
@property (readonly, nonatomic)         UnityDisplaySurfaceBase*    surface;
@property (readonly, nonatomic)         UnityDisplaySurfaceMTL*     surfaceMTL;
@end


@interface DisplayManager : NSObject
#if !PLATFORM_VISIONOS
- (id)objectForKeyedSubscript:(id)key;
- (BOOL)displayAvailable:(UIScreen*)targetScreen;
- (void)prepareForFirstScene;
#endif

#if PLATFORM_IOS
// iOS 27+ only offers an external display scene if we register an accessory for it.
- (void)registerExternalDisplaySceneAccessoryForViewController:(UIViewController*)viewController;
#endif

#if !PLATFORM_VISIONOS
- (void)updateDisplayListCacheInUnity;
- (void)enumerateDisplaysWithBlock:(void (^)(DisplayConnection* conn))block;
- (void)enumerateNonMainDisplaysWithBlock:(void (^)(DisplayConnection* conn))block;
#endif

+ (void)Initialize;
+ (DisplayManager*)Instance;
+ (void)Destroy;

@property (readonly, nonatomic) DisplayConnection*  mainDisplay;

@property (readonly, nonatomic) NSUInteger          displayCount;

@end

inline DisplayConnection*           GetMainDisplay()
{
    return [DisplayManager Instance].mainDisplay;
}

inline UnityDisplaySurfaceBase*     GetMainDisplaySurface()
{
    return GetMainDisplay().surface;
}
