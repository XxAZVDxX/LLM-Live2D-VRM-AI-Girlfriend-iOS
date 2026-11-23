#include "RegisterFeatures.h"

extern "C" void UnityEnableGyroscope(bool value);
extern "C" void UnityEnableStylusTouch(bool value);

extern "C" bool Unity_il2cppNoExceptions()
{
#if UNITY_IL2CPP_NO_EXCEPTIONS
    return true;
#else
    return false;
#endif
}

void RegisterFeatures()
{
#if UNITY_USES_GYROSCOPE
    bool enableGyro = true;
#else
    bool enableGyro = false;
#endif
#if UNITY_USES_STYLUS
    bool enableStylus = true;
#else
    bool enableStylus = false;
#endif

    UnityEnableGyroscope(enableGyro);
    UnityEnableStylusTouch(enableStylus);
}
