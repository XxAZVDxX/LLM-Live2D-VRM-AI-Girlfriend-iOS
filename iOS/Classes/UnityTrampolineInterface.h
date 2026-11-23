#pragma once

#ifdef __OBJC__
@protocol MTLDevice;
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __OBJC__
UIView* UnityGetRenderingView(void);
id<MTLDevice> UnityMetalDevice(void);
#endif

#ifdef __cplusplus
}
#endif
