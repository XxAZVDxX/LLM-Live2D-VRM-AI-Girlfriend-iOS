#include "UnityAppController+UnityInterface.h"
#include "UnityAppController+Rendering.h"


@implementation UnityAppController (UnityInterface)

- (BOOL)paused
{
    return UnityIsPaused();
}

- (void)setPaused:(BOOL)pause
{
    const UnityPauseMode newPause = pause ? kUnityPauseModePause : kUnityPauseModeResume;

    UnitySetPlayerPause(newPause);
}

@end
