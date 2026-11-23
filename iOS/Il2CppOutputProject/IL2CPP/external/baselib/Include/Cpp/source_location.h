#pragma once

#include <stdint.h>

namespace baselib
{
    BASELIB_CPP_INTERFACE
    {
        // The `baselib::source_location` struct represents certain information about the source code, such as file names, line numbers, and function names.
        // Previously, functions that desire to obtain this information about the call site (for logging, testing, or debugging purposes) must use macros
        // so that predefined macros like `__LINE__` and `__FILE__` are expanded in the context of the caller. The baselib::source_location struct provides
        // a better alternative.
        struct COMPILER_WARN_UNUSED_RESULT source_location
        {
            // Constructs a new `source_location` corresponding to the location of the call site
            COMPILER_WARN_UNUSED_RESULT constexpr static source_location current(
                const char* file_name = COMPILER_FILE,
                const char* function_name = COMPILER_FUNCTION,
                uint_least32_t line = COMPILER_LINE,
                uint_least32_t column = COMPILER_COLUMN
            ) noexcept
            {
                return { file_name, function_name, line, column };
            }

            // Returns the file name represented by this object
            COMPILER_WARN_UNUSED_RESULT constexpr const char* file_name() const noexcept { return _file_name; }

            // Returns the function name represented by this object
            COMPILER_WARN_UNUSED_RESULT constexpr const char* function_name() const noexcept { return _function_name; }

            // Returns the line number represented by this object
            COMPILER_WARN_UNUSED_RESULT constexpr uint_least32_t line() const noexcept { return _line; }

            // Returns the column number represented by this object
            // NOTE: Pre-C++20 supporting versions of the GCC compiler don't provide `__builtin_COLUMN` and so will be `0`
            //       when compiling with GCC
            COMPILER_WARN_UNUSED_RESULT constexpr uint_least32_t column() const noexcept { return _column; }

            constexpr source_location() noexcept = default;

        private:
            constexpr source_location(const char* file_name, const char* function_name, uint_least32_t line, uint_least32_t column) noexcept
                : _file_name(file_name)
                , _function_name(function_name)
                , _line(line)
                , _column(column)
            {}

            const char* _file_name = "";
            const char* _function_name = "";
            uint_least32_t _line{};
            uint_least32_t _column{};
        };
    }
}
