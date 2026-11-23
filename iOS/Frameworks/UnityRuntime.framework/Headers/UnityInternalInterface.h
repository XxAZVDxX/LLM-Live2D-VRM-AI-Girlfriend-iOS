#pragma once

// The contents of this file contains internal interface used by Unity code. Make no changes to it.

#ifdef __OBJC__
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdarg.h>

#ifndef UNITY_DEPRECATED_ATTR
    #ifdef __GNUC__
        #define UNITY_DEPRECATED_ATTR(msg, replacement) __attribute__((deprecated(msg, replacement)))
    #else
        #define UNITY_DEPRECATED_ATTR(msg, replacement)
    #endif
#endif

// be aware that this enum is shared with unity implementation so you should absolutely not change it
typedef enum DeviceGeneration
{
    // iOSDevice.cs
    deviceUnknown            = 0,
    deviceiPhone3GS          = 3,
    deviceiPhone4            = 8,
    deviceiPodTouch4Gen      = 9,
    deviceiPad2Gen           = 10,
    deviceiPhone4S           = 11,
    deviceiPad3Gen           = 12,
    deviceiPhone5            = 13,
    deviceiPodTouch5Gen      = 14,
    deviceiPadMini1Gen       = 15,
    deviceiPad4Gen           = 16,
    deviceiPhone5C           = 17,
    deviceiPhone5S           = 18,
    deviceiPadAir1           = 19,
    deviceiPadMini2Gen       = 20,
    deviceiPhone6            = 21,
    deviceiPhone6Plus        = 22,
    deviceiPadMini3Gen       = 23,
    deviceiPadAir2           = 24,
    deviceiPhone6S           = 25,
    deviceiPhone6SPlus       = 26,
    deviceiPadPro1Gen        = 27,
    deviceiPadMini4Gen       = 28,
    deviceiPhoneSE1Gen       = 29,
    deviceiPadPro10Inch1Gen  = 30,
    deviceiPhone7            = 31,
    deviceiPhone7Plus        = 32,
    deviceiPodTouch6Gen      = 33,
    deviceiPad5Gen           = 34,
    deviceiPadPro2Gen        = 35,
    deviceiPadPro10Inch2Gen  = 36,
    deviceiPhone8            = 37,
    deviceiPhone8Plus        = 38,
    deviceiPhoneX            = 39,
    deviceiPhoneXS           = 40,
    deviceiPhoneXSMax        = 41,
    deviceiPhoneXR           = 42,
    deviceiPadPro11Inch      = 43,
    deviceiPadPro3Gen        = 44,
    deviceiPad6Gen           = 45,
    deviceiPadAir3Gen        = 46,
    deviceiPadMini5Gen       = 47,
    deviceiPhone11           = 48,
    deviceiPhone11Pro        = 49,
    deviceiPhone11ProMax     = 50,
    deviceiPodTouch7Gen      = 51,
    deviceiPad7Gen           = 52,
    deviceiPhoneSE2Gen       = 53,
    deviceiPadPro11Inch2Gen  = 54,
    deviceiPadPro4Gen        = 55,
    deviceiPhone12Mini       = 56,
    deviceiPhone12           = 57,
    deviceiPhone12Pro        = 58,
    deviceiPhone12ProMax     = 59,
    deviceiPad8Gen           = 60,
    deviceiPadAir4Gen        = 61,
    deviceiPad9Gen           = 62,
    deviceiPadMini6Gen       = 63,
    deviceiPhone13           = 64,
    deviceiPhone13Mini       = 65,
    deviceiPhone13Pro        = 66,
    deviceiPhone13ProMax     = 67,
    deviceiPadPro5Gen        = 68,
    deviceiPadPro11Inch3Gen  = 69,
    deviceiPhoneSE3Gen       = 70,
    deviceiPadAir5Gen        = 71,
    deviceiPhone14           = 72,
    deviceiPhone14Plus       = 73,
    deviceiPhone14Pro        = 74,
    deviceiPhone14ProMax     = 75,
    deviceiPadPro6Gen        = 76,
    deviceiPadPro11Inch4Gen  = 77,
    deviceiPad10Gen          = 78,
    deviceiPhone15           = 79,
    deviceiPhone15Plus       = 80,
    deviceiPhone15Pro        = 81,
    deviceiPhone15ProMax     = 82,
    deviceiPhone16           = 83,
    deviceiPhone16Plus       = 84,
    deviceiPhone16Pro        = 85,
    deviceiPhone16ProMax     = 86,
    deviceiPhone16e          = 87,
    deviceiPhone17           = 88,
    deviceiPhoneAir          = 89,
    deviceiPhone17Pro        = 90,
    deviceiPhone17ProMax     = 91,
    deviceiPhone17e          = 92,
    deviceiPhone18Pro        = 93,
    deviceiPhone18ProMax     = 94,
    deviceiPhoneDuo          = 95,

    // tvOSDevice.cs
    deviceAppleTV1Gen       = 1001,
    deviceAppleTVHD         = 1001,
    deviceAppleTV2Gen       = 1002,
    deviceAppleTV4K         = 1002,
    deviceAppleTV4K2Gen     = 1003,
    deviceAppleTV4K3Gen     = 1004,

    deviceiPhoneUnknown     = 10001,
    deviceiPadUnknown       = 10002,
    deviceiPodTouchUnknown  = 10003,
    deviceAppleTVUnknown    = 10004,
}
DeviceGeneration;


