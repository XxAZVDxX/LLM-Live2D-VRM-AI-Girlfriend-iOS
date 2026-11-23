#pragma once

#include "UnityAppController.h"
#include "UnityRendering.h"
#if PLATFORM_VISIONOS
#include "UnityAppController+Rendering+visionOS.h"
#endif

#if UNITY_USES_METAL_DISPLAY_LINK
@interface UnityAppController (Rendering) <CAMetalDisplayLinkDelegate>
#else
@interface UnityAppController (Rendering)
#endif

#if !PLATFORM_VISIONOS
@property (readonly) BOOL usingCompositorLayer;
#endif

- (void)createDisplayLink;
- (void)repaintDisplayLink;
- (void)destroyDisplayLink;

- (void)pauseDisplayLink;
- (void)unpauseDisplayLink;

- (void)repaint;

#if UNITY_USES_METAL_DISPLAY_LINK
- (void)metalDisplayLink:(CAMetalDisplayLink *)link needsUpdate:(CAMetalDisplayLinkUpdate *)update API_AVAILABLE(ios(17.0), tvos(17.0));
#endif

#if !PLATFORM_VISIONOS
- (void)repaintCompositorLayer;
#endif

- (void)selectRenderingAPI;
@property (readonly, nonatomic) UnityRenderingAPI   renderingAPI;

// These methods switch between CADisplayLink and CAMetalDisplayLink at runtime.
// Both dispatch the actual work to the main thread, outside of the Unity player loop.
// Switch to CADisplayLink is always possible; if already using CADisplayLink, it's a no-op.
// Switch to CAMetalDisplayLink checks shouldUseMetalDisplayLink first
//   and stays on CADisplayLink if it returns false.
- (void)switchToCADisplayLink;
#if UNITY_USES_METAL_DISPLAY_LINK
- (void)switchToMetalDisplayLink API_AVAILABLE(ios(17.0), tvos(17.0));
#endif

@end

// helper to run unity loop along with proper handling of the rendering
#ifdef __cplusplus
extern "C" {
#endif

void UnityRepaint();

#ifdef __cplusplus
} // extern "C"
#endif
