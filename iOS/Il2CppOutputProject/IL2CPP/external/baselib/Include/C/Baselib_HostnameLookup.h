#pragma once

// Baselib Hostname lookup
#include "Baselib_ErrorState.h"
#include "Baselib_NetworkAddress.h"

#ifdef __cplusplus
BASELIB_C_INTERFACE
{
#endif

typedef struct Baselib_NetworkAddress_HostnameLookupHandle
{
    // Giving the struct consistent size between C and C++
    uint8_t _placeholder;
} Baselib_NetworkAddress_HostnameLookupHandle;


BASELIB_API Baselib_NetworkAddress_HostnameLookupHandle* Baselib_NetworkAddress_HostnameLookup(char const* hostName, Baselib_NetworkAddress* dstAddress, Baselib_ErrorState* errorState);
BASELIB_API bool Baselib_NetworkAddress_HostnameLookupCheckStatus(Baselib_NetworkAddress_HostnameLookupHandle* const task, Baselib_NetworkAddress* dstAddress, Baselib_ErrorState* errorState);
BASELIB_API void Baselib_NetworkAddress_HostnameLookupCancel(Baselib_NetworkAddress_HostnameLookupHandle* const task);

#ifdef __cplusplus
}
#endif
