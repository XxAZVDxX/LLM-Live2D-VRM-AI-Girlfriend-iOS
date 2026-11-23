#include "pch-cpp.hpp"





template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tF4A502011C41A6BC8168FC4FD896AE929A629C1D;
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct TaskFactory_1_tA0D5422162A8269A12A3D48739ED70199288011B;
struct TaskFactory_1_t578912DD86117B9C4DFB48850299B56828D3B74F;
struct Task_1_t73D1B2815D517979E9A59A1B3DBE143EAC3F8BDF;
struct Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9;
struct Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IAwaitCaller_t8D90568AEBB10C835C297832136959240DC4D44D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ImmediateCaller_t35B46E4D795ACC6F8D63D34A74F99DC70865D51C;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1;
struct U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tF4A502011C41A6BC8168FC4FD896AE929A629C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImmediateCaller_t35B46E4D795ACC6F8D63D34A74F99DC70865D51C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralBC9DC233CB4E012F70F68486F2D8FBEF178D48BD;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468_TisU3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7_m7358A6D8DEDF3D61228A6A3274C40B43C173B063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m43B46B586B06170CCA27891C25DBA19EF535A2FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mE3270B6693065D74D316B608AF3E7BAE732568D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m317BFF92EC3C994CCE8C989D0BBB7238E06761AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAwaitCaller_Run_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mABF05A27F9381827FEBBA4BE33DAB80D66CA9C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateErasedMeshAsyncU3Ed__5_MoveNext_m10E8A214A10557EDDE1F9BA023622EC3D9DC406A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_1_U3CCreateErasedMeshAsyncU3Eb__0_m6FFF0D3AD258E074D07E4F19424B60FF3F73D9F0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t694238FF4B420A585DD7E7C85CAA0EB6BA8394F5  : public RuntimeObject
{
};
struct BoneMeshEraser_t4E860BE8FBEBF28CCE6017F6ACB356A881ED5B10  : public RuntimeObject
{
};
struct ImmediateCaller_t35B46E4D795ACC6F8D63D34A74F99DC70865D51C  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
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
struct U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1  : public RuntimeObject
{
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___boneWeights;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___eraseBoneIndices;
};
struct U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___srcIndices;
	U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1* ___CSU24U3CU3E8__locals1;
};
struct TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468 
{
	Task_1_t73D1B2815D517979E9A59A1B3DBE143EAC3F8BDF* ___m_task;
};
struct TaskAwaiter_1_t50340FE2297A169B76D8CFE07E5D94130D5C6512 
{
	Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* ___m_task;
};
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
};
struct Task_1_t73D1B2815D517979E9A59A1B3DBE143EAC3F8BDF  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_result;
};
struct Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_result;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	RuntimeObject* ___m_stateMachine;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	float ___m_Weight0;
	float ___m_Weight1;
	float ___m_Weight2;
	float ___m_Weight3;
	int32_t ___m_BoneIndex0;
	int32_t ___m_BoneIndex1;
	int32_t ___m_BoneIndex2;
	int32_t ___m_BoneIndex3;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t6915E1C190C559E29646A2AE9F5660862DB050E9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t6915E1C190C559E29646A2AE9F5660862DB050E9__padding[12];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_tBAC26CF4F3032CE777892CFA547D237DE7B9AE0A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tBAC26CF4F3032CE777892CFA547D237DE7B9AE0A__padding[16];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D18_t677A50B9132D2C2BB78B4B75C3FD4336B31BE8D9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D18_t677A50B9132D2C2BB78B4B75C3FD4336B31BE8D9__padding[18];
	};
};
#pragma pack(pop, tp)
struct ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 
{
	bool ___Bone0;
	bool ___Bone1;
	bool ___Bone2;
	bool ___Bone3;
};
struct ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshaled_pinvoke
{
	int32_t ___Bone0;
	int32_t ___Bone1;
	int32_t ___Bone2;
	int32_t ___Bone3;
};
struct ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshaled_com
{
	int32_t ___Bone0;
	int32_t ___Bone1;
	int32_t ___Bone2;
	int32_t ___Bone3;
};
struct AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t31704F68930DF2486DF918AE675E24CF970AD016 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
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
struct IndexFormat_tE699D38323B3B0887DF054EAFF0CF035DF28E2BB 
{
	int32_t ___value__;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B ___U3CU3Et__builder;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___eraseBoneIndices;
	RuntimeObject* ___awaitCaller;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___src;
	U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1* ___U3CU3E8__1;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3E5__2;
	int32_t ___U3CiU3E5__3;
	TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468 ___U3CU3Eu__1;
};
struct Func_1_tF4A502011C41A6BC8168FC4FD896AE929A629C1D  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct U3CPrivateImplementationDetailsU3E_t694238FF4B420A585DD7E7C85CAA0EB6BA8394F5_StaticFields
{
	__StaticArrayInitTypeSizeU3D18_t677A50B9132D2C2BB78B4B75C3FD4336B31BE8D9 ___57B0A7E913A6CBB7C5554095EB31FFE93AB6628DCBEC34C82369E40829116FDC;
	__StaticArrayInitTypeSizeU3D12_t6915E1C190C559E29646A2AE9F5660862DB050E9 ___8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1;
	int32_t ___C74F919439792582AA4F0B188EC2A928675CDB3BA72797781CEB6DFAA86B313F;
	__StaticArrayInitTypeSizeU3D16_tBAC26CF4F3032CE777892CFA547D237DE7B9AE0A ___F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct Task_1_t73D1B2815D517979E9A59A1B3DBE143EAC3F8BDF_StaticFields
{
	TaskFactory_1_tA0D5422162A8269A12A3D48739ED70199288011B* ___s_defaultFactory;
};
struct Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9_StaticFields
{
	TaskFactory_1_t578912DD86117B9C4DFB48850299B56828D3B74F* ___s_defaultFactory;
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
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_StaticFields
{
	Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t31704F68930DF2486DF918AE675E24CF970AD016_StaticFields
{
	Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4_StaticFields
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___s_defaultResultTask;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 AsyncTaskMethodBuilder_1_Create_m852C283F3EAD7381A0CC8D14204899C192BDC20A_fshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7_mA83C52413D9576B4226F659C7739E505EDD51C0D_gshared (AsyncTaskMethodBuilder_1_t31704F68930DF2486DF918AE675E24CF970AD016* __this, U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* AsyncTaskMethodBuilder_1_get_Task_m26E4DF69678F5B17A858047DB76AA2E0986ECCE7_gshared (AsyncTaskMethodBuilder_1_t31704F68930DF2486DF918AE675E24CF970AD016* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Task_1_get_Result_m69B95FEC65858C38E9F75D9CA8F99BAA2018011F_gshared (Task_1_tB348EA1B62802484AB33A91D4404C52DCF7BDB18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m5FD0E1320A7A8964A7FCC0D0EA7F809E4E76E0EF_gshared (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_fshared (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_fshared (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t50340FE2297A169B76D8CFE07E5D94130D5C6512_TisU3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7_mE14B48327881E371B63C50AE2CC7F4988D8FAA16_gshared (AsyncTaskMethodBuilder_1_t31704F68930DF2486DF918AE675E24CF970AD016* __this, TaskAwaiter_1_t50340FE2297A169B76D8CFE07E5D94130D5C6512* ___0_awaiter, U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TaskAwaiter_1_GetResult_mC0378EE27BC7718407E34A1F5B38083E8BAE9FE6_gshared (TaskAwaiter_1_t50340FE2297A169B76D8CFE07E5D94130D5C6512* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m316645A07F097D06F065F599E0DFC2308811EE27_gshared (AsyncTaskMethodBuilder_1_t31704F68930DF2486DF918AE675E24CF970AD016* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mCAE88AD89C5EDF826D55AC701C807F20A69EC0D5_gshared (AsyncTaskMethodBuilder_1_t31704F68930DF2486DF918AE675E24CF970AD016* __this, Il2CppSharedGenericObject* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m7EF377C3A25FB4388DAF14ECAFC18E1C9F3EEA4A_fshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 BoneMeshEraser_AreBoneContains_m869221F12A57FE472F7240D1C3BD1E8906C5D371 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_exclude, int32_t ___1_boneIndex0, int32_t ___2_boneIndex1, int32_t ___3_boneIndex2, int32_t ___4_boneIndex3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcludeBoneIndex__ctor_m77DCC564D0169B5B4108F09FF34DD65BFDC9949C (ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49* __this, bool ___0_bone0, bool ___1_bone1, bool ___2_bone2, bool ___3_bone3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneMeshEraser_ExcludeTriangles_m6DAB1FD976D5CB6CD900D061A7437AF12DC6677A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_triangles, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___1_bws, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_exclude, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B AsyncTaskMethodBuilder_1_Create_m2A05F6D269FD27DC3E99D398132ED1951990AF0F (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m852C283F3EAD7381A0CC8D14204899C192BDC20A_fshared)(method);
}
inline void AsyncTaskMethodBuilder_1_Start_TisU3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7_m5BB063CC28210CEF38B7C52418977D1D0B9DDB1C (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* __this, U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*, U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7_mA83C52413D9576B4226F659C7739E505EDD51C0D_gshared)(__this, ___0_stateMachine, method);
}
inline Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9* AsyncTaskMethodBuilder_1_get_Task_m317BFF92EC3C994CCE8C989D0BBB7238E06761AA (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9* (*) (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m26E4DF69678F5B17A858047DB76AA2E0986ECCE7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediateCaller__ctor_mA65012BB3D710B5E07BDDDB505BFA61386FD4A53 (ImmediateCaller_t35B46E4D795ACC6F8D63D34A74F99DC70865D51C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9* BoneMeshEraser_CreateErasedMeshAsync_m8D87344A4D259FD6425FAE037D941E7B124CA67A (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_src, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_eraseBoneIndices, RuntimeObject* ___2_awaitCaller, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Wait_m33955515E36BF6598FCEDA841C8C75F716DE5A4E (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Task_1_get_Result_mDCF0EC4074B7580C5C5DBA4FC2F58E8A0DD1ABB6 (Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9* __this, const RuntimeMethod* method)
{
	return ((  Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* (*) (Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9*, const RuntimeMethod*))Task_1_get_Result_m69B95FEC65858C38E9F75D9CA8F99BAA2018011F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* BoneMeshEraser_GetExcludedIndices_m9A5C1A251F9C2029354E7D49AB3EE7283276E5D4 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_indices, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___1_boneWeights, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_eraseBoneIndices, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m3DA7A6D5B4D9DE5F469E9AD7E0D23DCA06B2D33C (U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_indexFormat_m03600214522BB39DD26D2FE35DF943CD635113C2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* Mesh_get_tangents_mEA6C7BF6A2B9A8BD0E9A62963E048F973878299E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* Mesh_get_boneWeights_m2091E7E793A60853ACC7928BFDC1FF8F0DC4C7E9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* Mesh_get_bindposes_mC3B3C3E380881881345B8737895C28C521F70F8D (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1__ctor_mB2FF83513D0E4A13B29BC7F7B0D8D717AE171BB6 (U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_GetIndices_m112B85EF32EE3C446947CE6CBC1AF3D50FC18179 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_submesh, const RuntimeMethod* method) ;
inline void Func_1__ctor_m396AE1BD99571371F0E9A984612A8F6B69722479 (Func_1_tF4A502011C41A6BC8168FC4FD896AE929A629C1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tF4A502011C41A6BC8168FC4FD896AE929A629C1D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m5FD0E1320A7A8964A7FCC0D0EA7F809E4E76E0EF_gshared)(__this, ___0_object, ___1_method, method);
}
inline TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468 Task_1_GetAwaiter_m5173501B466EC57C83F63136F4D00A59B5E3EF7A (Task_1_t73D1B2815D517979E9A59A1B3DBE143EAC3F8BDF* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468 (*) (Task_1_t73D1B2815D517979E9A59A1B3DBE143EAC3F8BDF*, const RuntimeMethod*))Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_fshared)(__this, method);
}
inline bool TaskAwaiter_1_get_IsCompleted_mC966E0471D6F08DB4EF17985DD2FE1D0C5C2FBDC (TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_fshared)(__this, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468_TisU3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7_m7358A6D8DEDF3D61228A6A3274C40B43C173B063 (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* __this, TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468* ___0_awaiter, U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*, TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468*, U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t50340FE2297A169B76D8CFE07E5D94130D5C6512_TisU3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7_mE14B48327881E371B63C50AE2CC7F4988D8FAA16_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TaskAwaiter_1_GetResult_m841EE8D12D30C24DE99CA81296CFFDEEFEF1856E (TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mC0378EE27BC7718407E34A1F5B38083E8BAE9FE6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_indices, int32_t ___1_topology, int32_t ___2_submesh, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_SetException_m43B46B586B06170CCA27891C25DBA19EF535A2FB (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m316645A07F097D06F065F599E0DFC2308811EE27_gshared)(__this, ___0_exception, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mE3270B6693065D74D316B608AF3E7BAE732568D5 (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mCAE88AD89C5EDF826D55AC701C807F20A69EC0D5_gshared)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateErasedMeshAsyncU3Ed__5_MoveNext_m10E8A214A10557EDDE1F9BA023622EC3D9DC406A (U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7* __this, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3FEC78E3A0DED9FD12A0D7785EA816961D78984F (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m7EF377C3A25FB4388DAF14ECAFC18E1C9F3EEA4A_fshared)(__this, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateErasedMeshAsyncU3Ed__5_SetStateMachine_mC72C978F3FBAAC67B1904F020E03916BE66E0890 (U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoneMeshEraser_ExcludeTriangles_m6DAB1FD976D5CB6CD900D061A7437AF12DC6677A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_triangles, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___1_bws, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_exclude, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_5;
	memset((&V_5), 0, sizeof(V_5));
	ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 V_6;
	memset((&V_6), 0, sizeof(V_6));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_7;
	memset((&V_7), 0, sizeof(V_7));
	ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 V_8;
	memset((&V_8), 0, sizeof(V_8));
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_9;
	memset((&V_9), 0, sizeof(V_9));
	ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		V_0 = 0;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_0 = ___1_bws;
		if (!L_0)
		{
			goto IL_0204;
		}
	}
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_1 = ___1_bws;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0204;
		}
	}
	{
		V_1 = 0;
		goto IL_01fb;
	}

IL_0016:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_triangles;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_triangles;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___0_triangles;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 2));
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_14 = ___1_bws;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		int32_t L_18;
		L_18 = BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612_inline((&V_5), NULL);
		int32_t L_19;
		L_19 = BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18_inline((&V_5), NULL);
		int32_t L_20;
		L_20 = BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310_inline((&V_5), NULL);
		int32_t L_21;
		L_21 = BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F_inline((&V_5), NULL);
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_22;
		L_22 = BoneMeshEraser_AreBoneContains_m869221F12A57FE472F7240D1C3BD1E8906C5D371((&___2_exclude), L_18, L_19, L_20, L_21, NULL);
		V_6 = L_22;
		float L_23;
		L_23 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9_inline((&V_5), NULL);
		if ((!(((float)L_23) > ((float)(0.0f)))))
		{
			goto IL_006f;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_24 = V_6;
		bool L_25 = L_24.___Bone0;
		if (L_25)
		{
			goto IL_01f7;
		}
	}

IL_006f:
	{
		float L_26;
		L_26 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504_inline((&V_5), NULL);
		if ((!(((float)L_26) > ((float)(0.0f)))))
		{
			goto IL_0089;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_27 = V_6;
		bool L_28 = L_27.___Bone1;
		if (L_28)
		{
			goto IL_01f7;
		}
	}

IL_0089:
	{
		float L_29;
		L_29 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E_inline((&V_5), NULL);
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_30 = V_6;
		bool L_31 = L_30.___Bone2;
		if (L_31)
		{
			goto IL_01f7;
		}
	}

IL_00a3:
	{
		float L_32;
		L_32 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1_inline((&V_5), NULL);
		if ((!(((float)L_32) > ((float)(0.0f)))))
		{
			goto IL_00bd;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_33 = V_6;
		bool L_34 = L_33.___Bone3;
		if (L_34)
		{
			goto IL_01f7;
		}
	}

IL_00bd:
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_35 = ___1_bws;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_7 = L_38;
		int32_t L_39;
		L_39 = BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612_inline((&V_7), NULL);
		int32_t L_40;
		L_40 = BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18_inline((&V_7), NULL);
		int32_t L_41;
		L_41 = BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310_inline((&V_7), NULL);
		int32_t L_42;
		L_42 = BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F_inline((&V_7), NULL);
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_43;
		L_43 = BoneMeshEraser_AreBoneContains_m869221F12A57FE472F7240D1C3BD1E8906C5D371((&___2_exclude), L_39, L_40, L_41, L_42, NULL);
		V_8 = L_43;
		float L_44;
		L_44 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9_inline((&V_7), NULL);
		if ((!(((float)L_44) > ((float)(0.0f)))))
		{
			goto IL_0105;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_45 = V_8;
		bool L_46 = L_45.___Bone0;
		if (L_46)
		{
			goto IL_01f7;
		}
	}

IL_0105:
	{
		float L_47;
		L_47 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504_inline((&V_7), NULL);
		if ((!(((float)L_47) > ((float)(0.0f)))))
		{
			goto IL_011f;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_48 = V_8;
		bool L_49 = L_48.___Bone1;
		if (L_49)
		{
			goto IL_01f7;
		}
	}

IL_011f:
	{
		float L_50;
		L_50 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E_inline((&V_7), NULL);
		if ((!(((float)L_50) > ((float)(0.0f)))))
		{
			goto IL_0139;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_51 = V_8;
		bool L_52 = L_51.___Bone2;
		if (L_52)
		{
			goto IL_01f7;
		}
	}

IL_0139:
	{
		float L_53;
		L_53 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1_inline((&V_7), NULL);
		if ((!(((float)L_53) > ((float)(0.0f)))))
		{
			goto IL_0153;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_54 = V_8;
		bool L_55 = L_54.___Bone3;
		if (L_55)
		{
			goto IL_01f7;
		}
	}

IL_0153:
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_56 = ___1_bws;
		int32_t L_57 = V_4;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_9 = L_59;
		int32_t L_60;
		L_60 = BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612_inline((&V_9), NULL);
		int32_t L_61;
		L_61 = BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18_inline((&V_9), NULL);
		int32_t L_62;
		L_62 = BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310_inline((&V_9), NULL);
		int32_t L_63;
		L_63 = BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F_inline((&V_9), NULL);
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_64;
		L_64 = BoneMeshEraser_AreBoneContains_m869221F12A57FE472F7240D1C3BD1E8906C5D371((&___2_exclude), L_60, L_61, L_62, L_63, NULL);
		V_10 = L_64;
		float L_65;
		L_65 = BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9_inline((&V_9), NULL);
		if ((!(((float)L_65) > ((float)(0.0f)))))
		{
			goto IL_0199;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_66 = V_10;
		bool L_67 = L_66.___Bone0;
		if (L_67)
		{
			goto IL_01f7;
		}
	}

IL_0199:
	{
		float L_68;
		L_68 = BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504_inline((&V_9), NULL);
		if ((!(((float)L_68) > ((float)(0.0f)))))
		{
			goto IL_01b0;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_69 = V_10;
		bool L_70 = L_69.___Bone1;
		if (L_70)
		{
			goto IL_01f7;
		}
	}

IL_01b0:
	{
		float L_71;
		L_71 = BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E_inline((&V_9), NULL);
		if ((!(((float)L_71) > ((float)(0.0f)))))
		{
			goto IL_01c7;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_72 = V_10;
		bool L_73 = L_72.___Bone2;
		if (L_73)
		{
			goto IL_01f7;
		}
	}

IL_01c7:
	{
		float L_74;
		L_74 = BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1_inline((&V_9), NULL);
		if ((!(((float)L_74) > ((float)(0.0f)))))
		{
			goto IL_01de;
		}
	}
	{
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_75 = V_10;
		bool L_76 = L_75.___Bone3;
		if (L_76)
		{
			goto IL_01f7;
		}
	}

IL_01de:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = ___0_triangles;
		int32_t L_78 = V_0;
		int32_t L_79 = L_78;
		V_0 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		int32_t L_80 = V_2;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (int32_t)L_80);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = ___0_triangles;
		int32_t L_82 = V_0;
		int32_t L_83 = L_82;
		V_0 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		int32_t L_84 = V_3;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(L_83), (int32_t)L_84);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = ___0_triangles;
		int32_t L_86 = V_0;
		int32_t L_87 = L_86;
		V_0 = ((int32_t)il2cpp_codegen_add(L_87, 1));
		int32_t L_88 = V_4;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (int32_t)L_88);
	}

IL_01f7:
	{
		int32_t L_89 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_89, 3));
	}

IL_01fb:
	{
		int32_t L_90 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = ___0_triangles;
		NullCheck(L_91);
		int32_t L_92 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_91)->max_length),NULL));
		if ((((int32_t)L_90) < ((int32_t)L_92)))
		{
			goto IL_0016;
		}
	}

IL_0204:
	{
		int32_t L_93 = V_0;
		return L_93;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 BoneMeshEraser_AreBoneContains_m869221F12A57FE472F7240D1C3BD1E8906C5D371 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_exclude, int32_t ___1_boneIndex0, int32_t ___2_boneIndex1, int32_t ___3_boneIndex2, int32_t ___4_boneIndex3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		V_2 = (bool)0;
		V_3 = (bool)0;
		V_4 = 0;
		goto IL_0042;
	}

IL_000d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_0 = ___0_exclude;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = *(L_0);
		int32_t L_2 = V_4;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = ___1_boneIndex0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_003c;
	}

IL_0019:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_6 = ___0_exclude;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = *(L_6);
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ___2_boneIndex1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0025;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_003c;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_12 = ___0_exclude;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = *(L_12);
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = ___3_boneIndex2;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0031;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_003c;
	}

IL_0031:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_18 = ___0_exclude;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = *(L_18);
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ___4_boneIndex3;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)1;
	}

IL_003c:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0042:
	{
		int32_t L_25 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_26 = ___0_exclude;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = *(L_26);
		NullCheck(L_27);
		int32_t L_28 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_27)->max_length),NULL));
		if ((((int32_t)L_25) < ((int32_t)L_28)))
		{
			goto IL_000d;
		}
	}
	{
		bool L_29 = V_0;
		bool L_30 = V_1;
		bool L_31 = V_2;
		bool L_32 = V_3;
		ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49 L_33;
		memset((&L_33), 0, sizeof(L_33));
		ExcludeBoneIndex__ctor_m77DCC564D0169B5B4108F09FF34DD65BFDC9949C((&L_33), L_29, L_30, L_31, L_32, NULL);
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* BoneMeshEraser_GetExcludedIndices_m9A5C1A251F9C2029354E7D49AB3EE7283276E5D4 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_indices, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___1_boneWeights, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_eraseBoneIndices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_indices;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_1 = ___1_boneWeights;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___2_eraseBoneIndices;
		int32_t L_3;
		L_3 = BoneMeshEraser_ExcludeTriangles_m6DAB1FD976D5CB6CD900D061A7437AF12DC6677A(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_indices;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, L_8, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9* BoneMeshEraser_CreateErasedMeshAsync_m8D87344A4D259FD6425FAE037D941E7B124CA67A (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_src, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_eraseBoneIndices, RuntimeObject* ___2_awaitCaller, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m317BFF92EC3C994CCE8C989D0BBB7238E06761AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_StaticInit);
	U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_StaticInit,(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m2A05F6D269FD27DC3E99D398132ED1951990AF0F(NULL);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder))->___m_coreState))->___m_stateMachine), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder))->___m_coreState))->___m_defaultContextAction), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___m_task), (void*)NULL);
		#endif
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = ___0_src;
		(&V_0)->___src = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___src), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___1_eraseBoneIndices;
		(&V_0)->___eraseBoneIndices = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___eraseBoneIndices), (void*)L_2);
		RuntimeObject* L_3 = ___2_awaitCaller;
		(&V_0)->___awaitCaller = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___awaitCaller), (void*)L_3);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* L_4 = (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*)(&(&V_0)->___U3CU3Et__builder);
		AsyncTaskMethodBuilder_1_Start_TisU3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7_m5BB063CC28210CEF38B7C52418977D1D0B9DDB1C(L_4, (&V_0), NULL);
		AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* L_5 = (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*)(&(&V_0)->___U3CU3Et__builder);
		Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9* L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_m317BFF92EC3C994CCE8C989D0BBB7238E06761AA(L_5, AsyncTaskMethodBuilder_1_get_Task_m317BFF92EC3C994CCE8C989D0BBB7238E06761AA_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* BoneMeshEraser_CreateErasedMesh_m91A3456EC00464A1B5557C1B430E6AE9B28CB019 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_src, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_eraseBoneIndices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmediateCaller_t35B46E4D795ACC6F8D63D34A74F99DC70865D51C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___0_src;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___1_eraseBoneIndices;
		ImmediateCaller_t35B46E4D795ACC6F8D63D34A74F99DC70865D51C* L_2 = (ImmediateCaller_t35B46E4D795ACC6F8D63D34A74F99DC70865D51C*)il2cpp_codegen_object_new(ImmediateCaller_t35B46E4D795ACC6F8D63D34A74F99DC70865D51C_il2cpp_TypeInfo_var);
		ImmediateCaller__ctor_mA65012BB3D710B5E07BDDDB505BFA61386FD4A53(L_2, NULL);
		Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9* L_3;
		L_3 = BoneMeshEraser_CreateErasedMeshAsync_m8D87344A4D259FD6425FAE037D941E7B124CA67A(L_0, L_1, L_2, NULL);
		Task_1_tB2C6BACE26DC94A2F554F6E911F45850C5C566E9* L_4 = L_3;
		NullCheck(L_4);
		Task_Wait_m33955515E36BF6598FCEDA841C8C75F716DE5A4E(L_4, NULL);
		NullCheck(L_4);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5;
		L_5 = Task_1_get_Result_mDCF0EC4074B7580C5C5DBA4FC2F58E8A0DD1ABB6(L_4, NULL);
		return L_5;
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
IL2CPP_EXTERN_C void ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshal_pinvoke(const ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49& unmarshaled, ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshaled_pinvoke& marshaled)
{
	marshaled.___Bone0 = static_cast<int32_t>(unmarshaled.___Bone0);
	marshaled.___Bone1 = static_cast<int32_t>(unmarshaled.___Bone1);
	marshaled.___Bone2 = static_cast<int32_t>(unmarshaled.___Bone2);
	marshaled.___Bone3 = static_cast<int32_t>(unmarshaled.___Bone3);
}
IL2CPP_EXTERN_C void ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshal_pinvoke_back(const ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshaled_pinvoke& marshaled, ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49& unmarshaled)
{
	bool unmarshaledBone0_temp_0 = false;
	unmarshaledBone0_temp_0 = static_cast<bool>(marshaled.___Bone0);
	unmarshaled.___Bone0 = unmarshaledBone0_temp_0;
	bool unmarshaledBone1_temp_1 = false;
	unmarshaledBone1_temp_1 = static_cast<bool>(marshaled.___Bone1);
	unmarshaled.___Bone1 = unmarshaledBone1_temp_1;
	bool unmarshaledBone2_temp_2 = false;
	unmarshaledBone2_temp_2 = static_cast<bool>(marshaled.___Bone2);
	unmarshaled.___Bone2 = unmarshaledBone2_temp_2;
	bool unmarshaledBone3_temp_3 = false;
	unmarshaledBone3_temp_3 = static_cast<bool>(marshaled.___Bone3);
	unmarshaled.___Bone3 = unmarshaledBone3_temp_3;
}
IL2CPP_EXTERN_C void ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshal_pinvoke_cleanup(ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshal_com(const ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49& unmarshaled, ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshaled_com& marshaled)
{
	marshaled.___Bone0 = static_cast<int32_t>(unmarshaled.___Bone0);
	marshaled.___Bone1 = static_cast<int32_t>(unmarshaled.___Bone1);
	marshaled.___Bone2 = static_cast<int32_t>(unmarshaled.___Bone2);
	marshaled.___Bone3 = static_cast<int32_t>(unmarshaled.___Bone3);
}
IL2CPP_EXTERN_C void ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshal_com_back(const ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshaled_com& marshaled, ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49& unmarshaled)
{
	bool unmarshaledBone0_temp_0 = false;
	unmarshaledBone0_temp_0 = static_cast<bool>(marshaled.___Bone0);
	unmarshaled.___Bone0 = unmarshaledBone0_temp_0;
	bool unmarshaledBone1_temp_1 = false;
	unmarshaledBone1_temp_1 = static_cast<bool>(marshaled.___Bone1);
	unmarshaled.___Bone1 = unmarshaledBone1_temp_1;
	bool unmarshaledBone2_temp_2 = false;
	unmarshaledBone2_temp_2 = static_cast<bool>(marshaled.___Bone2);
	unmarshaled.___Bone2 = unmarshaledBone2_temp_2;
	bool unmarshaledBone3_temp_3 = false;
	unmarshaledBone3_temp_3 = static_cast<bool>(marshaled.___Bone3);
	unmarshaled.___Bone3 = unmarshaledBone3_temp_3;
}
IL2CPP_EXTERN_C void ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshal_com_cleanup(ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcludeBoneIndex__ctor_m77DCC564D0169B5B4108F09FF34DD65BFDC9949C (ExcludeBoneIndex_t99AF549E0613511932950AD28EA90EF6C7F66C49* __this, bool ___0_bone0, bool ___1_bone1, bool ___2_bone2, bool ___3_bone3, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_bone0;
		__this->___Bone0 = L_0;
		bool L_1 = ___1_bone1;
		__this->___Bone1 = L_1;
		bool L_2 = ___2_bone2;
		__this->___Bone2 = L_2;
		bool L_3 = ___3_bone3;
		__this->___Bone3 = L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m3DA7A6D5B4D9DE5F469E9AD7E0D23DCA06B2D33C (U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1__ctor_mB2FF83513D0E4A13B29BC7F7B0D8D717AE171BB6 (U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* U3CU3Ec__DisplayClass5_1_U3CCreateErasedMeshAsyncU3Eb__0_m6FFF0D3AD258E074D07E4F19424B60FF3F73D9F0 (U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___srcIndices;
		U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1* L_1 = __this->___CSU24U3CU3E8__locals1;
		NullCheck(L_1);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_2 = L_1->___boneWeights;
		U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1* L_3 = __this->___CSU24U3CU3E8__locals1;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___eraseBoneIndices;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = BoneMeshEraser_GetExcludedIndices_m9A5C1A251F9C2029354E7D49AB3EE7283276E5D4(L_0, L_2, L_4, NULL);
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateErasedMeshAsyncU3Ed__5_MoveNext_m10E8A214A10557EDDE1F9BA023622EC3D9DC406A (U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468_TisU3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7_m7358A6D8DEDF3D61228A6A3274C40B43C173B063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mE3270B6693065D74D316B608AF3E7BAE732568D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tF4A502011C41A6BC8168FC4FD896AE929A629C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAwaitCaller_Run_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mABF05A27F9381827FEBBA4BE33DAB80D66CA9C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_1_U3CCreateErasedMeshAsyncU3Eb__0_m6FFF0D3AD258E074D07E4F19424B60FF3F73D9F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC9DC233CB4E012F70F68486F2D8FBEF178D48BD);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_StaticInit);
	int32_t V_0 = 0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_1 = NULL;
	U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_01a8_1;
			}
		}
		{
			U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1* L_2 = (U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass5_0__ctor_m3DA7A6D5B4D9DE5F469E9AD7E0D23DCA06B2D33C(L_2, NULL);
			__this->___U3CU3E8__1 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1), (void*)L_2);
			U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1* L_3 = __this->___U3CU3E8__1;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___eraseBoneIndices;
			NullCheck(L_3);
			L_3->___eraseBoneIndices = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___eraseBoneIndices), (void*)L_4);
			RuntimeObject* L_5 = __this->___awaitCaller;
			if (L_5)
			{
				goto IL_0037_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateErasedMeshAsyncU3Ed__5_MoveNext_m10E8A214A10557EDDE1F9BA023622EC3D9DC406A_RuntimeMethod_var)));
		}

