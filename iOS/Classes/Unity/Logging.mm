#include <sys/sysctl.h>
#include <os/log.h>
#include "Logging.h"
#include <UnityRuntime/UnityInternalInterface.h>

#if !TARGET_OS_SIMULATOR

// From https://stackoverflow.com/questions/4744826/detecting-if-ios-app-is-run-in-debugger
static bool IsDebuggerAttachedToConsole(void)
// Returns true if the current process is being debugged (either
// running under the debugger or has a debugger attached post facto).
{
    int                 junk;
    int                 mib[4];
    struct kinfo_proc   info;
    size_t              size;

    // Initialize the flags so that, if sysctl fails for some bizarre
    // reason, we get a predictable result.

    info.kp_proc.p_flag = 0;

    // Initialize mib, which tells sysctl the info we want, in this case
    // we're looking for information about a specific process ID.

    mib[0] = CTL_KERN;
    mib[1] = KERN_PROC;
    mib[2] = KERN_PROC_PID;
    mib[3] = getpid();

    // Call sysctl.

    size = sizeof(info);
    junk = sysctl(mib, sizeof(mib) / sizeof(*mib), &info, &size, NULL, 0);
    assert(junk == 0);

    // We're being debugged if the P_TRACED flag is set.
    // But if we are starting app on device (and make debugger wait and attach after start)
    //   it will NOT connect stout (only stderr, used by nslog)
    // Hence we also check that stoud is rerouted
    return ((info.kp_proc.p_flag & P_TRACED) != 0) && isatty(STDOUT_FILENO);
}

static bool LogToNSLogHandler(Unity_LogType logType, const char* log, size_t logLength)
{
    NSString *message = [[NSString alloc] initWithBytes:log length:logLength encoding:NSUTF8StringEncoding];
    os_log_with_type(OS_LOG_DEFAULT, OS_LOG_TYPE_DEFAULT, "%{public}@", message);
    return true;
}

#endif


extern "C" void UnitySetupDefaultLogHandler()
{
#if !TARGET_OS_SIMULATOR
    // Use NSLog logging if a debugger is not attached, otherwise we write to stdout.
    if (!IsDebuggerAttachedToConsole())
        UnitySetLogEntryHandler(LogToNSLogHandler);
#endif
}
