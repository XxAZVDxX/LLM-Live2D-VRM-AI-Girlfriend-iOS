#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct method_t81535E3A9A313D01BC63006B5A25610B21847FBD;
struct method_tF13E4C1D2723EFA21A0B8D9A21D42FE0334B238E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941;
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311;
struct AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A;
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2;
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IAudioGenerator_tD9DD08E5891ADC8BBD55CA6E1F00C0EED5C816DA;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30;
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177;
struct Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAudioGenerator_tD9DD08E5891ADC8BBD55CA6E1F00C0EED5C816DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICapabilities_tF49934ED8BF0930F82A0A54F794949FB61194793_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D4DFFEDA70FA6D865B68C20C1F40F10FC31B6DD;
IL2CPP_EXTERN_C String_t* _stringLiteral2186DB8EA3F0EBBFF4B670DC1B315D485E2F447B;
IL2CPP_EXTERN_C String_t* _stringLiteral23ABA34B45DF51C7D9C0E116AA6FDA4749E8C618;
IL2CPP_EXTERN_C String_t* _stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00;
IL2CPP_EXTERN_C String_t* _stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13;
IL2CPP_EXTERN_C String_t* _stringLiteral5A10D0C56FEA8FB8816E3E1F6F88D55578F844F7;
IL2CPP_EXTERN_C String_t* _stringLiteral5C2C12AF4EFFBF824B747CFFBFC316CAE24077D1;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral747CA643504D60A83574C1454D344DADB4D2BA17;
IL2CPP_EXTERN_C String_t* _stringLiteral897119E4E307249E22F47D5E55BF736C2DDC58CE;
IL2CPP_EXTERN_C String_t* _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426;
IL2CPP_EXTERN_C String_t* _stringLiteralA26BD5C8DBC6B4716A120AC6F43A2DFD1452A36B;
IL2CPP_EXTERN_C String_t* _stringLiteralA69BE8EF0F1482795ABF1CC395A765AA747ECD85;
IL2CPP_EXTERN_C String_t* _stringLiteralAC0FA86D1FBA2D9B164ADA2219C940956D1650DC;
IL2CPP_EXTERN_C String_t* _stringLiteralB9ACF8E6DF73A863387F2ABAD61D84C3197C6B01;
IL2CPP_EXTERN_C String_t* _stringLiteralC563ED6549A22286FAAA38A5D49C5B247A52C622;
IL2CPP_EXTERN_C String_t* _stringLiteralC767BA736F2BEEB0EC1BA27ABE77214EC763C9B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCC867B94415511BD48E92E3242D7EDA425D20035;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259;
IL2CPP_EXTERN_C String_t* _stringLiteralD7EA9435CDE6F5B13E32FE646D502752ECCD43DD;
IL2CPP_EXTERN_C String_t* _stringLiteralEE560D196E71D95F90A39910549B06428576F27C;
IL2CPP_EXTERN_C String_t* _stringLiteralFD093BF647113E1F68097589713DF034331718B2;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_CheckIsNotPersistent_m9792AEB282CC66210DDB73702C33EF5FC001313C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DualThreadHandle_CheckValidOrThrow_mF5000E85DCA64BF335A2F2B43C8C67444D9DD9A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_ThrowIfInvalid_m8BD7E31B383F657BB7B2512567A8296CFC16C931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Handle_CheckValidOrThrow_mA6C3BAA711CDA462A6A2653A1A2D04CE2AECD3C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Unmarshal_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m9D639DDA1FA8A66BD6994738E7367E65CBFFFE85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Unmarshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m123307A4215FA1B247B3764DFE99130D468DD47C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var;
struct Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060;;
struct Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_com;
struct Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_com;;
struct Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_pinvoke;
struct Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t462BCCFB9B78348533823E0754F65F52A5348F89 
{
};
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2  : public RuntimeObject
{
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesAvailable;
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesOverflow;
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SampleProviderBindings_tA4CA9B6AE79C693D44C7DA09A24696C4FBBB08B3  : public RuntimeObject
{
};
struct ScriptableGeneratorBindings_tB9FD8D788D5EDF66E708E851437C25CA5ECA514D  : public RuntimeObject
{
};
struct ScriptableProcessorBindings_t89BE2B31C684864ED0E1E5D6F978928182C9E9E8  : public RuntimeObject
{
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
struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E 
{
	int64_t ___Value;
};
struct DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 
{
	uint32_t ___Bits;
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
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 
{
	void* ___begin;
	int32_t ___length;
};
struct RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F 
{
	uint32_t ___numerator;
	uint32_t ___denominator;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct Properties_tA0A739E222CC4DF46C8E1F08B908950539845092 
{
	uint8_t ___m_Reserved;
};
struct Node_tE9DD997AC2A1CDC0DF9579D3B88467E7F42142C8 
{
	void* ___Next;
	int32_t ___Id;
	int32_t ___Version;
	int32_t ___AllocationFlags;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 
{
	bool ___hasValue;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___value;
};
struct AudioSpeakerMode_tD681BDF379A4FB499C5562BF3F97AB93B4E540ED 
{
	int32_t ___value__;
};
struct ControlFunction_tF56532B76DBED412D41D1DC56F7002D533A56F87 
{
	uint32_t ___value__;
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
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 
{
	intptr_t ___m_Node;
	int32_t ___Version;
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
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct ProcessorFunction_t94187A2444D8312007E01AC295FBB4EFF25E4718 
{
	uint32_t ___value__;
};
struct ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085 
{
	void* ___m_Control;
	DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___DualThreadHandle;
	void* ___NativeProcessorFunction;
	void* ___NativeControlFunction;
	intptr_t ___ProcessorReflectionData;
	intptr_t ___ControlReflectionData;
};
struct ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 
{
	DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___Handle;
	ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085* ___Header;
};
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	int32_t ___m_Width;
	int32_t ___m_Height;
	RefreshRate_t44FF0D3F256477CC8AB97FA49D08B636AFB4F68F ___m_RefreshRate;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct WebCamKind_t6E6C1B17D52A297F99D6A758D43B6D90D3287D5C 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct DataOwner_tCE1526E8508042F97CE454B8F70D36044C421CA5 
{
	int32_t ___value__;
};
struct Message_tBD40926CA51B245E5907EA3415980470455D8945 
{
	int64_t ___TypeHash;
	void* ___Data;
	intptr_t ___ManagedHandle;
};
struct UpdateSetting_tA679554B453B4685917A94E3D213100F94791EEE 
{
	int32_t ___value__;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C 
{
	ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D 
{
	int32_t ___speakerMode;
	int32_t ___dspBufferSize;
	int32_t ___sampleRate;
	int32_t ___numRealVoices;
	int32_t ___numVirtualVoices;
};
struct AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle;
};
struct AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243 
{
	ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* ___m_Header;
	Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 ___m_Handle;
};
struct ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67 
{
	Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 ___Handle;
	intptr_t ___ManagedTransport;
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 
{
	ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 ___m_ProcessorInstance;
};
struct MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 
{
	void* ___data;
	int32_t ___size;
	int32_t ___capacity;
	int32_t ___dataOwner;
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
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C 
{
	String_t* ___m_Name;
	String_t* ___m_DepthCameraName;
	int32_t ___m_Flags;
	int32_t ___m_Kind;
	ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___m_Resolutions;
};
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_DepthCameraName;
	int32_t ___m_Flags;
	int32_t ___m_Kind;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions;
};
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_DepthCameraName;
	int32_t ___m_Flags;
	int32_t ___m_Kind;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions;
};
struct Setup_t24BE50E09A2A2C409ED7EC3BCEB0B8ACD458A503 
{
	int32_t ___speakerMode;
	int32_t ___sampleRate;
};
struct CreationParameters_tC3AF64A7D0E7DAF87A587B34097DF91B377A9BD7 
{
	int32_t ___U3CcontrolUpdateSettingU3Ek__BackingField;
	int32_t ___U3CrealtimeUpdateSettingU3Ek__BackingField;
};
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A
{
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback;
};
struct AudioFormat_tC9651BFD36B41D1FC782C702B6C980D9768F699D 
{
	AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D ___m_Config;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct BlittableArrayWrapper_t0A2B64A4A3E855FE9177EDF07099F1006B9F3589 
{
	MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 ___arrayWrapper;
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E  : public MulticastDelegate_t
{
};
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072  : public MulticastDelegate_t
{
};
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30  : public MulticastDelegate_t
{
};
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177  : public MulticastDelegate_t
{
};
struct Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060 
{
	Setup_t24BE50E09A2A2C409ED7EC3BCEB0B8ACD458A503 ___Setup;
	Properties_tA0A739E222CC4DF46C8E1F08B908950539845092 ___Properties;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___ReportedLength;
	bool ___IsFinite;
	bool ___IsRealtime;
	bool ___HasKnownLength;
};
struct Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_pinvoke
{
	Setup_t24BE50E09A2A2C409ED7EC3BCEB0B8ACD458A503 ___Setup;
	Properties_tA0A739E222CC4DF46C8E1F08B908950539845092 ___Properties;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___ReportedLength;
	int32_t ___IsFinite;
	int32_t ___IsRealtime;
	int32_t ___HasKnownLength;
};
struct Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_com
{
	Setup_t24BE50E09A2A2C409ED7EC3BCEB0B8ACD458A503 ___Setup;
	Properties_tA0A739E222CC4DF46C8E1F08B908950539845092 ___Properties;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___ReportedLength;
	int32_t ___IsFinite;
	int32_t ___IsRealtime;
	int32_t ___HasKnownLength;
};
struct Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5 
{
	bool ___hasValue;
	AudioFormat_tC9651BFD36B41D1FC782C702B6C980D9768F699D ___value;
};
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0 
{
	ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085 ___Processor;
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060 ___Configuration;
};
struct GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshaled_pinvoke
{
	ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085 ___Processor;
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_pinvoke ___Configuration;
};
struct GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshaled_com
{
	ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085 ___Processor;
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_com ___Configuration;
};
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields
{
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___OnAudioConfigurationChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemShuttingDown;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemStartedUp;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields
{
	bool ___U3CmuteStateU3Ek__BackingField;
	bool ____stopAudioOutputOnMute;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnMuteStateChanged;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E_StaticFields
{
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___Zero;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___MinValue;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___MaxValue;
	int32_t ___TicksPerSecondBits;
	int32_t ___NonPow2TpsBits;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
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
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null;
};
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A  : public RuntimeArray
{
	ALIGN_FIELD (8) Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 m_Items[1];

	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 value)
	{
		m_Items[index] = value;
	}
};
struct WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5  : public RuntimeArray
{
	ALIGN_FIELD (8) WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C m_Items[1];

	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions), (void*)NULL);
		#endif
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_pinvoke(const Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060& unmarshaled, Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_pinvoke_back(const Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_pinvoke& marshaled, Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060& unmarshaled);
IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_pinvoke_cleanup(Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_com(const Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060& unmarshaled, Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_com_back(const Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_com& marshaled, Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060& unmarshaled);
IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_com_cleanup(Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_com& marshaled);

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_GetPinnableReference_m9D6823661F0B12D72F4403789EFBE9FB85F765B0_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MarshalledUnityObject_Unmarshal_TisIl2CppSharedGenericObject_mDFF812844C3A315BA334E9FD102E4EE28E2847B1_gshared_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mA3535F58A54E060F67F4FFB3A5974A10D6444604 (Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363* __this, DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m0A28F36C93C270B2B16241740BA7B9CFE0166F7A_inline (Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioFormat_tC9651BFD36B41D1FC782C702B6C980D9768F699D Nullable_1_get_Value_m32D74DBCABD51FD09C2289F4AB5813C51FD97782 (Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2C09C399366A16930BBC996441FE7CED2907D3D0_inline (Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E Nullable_1_GetValueOrDefault_m5879DF28E8CBC03BD7B2F3A7B383BB0068DE64DC_inline (Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioResource__ctor_m67FD564B101E07B1EA22EF27F3B5FA290A9D1409 (AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleThrowHelper_ThrowArgumentNullException_m7F2DC9C17105429BA3367C6956EA28B7DB7A4D58 (RuntimeObject* ___0_obj, String_t* ___1_parameterName, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01 (RuntimeObject* ___0_obj, String_t* ___1_parameterName, const RuntimeMethod* method) ;
inline float* ReadOnlySpan_1_GetPinnableReference_m9ADDDEDCC82EA151E25F4E0D7C83FDF33FAACFE3 (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, const RuntimeMethod* method)
{
	return ((  float* (*) (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m9D6823661F0B12D72F4403789EFBE9FB85F765B0_fshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m0E19B557D0404035735939DED3B31282525DC6C6_inline (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedSpanWrapper__ctor_m64EF660BE4BF42BC17706387C68D2BCE779802EF (ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* __this, void* ___0_begin, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_Injected_m75C7A535D2A6A6F7808314F46E1B810AA6E38260 (intptr_t ___0_clip, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333 (const RuntimeMethod* method) ;
inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* MarshalledUnityObject_Unmarshal_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m9D639DDA1FA8A66BD6994738E7367E65CBFFFE85_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*) (intptr_t, const RuntimeMethod*))MarshalledUnityObject_Unmarshal_TisIl2CppSharedGenericObject_mDFF812844C3A315BA334E9FD102E4EE28E2847B1_gshared_inline)(___0_gcHandlePtr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OutStringMarshaller_GetStringAndDispose_m9D37307AC8BEF58DBD9A58B691D3CEF09FF24D01 (ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 ___0_managedSpan, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_GetName_Injected_m0F7918536F4743098180D6AA4AF60E018B458984 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* ___1_ret, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringMarshaller_TryMarshalEmptyOrNullString_mA7E06E9C8BEF97EC745F7DE392C854F5F5B49999_inline (String_t* ___0_s, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* ___1_managedSpanWrapper, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) ;
inline Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m9D6823661F0B12D72F4403789EFBE9FB85F765B0_fshared)(__this, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_Injected_mD60DA5CCB17B8465BE5014CE0447AD26361D2EB3 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* ___1_name, int32_t ___2_lengthSamples, int32_t ___3_channels, int32_t ___4_frequency, bool ___5_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_IsLegacyFormat_Injected_m7072F5FDC54820CA887B98DF51BB23B5AB29D751 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D Span_1_op_Implicit_mB0102DF5CB96E5097ED5DD9E4EF70462B91ECA92 (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D (*) (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C, const RuntimeMethod*))Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_mF54174C499B23C3AFF7276F2152D0AC8E6A21A97 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8 (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___5_pcmreadercallback, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___6_pcmsetpositioncallback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_IsLegacyFormat_m3DB8BD55B7C96596B031D7E2AE5B430C00CE4D58 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CheckIsNotPersistent_m9792AEB282CC66210DDB73702C33EF5FC001313C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Configuration_FramesAndSampleRateToDiscreteTimeTicks_mD8442DC6E7541DA57E38136E474B09FA2A8CC066 (int64_t ___0_lengthFrames, uint32_t ___1_sampleRate, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E DiscreteTime_FromTicks_m0AF37F302A6729B9C86ACBBBF3CA26471DF131BC_inline (int64_t ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mA3535F58A54E060F67F4FFB3A5974A10D6444604 (Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363* __this, DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m0A28F36C93C270B2B16241740BA7B9CFE0166F7A_inline (Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioFormat_tC9651BFD36B41D1FC782C702B6C980D9768F699D Nullable_1_get_Value_m32D74DBCABD51FD09C2289F4AB5813C51FD97782 (Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D AudioFormat_get_audioConfiguration_m769CBA67D62C1D12FBE6C55DC2429D62BA135D43_inline (AudioFormat_tC9651BFD36B41D1FC782C702B6C980D9768F699D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* ControlContext_get_Header_m48ED40585DBA374B2750157BEFD1A0DC92B654E2_inline (ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SampleProviderBindings_CreateGeneratorHeader_m431C7ACC029F1B61B5C7C81F894FED9AA6C5F640 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_audioClip, void* ___1_resourceHeader, AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* ___2_nestedConfiguration, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorInstance__ctor_m918C508DE9944B098D0305A557F6BDC7227C3518 (GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* __this, GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0* ___0_header, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3 (intptr_t ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_Injected_mB8AC15832591B5B0DEE7E67B7E060618A23480F5 (intptr_t ___0_source, intptr_t ___1_clip, float ___2_volumeScale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB (intptr_t ___0__unity_self, bool ___1_stopOneShots, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableArrayWrapper__ctor_m01973995E52FAF7C794F1E79C18EF18A132340B0_inline (BlittableArrayWrapper_t0A2B64A4A3E855FE9177EDF07099F1006B9F3589* __this, void* ___0_data, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_Injected_m0A586FB1E5F68867F79E4737E4FFDCC0F97B6BAA (intptr_t ___0_source, BlittableArrayWrapper_t0A2B64A4A3E855FE9177EDF07099F1006B9F3589* ___1_samples, int32_t ___2_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AudioSource_get_generatorObject_mAE73958C08DBF60EF07B70460B51BE36951C31FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_generatorObject_m5EABBF00B31FE1A6186D08093A9E5841AB280BA9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_get_generatorObject_Injected_mF5A5F744B96E4C2E96463424A92E5AF2F3680221 (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* MarshalledUnityObject_Unmarshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m123307A4215FA1B247B3764DFE99130D468DD47C_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (intptr_t, const RuntimeMethod*))MarshalledUnityObject_Unmarshal_TisIl2CppSharedGenericObject_mDFF812844C3A315BA334E9FD102E4EE28E2847B1_gshared_inline)(___0_gcHandlePtr, method);
}
inline intptr_t MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_inline (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_generatorObject_Injected_m6353E3C9497043EC8D1AAB5CFC1F5A5FF221EF96 (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_inline (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, float ___1_volumeScale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, float ___2_volumeScale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F (intptr_t ___0__unity_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___0_componentType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_samples, int32_t ___2_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309 (AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_Marshal_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m4CF5833467B7EAC854506E5E808202FABD1F15CC_inline (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SampleProviderBindings_CreateGeneratorHeader_Injected_m5BC947EEDEA293BBFD0508BE58B6254B6A49CC4F (intptr_t ___0_audioClip, void* ___1_resourceHeader, AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* ___2_nestedConfiguration, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handle_CheckValidOrThrow_mA6C3BAA711CDA462A6A2653A1A2D04CE2AECD3C3 (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableProcessorBindings_CheckProcessorExists_m067301679619BD978539375D4E2EF3D08662A221 (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___0_handle, ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* ___1_control, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualThreadHandle_CheckValidOrThrow_mF5000E85DCA64BF335A2F2B43C8C67444D9DD9A4 (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessorInstance_Equals_m4873E7D141484FCADC7F0F9C64542D57E0D02398 (ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* __this, ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeneratorInstance_Equals_m1FEFD7862F181D69396710522A061AA1A5189FE1 (GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* __this, GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeneratorInstance_Equals_m7412F772B53B5052FF5070FB2BB2099A93270206 (GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProcessorInstance_GetHashCode_m607D39F5BA947B94238348CF61431A9D8049F9B0 (ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeneratorInstance_GetHashCode_mBF9BB29BE3D212AAAEF53A02346FED4B0435C7D2 (GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessorInstance__ctor_m47770CD417A2712403FE5BF8956F864B3158CA38 (ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* __this, DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___0_handle, ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085* ___1_header, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlContext__ctor_mFFC3A14E72F61DACB51F4F771FAE8416702023B6 (ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243* __this, void* ___0_headerThatShouldBeOfResourceType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 GeneratorInstance_op_Implicit_mB7A6E46130D3BAB42E00F4DD08155EF286A16167_inline (GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* ___0_generatorInstance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControlContext_Exists_mEEB0CCB244CABE9EAD81EBC5E54CB6B50E18FA0F (ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243* __this, ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 ___0_processorInstance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060 ControlContext_GetConfiguration_m5EF5175CD07C7E1661F6AC36ECEA52A293DB0249 (ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243* __this, GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 ___0_generatorInstance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Configuration_get_isRealtime_m99E988C200947A8277C144A84CB1755B5A0C2D78_inline (Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 Configuration_get_length_mB699EC1CF6B8A0955A60B55ABB22AD00A3F6BC3B (Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2C09C399366A16930BBC996441FE7CED2907D3D0_inline (Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E Nullable_1_GetValueOrDefault_m5879DF28E8CBC03BD7B2F3A7B383BB0068DE64DC_inline (Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DiscreteTime_op_Inequality_m4C12F6A54E5C6E8BAC45A3903E6C2A3127C6063C_inline (DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___0_lhs, DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DualThreadHandle_get_WasCreated_m42F8AE48AC4A79E36AA479F6EEB313C43A128C06 (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DualThreadHandle_Equals_mC67DABC578FAA83CDA107C7A5EC172FB7068097A (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* __this, DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DualThreadHandle_Equals_m92C4D9D47177CC9ED6D935717BA50C9AD6DF3CB8 (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DualThreadHandle_GetHashCode_mBAD40BB6FDB9A3F3F7D5B825DE2D7791400EABF1_inline (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DualThreadHandle_op_Equality_m0F64DE651F28BEE50E52DFD02B89EC6F5A005E7E (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___0_left, DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessorInstance_Equals_mFE0F0DA5B311AD6D34EABD73F61C4AE3014084ED (ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableProcessorBindings_CheckProcessorExistsInternal_mA336C1E6D7354F9E62F23ABCF3C2F179F06466D3 (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___0_handle, void* ___1_control, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableProcessorBindings_CheckProcessorExistsInternal_Injected_mE2D1F558704E07E7F18FC8690C3AAD6B1CF81CAD (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* ___0_handle, void* ___1_control, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_inline (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_inline (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE_inline (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF_inline (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Handle_Equals_m5D8356E5FCA91FFFEACC910C738C37690EBA2E64 (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Handle_Equals_mDE217E745B1016A74BCE82848675ED913B391B8F (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Handle_GetHashCode_m8DD5E2EE5197C1FF37CD2CF3B4FD892A9E299DFE (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Handle_get_ValidAndNotDisposed_m1097F1E099632EDF74478AD5B74978BD3FAEF145 (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tE9DD997AC2A1CDC0DF9579D3B88467E7F42142C8* Handle_get_AtomicNode_m3D7AF7852BDF5999877F8F973FDF8724974B0A50 (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8 (uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UIntPtr_op_Explicit_m42C3EA82465934F505B4274A7CE320550A48B7B9 (uintptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DiscreteTime__ctor_m5DF0E73E12BD613EE452B88012E01EF83E70383E_inline (DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E* __this, int64_t ___0_v, int32_t ___1__, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 MarshalledArray_CreateFromPinnedData_m4CB80166B77DE39145E4AD6553C75529ACB0D74B (void* ___0_data, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppSharedGenericObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline)(___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_ThrowIfInvalid_m8BD7E31B383F657BB7B2512567A8296CFC16C931_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtilityInternal_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD43127D5F7AA6EB4B52E5C30BA53F29843E9E9A2_inline (intptr_t* ___0_from, const RuntimeMethod* method)
{
	return ((  GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* (*) (intptr_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m8273D3AEB24F4C3E374238B6F699BE6696808E85 (bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_1 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged;
		bool L_2 = ___0_deviceWasChanged;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline(L_1, L_2, NULL);
	}

IL_0012:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemShuttingDown_m1B9895D60B3267EBDEC69B9169730DBAD8325E90 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemStartedUp_m7FE042936237E5BDCB20299D8C4CF583B661468C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn) ();
	static AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StartAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn) ();
	static AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StopAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
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
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* currentDelegate = reinterpret_cast<AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_deviceWasChanged, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(static_cast<int32_t>(___0_deviceWasChanged));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->____stopAudioOutputOnMute;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_InvokeOnMuteStateChanged_mE5242862F948BA9FBB013A2B45F645B6A21E6198 (bool ___0_mute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_mute;
		bool L_1;
		L_1 = Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline(NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_003a;
		}
	}
	{
		bool L_2 = ___0_mute;
		Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline(L_2, NULL);
		bool L_3;
		L_3 = Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA_inline(NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		bool L_4;
		L_4 = Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline(NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46(NULL);
		goto IL_0028;
	}

IL_0023:
	{
		Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223(NULL);
	}

IL_0028:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged;
		bool L_7 = ___0_mute;
		NullCheck(L_6);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_6, L_7, NULL);
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_InvokeIsStopAudioOutputOnMuteEnabled_m854CB455C7BE7ADC06BABCB9AA24F60309AE7ED1 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA_inline(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip__ctor_m038DA97CB07076D1D9391E1E103F0F41D3622F89 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	{
		AudioResource__ctor_m67FD564B101E07B1EA22EF27F3B5FA290A9D1409(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_mF54174C499B23C3AFF7276F2152D0AC8E6A21A97 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float* V_1 = NULL;
	ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_clip;
		SimpleThrowHelper_ThrowArgumentNullException_m7F2DC9C17105429BA3367C6956EA28B7DB7A4D58(L_1, _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259, NULL);
	}

IL_000e:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ___0_clip;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(L_2, NULL);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___0_clip;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D L_6 = ___1_data;
		V_0 = L_6;
		float* L_7;
		L_7 = ReadOnlySpan_1_GetPinnableReference_m9ADDDEDCC82EA151E25F4E0D7C83FDF33FAACFE3((&V_0), NULL);
		V_1 = L_7;
		float* L_8 = V_1;
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,float*,intptr_t,false,false>(L_8,NULL));
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m0E19B557D0404035735939DED3B31282525DC6C6_inline((&V_0), NULL);
		ManagedSpanWrapper__ctor_m64EF660BE4BF42BC17706387C68D2BCE779802EF((&V_2), (void*)L_9, L_10, NULL);
		int32_t L_11 = ___2_samplesOffset;
		bool L_12;
		L_12 = AudioClip_SetData_Injected_m75C7A535D2A6A6F7808314F46E1B810AA6E38260(G_B4_0, (&V_2), L_11, NULL);
		uintptr_t L_13 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (float*)L_13;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Unmarshal_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m9D639DDA1FA8A66BD6994738E7367E65CBFFFE85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = MarshalledUnityObject_Unmarshal_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m9D639DDA1FA8A66BD6994738E7367E65CBFFFE85_inline(L_0, MarshalledUnityObject_Unmarshal_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m9D639DDA1FA8A66BD6994738E7367E65CBFFFE85_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{
				ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 L_0 = V_0;
				String_t* L_1;
				L_1 = OutStringMarshaller_GetStringAndDispose_m9D37307AC8BEF58DBD9A58B691D3CEF09FF24D01(L_0, NULL);
				V_1 = L_1;
				return;
			}
		});
		try
		{
			{
				intptr_t L_2;
				L_2 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, NULL);
				intptr_t L_3 = L_2;
				if (L_3)
				{
					G_B2_0 = L_3;
					goto IL_000f_1;
				}
				G_B1_0 = L_3;
			}
			{
				ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
				G_B2_0 = G_B1_0;
			}

IL_000f_1:
			{
				AudioClip_GetName_Injected_m0F7918536F4743098180D6AA4AF60E018B458984(G_B2_0, (&V_0), NULL);
				goto IL_0021;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0021:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) 
{
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{
				uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
				V_1 = (Il2CppChar*)L_0;
				return;
			}
		});
		try
		{
			{
				intptr_t L_1;
				L_1 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, NULL);
				intptr_t L_2 = L_1;
				if (L_2)
				{
					G_B2_0 = L_2;
					goto IL_000f_1;
				}
				G_B1_0 = L_2;
			}
			{
				ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
				G_B2_0 = G_B1_0;
			}

IL_000f_1:
			{
				String_t* L_3 = ___0_name;
				bool L_4;
				L_4 = StringMarshaller_TryMarshalEmptyOrNullString_mA7E06E9C8BEF97EC745F7DE392C854F5F5B49999_inline(L_3, (&V_2), NULL);
				if (L_4)
				{
					G_B4_0 = G_B2_0;
					goto IL_0039_1;
				}
				G_B3_0 = G_B2_0;
			}
			{
				String_t* L_5 = ___0_name;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
				L_6 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_5, NULL);
				V_0 = L_6;
				Il2CppChar* L_7;
				L_7 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), NULL);
				V_1 = L_7;
				Il2CppChar* L_8 = V_1;
				uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,Il2CppChar*,intptr_t,false,false>(L_8,NULL));
				int32_t L_10;
				L_10 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), NULL);
				ManagedSpanWrapper__ctor_m64EF660BE4BF42BC17706387C68D2BCE779802EF((&V_2), (void*)L_9, L_10, NULL);
				G_B4_0 = G_B3_0;
			}

IL_0039_1:
			{
				int32_t L_11 = ___1_lengthSamples;
				int32_t L_12 = ___2_channels;
				int32_t L_13 = ___3_frequency;
				bool L_14 = ___4_stream;
				AudioClip_CreateUserSound_Injected_mD60DA5CCB17B8465BE5014CE0447AD26361D2EB3(G_B4_0, (&V_2), L_11, L_12, L_13, L_14, NULL);
				goto IL_004d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_IsLegacyFormat_m3DB8BD55B7C96596B031D7E2AE5B430C00CE4D58 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioClip_IsLegacyFormat_Injected_m7072F5FDC54820CA887B98DF51BB23B5AB29D751(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_offsetSamples, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	{
		int32_t L_0;
		L_0 = AudioClip_get_channels_mFEECF5D6389D196BA5102EB79257298B9FDC9F84(__this, NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_1;
		L_1 = AudioClip_GetName_m561BBA037957E25D5BC5A962A1AA0C789895C9D1(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral5633EC5A323E76AB2DB48162D296F674B1A4AE13, L_1, _stringLiteral8C53570A90E7EFA87FDB7F0DCC0EE1FCC019E426, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		return (bool)0;
	}

IL_0025:
	{
		int32_t L_3 = ___1_offsetSamples;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_4 = ___1_offsetSamples;
		int32_t L_5;
		L_5 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(__this, NULL);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003d;
		}
	}

IL_0032:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA69BE8EF0F1482795ABF1CC395A765AA747ECD85)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var)));
	}

IL_003d:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___0_data;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___0_data;
		NullCheck(L_8);
		if ((((RuntimeArray*)L_8)->max_length))
		{
			goto IL_004f;
		}
	}

IL_0044:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral747CA643504D60A83574C1454D344DADB4D2BA17)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_SetData_m7B473C614C11953D746770F4F89B44600B5A6AF3_RuntimeMethod_var)));
	}

IL_004f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = ___0_data;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_11;
		L_11 = MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_inline(L_10, NULL);
		ReadOnlySpan_1_t9C2C8EDE84088EDC61AADD4CA3C2CDC72D135E3D L_12;
		L_12 = Span_1_op_Implicit_mB0102DF5CB96E5097ED5DD9E4EF70462B91ECA92(L_11, NULL);
		int32_t L_13 = ___1_offsetSamples;
		bool L_14;
		L_14 = AudioClip_SetData_mF54174C499B23C3AFF7276F2152D0AC8E6A21A97(__this, L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_mE8111F06981E42666B6A9A59D0A3EBE002D2CDFB (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		int32_t L_1 = ___1_lengthSamples;
		int32_t L_2 = ___2_channels;
		int32_t L_3 = ___3_frequency;
		bool L_4 = ___4_stream;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8(L_0, L_1, L_2, L_3, L_4, (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)NULL, (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)NULL, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8 (String_t* ___0_name, int32_t ___1_lengthSamples, int32_t ___2_channels, int32_t ___3_frequency, bool ___4_stream, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___5_pcmreadercallback, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___6_pcmsetpositioncallback, const RuntimeMethod* method) 
{
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_1 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_0009:
	{
		int32_t L_2 = ___1_lengthSamples;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC563ED6549A22286FAAA38A5D49C5B247A52C622)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___2_channels;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9ACF8E6DF73A863387F2ABAD61D84C3197C6B01)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___3_frequency;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC867B94415511BD48E92E3242D7EDA425D20035)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_Create_m988FEB04BC74440E65C3CF07414E4867AAE737F8_RuntimeMethod_var)));
	}

IL_0036:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8;
		L_8 = AudioClip_Construct_Internal_m88BC07CE3F412DDB62820F9430D1D52DA42A26F6(NULL);
		V_0 = L_8;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_9 = ___5_pcmreadercallback;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_11 = ___5_pcmreadercallback;
		NullCheck(L_10);
		AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83(L_10, L_11, NULL);
	}

IL_0048:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_12 = ___6_pcmsetpositioncallback;
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_14 = ___6_pcmsetpositioncallback;
		NullCheck(L_13);
		AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F(L_13, L_14, NULL);
	}

IL_0054:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = V_0;
		String_t* L_16 = ___0_name;
		int32_t L_17 = ___1_lengthSamples;
		int32_t L_18 = ___2_channels;
		int32_t L_19 = ___3_frequency;
		bool L_20 = ___4_stream;
		NullCheck(L_15);
		AudioClip_CreateUserSound_m34DA102DD6848D555D4A9D45AFAA9D3E5574BC45(L_15, L_16, L_17, L_18, L_19, L_20, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMReaderCallback_mA226EA143D90E04117A740FC9FA9F1111346CA83 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_0 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_1 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_2 = NULL;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var));
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E** L_5 = (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E**)(&__this->___m_PCMReaderCallback);
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_6 = V_2;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_7 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_8;
		L_8 = il2cpp_intrinsic_interlocked_compare_exchange(L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_9 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_9) == ((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMReaderCallback_m3258A455005F4A94570B4F8FE28A5EDA91A88412 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_0 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_1 = NULL;
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* V_2 = NULL;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_1 = V_0;
		V_1 = L_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)CastclassSealed((RuntimeObject*)L_4, PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_il2cpp_TypeInfo_var));
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E** L_5 = (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E**)(&__this->___m_PCMReaderCallback);
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_6 = V_2;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_7 = V_1;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_8;
		L_8 = il2cpp_intrinsic_interlocked_compare_exchange(L_5, L_6, L_7);
		V_0 = L_8;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_9 = V_0;
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_9) == ((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_add_m_PCMSetPositionCallback_mB280AD93A847C65F536D846FECC7DCBE9266C37F (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_0 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_1 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_2 = NULL;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072** L_5 = (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072**)(&__this->___m_PCMSetPositionCallback);
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_6 = V_2;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_7 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_8;
		L_8 = il2cpp_intrinsic_interlocked_compare_exchange(L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_9 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_remove_m_PCMSetPositionCallback_m39598139640580138742F129E0510917DF2E233C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_0 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_1 = NULL;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* V_2 = NULL;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback;
		V_0 = L_0;
	}

IL_0007:
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_1 = V_0;
		V_1 = L_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)CastclassSealed((RuntimeObject*)L_4, PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_il2cpp_TypeInfo_var));
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072** L_5 = (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072**)(&__this->___m_PCMSetPositionCallback);
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_6 = V_2;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_7 = V_1;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_8;
		L_8 = il2cpp_intrinsic_interlocked_compare_exchange(L_5, L_6, L_7);
		V_0 = L_8;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_9 = V_0;
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_10 = V_1;
		if ((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_9) == ((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_m766E5705AB5AE16F5F142867CC3758ABE4BF462C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_1 = __this->___m_PCMReaderCallback;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_data;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_m986EF703B7DDE42343730DE93A095D05B9F4DBB8 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_1 = __this->___m_PCMSetPositionCallback;
		int32_t L_2 = ___0_position;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CheckIsNotPersistent_m9792AEB282CC66210DDB73702C33EF5FC001313C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioClip_IsLegacyFormat_m3DB8BD55B7C96596B031D7E2AE5B430C00CE4D58(__this, NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral897119E4E307249E22F47D5E55BF736C2DDC58CE)), L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA26BD5C8DBC6B4716A120AC6F43A2DFD1452A36B)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_3 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClip_CheckIsNotPersistent_m9792AEB282CC66210DDB73702C33EF5FC001313C_RuntimeMethod_var)));
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isRealtime_mAC78FD95FB9998B38D0E50C2462DC9D9147FEAA4 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	{
		AudioClip_CheckIsNotPersistent_m9792AEB282CC66210DDB73702C33EF5FC001313C(__this, NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isFinite_m20E61329E86505BA44C480115CD9A403FC63308C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	{
		AudioClip_CheckIsNotPersistent_m9792AEB282CC66210DDB73702C33EF5FC001313C(__this, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 AudioClip_UnityEngine_Audio_GeneratorInstance_ICapabilities_get_length_mCA231C69B56E93689C2B45DCE2C3F0AD45CF541B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E_StaticInit);
	{
		AudioClip_CheckIsNotPersistent_m9792AEB282CC66210DDB73702C33EF5FC001313C(__this, NULL);
		int32_t L_0;
		L_0 = AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E(__this, NULL);
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_0,NULL));
		int32_t L_2;
		L_2 = AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B(__this, NULL);
		int64_t L_3;
		L_3 = Configuration_FramesAndSampleRateToDiscreteTimeTicks_mD8442DC6E7541DA57E38136E474B09FA2A8CC066(L_1, L_2, NULL);
		CHECKED_LOCAL_INIT(DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E_StaticInit,(DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E L_4;
		L_4 = DiscreteTime_FromTicks_m0AF37F302A6729B9C86ACBBBF3CA26471DF131BC_inline(L_3, NULL);
		Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_mA3535F58A54E060F67F4FFB3A5974A10D6444604((&L_5), L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 AudioClip_CreateInstance_m00611E45FCDB4A13BC7A07018E41DFFB4C6DAB73 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243 ___0_context, Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5 ___1_nestedFormat, CreationParameters_tC3AF64A7D0E7DAF87A587B34097DF91B377A9BD7 ___2_creationParameters, const RuntimeMethod* method) 
{
	AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* V_0 = NULL;
	GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0* V_1 = NULL;
	AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	AudioFormat_tC9651BFD36B41D1FC782C702B6C980D9768F699D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		AudioClip_CheckIsNotPersistent_m9792AEB282CC66210DDB73702C33EF5FC001313C(__this, NULL);
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D*)L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m0A28F36C93C270B2B16241740BA7B9CFE0166F7A_inline((&___1_nestedFormat), NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		AudioFormat_tC9651BFD36B41D1FC782C702B6C980D9768F699D L_2;
		L_2 = Nullable_1_get_Value_m32D74DBCABD51FD09C2289F4AB5813C51FD97782((&___1_nestedFormat), NULL);
		V_3 = L_2;
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_3;
		L_3 = AudioFormat_get_audioConfiguration_m769CBA67D62C1D12FBE6C55DC2429D62BA135D43_inline((&V_3), NULL);
		V_2 = L_3;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D*,intptr_t,false,false>((&V_2),NULL));
		V_0 = (AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D*)L_4;
	}

IL_0026:
	{
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_5;
		L_5 = ControlContext_get_Header_m48ED40585DBA374B2750157BEFD1A0DC92B654E2_inline((&___0_context), NULL);
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* L_6 = V_0;
		void* L_7;
		L_7 = SampleProviderBindings_CreateGeneratorHeader_m431C7ACC029F1B61B5C7C81F894FED9AA6C5F640(__this, (void*)L_5, L_6, NULL);
		V_1 = (GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0*)L_7;
		GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0* L_8 = V_1;
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		GeneratorInstance__ctor_m918C508DE9944B098D0305A557F6BDC7227C3518((&L_9), L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_Injected_m75C7A535D2A6A6F7808314F46E1B810AA6E38260 (intptr_t ___0_clip, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* ___1_data, int32_t ___2_samplesOffset, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_SetData_Injected_m75C7A535D2A6A6F7808314F46E1B810AA6E38260_ftn) (intptr_t, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455*, int32_t);
	static AudioClip_SetData_Injected_m75C7A535D2A6A6F7808314F46E1B810AA6E38260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_SetData_Injected_m75C7A535D2A6A6F7808314F46E1B810AA6E38260_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::SetData_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(___0_clip, ___1_data, ___2_samplesOffset);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333 (const RuntimeMethod* method) 
{
	typedef intptr_t (*AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333_ftn) ();
	static AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_Construct_Internal_Injected_m7F3BEB8854929C32DC7DDB1D912063567ACAF333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::Construct_Internal_Injected()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_GetName_Injected_m0F7918536F4743098180D6AA4AF60E018B458984 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*AudioClip_GetName_Injected_m0F7918536F4743098180D6AA4AF60E018B458984_ftn) (intptr_t, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455*);
	static AudioClip_GetName_Injected_m0F7918536F4743098180D6AA4AF60E018B458984_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_GetName_Injected_m0F7918536F4743098180D6AA4AF60E018B458984_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::GetName_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&)");
	_il2cpp_icall_func(___0__unity_self, ___1_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_CreateUserSound_Injected_mD60DA5CCB17B8465BE5014CE0447AD26361D2EB3 (intptr_t ___0__unity_self, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* ___1_name, int32_t ___2_lengthSamples, int32_t ___3_channels, int32_t ___4_frequency, bool ___5_stream, const RuntimeMethod* method) 
{
	typedef void (*AudioClip_CreateUserSound_Injected_mD60DA5CCB17B8465BE5014CE0447AD26361D2EB3_ftn) (intptr_t, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455*, int32_t, int32_t, int32_t, bool);
	static AudioClip_CreateUserSound_Injected_mD60DA5CCB17B8465BE5014CE0447AD26361D2EB3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_CreateUserSound_Injected_mD60DA5CCB17B8465BE5014CE0447AD26361D2EB3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::CreateUserSound_Injected(System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_name, ___2_lengthSamples, ___3_channels, ___4_frequency, ___5_stream);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_IsLegacyFormat_Injected_m7072F5FDC54820CA887B98DF51BB23B5AB29D751 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioClip_IsLegacyFormat_Injected_m7072F5FDC54820CA887B98DF51BB23B5AB29D751_ftn) (intptr_t);
	static AudioClip_IsLegacyFormat_Injected_m7072F5FDC54820CA887B98DF51BB23B5AB29D751_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_IsLegacyFormat_Injected_m7072F5FDC54820CA887B98DF51BB23B5AB29D751_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::IsLegacyFormat_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53_ftn) (intptr_t);
	static AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_Injected_mA4C188DE35DD5721756C2316D48A593C854AFF53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5_ftn) (intptr_t);
	static AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_Injected_m18E5C4BD533706C80A8780D7439E151E305479F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78_ftn) (intptr_t);
	static AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_channels_Injected_mB9349B18A44BD4FE6947947DA7EC0C561E42CE78_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_channels_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B_ftn) (intptr_t);
	static AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_frequency_Injected_m88A5AA18CEDCC1F528AF69A95C23ED5ADD39136B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_frequency_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
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
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* currentDelegate = reinterpret_cast<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInstance(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	NullCheck(___0_data);
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_data, method);
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_data, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	float* ____0_data_marshaled = NULL;
	if (___0_data != NULL)
	{
		____0_data_marshaled = reinterpret_cast<float*>((___0_data)->GetAddressAtUnchecked(0));
	}

	il2cppPInvokeFunc(____0_data_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_mF621B6CC1A4BA6525190C5037401CF2FD5C0CF28 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInstance;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
				__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
			else
				__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	__this->___extra_arg = (intptr_t)PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* currentDelegate = reinterpret_cast<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_position, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_position);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_mD16F77DDB552EB69BB3F5EF39420B2F09F95455B (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309 (AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		SimpleThrowHelper_ThrowArgumentNullException_m7F2DC9C17105429BA3367C6956EA28B7DB7A4D58(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___0_source;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_2, NULL);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		uint64_t L_6 = ___1_delay;
		AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3(G_B4_0, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, float ___2_volumeScale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	intptr_t G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	intptr_t G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	intptr_t G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	intptr_t G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		SimpleThrowHelper_ThrowArgumentNullException_m7F2DC9C17105429BA3367C6956EA28B7DB7A4D58(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ___1_clip;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = ___1_clip;
		SimpleThrowHelper_ThrowArgumentNullException_m7F2DC9C17105429BA3367C6956EA28B7DB7A4D58(L_3, _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259, NULL);
	}

IL_001d:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = ___0_source;
		intptr_t L_5;
		L_5 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_4, NULL);
		intptr_t L_6 = L_5;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0032;
		}
		G_B5_0 = L_6;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_7, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B6_0 = G_B5_0;
	}

IL_0032:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = ___1_clip;
		intptr_t L_9;
		L_9 = MarshalledUnityObject_MarshalNotNull_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_mC3A4EC248FAFFBF10CD74B1E57A203FE7D9E01F5_inline(L_8, NULL);
		intptr_t L_10 = L_9;
		if (L_10)
		{
			G_B8_0 = L_10;
			G_B8_1 = G_B6_0;
			goto IL_0047;
		}
		G_B7_0 = L_10;
		G_B7_1 = G_B6_0;
	}
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_11 = ___1_clip;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_11, _stringLiteralD5F2B3561CFA951FF37495C4B6AE6DB436EC2259, NULL);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_0047:
	{
		float L_12 = ___2_volumeScale;
		AudioSource_PlayOneShotHelper_Injected_mB8AC15832591B5B0DEE7E67B7E060618A23480F5(G_B8_1, G_B8_0, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_stopOneShots, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_stopOneShots;
		AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___0_source, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_samples, int32_t ___2_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5);
		s_Il2CppMethodInitialized = true;
	}
	BlittableArrayWrapper_t0A2B64A4A3E855FE9177EDF07099F1006B9F3589 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___0_source;
		SimpleThrowHelper_ThrowArgumentNullException_m7F2DC9C17105429BA3367C6956EA28B7DB7A4D58(L_1, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
	}

IL_000e:
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___0_source;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(L_2, NULL);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___0_source;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___1_samples;
		if (!L_6)
		{
			G_B7_0 = G_B4_0;
			goto IL_003f;
		}
		G_B5_0 = G_B4_0;
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___1_samples;
		V_1 = L_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_1;
		NullCheck(L_8);
		if (!(((RuntimeArray*)L_8)->max_length))
		{
			G_B7_0 = G_B5_0;
			goto IL_003f;
		}
		G_B6_0 = G_B5_0;
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_1;
		NullCheck(L_9);
		uintptr_t L_10 = (il2cpp_codegen_conv<uintptr_t,float*,intptr_t,false,false>(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		BlittableArrayWrapper__ctor_m01973995E52FAF7C794F1E79C18EF18A132340B0_inline((&V_0), (void*)L_10, L_12, NULL);
		G_B7_0 = G_B6_0;
	}

IL_003f:
	{
		int32_t L_13 = ___2_channel;
		AudioSource_GetOutputDataHelper_Injected_m0A586FB1E5F68867F79E4737E4FFDCC0F97B6BAA(G_B7_0, (&V_0), L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2;
		L_2 = AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = AudioSource_get_generatorObject_mAE73958C08DBF60EF07B70460B51BE36951C31FE(__this, NULL);
		return ((AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)IsInstSealed((RuntimeObject*)L_0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_il2cpp_TypeInfo_var));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) 
{
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_value;
		AudioSource_set_generatorObject_m5EABBF00B31FE1A6186D08093A9E5841AB280BA9(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AudioSource_get_generatorObject_mAE73958C08DBF60EF07B70460B51BE36951C31FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Unmarshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m123307A4215FA1B247B3764DFE99130D468DD47C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		intptr_t L_2;
		L_2 = AudioSource_get_generatorObject_Injected_mF5A5F744B96E4C2E96463424A92E5AF2F3680221(G_B2_0, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = MarshalledUnityObject_Unmarshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m123307A4215FA1B247B3764DFE99130D468DD47C_inline(L_2, MarshalledUnityObject_Unmarshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m123307A4215FA1B247B3764DFE99130D468DD47C_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_generatorObject_m5EABBF00B31FE1A6186D08093A9E5841AB280BA9 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___0_value;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_m965B12ED56AA1618C042D16D10B1BA3BFD98FF4D_inline(L_2, NULL);
		AudioSource_set_generatorObject_Injected_m6353E3C9497043EC8D1AAB5CFC1F5A5FF221EF96(G_B2_0, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_m10D0A0EAE270424CD2F3BB960CFAA158D9FC24CF (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* ___0_value, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* L_2 = ___0_value;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_Marshal_TisAudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311_m1580BA03AE5DDE6E684BC285BEC86628223AA9C3_inline(L_2, NULL);
		AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB(G_B2_0, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) 
{
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B(__this, L_0, (1.0f), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mF6FE95C58996B38EF6E7F7482F95F5E15E0AB30B (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, float ___1_volumeScale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_clip;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral49403A17E8D32B35CB5B66AB1A2651A7EEAD1B00, NULL);
		return;
	}

IL_0014:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = ___0_clip;
		float L_3 = ___1_volumeScale;
		AudioSource_PlayOneShotHelper_mD110EAF42353687BD0B1190EEF30F0C65A4CF265(__this, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioSource_Stop_m8A4872F0A2680798CD28894DD28609445C4783F5(__this, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2;
		L_2 = AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F(G_B2_0, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mF9D129487C356127ADA3AB5C0A67C7D00F26E3DD (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, float ___2_volume, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2186DB8EA3F0EBBFF4B670DC1B315D485E2F447B);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	float G_B2_0 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_2 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral2186DB8EA3F0EBBFF4B670DC1B315D485E2F447B, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_position;
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7;
		L_7 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_4, L_6, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = ((AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)CastclassSealed((RuntimeObject*)L_7, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_il2cpp_TypeInfo_var));
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = ___0_clip;
		NullCheck(L_8);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_8, L_9, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = L_8;
		NullCheck(L_10);
		AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001(L_10, (1.0f), NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = L_10;
		float L_12 = ___2_volume;
		NullCheck(L_11);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_11, L_12, NULL);
		NullCheck(L_11);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = ___0_clip;
		NullCheck(L_13);
		float L_14;
		L_14 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_13, NULL);
		float L_15;
		L_15 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((((float)L_15) < ((float)(0.00999999978f))))
		{
			G_B2_0 = L_14;
			G_B2_1 = L_4;
			goto IL_0062;
		}
		G_B1_0 = L_14;
		G_B1_1 = L_4;
	}
	{
		float L_16;
		L_16 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		G_B3_0 = L_16;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0067;
	}

IL_0062:
	{
		G_B3_0 = (0.00999999978f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0067:
	{
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(G_B3_2, ((float)il2cpp_codegen_multiply(G_B3_1, G_B3_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		bool L_2 = ___0_value;
		AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_mCEE7A3E87A8C146E048B2CA3413FDC7BDB7BE001 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___0_value, const RuntimeMethod* method) 
{
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		intptr_t L_0;
		L_0 = MarshalledUnityObject_MarshalNotNull_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_mD9CAE1F7BCD08FDB40173EA86F253A6E87B8EF65_inline(__this, NULL);
		intptr_t L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
		G_B1_0 = L_1;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_000f:
	{
		float L_2 = ___0_value;
		AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9(G_B2_0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputData_m8AEF8365E3B162E379E1D5FA6C1607999DE458F3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_samples, int32_t ___1_channel, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_samples;
		int32_t L_1 = ___1_channel;
		AudioSource_GetOutputDataHelper_m209E9A63B5FEDFAA87E99B95E6D4D287AADC0444(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource__ctor_mC67BD65374AC3CDFB702307F4A89932D803191C1 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) 
{
	{
		AudioBehaviour__ctor_m6D88837496C42A746A51383F3D6F29CA72A9D309(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3 (intptr_t ___0_source, uint64_t ___1_delay, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3_ftn) (intptr_t, uint64_t);
	static AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayHelper_Injected_m05446E7631596FF4CEB719301AE808C954E7DFB3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayHelper_Injected(System.IntPtr,System.UInt64)");
	_il2cpp_icall_func(___0_source, ___1_delay);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShotHelper_Injected_mB8AC15832591B5B0DEE7E67B7E060618A23480F5 (intptr_t ___0_source, intptr_t ___1_clip, float ___2_volumeScale, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_PlayOneShotHelper_Injected_mB8AC15832591B5B0DEE7E67B7E060618A23480F5_ftn) (intptr_t, intptr_t, float);
	static AudioSource_PlayOneShotHelper_Injected_mB8AC15832591B5B0DEE7E67B7E060618A23480F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShotHelper_Injected_mB8AC15832591B5B0DEE7E67B7E060618A23480F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShotHelper_Injected(System.IntPtr,System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0_source, ___1_clip, ___2_volumeScale);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB (intptr_t ___0__unity_self, bool ___1_stopOneShots, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB_ftn) (intptr_t, bool);
	static AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_Injected_mA49628DDBC38E8430F141A40A8E34D5CB18A6CCB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_stopOneShots);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_GetOutputDataHelper_Injected_m0A586FB1E5F68867F79E4737E4FFDCC0F97B6BAA (intptr_t ___0_source, BlittableArrayWrapper_t0A2B64A4A3E855FE9177EDF07099F1006B9F3589* ___1_samples, int32_t ___2_channel, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_GetOutputDataHelper_Injected_m0A586FB1E5F68867F79E4737E4FFDCC0F97B6BAA_ftn) (intptr_t, BlittableArrayWrapper_t0A2B64A4A3E855FE9177EDF07099F1006B9F3589*, int32_t);
	static AudioSource_GetOutputDataHelper_Injected_m0A586FB1E5F68867F79E4737E4FFDCC0F97B6BAA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetOutputDataHelper_Injected_m0A586FB1E5F68867F79E4737E4FFDCC0F97B6BAA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetOutputDataHelper_Injected(System.IntPtr,UnityEngine.Bindings.BlittableArrayWrapper&,System.Int32)");
	_il2cpp_icall_func(___0_source, ___1_samples, ___2_channel);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef float (*AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B_ftn) (intptr_t);
	static AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_Injected_mF349411AE1957B030941AC3F318643E63CE9465B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume_Injected(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE_ftn) (intptr_t, float);
	static AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_Injected_m4A5BD8D8EEEF904031C7B543AE841472A16F43AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioSource_get_generatorObject_Injected_mF5A5F744B96E4C2E96463424A92E5AF2F3680221 (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef intptr_t (*AudioSource_get_generatorObject_Injected_mF5A5F744B96E4C2E96463424A92E5AF2F3680221_ftn) (intptr_t);
	static AudioSource_get_generatorObject_Injected_mF5A5F744B96E4C2E96463424A92E5AF2F3680221_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_generatorObject_Injected_mF5A5F744B96E4C2E96463424A92E5AF2F3680221_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_generatorObject_Injected(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_generatorObject_Injected_m6353E3C9497043EC8D1AAB5CFC1F5A5FF221EF96 (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_generatorObject_Injected_m6353E3C9497043EC8D1AAB5CFC1F5A5FF221EF96_ftn) (intptr_t, intptr_t);
	static AudioSource_set_generatorObject_Injected_m6353E3C9497043EC8D1AAB5CFC1F5A5FF221EF96_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_generatorObject_Injected_m6353E3C9497043EC8D1AAB5CFC1F5A5FF221EF96_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_generatorObject_Injected(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB (intptr_t ___0__unity_self, intptr_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB_ftn) (intptr_t, intptr_t);
	static AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_outputAudioMixerGroup_Injected_mF6ED4EDE32B3A6841560099340AE0340715B71AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_outputAudioMixerGroup_Injected(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F (intptr_t ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F_ftn) (intptr_t);
	static AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_Injected_m9CF82B2AA1F4CDBBE7189E07D1719933AB84065F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying_Injected(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC_ftn) (intptr_t, bool);
	static AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_Injected_mEF9474AF2A1FC89B8DE5B578B167E1FE3C0E00CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9 (intptr_t ___0__unity_self, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9_ftn) (intptr_t, bool);
	static AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_Injected_m009A05A89DC8B7EDB36EA1F0CA4E49076993F9C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake_Injected(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9 (intptr_t ___0__unity_self, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9_ftn) (intptr_t, float);
	static AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_spatialBlend_Injected_mE094C32E8F2B48A9D5572528C149EC784B6472A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_spatialBlend_Injected(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___0__unity_self, ___1_value);
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
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name = il2cpp_codegen_marshal_string(unmarshaled.___m_Name);
	marshaled.___m_DepthCameraName = il2cpp_codegen_marshal_string(unmarshaled.___m_DepthCameraName);
	marshaled.___m_Flags = unmarshaled.___m_Flags;
	marshaled.___m_Kind = unmarshaled.___m_Kind;
	if (unmarshaled.___m_Resolutions != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Resolutions_Length = (unmarshaled.___m_Resolutions)->max_length;
		marshaled.___m_Resolutions = il2cpp_codegen_marshal_allocate_array<Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525>(_unmarshaledm_Resolutions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Resolutions_Length); i++)
		{
			(marshaled.___m_Resolutions)[i] = (unmarshaled.___m_Resolutions)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Resolutions = NULL;
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke_back(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke& marshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___m_Name = il2cpp_codegen_marshal_string_result(marshaled.___m_Name);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Name));
	unmarshaled.___m_DepthCameraName = il2cpp_codegen_marshal_string_result(marshaled.___m_DepthCameraName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_DepthCameraName), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_DepthCameraName));
	int32_t unmarshaledm_Flags_temp_2 = 0;
	unmarshaledm_Flags_temp_2 = marshaled.___m_Flags;
	unmarshaled.___m_Flags = unmarshaledm_Flags_temp_2;
	int32_t unmarshaledm_Kind_temp_3 = 0;
	unmarshaledm_Kind_temp_3 = marshaled.___m_Kind;
	unmarshaled.___m_Kind = unmarshaledm_Kind_temp_3;
	if (marshaled.___m_Resolutions != NULL)
	{
		if (unmarshaled.___m_Resolutions == NULL)
		{
			unmarshaled.___m_Resolutions = reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Resolutions), (void*)reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Resolutions)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Resolutions)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Resolutions)[i]);
		}
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_pinvoke_cleanup(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name);
	marshaled.___m_Name = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_DepthCameraName);
	marshaled.___m_DepthCameraName = NULL;
	if (marshaled.___m_Resolutions != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Resolutions);
		marshaled.___m_Resolutions = NULL;
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_com(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com& marshaled)
{
	marshaled.___m_Name = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Name);
	marshaled.___m_DepthCameraName = il2cpp_codegen_marshal_bstring(unmarshaled.___m_DepthCameraName);
	marshaled.___m_Flags = unmarshaled.___m_Flags;
	marshaled.___m_Kind = unmarshaled.___m_Kind;
	if (unmarshaled.___m_Resolutions != NULL)
	{
		il2cpp_array_size_t _unmarshaledm_Resolutions_Length = (unmarshaled.___m_Resolutions)->max_length;
		marshaled.___m_Resolutions = il2cpp_codegen_marshal_allocate_array<Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525>(_unmarshaledm_Resolutions_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledm_Resolutions_Length); i++)
		{
			(marshaled.___m_Resolutions)[i] = (unmarshaled.___m_Resolutions)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___m_Resolutions = NULL;
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_com_back(const WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com& marshaled, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___m_Name = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name));
	unmarshaled.___m_DepthCameraName = il2cpp_codegen_marshal_bstring_result(marshaled.___m_DepthCameraName);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_DepthCameraName), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_DepthCameraName));
	int32_t unmarshaledm_Flags_temp_2 = 0;
	unmarshaledm_Flags_temp_2 = marshaled.___m_Flags;
	unmarshaled.___m_Flags = unmarshaledm_Flags_temp_2;
	int32_t unmarshaledm_Kind_temp_3 = 0;
	unmarshaledm_Kind_temp_3 = marshaled.___m_Kind;
	unmarshaled.___m_Kind = unmarshaledm_Kind_temp_3;
	if (marshaled.___m_Resolutions != NULL)
	{
		if (unmarshaled.___m_Resolutions == NULL)
		{
			unmarshaled.___m_Resolutions = reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Resolutions), (void*)reinterpret_cast<ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*>((ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A*)SZArrayNew(ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___m_Resolutions)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___m_Resolutions)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___m_Resolutions)[i]);
		}
	}
}
IL2CPP_EXTERN_C void WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshal_com_cleanup(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name);
	marshaled.___m_Name = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_DepthCameraName);
	marshaled.___m_DepthCameraName = NULL;
	if (marshaled.___m_Resolutions != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___m_Resolutions);
		marshaled.___m_Resolutions = NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamDevice_ReconstructArrayElementRaw_m6B898336095C8CFC6B06E150C17D25621A914CC7 (WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* ___0_array, int32_t ___1_i, RuntimeObject* ___2_name, RuntimeObject* ___3_depthCameraName, int32_t ___4_flags, int32_t ___5_kind, ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___6_resolutions, const RuntimeMethod* method) 
{
	WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		WebCamDeviceU5BU5D_tA5B1352BDE6FE233B66C3ABF96E00EB3215629F5* L_0 = ___0_array;
		int32_t L_1 = ___1_i;
		il2cpp_codegen_initobj((&V_0), sizeof(WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C));
		RuntimeObject* L_2 = ___2_name;
		(&V_0)->___m_Name = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___m_Name), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_3 = ___3_depthCameraName;
		(&V_0)->___m_DepthCameraName = ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___m_DepthCameraName), (void*)((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)));
		int32_t L_4 = ___4_flags;
		(&V_0)->___m_Flags = L_4;
		int32_t L_5 = ___5_kind;
		(&V_0)->___m_Kind = L_5;
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_6 = ___6_resolutions;
		(&V_0)->___m_Resolutions = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___m_Resolutions), (void*)L_6);
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C L_7 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C)L_7);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_mEB16F7230AB65A3576BF053AC5719F8E134FBCD4 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_sampleFrameCount, const RuntimeMethod* method) 
{
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesAvailable;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_1 = __this->___sampleFramesAvailable;
		int32_t L_2 = ___0_sampleFrameCount;
		NullCheck(L_1);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_m66593173A527981F5EB2A5EF77B0C9119DAB5E15 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___0_droppedSampleFrameCount, const RuntimeMethod* method) 
{
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesOverflow;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_1 = __this->___sampleFramesOverflow;
		int32_t L_2 = ___0_droppedSampleFrameCount;
		NullCheck(L_1);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
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
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* currentDelegate = reinterpret_cast<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInstance(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_provider, ___1_sampleFrameCount, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	VirtualActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericVirtualActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method)
{
	NullCheck(___0_provider);
	GenericInterfaceActionInvoker1< uint32_t >::Invoke(method, ___0_provider, ___1_sampleFrameCount);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_m7DDE0BAD439CD80791140C7D42D661B598A7663A (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInstance;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
				__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
			else
				__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	__this->___extra_arg = (intptr_t)SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SampleProviderBindings_CreateGeneratorHeader_m431C7ACC029F1B61B5C7C81F894FED9AA6C5F640 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_audioClip, void* ___1_resourceHeader, AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* ___2_nestedConfiguration, const RuntimeMethod* method) 
{
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_audioClip;
		intptr_t L_1;
		L_1 = MarshalledUnityObject_Marshal_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m4CF5833467B7EAC854506E5E808202FABD1F15CC_inline(L_0, NULL);
		void* L_2 = ___1_resourceHeader;
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* L_3 = ___2_nestedConfiguration;
		void* L_4;
		L_4 = SampleProviderBindings_CreateGeneratorHeader_Injected_m5BC947EEDEA293BBFD0508BE58B6254B6A49CC4F(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SampleProviderBindings_CreateGeneratorHeader_Injected_m5BC947EEDEA293BBFD0508BE58B6254B6A49CC4F (intptr_t ___0_audioClip, void* ___1_resourceHeader, AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D* ___2_nestedConfiguration, const RuntimeMethod* method) 
{
	typedef void* (*SampleProviderBindings_CreateGeneratorHeader_Injected_m5BC947EEDEA293BBFD0508BE58B6254B6A49CC4F_ftn) (intptr_t, void*, AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D*);
	static SampleProviderBindings_CreateGeneratorHeader_Injected_m5BC947EEDEA293BBFD0508BE58B6254B6A49CC4F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SampleProviderBindings_CreateGeneratorHeader_Injected_m5BC947EEDEA293BBFD0508BE58B6254B6A49CC4F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.SampleProviderBindings::CreateGeneratorHeader_Injected(System.IntPtr,System.Void*,UnityEngine.AudioConfiguration*)");
	void* icallRetVal = _il2cpp_icall_func(___0_audioClip, ___1_resourceHeader, ___2_nestedConfiguration);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D AudioFormat_get_audioConfiguration_m769CBA67D62C1D12FBE6C55DC2429D62BA135D43 (AudioFormat_tC9651BFD36B41D1FC782C702B6C980D9768F699D* __this, const RuntimeMethod* method) 
{
	{
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_0 = __this->___m_Config;
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* ControlContext_get_Header_m48ED40585DBA374B2750157BEFD1A0DC92B654E2 (ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243* __this, const RuntimeMethod* method) 
{
	{
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_0 = __this->___m_Header;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlContext__ctor_mFFC3A14E72F61DACB51F4F771FAE8416702023B6 (ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243* __this, void* ___0_headerThatShouldBeOfResourceType, const RuntimeMethod* method) 
{
	ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* V_0 = NULL;
	{
		void* L_0 = ___0_headerThatShouldBeOfResourceType;
		V_0 = (ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67*)L_0;
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_1 = V_0;
		NullCheck(L_1);
		Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 L_2 = L_1->___Handle;
		__this->___m_Handle = L_2;
		Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* L_3 = (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153*)(&__this->___m_Handle);
		Handle_CheckValidOrThrow_mA6C3BAA711CDA462A6A2653A1A2D04CE2AECD3C3(L_3, NULL);
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_4 = V_0;
		__this->___m_Header = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControlContext_Exists_mEEB0CCB244CABE9EAD81EBC5E54CB6B50E18FA0F (ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243* __this, ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 ___0_processorInstance, const RuntimeMethod* method) 
{
	{
		Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* L_0 = (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153*)(&__this->___m_Handle);
		Handle_CheckValidOrThrow_mA6C3BAA711CDA462A6A2653A1A2D04CE2AECD3C3(L_0, NULL);
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 L_1 = ___0_processorInstance;
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 L_2 = L_1.___Handle;
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_3 = __this->___m_Header;
		bool L_4;
		L_4 = ScriptableProcessorBindings_CheckProcessorExists_m067301679619BD978539375D4E2EF3D08662A221(L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060 ControlContext_GetConfiguration_m5EF5175CD07C7E1661F6AC36ECEA52A293DB0249 (ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243* __this, GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 ___0_generatorInstance, const RuntimeMethod* method) 
{
	{
		Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* L_0 = (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153*)(&__this->___m_Handle);
		Handle_CheckValidOrThrow_mA6C3BAA711CDA462A6A2653A1A2D04CE2AECD3C3(L_0, NULL);
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* L_1 = (ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35*)(&(&___0_generatorInstance)->___m_ProcessorInstance);
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* L_2 = (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766*)(&L_1->___Handle);
		DualThreadHandle_CheckValidOrThrow_mF5000E85DCA64BF335A2F2B43C8C67444D9DD9A4(L_2, NULL);
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 L_3 = ___0_generatorInstance;
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 L_4 = L_3.___m_ProcessorInstance;
		ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085* L_5 = L_4.___Header;
		NullCheck(L_5);
		Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060 L_6 = ((GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0*)L_5)->___Configuration;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlContext_CleanupHeader_mC560997117E3E82A193438753C1020A76A208F5E (ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* ___0_header, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_0 = ___0_header;
		intptr_t L_1 = L_0->___ManagedTransport;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_1, 0, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_3 = ___0_header;
		intptr_t L_4 = L_3->___ManagedTransport;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5;
		L_5 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_4, NULL);
		V_0 = L_5;
		bool L_6;
		L_6 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline((&V_0), NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
	}

IL_002e:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 GeneratorInstance_op_Implicit_mB7A6E46130D3BAB42E00F4DD08155EF286A16167 (GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* ___0_generatorInstance, const RuntimeMethod* method) 
{
	{
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* L_0 = ___0_generatorInstance;
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 L_1 = L_0->___m_ProcessorInstance;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeneratorInstance_Equals_m1FEFD7862F181D69396710522A061AA1A5189FE1 (GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* __this, GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 ___0_other, const RuntimeMethod* method) 
{
	{
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* L_0 = (ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35*)(&__this->___m_ProcessorInstance);
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 L_1 = ___0_other;
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 L_2 = L_1.___m_ProcessorInstance;
		bool L_3;
		L_3 = ProcessorInstance_Equals_m4873E7D141484FCADC7F0F9C64542D57E0D02398(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool GeneratorInstance_Equals_m1FEFD7862F181D69396710522A061AA1A5189FE1_AdjustorThunk (RuntimeObject* __this, GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 ___0_other, const RuntimeMethod* method)
{
	GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2>(__this);
	bool _returnValue;
	_returnValue = GeneratorInstance_Equals_m1FEFD7862F181D69396710522A061AA1A5189FE1(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeneratorInstance_Equals_m7412F772B53B5052FF5070FB2BB2099A93270206 (GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = ___0_obj;
		V_0 = ((*(GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2*)UnBox(L_2, GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2_il2cpp_TypeInfo_var)));
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 L_3 = V_0;
		bool L_4;
		L_4 = GeneratorInstance_Equals_m1FEFD7862F181D69396710522A061AA1A5189FE1(__this, L_3, NULL);
		return L_4;
	}

IL_001c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GeneratorInstance_Equals_m7412F772B53B5052FF5070FB2BB2099A93270206_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2>(__this);
	bool _returnValue;
	_returnValue = GeneratorInstance_Equals_m7412F772B53B5052FF5070FB2BB2099A93270206(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeneratorInstance_GetHashCode_mBF9BB29BE3D212AAAEF53A02346FED4B0435C7D2 (GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* __this, const RuntimeMethod* method) 
{
	{
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* L_0 = (ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35*)(&__this->___m_ProcessorInstance);
		int32_t L_1;
		L_1 = ProcessorInstance_GetHashCode_m607D39F5BA947B94238348CF61431A9D8049F9B0(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t GeneratorInstance_GetHashCode_mBF9BB29BE3D212AAAEF53A02346FED4B0435C7D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2>(__this);
	int32_t _returnValue;
	_returnValue = GeneratorInstance_GetHashCode_mBF9BB29BE3D212AAAEF53A02346FED4B0435C7D2(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorInstance__ctor_m918C508DE9944B098D0305A557F6BDC7227C3518 (GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* __this, GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0* ___0_header, const RuntimeMethod* method) 
{
	{
		GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0* L_0 = ___0_header;
		NullCheck(L_0);
		ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085* L_1 = (ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085*)(&L_0->___Processor);
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 L_2 = L_1->___DualThreadHandle;
		GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0* L_3 = ___0_header;
		NullCheck(L_3);
		ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085* L_4 = (ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085*)(&L_3->___Processor);
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085*,intptr_t,false,false>(L_4,NULL));
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProcessorInstance__ctor_m47770CD417A2712403FE5BF8956F864B3158CA38((&L_6), L_2, (ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085*)L_5, NULL);
		__this->___m_ProcessorInstance = L_6;
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
IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_pinvoke(const Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060& unmarshaled, Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_pinvoke& marshaled)
{
	marshaled.___Setup = unmarshaled.___Setup;
	marshaled.___Properties = unmarshaled.___Properties;
	marshaled.___ReportedLength = unmarshaled.___ReportedLength;
	marshaled.___IsFinite = static_cast<int32_t>(unmarshaled.___IsFinite);
	marshaled.___IsRealtime = static_cast<int32_t>(unmarshaled.___IsRealtime);
	marshaled.___HasKnownLength = static_cast<int32_t>(unmarshaled.___HasKnownLength);
}
IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_pinvoke_back(const Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_pinvoke& marshaled, Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060& unmarshaled)
{
	Setup_t24BE50E09A2A2C409ED7EC3BCEB0B8ACD458A503 unmarshaledSetup_temp_0;
	memset((&unmarshaledSetup_temp_0), 0, sizeof(unmarshaledSetup_temp_0));
	unmarshaledSetup_temp_0 = marshaled.___Setup;
	unmarshaled.___Setup = unmarshaledSetup_temp_0;
	Properties_tA0A739E222CC4DF46C8E1F08B908950539845092 unmarshaledProperties_temp_1;
	memset((&unmarshaledProperties_temp_1), 0, sizeof(unmarshaledProperties_temp_1));
	unmarshaledProperties_temp_1 = marshaled.___Properties;
	unmarshaled.___Properties = unmarshaledProperties_temp_1;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E unmarshaledReportedLength_temp_2;
	memset((&unmarshaledReportedLength_temp_2), 0, sizeof(unmarshaledReportedLength_temp_2));
	unmarshaledReportedLength_temp_2 = marshaled.___ReportedLength;
	unmarshaled.___ReportedLength = unmarshaledReportedLength_temp_2;
	bool unmarshaledIsFinite_temp_3 = false;
	unmarshaledIsFinite_temp_3 = static_cast<bool>(marshaled.___IsFinite);
	unmarshaled.___IsFinite = unmarshaledIsFinite_temp_3;
	bool unmarshaledIsRealtime_temp_4 = false;
	unmarshaledIsRealtime_temp_4 = static_cast<bool>(marshaled.___IsRealtime);
	unmarshaled.___IsRealtime = unmarshaledIsRealtime_temp_4;
	bool unmarshaledHasKnownLength_temp_5 = false;
	unmarshaledHasKnownLength_temp_5 = static_cast<bool>(marshaled.___HasKnownLength);
	unmarshaled.___HasKnownLength = unmarshaledHasKnownLength_temp_5;
}
IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_pinvoke_cleanup(Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_com(const Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060& unmarshaled, Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_com& marshaled)
{
	marshaled.___Setup = unmarshaled.___Setup;
	marshaled.___Properties = unmarshaled.___Properties;
	marshaled.___ReportedLength = unmarshaled.___ReportedLength;
	marshaled.___IsFinite = static_cast<int32_t>(unmarshaled.___IsFinite);
	marshaled.___IsRealtime = static_cast<int32_t>(unmarshaled.___IsRealtime);
	marshaled.___HasKnownLength = static_cast<int32_t>(unmarshaled.___HasKnownLength);
}
IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_com_back(const Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_com& marshaled, Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060& unmarshaled)
{
	Setup_t24BE50E09A2A2C409ED7EC3BCEB0B8ACD458A503 unmarshaledSetup_temp_0;
	memset((&unmarshaledSetup_temp_0), 0, sizeof(unmarshaledSetup_temp_0));
	unmarshaledSetup_temp_0 = marshaled.___Setup;
	unmarshaled.___Setup = unmarshaledSetup_temp_0;
	Properties_tA0A739E222CC4DF46C8E1F08B908950539845092 unmarshaledProperties_temp_1;
	memset((&unmarshaledProperties_temp_1), 0, sizeof(unmarshaledProperties_temp_1));
	unmarshaledProperties_temp_1 = marshaled.___Properties;
	unmarshaled.___Properties = unmarshaledProperties_temp_1;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E unmarshaledReportedLength_temp_2;
	memset((&unmarshaledReportedLength_temp_2), 0, sizeof(unmarshaledReportedLength_temp_2));
	unmarshaledReportedLength_temp_2 = marshaled.___ReportedLength;
	unmarshaled.___ReportedLength = unmarshaledReportedLength_temp_2;
	bool unmarshaledIsFinite_temp_3 = false;
	unmarshaledIsFinite_temp_3 = static_cast<bool>(marshaled.___IsFinite);
	unmarshaled.___IsFinite = unmarshaledIsFinite_temp_3;
	bool unmarshaledIsRealtime_temp_4 = false;
	unmarshaledIsRealtime_temp_4 = static_cast<bool>(marshaled.___IsRealtime);
	unmarshaled.___IsRealtime = unmarshaledIsRealtime_temp_4;
	bool unmarshaledHasKnownLength_temp_5 = false;
	unmarshaledHasKnownLength_temp_5 = static_cast<bool>(marshaled.___HasKnownLength);
	unmarshaled.___HasKnownLength = unmarshaledHasKnownLength_temp_5;
}
IL2CPP_EXTERN_C void Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_com_cleanup(Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_get_isRealtime_m99E988C200947A8277C144A84CB1755B5A0C2D78 (Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___IsRealtime;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 Configuration_get_length_mB699EC1CF6B8A0955A60B55ABB22AD00A3F6BC3B (Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060* __this, const RuntimeMethod* method) 
{
	Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = __this->___HasKnownLength;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363));
		Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E L_2 = __this->___ReportedLength;
		Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_mA3535F58A54E060F67F4FFB3A5974A10D6444604((&L_3), L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Configuration_FramesAndSampleRateToDiscreteTimeTicks_mD8442DC6E7541DA57E38136E474B09FA2A8CC066 (int64_t ___0_lengthFrames, uint32_t ___1_sampleRate, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___1_sampleRate;
		if ((!(((uint32_t)L_0) <= ((uint32_t)((int32_t)44100)))))
		{
			goto IL_0037;
		}
	}
	{
		uint32_t L_1 = ___1_sampleRate;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)16000)))))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t L_2 = ___1_sampleRate;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)8000))))
		{
			goto IL_0063;
		}
	}
	{
		uint32_t L_3 = ___1_sampleRate;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16000))))
		{
			goto IL_006c;
		}
	}
	{
		goto IL_00ab;
	}

IL_0025:
	{
		uint32_t L_4 = ___1_sampleRate;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)22050))))
		{
			goto IL_0075;
		}
	}
	{
		uint32_t L_5 = ___1_sampleRate;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)44100))))
		{
			goto IL_007e;
		}
	}
	{
		goto IL_00ab;
	}

IL_0037:
	{
		uint32_t L_6 = ___1_sampleRate;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)88200)))))
		{
			goto IL_0051;
		}
	}
	{
		uint32_t L_7 = ___1_sampleRate;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)48000))))
		{
			goto IL_0087;
		}
	}
	{
		uint32_t L_8 = ___1_sampleRate;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)88200))))
		{
			goto IL_0090;
		}
	}
	{
		goto IL_00ab;
	}

IL_0051:
	{
		uint32_t L_9 = ___1_sampleRate;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)96000))))
		{
			goto IL_0099;
		}
	}
	{
		uint32_t L_10 = ___1_sampleRate;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)192000))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_00ab;
	}

IL_0063:
	{
		int64_t L_11 = ___0_lengthFrames;
		int64_t L_12 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)17640),NULL));
		return ((int64_t)il2cpp_codegen_multiply(L_11, L_12));
	}

IL_006c:
	{
		int64_t L_13 = ___0_lengthFrames;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)8820),NULL));
		return ((int64_t)il2cpp_codegen_multiply(L_13, L_14));
	}

IL_0075:
	{
		int64_t L_15 = ___0_lengthFrames;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)6400),NULL));
		return ((int64_t)il2cpp_codegen_multiply(L_15, L_16));
	}

IL_007e:
	{
		int64_t L_17 = ___0_lengthFrames;
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)3200),NULL));
		return ((int64_t)il2cpp_codegen_multiply(L_17, L_18));
	}

IL_0087:
	{
		int64_t L_19 = ___0_lengthFrames;
		int64_t L_20 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)2940),NULL));
		return ((int64_t)il2cpp_codegen_multiply(L_19, L_20));
	}

IL_0090:
	{
		int64_t L_21 = ___0_lengthFrames;
		int64_t L_22 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)1600),NULL));
		return ((int64_t)il2cpp_codegen_multiply(L_21, L_22));
	}

IL_0099:
	{
		int64_t L_23 = ___0_lengthFrames;
		int64_t L_24 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)1470),NULL));
		return ((int64_t)il2cpp_codegen_multiply(L_23, L_24));
	}

IL_00a2:
	{
		int64_t L_25 = ___0_lengthFrames;
		int64_t L_26 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)735),NULL));
		return ((int64_t)il2cpp_codegen_multiply(L_25, L_26));
	}

IL_00ab:
	{
		int64_t L_27 = ___0_lengthFrames;
		int64_t L_28 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)141120000),NULL));
		uint32_t L_29 = ___1_sampleRate;
		uint64_t L_30 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_29,NULL));
		return ((int64_t)(((int64_t)il2cpp_codegen_multiply(L_27, L_28))/(int64_t)L_30));
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


IL2CPP_EXTERN_C void GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshal_pinvoke(const GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0& unmarshaled, GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshaled_pinvoke& marshaled)
{
	marshaled.___Processor = unmarshaled.___Processor;
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_pinvoke(unmarshaled.___Configuration, marshaled.___Configuration);
}
IL2CPP_EXTERN_C void GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshal_pinvoke_back(const GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshaled_pinvoke& marshaled, GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0& unmarshaled)
{
	ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085 unmarshaledProcessor_temp_0;
	memset((&unmarshaledProcessor_temp_0), 0, sizeof(unmarshaledProcessor_temp_0));
	unmarshaledProcessor_temp_0 = marshaled.___Processor;
	unmarshaled.___Processor = unmarshaledProcessor_temp_0;
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060 unmarshaledConfiguration_temp_1;
	memset((&unmarshaledConfiguration_temp_1), 0, sizeof(unmarshaledConfiguration_temp_1));
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_pinvoke_back(marshaled.___Configuration, unmarshaledConfiguration_temp_1);
	unmarshaled.___Configuration = unmarshaledConfiguration_temp_1;
}
IL2CPP_EXTERN_C void GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshal_pinvoke_cleanup(GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshaled_pinvoke& marshaled)
{
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_pinvoke_cleanup(marshaled.___Configuration);
}


IL2CPP_EXTERN_C void GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshal_com(const GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0& unmarshaled, GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshaled_com& marshaled)
{
	marshaled.___Processor = unmarshaled.___Processor;
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_com(unmarshaled.___Configuration, marshaled.___Configuration);
}
IL2CPP_EXTERN_C void GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshal_com_back(const GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshaled_com& marshaled, GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0& unmarshaled)
{
	ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085 unmarshaledProcessor_temp_0;
	memset((&unmarshaledProcessor_temp_0), 0, sizeof(unmarshaledProcessor_temp_0));
	unmarshaledProcessor_temp_0 = marshaled.___Processor;
	unmarshaled.___Processor = unmarshaledProcessor_temp_0;
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060 unmarshaledConfiguration_temp_1;
	memset((&unmarshaledConfiguration_temp_1), 0, sizeof(unmarshaledConfiguration_temp_1));
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_com_back(marshaled.___Configuration, unmarshaledConfiguration_temp_1);
	unmarshaled.___Configuration = unmarshaledConfiguration_temp_1;
}
IL2CPP_EXTERN_C void GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshal_com_cleanup(GeneratorHeader_t73B89668B0DA457A4F3141DE6AC8B72D5ED0BDF0_marshaled_com& marshaled)
{
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060_marshal_com_cleanup(marshaled.___Configuration);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableGeneratorBindings_InstantiateGeneratorFromObject_m627DB7836271F2551E83B21A49E39952BA58D7B3 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_generatorObjectDefinition, ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* ___1_control, GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* ___2_runtimeHandle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAudioGenerator_tD9DD08E5891ADC8BBD55CA6E1F00C0EED5C816DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICapabilities_tF49934ED8BF0930F82A0A54F794949FB61194793_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D4DFFEDA70FA6D865B68C20C1F40F10FC31B6DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A10D0C56FEA8FB8816E3E1F6F88D55578F844F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C2C12AF4EFFBF824B747CFFBFC316CAE24077D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC767BA736F2BEEB0EC1BA27ABE77214EC763C9B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE560D196E71D95F90A39910549B06428576F27C);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E_StaticInit);
	RuntimeObject* V_0 = NULL;
	ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* V_1 = NULL;
	ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* V_2 = NULL;
	ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	CreationParameters_tC3AF64A7D0E7DAF87A587B34097DF91B377A9BD7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t G_B11_0 = 0;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_generatorObjectDefinition;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IAudioGenerator_tD9DD08E5891ADC8BBD55CA6E1F00C0EED5C816DA_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0138;
		}
	}
	{
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_2 = ___1_control;
		V_2 = L_2;
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_3 = V_2;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67*,intptr_t,false,false>(L_3,NULL));
		V_1 = (ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67*)L_4;
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_5 = V_1;
		ControlContext__ctor_mFFC3A14E72F61DACB51F4F771FAE8416702023B6((&V_3), (void*)L_5, NULL);
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* L_6 = ___2_runtimeHandle;
		RuntimeObject* L_7 = V_0;
		ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243 L_8 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5));
		Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5 L_9 = V_4;
		il2cpp_codegen_initobj((&V_5), sizeof(CreationParameters_tC3AF64A7D0E7DAF87A587B34097DF91B377A9BD7));
		CreationParameters_tC3AF64A7D0E7DAF87A587B34097DF91B377A9BD7 L_10 = V_5;
		NullCheck(L_7);
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 L_11;
		L_11 = InterfaceFuncInvoker3< GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2, ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243, Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5, CreationParameters_tC3AF64A7D0E7DAF87A587B34097DF91B377A9BD7 >::Invoke(0, IAudioGenerator_tD9DD08E5891ADC8BBD55CA6E1F00C0EED5C816DA_il2cpp_TypeInfo_var, L_7, L_8, L_9, L_10);
		*(GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2*)L_6 = L_11;
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* L_12 = ___2_runtimeHandle;
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 L_13;
		L_13 = GeneratorInstance_op_Implicit_mB7A6E46130D3BAB42E00F4DD08155EF286A16167_inline(L_12, NULL);
		bool L_14;
		L_14 = ControlContext_Exists_mEEB0CCB244CABE9EAD81EBC5E54CB6B50E18FA0F((&V_3), L_13, NULL);
		if (!L_14)
		{
			goto IL_0134;
		}
	}
	{
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* L_15 = ___2_runtimeHandle;
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2 L_16 = (*(GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2*)L_15);
		Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060 L_17;
		L_17 = ControlContext_GetConfiguration_m5EF5175CD07C7E1661F6AC36ECEA52A293DB0249((&V_3), L_16, NULL);
		V_6 = L_17;
		RuntimeObject* L_18 = V_0;
		NullCheck(L_18);
		bool L_19;
		L_19 = InterfaceFuncInvoker0< bool >::Invoke(0, ICapabilities_tF49934ED8BF0930F82A0A54F794949FB61194793_il2cpp_TypeInfo_var, L_18);
		Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060 L_20 = V_6;
		bool L_21 = L_20.___IsFinite;
		if ((((int32_t)L_19) == ((int32_t)L_21)))
		{
			goto IL_0092;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = ___0_generatorObjectDefinition;
		RuntimeObject* L_23 = V_0;
		NullCheck(L_23);
		bool L_24;
		L_24 = InterfaceFuncInvoker0< bool >::Invoke(0, ICapabilities_tF49934ED8BF0930F82A0A54F794949FB61194793_il2cpp_TypeInfo_var, L_23);
		bool L_25 = L_24;
		RuntimeObject* L_26 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_25);
		Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060 L_27 = V_6;
		bool L_28 = L_27.___IsFinite;
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_29);
		String_t* L_31;
		L_31 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral5C2C12AF4EFFBF824B747CFFBFC316CAE24077D1, L_22, L_26, L_30, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_31, NULL);
	}

IL_0092:
	{
		RuntimeObject* L_32 = V_0;
		NullCheck(L_32);
		bool L_33;
		L_33 = InterfaceFuncInvoker0< bool >::Invoke(1, ICapabilities_tF49934ED8BF0930F82A0A54F794949FB61194793_il2cpp_TypeInfo_var, L_32);
		bool L_34;
		L_34 = Configuration_get_isRealtime_m99E988C200947A8277C144A84CB1755B5A0C2D78_inline((&V_6), NULL);
		if ((((int32_t)L_33) == ((int32_t)L_34)))
		{
			goto IL_00c8;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_35 = ___0_generatorObjectDefinition;
		RuntimeObject* L_36 = V_0;
		NullCheck(L_36);
		bool L_37;
		L_37 = InterfaceFuncInvoker0< bool >::Invoke(1, ICapabilities_tF49934ED8BF0930F82A0A54F794949FB61194793_il2cpp_TypeInfo_var, L_36);
		bool L_38 = L_37;
		RuntimeObject* L_39 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_38);
		bool L_40;
		L_40 = Configuration_get_isRealtime_m99E988C200947A8277C144A84CB1755B5A0C2D78_inline((&V_6), NULL);
		bool L_41 = L_40;
		RuntimeObject* L_42 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_41);
		String_t* L_43;
		L_43 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral0D4DFFEDA70FA6D865B68C20C1F40F10FC31B6DD, L_35, L_39, L_42, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_43, NULL);
	}

IL_00c8:
	{
		RuntimeObject* L_44 = V_0;
		NullCheck(L_44);
		Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 L_45;
		L_45 = InterfaceFuncInvoker0< Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 >::Invoke(2, ICapabilities_tF49934ED8BF0930F82A0A54F794949FB61194793_il2cpp_TypeInfo_var, L_44);
		V_7 = L_45;
		Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 L_46;
		L_46 = Configuration_get_length_mB699EC1CF6B8A0955A60B55ABB22AD00A3F6BC3B((&V_6), NULL);
		V_8 = L_46;
		bool L_47;
		L_47 = Nullable_1_get_HasValue_m2C09C399366A16930BBC996441FE7CED2907D3D0_inline((&V_7), NULL);
		bool L_48;
		L_48 = Nullable_1_get_HasValue_m2C09C399366A16930BBC996441FE7CED2907D3D0_inline((&V_8), NULL);
		if ((((int32_t)L_47) == ((int32_t)L_48)))
		{
			goto IL_00ec;
		}
	}
	{
		G_B11_0 = 1;
		goto IL_010b;
	}

IL_00ec:
	{
		bool L_49;
		L_49 = Nullable_1_get_HasValue_m2C09C399366A16930BBC996441FE7CED2907D3D0_inline((&V_7), NULL);
		if (L_49)
		{
			goto IL_00f8;
		}
	}
	{
		G_B11_0 = 0;
		goto IL_010b;
	}

IL_00f8:
	{
		DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E L_50;
		L_50 = Nullable_1_GetValueOrDefault_m5879DF28E8CBC03BD7B2F3A7B383BB0068DE64DC_inline((&V_7), NULL);
		DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E L_51;
		L_51 = Nullable_1_GetValueOrDefault_m5879DF28E8CBC03BD7B2F3A7B383BB0068DE64DC_inline((&V_8), NULL);
		CHECKED_LOCAL_INIT(DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E_StaticInit,(DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_52;
		L_52 = DiscreteTime_op_Inequality_m4C12F6A54E5C6E8BAC45A3903E6C2A3127C6063C_inline(L_50, L_51, NULL);
		G_B11_0 = ((int32_t)(L_52));
	}

IL_010b:
	{
		if (!G_B11_0)
		{
			goto IL_0134;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_53 = ___0_generatorObjectDefinition;
		RuntimeObject* L_54 = V_0;
		NullCheck(L_54);
		Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 L_55;
		L_55 = InterfaceFuncInvoker0< Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 >::Invoke(2, ICapabilities_tF49934ED8BF0930F82A0A54F794949FB61194793_il2cpp_TypeInfo_var, L_54);
		Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 L_56 = L_55;
		RuntimeObject* L_57 = Box(Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363_il2cpp_TypeInfo_var, &L_56);
		Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 L_58;
		L_58 = Configuration_get_length_mB699EC1CF6B8A0955A60B55ABB22AD00A3F6BC3B((&V_6), NULL);
		Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363 L_59 = L_58;
		RuntimeObject* L_60 = Box(Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363_il2cpp_TypeInfo_var, &L_59);
		String_t* L_61;
		L_61 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralEE560D196E71D95F90A39910549B06428576F27C, L_53, L_57, L_60, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_61, NULL);
	}

IL_0134:
	{
		uintptr_t L_62 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67*)L_62;
		return;
	}

IL_0138:
	{
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* L_63 = ___2_runtimeHandle;
		il2cpp_codegen_initobj(L_63, sizeof(GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_64 = ___0_generatorObjectDefinition;
		String_t* L_65;
		L_65 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralC767BA736F2BEEB0EC1BA27ABE77214EC763C9B6, L_64, _stringLiteral5A10D0C56FEA8FB8816E3E1F6F88D55578F844F7, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_65, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DualThreadHandle_get_WasCreated_m42F8AE48AC4A79E36AA479F6EEB313C43A128C06 (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Bits;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DualThreadHandle_CheckValidOrThrow_mF5000E85DCA64BF335A2F2B43C8C67444D9DD9A4 (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = DualThreadHandle_get_WasCreated_m42F8AE48AC4A79E36AA479F6EEB313C43A128C06(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC0FA86D1FBA2D9B164ADA2219C940956D1650DC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DualThreadHandle_CheckValidOrThrow_mF5000E85DCA64BF335A2F2B43C8C67444D9DD9A4_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DualThreadHandle_Equals_mC67DABC578FAA83CDA107C7A5EC172FB7068097A (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* __this, DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___0_other, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Bits;
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 L_1 = ___0_other;
		uint32_t L_2 = L_1.___Bits;
		return (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool DualThreadHandle_Equals_mC67DABC578FAA83CDA107C7A5EC172FB7068097A_AdjustorThunk (RuntimeObject* __this, DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___0_other, const RuntimeMethod* method)
{
	DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766>(__this);
	bool _returnValue;
	_returnValue = DualThreadHandle_Equals_mC67DABC578FAA83CDA107C7A5EC172FB7068097A(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DualThreadHandle_Equals_m92C4D9D47177CC9ED6D935717BA50C9AD6DF3CB8 (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766*)UnBox(L_1, DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766_il2cpp_TypeInfo_var)));
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 L_2 = V_0;
		bool L_3;
		L_3 = DualThreadHandle_Equals_mC67DABC578FAA83CDA107C7A5EC172FB7068097A(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool DualThreadHandle_Equals_m92C4D9D47177CC9ED6D935717BA50C9AD6DF3CB8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766>(__this);
	bool _returnValue;
	_returnValue = DualThreadHandle_Equals_m92C4D9D47177CC9ED6D935717BA50C9AD6DF3CB8(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DualThreadHandle_GetHashCode_mBAD40BB6FDB9A3F3F7D5B825DE2D7791400EABF1 (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Bits;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C  int32_t DualThreadHandle_GetHashCode_mBAD40BB6FDB9A3F3F7D5B825DE2D7791400EABF1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766>(__this);
	int32_t _returnValue;
	_returnValue = DualThreadHandle_GetHashCode_mBAD40BB6FDB9A3F3F7D5B825DE2D7791400EABF1_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DualThreadHandle_op_Equality_m0F64DE651F28BEE50E52DFD02B89EC6F5A005E7E (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___0_left, DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___1_right, const RuntimeMethod* method) 
{
	{
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 L_0 = ___0_left;
		uint32_t L_1 = L_0.___Bits;
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 L_2 = ___1_right;
		uint32_t L_3 = L_2.___Bits;
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessorInstance_Equals_m4873E7D141484FCADC7F0F9C64542D57E0D02398 (ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* __this, ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 ___0_other, const RuntimeMethod* method) 
{
	{
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 L_0 = __this->___Handle;
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 L_1 = ___0_other;
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 L_2 = L_1.___Handle;
		bool L_3;
		L_3 = DualThreadHandle_op_Equality_m0F64DE651F28BEE50E52DFD02B89EC6F5A005E7E(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ProcessorInstance_Equals_m4873E7D141484FCADC7F0F9C64542D57E0D02398_AdjustorThunk (RuntimeObject* __this, ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 ___0_other, const RuntimeMethod* method)
{
	ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35>(__this);
	bool _returnValue;
	_returnValue = ProcessorInstance_Equals_m4873E7D141484FCADC7F0F9C64542D57E0D02398(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessorInstance_Equals_mFE0F0DA5B311AD6D34EABD73F61C4AE3014084ED (ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = ___0_obj;
		V_0 = ((*(ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35*)UnBox(L_2, ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35_il2cpp_TypeInfo_var)));
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 L_3 = V_0;
		bool L_4;
		L_4 = ProcessorInstance_Equals_m4873E7D141484FCADC7F0F9C64542D57E0D02398(__this, L_3, NULL);
		return L_4;
	}

IL_001c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ProcessorInstance_Equals_mFE0F0DA5B311AD6D34EABD73F61C4AE3014084ED_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35>(__this);
	bool _returnValue;
	_returnValue = ProcessorInstance_Equals_mFE0F0DA5B311AD6D34EABD73F61C4AE3014084ED(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProcessorInstance_GetHashCode_m607D39F5BA947B94238348CF61431A9D8049F9B0 (ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* __this, const RuntimeMethod* method) 
{
	{
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* L_0 = (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766*)(&__this->___Handle);
		int32_t L_1;
		L_1 = DualThreadHandle_GetHashCode_mBAD40BB6FDB9A3F3F7D5B825DE2D7791400EABF1_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ProcessorInstance_GetHashCode_m607D39F5BA947B94238348CF61431A9D8049F9B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35>(__this);
	int32_t _returnValue;
	_returnValue = ProcessorInstance_GetHashCode_m607D39F5BA947B94238348CF61431A9D8049F9B0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessorInstance__ctor_m47770CD417A2712403FE5BF8956F864B3158CA38 (ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35* __this, DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___0_handle, ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085* ___1_header, const RuntimeMethod* method) 
{
	{
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 L_0 = ___0_handle;
		__this->___Handle = L_0;
		ProcessorHeader_t2A43F64ECCCC872761CDBE0DA7A36DB193CA1085* L_1 = ___1_header;
		__this->___Header = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableProcessorBindings_CheckProcessorExists_m067301679619BD978539375D4E2EF3D08662A221 (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___0_handle, ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* ___1_control, const RuntimeMethod* method) 
{
	{
		DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 L_0 = ___0_handle;
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_1 = ___1_control;
		bool L_2;
		L_2 = ScriptableProcessorBindings_CheckProcessorExistsInternal_mA336C1E6D7354F9E62F23ABCF3C2F179F06466D3(L_0, (void*)L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableProcessorBindings_CheckProcessorExistsInternal_mA336C1E6D7354F9E62F23ABCF3C2F179F06466D3 (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766 ___0_handle, void* ___1_control, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___1_control;
		bool L_1;
		L_1 = ScriptableProcessorBindings_CheckProcessorExistsInternal_Injected_mE2D1F558704E07E7F18FC8690C3AAD6B1CF81CAD((&___0_handle), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScriptableProcessorBindings_CheckProcessorExistsInternal_Injected_mE2D1F558704E07E7F18FC8690C3AAD6B1CF81CAD (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* ___0_handle, void* ___1_control, const RuntimeMethod* method) 
{
	typedef bool (*ScriptableProcessorBindings_CheckProcessorExistsInternal_Injected_mE2D1F558704E07E7F18FC8690C3AAD6B1CF81CAD_ftn) (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766*, void*);
	static ScriptableProcessorBindings_CheckProcessorExistsInternal_Injected_mE2D1F558704E07E7F18FC8690C3AAD6B1CF81CAD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableProcessorBindings_CheckProcessorExistsInternal_Injected_mE2D1F558704E07E7F18FC8690C3AAD6B1CF81CAD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.ScriptableProcessorBindings::CheckProcessorExistsInternal_Injected(UnityEngine.Audio.DualThreadHandle&,System.Void*)");
	bool icallRetVal = _il2cpp_icall_func(___0_handle, ___1_control);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioResource__ctor_m67FD564B101E07B1EA22EF27F3B5FA290A9D1409 (AudioResource_t35B84706031E4F08C928B1640B804839F4B6500A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	{
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0>(__this);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_inline(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_inline((&___0_other), NULL);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83_AdjustorThunk (RuntimeObject* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___0_other, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0>(__this);
	bool _returnValue;
	_returnValue = AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83(_thisAdjusted, ___0_other, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerGroup__ctor_m0D3A84EDAC9B01AEC0B07AFB1F5B1807F74B9CB8 (AudioMixerGroup_tD29AC8336F7425DF007944F8195CEABF34FC3311* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	{
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C>(__this);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_inline(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_inline((&___0_other), NULL);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57_AdjustorThunk (RuntimeObject* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___0_other, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C>(__this);
	bool _returnValue;
	_returnValue = AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57(_thisAdjusted, ___0_other, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312((&___0_handle), NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		bool L_1;
		L_1 = PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6((&___0_handle), PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7EA9435CDE6F5B13E32FE646D502752ECCD43DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409_RuntimeMethod_var)));
	}

IL_001d:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_3 = ___0_handle;
		__this->___m_Handle = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20>(__this);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_op_Explicit_mC51D8736040715BAA8AC5FA22B6E89F9CDBF25C1 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticInit);
	{
		CHECKED_LOCAL_INIT(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticInit,(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF_inline((&___0_output), NULL);
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(&__this->___m_Handle);
		bool L_1 = ___0_value;
		AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___0_output, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, bool);
	static AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalSetEvaluateOnSeek_m639F527A20B97D2617898E223B5CDC1DC8548804_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalSetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&,System.Boolean)");
	_il2cpp_icall_func(___0_output, ___1_value);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tE9DD997AC2A1CDC0DF9579D3B88467E7F42142C8* Handle_get_AtomicNode_m3D7AF7852BDF5999877F8F973FDF8724974B0A50 (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Node;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		return (Node_tE9DD997AC2A1CDC0DF9579D3B88467E7F42142C8*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Handle_Equals_m5D8356E5FCA91FFFEACC910C738C37690EBA2E64 (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 ___0_other, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Node;
		Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 L_1 = ___0_other;
		intptr_t L_2 = L_1.___m_Node;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = __this->___Version;
		Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 L_5 = ___0_other;
		int32_t L_6 = L_5.___Version;
		return (bool)((((int32_t)L_4) == ((int32_t)L_6))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Handle_Equals_m5D8356E5FCA91FFFEACC910C738C37690EBA2E64_AdjustorThunk (RuntimeObject* __this, Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153 ___0_other, const RuntimeMethod* method)
{
	Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153>(__this);
	bool _returnValue;
	_returnValue = Handle_Equals_m5D8356E5FCA91FFFEACC910C738C37690EBA2E64(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Handle_Equals_mDE217E745B1016A74BCE82848675ED913B391B8F (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = ___0_obj;
		bool L_3;
		L_3 = Handle_Equals_m5D8356E5FCA91FFFEACC910C738C37690EBA2E64(__this, ((*(Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153*)UnBox(L_2, Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153_il2cpp_TypeInfo_var))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Handle_Equals_mDE217E745B1016A74BCE82848675ED913B391B8F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153>(__this);
	bool _returnValue;
	_returnValue = Handle_Equals_mDE217E745B1016A74BCE82848675ED913B391B8F(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Handle_GetHashCode_m8DD5E2EE5197C1FF37CD2CF3B4FD892A9E299DFE (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Node;
		int32_t L_1;
		L_1 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_0, NULL);
		int32_t L_2 = __this->___Version;
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_2));
	}
}
IL2CPP_EXTERN_C  int32_t Handle_GetHashCode_m8DD5E2EE5197C1FF37CD2CF3B4FD892A9E299DFE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153>(__this);
	int32_t _returnValue;
	_returnValue = Handle_GetHashCode_m8DD5E2EE5197C1FF37CD2CF3B4FD892A9E299DFE(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handle_CheckValidOrThrow_mA6C3BAA711CDA462A6A2653A1A2D04CE2AECD3C3 (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Handle_get_ValidAndNotDisposed_m1097F1E099632EDF74478AD5B74978BD3FAEF145(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23ABA34B45DF51C7D9C0E116AA6FDA4749E8C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Handle_CheckValidOrThrow_mA6C3BAA711CDA462A6A2653A1A2D04CE2AECD3C3_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Handle_get_ValidAndNotDisposed_m1097F1E099632EDF74478AD5B74978BD3FAEF145 (Handle_t5E550C52101EDD3CC66477987E73F87CCCFD5153* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Node;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		Node_tE9DD997AC2A1CDC0DF9579D3B88467E7F42142C8* L_2;
		L_2 = Handle_get_AtomicNode_m3D7AF7852BDF5999877F8F973FDF8724974B0A50(__this, NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->___Version;
		int32_t L_4 = __this->___Version;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0034;
		}
	}
	{
		Node_tE9DD997AC2A1CDC0DF9579D3B88467E7F42142C8* L_5;
		L_5 = Handle_get_AtomicNode_m3D7AF7852BDF5999877F8F973FDF8724974B0A50(__this, NULL);
		NullCheck(L_5);
		int32_t L_6 = L_5->___AllocationFlags;
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0034:
	{
		return (bool)0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___0_deviceWasChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_deviceWasChanged, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->____stopAudioOutputOnMute;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringMarshaller_TryMarshalEmptyOrNullString_mA7E06E9C8BEF97EC745F7DE392C854F5F5B49999_inline (String_t* ___0_s, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* ___1_managedSpanWrapper, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_s;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* L_1 = ___1_managedSpanWrapper;
		il2cpp_codegen_initobj(L_1, sizeof(ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455));
		return (bool)1;
	}

IL_000c:
	{
		String_t* L_2 = ___0_s;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* L_4 = ___1_managedSpanWrapper;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uintptr_t L_6;
		L_6 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(L_5, NULL);
		void* L_7;
		L_7 = UIntPtr_op_Explicit_m42C3EA82465934F505B4274A7CE320550A48B7B9(L_6, NULL);
		ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ManagedSpanWrapper__ctor_m64EF660BE4BF42BC17706387C68D2BCE779802EF((&L_8), L_7, 0, NULL);
		*(ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455*)L_4 = L_8;
		return (bool)1;
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) 
{
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___0_text;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___0_text;
		NullCheck(L_4);
		int32_t L_5 = L_4->____stringLength;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E DiscreteTime_FromTicks_m0AF37F302A6729B9C86ACBBBF3CA26471DF131BC_inline (int64_t ___0_v, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_v;
		DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E L_1;
		memset((&L_1), 0, sizeof(L_1));
		DiscreteTime__ctor_m5DF0E73E12BD613EE452B88012E01EF83E70383E_inline((&L_1), L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D AudioFormat_get_audioConfiguration_m769CBA67D62C1D12FBE6C55DC2429D62BA135D43_inline (AudioFormat_tC9651BFD36B41D1FC782C702B6C980D9768F699D* __this, const RuntimeMethod* method) 
{
	{
		AudioConfiguration_t4C8585EA98B6559B306B6FAD6A68088555394A5D L_0 = __this->___m_Config;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* ControlContext_get_Header_m48ED40585DBA374B2750157BEFD1A0DC92B654E2_inline (ControlContext_t67F00D3C59C26C77BED313684AB258AEC5C5A243* __this, const RuntimeMethod* method) 
{
	{
		ControlHeader_t88FD879CA9C5610D6410BA56087244CEA5DE5A67* L_0 = __this->___m_Header;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableArrayWrapper__ctor_m01973995E52FAF7C794F1E79C18EF18A132340B0_inline (BlittableArrayWrapper_t0A2B64A4A3E855FE9177EDF07099F1006B9F3589* __this, void* ___0_data, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_data;
		int32_t L_1 = ___1_size;
		MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 L_2;
		L_2 = MarshalledArray_CreateFromPinnedData_m4CB80166B77DE39145E4AD6553C75529ACB0D74B(L_0, L_1, NULL);
		__this->___arrayWrapper = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___0_provider, uint32_t ___1_sampleFrameCount, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_provider, ___1_sampleFrameCount, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 GeneratorInstance_op_Implicit_mB7A6E46130D3BAB42E00F4DD08155EF286A16167_inline (GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* ___0_generatorInstance, const RuntimeMethod* method) 
{
	{
		GeneratorInstance_t2721F6826DF0F07285CF2F765C273DFD4D8201C2* L_0 = ___0_generatorInstance;
		ProcessorInstance_tC8E3131DB14380822C20BA430BC6BFB4BE0F8B35 L_1 = L_0->___m_ProcessorInstance;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Configuration_get_isRealtime_m99E988C200947A8277C144A84CB1755B5A0C2D78_inline (Configuration_t6237CF0DD0C43C64808F31B712BA308606D3F060* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___IsRealtime;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DiscreteTime_op_Inequality_m4C12F6A54E5C6E8BAC45A3903E6C2A3127C6063C_inline (DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___0_lhs, DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___1_rhs, const RuntimeMethod* method) 
{
	{
		DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E L_0 = ___0_lhs;
		int64_t L_1 = L_0.___Value;
		DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E L_2 = ___1_rhs;
		int64_t L_3 = L_2.___Value;
		return (bool)((((int32_t)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DualThreadHandle_GetHashCode_mBAD40BB6FDB9A3F3F7D5B825DE2D7791400EABF1_inline (DualThreadHandle_tAE325E0835E1A57EE77B2D35921F4495D2EE6766* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Bits;
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_inline (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_inline (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE_inline (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF_inline (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MarshalledUnityObject_Unmarshal_TisIl2CppSharedGenericObject_mDFF812844C3A315BA334E9FD102E4EE28E2847B1_gshared_inline (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		intptr_t L_0 = ___0_gcHandlePtr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_1;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_gcHandlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline(L_3, NULL);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C MemoryExtensions_AsSpan_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF14C9AF44BF6092EB640C33222BE02E3655EC69C_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m0A28F36C93C270B2B16241740BA7B9CFE0166F7A_inline (Nullable_1_t8743998EB2E7DB936C93772849EF306FBD5C5EE5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Il2CppSharedGenericObject* L_1 = ___0_obj;
		intptr_t L_2;
		L_2 = MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2C09C399366A16930BBC996441FE7CED2907D3D0_inline (Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E Nullable_1_GetValueOrDefault_m5879DF28E8CBC03BD7B2F3A7B383BB0068DE64DC_inline (Nullable_1_t9EF99F82DC3D0A8DFF605D72E3793599BE02E363* __this, const RuntimeMethod* method) 
{
	{
		DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DiscreteTime__ctor_m5DF0E73E12BD613EE452B88012E01EF83E70383E_inline (DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E* __this, int64_t ___0_v, int32_t ___1__, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_v;
		__this->___Value = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0;
		L_0 = UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline((&___0_gcHandle), NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = (*(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)L_0);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		GCHandle_ThrowIfInvalid_m8BD7E31B383F657BB7B2512567A8296CFC16C931_inline(L_0, NULL);
		intptr_t L_1 = __this->___handle;
		bool L_2;
		L_2 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		intptr_t L_3 = __this->___handle;
		RuntimeObject* L_4;
		L_4 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_3, NULL);
		return L_4;
	}

IL_0024:
	{
		intptr_t L_5 = __this->___handle;
		RuntimeObject* L_6;
		L_6 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA5EF3ABEDD5776174AAEF4D976B58B424F43B275_inline (Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t7578EBC2679C3216D7A6FA0DAECAF2256A33CF4C));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		goto IL_0037;
	}

IL_0037:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		float* L_4;
		L_4 = il2cpp_unsafe_as_ref<float>(L_3);
		ByReference_1_t187A583E432E494CF3EE45BF80D58DB8309BF70A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_ThrowIfInvalid_m8BD7E31B383F657BB7B2512567A8296CFC16C931_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD093BF647113E1F68097589713DF034331718B2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_ThrowIfInvalid_m8BD7E31B383F657BB7B2512567A8296CFC16C931_RuntimeMethod_var)));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		intptr_t L_1 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(1,NULL));
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((intptr_t)((intptr_t)(L_0&L_1))) == ((intptr_t)L_2))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = *(L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_from;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_1;
		L_1 = UnsafeUtilityInternal_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD43127D5F7AA6EB4B52E5C30BA53F29843E9E9A2_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