IL_0037_1:
		{
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
			Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_7, NULL);
			__this->___U3CmeshU3E5__2 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshU3E5__2), (void*)L_7);
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = __this->___U3CmeshU3E5__2;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = __this->___src;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
			String_t* L_11;
			L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteralBC9DC233CB4E012F70F68486F2D8FBEF178D48BD, NULL);
			NullCheck(L_8);
			Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_8, L_11, NULL);
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12 = __this->___U3CmeshU3E5__2;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_13 = __this->___src;
			NullCheck(L_13);
			int32_t L_14;
			L_14 = Mesh_get_indexFormat_m03600214522BB39DD26D2FE35DF943CD635113C2(L_13, NULL);
			NullCheck(L_12);
			Mesh_set_indexFormat_mCCC7837A0916FA7A272159DA6AF984B0022488F4(L_12, L_14, NULL);
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15 = __this->___U3CmeshU3E5__2;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = __this->___src;
			NullCheck(L_16);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17;
			L_17 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_16, NULL);
			NullCheck(L_15);
			Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_15, L_17, NULL);
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_18 = __this->___U3CmeshU3E5__2;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_19 = __this->___src;
			NullCheck(L_19);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20;
			L_20 = Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62(L_19, NULL);
			NullCheck(L_18);
			Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_18, L_20, NULL);
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_21 = __this->___U3CmeshU3E5__2;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22 = __this->___src;
			NullCheck(L_22);
			Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23;
			L_23 = Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F(L_22, NULL);
			NullCheck(L_21);
			Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_21, L_23, NULL);
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_24 = __this->___U3CmeshU3E5__2;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_25 = __this->___src;
			NullCheck(L_25);
			Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_26;
			L_26 = Mesh_get_tangents_mEA6C7BF6A2B9A8BD0E9A62963E048F973878299E(L_25, NULL);
			NullCheck(L_24);
			Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B(L_24, L_26, NULL);
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27 = __this->___U3CmeshU3E5__2;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_28 = __this->___src;
			NullCheck(L_28);
			BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_29;
			L_29 = Mesh_get_boneWeights_m2091E7E793A60853ACC7928BFDC1FF8F0DC4C7E9(L_28, NULL);
			NullCheck(L_27);
			Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7(L_27, L_29, NULL);
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_30 = __this->___U3CmeshU3E5__2;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31 = __this->___src;
			NullCheck(L_31);
			Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_32;
			L_32 = Mesh_get_bindposes_mC3B3C3E380881881345B8737895C28C521F70F8D(L_31, NULL);
			NullCheck(L_30);
			Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_30, L_32, NULL);
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_33 = __this->___U3CmeshU3E5__2;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_34 = __this->___src;
			NullCheck(L_34);
			int32_t L_35;
			L_35 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_34, NULL);
			NullCheck(L_33);
			Mesh_set_subMeshCount_m8E4DB392DB0621F7DFF8543FF3943A13072B8A28(L_33, L_35, NULL);
			U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1* L_36 = __this->___U3CU3E8__1;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = __this->___U3CmeshU3E5__2;
			NullCheck(L_37);
			BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_38;
			L_38 = Mesh_get_boneWeights_m2091E7E793A60853ACC7928BFDC1FF8F0DC4C7E9(L_37, NULL);
			NullCheck(L_36);
			L_36->___boneWeights = L_38;
			Il2CppCodeGenWriteBarrier((void**)(&L_36->___boneWeights), (void*)L_38);
			__this->___U3CiU3E5__3 = 0;
			goto IL_01f2_1;
		}

