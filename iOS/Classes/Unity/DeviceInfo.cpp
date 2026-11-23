#include <cstring>
#include <optional>

#include <CoreFoundation/CoreFoundation.h>
#include <CoreGraphics/CoreGraphics.h>

#include <UnityRuntime/UnityInternalInterface.h>


namespace
{

enum DeviceType : uint8_t
{
    iPhone = 1,
    iPad = 2,
    iPod = 3,
    AppleTV = 4,
};

struct DeviceTableEntry
{
    DeviceType deviceType;
    uint8_t majorGen;
    uint8_t minorGenMin;
    uint8_t minorGenMax;
    DeviceGeneration device;
    const char* deviceName;
};

#define DEVICE_TABLE_ENTRY(type, maj, min, max, device) { type, maj, min, max, device, #device}

const DeviceTableEntry DeviceTable[] =
{
    DEVICE_TABLE_ENTRY(iPhone, 2, 1, 1, deviceiPhone3GS),
    DEVICE_TABLE_ENTRY(iPhone, 3, 1, 3, deviceiPhone4),
    DEVICE_TABLE_ENTRY(iPhone, 4, 1, 1, deviceiPhone4S),
    DEVICE_TABLE_ENTRY(iPhone, 5, 3, 4, deviceiPhone5C),
    DEVICE_TABLE_ENTRY(iPhone, 5, 1, 2, deviceiPhone5),
    DEVICE_TABLE_ENTRY(iPhone, 6, 1, 2, deviceiPhone5S),
    DEVICE_TABLE_ENTRY(iPhone, 7, 2, 2, deviceiPhone6),
    DEVICE_TABLE_ENTRY(iPhone, 7, 1, 1, deviceiPhone6Plus),
    DEVICE_TABLE_ENTRY(iPhone, 8, 1, 1, deviceiPhone6S),
    DEVICE_TABLE_ENTRY(iPhone, 8, 2, 2, deviceiPhone6SPlus),
    DEVICE_TABLE_ENTRY(iPhone, 8, 4, 4, deviceiPhoneSE1Gen),
    DEVICE_TABLE_ENTRY(iPhone, 9, 1, 1, deviceiPhone7),
    DEVICE_TABLE_ENTRY(iPhone, 9, 3, 3, deviceiPhone7),
    DEVICE_TABLE_ENTRY(iPhone, 9, 2, 2, deviceiPhone7Plus),
    DEVICE_TABLE_ENTRY(iPhone, 9, 4, 4, deviceiPhone7Plus),
    DEVICE_TABLE_ENTRY(iPhone, 10, 1, 1, deviceiPhone8),
    DEVICE_TABLE_ENTRY(iPhone, 10, 4, 4, deviceiPhone8),
    DEVICE_TABLE_ENTRY(iPhone, 10, 2, 2, deviceiPhone8Plus),
    DEVICE_TABLE_ENTRY(iPhone, 10, 5, 5, deviceiPhone8Plus),
    DEVICE_TABLE_ENTRY(iPhone, 10, 3, 3, deviceiPhoneX),
    DEVICE_TABLE_ENTRY(iPhone, 10, 6, 6, deviceiPhoneX),
    DEVICE_TABLE_ENTRY(iPhone, 11, 8, 8, deviceiPhoneXR),
    DEVICE_TABLE_ENTRY(iPhone, 11, 2, 2, deviceiPhoneXS),
    DEVICE_TABLE_ENTRY(iPhone, 11, 4, 4, deviceiPhoneXSMax),
    DEVICE_TABLE_ENTRY(iPhone, 11, 6, 6, deviceiPhoneXSMax),
    DEVICE_TABLE_ENTRY(iPhone, 12, 1, 1, deviceiPhone11),
    DEVICE_TABLE_ENTRY(iPhone, 12, 3, 3, deviceiPhone11Pro),
    DEVICE_TABLE_ENTRY(iPhone, 12, 5, 5, deviceiPhone11ProMax),
    DEVICE_TABLE_ENTRY(iPhone, 12, 8, 8, deviceiPhoneSE2Gen),
    DEVICE_TABLE_ENTRY(iPhone, 13, 1, 1, deviceiPhone12Mini),
    DEVICE_TABLE_ENTRY(iPhone, 13, 2, 2, deviceiPhone12),
    DEVICE_TABLE_ENTRY(iPhone, 13, 3, 3, deviceiPhone12Pro),
    DEVICE_TABLE_ENTRY(iPhone, 13, 4, 4, deviceiPhone12ProMax),
    DEVICE_TABLE_ENTRY(iPhone, 14, 4, 4, deviceiPhone13Mini),
    DEVICE_TABLE_ENTRY(iPhone, 14, 5, 5, deviceiPhone13),
    DEVICE_TABLE_ENTRY(iPhone, 14, 2, 2, deviceiPhone13Pro),
    DEVICE_TABLE_ENTRY(iPhone, 14, 3, 3, deviceiPhone13ProMax),
    DEVICE_TABLE_ENTRY(iPhone, 14, 6, 6, deviceiPhoneSE3Gen),
    DEVICE_TABLE_ENTRY(iPhone, 14, 7, 7, deviceiPhone14),
    DEVICE_TABLE_ENTRY(iPhone, 14, 8, 8, deviceiPhone14Plus),
    DEVICE_TABLE_ENTRY(iPhone, 15, 2, 2, deviceiPhone14Pro),
    DEVICE_TABLE_ENTRY(iPhone, 15, 3, 3, deviceiPhone14ProMax),
    DEVICE_TABLE_ENTRY(iPhone, 15, 4, 4, deviceiPhone15),
    DEVICE_TABLE_ENTRY(iPhone, 15, 5, 5, deviceiPhone15Plus),
    DEVICE_TABLE_ENTRY(iPhone, 16, 1, 1, deviceiPhone15Pro),
    DEVICE_TABLE_ENTRY(iPhone, 16, 2, 2, deviceiPhone15ProMax),
    DEVICE_TABLE_ENTRY(iPhone, 17, 3, 3, deviceiPhone16),
    DEVICE_TABLE_ENTRY(iPhone, 17, 5, 5, deviceiPhone16e),
    DEVICE_TABLE_ENTRY(iPhone, 17, 4, 4, deviceiPhone16Plus),
    DEVICE_TABLE_ENTRY(iPhone, 17, 1, 1, deviceiPhone16Pro),
    DEVICE_TABLE_ENTRY(iPhone, 17, 2, 2, deviceiPhone16ProMax),
    DEVICE_TABLE_ENTRY(iPhone, 18, 3, 3, deviceiPhone17),
    DEVICE_TABLE_ENTRY(iPhone, 18, 4, 4, deviceiPhoneAir),
    DEVICE_TABLE_ENTRY(iPhone, 18, 1, 1, deviceiPhone17Pro),
    DEVICE_TABLE_ENTRY(iPhone, 18, 2, 2, deviceiPhone17ProMax),
    DEVICE_TABLE_ENTRY(iPhone, 18, 5, 5, deviceiPhone17e),
    DEVICE_TABLE_ENTRY(iPhone, 19, 2, 2, deviceiPhone18Pro),
    DEVICE_TABLE_ENTRY(iPhone, 19, 3, 3, deviceiPhone18ProMax),
    DEVICE_TABLE_ENTRY(iPhone, 19, 4, 4, deviceiPhoneDuo),
    DEVICE_TABLE_ENTRY(iPhone, 19, 7, 7, deviceiPhone18ProMax),

    DEVICE_TABLE_ENTRY(iPod, 4, 1, 1, deviceiPodTouch4Gen),
    DEVICE_TABLE_ENTRY(iPod, 5, 1, 1, deviceiPodTouch5Gen),
    DEVICE_TABLE_ENTRY(iPod, 7, 1, 1, deviceiPodTouch6Gen),
    DEVICE_TABLE_ENTRY(iPod, 9, 1, 1, deviceiPodTouch7Gen),

    DEVICE_TABLE_ENTRY(iPad, 2, 5, 7, deviceiPadMini1Gen),
    DEVICE_TABLE_ENTRY(iPad, 4, 4, 6, deviceiPadMini2Gen),
    DEVICE_TABLE_ENTRY(iPad, 4, 7, 9, deviceiPadMini3Gen),
    DEVICE_TABLE_ENTRY(iPad, 5, 1, 2, deviceiPadMini4Gen),
    DEVICE_TABLE_ENTRY(iPad, 11, 1, 2, deviceiPadMini5Gen),
    DEVICE_TABLE_ENTRY(iPad, 14, 1, 2, deviceiPadMini6Gen),
    DEVICE_TABLE_ENTRY(iPad, 2, 1, 4, deviceiPad2Gen),
    DEVICE_TABLE_ENTRY(iPad, 3, 1, 3, deviceiPad3Gen),
    DEVICE_TABLE_ENTRY(iPad, 3, 4, 6, deviceiPad4Gen),
    DEVICE_TABLE_ENTRY(iPad, 6, 11, 12, deviceiPad5Gen),
    DEVICE_TABLE_ENTRY(iPad, 7, 5, 6, deviceiPad6Gen),
    DEVICE_TABLE_ENTRY(iPad, 7, 11, 12, deviceiPad7Gen),
    DEVICE_TABLE_ENTRY(iPad, 12, 1, 2, deviceiPad9Gen),
    DEVICE_TABLE_ENTRY(iPad, 4, 1, 3, deviceiPadAir1),
    DEVICE_TABLE_ENTRY(iPad, 5, 3, 4, deviceiPadAir2),
    DEVICE_TABLE_ENTRY(iPad, 11, 3, 4, deviceiPadAir3Gen),
    DEVICE_TABLE_ENTRY(iPad, 6, 7, 8, deviceiPadPro1Gen),
    DEVICE_TABLE_ENTRY(iPad, 7, 1, 2, deviceiPadPro2Gen),
    DEVICE_TABLE_ENTRY(iPad, 6, 3, 4, deviceiPadPro10Inch1Gen),
    DEVICE_TABLE_ENTRY(iPad, 7, 3, 4, deviceiPadPro10Inch2Gen),
    DEVICE_TABLE_ENTRY(iPad, 8, 1, 4, deviceiPadPro11Inch),
    DEVICE_TABLE_ENTRY(iPad, 8, 9, 10, deviceiPadPro11Inch2Gen),
    DEVICE_TABLE_ENTRY(iPad, 13, 6, 7, deviceiPadPro11Inch3Gen),
    DEVICE_TABLE_ENTRY(iPad, 8, 5, 8, deviceiPadPro3Gen),
    DEVICE_TABLE_ENTRY(iPad, 8, 11, 12, deviceiPadPro4Gen),
    DEVICE_TABLE_ENTRY(iPad, 13, 10, 11, deviceiPadPro5Gen),
    DEVICE_TABLE_ENTRY(iPad, 11, 6, 7, deviceiPad8Gen),
    DEVICE_TABLE_ENTRY(iPad, 13, 1, 2, deviceiPadAir4Gen),
    DEVICE_TABLE_ENTRY(iPad, 13, 16, 17, deviceiPadAir5Gen),
    DEVICE_TABLE_ENTRY(iPad, 14, 5, 6, deviceiPadPro6Gen),
    DEVICE_TABLE_ENTRY(iPad, 14, 3, 4, deviceiPadPro11Inch4Gen),
    DEVICE_TABLE_ENTRY(iPad, 13, 18, 19, deviceiPad10Gen),


    DEVICE_TABLE_ENTRY(AppleTV, 5, 3, 3, deviceAppleTVHD),
    DEVICE_TABLE_ENTRY(AppleTV, 6, 2, 2, deviceAppleTV4K),
    DEVICE_TABLE_ENTRY(AppleTV, 11, 1, 1, deviceAppleTV4K2Gen),
    DEVICE_TABLE_ENTRY(AppleTV, 14, 1, 1, deviceAppleTV4K3Gen),
};

#undef DEVICE_TABLE_ENTRY

struct DeviceCutoutInfo
{
    CGSize ratioToScreen;
    bool hasCutout;
};

std::optional<DeviceCutoutInfo> gDeviceCutoutInfo;


const DeviceTableEntry* ParseDeviceGeneration(const char* model, std::optional<DeviceType>& deviceType)
{
    if (!std::strncmp(model, "iPhone", 6))
    {
        deviceType = iPhone;
        model += 6;
    }
    else if (!std::strncmp(model, "iPad", 4))
    {
        deviceType = iPad;
        model += 4;
    }
    else if (!std::strncmp(model, "iPod", 4))
    {
        deviceType = iPod;
        model += 4;
    }
    else if (!std::strncmp(model, "AppleTV", 7))
    {
        deviceType = AppleTV;
        model += 7;
    }
    else
    {
        ::printf("Unrecognized device type: %s\n", model);
        return nullptr;
    }

    char* endPtr;
    auto majorGen = std::strtol(model, &endPtr, 10);
    long minorGen = 0;
    if (*endPtr != '\0')
    {
        minorGen = std::strtol(endPtr + 1, &endPtr, 10);
    }

    if (std::strlen(endPtr) == 0)
    {
        for (auto& deviceInfo : DeviceTable)
        {
            if (deviceType != deviceInfo.deviceType)
                continue;
            if (majorGen != deviceInfo.majorGen)
                continue;
            if (minorGen < deviceInfo.minorGenMin || minorGen > deviceInfo.minorGenMax)
                continue;
            return &deviceInfo;
        }
    }

    return nullptr;
}

DeviceGeneration UnknownDeviceGenerationForType(const std::optional<DeviceType>& deviceType)
{
    if (deviceType.has_value())
        switch (deviceType.value())
        {
            case iPhone:
                return deviceiPhoneUnknown;
            case iPad:
                return deviceiPadUnknown;
            case iPod:
                return deviceiPodTouchUnknown;
            case AppleTV:
                return deviceAppleTVUnknown;
        }

    return deviceUnknown;
}

std::optional<CGSize> CutoutRatioForDeviceGeneration(DeviceGeneration generation)
{
    switch (generation)
    {
        case deviceiPhone14:
        case deviceiPhone16e:
        case deviceiPhone17e:
            return CGSizeMake(0.415, 0.04);
        case deviceiPhone14Plus:
            return CGSizeMake(0.377, 0.036);
        case deviceiPhone14Pro:
        case deviceiPhone15:
        case deviceiPhone15Pro:
        case deviceiPhone16:
        case deviceiPhone16Pro:
        case deviceiPhone17:
        case deviceiPhone17Pro:
            return CGSizeMake(0.318, 0.057);
        case deviceiPhone18Pro:
            return CGSizeMake(0.240, 0.059);
        case deviceiPhone14ProMax:
        case deviceiPhone15ProMax:
        case deviceiPhone15Plus:
        case deviceiPhone16Plus:
        case deviceiPhone16ProMax:
        case deviceiPhone17ProMax:
            return CGSizeMake(0.292, 0.052);
        case deviceiPhone18ProMax:
            return CGSizeMake(0.220, 0.055);
        case deviceiPhoneAir:
            return CGSizeMake(0.299, 0.062);
        case deviceiPhone13ProMax:
            return CGSizeMake(0.373, 0.036);
        case deviceiPhone13Pro:
        case deviceiPhone13:
            return CGSizeMake(0.4148, 0.0399);
        case deviceiPhone13Mini:
            return CGSizeMake(0.4644, 0.0462);
        case deviceiPhone12ProMax:
            return CGSizeMake(0.4897, 0.0346);
        case deviceiPhone12Pro:
        case deviceiPhone12:
            return CGSizeMake(0.5393, 0.0379);
        case deviceiPhone12Mini:
            return CGSizeMake(0.604, 0.0424);
        case deviceiPhone11ProMax:
            return CGSizeMake(0.5057, 0.0335);
        case deviceiPhone11Pro:
            return CGSizeMake(0.5583, 0.037);
        case deviceiPhone11:
        case deviceiPhoneXR:
            return CGSizeMake(0.5568, 0.0398);
        case deviceiPhoneXSMax:
            return CGSizeMake(0.4884, 0.0333);
        case deviceiPhoneX:
        case deviceiPhoneXS:
            return CGSizeMake(0.5391, 0.0368);
        default:
            return std::optional<CGSize>();
    }
}

DeviceCutoutInfo& GetCutoutInfo()
{
    if (!gDeviceCutoutInfo.has_value())
    {
        DeviceCutoutInfo info{};
        if (auto ratio = CutoutRatioForDeviceGeneration(UnityDeviceGeneration()))
        {
            info.hasCutout = true;
            info.ratioToScreen = ratio.value();
        }

        gDeviceCutoutInfo = info;
    }

    return gDeviceCutoutInfo.value();
}

} // annonymous namespace


