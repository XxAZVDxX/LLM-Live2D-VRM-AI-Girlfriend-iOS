#pragma once

enum LocationServiceStatus
{
    kLocationServiceStopped,
    kLocationServiceInitializing,
    kLocationServiceRunning,
    kLocationServiceFailed
};

#ifdef __cplusplus
class LocationService
{
public:
    static void SetDesiredAccuracy(float val);
    static float GetDesiredAccuracy();
    static void SetDistanceFilter(float val);
    static float GetDistanceFilter();
    static bool IsServiceEnabledByUser();
    static void StartUpdatingLocation();
    static void StopUpdatingLocation();
    static void SetHeadingUpdatesEnabled(bool enabled);
    static bool IsHeadingUpdatesEnabled();
    static LocationServiceStatus GetLocationStatus();
    static LocationServiceStatus GetHeadingStatus();
    static bool IsHeadingAvailable();
};
#endif

#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE

#import <UIKit/UIKit.h>

#ifdef __cplusplus
extern "C" {
#endif

void ReportSimulatedRemoteButtonPress(UIPressType type);
void ReportSimulatedRemoteButtonRelease(UIPressType type);
void ReportSimulatedRemoteTouchesBegan(UIView* view, NSSet* touches);
void ReportSimulatedRemoteTouchesMoved(UIView* view, NSSet* touches);
void ReportSimulatedRemoteTouchesEnded(UIView* view, NSSet* touches);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
