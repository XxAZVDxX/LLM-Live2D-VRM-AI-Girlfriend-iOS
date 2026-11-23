#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};

struct Action_1_tDD7F6AA782975E408989CD84C7959D75DB685F6D;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3;
struct Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752;
struct Dictionary_2_tB68E9332E12B22EA3DC2254F545FFD963C1B6700;
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
struct KeyCollection_tB50BEFF3636380E93B5C0AEA76CB279BB00E5B33;
struct KeyCollection_tD9032E0962411C44A6443F0C053081ACD0772939;
struct List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674;
struct ValueCollection_t8783A312F146D3AC8D9DFB7526585CFB2864DF28;
struct ValueCollection_tFB66ADDF7178D1D2E4F3590197E327062A26C55A;
struct EntryU5BU5D_tBD0330F799D429A38AB9AEBB0BE6B7F9F7FD6F1E;
struct EntryU5BU5D_t830A09872DD39B176191BC829DD457AF97C11B83;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct AwaitableCompletionSource_t506E3C90A2336F16A9EE64B62710798F5AB97AC1;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MethodInfo_t;
struct ObjectLoadOperationBase_tBF7081C057C381D9CBBAA9AB212CD9C8CDAD18CB;
struct ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral357549E695B09E9E3A66B4707B24D6EB0E305E13;
IL2CPP_EXTERN_C String_t* _stringLiteral38C452754F43614AAA04BB6DD69C88125DCE8BFC;
IL2CPP_EXTERN_C String_t* _stringLiteral454E3A0E988DB5D845192813E3952E9F418B874C;
IL2CPP_EXTERN_C String_t* _stringLiteralD67967C7128B5D18B95775AFA2D08220B63241DF;
IL2CPP_EXTERN_C const RuntimeMethod* ContentLoadingSystem_ProcessResults_m9FDD963C16B2279D0B7166CB2F38DE74469C5437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0CEE13D9651FDA7D19F1D4A825202D6DFA99E74C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m38E48436BE492DD04F8E86D3E0947CB98038FF08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3B44806E67D320E9491E941AF2509EDD60E3CD2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEDC188731E8A1B9B1F95C8A59006350A9F735EF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m36E61E82525E3D419991039822CAA987D5B8745A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m514A917546C862D189702294180E2CD8F1EC7920_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tBC102232219AAA987F1776F6B63E666A27005643 
{
};
struct Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tBD0330F799D429A38AB9AEBB0BE6B7F9F7FD6F1E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB50BEFF3636380E93B5C0AEA76CB279BB00E5B33* ____keys;
	ValueCollection_t8783A312F146D3AC8D9DFB7526585CFB2864DF28* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t830A09872DD39B176191BC829DD457AF97C11B83* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tD9032E0962411C44A6443F0C053081ACD0772939* ____keys;
	ValueCollection_tFB66ADDF7178D1D2E4F3590197E327062A26C55A* ____values;
	RuntimeObject* ____syncRoot;
};
struct List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674  : public RuntimeObject
{
	ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct AwaitableCompletionSource_t506E3C90A2336F16A9EE64B62710798F5AB97AC1  : public RuntimeObject
{
	int32_t ____state;
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
};
struct ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96  : public RuntimeObject
{
};
struct NativeLoadingSystem_t89A0BEE07EBA195076C513EC7EF22C236C07BF22  : public RuntimeObject
{
};
struct ObjectLoadOperationBase_tBF7081C057C381D9CBBAA9AB212CD9C8CDAD18CB  : public RuntimeObject
{
	bool ___m_IsDone;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 
{
	uint64_t ___value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A 
{
	uint64_t ___value;
};
struct AsyncResultType_t629EC83330B929FAF7E3FF77E21CD246073E4EFF 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 
{
	intptr_t ___m_Ptr;
};
struct ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4  : public RuntimeObject
{
	ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A ___m_OperationHandle;
	bool ___m_IsDone;
	Action_1_tDD7F6AA782975E408989CD84C7959D75DB685F6D* ___m_Completed;
	AwaitableCompletionSource_t506E3C90A2336F16A9EE64B62710798F5AB97AC1* ___m_CompletionSource;
};
struct ReturnCode_t33112C6A6E1D822F3FD0999A2DB1D2A09160BE82 
{
	int32_t ___value__;
};
struct AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2 
{
	ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___handle;
	int32_t ___type;
	int32_t ___resultCode;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___objectId;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Action_1_tDD7F6AA782975E408989CD84C7959D75DB685F6D  : public MulticastDelegate_t
{
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_StaticFields
{
	ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* ___s_emptyArray;
};
struct ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields
{
	LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 ___s_ResultBuffer;
	Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3* ___s_PendingLoadOperations;
	Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752* ___s_PendingReleaseOperations;
	bool ___s_Initialized;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918  : public RuntimeArray
{
	ALIGN_FIELD (8) ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 m_Items[1];

	inline ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m532D4ED9684EF9B4C55B86DA2D4A4A6F57B6D8FC_gshared (Dictionary_2_tB68E9332E12B22EA3DC2254F545FFD963C1B6700* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m514A917546C862D189702294180E2CD8F1EC7920 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024_inline (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* List_1_ToArray_m36E61E82525E3D419991039822CAA987D5B8745A (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF52E95ADE5F0D23B4E6798D9E8C5BE9C06F0776E_gshared (Dictionary_2_tB68E9332E12B22EA3DC2254F545FFD963C1B6700* __this, uint64_t ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m28AFC3F6D5F6FE74B5CC7A3E42AC5CC6FFE0F2B8 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;

inline void Action_1_Invoke_m8B9C9017DBD04A20FEE53A2D6704B1E5099DF22D_inline (Action_1_tDD7F6AA782975E408989CD84C7959D75DB685F6D* __this, ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDD7F6AA782975E408989CD84C7959D75DB685F6D*, ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4*, const RuntimeMethod*))Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AwaitableCompletionSource_TrySetResult_mAA234A8178F43A3E16449AF3FBF495BA140A6925 (AwaitableCompletionSource_t506E3C90A2336F16A9EE64B62710798F5AB97AC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentLoadingSystem_Initialize_mCE273FBC1813A9F111F15CC50E26A72E18F05BCD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingResponseQueue__ctor_m479CAEFD71FC607DFDC0F8A6DFF0A3BB59F53F4F (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* __this, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_mEDC188731E8A1B9B1F95C8A59006350A9F735EF4 (Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3*, const RuntimeMethod*))Dictionary_2__ctor_m532D4ED9684EF9B4C55B86DA2D4A4A6F57B6D8FC_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m3B44806E67D320E9491E941AF2509EDD60E3CD2D (Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752*, const RuntimeMethod*))Dictionary_2__ctor_m532D4ED9684EF9B4C55B86DA2D4A4A6F57B6D8FC_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContentLoadingSystem_ProcessResult_m0700BD08BB1E20D9606C8D83F1F97F1103C15779 (AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m514A917546C862D189702294180E2CD8F1EC7920 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024_inline (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadingResponseQueue_ConsumeResults_m9601694BAF1A37108E850446F4DCA0E8F393C721 (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* __this, AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* ___0_outResults, int32_t ___1_maxResults, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* List_1_ToArray_m36E61E82525E3D419991039822CAA987D5B8745A (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLoadingSystem_ReleaseAsync_m69B2DC503E59200F0191B7840775D59BB9B92EBB (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* ___0_handles, int32_t ___1_count, LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 ___2_resultQueue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLoadingSystem_WaitForReleaseCompletion_m7D624C0B012EA0A7ABBA00937C30721259036BC3 (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* ___0_handles, int32_t ___1_count, const RuntimeMethod* method) ;
inline bool Dictionary_2_Remove_m38E48436BE492DD04F8E86D3E0947CB98038FF08 (Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3* __this, uint64_t ___0_key, ObjectLoadOperationBase_tBF7081C057C381D9CBBAA9AB212CD9C8CDAD18CB** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3*, uint64_t, ObjectLoadOperationBase_tBF7081C057C381D9CBBAA9AB212CD9C8CDAD18CB**, const RuntimeMethod*))Dictionary_2_Remove_mF52E95ADE5F0D23B4E6798D9E8C5BE9C06F0776E_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline bool Dictionary_2_Remove_m0CEE13D9651FDA7D19F1D4A825202D6DFA99E74C (Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752* __this, uint64_t ___0_key, ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752*, uint64_t, ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4**, const RuntimeMethod*))Dictionary_2_Remove_mF52E95ADE5F0D23B4E6798D9E8C5BE9C06F0776E_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReleaseOperation_Complete_mBCF511A6D5252CE4E677E1FF0A2DBF5CE5329E57 (ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceOperationHandle_Equals_mFFBF3B3E68758032C6F105DD230D270E46D87774 (ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A* __this, ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceOperationHandle_Equals_m53A2FE078FBA96E8EF01E7D30E98086E4FF68FF2 (ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceOperationHandle_GetHashCode_m6A5D1D001BC417B642AA036707D775E81319B7E4 (ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceHandle_Equals_m6485C5F9CCB6ED6E6E4CCF1C70E60DF77B72D1AA (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceHandle_Equals_m64028F814C73E48411A4E4AAC6A7D7F9D2DD3051 (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceHandle_GetHashCode_m1D0506E9F45B9ADB1B7FB74ABBA365F5C42864DF (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 LoadingResponseQueue_ResponseQueue_Create_m6F35C5AF51F6819C43036505C5974B478F80D291 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadingResponseQueue_ResponseQueue_ConsumeResults_mAE9A9F225A98B0D9B06D45AB92DAE0B15EFA5C7A (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 ___0_queue, AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* ___1_outResults, int32_t ___2_maxResults, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingResponseQueue_ResponseQueue_Release_mDAEAD4FC66E3B04D39EC692C1AF864C8AD8931E2 (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 ___0_queue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingResponseQueue_Dispose_m6A7CECF90165CD6D806D0C27E52A41B97B79419E (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingResponseQueue_ResponseQueue_Create_Injected_m298612BAEE771C994CA6F92B1308E71440016F44 (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* ___0_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingResponseQueue_ResponseQueue_Release_Injected_m8500EA5007792701AF2CFCAC8AF6D3FB6262321C (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* ___0_queue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadingResponseQueue_ResponseQueue_ConsumeResults_Injected_m31907C019117BEC65EFD2E30AA32AE72624FB5C6 (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* ___0_queue, AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* ___1_outResults, int32_t ___2_maxResults, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLoadingSystem_ReleaseAsync_Injected_m452672845E0FF338E4FD310092076FB054CB11C4 (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* ___0_handles, int32_t ___1_count, LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* ___2_resultQueue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m28AFC3F6D5F6FE74B5CC7A3E42AC5CC6FFE0F2B8 (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectLoadOperationBase_get_Current_mDD88C9DF317867AA11B37D3C7F32FFD5DAE8D3D6 (ObjectLoadOperationBase_tBF7081C057C381D9CBBAA9AB212CD9C8CDAD18CB* __this, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectLoadOperationBase_MoveNext_m56D3A2B292E07C2427FE0721363910008162FD9B (ObjectLoadOperationBase_tBF7081C057C381D9CBBAA9AB212CD9C8CDAD18CB* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_IsDone;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectLoadOperationBase_Reset_mC4478969570A97618B7D657BA88DBD69D84C4E55 (ObjectLoadOperationBase_tBF7081C057C381D9CBBAA9AB212CD9C8CDAD18CB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReleaseOperation_Complete_mBCF511A6D5252CE4E677E1FF0A2DBF5CE5329E57 (ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	Exception_t* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_1_tDD7F6AA782975E408989CD84C7959D75DB685F6D* G_B3_0 = NULL;
	Action_1_tDD7F6AA782975E408989CD84C7959D75DB685F6D* G_B2_0 = NULL;
	{
		__this->___m_IsDone = (bool)1;
	}
	try
	{
		{
			Action_1_tDD7F6AA782975E408989CD84C7959D75DB685F6D* L_0 = __this->___m_Completed;
			Action_1_tDD7F6AA782975E408989CD84C7959D75DB685F6D* L_1 = L_0;
			if (L_1)
			{
				G_B3_0 = L_1;
				goto IL_0013_1;
			}
			G_B2_0 = L_1;
		}
		{
			goto IL_0019_1;
		}

IL_0013_1:
		{
			NullCheck(G_B3_0);
			Action_1_Invoke_m8B9C9017DBD04A20FEE53A2D6704B1E5099DF22D_inline(G_B3_0, __this, NULL);
		}

IL_0019_1:
		{
			goto IL_0043;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		throw e;
	}

CATCH_001b:
	{
		Exception_t* L_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_0 = L_2;
		ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A* L_3 = (ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A*)(&__this->___m_OperationHandle);
		uint64_t L_4 = L_3->___value;
		uint64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_5);
		Exception_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38C452754F43614AAA04BB6DD69C88125DCE8BFC)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral454E3A0E988DB5D845192813E3952E9F418B874C)), L_6, L_7, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0043;
	}

IL_0043:
	{
		__this->___m_Completed = (Action_1_tDD7F6AA782975E408989CD84C7959D75DB685F6D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Completed), (void*)(Action_1_tDD7F6AA782975E408989CD84C7959D75DB685F6D*)NULL);
	}
	try
	{
		AwaitableCompletionSource_t506E3C90A2336F16A9EE64B62710798F5AB97AC1* L_9 = __this->___m_CompletionSource;
		NullCheck(L_9);
		bool L_10;
		L_10 = AwaitableCompletionSource_TrySetResult_mAA234A8178F43A3E16449AF3FBF495BA140A6925(L_9, NULL);
		goto IL_0080;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0058;
		}
		throw e;
	}

CATCH_0058:
	{
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_11;
		ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A* L_12 = (ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A*)(&__this->___m_OperationHandle);
		uint64_t L_13 = L_12->___value;
		uint64_t L_14 = L_13;
		RuntimeObject* L_15 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_14);
		Exception_t* L_16 = V_1;
		String_t* L_17;
		L_17 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD67967C7128B5D18B95775AFA2D08220B63241DF)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral454E3A0E988DB5D845192813E3952E9F418B874C)), L_15, L_16, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0080;
	}

IL_0080:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectReleaseOperation_get_Current_mBAC2E4437CC68DA5E540E011245949C8BBF619A1 (ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4* __this, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectReleaseOperation_MoveNext_m6DA878FD75D86AC5AA01A24F40AA92ED193BB3D7 (ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_IsDone;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReleaseOperation_Reset_m8285C00A27381F53E48BF129ECF05E86BB982AFB (ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentLoadingSystem__cctor_m4CF4EBE975DE015653C7491E9988913D49CB38A0 (const RuntimeMethod* method) 
{
	{
		ContentLoadingSystem_Initialize_mCE273FBC1813A9F111F15CC50E26A72E18F05BCD(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentLoadingSystem_Initialize_mCE273FBC1813A9F111F15CC50E26A72E18F05BCD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3B44806E67D320E9491E941AF2509EDD60E3CD2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEDC188731E8A1B9B1F95C8A59006350A9F735EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticInit);
	{
		CHECKED_LOCAL_INIT(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticInit,(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_Initialized;
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 L_1;
		memset((&L_1), 0, sizeof(L_1));
		LoadingResponseQueue__ctor_m479CAEFD71FC607DFDC0F8A6DFF0A3BB59F53F4F((&L_1), NULL);
		CHECKED_LOCAL_INIT(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticInit,(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_ResultBuffer = L_1;
		Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3* L_2 = (Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3*)il2cpp_codegen_object_new(Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEDC188731E8A1B9B1F95C8A59006350A9F735EF4(L_2, Dictionary_2__ctor_mEDC188731E8A1B9B1F95C8A59006350A9F735EF4_RuntimeMethod_var);
		((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_PendingLoadOperations = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_PendingLoadOperations), (void*)L_2);
		Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752* L_3 = (Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752*)il2cpp_codegen_object_new(Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3B44806E67D320E9491E941AF2509EDD60E3CD2D(L_3, Dictionary_2__ctor_m3B44806E67D320E9491E941AF2509EDD60E3CD2D_RuntimeMethod_var);
		((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_PendingReleaseOperations = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_PendingReleaseOperations), (void*)L_3);
		((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_Initialized = (bool)1;
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentLoadingSystem_ProcessResults_m9FDD963C16B2279D0B7166CB2F38DE74469C5437 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentLoadingSystem_ProcessResults_m9FDD963C16B2279D0B7166CB2F38DE74469C5437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m36E61E82525E3D419991039822CAA987D5B8745A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m514A917546C862D189702294180E2CD8F1EC7920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticInit);
	AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* V_3 = NULL;
	int32_t V_4 = 0;
	ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* V_5 = NULL;
	ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* V_6 = NULL;
	ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* V_7 = NULL;
	{
		CHECKED_LOCAL_INIT(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticInit,(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_Initialized;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(((int32_t)32),NULL));
		uint32_t L_2 = sizeof(AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2);
		if ((uintptr_t)L_1 * (uintptr_t)L_2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ContentLoadingSystem_ProcessResults_m9FDD963C16B2279D0B7166CB2F38DE74469C5437_RuntimeMethod_var);
		intptr_t L_3 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_1, (int32_t)L_2));
		int8_t* L_4;
		if (L_3 == 0)
		{
			L_4 = NULL;
		}
		else
		{
			L_4 = (int8_t*)alloca(L_3);
			memset(L_4, 0, L_3);
		}
		V_0 = (AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2*)L_4;
		V_2 = 0;
		V_3 = (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674*)NULL;
		goto IL_0067;
	}

IL_001b:
	{
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		V_4 = 0;
		goto IL_0062;
	}

IL_0024:
	{
		AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* L_7 = V_0;
		int32_t L_8 = V_4;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		uint32_t L_10 = sizeof(AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2);
		AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2 L_11 = (*(AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2*)((AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, (int32_t)L_10)))));
		CHECKED_LOCAL_INIT(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticInit,(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = ContentLoadingSystem_ProcessResult_m0700BD08BB1E20D9606C8D83F1F97F1103C15779(L_11, NULL);
		if (L_12)
		{
			goto IL_005c;
		}
	}
	{
		List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* L_13 = V_3;
		if (L_13)
		{
			goto IL_0045;
		}
	}
	{
		List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* L_14 = (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674*)il2cpp_codegen_object_new(List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674_il2cpp_TypeInfo_var);
		List_1__ctor_m514A917546C862D189702294180E2CD8F1EC7920(L_14, List_1__ctor_m514A917546C862D189702294180E2CD8F1EC7920_RuntimeMethod_var);
		V_3 = L_14;
	}

IL_0045:
	{
		List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* L_15 = V_3;
		AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* L_16 = V_0;
		int32_t L_17 = V_4;
		intptr_t L_18 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_17,NULL));
		uint32_t L_19 = sizeof(AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2);
		NullCheck(((AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_18, (int32_t)L_19)))));
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_20 = ((AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_18, (int32_t)L_19))))->___handle;
		NullCheck(L_15);
		List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024_inline(L_15, L_20, List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024_RuntimeMethod_var);
	}

IL_005c:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0062:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0024;
		}
	}

IL_0067:
	{
		CHECKED_LOCAL_INIT(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticInit,(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* L_24 = V_0;
		int32_t L_25;
		L_25 = LoadingResponseQueue_ConsumeResults_m9601694BAF1A37108E850446F4DCA0E8F393C721((&((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_ResultBuffer), L_24, ((int32_t)32), NULL);
		int32_t L_26 = L_25;
		V_1 = L_26;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_27 = V_2;
		List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* L_28 = V_3;
		if (!L_28)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* L_29 = V_3;
		NullCheck(L_29);
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_30;
		L_30 = List_1_ToArray_m36E61E82525E3D419991039822CAA987D5B8745A(L_29, List_1_ToArray_m36E61E82525E3D419991039822CAA987D5B8745A_RuntimeMethod_var);
		V_5 = L_30;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_31 = V_5;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_32 = L_31;
		V_7 = L_32;
		if (!L_32)
		{
			goto IL_0095;
		}
	}
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_33 = V_7;
		NullCheck(L_33);
		int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
		if (L_34)
		{
			goto IL_009b;
		}
	}

IL_0095:
	{
		uintptr_t L_35 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*)L_35;
		goto IL_00a6;
	}

IL_009b:
	{
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_36 = V_7;
		NullCheck(L_36);
		uintptr_t L_37 = (il2cpp_codegen_conv<uintptr_t,ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*,intptr_t,false,false>(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_6 = (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*)L_37;
	}

IL_00a6:
	{
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* L_38 = V_6;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_39 = V_5;
		NullCheck(L_39);
		int32_t L_40 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_39)->max_length),NULL));
		CHECKED_LOCAL_INIT(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticInit,(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 L_41 = ((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_ResultBuffer;
		NativeLoadingSystem_ReleaseAsync_m69B2DC503E59200F0191B7840775D59BB9B92EBB(L_38, L_40, L_41, NULL);
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* L_42 = V_6;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_43 = V_5;
		NullCheck(L_43);
		int32_t L_44 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_43)->max_length),NULL));
		NativeLoadingSystem_WaitForReleaseCompletion_m7D624C0B012EA0A7ABBA00937C30721259036BC3(L_42, L_44, NULL);
		V_7 = (ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918*)NULL;
	}

IL_00c4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ContentLoadingSystem_ProcessResult_m0700BD08BB1E20D9606C8D83F1F97F1103C15779 (AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2 ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0CEE13D9651FDA7D19F1D4A825202D6DFA99E74C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m38E48436BE492DD04F8E86D3E0947CB98038FF08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral357549E695B09E9E3A66B4707B24D6EB0E305E13);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	uint64_t V_0 = 0;
	ObjectLoadOperationBase_tBF7081C057C381D9CBBAA9AB212CD9C8CDAD18CB* V_1 = NULL;
	ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4* V_2 = NULL;
	int32_t V_3 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2 L_0 = ___0_result;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_1 = L_0.___handle;
		uint64_t L_2 = L_1.___value;
		V_0 = L_2;
		AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2 L_3 = ___0_result;
		int32_t L_4 = L_3.___type;
		V_3 = L_4;
		int32_t L_5 = V_3;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_3;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_008a;
	}

IL_001c:
	{
		CHECKED_LOCAL_INIT(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticInit,(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3* L_7 = ((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_PendingLoadOperations;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m38E48436BE492DD04F8E86D3E0947CB98038FF08(L_7, L_8, (&V_1), Dictionary_2_Remove_m38E48436BE492DD04F8E86D3E0947CB98038FF08_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2 L_10 = ___0_result;
		int32_t L_11 = L_10.___resultCode;
		if (L_11)
		{
			goto IL_0041;
		}
	}
	{
		ObjectLoadOperationBase_tBF7081C057C381D9CBBAA9AB212CD9C8CDAD18CB* L_12 = V_1;
		AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2 L_13 = ___0_result;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_14 = L_13.___objectId;
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, bool >::Invoke(7, L_12, L_14, (bool)1);
		return L_15;
	}

IL_0041:
	{
		AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2 L_16 = ___0_result;
		int32_t L_17 = L_16.___resultCode;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_008a;
		}
	}
	{
		ObjectLoadOperationBase_tBF7081C057C381D9CBBAA9AB212CD9C8CDAD18CB* L_18 = V_1;
		il2cpp_codegen_initobj((&V_4), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_19 = V_4;
		NullCheck(L_18);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, bool >::Invoke(7, L_18, L_19, (bool)1);
		goto IL_008a;
	}

IL_005e:
	{
		uint64_t L_21 = V_0;
		uint64_t L_22 = L_21;
		RuntimeObject* L_23 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral357549E695B09E9E3A66B4707B24D6EB0E305E13, L_23, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_24, NULL);
		goto IL_008a;
	}

IL_0075:
	{
		CHECKED_LOCAL_INIT(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticInit,(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752* L_25 = ((ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_StaticFields*)il2cpp_codegen_static_fields_for(ContentLoadingSystem_t7726B2A9C59904B065BA184D3975D40797A91E96_il2cpp_TypeInfo_var))->___s_PendingReleaseOperations;
		uint64_t L_26 = V_0;
		NullCheck(L_25);
		bool L_27;
		L_27 = Dictionary_2_Remove_m0CEE13D9651FDA7D19F1D4A825202D6DFA99E74C(L_25, L_26, (&V_2), Dictionary_2_Remove_m0CEE13D9651FDA7D19F1D4A825202D6DFA99E74C_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_008a;
		}
	}
	{
		ObjectReleaseOperation_tEABFF55C5F88F832C358E3A108BCFE0BA0024BC4* L_28 = V_2;
		NullCheck(L_28);
		ObjectReleaseOperation_Complete_mBCF511A6D5252CE4E677E1FF0A2DBF5CE5329E57(L_28, NULL);
	}

IL_008a:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceOperationHandle_Equals_mFFBF3B3E68758032C6F105DD230D270E46D87774 (ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A* __this, ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A ___0_other, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___value;
		ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A L_1 = ___0_other;
		uint64_t L_2 = L_1.___value;
		return (bool)((((int64_t)L_0) == ((int64_t)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ResourceOperationHandle_Equals_mFFBF3B3E68758032C6F105DD230D270E46D87774_AdjustorThunk (RuntimeObject* __this, ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A ___0_other, const RuntimeMethod* method)
{
	ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A>(__this);
	bool _returnValue;
	_returnValue = ResourceOperationHandle_Equals_mFFBF3B3E68758032C6F105DD230D270E46D87774(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceOperationHandle_Equals_m53A2FE078FBA96E8EF01E7D30E98086E4FF68FF2 (ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A*)UnBox(L_1, ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A_il2cpp_TypeInfo_var)));
		ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A L_2 = V_0;
		bool L_3;
		L_3 = ResourceOperationHandle_Equals_mFFBF3B3E68758032C6F105DD230D270E46D87774(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ResourceOperationHandle_Equals_m53A2FE078FBA96E8EF01E7D30E98086E4FF68FF2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A>(__this);
	bool _returnValue;
	_returnValue = ResourceOperationHandle_Equals_m53A2FE078FBA96E8EF01E7D30E98086E4FF68FF2(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceOperationHandle_GetHashCode_m6A5D1D001BC417B642AA036707D775E81319B7E4 (ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A* __this, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = (uint64_t*)(&__this->___value);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ResourceOperationHandle_GetHashCode_m6A5D1D001BC417B642AA036707D775E81319B7E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ResourceOperationHandle_t2595F75849506CFA8A0DC3016AD62CBFCDA87F3A>(__this);
	int32_t _returnValue;
	_returnValue = ResourceOperationHandle_GetHashCode_m6A5D1D001BC417B642AA036707D775E81319B7E4(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceHandle_Equals_m6485C5F9CCB6ED6E6E4CCF1C70E60DF77B72D1AA (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_other, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___value;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_1 = ___0_other;
		uint64_t L_2 = L_1.___value;
		return (bool)((((int64_t)L_0) == ((int64_t)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ResourceHandle_Equals_m6485C5F9CCB6ED6E6E4CCF1C70E60DF77B72D1AA_AdjustorThunk (RuntimeObject* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_other, const RuntimeMethod* method)
{
	ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8>(__this);
	bool _returnValue;
	_returnValue = ResourceHandle_Equals_m6485C5F9CCB6ED6E6E4CCF1C70E60DF77B72D1AA(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceHandle_Equals_m64028F814C73E48411A4E4AAC6A7D7F9D2DD3051 (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*)UnBox(L_1, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8_il2cpp_TypeInfo_var)));
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_2 = V_0;
		bool L_3;
		L_3 = ResourceHandle_Equals_m6485C5F9CCB6ED6E6E4CCF1C70E60DF77B72D1AA(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ResourceHandle_Equals_m64028F814C73E48411A4E4AAC6A7D7F9D2DD3051_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8>(__this);
	bool _returnValue;
	_returnValue = ResourceHandle_Equals_m64028F814C73E48411A4E4AAC6A7D7F9D2DD3051(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceHandle_GetHashCode_m1D0506E9F45B9ADB1B7FB74ABBA365F5C42864DF (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* __this, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = (uint64_t*)(&__this->___value);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ResourceHandle_GetHashCode_m1D0506E9F45B9ADB1B7FB74ABBA365F5C42864DF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8>(__this);
	int32_t _returnValue;
	_returnValue = ResourceHandle_GetHashCode_m1D0506E9F45B9ADB1B7FB74ABBA365F5C42864DF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingResponseQueue__ctor_m479CAEFD71FC607DFDC0F8A6DFF0A3BB59F53F4F (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* __this, const RuntimeMethod* method) 
{
	{
		LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 L_0;
		L_0 = LoadingResponseQueue_ResponseQueue_Create_m6F35C5AF51F6819C43036505C5974B478F80D291(NULL);
		*(LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787*)__this = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadingResponseQueue_ConsumeResults_m9601694BAF1A37108E850446F4DCA0E8F393C721 (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* __this, AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* ___0_outResults, int32_t ___1_maxResults, const RuntimeMethod* method) 
{
	{
		LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 L_0 = (*(LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787*)__this);
		AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* L_1 = ___0_outResults;
		int32_t L_2 = ___1_maxResults;
		int32_t L_3;
		L_3 = LoadingResponseQueue_ResponseQueue_ConsumeResults_mAE9A9F225A98B0D9B06D45AB92DAE0B15EFA5C7A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingResponseQueue_Dispose_m6A7CECF90165CD6D806D0C27E52A41B97B79419E (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 L_2 = (*(LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787*)__this);
		LoadingResponseQueue_ResponseQueue_Release_mDAEAD4FC66E3B04D39EC692C1AF864C8AD8931E2(L_2, NULL);
		__this->___m_Ptr = 0;
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void LoadingResponseQueue_Dispose_m6A7CECF90165CD6D806D0C27E52A41B97B79419E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787>(__this);
	LoadingResponseQueue_Dispose_m6A7CECF90165CD6D806D0C27E52A41B97B79419E(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 LoadingResponseQueue_ResponseQueue_Create_m6F35C5AF51F6819C43036505C5974B478F80D291 (const RuntimeMethod* method) 
{
	LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		LoadingResponseQueue_ResponseQueue_Create_Injected_m298612BAEE771C994CA6F92B1308E71440016F44((&V_0), NULL);
		LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingResponseQueue_ResponseQueue_Release_mDAEAD4FC66E3B04D39EC692C1AF864C8AD8931E2 (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 ___0_queue, const RuntimeMethod* method) 
{
	{
		LoadingResponseQueue_ResponseQueue_Release_Injected_m8500EA5007792701AF2CFCAC8AF6D3FB6262321C((&___0_queue), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadingResponseQueue_ResponseQueue_ConsumeResults_mAE9A9F225A98B0D9B06D45AB92DAE0B15EFA5C7A (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 ___0_queue, AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* ___1_outResults, int32_t ___2_maxResults, const RuntimeMethod* method) 
{
	{
		AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* L_0 = ___1_outResults;
		int32_t L_1 = ___2_maxResults;
		int32_t L_2;
		L_2 = LoadingResponseQueue_ResponseQueue_ConsumeResults_Injected_m31907C019117BEC65EFD2E30AA32AE72624FB5C6((&___0_queue), L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingResponseQueue_ResponseQueue_Create_Injected_m298612BAEE771C994CA6F92B1308E71440016F44 (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*LoadingResponseQueue_ResponseQueue_Create_Injected_m298612BAEE771C994CA6F92B1308E71440016F44_ftn) (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787*);
	static LoadingResponseQueue_ResponseQueue_Create_Injected_m298612BAEE771C994CA6F92B1308E71440016F44_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LoadingResponseQueue_ResponseQueue_Create_Injected_m298612BAEE771C994CA6F92B1308E71440016F44_ftn)il2cpp_codegen_resolve_icall ("Unity.Loading.LowLevel.LoadingResponseQueue::ResponseQueue_Create_Injected(Unity.Loading.LowLevel.LoadingResponseQueue&)");
	_il2cpp_icall_func(___0_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingResponseQueue_ResponseQueue_Release_Injected_m8500EA5007792701AF2CFCAC8AF6D3FB6262321C (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* ___0_queue, const RuntimeMethod* method) 
{
	typedef void (*LoadingResponseQueue_ResponseQueue_Release_Injected_m8500EA5007792701AF2CFCAC8AF6D3FB6262321C_ftn) (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787*);
	static LoadingResponseQueue_ResponseQueue_Release_Injected_m8500EA5007792701AF2CFCAC8AF6D3FB6262321C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LoadingResponseQueue_ResponseQueue_Release_Injected_m8500EA5007792701AF2CFCAC8AF6D3FB6262321C_ftn)il2cpp_codegen_resolve_icall ("Unity.Loading.LowLevel.LoadingResponseQueue::ResponseQueue_Release_Injected(Unity.Loading.LowLevel.LoadingResponseQueue&)");
	_il2cpp_icall_func(___0_queue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadingResponseQueue_ResponseQueue_ConsumeResults_Injected_m31907C019117BEC65EFD2E30AA32AE72624FB5C6 (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* ___0_queue, AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2* ___1_outResults, int32_t ___2_maxResults, const RuntimeMethod* method) 
{
	typedef int32_t (*LoadingResponseQueue_ResponseQueue_ConsumeResults_Injected_m31907C019117BEC65EFD2E30AA32AE72624FB5C6_ftn) (LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787*, AsyncResult_tDF8D21830ECC523AB51977058F7E1DE90E1767C2*, int32_t);
	static LoadingResponseQueue_ResponseQueue_ConsumeResults_Injected_m31907C019117BEC65EFD2E30AA32AE72624FB5C6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LoadingResponseQueue_ResponseQueue_ConsumeResults_Injected_m31907C019117BEC65EFD2E30AA32AE72624FB5C6_ftn)il2cpp_codegen_resolve_icall ("Unity.Loading.LowLevel.LoadingResponseQueue::ResponseQueue_ConsumeResults_Injected(Unity.Loading.LowLevel.LoadingResponseQueue&,Unity.Loading.LowLevel.AsyncResult*,System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_queue, ___1_outResults, ___2_maxResults);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLoadingSystem_ReleaseAsync_m69B2DC503E59200F0191B7840775D59BB9B92EBB (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* ___0_handles, int32_t ___1_count, LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787 ___2_resultQueue, const RuntimeMethod* method) 
{
	{
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* L_0 = ___0_handles;
		int32_t L_1 = ___1_count;
		NativeLoadingSystem_ReleaseAsync_Injected_m452672845E0FF338E4FD310092076FB054CB11C4(L_0, L_1, (&___2_resultQueue), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLoadingSystem_WaitForReleaseCompletion_m7D624C0B012EA0A7ABBA00937C30721259036BC3 (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* ___0_handles, int32_t ___1_count, const RuntimeMethod* method) 
{
	typedef void (*NativeLoadingSystem_WaitForReleaseCompletion_m7D624C0B012EA0A7ABBA00937C30721259036BC3_ftn) (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*, int32_t);
	static NativeLoadingSystem_WaitForReleaseCompletion_m7D624C0B012EA0A7ABBA00937C30721259036BC3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeLoadingSystem_WaitForReleaseCompletion_m7D624C0B012EA0A7ABBA00937C30721259036BC3_ftn)il2cpp_codegen_resolve_icall ("Unity.Loading.LowLevel.NativeLoadingSystem::WaitForReleaseCompletion(Unity.Loading.LowLevel.ResourceHandle*,System.Int32)");
	_il2cpp_icall_func(___0_handles, ___1_count);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLoadingSystem_ReleaseAsync_Injected_m452672845E0FF338E4FD310092076FB054CB11C4 (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8* ___0_handles, int32_t ___1_count, LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787* ___2_resultQueue, const RuntimeMethod* method) 
{
	typedef void (*NativeLoadingSystem_ReleaseAsync_Injected_m452672845E0FF338E4FD310092076FB054CB11C4_ftn) (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8*, int32_t, LoadingResponseQueue_tD7640E3772053EA8A10F69695CF7590653F18787*);
	static NativeLoadingSystem_ReleaseAsync_Injected_m452672845E0FF338E4FD310092076FB054CB11C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeLoadingSystem_ReleaseAsync_Injected_m452672845E0FF338E4FD310092076FB054CB11C4_ftn)il2cpp_codegen_resolve_icall ("Unity.Loading.LowLevel.NativeLoadingSystem::ReleaseAsync_Injected(Unity.Loading.LowLevel.ResourceHandle*,System.Int32,Unity.Loading.LowLevel.LoadingResponseQueue&)");
	_il2cpp_icall_func(___0_handles, ___1_count, ___2_resultQueue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF04CCC12DEF9C866AC5DC5330FDC48AB65CCA024_inline (List_1_t480A595B8D45A9019FF0E9A33AD53D81F7355674* __this, ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 ___0_item, const RuntimeMethod* method) 
{
	ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		ResourceHandleU5BU5D_tD8EAD492F528F246F46563C67691360F9F2B0918* L_7 = V_0;
		int32_t L_8 = V_1;
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8)L_9);
		return;
	}

IL_0034:
	{
		ResourceHandle_tAB7888F3AB5071C94127D0D46AAB3D702BC4B9F8 L_10 = ___0_item;
		List_1_AddWithResize_m28AFC3F6D5F6FE74B5CC7A3E42AC5CC6FFE0F2B8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
