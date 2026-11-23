#import "CrashReporter.h"

static NSUncaughtExceptionHandler* gsCrashReporterUEHandler = nullptr;

static void UncaughtExceptionHandler(NSException *exception)
{
    NSLog(@"Uncaught exception: %@: %@\n%@", [exception name], [exception reason], [exception callStackSymbols]);
    if (gsCrashReporterUEHandler)
        gsCrashReporterUEHandler(exception);
}

static void InitObjCUEHandler()
{
    // Crash reporter sets its own handler, so we have to save it and call it manually
    gsCrashReporterUEHandler = NSGetUncaughtExceptionHandler();
    NSSetUncaughtExceptionHandler(&UncaughtExceptionHandler);
}

extern "C" void UnityInstallPostCrashCallback();
void InitCrashHandling()
{
#if ENABLE_CUSTOM_CRASH_REPORTER
    UnityInstallPostCrashCallback();
#endif

#if ENABLE_OBJC_UNCAUGHT_EXCEPTION_HANDLER
    InitObjCUEHandler();
#endif
}

extern "C" void UnityCleanupPostCrashCallBack();
void CleanupCrashHandling()
{
    gsCrashReporterUEHandler = nullptr;
#if ENABLE_CUSTOM_CRASH_REPORTER
    UnityCleanupPostCrashCallBack();
#endif
}