// this dictates touches processing on os level: should we transform touches to unity view coords or not.
// N.B. touch.position will always be adjusted to current resolution
//      i.e. if you touch right border of view, touch.position.x will be Screen.width, not view.width
//      to get coords in view space (os-coords), use touch.rawPosition
typedef enum ViewTouchProcessing
{
    // the touches originated from view will be ignored by unity
    kUnityTouchesIgnored = 0,

    // touches would be processed as if they were originated in unity view:
    // coords will be transformed from view coords to unity view coords
    kUnityTouchesTransformedToUnityViewCoords = 1,

    // touches coords will be kept intact (in originated view coords)
    // it is default value
    kUnityTouchesKeptInOriginalViewCoords = 2,
}
UnityViewTouchProcessing;

// old value names for enum above (will be removed in the future)
#define touchesIgnored kUnityTouchesIgnored
#define touchesTransformedToUnityViewCoords kUnityTouchesTransformedToUnityViewCoords
#define touchesKeptInOriginalViewCoords kUnityTouchesKeptInOriginalViewCoords


typedef enum UnityKeyboardStatus
{
    kUnityKeyboardStatusVisible     = 0,
    kUnityKeyboardStatusDone        = 1,
    kUnityKeyboardStatusCanceled    = 2,
    kUnityKeyboardStatusLostFocus   = 3,
}
UnityKeyboardStatus;


// be aware that this enum is shared with unity implementation so you should absolutely not change it
// It also duplicates the one from IUnityLog.h, hence underscore in name
typedef enum Unity_LogType
{
    kUnityLogType_Error        = 0,
    kUnityLogType_Assert       = 1,
    kUnityLogType_Warning      = 2,
    kUnityLogType_Log          = 3,
    kUnityLogType_Exception    = 4,
    kUnityLogType_Debug        = 5,
}
Unity_LogType;

typedef enum
{
    kUnityEngineUnload = 1,
    kUnityEngineAppQuit = 2,
} UnityEngineQuitLevel;

typedef enum
{
    kUnityPauseModeResume = 0,
    kUnityPauseModePause = 1,

} UnityPauseMode;

typedef enum
{
    kPauseFlagSetEngineRunState = 1 << 0,
    kPauseFlagSendPauseMessage = 1 << 1,
    kPauseFlagSchedulePauseMessage = 1 << 2,
} UnityPauseFlags;

