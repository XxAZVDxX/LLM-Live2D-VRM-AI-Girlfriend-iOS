#if PLATFORM_TVOS

#import "UnityView.h"
#include "iphone_Sensors.h"

@implementation UnityView (tvOS)

- (void)touchesBegan:(NSSet*)touches withEvent:(UIEvent*)event
{
#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE
    ReportSimulatedRemoteTouchesBegan(self, touches);
#endif

    if (UnityGetAppleTVRemoteTouchesEnabled())
        UnitySendTouches(UITouchPhaseBegan, touches, event);
}

- (void)touchesEnded:(NSSet*)touches withEvent:(UIEvent*)event
{
#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE
    ReportSimulatedRemoteTouchesEnded(self, touches);
#endif

    if (UnityGetAppleTVRemoteTouchesEnabled())
        UnitySendTouches(UITouchPhaseEnded, touches, event);
}

- (void)touchesCancelled:(NSSet*)touches withEvent:(UIEvent*)event
{
#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE
    ReportSimulatedRemoteTouchesEnded(self, touches);
#endif

    if (UnityGetAppleTVRemoteTouchesEnabled())
        UnitySendTouches(UITouchPhaseCancelled, touches, event);
}

- (void)touchesMoved:(NSSet*)touches withEvent:(UIEvent*)event
{
#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE
    ReportSimulatedRemoteTouchesMoved(self, touches);
#endif

    if (UnityGetAppleTVRemoteTouchesEnabled())
        UnitySendTouches(UITouchPhaseMoved, touches, event);
}

#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE
- (void)pressesBegan:(NSSet<UIPress*>*)presses withEvent:(UIEvent*)event
{
    for (UIPress *press in presses)
        ReportSimulatedRemoteButtonPress(press.type);
}

- (void)pressesEnded:(NSSet<UIPress*>*)presses withEvent:(UIEvent*)event
{
    for (UIPress *press in presses)
        ReportSimulatedRemoteButtonRelease(press.type);
}

#endif

@end


#endif // PLATFORM_TVOS
