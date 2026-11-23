#include <UnityRuntime/UnityInternalInterface.h>

// These helpers that are wrappers on top of other functions
// could be inline in header, but swift does not support that well and leads to linker errors

extern "C" {

void UnityPause(int pause)
{
    UnitySetPlayerPause(pause ? kUnityPauseModePause : kUnityPauseModeResume);
}

}