typedef enum
{
    kUnityInitApplicationGraphicsAndInputFailed = -1,
    kUnityInitApplicationGraphicsAndInputCompleted = 1,
    kUnityInitApplicationGraphicsAndInputWaitingForDebugger = 2,
} UnityInitApplicationGraphicsAndInputState;

typedef struct
{
    UnityInitApplicationGraphicsAndInputState state;
    uint32_t debuggerPort;
} UnityInitApplicationGraphicsAndInputResult;

typedef struct UnityViewSwapchain UnityViewSwapchain;
struct RenderSurfaceBase;
typedef struct RenderSurfaceBase* UnityRenderBufferHandle;


#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
bool UnityiOSVersionIsAtLeast(uint32_t major, uint32_t minor = 0);
#else
bool UnityiOSVersionIsAtLeast(uint32_t major, uint32_t minor);
#endif

// life cycle management

void UnityInitRuntime(int argc, char* argv[]);
void UnityInitApplicationNoGraphics(const char* appPath);
void UnityInitApplicationGraphicsAndInput(void);
UnityInitApplicationGraphicsAndInputResult UnityInitApplicationGraphicsAndInputBegin(void);
bool UnityInitApplicationGraphicsAndInputFinish(void);

UNITY_DEPRECATED_ATTR("Obsolete", "UnitySetPlayerPause") void UnityPause(int pause);
#ifdef __cplusplus
void UnityLoadFirstScene(bool firstLoad = true);
void UnitySetPlayerPause(UnityPauseMode mode, uint32_t flags = kPauseFlagSetEngineRunState|kPauseFlagSendPauseMessage);
#else
void UnityLoadFirstScene(bool firstLoad);
void UnitySetPlayerPause(UnityPauseMode mode, uint32_t flags);
#endif
// player loop handling:
// "normal" player loop
void UnityPlayerLoop(void);
// batched player loop, no rendering
void UnityBatchPlayerLoop(void);
// just rendering, without running player loop
void UnityRenderWithoutPlayerLoop(void);
// checks if we need to quit or unload unity; needs to happen after we are fully done with the current frame
void UnityCheckUnloadAndQuit(void);

void UnityEngineDidQuit(UnityEngineQuitLevel level);
bool UnityIsFocused(void);               // if player is focused or in the background
bool UnityIsPaused(void);
bool UnityIsBatchmode(void);
void UnitySetPlayerFocus(bool focused);   // send OnApplicationFocus() message to scripts
void UnityUnloadApplication(void);
void UnityQuitApplication(int exitCode);
void UnityWaitForFrame(void);
void UnityLowMemory(void);
void UnityCleanup(void);
void UnityCleanupTrampoline(void);
void UnitySendMessage(const char* obj, const char* method, const char* arg);
#ifdef __OBJC__
UIViewController* UnityGetGLViewController();
UIView* UnityGetGLView();
#endif

// file system
const char* UnityDataBundleDir(void);
const char* UnityDocumentsDir(void);
const char* UnityLibraryDir(void);
const char* UnityCachesDir(void);
bool UnityUpdateNoBackupFlag(const char* path, bool setFlag);  // Returns true if successful


void UnityRequestOrientation(void);
void UnityOrientationRequestWasCommitted(void);
void UnityReportSafeAreaChange(float x, float y, float w, float h);
void UnityReportDisplayCutouts(const float* x, const float* y, const float* width, const float* height, int count);


void UnitySetAudioSessionActive(bool active);
void UnityUpdateMuteState(bool mute);
bool UnityShouldMuteOtherAudioSources(void);
bool UnityShouldPrepareForIOSRecording(void);
bool UnityIsAudioManagerAvailableAndEnabled(void);

