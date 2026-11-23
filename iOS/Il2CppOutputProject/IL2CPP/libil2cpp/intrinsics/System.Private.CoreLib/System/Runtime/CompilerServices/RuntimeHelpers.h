#pragma once
#include "il2cpp-config.h"

#include "codegen/il2cpp-codegen-metadata.h"
#include "codegen/il2cpp-codegen.h"

namespace il2cpp
{
namespace intrinsics
{
namespace System_Private_CoreLib
{
namespace System
{
namespace Runtime
{
namespace CompilerServices
{
    /* METHOD MAPPING
        Method: System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsBitwiseEquatable()
        AssemblyName: System.Private.CoreLib
    */
    inline bool il2cpp_intrinsic_runtime_helpers_is_bitwise_equatable()
    {
        IL2CPP_NOT_IMPLEMENTED_INTRINSIC_OPTIONAL_FIXME(il2cpp_intrinsic_runtime_helpers_is_bitwise_equatable);
        // TODO: This should be implemented with a conversion time check
        return false;
    }

    /* METHOD MAPPING
        Method: System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::ObjectHasComponentSize(System.Object)
        AssemblyName: System.Private.CoreLib
    */
    inline bool il2cpp_intrinsic_runtime_helpers_object_has_component_size(RuntimeObject* obj)
    {
        switch (obj->klass->byval_arg.type)
        {
            case IL2CPP_TYPE_STRING:
            case IL2CPP_TYPE_ARRAY:
            case IL2CPP_TYPE_SZARRAY:
                return true;
            default:
                return false;
        }
    }

    /* METHOD MAPPING
        Method: System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
        AssemblyName: System.Private.CoreLib
    */
    inline int32_t il2cpp_intrinsic_runtime_helpers_get_offset_to_string_data()
    {
        return offsetof(RuntimeString, chars);
    }

    /* METHOD MAPPING
        Method: System.Byte& System.Runtime.CompilerServices.RuntimeHelpers::GetRawData(System.Object)
        AssemblyName: System.Private.CoreLib
    */
    inline uint8_t* il2cpp_intrinsic_runtime_helpers_get_raw_data(RuntimeObject* obj)
    {
        return il2cpp_codegen_get_raw_data<uint8_t>(obj);
    }

    /* METHOD MAPPING
        Method: System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences()
        AssemblyName: System.Private.CoreLib
    */
    inline bool il2cpp_intrinsic_runtime_helpers_is_reference_or_contains_references(const RuntimeMethod* method)
    {
        return il2cpp_codegen_is_reference_or_contains_references(method);
    }

    /* METHOD MAPPING
        Method: System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::ObjectHasReferences(System.Object)
        AssemblyName: System.Private.CoreLib
    */
    inline bool il2cpp_intrinsic_runtime_helpers_object_has_references(RuntimeObject* obj)
    {
        NullCheck(obj);
        return obj->klass->has_references;
    }
} // namespace CompilerServices
} // namespace Runtime
} // namespace System
} // namespace System_Private_CoreLib
} // namespace intrinsics
} // namespace il2cpp