IL_0134_1:
		{
			U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A* L_39 = (U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass5_1__ctor_mB2FF83513D0E4A13B29BC7F7B0D8D717AE171BB6(L_39, NULL);
			V_2 = L_39;
			U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A* L_40 = V_2;
			U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1* L_41 = __this->___U3CU3E8__1;
			NullCheck(L_40);
			L_40->___CSU24U3CU3E8__locals1 = L_41;
			Il2CppCodeGenWriteBarrier((void**)(&L_40->___CSU24U3CU3E8__locals1), (void*)L_41);
			U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A* L_42 = V_2;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_43 = __this->___src;
			int32_t L_44 = __this->___U3CiU3E5__3;
			NullCheck(L_43);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45;
			L_45 = Mesh_GetIndices_m112B85EF32EE3C446947CE6CBC1AF3D50FC18179(L_43, L_44, NULL);
			NullCheck(L_42);
			L_42->___srcIndices = L_45;
			Il2CppCodeGenWriteBarrier((void**)(&L_42->___srcIndices), (void*)L_45);
			RuntimeObject* L_46 = __this->___awaitCaller;
			U3CU3Ec__DisplayClass5_1_t898617428BC06BAF2226A434066645ED916E524A* L_47 = V_2;
			Func_1_tF4A502011C41A6BC8168FC4FD896AE929A629C1D* L_48 = (Func_1_tF4A502011C41A6BC8168FC4FD896AE929A629C1D*)il2cpp_codegen_object_new(Func_1_tF4A502011C41A6BC8168FC4FD896AE929A629C1D_il2cpp_TypeInfo_var);
			Func_1__ctor_m396AE1BD99571371F0E9A984612A8F6B69722479(L_48, L_47, (intptr_t)((void*)U3CU3Ec__DisplayClass5_1_U3CCreateErasedMeshAsyncU3Eb__0_m6FFF0D3AD258E074D07E4F19424B60FF3F73D9F0_RuntimeMethod_var), NULL);
			NullCheck(L_46);
			Task_1_t73D1B2815D517979E9A59A1B3DBE143EAC3F8BDF* L_49;
			L_49 = GenericInterfaceFuncInvoker1< Task_1_t73D1B2815D517979E9A59A1B3DBE143EAC3F8BDF*, Func_1_tF4A502011C41A6BC8168FC4FD896AE929A629C1D* >::Invoke(IAwaitCaller_Run_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mABF05A27F9381827FEBBA4BE33DAB80D66CA9C7C_RuntimeMethod_var, L_46, L_48);
			NullCheck(L_49);
			TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468 L_50;
			L_50 = Task_1_GetAwaiter_m5173501B466EC57C83F63136F4D00A59B5E3EF7A(L_49, NULL);
			V_4 = L_50;
			bool L_51;
			L_51 = TaskAwaiter_1_get_IsCompleted_mC966E0471D6F08DB4EF17985DD2FE1D0C5C2FBDC((&V_4), NULL);
			if (L_51)
			{
				goto IL_01c5_1;
			}
		}
		{
			V_0 = 0;
			__this->___U3CU3E1__state = 0;
			TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468 L_52 = V_4;
			__this->___U3CU3Eu__1 = L_52;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1))->___m_task), (void*)NULL);
			AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* L_53 = (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*)(&__this->___U3CU3Et__builder);
			CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_StaticInit,(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468_TisU3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7_m7358A6D8DEDF3D61228A6A3274C40B43C173B063(L_53, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468_TisU3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7_m7358A6D8DEDF3D61228A6A3274C40B43C173B063_RuntimeMethod_var);
			goto IL_025a;
		}