void UnityActivateDisplaySwapchain(void* screen, void* metalLayer);
void UnityDeactivateDisplaySwapchain(void* screen);
void UnityUpdateMainDisplaySwapchain(void* displayLinkUpdate);
// this is used only in Objective-C trampoline, where we use UIScreen for display mapping
// in swift trampoline we use UIWindowScene
void UnityActivateMainDisplaySwapchain(void* metalLayer);

void UnityStartActivityIndicator(void);
void UnityStopActivityIndicator(void);

// player settings

int UnityGetShowActivityIndicatorOnLoading(void);
void UnitySetAbsoluteURL(const char* url);
int UnityGetTargetFPS(void);
void UnitySetTargetFPS(int targetFPS);
bool UnityShouldUseMetalDisplayLink(void);

#if defined(__OBJC__) && (PLATFORM_IOS || PLATFORM_TVOS)
float UnityCalculateScalingFactorFromTargetDPI(UIScreen* screen);
bool  UnityResolutionScalingFixedDPIFactorChanged(void);
#endif

// DeviceSettings.mm / DeviceSettings.swift
const char* UnityDeviceUniqueIdentifier(void);
const char* UnityAdIdentifier(void);
bool UnityAdTrackingEnabled(void);
bool UnityGetLowPowerModeEnabled(void);
bool UnityGetWantsSoftwareDimming(void);
void UnitySetWantsSoftwareDimming(bool enabled);
bool UnityGetIosAppOnMac(void);
const char* UnityDeviceName(void);
const char* UnitySystemName(void);
const char* UnitySystemVersion(void);
const char* UnityDeviceModel(void);
DeviceGeneration UnityDeviceGeneration(void);
DeviceGeneration UnityParseDeviceGeneration(const char*);
float UnityDeviceDPI(void);
const char* UnitySystemLanguage(void);
bool UnityDeviceSupportsUpsideDown(void);
unsigned UnityDeviceSupportedOrientations(void);
bool UnityDeviceIsForceTouchSupported(void);
bool UnityDeviceIsStylusTouchSupported(void);

bool UnityGetHideHomeButton(void);
void UnityNotifyHideHomeButtonChange(void);
void UnityNotifyDeferSystemGesturesChange(void);
#ifdef __OBJC__
UIRectEdge UnityGetDeferSystemGesturesOnEdges(void);
#endif
void UnitySetBrightness(float brightness);
float UnityGetBrightness(void);

// UI/Keyboard.mm
void UnityKeyboard_Create(unsigned keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, const char* text, const char* placeholder, int characterLimit);
void UnityKeyboard_Show(void);
void UnityKeyboard_Hide(void);
void UnityKeyboard_SetText(const char* text);
bool UnityKeyboard_IsActive(void);
UnityKeyboardStatus UnityKeyboard_Status(void);
void UnityKeyboard_SetInputHidden(bool hidden);
bool UnityKeyboard_IsInputHidden(void);
void UnityKeyboard_SetCharacterLimit(unsigned characterLimit);
bool UnityKeyboard_CanGetSelection(void);
void UnityKeyboard_GetSelection(int* location, int* range);
bool UnityKeyboard_CanSetSelection(void);
void UnityKeyboard_SetSelection(int location, int range);
#ifdef __cplusplus
void UnityKeyboard_GetRect(float& x, float& y, float& w, float& h);
#endif
#ifdef __OBJC__
NSString* UnityKeyboard_GetText(void);
#endif

// iPhone_Sensors.mm
void UnityCoreMotionStart(void);
void UnityCoreMotionStop(void);
void UnityUpdateAccelerometerData(void);
unsigned UnityMaxQueuedAccelerationEvents(void);
bool UnityIsGyroEnabled(int idx);
bool UnityIsGyroAvailable(void);
void UnityUpdateGyroData(void);
void UnitySetGyroUpdateInterval(int idx, float interval);
float UnityGetGyroUpdateInterval(int idx);
void UnityUpdateJoystickData(void);
void UnityGetJoystickAxisName(int idx, int axis, char* buffer, int maxLen);
void UnityGetNiceKeyname(int key, char* buffer, int maxLen);
#ifdef __OBJC__
NSArray<NSString*>* UnityGetJoystickNames(void);
#endif

