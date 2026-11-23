#pragma once

#if PLATFORM_VISIONOS

#import "UnityAppController.h"


@interface UnityAppController (Rendering_visionOS)

@property (readonly) BOOL usingCompositorLayer;

- (void)repaintCompositorLayer;

@end

#endif