IL_01a8_1:
		{
			TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468 L_54 = __this->___U3CU3Eu__1;
			V_4 = L_54;
			TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468* L_55 = (TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_55, sizeof(TaskAwaiter_1_t925656957BD560C0495C187AD86E32BA03010468));
			V_0 = (-1);
			__this->___U3CU3E1__state = (-1);
		}

IL_01c5_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56;
			L_56 = TaskAwaiter_1_GetResult_m841EE8D12D30C24DE99CA81296CFFDEEFEF1856E((&V_4), NULL);
			V_3 = L_56;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_57 = __this->___U3CmeshU3E5__2;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_3;
			int32_t L_59 = __this->___U3CiU3E5__3;
			NullCheck(L_57);
			Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_57, L_58, 0, L_59, NULL);
			int32_t L_60 = __this->___U3CiU3E5__3;
			V_5 = ((int32_t)il2cpp_codegen_add(L_60, 1));
			int32_t L_61 = V_5;
			__this->___U3CiU3E5__3 = L_61;
		}

IL_01f2_1:
		{
			int32_t L_62 = __this->___U3CiU3E5__3;
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_63 = __this->___src;
			NullCheck(L_63);
			int32_t L_64;
			L_64 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_63, NULL);
			if ((((int32_t)L_62) < ((int32_t)L_64)))
			{
				goto IL_0134_1;
			}
		}
		{
			Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_65 = __this->___U3CmeshU3E5__2;
			V_1 = L_65;
			goto IL_0238;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0211;
		}
		throw e;
	}

