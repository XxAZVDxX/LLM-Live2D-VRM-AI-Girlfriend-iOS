#include "UnityAppController+Thermal.h"
#include "UnityAppController+Rendering.h"
#include "UnityInterface.h"

#import <Foundation/Foundation.h>

@implementation UnityAppController (Thermal)

- (void)subscribeToThermalChanges
{
    ::printf_console("Player Setting 'Adjust iOS FPS based on thermal state' is %s\n", UnityShouldAdjustPerformanceOnThermalStateChange() ? "ON" : "OFF");

    [self notifyThermalState: [NSProcessInfo processInfo].thermalState];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(thermalStateDidChange:) name:NSProcessInfoThermalStateDidChangeNotification object:nil];
}

- (int)adjustFrameRateForThermalState:(int)targetFPS
{
    const NSProcessInfoThermalState thermalState = [NSProcessInfo processInfo].thermalState;

    const int seriousFPS = UnityGetThermalStateSeriousFPS();
    const int criticalFPS = UnityGetThermalStateCriticalFPS();

    if (thermalState == NSProcessInfoThermalStateSerious && targetFPS > seriousFPS)
        return seriousFPS;
    else if (thermalState == NSProcessInfoThermalStateCritical && targetFPS > criticalFPS)
        return criticalFPS;

    return targetFPS;
}

- (void)thermalStateDidChange:(NSNotification*)note
{
    [self notifyThermalState: [NSProcessInfo processInfo].thermalState];
}

- (void)notifyThermalState:(NSProcessInfoThermalState)state
{
    const char* stateString = [self thermalStateToString:state];
    ::printf_console("thermalStateDidChange: %s\n", stateString);

    UnityThermalStateChanged(static_cast<int>(state));

#if UNITY_USES_METAL_DISPLAY_LINK
    if (state == NSProcessInfoThermalStateNominal || state == NSProcessInfoThermalStateFair)
    {
        if (@available(iOS 17.0, tvOS 17.0, *))
            [self switchToMetalDisplayLink];
    }
#endif

    if (state == NSProcessInfoThermalStateSerious || state == NSProcessInfoThermalStateCritical)
        [self switchToCADisplayLink];
}

- (const char*)thermalStateToString:(NSProcessInfoThermalState)state
{
    switch (state)
    {
        case NSProcessInfoThermalStateNominal:
            return "Nominal";
        case NSProcessInfoThermalStateFair:
            return "Fair";
        case NSProcessInfoThermalStateSerious:
            return "Serious";
        case NSProcessInfoThermalStateCritical:
            return "Critical";
        default:
            return "Unknown";
    }
}

@end