extern "C"
{

DeviceGeneration UnityParseDeviceGeneration(const char* model)
{
    std::optional<DeviceType> deviceType;
    if (auto entry = ParseDeviceGeneration(model, deviceType))
        return entry->device;
    return UnknownDeviceGenerationForType(deviceType);
}

DeviceGeneration UnityDeviceGeneration()
{
    static DeviceTableEntry UnkownDeviceEntry;
    static const DeviceTableEntry* sThisDevice = nullptr;

    if (sThisDevice == nullptr)
    {
        std::optional<DeviceType> deviceType;
        sThisDevice = ParseDeviceGeneration(UnityDeviceModel(), deviceType);
        if (sThisDevice == nullptr)
        {
            UnkownDeviceEntry.device = UnknownDeviceGenerationForType(deviceType);
            sThisDevice = &UnkownDeviceEntry;
        }
    }

    return sThisDevice->device;
}

bool UnityDeviceHasCutout()
{
    return GetCutoutInfo().hasCutout;
}

// Apple does not provide the cutout width and height in points/pixels. They *do* however list the
// size of the cutout and screen in mm for accessory makers. We can use this information to calculate the percentage of the screen is cutout.
// This information can be found here - https://developer.apple.com/accessories/Accessory-Design-Guidelines.pdf
CGSize UnityGetCutoutToScreenRatio()
{
    return GetCutoutInfo().ratioToScreen;
}

// Devices with a cutout do not support Portrait UpsideDown orientation.
bool UnityDeviceSupportsUpsideDown()
{
    return !UnityDeviceHasCutout();
}

bool UnityDeviceIsStylusTouchSupported()
{
    if (std::strncmp(UnityDeviceModel(), "iPad", 4) != 0)
        return false;

    switch (UnityDeviceGeneration())
    {
        case deviceiPad2Gen:
        case deviceiPad3Gen:
        case deviceiPad4Gen:
        case deviceiPad5Gen:
        case deviceiPadMini1Gen:
        case deviceiPadMini2Gen:
        case deviceiPadMini3Gen:
        case deviceiPadMini4Gen:
        case deviceiPadAir1:
        case deviceiPadAir2:
            return false;
        default:
            return true;
    }
}

float UnityDeviceDPI()
{
    static float _DeviceDPI = -1.0f;

    if (_DeviceDPI < 0.0f)
    {
        switch (UnityDeviceGeneration())
        {
            // iPhone
            case deviceiPhone3GS:
                _DeviceDPI = 163.0f; break;
            case deviceiPhone4:
            case deviceiPhone4S:
            case deviceiPhone5:
            case deviceiPhone5C:
            case deviceiPhone5S:
            case deviceiPhone6:
            case deviceiPhone6S:
            case deviceiPhoneSE1Gen:
            case deviceiPhone7:
            case deviceiPhone8:
            case deviceiPhoneXR:
            case deviceiPhone11:
            case deviceiPhoneSE2Gen:
            case deviceiPhoneSE3Gen:
                _DeviceDPI = 326.0f; break;
            case deviceiPhone6Plus:
            case deviceiPhone6SPlus:
            case deviceiPhone7Plus:
            case deviceiPhone8Plus:
                _DeviceDPI = 401.0f; break;
            case deviceiPhoneX:
            case deviceiPhoneXS:
            case deviceiPhoneXSMax:
            case deviceiPhone11Pro:
            case deviceiPhone11ProMax:
            case deviceiPhone12ProMax:
            case deviceiPhone13ProMax:
            case deviceiPhone14Plus:
                _DeviceDPI = 458.0f; break;
            case deviceiPhone12:
            case deviceiPhone12Pro:
            case deviceiPhone13:
            case deviceiPhone13Pro:
            case deviceiPhone14:
            case deviceiPhone14Pro:
            case deviceiPhone14ProMax:
            case deviceiPhone15:
            case deviceiPhone15Plus:
            case deviceiPhone15Pro:
            case deviceiPhone15ProMax:
            case deviceiPhone16:
            case deviceiPhone16e:
            case deviceiPhone16Plus:
            case deviceiPhone16Pro:
            case deviceiPhone16ProMax:
            case deviceiPhone17:
            case deviceiPhoneAir:
            case deviceiPhone17Pro:
            case deviceiPhone17ProMax:
            case deviceiPhone17e:
            case deviceiPhone18Pro:
            case deviceiPhone18ProMax:
            case deviceiPhoneDuo:
                _DeviceDPI = 460.0f; break;
            case deviceiPhone12Mini:
            case deviceiPhone13Mini:
                _DeviceDPI = 476.0f; break;

            // iPad
            case deviceiPad2Gen:
                _DeviceDPI = 132.0f; break;
            case deviceiPad3Gen:
            case deviceiPad4Gen:        // iPad retina
            case deviceiPadAir1:
            case deviceiPadAir2:
            case deviceiPadAir3Gen:
            case deviceiPadPro1Gen:
            case deviceiPadPro10Inch1Gen:
            case deviceiPadPro2Gen:
            case deviceiPadPro10Inch2Gen:
            case deviceiPad5Gen:
            case deviceiPad6Gen:
            case deviceiPadPro11Inch:
            case deviceiPadPro3Gen:
            case deviceiPadPro11Inch2Gen:
            case deviceiPadPro11Inch3Gen:
            case deviceiPadPro4Gen:
            case deviceiPadPro5Gen:
            case deviceiPad8Gen:
            case deviceiPadAir4Gen:
            case deviceiPad9Gen:
            case deviceiPadAir5Gen:
                _DeviceDPI = 264.0f; break;
            case deviceiPad7Gen:
                _DeviceDPI = 326.0f; break;

            // iPad mini
            case deviceiPadMini1Gen:
                _DeviceDPI = 163.0f; break;
            case deviceiPadMini2Gen:
            case deviceiPadMini3Gen:
            case deviceiPadMini4Gen:
            case deviceiPadMini5Gen:
            case deviceiPadMini6Gen:
                _DeviceDPI = 326.0f; break;

            // iPod
            case deviceiPodTouch4Gen:
            case deviceiPodTouch5Gen:
            case deviceiPodTouch6Gen:
            case deviceiPodTouch7Gen:
                _DeviceDPI = 326.0f; break;

            // unknown (new) devices
            case deviceiPhoneUnknown:
                _DeviceDPI = 326.0f; break;
            case deviceiPadUnknown:
            case deviceiPadPro6Gen:
            case deviceiPadPro11Inch4Gen:
            case deviceiPad10Gen:
                _DeviceDPI = 264.0f; break;
            case deviceiPodTouchUnknown:
                _DeviceDPI = 326.0f; break;

            // the reset, to account for all (or get compiler warning)
            case deviceUnknown:
            case deviceAppleTV1Gen:
            case deviceAppleTV2Gen:
            case deviceAppleTV4K2Gen:
            case deviceAppleTV4K3Gen:
            case deviceAppleTVUnknown:
                break;
        }

        // If we didn't find DPI, set it to "unknown" value.
        if (_DeviceDPI < 0.0f)
            _DeviceDPI = 0.0f;
    }

    return _DeviceDPI;
}



// For test purposes
void UnityTest_IterateDeviceGenerations(void (*callback)(void* ctx, uint32_t generationValue, const char* generationName), void* context)
{
    for (const auto& entry : DeviceTable)
        callback(context, entry.device, entry.deviceName);

    // unkowns
    callback(context, deviceUnknown, "deviceUnknown");
    callback(context, deviceiPhoneUnknown, "deviceiPhoneUnknown");
    callback(context, deviceiPadUnknown, "deviceiPadUnknown");
    callback(context, deviceiPodTouchUnknown, "deviceiPodTouchUnknown");
    callback(context, deviceAppleTVUnknown, "deviceAppleTVUnknown");
}

} // extern "C"
