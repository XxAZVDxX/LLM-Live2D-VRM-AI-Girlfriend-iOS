#pragma once

#include <Availability.h>
#include <TargetConditionals.h>

//------------------------------------------------------------------------------
//
// ensuring proper compiler/xcode/whatever selection
//

#ifndef __clang__
#error Please use clang compiler.
#endif

#if __clang_major__ < 13
#error Please use Xcode 13.0 or newer
#endif

#if !defined(__IPHONE_15_0) || __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_15_0
#error Please use iOS SDK 15.0 or newer
#endif

#if defined(TARGET_OS_TV) && TARGET_OS_TV && !defined(__TVOS_15_0)
#error Please use tvOS SDK 15.0 or newer
#endif

#if TARGET_OS_IOS && (!defined(__IPHONE_15_0) || __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_15_0)
#error Please target iOS 15.0 or newer
#endif

#if TARGET_OS_TV && (!defined(__TVOS_15_0) || __TV_OS_VERSION_MIN_REQUIRED < __TVOS_15_0)
#error Please target tvOS 15.0 or newer
#endif

//------------------------------------------------------------------------------
//
// defines for target platform
// Note: visionOS defines _OS_XR and _OS_IOS
//

#define UNITY_TRAMPOLINE_IN_USE 1

// #define PLATFORM_* values are set by Build Program when Xcode project is generated (including "append") according to the selected platform.
#define PLATFORM_IOS 1
#define PLATFORM_OSX    0
#define PLATFORM_TVOS 0
#define PLATFORM_VISIONOS 0

#if !(TARGET_OS_IOS || TARGET_OS_OSX || TARGET_OS_TV || TARGET_OS_VISION)
    #error one of TARGET_OS_IOS, TARGET_OS_OSX, TARGET_OS_TV, TARGET_OS_VISION should be defined
#endif

#if !(PLATFORM_IOS || PLATFORM_OSX || PLATFORM_TVOS || PLATFORM_VISIONOS)
    #error at least one of PLATFORM_IOS, PLATFORM_OSX, PLATFORM_TVOS, PLATFORM_VISIONOS must be defined
#endif

//------------------------------------------------------------------------------
//
// defines for sdk/target version
//

// It's hard to figure out which SDK we are using as the availability macros defined in the SDK
// have various quirks.
//
// It's not possible to use *_VERSION_MAX_ALLOWED macros because they not always corresponded to
// the SDK version. In particular, __TV_OS_VERSION_MAX_ALLOWED was out of sync in all Xcode dot
// releases except the first so far.
//
// The highest __IPHONE_X_Y or __TVOS_X_Y macro that is defined in Availability.h correctly
// corresponds to the version of the SDK (at least in each Xcode version since 6.0 up to 9.0).
// However, some other headers (e.g. System/Library/Frameworks/QuartzCore.framework/Headers/CABase.h
// in SDKs up to 9.3) may define the macros itself and this does not correspond to the what's in
// Availability.h. Thus we make sure to include "Preprocessor.h" before the CABase.h header.
#if defined(CABASE_H)
#error "Please include Preprocessor.h before other includes"
#endif

#define UNITY_HAS_IOSSDK_10_0  1
#define UNITY_HAS_IOSSDK_10_2  1
#define UNITY_HAS_IOSSDK_10_3  1
#define UNITY_HAS_IOSSDK_11_0  1
#define UNITY_HAS_IOSSDK_11_1  1
#define UNITY_HAS_IOSSDK_12_0  1
#define UNITY_HAS_IOSSDK_13_0  1
#define UNITY_HAS_IOSSDK_14_0  1
#define UNITY_HAS_IOSSDK_15_0  1
#if defined(__IPHONE_16_0)
    #define UNITY_HAS_IOSSDK_16_0  1
#else
    #define UNITY_HAS_IOSSDK_16_0  0
#endif
#if defined(__IPHONE_17_0)
    #define UNITY_HAS_IOSSDK_17_0  1
#else
    #define UNITY_HAS_IOSSDK_17_0  0
#endif
#if defined(__IPHONE_18_0)
    #define UNITY_HAS_IOSSDK_18_0  1
#else
    #define UNITY_HAS_IOSSDK_18_0  0
#endif
#if defined(__IPHONE_26_0)
    #define UNITY_HAS_IOSSDK_26_0  1
#else
    #define UNITY_HAS_IOSSDK_26_0  0
#endif
#if defined(__IPHONE_27_0)
    #define UNITY_HAS_IOSSDK_27_0  1
