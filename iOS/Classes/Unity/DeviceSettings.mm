#include <sys/types.h>
#include <sys/sysctl.h>

#include "UnityAppController.h"
#include "UnityView.h"
#include "DisplayManager.h"

// ad/vendor ids
#if UNITY_USES_IAD
#import <AdSupport/ASIdentifierManager.h>
#import <AppTrackingTransparency/ATTrackingManager.h>
#endif

extern "C" const char* UnityAdIdentifier()
{
    static const char* _ADID = NULL;

#if UNITY_USES_IAD
    static NSUUID* _AdsID = nil;

    NSUUID* adsID = ASIdentifierManager.sharedManager.advertisingIdentifier;
    if (![adsID isEqual: _AdsID])
    {
        _AdsID = adsID;
        if (_ADID)
            free((void*)_ADID);
        _ADID = AllocCString(_AdsID.UUIDString);
    }
#endif

    return _ADID;
}

extern "C" bool UnityGetLowPowerModeEnabled()
{
    return NSProcessInfo.processInfo.lowPowerModeEnabled;
}

extern "C" bool UnityGetWantsSoftwareDimming()
{
#if !PLATFORM_TVOS && !PLATFORM_VISIONOS
    return UIScreen.mainScreen.wantsSoftwareDimming;
#else
    return 0;
#endif
}

extern "C" void UnitySetWantsSoftwareDimming(bool enabled)
{
#if !PLATFORM_TVOS && !PLATFORM_VISIONOS
    UIScreen.mainScreen.wantsSoftwareDimming = enabled;
#endif
}

extern "C" bool UnityGetIosAppOnMac()
{
    return [NSProcessInfo processInfo].iOSAppOnMac ? 1 : 0;
}

extern "C" bool UnityAdTrackingEnabled()
{
#if UNITY_USES_IAD
    return ATTrackingManager.trackingAuthorizationStatus == ATTrackingManagerAuthorizationStatusAuthorized;
#else
    return false;
#endif
    return 0;
}

extern "C" const char* UnityVendorIdentifier()
{
    static const char*  _VendorID           = NULL;

    if (_VendorID == NULL)
        _VendorID = AllocCString([[UIDevice currentDevice].identifierForVendor UUIDString]);

    return _VendorID;
}

// UIDevice properties

#define QUERY_UIDEVICE_PROPERTY(FUNC, PROP)                                         \
    extern "C" const char* FUNC()                                                   \
    {                                                                               \
        static const char* value = NULL;                                            \
        if (value == NULL && [UIDevice instancesRespondToSelector:@selector(PROP)]) \
            value = AllocCString([UIDevice currentDevice].PROP);                    \
        return value;                                                               \
    }

QUERY_UIDEVICE_PROPERTY(UnityDeviceName, name)
QUERY_UIDEVICE_PROPERTY(UnitySystemName, systemName)
QUERY_UIDEVICE_PROPERTY(UnitySystemVersion, systemVersion)

#undef QUERY_UIDEVICE_PROPERTY

// hw info

extern "C" const char* UnityDeviceModel()
{
    static const char* _DeviceModel = NULL;

    if (_DeviceModel == NULL)
    {
        size_t size;
        ::sysctlbyname("hw.machine", NULL, &size, NULL, 0);

        char* model = (char*)::malloc(size + 1);
        ::sysctlbyname("hw.machine", model, &size, NULL, 0);
        model[size] = 0;

#if TARGET_OS_SIMULATOR
        if (!strncmp(model, "arm64", 5) || !strncmp(model, "x86_64", 6))
        {
            NSString* simModel = NSProcessInfo.processInfo.environment[@"SIMULATOR_MODEL_IDENTIFIER"];
            auto simModelLen = simModel.length;
            if (simModelLen == 0)
                model[0] = 0;
            else if (simModelLen <= size)
                strcpy(model, simModel.UTF8String);
            else
            {
                ::free(model);
                model = AllocCString(simModel);
            }
        }
#endif

        _DeviceModel = model;
    }

    return _DeviceModel;
}

// misc
extern "C" const char* UnitySystemLanguage()
{
    static const char* _SystemLanguage = NULL;

    if (_SystemLanguage == NULL)
    {
        NSArray* lang = [NSLocale preferredLanguages];
        if (lang.count > 0)
            _SystemLanguage = AllocCString(lang[0]);
    }

    return _SystemLanguage;
}

extern "C" unsigned UnityDeviceSupportedOrientations()
{
    int orientations = PortraitMask | LandscapeLeftMask | LandscapeRightMask;
    if (UnityDeviceSupportsUpsideDown())
        orientations |= PortraitUpsideDownMask;

    return orientations;
}

extern "C" bool UnityDeviceIsForceTouchSupported()
{
    return UnityGetUnityView().traitCollection.forceTouchCapability == UIForceTouchCapabilityAvailable;
}

extern "C" bool UnityDeviceCanShowWideColor()
{
#if PLATFORM_VISIONOS
    return true;
#else
    return UnityGetUnityView().traitCollection.displayGamut == UIDisplayGamutP3;
#endif
}

extern "C" const char* UnityDeviceUniqueIdentifier()
{
    static const char* _DeviceID = NULL;

    if (_DeviceID == NULL)
        _DeviceID = AllocCString([[UIDevice currentDevice].identifierForVendor UUIDString]);

    return _DeviceID;
}