// Sensors in Unity library
void UnitySensorsSetGyroRotationRate(int idx, float x, float y, float z);
void UnitySensorsSetGyroRotationRateUnbiased(int idx, float x, float y, float z);
void UnitySensorsSetGravity(int idx, float x, float y, float z);
void UnitySensorsSetUserAcceleration(int idx, float x, float y, float z);
void UnitySensorsSetAttitude(int idx, float x, float y, float z, float w);
void UnityDidAccelerate(float x, float y, float z, double timestamp);
void UnitySetJoystickPosition(int joyNum, int axis, float pos);
int UnityStringToKey(const char *name);
void UnitySetKeyState(int key, bool state);
void UnitySetKeyboardKeyState(int key, bool state);
#ifdef __OBJC__
void UnitySendKeyboardCommand(UIKeyCommand* command, int code);
#endif


// thermal
bool UnityShouldAdjustPerformanceOnThermalStateChange(void);
int UnityGetThermalStateSeriousFPS(void);
int UnityGetThermalStateCriticalFPS(void);
void UnityThermalStateChanged(int state);


// touches processing
#ifdef __OBJC__
void UnitySetViewTouchProcessing(UIView* view, UnityViewTouchProcessing processingPolicy);
void UnityDropViewTouchProcessing(UIView* view);
void UnitySendTouches(UITouchPhase phase, NSSet<UITouch*>* touches, UIEvent* event);
#endif
void UnityCancelTouches(void);
void UnitySendScrollWheel(float deltaX, float deltaY);
void UnitySendMousePosition(float x, float y);


// In Unity library
void UnityKeyboard_StatusChanged(UnityKeyboardStatus status);
#ifdef __OBJC__
void UnityKeyboard_TextChanged(NSString* text);
void UnityKeyboard_LayoutChanged(NSString* layout);
#endif


typedef bool (*UnityLogEntryHandler)(Unity_LogType logType, const char* log, size_t logLength);
void UnitySetLogEntryHandler(UnityLogEntryHandler newHandler);


// native plugins
struct IUnityInterfaces;
typedef struct IUnityInterfaces IUnityInterfaces;
typedef void (*UnityPluginLoadFunc)(IUnityInterfaces* unityInterfaces);
typedef void (*UnityPluginUnloadFunc)(void);

// OLD rendering plugin api (will become obsolete soon)
typedef void (*UnityPluginSetGraphicsDeviceFunc)(void* device, int deviceType, int eventType);
typedef void (*UnityPluginRenderMarkerFunc)(int marker);

// WARNING: old UnityRegisterRenderingPlugin will become obsolete soon
void UnityRegisterRenderingPlugin(UnityPluginSetGraphicsDeviceFunc setDevice, UnityPluginRenderMarkerFunc renderMarker);
UNITY_DEPRECATED_ATTR("Renamed to UnityRegisterPlugin", "UnityRegisterPlugin") void UnityRegisterRenderingPluginV5(UnityPluginLoadFunc loadPlugin, UnityPluginUnloadFunc unloadPlugin);
void UnityRegisterPlugin(UnityPluginLoadFunc loadPlugin, UnityPluginUnloadFunc unloadPlugin);

struct UnityAudioEffectDefinition;
typedef int (*UnityPluginGetAudioEffectDefinitionsFunc)(struct UnityAudioEffectDefinition*** descptr);
void UnityRegisterAudioPlugin(UnityPluginGetAudioEffectDefinitionsFunc getAudioEffectDefinitions);

#if PLATFORM_SUPPORTS_AUDIO_SPATIAL_EXPERIENCE
void UnitySetAudioSpatialExperience(int spatialAudioExperience);
#endif


#ifdef __cplusplus
} // extern "C"
#endif
