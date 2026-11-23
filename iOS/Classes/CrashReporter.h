#pragma once

// Enabling this will add a custom Objective-C Uncaught Exception handler, which will print out
// exception information to console.
#define ENABLE_OBJC_UNCAUGHT_EXCEPTION_HANDLER 1

// Enable custom crash reporter to capture crashes. Crash logs will be available to scripts via
// CrashReport API.
#define ENABLE_CUSTOM_CRASH_REPORTER 0

void InitCrashHandling();
void CleanupCrashHandling();