#else
    #define UNITY_HAS_IOSSDK_27_0  0
#endif

#define UNITY_HAS_TVOSSDK_10_0 1
#define UNITY_HAS_TVOSSDK_10_2 1
#define UNITY_HAS_TVOSSDK_11_0 1
#define UNITY_HAS_TVOSSDK_12_0 1
#define UNITY_HAS_TVOSSDK_13_0 1
#define UNITY_HAS_TVOSSDK_14_0 1
#define UNITY_HAS_TVOSSDK_15_0 1
#if defined(__TVOS_16_0)
    #define UNITY_HAS_TVOSSDK_16_0 1
#else
    #define UNITY_HAS_TVOSSDK_16_0 0
#endif
#if defined(__TVOS_17_0)
    #define UNITY_HAS_TVOSSDK_17_0 1
#else
    #define UNITY_HAS_TVOSSDK_17_0 0
#endif
#if defined(__TVOS_18_0)
    #define UNITY_HAS_TVOSSDK_18_0 1
#else
    #define UNITY_HAS_TVOSSDK_18_0 0
#endif
#if defined(__TVOS_26_0)
    #define UNITY_HAS_TVOSSDK_26_0 1
#else
    #define UNITY_HAS_TVOSSDK_26_0 0
#endif
#if defined(__TVOS_27_0)
    #define UNITY_HAS_TVOSSDK_27_0 1
#else
    #define UNITY_HAS_TVOSSDK_27_0 0
#endif

#if defined(__VISIONOS_2_0)
    #define UNITY_HAS_VISIONOSSDK_2_0 1
#else
    #define UNITY_HAS_VISIONOSSDK_2_0 0
#endif
#if defined(__VISIONOS_26_0)
    #define UNITY_HAS_VISIONOSSDK_26_0 1
#else
    #define UNITY_HAS_VISIONOSSDK_26_0 0
#endif
#if defined(__VISIONOS_27_0)
    #define UNITY_HAS_VISIONOSSDK_27_0 1
#else
    #define UNITY_HAS_VISIONOSSDK_27_0 0
#endif

//------------------------------------------------------------------------------
//
// defines for used unity features
//

// The following UNITY_USES_* flags disable functionality in the trampoline project whenever the user does not use it from his scripts.
// We detect the API usage and adjust the value of these flags whenever the project is built (including "append")

#define UNITY_USES_REMOTE_NOTIFICATIONS 0
#define UNITY_USES_WEBCAM 0
#define UNITY_USES_MICROPHONE 0
#define UNITY_USES_LOCATION 0
#define UNITY_USES_IAD 0
#define UNITY_USES_GYROSCOPE 1
#define UNITY_USES_STYLUS 1

//------------------------------------------------------------------------------
//
// defines for used features
//

#define UNITY_DEVELOPER_BUILD 0
#define USE_IL2CPP_PCH 0
#define UNITY_IL2CPP_NO_EXCEPTIONS 0
#define UNITY_SNAPSHOT_VIEW_ON_APPLICATION_PAUSE 0
#define ENABLE_IOS_ON_DEMAND_RESOURCES 0

// we keep it for 3rd paty code that might start to relay on it for simulator from 2018 (when dylib was introduced)
#define UNITY_EXPORT 

// we now support metal always everywhere, but we keep the define for native plugins using it
#define UNITY_CAN_USE_METAL 1

#define UNITY_SUPPORT_ROTATION PLATFORM_IOS
#if PLATFORM_TVOS
    #define UNITY_TVOS_ORIENTATION landscapeLeft
#endif
#if PLATFORM_VISIONOS
    #define UNITY_VISIONOS_ORIENTATION landscapeLeft
#endif

// On tvOS simulator we implement a fake remote as tvOS simulator does not support siri controller (yet).
// The #ifndef guard is here because the build program also sets UNITY_TVOS_SIMULATOR_FAKE_REMOTE in
// UnityAPI's GCC_PREPROCESSOR_DEFINITIONS (so that Swift's -import-underlying-module clang
// module build sees it — the PCH does not apply to module builds). Without the guard, the regular
// .m/.mm/.cpp of UnityAPI would see both the command-line -D and this header's expression
// definition and emit -Wmacro-redefined.
#ifndef UNITY_TVOS_SIMULATOR_FAKE_REMOTE
#define UNITY_TVOS_SIMULATOR_FAKE_REMOTE (PLATFORM_TVOS && TARGET_OS_SIMULATOR)
#endif

#define UNITY_XCODE_PROJECT_TYPE_SWIFT 0