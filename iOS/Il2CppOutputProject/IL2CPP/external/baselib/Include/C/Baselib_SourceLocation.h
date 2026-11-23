#pragma once

#ifdef __cplusplus
BASELIB_C_INTERFACE
{
#endif

// Human readable about the original location of a piece of source code.
typedef struct Baselib_SourceLocation
{
    const char* file;
    const char* function;
    uint32_t    lineNumber;
} Baselib_SourceLocation;

// Macro to create source location in-place for the current line of code.
#define BASELIB_SOURCELOCATION Baselib_SourceLocation { COMPILER_FILE, COMPILER_FUNCTION, COMPILER_LINE }

#ifdef __cplusplus
}
#endif