CATCH_0211:
	{
		Exception_t* L_66 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_66;
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CU3E8__1 = (U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1), (void*)(U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1*)NULL);
		__this->___U3CmeshU3E5__2 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshU3E5__2), (void*)(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL);
		AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* L_67 = (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*)(&__this->___U3CU3Et__builder);
		Exception_t* L_68 = V_6;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetException_m43B46B586B06170CCA27891C25DBA19EF535A2FB(L_67, L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m43B46B586B06170CCA27891C25DBA19EF535A2FB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_025a;
	}

IL_0238:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		__this->___U3CU3E8__1 = (U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1), (void*)(U3CU3Ec__DisplayClass5_0_tE3770F8C91AEFB813B6249A187E69B6AD8821BC1*)NULL);
		__this->___U3CmeshU3E5__2 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmeshU3E5__2), (void*)(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL);
		AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* L_69 = (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*)(&__this->___U3CU3Et__builder);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_70 = V_1;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_StaticInit,(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetResult_mE3270B6693065D74D316B608AF3E7BAE732568D5(L_69, L_70, AsyncTaskMethodBuilder_1_SetResult_mE3270B6693065D74D316B608AF3E7BAE732568D5_RuntimeMethod_var);
	}

IL_025a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateErasedMeshAsyncU3Ed__5_MoveNext_m10E8A214A10557EDDE1F9BA023622EC3D9DC406A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7>(__this);
	U3CCreateErasedMeshAsyncU3Ed__5_MoveNext_m10E8A214A10557EDDE1F9BA023622EC3D9DC406A(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateErasedMeshAsyncU3Ed__5_SetStateMachine_mC72C978F3FBAAC67B1904F020E03916BE66E0890 (U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_StaticInit);
	{
		AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B* L_0 = (AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_StaticInit,(AsyncTaskMethodBuilder_1_tF52D8583A6171196B4FD74BAE3F512C58DAFDA9B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_SetStateMachine_m3FEC78E3A0DED9FD12A0D7785EA816961D78984F(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCreateErasedMeshAsyncU3Ed__5_SetStateMachine_mC72C978F3FBAAC67B1904F020E03916BE66E0890_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<U3CCreateErasedMeshAsyncU3Ed__5_t2D444E87760E48515973355CCEE19D90CF40B9F7>(__this);
	U3CCreateErasedMeshAsyncU3Ed__5_SetStateMachine_mC72C978F3FBAAC67B1904F020E03916BE66E0890(_thisAdjusted, ___0_stateMachine, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex0_m45EB0601DB11679A351C7F253558873C80F10612_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_BoneIndex0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex1_mEC07EAC4229FBEB80D0387EE94EE927FC4A8FE18_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_BoneIndex1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex2_m838DE1CFED71082282E00E4F83C24170B1D81310_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_BoneIndex2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoneWeight_get_boneIndex3_m9CA9ACCF8AFEE88EAFC99F6B29365447656F086F_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_BoneIndex3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneWeight_get_weight0_m2BFE8C332832D2275A154F23FB7CB06E028E79E9_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_Weight0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneWeight_get_weight1_m75CB591158586145B4FC4AEC419211950EFA7504_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_Weight1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneWeight_get_weight2_m50F71FA90EAAF40F97E8EA595C49454D8D76845E_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_Weight2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BoneWeight_get_weight3_m56282055EABEAA7B36CB051706B03D5E1F724EF1_inline (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_Weight3;
		return L_0;
	}
}
