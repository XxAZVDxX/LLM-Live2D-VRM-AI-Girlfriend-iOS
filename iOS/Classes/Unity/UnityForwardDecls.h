#pragma once

#include <stdint.h>
#include "UnityInternalInterface.h"

#ifdef __OBJC__
@class NSArray;
@class NSBundle;
@class NSData;
@class NSDictionary;
@class NSError;
@class NSSet;
@class NSString;
@class UIEvent;
@class UIKeyCommand;
@class UIScreen;
@class UITouch;
@class UIView;
@class UIViewController;
@class UIWindow;

@class UnityView;
@class UnityViewControllerBase;
#else
typedef struct objc_object NSArray;
typedef struct objc_object NSBundle;
typedef struct objc_object NSData;
typedef struct objc_object NSDictionary;
typedef struct objc_object NSError;
typedef struct objc_object NSSet;
typedef struct objc_object NSString;
typedef struct objc_object UIEvent;
typedef struct objc_object UIKeyCommand;
typedef struct objc_object UIScreen;
typedef struct objc_object UITouch;
typedef struct objc_object UIView;
typedef struct objc_object UIViewController;
typedef struct objc_object UIWindow;

typedef struct objc_object UnityView;
typedef struct objc_object UnityViewControllerBase;
#endif

// misc
#ifdef __cplusplus
extern "C" {

#define UNITY_VER_FUNC_DEPRECATED UNITY_DEPRECATED_ATTR("Obsolete", "UnityiOSVersionIsAtLeast")
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS81orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS82orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS90orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS91orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS100orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS101orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS102orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS103orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS110orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS111orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS112orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS130orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS140orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS150orNewer();
    UNITY_VER_FUNC_DEPRECATED bool UnityiOS160orNewer();
#undef UNITY_VER_FUNC_DEPRECATED
}
#endif
