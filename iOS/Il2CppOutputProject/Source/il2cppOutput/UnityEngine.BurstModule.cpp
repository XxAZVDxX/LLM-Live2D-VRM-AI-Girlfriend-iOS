#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
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

struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
struct IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Assembly_t;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735;
struct BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D;
struct BurstDiscardAttribute_tFD6040CDC21DC75DE6457CA5E7686375C8426157;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MethodBase_t;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct FakeDelegate_tAFD10E5EBD93F04FBF9C164DC260F586542BD2AA;
struct ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15;
struct IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstDiscardAttribute_tFD6040CDC21DC75DE6457CA5E7686375C8426157_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatKind_tBA15CECEF749274BD841B594520EEF07F761DA70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3EO_t5526C8E2D4142008AC3F1997DD3A2E2623274A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral095255162964C376C50DCE630D972167CA5AE0D8;
IL2CPP_EXTERN_C String_t* _stringLiteral16764301FDE0B2444923BB6CE0B9B7F315E4DB64;
IL2CPP_EXTERN_C String_t* _stringLiteral17490A99BE5820911E7C397A415006E24720C376;
IL2CPP_EXTERN_C String_t* _stringLiteral254BFB4048DFFA4802D5BB90D1DC360FC3ACBB38;
IL2CPP_EXTERN_C String_t* _stringLiteral2ECA47452988C370602B26B2F5E3A7BF45020DD9;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral4784CA4E159D86F8767CCC55143536AF34801074;
IL2CPP_EXTERN_C String_t* _stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3;
IL2CPP_EXTERN_C String_t* _stringLiteral4FCD8DA0B9B65B8C4780A28A6E171CDAB0A3A61A;
IL2CPP_EXTERN_C String_t* _stringLiteral549D68A6A6C9B9C0F7AD718F2EA1214A9899444C;
IL2CPP_EXTERN_C String_t* _stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE6C7F7F72B90957BFCD4BAD12273C41A1C3421;
IL2CPP_EXTERN_C String_t* _stringLiteral733F2C0F892979C2C29E7E7599E36E7BC6DA158B;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD6BA121E4A8420E000A0297BE2958650057EEB;
IL2CPP_EXTERN_C String_t* _stringLiteral7EAAC6CF31A5C9BD93736FBA006E9BA2CA274A12;
IL2CPP_EXTERN_C String_t* _stringLiteral85F734AB4B70F85FBE3AD2752128D17420A8753B;
IL2CPP_EXTERN_C String_t* _stringLiteral8AC6E2C9E3B0B89CE7829E6FE9748CF10C25C407;
IL2CPP_EXTERN_C String_t* _stringLiteral94EE69212742BFD239103CA73396AEE5B4021ECD;
IL2CPP_EXTERN_C String_t* _stringLiteral9EC4B35F1ACF3C53CE80662755A9D5B126C284C8;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A;
IL2CPP_EXTERN_C String_t* _stringLiteralC00E97A4D6DA0A1E727CA6FCAC517CF439F3A016;
IL2CPP_EXTERN_C String_t* _stringLiteralC13C026731BF574915EF781C5CC709D179D7F4C7;
IL2CPP_EXTERN_C String_t* _stringLiteralCB10577699DFF2E53EAEE7AF1A6306F8D8F38230;
IL2CPP_EXTERN_C String_t* _stringLiteralD3F0FDAE71133B9BF16858FF004D87C3B396A932;
IL2CPP_EXTERN_C String_t* _stringLiteralEEA647B69ECF2FB3DD083E36418FF930832E0BEF;
IL2CPP_EXTERN_C String_t* _stringLiteralF6D9FEBB0838A71FE28376A7B6891A2CD8A2C8FD;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEAABBBE67A35DBB7CF309C3EC21780633775FD;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerHelper_IsBurstEnabled_mC2CE69BA880DB5A9980580DF02F209ADC821695C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerOptions_HasBurstCompileAttribute_m33D637AD44900B97A7874AF69456E4352C1E2D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerService_ClearCacheBetweenCodeLoads_mCC019A1FC10DEDF30E83165A175C144C50987097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_Compile_mBFACF2C17E76D35DBFCBB579799239F166ED10EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_Compile_mF64F58440FAD34F65750AAF482F45E3F7C2D1B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735_m066492ECDDCAAC8F70AE72DD608CDD5AFBF1545E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BurstCompilerService_tE08BB9266F1D91347D7089773A24F98694BB7210_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ClearCacheBetweenCodeLoadsAttribute_t219BC0720849DBA38E2EE521E635E4B4190C7D56_0_0_0_var;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____07DB995E8ED2CFB0AB71EBA69F3A3EC07D5C6AC10C0C64F33E94ED2949B348AA_RVAStorage;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____C69994AC61B52FBCEA582D6CCCD595C12E00BDB18F0C6F593FB6B393CAEDB08C_RVAStorage;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____D0067CAD9A63E0813759A2BB841051CA73570C0DA2E08E840A8EB45DB6A7A010_RVAStorage;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____D5B592C05DC25B5032553F1B27F4139BE95E881F73DB33B02B05AB20C3F9981E_RVAStorage;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t6097C2E23EA7824AC0A5577FAE15A160CDD2BEC9 
{
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523  : public RuntimeObject
{
};
struct Assembly_t  : public RuntimeObject
{
};
struct Assembly_t_marshaled_pinvoke
{
};
struct Assembly_t_marshaled_com
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37  : public RuntimeObject
{
};
struct BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D  : public RuntimeObject
{
	bool ____enableBurstCompilation;
	bool ____enableBurstSafetyChecks;
	bool ___U3CIsGlobalU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3COptionsChangedU3Ek__BackingField;
};
struct BurstCompilerService_tE08BB9266F1D91347D7089773A24F98694BB7210  : public RuntimeObject
{
};
struct BurstRuntime_t0D016C58C8BC49704A93664DA7BD9B00AACEC4F6  : public RuntimeObject
{
};
struct BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67  : public RuntimeObject
{
};
struct BurstUnsafeUtility_tDFB91CC647CCAA242A2ADDD8625F0486A88934DB  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SharedStatic_tA9C677EEB4C738C32D2241C935F7D751F00DE00F  : public RuntimeObject
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
struct __UnityModuleInitialization_t3C624DA7759DEC2FDF4501919463D5FD098A770F  : public RuntimeObject
{
};
struct BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46  : public RuntimeObject
{
};
struct FakeDelegate_tAFD10E5EBD93F04FBF9C164DC260F586542BD2AA  : public RuntimeObject
{
	MethodInfo_t* ___U3CMethodU3Ek__BackingField;
};
struct U3CU3EO_t5526C8E2D4142008AC3F1997DD3A2E2623274A8B  : public RuntimeObject
{
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct BurstDiscardAttribute_tFD6040CDC21DC75DE6457CA5E7686375C8426157  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct BurstTargetCpuAttribute_t97E04F4BDF302E53786294FA2C1A678AE38A3063  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___U3CConditionStringU3Ek__BackingField;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
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
struct MethodBase_t  : public MemberInfo_t
{
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
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
struct __StaticArrayInitTypeSizeU3D256_t2F059CDE66879491232692D95A3D1F1CC6AC8217 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t2F059CDE66879491232692D95A3D1F1CC6AC8217__padding[256];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3_t645ACEC6D3386F4061F03D61C7248557EA49769D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t645ACEC6D3386F4061F03D61C7248557EA49769D__padding[3];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_tA97B7CA441E8AEDCD9F92D4A8C638C449A1ADEBE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tA97B7CA441E8AEDCD9F92D4A8C638C449A1ADEBE__padding[32];
	};
};
#pragma pack(pop, tp)
struct tFloatUnion32_t6A4A5EBD771045CFEDBFD3F71EFF400FFABEB20D 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			float ___m_floatingPoint;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___m_floatingPoint_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___m_integer;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___m_integer_forAlignmentOnly;
		};
	};
};
struct tFloatUnion64_tA7225EDB3329B2675933FD7846A30A1F1F349D76 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			double ___m_floatingPoint;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___m_floatingPoint_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___m_integer;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___m_integer_forAlignmentOnly;
		};
	};
};
struct U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983 
{
	union
	{
		struct
		{
			uint32_t ___FixedElementField;
		};
		uint8_t U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983__padding[140];
	};
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
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
struct FloatMode_t2931E6963F9ADB5DAF642E80FCB1F75967A6E97F 
{
	int32_t ___value__;
};
struct FloatPrecision_t078F1440609A7A18B6C185477F5BDF484FF8ECCB 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct MethodInfo_t  : public MethodBase_t
{
};
struct OptimizeFor_t02616E21413EADFD8BDD68CC83BBE17DB452D8C8 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct BurstLogType_t1204E59A13A22FC5C4256C1D309127A0EF0D7274 
{
	int32_t ___value__;
};
struct CutoffMode_t2A00CC56D8A02FA7843A87242A4D17FDB4E27AF9 
{
	int32_t ___value__;
};
struct NumberBufferKind_t9D301EB798ECB4D21F998B872D3115E67FA5EA78 
{
	int32_t ___value__;
};
struct NumberFormatKind_tBA15CECEF749274BD841B594520EEF07F761DA70 
{
	uint8_t ___value__;
};
struct tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 
{
	int32_t ___m_length;
	U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983 ___m_blocks;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___U3CFloatModeU3Ek__BackingField;
	int32_t ___U3CFloatPrecisionU3Ek__BackingField;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____compileSynchronously;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____disableSafetyChecks;
	int32_t ___U3COptimizeForU3Ek__BackingField;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3COptionsU3Ek__BackingField;
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
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 
{
	uint8_t ___Kind;
	int8_t ___AlignAndSize;
	uint8_t ___Specifier;
	bool ___Lowercase;
};
struct FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshaled_pinvoke
{
	uint8_t ___Kind;
	int8_t ___AlignAndSize;
	uint8_t ___Specifier;
	int32_t ___Lowercase;
};
struct FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshaled_com
{
	uint8_t ___Kind;
	int8_t ___AlignAndSize;
	uint8_t ___Specifier;
	int32_t ___Lowercase;
};
struct NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441 
{
	uint8_t* ____buffer;
	int32_t ___Kind;
	int32_t ___DigitsCount;
	int32_t ___Scale;
	bool ___IsNegative;
};
struct NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshaled_pinvoke
{
	uint8_t* ____buffer;
	int32_t ___Kind;
	int32_t ___DigitsCount;
	int32_t ___Scale;
	int32_t ___IsNegative;
};
struct NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshaled_com
{
	uint8_t* ____buffer;
	int32_t ___Kind;
	int32_t ___DigitsCount;
	int32_t ___Scale;
	int32_t ___IsNegative;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15  : public MulticastDelegate_t
{
};
struct IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5  : public MulticastDelegate_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields
{
	__StaticArrayInitTypeSizeU3D256_t2F059CDE66879491232692D95A3D1F1CC6AC8217 ___07DB995E8ED2CFB0AB71EBA69F3A3EC07D5C6AC10C0C64F33E94ED2949B348AA;
	__StaticArrayInitTypeSizeU3D32_tA97B7CA441E8AEDCD9F92D4A8C638C449A1ADEBE ___C69994AC61B52FBCEA582D6CCCD595C12E00BDB18F0C6F593FB6B393CAEDB08C;
	int64_t ___D0067CAD9A63E0813759A2BB841051CA73570C0DA2E08E840A8EB45DB6A7A010;
	__StaticArrayInitTypeSizeU3D3_t645ACEC6D3386F4061F03D61C7248557EA49769D ___D5B592C05DC25B5032553F1B27F4139BE95E881F73DB33B02B05AB20C3F9981E;
};
struct BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticFields
{
	bool ____IsEnabled;
	BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* ___Options;
	MethodInfo_t* ___DummyMethodInfo;
};
struct BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticFields
{
	bool ____forceDisableBurstCompilation;
	bool ___ForceBurstCompilationSynchronously;
	bool ___IsSecondaryUnityProcess;
};
struct BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SplitByColon;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___logTable;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___g_PowerOf10_U32;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InfinityString;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NanString;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticFields
{
	IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5* ___IsBurstEnabledImpl;
	bool ___IsBurstGenerated;
};
struct U3CU3EO_t5526C8E2D4142008AC3F1997DD3A2E2623274A8B_StaticFields
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3C0U3E__ClearCacheBetweenCodeLoads;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
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
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* CustomAttributeExtensions_GetCustomAttribute_TisIl2CppSharedGenericObject_m31BBABF66E9D94CB217F5E1D2E24A3E19261F4AC_gshared (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* List_1_ToArray_m90E6D9E57256EC0FB6B36FDC40F65B0F59D7B671_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_GetPinnableReference_m9D6823661F0B12D72F4403789EFBE9FB85F765B0_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_Unity_Burst_LowLevel_BurstCompilerService_ClearCacheBetweenCodeLoads_RegisterLifecycleMethod_mE4BF757540209DBE791A47B5BC64F613673EE725 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_mD3DFDBBBE47A2E177F2D0764CD8F4F594B224047_inline (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m51910AF7BA7B527BF0B12F5634B5C187B384EC25_inline (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019 (Delegate_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_mBFACF2C17E76D35DBFCBB579799239F166ED10EC (RuntimeObject* ___0_delegateObj, MethodInfo_t* ___1_methodInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_m2851556A37AAF9A808EFB2C603D11E48635FA785 (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m3DD7B93DF977FC792633C5821D2870381B94D249 (String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_HasBurstCompileAttribute_m33D637AD44900B97A7874AF69456E4352C1E2D71 (MemberInfo_t* ___0_member, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_m84315C6A223375A16B0322C4F1290F8A730C3868_inline (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstCompilerService_CompileAsyncDelegateMethod_mBA2CC9173C2B5D5E7A34F82D45FFA8ED8D044BCC (RuntimeObject* ___0_delegateMethod, String_t* ___1_compilerOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m01D6DED81167EEDAB3E556388CE397DCE9889B1E (int32_t ___0_userID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_mEFF0CF3BFDD35C4EFDE471D48182C149EE7B99E2 (Delegate_t* ___0_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m04EAF7189F35896254CA6DBF65702F47AA2674C4 (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, bool ___0_isGlobal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsBurstEnabled_mC2CE69BA880DB5A9980580DF02F209ADC821695C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_m9CE28DBE9515D43D1F25EABF1361CDCF76011EAA (bool* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_mD51149821405F43677350B4CB66BC9F48D84EB87 (IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m8E563561693D6AB7FE06B9A0C9A4A046BC222FE9 (Delegate_t* ___0_del, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_m5D17141E242FC4414C55B3397F4D4D774A7CB900 (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m0B3BB88AA19287D1B52DA2D92FED3EA02AD73DEC (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m04F0F92F718D2835251288A790AE8E1F497652AA_inline (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_ForceDisableBurstCompilation_m0409020E8A24E6DC6E980915E2555AF33743CCF7 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_mAE3F7E9329F744D6E752B0C2DF35D76BE73D4464 (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mB019091C9647A4406D0106B4C79C6CA50B49D0F0 (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685 (MemberInfo_t* ___0_left, MemberInfo_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* BurstCompilerOptions_GetBurstCompileAttribute_m31EA507F18A9ADDBB6F2A9C19B3BDAFA9229E5A3 (MemberInfo_t* ___0_memberInfo, const RuntimeMethod* method) ;
inline BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735_m066492ECDDCAAC8F70AE72DD608CDD5AFBF1545E (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisIl2CppSharedGenericObject_m31BBABF66E9D94CB217F5E1D2E24A3E19261F4AC_gshared)(___0_element, method);
}
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_mEA04C0EB3B2E2F268E438E8324DAF141AB9FC478 (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, int32_t ___0_floatPrecision, int32_t ___1_floatMode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mB5EDE71C1B8820D3ECF853F4448970E239C04720 (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, bool ___0_value, const RuntimeMethod* method) ;
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_m90E6D9E57256EC0FB6B36FDC40F65B0F59D7B671_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_m0210E524B7FE44CDD4A4030AFE0BB4586B9E39A9_inline (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_m30C3A21614EEB1D2345EB7ABE26CC2BFCFCD533E (MemberInfo_t* ___0_member, BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735** ___1_attribute, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* BurstCompilerOptions_get_OptionsChanged_m8BB1CE7D1D6C0C6065DDDC65BF6EC28E31828BE0_inline (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_RuntimeLog_m6AF51F93F64B2888F5A8F28DDCA81723CF2D0B2B (void* ___0_userData, int32_t ___1_logType, uint8_t* ___2_message, uint8_t* ___3_filename, int32_t ___4_lineNumber, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstDiscardAttribute__ctor_m4560DDB0821067081A9A4AE7AF8B90BD3407A7A6 (BurstDiscardAttribute_tFD6040CDC21DC75DE6457CA5E7686375C8426157* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalAttribute__ctor_m948BC90599397308C76C433D98236C3BD81BF27F (ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0* __this, String_t* ___0_conditionString, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_Log_m239CB5D912F4EAAE5EC7AE8EB353675FCEE4051E (void* ___0_userData, int32_t ___1_logType, uint8_t* ___2_message, uint8_t* ___3_filename, int32_t ___4_lineNumber, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstUnsafeUtility_MemCpy_m2AC37FF2F833B5D0941CF54DA8FBFFB2FCEC5D04 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_AlignLeft_m8755645187490C1854F69EB038155B6613E36797 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int32_t ___3_align, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_AlignRight_m09C1074FFBBD1B87C86CA0F6F12A9230C96DB712 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int32_t ___3_align, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertFloatToString_mAE985C11AB2384510261E959CD5F267AF19E088D (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, float ___3_value, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___4_formatOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertDoubleToString_mEB2CBC122A76752E9FCA3F8AD8CA898E5761EBE1 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, double ___3_value, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___4_formatOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m1A5619CB4956238310C441388A064236CD6DBC91 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertUnsignedIntegerToString_m09588E952C8523ED6C4933843510D0D5C599905F (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_value, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___4_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertIntegerToString_m4991AB440CAF8F1D4E99B55B8B8383232B7A475D (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int64_t ___3_value, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___4_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormatOptions_GetBase_m2AC486A4073138DFEBECB692B0C0949C4B75D16A (FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FormatOptions_get_Uppercase_mDDD90EE5E418C418782FCB436E5B0FB786703E90 (FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BurstString_ValueToIntegerChar_mFF833032B3AC2D63302A8C3E81DF178DA031335F (int32_t ___0_value, bool ___1_uppercase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberBuffer__ctor_mC6C15EBB2ACB2878357EF1E3F851F3E78BDA3960 (NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* __this, int32_t ___0_kind, uint8_t* ___1_buffer, int32_t ___2_digitsCount, int32_t ___3_scale, bool ___4_isNegative, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatNumber_m6C8D8E03586FCB9F31E36AFA63E054967F7BFC55 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* ___3_number, int32_t ___4_nMaxDigits, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___5_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatDecimalOrHexadecimal_m78252DE4E0C49D39D073B93CFC6EB30E40728C62 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* ___3_number, int32_t ___4_zeroPadding, bool ___5_outputPositiveSign, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_RoundNumber_m6671299075FD59BA7D050A42A57DE4E83D8DB2CF (NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* ___0_number, int32_t ___1_pos, bool ___2_isCorrectlyRounded, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_GetLengthForFormatGeneral_m00B2F023215E5D5AE31CAEBD3ADB48C53A2EDC99 (NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* ___0_number, int32_t ___1_nMaxDigits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_FormatGeneral_mD0670AB1AD479BEF2C33E21BD559533DF9BE8842 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* ___3_number, int32_t ___4_nMaxDigits, uint8_t ___5_expChar, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* NumberBuffer_GetDigitsPointer_mEDF101B1FB7FD3D152E0A82195BD44DDB7A5E4AC_inline (NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_GetLengthIntegerToString_m9B709036A6A62EEAB7EBAF1E96FBAE4B5159566D (int64_t ___0_value, int32_t ___1_basis, int32_t ___2_zeroPadding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatOptions__ctor_m2B3F2187A54E5310ADA5F9A4AD63E19A07FF63CD (FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18* __this, uint8_t ___0_kind, int8_t ___1_alignAndSize, uint8_t ___2_specifier, bool ___3_lowercase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_ShouldRoundUp_m93A0956A3AC2E36E56A8517C14BE780A1E8E99F4 (uint8_t* ___0_dig, int32_t ___1_i, bool ___2_isCorrectlyRounded, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Add_internal_m2B84DF7C286A9C5F855143679991D3672807BBC3 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_pLarge, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___2_pSmall, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_internal_mD464DD354B5ABB9774D243C9AC63CA01AA2879A1 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_pLarge, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___2_pSmall, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tBigInt_SetU32_m4D9602134447021404805AC0A997A21434FC72BD (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* __this, uint32_t ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 BurstString_g_PowerOf10_Big_m05543D68CE2507D715E8B9AE33AC6106BFD32F27 (int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_m35A2F6E44C81B11FDD3FCD17C42469FBFB5648F9 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_lhs, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_mE2B6CA1B5BEB924A4CFB672AB71D4CCF3C79FABA (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_lhs, uint32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_BigInt_Compare_m51FF09779D622DBD964086F559738DF85288EB28 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_lhs, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tBigInt_SetU64_mB70CDB2548ACA6D34813DBB052981C2543B3E04F (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* __this, uint64_t ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_ShiftLeft_m489C694E212F5314D8B5B69E36984836FD9328A2 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, uint32_t ___1_shift, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Pow2_mE7E1C022FA22D59386F72FDAF14C867627009F20 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, uint32_t ___1_exponent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_MultiplyPow10_m62128BDA4DC9C83FC01825C74BE1FE01CF752638 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_input, uint32_t ___2_exponent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Pow10_mA03054009A2CF454BB3C0D1E9F1B6472FB7401A8 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, uint32_t ___1_exponent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply2_m5B20533EC78BBECD044C1235B96284A39CD3D963 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply10_m6F3551E6309E09E3B00078890D95F2A007F124CD (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tBigInt_GetLength_m9CF9FA5B315E8FAD667F8CD49C46F5247E91AEEE_inline (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tBigInt_GetBlock_mEEA4E3FA63A0811DD4A756FF6E60ABC5B4F9FFBE (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_LogBase2_m2F319D1D37390348D8304E3DEBBD4530FC8871B0 (uint32_t ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_BigInt_DivideWithRemainder_MaxQuotient9_m7FDF6B0A7B6E523A708B24BD1A9C489B57AC2696 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pDividend, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_divisor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Add_mF652852521D74DAB4F1AC5D011EA2C00CB99A7EA (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_lhs, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tBigInt_IsZero_mAC36C0DBF9226593F546E3D5941507796262C3CA (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply2_m29F699BF3248269DB8FEEDC89CA57C1FFEBB95B5 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion32_GetExponent_m3AAEFA1D21C5717F966030AEFC15063525AF42E9 (tFloatUnion32_t6A4A5EBD771045CFEDBFD3F71EFF400FFABEB20D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion32_GetMantissa_m1CEA25E915CB7F02D0A515723DCAA9132F4F75CD (tFloatUnion32_t6A4A5EBD771045CFEDBFD3F71EFF400FFABEB20D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tFloatUnion32_IsNegative_m93A3A3E68562946329E3409AA850BA29AACA6F91 (tFloatUnion32_t6A4A5EBD771045CFEDBFD3F71EFF400FFABEB20D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatInfinityNaN_m324356348BA55FAC5C833820C942963C5CA8BEA6 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_mantissa, bool ___4_isNegative, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___5_formatOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_Dragon4_m091C133A17E5B21A9EB2DBC20622F8E5086A6EA3 (uint64_t ___0_mantissa, int32_t ___1_exponent, uint32_t ___2_mantissaHighBitIdx, bool ___3_hasUnequalMargins, int32_t ___4_cutoffMode, int32_t ___5_cutoffNumber, uint8_t* ___6_pOutBuffer, uint32_t ___7_bufferSize, int32_t* ___8_pOutExponent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion64_GetExponent_mCC698D7208E9D37AC0E1E62637F30B2064CF89E0 (tFloatUnion64_tA7225EDB3329B2675933FD7846A30A1F1F349D76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t tFloatUnion64_GetMantissa_m791F84BAA61B441557571CE0777ABDA4F41560C7 (tFloatUnion64_tA7225EDB3329B2675933FD7846A30A1F1F349D76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tFloatUnion64_IsNegative_m8993D4E9E29452CC44946CA1E109974C920702CD (tFloatUnion64_tA7225EDB3329B2675933FD7846A30A1F1F349D76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatOptions_ToString_mBD55E8FD75446A8D2A0D16CEA04658E898508E99 (FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetOrCreateSharedMemory_m6117DFC1C8F155C5F690A7465BDC0F76CC494699 (int64_t ___0_keyLow, int64_t ___1_keyHigh, uint32_t ___2_size_of, uint32_t ___3_alignment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_ReloadAssemblySearchPathsForBurstInternal_m810E3DBBBDEBFFABAAFE19B8AC58AD1D2B124980 (const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedSpanWrapper__ctor_m64EF660BE4BF42BC17706387C68D2BCE779802EF (ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* __this, void* ___0_begin, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstCompilerService_CompileAsyncDelegateMethod_Injected_m2903A77B2581D6063738EA9D298562EF1129E639 (RuntimeObject* ___0_delegateMethod, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* ___1_compilerOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SystemReflectionMarshalling_UnmarshalSystemType_mF33F046FC09763F6F9006B5902DC086AD310EC5B (intptr_t ___0_handlePtr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_inline (ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* __this, Type_t* ___0_jobType, String_t** ___1_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifecycleMethodRegistration_Register_mBB010D57CE5CE9C837B35F645C980574B54BA72D (Type_t* ___0_lifecycleAttributeType, Assembly_t* ___1_assembly, String_t* ___2_methodFullName, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8 (uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UIntPtr_op_Explicit_m42C3EA82465934F505B4274A7CE320550A48B7B9 (uintptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UnityModuleInitialization_Initialize_mEE2ACAEF44640A52E5C672E62D6A88EFDE721BA2 (const RuntimeMethod* method) 
{
	{
		BurstCompilerService_Unity_Burst_LowLevel_BurstCompilerService_ClearCacheBetweenCodeLoads_RegisterLifecycleMethod_mE4BF757540209DBE791A47B5BC64F613673EE725(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_mD3DFDBBBE47A2E177F2D0764CD8F4F594B224047 (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFloatModeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m51910AF7BA7B527BF0B12F5634B5C187B384EC25 (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFloatPrecisionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mB5EDE71C1B8820D3ECF853F4448970E239C04720 (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, NULL);
		__this->____compileSynchronously = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_DisableSafetyChecks_mC59260A30D53202FCADB79548C0DF7868794A2FB (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_1), L_0, NULL);
		__this->____disableSafetyChecks = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_OptimizeFor_mA72C8C5110B44CBFE7EB483EFF86B340D3E9106B (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3COptimizeForU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_m0210E524B7FE44CDD4A4030AFE0BB4586B9E39A9 (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_m008E06219AB42305C40B9B130074718859EB3551 (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_mEA04C0EB3B2E2F268E438E8324DAF141AB9FC478 (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, int32_t ___0_floatPrecision, int32_t ___1_floatMode, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___1_floatMode;
		BurstCompileAttribute_set_FloatMode_mD3DFDBBBE47A2E177F2D0764CD8F4F594B224047_inline(__this, L_0, NULL);
		int32_t L_1 = ___0_floatPrecision;
		BurstCompileAttribute_set_FloatPrecision_m51910AF7BA7B527BF0B12F5634B5C187B384EC25_inline(__this, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_get_IsEnabled_m20E5AC4B35EBCDAE530BEE44B9241FA8A10E5C44 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticInit);
	CHECKED_LOCAL(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticInit);
	{
		CHECKED_LOCAL_INIT(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticInit,(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var))->____IsEnabled;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticInit,(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var))->___IsBurstGenerated;
		return L_1;
	}

IL_000d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_mF64F58440FAD34F65750AAF482F45E3F7C2D1B3C (RuntimeObject* ___0_delegateObj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticInit);
	Delegate_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_delegateObj;
		if (((Delegate_t*)IsInstClass((RuntimeObject*)L_0, Delegate_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC13C026731BF574915EF781C5CC709D179D7F4C7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AC6E2C9E3B0B89CE7829E6FE9748CF10C25C407)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mF64F58440FAD34F65750AAF482F45E3F7C2D1B3C_RuntimeMethod_var)));
	}

IL_0018:
	{
		RuntimeObject* L_2 = ___0_delegateObj;
		V_0 = ((Delegate_t*)CastclassClass((RuntimeObject*)L_2, Delegate_t_il2cpp_TypeInfo_var));
		Delegate_t* L_3 = V_0;
		Delegate_t* L_4 = V_0;
		NullCheck(L_4);
		MethodInfo_t* L_5;
		L_5 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_4, NULL);
		CHECKED_LOCAL_INIT(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticInit,(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_6;
		L_6 = BurstCompiler_Compile_mBFACF2C17E76D35DBFCBB579799239F166ED10EC(L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_mBFACF2C17E76D35DBFCBB579799239F166ED10EC (RuntimeObject* ___0_delegateObj, MethodInfo_t* ___1_methodInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FCD8DA0B9B65B8C4780A28A6E171CDAB0A3A61A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticInit);
	CHECKED_LOCAL(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticInit);
	CHECKED_LOCAL(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticInit);
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	bool V_0 = false;
	bool V_1 = false;
	void* V_2 = NULL;
	Delegate_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		RuntimeObject* L_0 = ___0_delegateObj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AC6E2C9E3B0B89CE7829E6FE9748CF10C25C407)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mBFACF2C17E76D35DBFCBB579799239F166ED10EC_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_delegateObj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type(L_2);
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(41, L_3);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_5 = ___0_delegateObj;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = il2cpp_codegen_object_get_type(L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB10577699DFF2E53EAEE7AF1A6306F8D8F38230)), L_6, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mBFACF2C17E76D35DBFCBB579799239F166ED10EC_RuntimeMethod_var)));
	}

IL_0031:
	{
		MethodInfo_t* L_9 = ___1_methodInfo;
		NullCheck(L_9);
		bool L_10;
		L_10 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_9, NULL);
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		MethodInfo_t* L_11 = ___1_methodInfo;
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85F734AB4B70F85FBE3AD2752128D17420A8753B)), L_11, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mBFACF2C17E76D35DBFCBB579799239F166ED10EC_RuntimeMethod_var)));
	}

IL_004a:
	{
		MethodInfo_t* L_14 = ___1_methodInfo;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(25, L_14);
		if (!L_15)
		{
			goto IL_0063;
		}
	}
	{
		MethodInfo_t* L_16 = ___1_methodInfo;
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AD6BA121E4A8420E000A0297BE2958650057EEB)), L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mBFACF2C17E76D35DBFCBB579799239F166ED10EC_RuntimeMethod_var)));
	}

IL_0063:
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		MethodInfo_t* L_19 = ___1_methodInfo;
		RuntimeObject* L_20;
		L_20 = CustomAttributeExtensions_GetCustomAttributes_m2851556A37AAF9A808EFB2C603D11E48635FA785(L_19, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_20);
		V_4 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{
				{
					RuntimeObject* L_22 = V_4;
					if (!L_22)
					{
						goto IL_00c3;
					}
				}
				{
					RuntimeObject* L_23 = V_4;
					NullCheck(L_23);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
				}

IL_00c3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00ad_1;
			}

IL_0076_1:
			{
				RuntimeObject* L_24 = V_4;
				NullCheck(L_24);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_25;
				L_25 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_24);
				NullCheck(L_25);
				Type_t* L_26;
				L_26 = il2cpp_codegen_object_get_type(L_25);
				NullCheck(L_26);
				String_t* L_27;
				L_27 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_26);
				V_5 = L_27;
				String_t* L_28 = V_5;
				bool L_29;
				L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16, NULL);
				if (L_29)
				{
					goto IL_00a7_1;
				}
			}
			{
				String_t* L_30 = V_5;
				bool L_31;
				L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral4FCD8DA0B9B65B8C4780A28A6E171CDAB0A3A61A, NULL);
				if (L_31)
				{
					goto IL_00ab_1;
				}
			}
			{
				goto IL_00ad_1;
			}

IL_00a7_1:
			{
				V_1 = (bool)1;
				goto IL_00ad_1;
			}

IL_00ab_1:
			{
				V_0 = (bool)1;
			}

IL_00ad_1:
			{
				RuntimeObject* L_32 = V_4;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0076_1;
				}
			}
			{
				goto IL_00c4;
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

IL_00c4:
	{
		bool L_34 = V_0;
		if (L_34)
		{
			goto IL_00da;
		}
	}
	{
		bool L_35 = V_1;
		if (L_35)
		{
			goto IL_00da;
		}
	}
	{
		MethodInfo_t* L_36 = ___1_methodInfo;
		String_t* L_37;
		L_37 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3, L_36, NULL);
		Debug_LogWarning_m3DD7B93DF977FC792633C5821D2870381B94D249(L_37, NULL);
	}

IL_00da:
	{
		RuntimeObject* L_38 = ___0_delegateObj;
		V_3 = ((Delegate_t*)IsInstClass((RuntimeObject*)L_38, Delegate_t_il2cpp_TypeInfo_var));
		MethodInfo_t* L_39 = ___1_methodInfo;
		CHECKED_LOCAL_INIT(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticInit,(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_40;
		L_40 = BurstCompilerOptions_HasBurstCompileAttribute_m33D637AD44900B97A7874AF69456E4352C1E2D71(L_39, NULL);
		if (!L_40)
		{
			goto IL_012a;
		}
	}
	{
		uintptr_t L_41 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (void*)L_41;
		CHECKED_LOCAL_INIT(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticInit,(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* L_42 = ((BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var))->___Options;
		NullCheck(L_42);
		bool L_43;
		L_43 = BurstCompilerOptions_get_EnableBurstCompilation_m84315C6A223375A16B0322C4F1290F8A730C3868_inline(L_42, NULL);
		if (!L_43)
		{
			goto IL_0110;
		}
	}
	{
		CHECKED_LOCAL_INIT(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticInit,(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_44 = ((BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var))->___IsBurstGenerated;
		if (!L_44)
		{
			goto IL_0110;
		}
	}
	{
		RuntimeObject* L_45 = ___0_delegateObj;
		String_t* L_46 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		int32_t L_47;
		L_47 = BurstCompilerService_CompileAsyncDelegateMethod_mBA2CC9173C2B5D5E7A34F82D45FFA8ED8D044BCC(L_45, L_46, NULL);
		void* L_48;
		L_48 = BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m01D6DED81167EEDAB3E556388CE397DCE9889B1E(L_47, NULL);
		V_2 = L_48;
	}

IL_0110:
	{
		void* L_49 = V_2;
		uintptr_t L_50 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_49) == ((uintptr_t)L_50))))
		{
			goto IL_013b;
		}
	}
	{
		Delegate_t* L_51 = V_3;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_52;
		L_52 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_51, NULL);
		Delegate_t* L_53 = V_3;
		CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		intptr_t L_54;
		L_54 = Marshal_GetFunctionPointerForDelegate_mEFF0CF3BFDD35C4EFDE471D48182C149EE7B99E2(L_53, NULL);
		void* L_55;
		L_55 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_54, NULL);
		V_2 = L_55;
		goto IL_013b;
	}

IL_012a:
	{
		MethodInfo_t* L_56 = ___1_methodInfo;
		String_t* L_57;
		L_57 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16764301FDE0B2444923BB6CE0B9B7F315E4DB64)), L_56, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_58 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_58, L_57, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mBFACF2C17E76D35DBFCBB579799239F166ED10EC_RuntimeMethod_var)));
	}

IL_013b:
	{
		void* L_59 = V_2;
		uintptr_t L_60 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_59) == ((uintptr_t)L_60))))
		{
			goto IL_0151;
		}
	}
	{
		MethodInfo_t* L_61 = ___1_methodInfo;
		String_t* L_62;
		L_62 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17490A99BE5820911E7C397A415006E24720C376)), L_61, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_63 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_63, L_62, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mBFACF2C17E76D35DBFCBB579799239F166ED10EC_RuntimeMethod_var)));
	}

IL_0151:
	{
		void* L_64 = V_2;
		return L_64;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_DummyMethod_m9EA1C3E0ED3A425837485D851AE31A8586DB9920 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler__cctor_m471B26AB88D87B9C27702A81DBB074AD45999734 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral095255162964C376C50DCE630D972167CA5AE0D8);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* L_0 = (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D*)il2cpp_codegen_object_new(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var);
		BurstCompilerOptions__ctor_m04EAF7189F35896254CA6DBF65702F47AA2674C4(L_0, (bool)1, NULL);
		((BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var))->___Options = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var))->___Options), (void*)L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_2);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_2, _stringLiteral095255162964C376C50DCE630D972167CA5AE0D8, ((int32_t)40), NULL);
		((BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var))->___DummyMethodInfo = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var))->___DummyMethodInfo), (void*)L_3);
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
extern "C" int32_t CDECL ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_mC2CE69BA880DB5A9980580DF02F209ADC821695C()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	bool returnValue;
	returnValue = BurstCompilerHelper_IsBurstEnabled_mC2CE69BA880DB5A9980580DF02F209ADC821695C(NULL);

	return static_cast<int32_t>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsBurstEnabled_mC2CE69BA880DB5A9980580DF02F209ADC821695C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticInit);
	bool V_0 = false;
	{
		V_0 = (bool)1;
		CHECKED_LOCAL_INIT(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticInit,(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstCompilerHelper_DiscardedMethod_m9CE28DBE9515D43D1F25EABF1361CDCF76011EAA((&V_0), NULL);
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_m9CE28DBE9515D43D1F25EABF1361CDCF76011EAA (bool* ___0_value, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_value;
		*(((int8_t*)L_0)) = ((int8_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m8E563561693D6AB7FE06B9A0C9A4A046BC222FE9 (Delegate_t* ___0_del, const RuntimeMethod* method) 
{
	{
		Delegate_t* L_0 = ___0_del;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		int32_t L_2;
		L_2 = BurstCompilerService_CompileAsyncDelegateMethod_mBA2CC9173C2B5D5E7A34F82D45FFA8ED8D044BCC(L_0, L_1, NULL);
		void* L_3;
		L_3 = BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m01D6DED81167EEDAB3E556388CE397DCE9889B1E(L_2, NULL);
		intptr_t L_4 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_3) == ((intptr_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper__cctor_m0C2D7A80B05753A80DBC7C67998D948067F1FB0C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_IsBurstEnabled_mC2CE69BA880DB5A9980580DF02F209ADC821695C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5* L_0 = (IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5*)il2cpp_codegen_object_new(IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5_il2cpp_TypeInfo_var);
		IsBurstEnabledDelegate__ctor_mD51149821405F43677350B4CB66BC9F48D84EB87(L_0, NULL, (intptr_t)((void*)BurstCompilerHelper_IsBurstEnabled_mC2CE69BA880DB5A9980580DF02F209ADC821695C_RuntimeMethod_var), NULL);
		((BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var))->___IsBurstEnabledImpl = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var))->___IsBurstEnabledImpl), (void*)L_0);
		IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5* L_1 = ((BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var))->___IsBurstEnabledImpl;
		bool L_2;
		L_2 = BurstCompilerHelper_IsCompiledByBurst_m8E563561693D6AB7FE06B9A0C9A4A046BC222FE9(L_1, NULL);
		((BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBB8EDBE020B273D4FD292F992F726B072FB52E46_il2cpp_TypeInfo_var))->___IsBurstGenerated = L_2;
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
bool IsBurstEnabledDelegate_Invoke_m0EFB0ED0696D474E76DAEAFF37FF1E7EE260A3BB_Multicast(IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5* currentDelegate = reinterpret_cast<IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool IsBurstEnabledDelegate_Invoke_m0EFB0ED0696D474E76DAEAFF37FF1E7EE260A3BB_OpenStatic(IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(method);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5 (IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5* __this, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_mD51149821405F43677350B4CB66BC9F48D84EB87 (IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)IsBurstEnabledDelegate_Invoke_m0EFB0ED0696D474E76DAEAFF37FF1E7EE260A3BB_OpenStatic;
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
	__this->___extra_arg = (intptr_t)IsBurstEnabledDelegate_Invoke_m0EFB0ED0696D474E76DAEAFF37FF1E7EE260A3BB_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsBurstEnabledDelegate_Invoke_m0EFB0ED0696D474E76DAEAFF37FF1E7EE260A3BB (IsBurstEnabledDelegate_tFCC7EC7287956E81CE0828CA2FBFFB397F0BC0E5* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* FakeDelegate_get_Method_m349AF1AA324DDD47BE1740026A483AD13267B91E (FakeDelegate_tAFD10E5EBD93F04FBF9C164DC260F586542BD2AA* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___U3CMethodU3Ek__BackingField;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_ForceDisableBurstCompilation_m0409020E8A24E6DC6E980915E2555AF33743CCF7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticInit);
	{
		CHECKED_LOCAL_INIT(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticInit,(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var))->___IsSecondaryUnityProcess;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticInit,(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var))->____forceDisableBurstCompilation;
		return L_1;
	}

IL_000d:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m04EAF7189F35896254CA6DBF65702F47AA2674C4 (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, bool ___0_isGlobal, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___0_isGlobal;
		__this->___U3CIsGlobalU3Ek__BackingField = L_0;
		BurstCompilerOptions_set_EnableBurstCompilation_m5D17141E242FC4414C55B3397F4D4D774A7CB900(__this, (bool)1, NULL);
		BurstCompilerOptions_set_EnableBurstSafetyChecks_m0B3BB88AA19287D1B52DA2D92FED3EA02AD73DEC(__this, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m04F0F92F718D2835251288A790AE8E1F497652AA (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsGlobalU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_m84315C6A223375A16B0322C4F1290F8A730C3868 (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____enableBurstCompilation;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_m5D17141E242FC4414C55B3397F4D4D774A7CB900 (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticInit);
	CHECKED_LOCAL(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticInit);
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		bool L_0;
		L_0 = BurstCompilerOptions_get_IsGlobal_m04F0F92F718D2835251288A790AE8E1F497652AA_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		CHECKED_LOCAL_INIT(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticInit,(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = BurstCompilerOptions_get_ForceDisableBurstCompilation_m0409020E8A24E6DC6E980915E2555AF33743CCF7(NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		___0_value = (bool)0;
	}

IL_0012:
	{
		bool L_2 = __this->____enableBurstCompilation;
		bool L_3 = ___0_value;
		bool L_4 = ___0_value;
		__this->____enableBurstCompilation = L_4;
		bool L_5;
		L_5 = BurstCompilerOptions_get_IsGlobal_m04F0F92F718D2835251288A790AE8E1F497652AA_inline(__this, NULL);
		if (!L_5)
		{
			G_B5_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0033;
		}
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
	{
		bool L_6 = ___0_value;
		CHECKED_LOCAL_INIT(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticInit,(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		((BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t6972AFDB97C8649095A1B7EE54AAADB676BE2C37_il2cpp_TypeInfo_var))->____IsEnabled = L_6;
		G_B5_0 = G_B4_0;
	}

IL_0033:
	{
		if (!G_B5_0)
		{
			goto IL_003b;
		}
	}
	{
		BurstCompilerOptions_OnOptionsChanged_mAE3F7E9329F744D6E752B0C2DF35D76BE73D4464(__this, NULL);
	}

IL_003b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m0B3BB88AA19287D1B52DA2D92FED3EA02AD73DEC (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____enableBurstSafetyChecks;
		bool L_1 = ___0_value;
		bool L_2 = ___0_value;
		__this->____enableBurstSafetyChecks = L_2;
		if (!((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0021;
		}
	}
	{
		BurstCompilerOptions_OnOptionsChanged_mAE3F7E9329F744D6E752B0C2DF35D76BE73D4464(__this, NULL);
		BurstCompilerOptions_MaybeTriggerRecompilation_mB019091C9647A4406D0106B4C79C6CA50B49D0F0(__this, NULL);
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* BurstCompilerOptions_get_OptionsChanged_m8BB1CE7D1D6C0C6065DDDC65BF6EC28E31828BE0 (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3COptionsChangedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_m30C3A21614EEB1D2345EB7ABE26CC2BFCFCD533E (MemberInfo_t* ___0_member, BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735** ___1_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticInit);
	{
		BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735** L_0 = ___1_attribute;
		*(((RuntimeObject**)L_0)) = NULL;
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_0), (void*)NULL);
		MemberInfo_t* L_1 = ___0_member;
		bool L_2;
		L_2 = MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685(L_1, (MemberInfo_t*)NULL, NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735** L_3 = ___1_attribute;
		MemberInfo_t* L_4 = ___0_member;
		CHECKED_LOCAL_INIT(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticInit,(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_5;
		L_5 = BurstCompilerOptions_GetBurstCompileAttribute_m31EA507F18A9ADDBB6F2A9C19B3BDAFA9229E5A3(L_4, NULL);
		*(((RuntimeObject**)L_3)) = ((RuntimeObject*)L_5);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_3), (void*)((RuntimeObject*)L_5));
		BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735** L_6 = ___1_attribute;
		BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_7 = *(L_6);
		if (L_7)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* BurstCompilerOptions_GetBurstCompileAttribute_m31EA507F18A9ADDBB6F2A9C19B3BDAFA9229E5A3 (MemberInfo_t* ___0_memberInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735_m066492ECDDCAAC8F70AE72DD608CDD5AFBF1545E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral254BFB4048DFFA4802D5BB90D1DC360FC3ACBB38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94EE69212742BFD239103CA73396AEE5B4021ECD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3F0FDAE71133B9BF16858FF004D87C3B396A932);
		s_Il2CppMethodInitialized = true;
	}
	BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_3 = NULL;
	BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* V_4 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_5 = NULL;
	{
		MemberInfo_t* L_0 = ___0_memberInfo;
		BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_1;
		L_1 = CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735_m066492ECDDCAAC8F70AE72DD608CDD5AFBF1545E(L_0, CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735_m066492ECDDCAAC8F70AE72DD608CDD5AFBF1545E_RuntimeMethod_var);
		V_0 = L_1;
		BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_3 = V_0;
		return L_3;
	}

IL_000c:
	{
		MemberInfo_t* L_4 = ___0_memberInfo;
		RuntimeObject* L_5;
		L_5 = CustomAttributeExtensions_GetCustomAttributes_m2851556A37AAF9A808EFB2C603D11E48635FA785(L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c8:
			{
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_00d1;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_00d1:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00bb_1;
			}

IL_001d_1:
			{
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10;
				L_10 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_9);
				NullCheck(L_10);
				Type_t* L_11;
				L_11 = il2cpp_codegen_object_get_type(L_10);
				V_2 = L_11;
				Type_t* L_12 = V_2;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtualFuncInvoker0< String_t* >::Invoke(27, L_12);
				bool L_14;
				L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A, NULL);
				if (!L_14)
				{
					goto IL_005f_1;
				}
			}
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_15, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				V_3 = L_15;
				BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_16 = (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735*)il2cpp_codegen_object_new(BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735_il2cpp_TypeInfo_var);
				BurstCompileAttribute__ctor_mEA04C0EB3B2E2F268E438E8324DAF141AB9FC478(L_16, 0, 0, NULL);
				BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_17 = L_16;
				NullCheck(L_17);
				BurstCompileAttribute_set_CompileSynchronously_mB5EDE71C1B8820D3ECF853F4448970E239C04720(L_17, (bool)1, NULL);
				BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_18 = L_17;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = V_3;
				NullCheck(L_19);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20;
				L_20 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_19, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
				NullCheck(L_18);
				BurstCompileAttribute_set_Options_m0210E524B7FE44CDD4A4030AFE0BB4586B9E39A9_inline(L_18, L_20, NULL);
				V_4 = L_18;
				goto IL_00d4;
			}

IL_005f_1:
			{
				Type_t* L_21 = V_2;
				NullCheck(L_21);
				String_t* L_22;
				L_22 = VirtualFuncInvoker0< String_t* >::Invoke(27, L_21);
				bool L_23;
				L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral254BFB4048DFFA4802D5BB90D1DC360FC3ACBB38, NULL);
				if (L_23)
				{
					goto IL_0095_1;
				}
			}
			{
				Type_t* L_24 = V_2;
				NullCheck(L_24);
				String_t* L_25;
				L_25 = VirtualFuncInvoker0< String_t* >::Invoke(27, L_24);
				bool L_26;
				L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteralD3F0FDAE71133B9BF16858FF004D87C3B396A932, NULL);
				if (L_26)
				{
					goto IL_0095_1;
				}
			}
			{
				Type_t* L_27 = V_2;
				NullCheck(L_27);
				String_t* L_28;
				L_28 = VirtualFuncInvoker0< String_t* >::Invoke(27, L_27);
				bool L_29;
				L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral94EE69212742BFD239103CA73396AEE5B4021ECD, NULL);
				if (!L_29)
				{
					goto IL_00bb_1;
				}
			}

IL_0095_1:
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_30 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_30, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				V_5 = L_30;
				BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_31 = (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735*)il2cpp_codegen_object_new(BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735_il2cpp_TypeInfo_var);
				BurstCompileAttribute__ctor_mEA04C0EB3B2E2F268E438E8324DAF141AB9FC478(L_31, 0, 0, NULL);
				BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_32 = L_31;
				NullCheck(L_32);
				BurstCompileAttribute_set_CompileSynchronously_mB5EDE71C1B8820D3ECF853F4448970E239C04720(L_32, (bool)0, NULL);
				BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_33 = L_32;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = V_5;
				NullCheck(L_34);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35;
				L_35 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_34, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
				NullCheck(L_33);
				BurstCompileAttribute_set_Options_m0210E524B7FE44CDD4A4030AFE0BB4586B9E39A9_inline(L_33, L_35, NULL);
				V_4 = L_33;
				goto IL_00d4;
			}

IL_00bb_1:
			{
				RuntimeObject* L_36 = V_1;
				NullCheck(L_36);
				bool L_37;
				L_37 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_00d2;
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

IL_00d2:
	{
		return (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735*)NULL;
	}

IL_00d4:
	{
		BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* L_38 = V_4;
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_HasBurstCompileAttribute_m33D637AD44900B97A7874AF69456E4352C1E2D71 (MemberInfo_t* ___0_member, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticInit);
	BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* V_0 = NULL;
	{
		MemberInfo_t* L_0 = ___0_member;
		bool L_1;
		L_1 = MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685(L_0, (MemberInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4784CA4E159D86F8767CCC55143536AF34801074)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompilerOptions_HasBurstCompileAttribute_m33D637AD44900B97A7874AF69456E4352C1E2D71_RuntimeMethod_var)));
	}

IL_0014:
	{
		MemberInfo_t* L_3 = ___0_member;
		CHECKED_LOCAL_INIT(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticInit,(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = BurstCompilerOptions_TryGetAttribute_m30C3A21614EEB1D2345EB7ABE26CC2BFCFCD533E(L_3, (&V_0), NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_mAE3F7E9329F744D6E752B0C2DF35D76BE73D4464 (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0;
		L_0 = BurstCompilerOptions_get_OptionsChanged_m8BB1CE7D1D6C0C6065DDDC65BF6EC28E31828BE0_inline(__this, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
		G_B1_0 = L_1;
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mB019091C9647A4406D0106B4C79C6CA50B49D0F0 (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__cctor_m6D7ADBD01216E559A874FB4B1243D2BC9620F8BD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ECA47452988C370602B26B2F5E3A7BF45020DD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral549D68A6A6C9B9C0F7AD718F2EA1214A9899444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EC4B35F1ACF3C53CE80662755A9D5B126C284C8);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Environment_GetCommandLineArgs_mD29CFA1CD3C84F9BD91152E70302E908114A831D(NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0077;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		V_3 = L_5;
		String_t* L_6 = V_2;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_6, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, NULL);
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_8, 2, NULL);
		V_3 = L_9;
		goto IL_003c;
	}

IL_0027:
	{
		String_t* L_10 = V_2;
		NullCheck(L_10);
		bool L_11;
		L_11 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_10, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_12, 1, NULL);
		V_3 = L_13;
	}

IL_003c:
	{
		String_t* L_14 = V_3;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral2ECA47452988C370602B26B2F5E3A7BF45020DD9, NULL);
		if (L_15)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_16 = V_3;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral9EC4B35F1ACF3C53CE80662755A9D5B126C284C8, NULL);
		if (L_17)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_18 = V_3;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral549D68A6A6C9B9C0F7AD718F2EA1214A9899444C, NULL);
		if (L_19)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_0073;
	}

IL_0065:
	{
		((BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var))->____forceDisableBurstCompilation = (bool)1;
		goto IL_0073;
	}

IL_006d:
	{
		((BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D_il2cpp_TypeInfo_var))->___ForceBurstCompilationSynchronously = (bool)1;
	}

IL_0073:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0077:
	{
		int32_t L_21 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_22)->max_length),NULL));
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_000a;
		}
	}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_HashStringWithFNV1A64_mB99A3F00B50E38FE98BAD95DC4268387AC1FD933 (String_t* ___0_text, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		V_0 = ((int64_t)-3750763034362895579LL);
		String_t* L_0 = ___0_text;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0044;
	}

IL_0010:
	{
		String_t* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_3 = L_3;
		uint64_t L_4 = V_0;
		Il2CppChar L_5 = V_3;
		uint8_t L_6 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)((int32_t)L_5&((int32_t)255))),NULL));
		uint64_t L_7 = (il2cpp_codegen_conv<uint64_t,uint8_t,int32_t,false,false>(L_6,NULL));
		V_0 = ((int64_t)il2cpp_codegen_multiply(((int64_t)1099511628211LL), ((int64_t)((int64_t)L_4^(int64_t)L_7))));
		uint64_t L_8 = V_0;
		Il2CppChar L_9 = V_3;
		uint8_t L_10 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)((int32_t)L_9>>8)),NULL));
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,uint8_t,int32_t,false,false>(L_10,NULL));
		V_0 = ((int64_t)il2cpp_codegen_multiply(((int64_t)1099511628211LL), ((int64_t)((int64_t)L_8^(int64_t)L_11))));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0044:
	{
		int32_t L_13 = V_2;
		String_t* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0010;
		}
	}
	{
		uint64_t L_16 = V_0;
		return (int64_t)L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstRuntime_RuntimeLog_mBDB9DB7DF0AC27C9DF65204B12FF9D19DC91318D (uint8_t* ___0_message, int32_t ___1_logType, uint8_t* ___2_fileName, int32_t ___3_lineNumber, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		int32_t L_1 = ___1_logType;
		uint8_t* L_2 = ___0_message;
		uint8_t* L_3 = ___2_fileName;
		int32_t L_4 = ___3_lineNumber;
		BurstCompilerService_RuntimeLog_m6AF51F93F64B2888F5A8F28DDCA81723CF2D0B2B((void*)L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstRuntime_PreventRequiredAttributeStrip_m7BC1CA068FD4BF9BD24DD5A9DCED740209FEFFE9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstDiscardAttribute_tFD6040CDC21DC75DE6457CA5E7686375C8426157_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EAAC6CF31A5C9BD93736FBA006E9BA2CA274A12);
		s_Il2CppMethodInitialized = true;
	}
	{
		BurstDiscardAttribute_tFD6040CDC21DC75DE6457CA5E7686375C8426157* L_0 = (BurstDiscardAttribute_tFD6040CDC21DC75DE6457CA5E7686375C8426157*)il2cpp_codegen_object_new(BurstDiscardAttribute_tFD6040CDC21DC75DE6457CA5E7686375C8426157_il2cpp_TypeInfo_var);
		BurstDiscardAttribute__ctor_m4560DDB0821067081A9A4AE7AF8B90BD3407A7A6(L_0, NULL);
		ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0* L_1 = (ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0*)il2cpp_codegen_object_new(ConditionalAttribute_tBBDC0DB2EEFFA35C6A2802ADF484A1BD5B400BE0_il2cpp_TypeInfo_var);
		ConditionalAttribute__ctor_m948BC90599397308C76C433D98236C3BD81BF27F(L_1, _stringLiteral7EAAC6CF31A5C9BD93736FBA006E9BA2CA274A12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstRuntime_Log_m1668CDAD14DB90EC619567AF38343EB727CB9C8E (uint8_t* ___0_message, int32_t ___1_logType, uint8_t* ___2_fileName, int32_t ___3_lineNumber, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		int32_t L_1 = ___1_logType;
		uint8_t* L_2 = ___0_message;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		int32_t L_4 = ___3_lineNumber;
		BurstCompilerService_Log_m239CB5D912F4EAAE5EC7AE8EB353675FCEE4051E((void*)L_0, L_1, L_2, (uint8_t*)L_3, L_4, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_CopyFixedString_m07B3CDF8DBFE3B6207092425A84253D231BD227B (uint8_t* ___0_dest, int32_t ___1_destLength, uint8_t* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___3_srcLength;
		int32_t L_1 = ___1_destLength;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_2 = ___3_srcLength;
		G_B3_0 = L_2;
		goto IL_0008;
	}

IL_0007:
	{
		int32_t L_3 = ___1_destLength;
		G_B3_0 = L_3;
	}

IL_0008:
	{
		V_0 = G_B3_0;
		uint8_t* L_4 = ___0_dest;
		int32_t L_5 = V_0;
		uint16_t L_6 = (il2cpp_codegen_conv<uint16_t,int32_t,int32_t,false,false>(L_5,NULL));
		*(((int16_t*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_4, 2)))) = ((int16_t)L_6);
		uint8_t* L_7 = ___0_dest;
		int32_t L_8 = V_0;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_8)))) = ((int8_t)0);
		uint8_t* L_9 = ___0_dest;
		uint8_t* L_10 = ___2_src;
		int32_t L_11 = V_0;
		int64_t L_12 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_11,NULL));
		BurstUnsafeUtility_MemCpy_m2AC37FF2F833B5D0941CF54DA8FBFFB2FCEC5D04((void*)L_9, (void*)L_10, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m33C367302884776121D2E1069EA3128508C68615 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint8_t* ___3_src, int32_t ___4_srcLength, int32_t ___5_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&___5_formatOptionsRaw),NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_1 = (*(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18*)L_0);
		V_0 = L_1;
		uint8_t* L_2 = ___0_dest;
		int32_t* L_3 = ___1_destIndex;
		int32_t L_4 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_5 = V_0;
		int8_t L_6 = L_5.___AlignAndSize;
		int32_t L_7 = ___4_srcLength;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_8;
		L_8 = BurstString_AlignLeft_m8755645187490C1854F69EB038155B6613E36797(L_2, L_3, L_4, L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		int32_t L_9 = ___2_destLength;
		int32_t* L_10 = ___1_destIndex;
		int32_t L_11 = *(L_10);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, L_11));
		int32_t L_12 = ___4_srcLength;
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_14 = ___4_srcLength;
		G_B5_0 = L_14;
		goto IL_002b;
	}

IL_002a:
	{
		int32_t L_15 = V_1;
		G_B5_0 = L_15;
	}

IL_002b:
	{
		V_2 = G_B5_0;
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_17 = ___0_dest;
		int32_t* L_18 = ___1_destIndex;
		int32_t L_19 = *(L_18);
		uint8_t* L_20 = ___3_src;
		int32_t L_21 = V_2;
		int64_t L_22 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_21,NULL));
		BurstUnsafeUtility_MemCpy_m2AC37FF2F833B5D0941CF54DA8FBFFB2FCEC5D04((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_19)), (void*)L_20, L_22, NULL);
		int32_t* L_23 = ___1_destIndex;
		int32_t* L_24 = ___1_destIndex;
		int32_t L_25 = *(L_24);
		int32_t L_26 = V_2;
		*(L_23) = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		uint8_t* L_27 = ___0_dest;
		int32_t* L_28 = ___1_destIndex;
		int32_t L_29 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_30 = V_0;
		int8_t L_31 = L_30.___AlignAndSize;
		int32_t L_32 = ___4_srcLength;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_33;
		L_33 = BurstString_AlignRight_m09C1074FFBBD1B87C86CA0F6F12A9230C96DB712(L_27, L_28, L_29, L_31, L_32, NULL);
	}

IL_0053:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m7263D7B20DD7EE839839567FB6AEBE923B07C207 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, float ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&___4_formatOptionsRaw),NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_1 = (*(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18*)L_0);
		V_0 = L_1;
		uint8_t* L_2 = ___0_dest;
		int32_t* L_3 = ___1_destIndex;
		int32_t L_4 = ___2_destLength;
		float L_5 = ___3_value;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_6 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertFloatToString_mAE985C11AB2384510261E959CD5F267AF19E088D(L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_mD8ED58C44FCE630CD8F309257934E62DF70FE81E (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, double ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&___4_formatOptionsRaw),NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_1 = (*(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18*)L_0);
		V_0 = L_1;
		uint8_t* L_2 = ___0_dest;
		int32_t* L_3 = ___1_destIndex;
		int32_t L_4 = ___2_destLength;
		double L_5 = ___3_value;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_6 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertDoubleToString_mEB2CBC122A76752E9FCA3F8AD8CA898E5761EBE1(L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_Format_m2E019B2CA579ADE7DB443D7F9CC56DD0CAA3C693 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, bool ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	int32_t V_0 = 0;
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___3_value;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 5;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 4;
	}

IL_0007:
	{
		V_0 = G_B3_0;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&___4_formatOptionsRaw),NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_2 = (*(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18*)L_1);
		V_1 = L_2;
		uint8_t* L_3 = ___0_dest;
		int32_t* L_4 = ___1_destIndex;
		int32_t L_5 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_6 = V_1;
		int8_t L_7 = L_6.___AlignAndSize;
		int32_t L_8 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_9;
		L_9 = BurstString_AlignLeft_m8755645187490C1854F69EB038155B6613E36797(L_3, L_4, L_5, L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		bool L_10 = ___3_value;
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		int32_t* L_11 = ___1_destIndex;
		int32_t L_12 = *(L_11);
		int32_t L_13 = ___2_destLength;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		uint8_t* L_14 = ___0_dest;
		int32_t* L_15 = ___1_destIndex;
		int32_t* L_16 = ___1_destIndex;
		int32_t L_17 = *(L_16);
		V_2 = L_17;
		int32_t L_18 = V_2;
		*(L_15) = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, L_19)))) = ((int8_t)((int32_t)84));
		int32_t* L_20 = ___1_destIndex;
		int32_t L_21 = *(L_20);
		int32_t L_22 = ___2_destLength;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0040;
		}
	}
	{
		return;
	}

IL_0040:
	{
		uint8_t* L_23 = ___0_dest;
		int32_t* L_24 = ___1_destIndex;
		int32_t* L_25 = ___1_destIndex;
		int32_t L_26 = *(L_25);
		V_2 = L_26;
		int32_t L_27 = V_2;
		*(L_24) = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, L_28)))) = ((int8_t)((int32_t)114));
		int32_t* L_29 = ___1_destIndex;
		int32_t L_30 = *(L_29);
		int32_t L_31 = ___2_destLength;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0054;
		}
	}
	{
		return;
	}

IL_0054:
	{
		uint8_t* L_32 = ___0_dest;
		int32_t* L_33 = ___1_destIndex;
		int32_t* L_34 = ___1_destIndex;
		int32_t L_35 = *(L_34);
		V_2 = L_35;
		int32_t L_36 = V_2;
		*(L_33) = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_32, L_37)))) = ((int8_t)((int32_t)117));
		int32_t* L_38 = ___1_destIndex;
		int32_t L_39 = *(L_38);
		int32_t L_40 = ___2_destLength;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0068;
		}
	}
	{
		return;
	}

IL_0068:
	{
		uint8_t* L_41 = ___0_dest;
		int32_t* L_42 = ___1_destIndex;
		int32_t* L_43 = ___1_destIndex;
		int32_t L_44 = *(L_43);
		V_2 = L_44;
		int32_t L_45 = V_2;
		*(L_42) = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_41, L_46)))) = ((int8_t)((int32_t)101));
		goto IL_00dc;
	}

IL_0078:
	{
		int32_t* L_47 = ___1_destIndex;
		int32_t L_48 = *(L_47);
		int32_t L_49 = ___2_destLength;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_007e;
		}
	}
	{
		return;
	}

IL_007e:
	{
		uint8_t* L_50 = ___0_dest;
		int32_t* L_51 = ___1_destIndex;
		int32_t* L_52 = ___1_destIndex;
		int32_t L_53 = *(L_52);
		V_2 = L_53;
		int32_t L_54 = V_2;
		*(L_51) = ((int32_t)il2cpp_codegen_add(L_54, 1));
		int32_t L_55 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_50, L_55)))) = ((int8_t)((int32_t)70));
		int32_t* L_56 = ___1_destIndex;
		int32_t L_57 = *(L_56);
		int32_t L_58 = ___2_destLength;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0092;
		}
	}
	{
		return;
	}

IL_0092:
	{
		uint8_t* L_59 = ___0_dest;
		int32_t* L_60 = ___1_destIndex;
		int32_t* L_61 = ___1_destIndex;
		int32_t L_62 = *(L_61);
		V_2 = L_62;
		int32_t L_63 = V_2;
		*(L_60) = ((int32_t)il2cpp_codegen_add(L_63, 1));
		int32_t L_64 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_59, L_64)))) = ((int8_t)((int32_t)97));
		int32_t* L_65 = ___1_destIndex;
		int32_t L_66 = *(L_65);
		int32_t L_67 = ___2_destLength;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_00a6;
		}
	}
	{
		return;
	}

IL_00a6:
	{
		uint8_t* L_68 = ___0_dest;
		int32_t* L_69 = ___1_destIndex;
		int32_t* L_70 = ___1_destIndex;
		int32_t L_71 = *(L_70);
		V_2 = L_71;
		int32_t L_72 = V_2;
		*(L_69) = ((int32_t)il2cpp_codegen_add(L_72, 1));
		int32_t L_73 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, L_73)))) = ((int8_t)((int32_t)108));
		int32_t* L_74 = ___1_destIndex;
		int32_t L_75 = *(L_74);
		int32_t L_76 = ___2_destLength;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_00ba;
		}
	}
	{
		return;
	}

IL_00ba:
	{
		uint8_t* L_77 = ___0_dest;
		int32_t* L_78 = ___1_destIndex;
		int32_t* L_79 = ___1_destIndex;
		int32_t L_80 = *(L_79);
		V_2 = L_80;
		int32_t L_81 = V_2;
		*(L_78) = ((int32_t)il2cpp_codegen_add(L_81, 1));
		int32_t L_82 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, L_82)))) = ((int8_t)((int32_t)115));
		int32_t* L_83 = ___1_destIndex;
		int32_t L_84 = *(L_83);
		int32_t L_85 = ___2_destLength;
		if ((((int32_t)L_84) < ((int32_t)L_85)))
		{
			goto IL_00ce;
		}
	}
	{
		return;
	}

IL_00ce:
	{
		uint8_t* L_86 = ___0_dest;
		int32_t* L_87 = ___1_destIndex;
		int32_t* L_88 = ___1_destIndex;
		int32_t L_89 = *(L_88);
		V_2 = L_89;
		int32_t L_90 = V_2;
		*(L_87) = ((int32_t)il2cpp_codegen_add(L_90, 1));
		int32_t L_91 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_86, L_91)))) = ((int8_t)((int32_t)101));
	}

IL_00dc:
	{
		uint8_t* L_92 = ___0_dest;
		int32_t* L_93 = ___1_destIndex;
		int32_t L_94 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_95 = V_1;
		int8_t L_96 = L_95.___AlignAndSize;
		int32_t L_97 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_98;
		L_98 = BurstString_AlignRight_m09C1074FFBBD1B87C86CA0F6F12A9230C96DB712(L_92, L_93, L_94, L_96, L_97, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_Format_mEF4A71BCD8D81372A86849E5BC1587D75EC30334 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, Il2CppChar ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	int32_t V_0 = 0;
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B21_0 = 0;
	{
		Il2CppChar L_0 = ___3_value;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_1 = ___3_value;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)2047))))
		{
			goto IL_0010;
		}
	}
	{
		G_B5_0 = 3;
		goto IL_0014;
	}

IL_0010:
	{
		G_B5_0 = 2;
		goto IL_0014;
	}

IL_0013:
	{
		G_B5_0 = 1;
	}

IL_0014:
	{
		V_0 = G_B5_0;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&___4_formatOptionsRaw),NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_3 = (*(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18*)L_2);
		V_1 = L_3;
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t L_6 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_7 = V_1;
		int8_t L_8 = L_7.___AlignAndSize;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_9;
		L_9 = BurstString_AlignLeft_m8755645187490C1854F69EB038155B6613E36797(L_4, L_5, L_6, L_8, 1, NULL);
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		return;
	}

IL_0030:
	{
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t* L_11 = ___1_destIndex;
		int32_t L_12 = *(L_11);
		int32_t L_13 = ___2_destLength;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_003a:
	{
		uint8_t* L_14 = ___0_dest;
		int32_t* L_15 = ___1_destIndex;
		int32_t* L_16 = ___1_destIndex;
		int32_t L_17 = *(L_16);
		V_2 = L_17;
		int32_t L_18 = V_2;
		*(L_15) = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_2;
		Il2CppChar L_20 = ___3_value;
		uint8_t L_21 = (il2cpp_codegen_conv<uint8_t,Il2CppChar,int32_t,false,false>(L_20,NULL));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, L_19)))) = ((int8_t)L_21);
		goto IL_014e;
	}

IL_004d:
	{
		int32_t L_22 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)2))))
		{
			goto IL_008f;
		}
	}
	{
		int32_t* L_23 = ___1_destIndex;
		int32_t L_24 = *(L_23);
		int32_t L_25 = ___2_destLength;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0057;
		}
	}
	{
		return;
	}

IL_0057:
	{
		uint8_t* L_26 = ___0_dest;
		int32_t* L_27 = ___1_destIndex;
		int32_t* L_28 = ___1_destIndex;
		int32_t L_29 = *(L_28);
		V_2 = L_29;
		int32_t L_30 = V_2;
		*(L_27) = ((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = V_2;
		Il2CppChar L_32 = ___3_value;
		uint8_t L_33 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)((int32_t)L_32>>6))|((int32_t)192))),NULL));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, L_31)))) = ((int8_t)L_33);
		int32_t* L_34 = ___1_destIndex;
		int32_t L_35 = *(L_34);
		int32_t L_36 = ___2_destLength;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_0073:
	{
		uint8_t* L_37 = ___0_dest;
		int32_t* L_38 = ___1_destIndex;
		int32_t* L_39 = ___1_destIndex;
		int32_t L_40 = *(L_39);
		V_2 = L_40;
		int32_t L_41 = V_2;
		*(L_38) = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_2;
		Il2CppChar L_43 = ___3_value;
		uint8_t L_44 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)((int32_t)L_43&((int32_t)63)))|((int32_t)128))),NULL));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, L_42)))) = ((int8_t)L_44);
		goto IL_014e;
	}

IL_008f:
	{
		int32_t L_45 = V_0;
		if ((!(((uint32_t)L_45) == ((uint32_t)3))))
		{
			goto IL_014e;
		}
	}
	{
		Il2CppChar L_46 = ___3_value;
		if ((((int32_t)L_46) < ((int32_t)((int32_t)55296))))
		{
			goto IL_00ab;
		}
	}
	{
		Il2CppChar L_47 = ___3_value;
		G_B21_0 = ((((int32_t)((((int32_t)L_47) > ((int32_t)((int32_t)57343)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B21_0 = 0;
	}

IL_00ac:
	{
		if (!G_B21_0)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t* L_48 = ___1_destIndex;
		int32_t L_49 = *(L_48);
		int32_t L_50 = ___2_destLength;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00b4;
		}
	}
	{
		return;
	}

IL_00b4:
	{
		uint8_t* L_51 = ___0_dest;
		int32_t* L_52 = ___1_destIndex;
		int32_t* L_53 = ___1_destIndex;
		int32_t L_54 = *(L_53);
		V_2 = L_54;
		int32_t L_55 = V_2;
		*(L_52) = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_51, L_56)))) = ((int8_t)((int32_t)239));
		int32_t* L_57 = ___1_destIndex;
		int32_t L_58 = *(L_57);
		int32_t L_59 = ___2_destLength;
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_00cb;
		}
	}
	{
		return;
	}

IL_00cb:
	{
		uint8_t* L_60 = ___0_dest;
		int32_t* L_61 = ___1_destIndex;
		int32_t* L_62 = ___1_destIndex;
		int32_t L_63 = *(L_62);
		V_2 = L_63;
		int32_t L_64 = V_2;
		*(L_61) = ((int32_t)il2cpp_codegen_add(L_64, 1));
		int32_t L_65 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, L_65)))) = ((int8_t)((int32_t)191));
		int32_t* L_66 = ___1_destIndex;
		int32_t L_67 = *(L_66);
		int32_t L_68 = ___2_destLength;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_00e2;
		}
	}
	{
		return;
	}

IL_00e2:
	{
		uint8_t* L_69 = ___0_dest;
		int32_t* L_70 = ___1_destIndex;
		int32_t* L_71 = ___1_destIndex;
		int32_t L_72 = *(L_71);
		V_2 = L_72;
		int32_t L_73 = V_2;
		*(L_70) = ((int32_t)il2cpp_codegen_add(L_73, 1));
		int32_t L_74 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_69, L_74)))) = ((int8_t)((int32_t)189));
		goto IL_014e;
	}

IL_00f5:
	{
		int32_t* L_75 = ___1_destIndex;
		int32_t L_76 = *(L_75);
		int32_t L_77 = ___2_destLength;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_00fb;
		}
	}
	{
		return;
	}

IL_00fb:
	{
		uint8_t* L_78 = ___0_dest;
		int32_t* L_79 = ___1_destIndex;
		int32_t* L_80 = ___1_destIndex;
		int32_t L_81 = *(L_80);
		V_2 = L_81;
		int32_t L_82 = V_2;
		*(L_79) = ((int32_t)il2cpp_codegen_add(L_82, 1));
		int32_t L_83 = V_2;
		Il2CppChar L_84 = ___3_value;
		uint8_t L_85 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)((int32_t)L_84>>((int32_t)12)))|((int32_t)224))),NULL));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, L_83)))) = ((int8_t)L_85);
		int32_t* L_86 = ___1_destIndex;
		int32_t L_87 = *(L_86);
		int32_t L_88 = ___2_destLength;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_0118;
		}
	}
	{
		return;
	}

IL_0118:
	{
		uint8_t* L_89 = ___0_dest;
		int32_t* L_90 = ___1_destIndex;
		int32_t* L_91 = ___1_destIndex;
		int32_t L_92 = *(L_91);
		V_2 = L_92;
		int32_t L_93 = V_2;
		*(L_90) = ((int32_t)il2cpp_codegen_add(L_93, 1));
		int32_t L_94 = V_2;
		Il2CppChar L_95 = ___3_value;
		uint8_t L_96 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(((int32_t)((int32_t)L_95>>6))&((int32_t)63)))|((int32_t)128))),NULL));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_89, L_94)))) = ((int8_t)L_96);
		int32_t* L_97 = ___1_destIndex;
		int32_t L_98 = *(L_97);
		int32_t L_99 = ___2_destLength;
		if ((((int32_t)L_98) < ((int32_t)L_99)))
		{
			goto IL_0137;
		}
	}
	{
		return;
	}

IL_0137:
	{
		uint8_t* L_100 = ___0_dest;
		int32_t* L_101 = ___1_destIndex;
		int32_t* L_102 = ___1_destIndex;
		int32_t L_103 = *(L_102);
		V_2 = L_103;
		int32_t L_104 = V_2;
		*(L_101) = ((int32_t)il2cpp_codegen_add(L_104, 1));
		int32_t L_105 = V_2;
		Il2CppChar L_106 = ___3_value;
		uint8_t L_107 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)((int32_t)L_106&((int32_t)63)))|((int32_t)128))),NULL));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_100, L_105)))) = ((int8_t)L_107);
	}

IL_014e:
	{
		uint8_t* L_108 = ___0_dest;
		int32_t* L_109 = ___1_destIndex;
		int32_t L_110 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_111 = V_1;
		int8_t L_112 = L_111.___AlignAndSize;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_113;
		L_113 = BurstString_AlignRight_m09C1074FFBBD1B87C86CA0F6F12A9230C96DB712(L_108, L_109, L_110, L_112, 1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m64C549F43586B2DC7D69F6603F37E93C48C54783 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint8_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	{
		uint8_t* L_0 = ___0_dest;
		int32_t* L_1 = ___1_destIndex;
		int32_t L_2 = ___2_destLength;
		uint8_t L_3 = ___3_value;
		uint64_t L_4 = (il2cpp_codegen_conv<uint64_t,uint8_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = ___4_formatOptionsRaw;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_Format_m1A5619CB4956238310C441388A064236CD6DBC91(L_0, L_1, L_2, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_mB2527FD71AF6BE5416D4447F11104EDF354F8FDE (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint16_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	{
		uint8_t* L_0 = ___0_dest;
		int32_t* L_1 = ___1_destIndex;
		int32_t L_2 = ___2_destLength;
		uint16_t L_3 = ___3_value;
		uint64_t L_4 = (il2cpp_codegen_conv<uint64_t,uint16_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = ___4_formatOptionsRaw;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_Format_m1A5619CB4956238310C441388A064236CD6DBC91(L_0, L_1, L_2, L_4, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_mAF0C01AE90EB07C7AAB214E4AEF2993440E04DBD (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint32_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&___4_formatOptionsRaw),NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_1 = (*(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18*)L_0);
		V_0 = L_1;
		uint8_t* L_2 = ___0_dest;
		int32_t* L_3 = ___1_destIndex;
		int32_t L_4 = ___2_destLength;
		uint32_t L_5 = ___3_value;
		uint64_t L_6 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_5,NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_7 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertUnsignedIntegerToString_m09588E952C8523ED6C4933843510D0D5C599905F(L_2, L_3, L_4, L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m1A5619CB4956238310C441388A064236CD6DBC91 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&___4_formatOptionsRaw),NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_1 = (*(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18*)L_0);
		V_0 = L_1;
		uint8_t* L_2 = ___0_dest;
		int32_t* L_3 = ___1_destIndex;
		int32_t L_4 = ___2_destLength;
		uint64_t L_5 = ___3_value;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_6 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertUnsignedIntegerToString_m09588E952C8523ED6C4933843510D0D5C599905F(L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_m475B9166933A3EF3D0941B0B194A4C1545269D2D (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int8_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&___4_formatOptionsRaw),NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_1 = (*(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18*)L_0);
		V_0 = L_1;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_2 = V_0;
		uint8_t L_3 = L_2.___Kind;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_001f;
		}
	}
	{
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t L_6 = ___2_destLength;
		int8_t L_7 = ___3_value;
		uint8_t L_8 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_7,NULL));
		uint64_t L_9 = (il2cpp_codegen_conv<uint64_t,uint8_t,int32_t,false,false>(L_8,NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_10 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertUnsignedIntegerToString_m09588E952C8523ED6C4933843510D0D5C599905F(L_4, L_5, L_6, L_9, L_10, NULL);
		return;
	}

IL_001f:
	{
		uint8_t* L_11 = ___0_dest;
		int32_t* L_12 = ___1_destIndex;
		int32_t L_13 = ___2_destLength;
		int8_t L_14 = ___3_value;
		int64_t L_15 = (il2cpp_codegen_conv<int64_t,int8_t,int32_t,false,false>(L_14,NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_16 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertIntegerToString_m4991AB440CAF8F1D4E99B55B8B8383232B7A475D(L_11, L_12, L_13, L_15, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_mE7507287303C32A2A29B07A48466FA595FFE771D (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int16_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&___4_formatOptionsRaw),NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_1 = (*(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18*)L_0);
		V_0 = L_1;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_2 = V_0;
		uint8_t L_3 = L_2.___Kind;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_001f;
		}
	}
	{
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t L_6 = ___2_destLength;
		int16_t L_7 = ___3_value;
		uint16_t L_8 = (il2cpp_codegen_conv<uint16_t,int16_t,int32_t,false,false>(L_7,NULL));
		uint64_t L_9 = (il2cpp_codegen_conv<uint64_t,uint16_t,int32_t,false,false>(L_8,NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_10 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertUnsignedIntegerToString_m09588E952C8523ED6C4933843510D0D5C599905F(L_4, L_5, L_6, L_9, L_10, NULL);
		return;
	}

IL_001f:
	{
		uint8_t* L_11 = ___0_dest;
		int32_t* L_12 = ___1_destIndex;
		int32_t L_13 = ___2_destLength;
		int16_t L_14 = ___3_value;
		int64_t L_15 = (il2cpp_codegen_conv<int64_t,int16_t,int32_t,false,false>(L_14,NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_16 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertIntegerToString_m4991AB440CAF8F1D4E99B55B8B8383232B7A475D(L_11, L_12, L_13, L_15, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_Format_mA39269E07A08D0085F034FF50A5C8ABC997A982D (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int32_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&___4_formatOptionsRaw),NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_1 = (*(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18*)L_0);
		V_0 = L_1;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_2 = V_0;
		uint8_t L_3 = L_2.___Kind;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_001e;
		}
	}
	{
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t L_6 = ___2_destLength;
		int32_t L_7 = ___3_value;
		uint64_t L_8 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_7,NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_9 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertUnsignedIntegerToString_m09588E952C8523ED6C4933843510D0D5C599905F(L_4, L_5, L_6, L_8, L_9, NULL);
		return;
	}

IL_001e:
	{
		uint8_t* L_10 = ___0_dest;
		int32_t* L_11 = ___1_destIndex;
		int32_t L_12 = ___2_destLength;
		int32_t L_13 = ___3_value;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_13,NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_15 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertIntegerToString_m4991AB440CAF8F1D4E99B55B8B8383232B7A475D(L_10, L_11, L_12, L_14, L_15, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_Format_mBA2CCF5A6E2680A6F3E1DA8E440BEEC7B7AEE8E0 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int64_t ___3_value, int32_t ___4_formatOptionsRaw, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>((&___4_formatOptionsRaw),NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_1 = (*(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18*)L_0);
		V_0 = L_1;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_2 = V_0;
		uint8_t L_3 = L_2.___Kind;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_001d;
		}
	}
	{
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t L_6 = ___2_destLength;
		int64_t L_7 = ___3_value;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_8 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertUnsignedIntegerToString_m09588E952C8523ED6C4933843510D0D5C599905F(L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}

IL_001d:
	{
		uint8_t* L_9 = ___0_dest;
		int32_t* L_10 = ___1_destIndex;
		int32_t L_11 = ___2_destLength;
		int64_t L_12 = ___3_value;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_13 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertIntegerToString_m4991AB440CAF8F1D4E99B55B8B8383232B7A475D(L_9, L_10, L_11, L_12, L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertUnsignedIntegerToString_m09588E952C8523ED6C4933843510D0D5C599905F (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_value, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___4_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t* V_4 = NULL;
	NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		int32_t L_0;
		L_0 = FormatOptions_GetBase_m2AC486A4073138DFEBECB692B0C0949C4B75D16A((&___4_options), NULL);
		V_0 = L_0;
		uint32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) >= ((uint32_t)2))))
		{
			goto IL_0011;
		}
	}
	{
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)36)))))
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		V_1 = 0;
		uint64_t L_3 = ___3_value;
		V_2 = L_3;
	}

IL_0016:
	{
		uint64_t L_4 = V_2;
		uint32_t L_5 = V_0;
		uint64_t L_6 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_5,NULL));
		V_2 = ((int64_t)((uint64_t)(int64_t)L_4/(uint64_t)(int64_t)L_6));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		uint64_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_9 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		int32_t L_10 = V_1;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_10, 1)),NULL));
		uintptr_t L_12 = L_11;
		int8_t* L_13;
		if (L_12 == 0)
		{
			L_13 = NULL;
		}
		else
		{
			L_13 = (int8_t*)alloca(L_12);
			memset(L_13, 0, L_12);
		}
		V_4 = (uint8_t*)L_13;
		uint64_t L_14 = ___3_value;
		V_2 = L_14;
	}

IL_0030:
	{
		uint8_t* L_15 = V_4;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		uint64_t L_18 = V_2;
		uint32_t L_19 = V_0;
		uint64_t L_20 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((uint64_t)(int64_t)L_18%(uint64_t)(int64_t)L_20)),NULL));
		bool L_22;
		L_22 = FormatOptions_get_Uppercase_mDDD90EE5E418C418782FCB436E5B0FB786703E90((&___4_options), NULL);
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint8_t L_23;
		L_23 = BurstString_ValueToIntegerChar_mFF833032B3AC2D63302A8C3E81DF178DA031335F(L_21, L_22, NULL);
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_17)))) = ((int8_t)L_23);
		uint64_t L_24 = V_2;
		uint32_t L_25 = V_0;
		uint64_t L_26 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_25,NULL));
		V_2 = ((int64_t)((uint64_t)(int64_t)L_24/(uint64_t)(int64_t)L_26));
		uint64_t L_27 = V_2;
		if (L_27)
		{
			goto IL_0030;
		}
	}
	{
		uint8_t* L_28 = V_4;
		int32_t L_29 = V_1;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_28, L_29)))) = ((int8_t)0);
		uint8_t* L_30 = V_4;
		int32_t L_31 = V_1;
		int32_t L_32 = V_1;
		NumberBuffer__ctor_mC6C15EBB2ACB2878357EF1E3F851F3E78BDA3960((&V_5), 0, L_30, L_31, L_32, (bool)0, NULL);
		uint8_t* L_33 = ___0_dest;
		int32_t* L_34 = ___1_destIndex;
		int32_t L_35 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_36 = ___4_options;
		uint8_t L_37 = L_36.___Specifier;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_38 = ___4_options;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_FormatNumber_m6C8D8E03586FCB9F31E36AFA63E054967F7BFC55(L_33, L_34, L_35, (&V_5), (int32_t)L_37, L_38, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_GetLengthIntegerToString_m9B709036A6A62EEAB7EBAF1E96FBAE4B5159566D (int64_t ___0_value, int32_t ___1_basis, int32_t ___2_zeroPadding, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		V_0 = 0;
		int64_t L_0 = ___0_value;
		V_1 = L_0;
	}

IL_0004:
	{
		int64_t L_1 = V_1;
		int32_t L_2 = ___1_basis;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_2,NULL));
		V_1 = ((int64_t)(L_1/L_3));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int64_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___2_zeroPadding;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_8 = ___2_zeroPadding;
		V_0 = L_8;
	}

IL_0016:
	{
		int64_t L_9 = ___0_value;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((int64_t)L_9) >= ((int64_t)L_10)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_001f:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertIntegerToString_m4991AB440CAF8F1D4E99B55B8B8383232B7A475D (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int64_t ___3_value, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___4_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	int32_t V_4 = 0;
	NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		int32_t L_0;
		L_0 = FormatOptions_GetBase_m2AC486A4073138DFEBECB692B0C0949C4B75D16A((&___4_options), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)36))))
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		V_1 = 0;
		int64_t L_3 = ___3_value;
		V_2 = L_3;
	}

IL_0016:
	{
		int64_t L_4 = V_2;
		int32_t L_5 = V_0;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_2 = ((int64_t)(L_4/L_6));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int64_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_9 = V_1;
		uintptr_t L_10 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_9, 1)),NULL));
		uintptr_t L_11 = L_10;
		int8_t* L_12;
		if (L_11 == 0)
		{
			L_12 = NULL;
		}
		else
		{
			L_12 = (int8_t*)alloca(L_11);
			memset(L_12, 0, L_11);
		}
		V_3 = (uint8_t*)L_12;
		int64_t L_13 = ___3_value;
		V_2 = L_13;
		int32_t L_14 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0030:
	{
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = L_16;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		int64_t L_18 = V_2;
		int32_t L_19 = V_0;
		int64_t L_20 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(L_18%L_20)),NULL));
		bool L_22;
		L_22 = FormatOptions_get_Uppercase_mDDD90EE5E418C418782FCB436E5B0FB786703E90((&___4_options), NULL);
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint8_t L_23;
		L_23 = BurstString_ValueToIntegerChar_mFF833032B3AC2D63302A8C3E81DF178DA031335F(L_21, L_22, NULL);
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_17)))) = ((int8_t)L_23);
		int64_t L_24 = V_2;
		int32_t L_25 = V_0;
		int64_t L_26 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_25,NULL));
		V_2 = ((int64_t)(L_24/L_26));
		int64_t L_27 = V_2;
		if (L_27)
		{
			goto IL_0030;
		}
	}
	{
		uint8_t* L_28 = V_3;
		int32_t L_29 = V_1;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_28, L_29)))) = ((int8_t)0);
		uint8_t* L_30 = V_3;
		int32_t L_31 = V_1;
		int32_t L_32 = V_1;
		int64_t L_33 = ___3_value;
		int64_t L_34 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		NumberBuffer__ctor_mC6C15EBB2ACB2878357EF1E3F851F3E78BDA3960((&V_5), 0, L_30, L_31, L_32, (bool)((((int64_t)L_33) < ((int64_t)L_34))? 1 : 0), NULL);
		uint8_t* L_35 = ___0_dest;
		int32_t* L_36 = ___1_destIndex;
		int32_t L_37 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_38 = ___4_options;
		uint8_t L_39 = L_38.___Specifier;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_40 = ___4_options;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_FormatNumber_m6C8D8E03586FCB9F31E36AFA63E054967F7BFC55(L_35, L_36, L_37, (&V_5), (int32_t)L_39, L_40, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatNumber_m6C8D8E03586FCB9F31E36AFA63E054967F7BFC55 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* ___3_number, int32_t ___4_nMaxDigits, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___5_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint8_t V_5 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B20_0 = 0;
	NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* G_B20_1 = NULL;
	int32_t G_B20_2 = 0;
	int32_t* G_B20_3 = NULL;
	uint8_t* G_B20_4 = NULL;
	int32_t G_B19_0 = 0;
	NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* G_B19_1 = NULL;
	int32_t G_B19_2 = 0;
	int32_t* G_B19_3 = NULL;
	uint8_t* G_B19_4 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* G_B21_2 = NULL;
	int32_t G_B21_3 = 0;
	int32_t* G_B21_4 = NULL;
	uint8_t* G_B21_5 = NULL;
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_0 = ___3_number;
		int32_t L_1 = L_0->___Kind;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_2 = ___3_number;
		int32_t L_3 = L_2->___Kind;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_4 = ___5_options;
		uint8_t L_5 = L_4.___Kind;
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_6 = ___5_options;
		uint8_t L_7 = L_6.___Specifier;
		if (L_7)
		{
			goto IL_002c;
		}
	}
	{
		(&___5_options)->___Kind = 1;
	}

IL_002c:
	{
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_8 = ___5_options;
		uint8_t L_9 = L_8.___Kind;
		V_5 = L_9;
		uint8_t L_10 = V_5;
		if (!L_10)
		{
			goto IL_00aa;
		}
	}
	{
		uint8_t L_11 = V_5;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, 1))) <= ((uint32_t)2))))
		{
			goto IL_00aa;
		}
	}
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_12 = ___3_number;
		int32_t L_13 = L_12->___DigitsCount;
		V_1 = L_13;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_14 = ___5_options;
		uint8_t L_15 = L_14.___Specifier;
		V_2 = (int32_t)L_15;
		V_3 = 0;
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		int32_t L_20 = V_2;
		V_1 = L_20;
	}

IL_005b:
	{
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_21 = ___5_options;
		uint8_t L_22 = L_21.___Kind;
		V_4 = (bool)((((int32_t)L_22) == ((int32_t)2))? 1 : 0);
		int32_t L_23 = V_1;
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_24 = ___3_number;
		bool L_25 = L_24->___IsNegative;
		bool L_26 = V_4;
		if (((int32_t)((int32_t)L_25|(int32_t)L_26)))
		{
			G_B10_0 = L_23;
			goto IL_0076;
		}
		G_B9_0 = L_23;
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_0077;
	}

IL_0076:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_0077:
	{
		V_1 = ((int32_t)il2cpp_codegen_add(G_B11_1, G_B11_0));
		uint8_t* L_27 = ___0_dest;
		int32_t* L_28 = ___1_destIndex;
		int32_t L_29 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_30 = ___5_options;
		int8_t L_31 = L_30.___AlignAndSize;
		int32_t L_32 = V_1;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_33;
		L_33 = BurstString_AlignLeft_m8755645187490C1854F69EB038155B6613E36797(L_27, L_28, L_29, L_31, L_32, NULL);
		if (!L_33)
		{
			goto IL_008c;
		}
	}
	{
		return;
	}

IL_008c:
	{
		uint8_t* L_34 = ___0_dest;
		int32_t* L_35 = ___1_destIndex;
		int32_t L_36 = ___2_destLength;
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_37 = ___3_number;
		int32_t L_38 = V_3;
		bool L_39 = V_4;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_FormatDecimalOrHexadecimal_m78252DE4E0C49D39D073B93CFC6EB30E40728C62(L_34, L_35, L_36, L_37, L_38, L_39, NULL);
		uint8_t* L_40 = ___0_dest;
		int32_t* L_41 = ___1_destIndex;
		int32_t L_42 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_43 = ___5_options;
		int8_t L_44 = L_43.___AlignAndSize;
		int32_t L_45 = V_1;
		bool L_46;
		L_46 = BurstString_AlignRight_m09C1074FFBBD1B87C86CA0F6F12A9230C96DB712(L_40, L_41, L_42, L_44, L_45, NULL);
		return;
	}

IL_00aa:
	{
		int32_t L_47 = ___4_nMaxDigits;
		if ((((int32_t)L_47) >= ((int32_t)1)))
		{
			goto IL_00b7;
		}
	}
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_48 = ___3_number;
		int32_t L_49 = L_48->___DigitsCount;
		___4_nMaxDigits = L_49;
	}

IL_00b7:
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_50 = ___3_number;
		int32_t L_51 = ___4_nMaxDigits;
		bool L_52 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_RoundNumber_m6671299075FD59BA7D050A42A57DE4E83D8DB2CF(L_50, L_51, L_52, NULL);
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_53 = ___3_number;
		int32_t L_54 = ___4_nMaxDigits;
		int32_t L_55;
		L_55 = BurstString_GetLengthForFormatGeneral_m00B2F023215E5D5AE31CAEBD3ADB48C53A2EDC99(L_53, L_54, NULL);
		V_1 = L_55;
		uint8_t* L_56 = ___0_dest;
		int32_t* L_57 = ___1_destIndex;
		int32_t L_58 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_59 = ___5_options;
		int8_t L_60 = L_59.___AlignAndSize;
		int32_t L_61 = V_1;
		bool L_62;
		L_62 = BurstString_AlignLeft_m8755645187490C1854F69EB038155B6613E36797(L_56, L_57, L_58, L_60, L_61, NULL);
		if (!L_62)
		{
			goto IL_00dc;
		}
	}
	{
		return;
	}

IL_00dc:
	{
		uint8_t* L_63 = ___0_dest;
		int32_t* L_64 = ___1_destIndex;
		int32_t L_65 = ___2_destLength;
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_66 = ___3_number;
		int32_t L_67 = ___4_nMaxDigits;
		bool L_68;
		L_68 = FormatOptions_get_Uppercase_mDDD90EE5E418C418782FCB436E5B0FB786703E90((&___5_options), NULL);
		if (L_68)
		{
			G_B20_0 = L_67;
			G_B20_1 = L_66;
			G_B20_2 = L_65;
			G_B20_3 = L_64;
			G_B20_4 = L_63;
			goto IL_00ef;
		}
		G_B19_0 = L_67;
		G_B19_1 = L_66;
		G_B19_2 = L_65;
		G_B19_3 = L_64;
		G_B19_4 = L_63;
	}
	{
		G_B21_0 = ((int32_t)101);
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		G_B21_3 = G_B19_2;
		G_B21_4 = G_B19_3;
		G_B21_5 = G_B19_4;
		goto IL_00f1;
	}

IL_00ef:
	{
		G_B21_0 = ((int32_t)69);
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
		G_B21_5 = G_B20_4;
	}

IL_00f1:
	{
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_FormatGeneral_mD0670AB1AD479BEF2C33E21BD559533DF9BE8842(G_B21_5, G_B21_4, G_B21_3, G_B21_2, G_B21_1, (uint8_t)G_B21_0, NULL);
		uint8_t* L_69 = ___0_dest;
		int32_t* L_70 = ___1_destIndex;
		int32_t L_71 = ___2_destLength;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_72 = ___5_options;
		int8_t L_73 = L_72.___AlignAndSize;
		int32_t L_74 = V_1;
		bool L_75;
		L_75 = BurstString_AlignRight_m09C1074FFBBD1B87C86CA0F6F12A9230C96DB712(L_69, L_70, L_71, L_73, L_74, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatDecimalOrHexadecimal_m78252DE4E0C49D39D073B93CFC6EB30E40728C62 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* ___3_number, int32_t ___4_zeroPadding, bool ___5_outputPositiveSign, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_0 = ___3_number;
		bool L_1 = L_0->___IsNegative;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		int32_t* L_2 = ___1_destIndex;
		int32_t L_3 = *(L_2);
		int32_t L_4 = ___2_destLength;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		uint8_t* L_5 = ___0_dest;
		int32_t* L_6 = ___1_destIndex;
		int32_t* L_7 = ___1_destIndex;
		int32_t L_8 = *(L_7);
		V_2 = L_8;
		int32_t L_9 = V_2;
		*(L_6) = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_10)))) = ((int8_t)((int32_t)45));
		goto IL_0036;
	}

IL_001e:
	{
		bool L_11 = ___5_outputPositiveSign;
		if (!L_11)
		{
			goto IL_0036;
		}
	}
	{
		int32_t* L_12 = ___1_destIndex;
		int32_t L_13 = *(L_12);
		int32_t L_14 = ___2_destLength;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0028;
		}
	}
	{
		return;
	}

IL_0028:
	{
		uint8_t* L_15 = ___0_dest;
		int32_t* L_16 = ___1_destIndex;
		int32_t* L_17 = ___1_destIndex;
		int32_t L_18 = *(L_17);
		V_2 = L_18;
		int32_t L_19 = V_2;
		*(L_16) = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_20)))) = ((int8_t)((int32_t)43));
	}

IL_0036:
	{
		V_3 = 0;
		goto IL_0052;
	}

IL_003a:
	{
		int32_t* L_21 = ___1_destIndex;
		int32_t L_22 = *(L_21);
		int32_t L_23 = ___2_destLength;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0040;
		}
	}
	{
		return;
	}

IL_0040:
	{
		uint8_t* L_24 = ___0_dest;
		int32_t* L_25 = ___1_destIndex;
		int32_t* L_26 = ___1_destIndex;
		int32_t L_27 = *(L_26);
		V_2 = L_27;
		int32_t L_28 = V_2;
		*(L_25) = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, L_29)))) = ((int8_t)((int32_t)48));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0052:
	{
		int32_t L_31 = V_3;
		int32_t L_32 = ___4_zeroPadding;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_003a;
		}
	}
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_33 = ___3_number;
		int32_t L_34 = L_33->___DigitsCount;
		V_0 = L_34;
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_35 = ___3_number;
		uint8_t* L_36;
		L_36 = NumberBuffer_GetDigitsPointer_mEDF101B1FB7FD3D152E0A82195BD44DDB7A5E4AC_inline(L_35, NULL);
		V_1 = L_36;
		V_4 = 0;
		goto IL_0087;
	}

IL_006a:
	{
		int32_t* L_37 = ___1_destIndex;
		int32_t L_38 = *(L_37);
		int32_t L_39 = ___2_destLength;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}

IL_0070:
	{
		uint8_t* L_40 = ___0_dest;
		int32_t* L_41 = ___1_destIndex;
		int32_t* L_42 = ___1_destIndex;
		int32_t L_43 = *(L_42);
		V_2 = L_43;
		int32_t L_44 = V_2;
		*(L_41) = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = V_2;
		uint8_t* L_46 = V_1;
		int32_t L_47 = V_4;
		int32_t L_48 = ((int32_t)*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, L_47))));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, L_45)))) = ((int8_t)L_48);
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0087:
	{
		int32_t L_50 = V_4;
		int32_t L_51 = V_0;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_006a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t BurstString_ValueToIntegerChar_mFF833032B3AC2D63302A8C3E81DF178DA031335F (int32_t ___0_value, bool ___1_uppercase, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_1 = ___0_value;
		G_B3_0 = L_1;
		goto IL_0009;
	}

IL_0007:
	{
		int32_t L_2 = ___0_value;
		G_B3_0 = ((-L_2));
	}

IL_0009:
	{
		___0_value = G_B3_0;
		int32_t L_3 = ___0_value;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)9))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_4 = ___0_value;
		uint8_t L_5 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)48), L_4)),NULL));
		return L_5;
	}

IL_0016:
	{
		int32_t L_6 = ___0_value;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)36))))
		{
			goto IL_002b;
		}
	}
	{
		bool L_7 = ___1_uppercase;
		if (L_7)
		{
			goto IL_0022;
		}
	}
	{
		G_B9_0 = ((int32_t)97);
		goto IL_0024;
	}

IL_0022:
	{
		G_B9_0 = ((int32_t)65);
	}

IL_0024:
	{
		int32_t L_8 = ___0_value;
		uint8_t L_9 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(G_B9_0, ((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)10))))),NULL));
		return L_9;
	}

IL_002b:
	{
		return (uint8_t)((int32_t)63);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_AlignRight_m09C1074FFBBD1B87C86CA0F6F12A9230C96DB712 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int32_t ___3_align, int32_t ___4_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	{
		int32_t L_0 = ___3_align;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___3_align;
		___3_align = ((-L_1));
		uint8_t* L_2 = ___0_dest;
		int32_t* L_3 = ___1_destIndex;
		int32_t L_4 = ___2_destLength;
		int32_t L_5 = ___3_align;
		int32_t L_6 = ___4_length;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7;
		L_7 = BurstString_AlignLeft_m8755645187490C1854F69EB038155B6613E36797(L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_0014:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_AlignLeft_m8755645187490C1854F69EB038155B6613E36797 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, int32_t ___3_align, int32_t ___4_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___3_align;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0021;
	}

IL_0006:
	{
		int32_t* L_1 = ___1_destIndex;
		int32_t L_2 = *(L_1);
		int32_t L_3 = ___2_destLength;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t* L_6 = ___1_destIndex;
		int32_t L_7 = *(L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		*(L_5) = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, L_9)))) = ((int8_t)((int32_t)32));
		int32_t L_10 = ___4_length;
		___4_length = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0021:
	{
		int32_t L_11 = ___4_length;
		int32_t L_12 = ___3_align;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0006;
		}
	}

IL_0026:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_GetLengthForFormatGeneral_m00B2F023215E5D5AE31CAEBD3ADB48C53A2EDC99 (NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* ___0_number, int32_t ___1_nMaxDigits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	uint8_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_0 = ___0_number;
		int32_t L_1 = L_0->___Scale;
		V_1 = L_1;
		V_2 = (bool)0;
		int32_t L_2 = V_1;
		int32_t L_3 = ___1_nMaxDigits;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)-3))))
		{
			goto IL_0018;
		}
	}

IL_0014:
	{
		V_1 = 1;
		V_2 = (bool)1;
	}

IL_0018:
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_5 = ___0_number;
		uint8_t* L_6;
		L_6 = NumberBuffer_GetDigitsPointer_mEDF101B1FB7FD3D152E0A82195BD44DDB7A5E4AC_inline(L_5, NULL);
		V_3 = L_6;
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_7 = ___0_number;
		bool L_8 = L_7->___IsNegative;
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002b:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}

IL_002f:
	{
		uint8_t* L_11 = V_3;
		int32_t L_12 = ((int32_t)*(L_11));
		if (!L_12)
		{
			goto IL_0037;
		}
	}
	{
		uint8_t* L_13 = V_3;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 1));
	}

IL_0037:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_1 = L_16;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0049;
	}

IL_0045:
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0049:
	{
		uint8_t* L_18 = V_3;
		int32_t L_19 = ((int32_t)*(L_18));
		if (L_19)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}

IL_0051:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		goto IL_005f;
	}

IL_0057:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_005f:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		goto IL_006d;
	}

IL_0065:
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint8_t* L_26 = V_3;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, 1));
	}

IL_006d:
	{
		uint8_t* L_27 = V_3;
		int32_t L_28 = ((int32_t)*(L_27));
		if (L_28)
		{
			goto IL_0065;
		}
	}

IL_0071:
	{
		bool L_29 = V_2;
		if (!L_29)
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_31 = ___0_number;
		int32_t L_32 = L_31->___Scale;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		int32_t L_33 = V_4;
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_008b:
	{
		int32_t L_35 = V_0;
		int32_t L_36 = V_4;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_36,NULL));
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_38;
		L_38 = BurstString_GetLengthIntegerToString_m9B709036A6A62EEAB7EBAF1E96FBAE4B5159566D(L_37, ((int32_t)10), 2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, L_38));
	}

IL_0099:
	{
		int32_t L_39 = V_0;
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_FormatGeneral_mD0670AB1AD479BEF2C33E21BD559533DF9BE8842 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* ___3_number, int32_t ___4_nMaxDigits, uint8_t ___5_expChar, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	int32_t V_0 = 0;
	bool V_1 = false;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 V_5;
	memset((&V_5), 0, sizeof(V_5));
	uint8_t* G_B12_0 = NULL;
	uint8_t* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	uint8_t* G_B13_1 = NULL;
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_0 = ___3_number;
		int32_t L_1 = L_0->___Scale;
		V_0 = L_1;
		V_1 = (bool)0;
		int32_t L_2 = V_0;
		int32_t L_3 = ___4_nMaxDigits;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)-3))))
		{
			goto IL_0017;
		}
	}

IL_0013:
	{
		V_0 = 1;
		V_1 = (bool)1;
	}

IL_0017:
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_5 = ___3_number;
		uint8_t* L_6;
		L_6 = NumberBuffer_GetDigitsPointer_mEDF101B1FB7FD3D152E0A82195BD44DDB7A5E4AC_inline(L_5, NULL);
		V_2 = L_6;
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_7 = ___3_number;
		bool L_8 = L_7->___IsNegative;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		int32_t* L_9 = ___1_destIndex;
		int32_t L_10 = *(L_9);
		int32_t L_11 = ___2_destLength;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		uint8_t* L_12 = ___0_dest;
		int32_t* L_13 = ___1_destIndex;
		int32_t* L_14 = ___1_destIndex;
		int32_t L_15 = *(L_14);
		V_3 = L_15;
		int32_t L_16 = V_3;
		*(L_13) = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_3;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_12, L_17)))) = ((int8_t)((int32_t)45));
	}

IL_003a:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}

IL_003e:
	{
		int32_t* L_19 = ___1_destIndex;
		int32_t L_20 = *(L_19);
		int32_t L_21 = ___2_destLength;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0044;
		}
	}
	{
		return;
	}

IL_0044:
	{
		uint8_t* L_22 = ___0_dest;
		int32_t* L_23 = ___1_destIndex;
		int32_t* L_24 = ___1_destIndex;
		int32_t L_25 = *(L_24);
		V_3 = L_25;
		int32_t L_26 = V_3;
		*(L_23) = ((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_27 = V_3;
		uint8_t* L_28 = V_2;
		int32_t L_29 = ((int32_t)*(L_28));
		if (L_29)
		{
			G_B12_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, L_27));
			goto IL_0057;
		}
		G_B11_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, L_27));
	}
	{
		G_B13_0 = ((int32_t)48);
		G_B13_1 = G_B11_0;
		goto IL_005d;
	}

IL_0057:
	{
		uint8_t* L_30 = V_2;
		uint8_t* L_31 = L_30;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_31, 1));
		int32_t L_32 = ((int32_t)*(L_31));
		G_B13_0 = L_32;
		G_B13_1 = G_B12_0;
	}

IL_005d:
	{
		*(((int8_t*)G_B13_1)) = ((int8_t)G_B13_0);
		int32_t L_33 = V_0;
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		V_0 = L_34;
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		goto IL_007c;
	}

IL_0068:
	{
		int32_t* L_35 = ___1_destIndex;
		int32_t L_36 = *(L_35);
		int32_t L_37 = ___2_destLength;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_006e;
		}
	}
	{
		return;
	}

IL_006e:
	{
		uint8_t* L_38 = ___0_dest;
		int32_t* L_39 = ___1_destIndex;
		int32_t* L_40 = ___1_destIndex;
		int32_t L_41 = *(L_40);
		V_3 = L_41;
		int32_t L_42 = V_3;
		*(L_39) = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = V_3;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, L_43)))) = ((int8_t)((int32_t)48));
	}

IL_007c:
	{
		uint8_t* L_44 = V_2;
		int32_t L_45 = ((int32_t)*(L_44));
		if (L_45)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_46 = V_0;
		if ((((int32_t)L_46) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}

IL_0084:
	{
		int32_t* L_47 = ___1_destIndex;
		int32_t L_48 = *(L_47);
		int32_t L_49 = ___2_destLength;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_008a;
		}
	}
	{
		return;
	}

IL_008a:
	{
		uint8_t* L_50 = ___0_dest;
		int32_t* L_51 = ___1_destIndex;
		int32_t* L_52 = ___1_destIndex;
		int32_t L_53 = *(L_52);
		V_3 = L_53;
		int32_t L_54 = V_3;
		*(L_51) = ((int32_t)il2cpp_codegen_add(L_54, 1));
		int32_t L_55 = V_3;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_50, L_55)))) = ((int8_t)((int32_t)46));
		goto IL_00b2;
	}

IL_009a:
	{
		int32_t* L_56 = ___1_destIndex;
		int32_t L_57 = *(L_56);
		int32_t L_58 = ___2_destLength;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00a0;
		}
	}
	{
		return;
	}

IL_00a0:
	{
		uint8_t* L_59 = ___0_dest;
		int32_t* L_60 = ___1_destIndex;
		int32_t* L_61 = ___1_destIndex;
		int32_t L_62 = *(L_61);
		V_3 = L_62;
		int32_t L_63 = V_3;
		*(L_60) = ((int32_t)il2cpp_codegen_add(L_63, 1));
		int32_t L_64 = V_3;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_59, L_64)))) = ((int8_t)((int32_t)48));
		int32_t L_65 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_00b2:
	{
		int32_t L_66 = V_0;
		if ((((int32_t)L_66) < ((int32_t)0)))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00d0;
	}

IL_00b8:
	{
		int32_t* L_67 = ___1_destIndex;
		int32_t L_68 = *(L_67);
		int32_t L_69 = ___2_destLength;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_00be;
		}
	}
	{
		return;
	}

IL_00be:
	{
		uint8_t* L_70 = ___0_dest;
		int32_t* L_71 = ___1_destIndex;
		int32_t* L_72 = ___1_destIndex;
		int32_t L_73 = *(L_72);
		V_3 = L_73;
		int32_t L_74 = V_3;
		*(L_71) = ((int32_t)il2cpp_codegen_add(L_74, 1));
		int32_t L_75 = V_3;
		uint8_t* L_76 = V_2;
		uint8_t* L_77 = L_76;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, 1));
		int32_t L_78 = ((int32_t)*(L_77));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_70, L_75)))) = ((int8_t)L_78);
	}

IL_00d0:
	{
		uint8_t* L_79 = V_2;
		int32_t L_80 = ((int32_t)*(L_79));
		if (L_80)
		{
			goto IL_00b8;
		}
	}

IL_00d4:
	{
		bool L_81 = V_1;
		if (!L_81)
		{
			goto IL_010d;
		}
	}
	{
		int32_t* L_82 = ___1_destIndex;
		int32_t L_83 = *(L_82);
		int32_t L_84 = ___2_destLength;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_00dd;
		}
	}
	{
		return;
	}

IL_00dd:
	{
		uint8_t* L_85 = ___0_dest;
		int32_t* L_86 = ___1_destIndex;
		int32_t* L_87 = ___1_destIndex;
		int32_t L_88 = *(L_87);
		V_3 = L_88;
		int32_t L_89 = V_3;
		*(L_86) = ((int32_t)il2cpp_codegen_add(L_89, 1));
		int32_t L_90 = V_3;
		uint8_t L_91 = ___5_expChar;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_85, L_90)))) = ((int8_t)L_91);
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_92 = ___3_number;
		int32_t L_93 = L_92->___Scale;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		FormatOptions__ctor_m2B3F2187A54E5310ADA5F9A4AD63E19A07FF63CD((&V_5), 2, (int8_t)0, (uint8_t)2, (bool)0, NULL);
		uint8_t* L_94 = ___0_dest;
		int32_t* L_95 = ___1_destIndex;
		int32_t L_96 = ___2_destLength;
		int32_t L_97 = V_4;
		int64_t L_98 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_97,NULL));
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_99 = V_5;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_ConvertIntegerToString_m4991AB440CAF8F1D4E99B55B8B8383232B7A475D(L_94, L_95, L_96, L_98, L_99, NULL);
	}

IL_010d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_RoundNumber_m6671299075FD59BA7D050A42A57DE4E83D8DB2CF (NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* ___0_number, int32_t ___1_pos, bool ___2_isCorrectlyRounded, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_0 = ___0_number;
		uint8_t* L_1;
		L_1 = NumberBuffer_GetDigitsPointer_mEDF101B1FB7FD3D152E0A82195BD44DDB7A5E4AC_inline(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_000f;
	}

IL_000b:
	{
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		int32_t L_4 = ___1_pos;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = ((int32_t)*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6))));
		if (L_7)
		{
			goto IL_000b;
		}
	}

IL_0019:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___1_pos;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0063;
		}
	}
	{
		uint8_t* L_10 = V_0;
		int32_t L_11 = V_1;
		bool L_12 = ___2_isCorrectlyRounded;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = BurstString_ShouldRoundUp_m93A0956A3AC2E36E56A8517C14BE780A1E8E99F4(L_10, L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		goto IL_002d;
	}

IL_0029:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_002d:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		uint8_t* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = ((int32_t)*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1))))));
		if ((((int32_t)L_18) == ((int32_t)((int32_t)57))))
		{
			goto IL_0029;
		}
	}

IL_003b:
	{
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		uint8_t* L_20 = V_0;
		int32_t L_21 = V_1;
		uint8_t* L_22 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, ((int32_t)il2cpp_codegen_subtract(L_21, 1))));
		int32_t L_23 = ((int32_t)*(L_22));
		uint8_t L_24 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_23, 1)),NULL));
		*(((int8_t*)L_22)) = ((int8_t)L_24);
		goto IL_0071;
	}

IL_004c:
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_25 = ___0_number;
		int32_t* L_26 = (int32_t*)(&L_25->___Scale);
		int32_t* L_27 = L_26;
		int32_t L_28 = *(L_27);
		*(L_27) = ((int32_t)il2cpp_codegen_add(L_28, 1));
		uint8_t* L_29 = V_0;
		*(((int8_t*)L_29)) = ((int8_t)((int32_t)49));
		V_1 = 1;
		goto IL_0071;
	}

IL_005f:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_0063:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		uint8_t* L_32 = V_0;
		int32_t L_33 = V_1;
		int32_t L_34 = ((int32_t)*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_32, ((int32_t)il2cpp_codegen_subtract(L_33, 1))))));
		if ((((int32_t)L_34) == ((int32_t)((int32_t)48))))
		{
			goto IL_005f;
		}
	}

IL_0071:
	{
		int32_t L_35 = V_1;
		if (L_35)
		{
			goto IL_007b;
		}
	}
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_36 = ___0_number;
		L_36->___Scale = 0;
	}

IL_007b:
	{
		uint8_t* L_37 = V_0;
		int32_t L_38 = V_1;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, L_38)))) = ((int8_t)0);
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* L_39 = ___0_number;
		int32_t L_40 = V_1;
		L_39->___DigitsCount = L_40;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstString_ShouldRoundUp_m93A0956A3AC2E36E56A8517C14BE780A1E8E99F4 (uint8_t* ___0_dig, int32_t ___1_i, bool ___2_isCorrectlyRounded, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t* L_0 = ___0_dig;
		int32_t L_1 = ___1_i;
		int32_t L_2 = ((int32_t)*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1))));
		V_0 = (uint8_t)L_2;
		uint8_t L_3 = V_0;
		bool L_4 = ___2_isCorrectlyRounded;
		if (!((int32_t)(((((int32_t)L_3) == ((int32_t)0))? 1 : 0)|(int32_t)L_4)))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		uint8_t L_5 = V_0;
		return (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)((int32_t)53)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_LogBase2_m2F319D1D37390348D8304E3DEBBD4530FC8871B0 (uint32_t ___0_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_val;
		V_0 = ((int32_t)((uint32_t)L_0>>((int32_t)24)));
		uint32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___logTable;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		uint32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return ((int32_t)il2cpp_codegen_add(((int32_t)24), (int32_t)L_5));
	}

IL_0013:
	{
		uint32_t L_6 = ___0_val;
		V_0 = ((int32_t)((uint32_t)L_6>>((int32_t)16)));
		uint32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___logTable;
		uint32_t L_9 = V_0;
		NullCheck(L_8);
		uint32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return ((int32_t)il2cpp_codegen_add(((int32_t)16), (int32_t)L_11));
	}

IL_0026:
	{
		uint32_t L_12 = ___0_val;
		V_0 = ((int32_t)((uint32_t)L_12>>8));
		uint32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0037;
		}
	}
	{
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___logTable;
		uint32_t L_15 = V_0;
		NullCheck(L_14);
		uint32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		return ((int32_t)il2cpp_codegen_add(8, (int32_t)L_17));
	}

IL_0037:
	{
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___logTable;
		uint32_t L_19 = ___0_val;
		NullCheck(L_18);
		uint32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstString_BigInt_Compare_m51FF09779D622DBD964086F559738DF85288EB28 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_lhs, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_rhs, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_0 = ___0_lhs;
		int32_t L_1 = L_0->___m_length;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_2 = ___1_rhs;
		int32_t L_3 = L_2->___m_length;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0013:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_6 = ___0_lhs;
		int32_t L_7 = L_6->___m_length;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_006e;
	}

IL_001e:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_8 = ___0_lhs;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_9 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_8->___m_blocks);
		uint32_t* L_10 = (uint32_t*)(&L_9->___FixedElementField);
		int32_t L_11 = V_1;
		intptr_t L_12 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_11,NULL));
		int32_t L_13 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(L_12, 4))))));
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_14 = ___1_rhs;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_15 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_14->___m_blocks);
		uint32_t* L_16 = (uint32_t*)(&L_15->___FixedElementField);
		int32_t L_17 = V_1;
		intptr_t L_18 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_17,NULL));
		int32_t L_19 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_18, 4))))));
		if ((((int32_t)L_13) == ((int32_t)L_19)))
		{
			goto IL_006a;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_20 = ___0_lhs;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_21 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_20->___m_blocks);
		uint32_t* L_22 = (uint32_t*)(&L_21->___FixedElementField);
		int32_t L_23 = V_1;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4))))));
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_26 = ___1_rhs;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_27 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_26->___m_blocks);
		uint32_t* L_28 = (uint32_t*)(&L_27->___FixedElementField);
		int32_t L_29 = V_1;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4))))));
		if ((!(((uint32_t)L_25) > ((uint32_t)L_31))))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		return (-1);
	}

IL_006a:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
	}

IL_006e:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Add_mF652852521D74DAB4F1AC5D011EA2C00CB99A7EA (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_lhs, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___2_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_0 = ___1_lhs;
		int32_t L_1 = L_0->___m_length;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_2 = ___2_rhs;
		int32_t L_3 = L_2->___m_length;
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_4 = ___0_pResult;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_5 = ___2_rhs;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_6 = ___1_lhs;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Add_internal_m2B84DF7C286A9C5F855143679991D3672807BBC3(L_4, L_5, L_6, NULL);
		return;
	}

IL_0017:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_7 = ___0_pResult;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_8 = ___1_lhs;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_9 = ___2_rhs;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Add_internal_m2B84DF7C286A9C5F855143679991D3672807BBC3(L_7, L_8, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Add_internal_m2B84DF7C286A9C5F855143679991D3672807BBC3 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_pLarge, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___2_pSmall, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t* V_10 = NULL;
	uint32_t* V_11 = NULL;
	uint32_t* V_12 = NULL;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_0 = ___1_pLarge;
		int32_t L_1 = L_0->___m_length;
		V_0 = L_1;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_2 = ___2_pSmall;
		int32_t L_3 = L_2->___m_length;
		V_1 = L_3;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_4 = ___0_pResult;
		int32_t L_5 = V_0;
		L_4->___m_length = L_5;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = L_6;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_7 = ___1_pLarge;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_8 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_7->___m_blocks);
		uint32_t* L_9 = (uint32_t*)(&L_8->___FixedElementField);
		V_4 = L_9;
		uint32_t* L_10 = V_4;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_10,NULL));
		V_3 = (uint32_t*)L_11;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_12 = ___2_pSmall;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_13 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_12->___m_blocks);
		uint32_t* L_14 = (uint32_t*)(&L_13->___FixedElementField);
		V_6 = L_14;
		uint32_t* L_15 = V_6;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_15,NULL));
		V_5 = (uint32_t*)L_16;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_17 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_18 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_17->___m_blocks);
		uint32_t* L_19 = (uint32_t*)(&L_18->___FixedElementField);
		V_7 = L_19;
		uint32_t* L_20 = V_7;
		uintptr_t L_21 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_20,NULL));
		uint32_t* L_22 = V_3;
		V_8 = L_22;
		uint32_t* L_23 = V_5;
		V_9 = L_23;
		V_10 = (uint32_t*)L_21;
		uint32_t* L_24 = V_8;
		int32_t L_25 = V_0;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		V_11 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4))));
		uint32_t* L_27 = V_9;
		int32_t L_28 = V_1;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		V_12 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4))));
		goto IL_0096;
	}

IL_0068:
	{
		uint64_t L_30 = V_2;
		uint32_t* L_31 = V_8;
		int32_t L_32 = ((int32_t)*(L_31));
		uint64_t L_33 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_32,NULL));
		uint32_t* L_34 = V_9;
		int32_t L_35 = ((int32_t)*(L_34));
		uint64_t L_36 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_35,NULL));
		V_13 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_30, (int64_t)L_33)), (int64_t)L_36));
		uint64_t L_37 = V_13;
		V_2 = ((int64_t)((uint64_t)L_37>>((int32_t)32)));
		uint32_t* L_38 = V_10;
		uint64_t L_39 = V_13;
		uint64_t L_40 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint32_t L_41 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_39&(int64_t)L_40)),NULL));
		*(((int32_t*)L_38)) = ((int32_t)L_41);
		uint32_t* L_42 = V_8;
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_42, 4));
		uint32_t* L_43 = V_9;
		V_9 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_43, 4));
		uint32_t* L_44 = V_10;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_44, 4));
	}

IL_0096:
	{
		uint32_t* L_45 = V_9;
		uint32_t* L_46 = V_12;
		if ((!(((uintptr_t)L_45) == ((uintptr_t)L_46))))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_00c1;
	}

IL_009e:
	{
		uint64_t L_47 = V_2;
		uint32_t* L_48 = V_8;
		int32_t L_49 = ((int32_t)*(L_48));
		uint64_t L_50 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_49,NULL));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_47, (int64_t)L_50));
		uint64_t L_51 = V_14;
		V_2 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint32_t* L_52 = V_10;
		uint64_t L_53 = V_14;
		uint64_t L_54 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint32_t L_55 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_53&(int64_t)L_54)),NULL));
		*(((int32_t*)L_52)) = ((int32_t)L_55);
		uint32_t* L_56 = V_8;
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_56, 4));
		uint32_t* L_57 = V_10;
		V_10 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_57, 4));
	}

IL_00c1:
	{
		uint32_t* L_58 = V_8;
		uint32_t* L_59 = V_11;
		if ((!(((uintptr_t)L_58) == ((uintptr_t)L_59))))
		{
			goto IL_009e;
		}
	}
	{
		uint64_t L_60 = V_2;
		if (!L_60)
		{
			goto IL_00d9;
		}
	}
	{
		uint32_t* L_61 = V_10;
		*(((int32_t*)L_61)) = 1;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_62 = ___0_pResult;
		int32_t L_63 = V_0;
		L_62->___m_length = ((int32_t)il2cpp_codegen_add(L_63, 1));
		goto IL_00e0;
	}

IL_00d9:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_64 = ___0_pResult;
		int32_t L_65 = V_0;
		L_64->___m_length = L_65;
	}

IL_00e0:
	{
		uintptr_t L_66 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_7 = (uint32_t*)L_66;
		uintptr_t L_67 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = (uint32_t*)L_67;
		uintptr_t L_68 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_4 = (uint32_t*)L_68;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_m35A2F6E44C81B11FDD3FCD17C42469FBFB5648F9 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_lhs, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___2_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_0 = ___1_lhs;
		int32_t L_1 = L_0->___m_length;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_2 = ___2_rhs;
		int32_t L_3 = L_2->___m_length;
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_4 = ___0_pResult;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_5 = ___2_rhs;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_6 = ___1_lhs;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Multiply_internal_mD464DD354B5ABB9774D243C9AC63CA01AA2879A1(L_4, L_5, L_6, NULL);
		return;
	}

IL_0017:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_7 = ___0_pResult;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_8 = ___1_lhs;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_9 = ___2_rhs;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Multiply_internal_mD464DD354B5ABB9774D243C9AC63CA01AA2879A1(L_7, L_8, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_internal_mD464DD354B5ABB9774D243C9AC63CA01AA2879A1 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_pLarge, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___2_pSmall, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t* V_8 = NULL;
	uint32_t* V_9 = NULL;
	uint32_t V_10 = 0;
	uint32_t* V_11 = NULL;
	uint32_t* V_12 = NULL;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_0 = ___1_pLarge;
		int32_t L_1 = L_0->___m_length;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_2 = ___2_pSmall;
		int32_t L_3 = L_2->___m_length;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_3));
		V_1 = 0;
		goto IL_0028;
	}

IL_0012:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_4 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_5 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_4->___m_blocks);
		uint32_t* L_6 = (uint32_t*)(&L_5->___FixedElementField);
		int32_t L_7 = V_1;
		intptr_t L_8 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_7,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(L_8, 4)))))) = 0;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0012;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_12 = ___1_pLarge;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_13 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_12->___m_blocks);
		uint32_t* L_14 = (uint32_t*)(&L_13->___FixedElementField);
		V_2 = L_14;
		uint32_t* L_15 = V_2;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_15,NULL));
		V_3 = (uint32_t*)L_16;
		uint32_t* L_17 = V_3;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_18 = ___1_pLarge;
		int32_t L_19 = L_18->___m_length;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		V_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(L_20, 4))));
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_21 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_22 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_21->___m_blocks);
		uint32_t* L_23 = (uint32_t*)(&L_22->___FixedElementField);
		V_5 = L_23;
		uint32_t* L_24 = V_5;
		uintptr_t L_25 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_24,NULL));
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_26 = ___2_pSmall;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_27 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_26->___m_blocks);
		uint32_t* L_28 = (uint32_t*)(&L_27->___FixedElementField);
		V_6 = L_28;
		uint32_t* L_29 = V_6;
		uintptr_t L_30 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_29,NULL));
		V_7 = (uint32_t*)L_30;
		uint32_t* L_31 = V_7;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_32 = ___2_pSmall;
		int32_t L_33 = L_32->___m_length;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		V_8 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_34, 4))));
		V_9 = (uint32_t*)L_25;
		goto IL_00d9;
	}

IL_007c:
	{
		uint32_t* L_35 = V_7;
		int32_t L_36 = ((int32_t)*(L_35));
		V_10 = L_36;
		uint32_t L_37 = V_10;
		if (!L_37)
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t* L_38 = V_3;
		V_11 = L_38;
		uint32_t* L_39 = V_9;
		V_12 = L_39;
		int64_t L_40 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_13 = L_40;
	}

IL_0090:
	{
		uint32_t* L_41 = V_12;
		int32_t L_42 = ((int32_t)*(L_41));
		uint64_t L_43 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_42,NULL));
		uint32_t* L_44 = V_11;
		int32_t L_45 = ((int32_t)*(L_44));
		uint64_t L_46 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_45,NULL));
		uint32_t L_47 = V_10;
		uint64_t L_48 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_47,NULL));
		uint64_t L_49 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_43, ((int64_t)il2cpp_codegen_multiply((int64_t)L_46, (int64_t)L_48)))), (int64_t)L_49));
		uint64_t L_50 = V_14;
		V_13 = ((int64_t)((uint64_t)L_50>>((int32_t)32)));
		uint32_t* L_51 = V_12;
		uint64_t L_52 = V_14;
		uint64_t L_53 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint32_t L_54 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_52&(int64_t)L_53)),NULL));
		*(((int32_t*)L_51)) = ((int32_t)L_54);
		uint32_t* L_55 = V_11;
		V_11 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_55, 4));
		uint32_t* L_56 = V_12;
		V_12 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_56, 4));
		uint32_t* L_57 = V_11;
		uint32_t* L_58 = V_4;
		if ((!(((uintptr_t)L_57) == ((uintptr_t)L_58))))
		{
			goto IL_0090;
		}
	}
	{
		uint32_t* L_59 = V_12;
		uint64_t L_60 = V_13;
		uint64_t L_61 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint32_t L_62 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_60&(int64_t)L_61)),NULL));
		*(((int32_t*)L_59)) = ((int32_t)L_62);
	}

IL_00cd:
	{
		uint32_t* L_63 = V_7;
		V_7 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_63, 4));
		uint32_t* L_64 = V_9;
		V_9 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_64, 4));
	}

IL_00d9:
	{
		uint32_t* L_65 = V_7;
		uint32_t* L_66 = V_8;
		if ((!(((uintptr_t)L_65) == ((uintptr_t)L_66))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) <= ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_68 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_69 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_68->___m_blocks);
		uint32_t* L_70 = (uint32_t*)(&L_69->___FixedElementField);
		int32_t L_71 = V_0;
		intptr_t L_72 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_71, 1)),NULL));
		int32_t L_73 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(L_72, 4))))));
		if (L_73)
		{
			goto IL_0103;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_74 = ___0_pResult;
		int32_t L_75 = V_0;
		L_74->___m_length = ((int32_t)il2cpp_codegen_subtract(L_75, 1));
		goto IL_010a;
	}

IL_0103:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_76 = ___0_pResult;
		int32_t L_77 = V_0;
		L_76->___m_length = L_77;
	}

IL_010a:
	{
		uintptr_t L_78 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = (uint32_t*)L_78;
		uintptr_t L_79 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_5 = (uint32_t*)L_79;
		uintptr_t L_80 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint32_t*)L_80;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply_mE2B6CA1B5BEB924A4CFB672AB71D4CCF3C79FABA (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_lhs, uint32_t ___2_rhs, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint64_t V_7 = 0;
	{
		V_0 = 0;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_0 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_0->___m_blocks);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField);
		V_2 = L_2;
		uint32_t* L_3 = V_2;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_3,NULL));
		V_1 = (uint32_t*)L_4;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_5 = ___1_lhs;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_6 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_5->___m_blocks);
		uint32_t* L_7 = (uint32_t*)(&L_6->___FixedElementField);
		V_3 = L_7;
		uint32_t* L_8 = V_3;
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_8,NULL));
		uint32_t* L_10 = V_1;
		V_4 = L_10;
		V_5 = (uint32_t*)L_9;
		uint32_t* L_11 = V_5;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_12 = ___1_lhs;
		int32_t L_13 = L_12->___m_length;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_14, 4))));
		goto IL_005c;
	}

IL_0034:
	{
		uint32_t* L_15 = V_5;
		int32_t L_16 = ((int32_t)*(L_15));
		uint64_t L_17 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_16,NULL));
		uint32_t L_18 = ___2_rhs;
		uint64_t L_19 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_18,NULL));
		uint32_t L_20 = V_0;
		uint64_t L_21 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_20,NULL));
		V_7 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_17, (int64_t)L_19)), (int64_t)L_21));
		uint32_t* L_22 = V_4;
		uint64_t L_23 = V_7;
		uint64_t L_24 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint32_t L_25 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_23&(int64_t)L_24)),NULL));
		*(((int32_t*)L_22)) = ((int32_t)L_25);
		uint64_t L_26 = V_7;
		uint32_t L_27 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)((uint64_t)L_26>>((int32_t)32))),NULL));
		V_0 = L_27;
		uint32_t* L_28 = V_5;
		V_5 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_28, 4));
		uint32_t* L_29 = V_4;
		V_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_29, 4));
	}

IL_005c:
	{
		uint32_t* L_30 = V_5;
		uint32_t* L_31 = V_6;
		if ((!(((uintptr_t)L_30) == ((uintptr_t)L_31))))
		{
			goto IL_0034;
		}
	}
	{
		uint32_t L_32 = V_0;
		if (!L_32)
		{
			goto IL_0079;
		}
	}
	{
		uint32_t* L_33 = V_4;
		uint32_t L_34 = V_0;
		*(((int32_t*)L_33)) = ((int32_t)L_34);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_35 = ___0_pResult;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_36 = ___1_lhs;
		int32_t L_37 = L_36->___m_length;
		L_35->___m_length = ((int32_t)il2cpp_codegen_add(L_37, 1));
		goto IL_0085;
	}

IL_0079:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_38 = ___0_pResult;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_39 = ___1_lhs;
		int32_t L_40 = L_39->___m_length;
		L_38->___m_length = L_40;
	}

IL_0085:
	{
		uintptr_t L_41 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (uint32_t*)L_41;
		uintptr_t L_42 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint32_t*)L_42;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply2_m5B20533EC78BBECD044C1235B96284A39CD3D963 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_input, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t V_7 = 0;
	{
		V_0 = 0;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_0 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_0->___m_blocks);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField);
		V_2 = L_2;
		uint32_t* L_3 = V_2;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_3,NULL));
		V_1 = (uint32_t*)L_4;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_5 = ___1_input;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_6 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_5->___m_blocks);
		uint32_t* L_7 = (uint32_t*)(&L_6->___FixedElementField);
		V_3 = L_7;
		uint32_t* L_8 = V_3;
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_8,NULL));
		uint32_t* L_10 = V_1;
		V_4 = L_10;
		V_5 = (uint32_t*)L_9;
		uint32_t* L_11 = V_5;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_12 = ___1_input;
		int32_t L_13 = L_12->___m_length;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_14, 4))));
		goto IL_0054;
	}

IL_0034:
	{
		uint32_t* L_15 = V_5;
		int32_t L_16 = ((int32_t)*(L_15));
		V_7 = L_16;
		uint32_t* L_17 = V_4;
		uint32_t L_18 = V_7;
		uint32_t L_19 = V_0;
		*(((int32_t*)L_17)) = ((int32_t)(((int32_t)((int32_t)L_18<<1))|(int32_t)L_19));
		uint32_t L_20 = V_7;
		V_0 = ((int32_t)((uint32_t)L_20>>((int32_t)31)));
		uint32_t* L_21 = V_5;
		V_5 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_21, 4));
		uint32_t* L_22 = V_4;
		V_4 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, 4));
	}

IL_0054:
	{
		uint32_t* L_23 = V_5;
		uint32_t* L_24 = V_6;
		if ((!(((uintptr_t)L_23) == ((uintptr_t)L_24))))
		{
			goto IL_0034;
		}
	}
	{
		uint32_t L_25 = V_0;
		if (!L_25)
		{
			goto IL_0071;
		}
	}
	{
		uint32_t* L_26 = V_4;
		uint32_t L_27 = V_0;
		*(((int32_t*)L_26)) = ((int32_t)L_27);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_28 = ___0_pResult;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_29 = ___1_input;
		int32_t L_30 = L_29->___m_length;
		L_28->___m_length = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_007d;
	}

IL_0071:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_31 = ___0_pResult;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_32 = ___1_input;
		int32_t L_33 = L_32->___m_length;
		L_31->___m_length = L_33;
	}

IL_007d:
	{
		uintptr_t L_34 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (uint32_t*)L_34;
		uintptr_t L_35 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (uint32_t*)L_35;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply2_m29F699BF3248269DB8FEEDC89CA57C1FFEBB95B5 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint32_t V_4 = 0;
	{
		V_0 = 0;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_0 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_0->___m_blocks);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField);
		V_1 = L_2;
		uint32_t* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_3,NULL));
		V_2 = (uint32_t*)L_4;
		uint32_t* L_5 = V_2;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_6 = ___0_pResult;
		int32_t L_7 = L_6->___m_length;
		intptr_t L_8 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_7,NULL));
		V_3 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_8, 4))));
		goto IL_0035;
	}

IL_001f:
	{
		uint32_t* L_9 = V_2;
		int32_t L_10 = ((int32_t)*(L_9));
		V_4 = L_10;
		uint32_t* L_11 = V_2;
		uint32_t L_12 = V_4;
		uint32_t L_13 = V_0;
		*(((int32_t*)L_11)) = ((int32_t)(((int32_t)((int32_t)L_12<<1))|(int32_t)L_13));
		uint32_t L_14 = V_4;
		V_0 = ((int32_t)((uint32_t)L_14>>((int32_t)31)));
		uint32_t* L_15 = V_2;
		V_2 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_15, 4));
	}

IL_0035:
	{
		uint32_t* L_16 = V_2;
		uint32_t* L_17 = V_3;
		if ((!(((uintptr_t)L_16) == ((uintptr_t)L_17))))
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_18 = V_0;
		if (!L_18)
		{
			goto IL_004a;
		}
	}
	{
		uint32_t* L_19 = V_2;
		uint32_t L_20 = V_0;
		*(((int32_t*)L_19)) = ((int32_t)L_20);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_21 = ___0_pResult;
		int32_t* L_22 = (int32_t*)(&L_21->___m_length);
		int32_t* L_23 = L_22;
		int32_t L_24 = *(L_23);
		*(L_23) = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_004a:
	{
		uintptr_t L_25 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint32_t*)L_25;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Multiply10_m6F3551E6309E09E3B00078890D95F2A007F124CD (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint64_t V_4 = 0;
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = L_0;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_1 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_2 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_1->___m_blocks);
		uint32_t* L_3 = (uint32_t*)(&L_2->___FixedElementField);
		V_1 = L_3;
		uint32_t* L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_4,NULL));
		V_2 = (uint32_t*)L_5;
		uint32_t* L_6 = V_2;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_7 = ___0_pResult;
		int32_t L_8 = L_7->___m_length;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		V_3 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(L_9, 4))));
		goto IL_003d;
	}

IL_0020:
	{
		uint32_t* L_10 = V_2;
		int32_t L_11 = ((int32_t)*(L_10));
		uint64_t L_12 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_11,NULL));
		int64_t L_13 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		uint64_t L_14 = V_0;
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_12, L_13)), (int64_t)L_14));
		uint32_t* L_15 = V_2;
		uint64_t L_16 = V_4;
		uint64_t L_17 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint32_t L_18 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_16&(int64_t)L_17)),NULL));
		*(((int32_t*)L_15)) = ((int32_t)L_18);
		uint64_t L_19 = V_4;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint32_t* L_20 = V_2;
		V_2 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, 4));
	}

IL_003d:
	{
		uint32_t* L_21 = V_2;
		uint32_t* L_22 = V_3;
		if ((!(((uintptr_t)L_21) == ((uintptr_t)L_22))))
		{
			goto IL_0020;
		}
	}
	{
		uint64_t L_23 = V_0;
		if (!L_23)
		{
			goto IL_0053;
		}
	}
	{
		uint32_t* L_24 = V_2;
		uint64_t L_25 = V_0;
		uint32_t L_26 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_25,NULL));
		*(((int32_t*)L_24)) = ((int32_t)L_26);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_27 = ___0_pResult;
		int32_t* L_28 = (int32_t*)(&L_27->___m_length);
		int32_t* L_29 = L_28;
		int32_t L_30 = *(L_29);
		*(L_29) = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0053:
	{
		uintptr_t L_31 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (uint32_t*)L_31;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 BurstString_g_PowerOf10_Big_m05543D68CE2507D715E8B9AE33AC6106BFD32F27 (int32_t ___0_i, const RuntimeMethod* method) 
{
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_i;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		(&V_0)->___m_length = 1;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField);
		*(((int32_t*)L_2)) = ((int32_t)100000000);
		goto IL_0503;
	}

IL_0022:
	{
		int32_t L_3 = ___0_i;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		(&V_0)->___m_length = 2;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_4 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_5 = (uint32_t*)(&L_4->___FixedElementField);
		*(((int32_t*)L_5)) = ((int32_t)1874919424);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_6 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_7 = (uint32_t*)(&L_6->___FixedElementField);
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, 4)))) = ((int32_t)2328306);
		goto IL_0503;
	}

IL_0059:
	{
		int32_t L_8 = ___0_i;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_00ba;
		}
	}
	{
		(&V_0)->___m_length = 4;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_9 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_10 = (uint32_t*)(&L_9->___FixedElementField);
		*(((int32_t*)L_10)) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_11 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_12 = (uint32_t*)(&L_11->___FixedElementField);
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, 4)))) = ((int32_t)-2052264063);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_13 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_14 = (uint32_t*)(&L_13->___FixedElementField);
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))))) = ((int32_t)762134875);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_16 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_17 = (uint32_t*)(&L_16->___FixedElementField);
		intptr_t L_18 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(L_18, 4)))))) = ((int32_t)1262);
		goto IL_0503;
	}

IL_00ba:
	{
		int32_t L_19 = ___0_i;
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_015f;
		}
	}
	{
		(&V_0)->___m_length = 7;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_20 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_21 = (uint32_t*)(&L_20->___FixedElementField);
		*(((int32_t*)L_21)) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_22 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_23 = (uint32_t*)(&L_22->___FixedElementField);
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_23, 4)))) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_24 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_25 = (uint32_t*)(&L_24->___FixedElementField);
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))))) = ((int32_t)-1083564287);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_27 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_28 = (uint32_t*)(&L_27->___FixedElementField);
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))))) = ((int32_t)1849224548);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_30 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_31 = (uint32_t*)(&L_30->___FixedElementField);
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))))) = ((int32_t)-626550803);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_33 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_34 = (uint32_t*)(&L_33->___FixedElementField);
		intptr_t L_35 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_35, 4)))))) = ((int32_t)-381683212);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_36 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_37 = (uint32_t*)(&L_36->___FixedElementField);
		intptr_t L_38 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_38, 4)))))) = ((int32_t)1593091);
		goto IL_0503;
	}

IL_015f:
	{
		int32_t L_39 = ___0_i;
		if ((!(((uint32_t)L_39) == ((uint32_t)4))))
		{
			goto IL_02a3;
		}
	}
	{
		(&V_0)->___m_length = ((int32_t)14);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_40 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_41 = (uint32_t*)(&L_40->___FixedElementField);
		*(((int32_t*)L_41)) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_42 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_43 = (uint32_t*)(&L_42->___FixedElementField);
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_43, 4)))) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_44 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_45 = (uint32_t*)(&L_44->___FixedElementField);
		intptr_t L_46 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(L_46, 4)))))) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_47 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_48 = (uint32_t*)(&L_47->___FixedElementField);
		intptr_t L_49 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(L_49, 4)))))) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_50 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_51 = (uint32_t*)(&L_50->___FixedElementField);
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))))) = ((int32_t)781532673);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_53 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_54 = (uint32_t*)(&L_53->___FixedElementField);
		intptr_t L_55 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(L_55, 4)))))) = ((int32_t)64985353);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_56 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_57 = (uint32_t*)(&L_56->___FixedElementField);
		intptr_t L_58 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(L_58, 4)))))) = ((int32_t)253049085);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_59 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_60 = (uint32_t*)(&L_59->___FixedElementField);
		intptr_t L_61 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(L_61, 4)))))) = ((int32_t)594863151);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_62 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_63 = (uint32_t*)(&L_62->___FixedElementField);
		intptr_t L_64 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_63, ((intptr_t)il2cpp_codegen_multiply(L_64, 4)))))) = ((int32_t)-741345812);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_65 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_66 = (uint32_t*)(&L_65->___FixedElementField);
		intptr_t L_67 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(L_67, 4)))))) = ((int32_t)-1006314488);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_68 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_69 = (uint32_t*)(&L_68->___FixedElementField);
		intptr_t L_70 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_69, ((intptr_t)il2cpp_codegen_multiply(L_70, 4)))))) = ((int32_t)-1127370534);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_71 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_72 = (uint32_t*)(&L_71->___FixedElementField);
		intptr_t L_73 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(L_73, 4)))))) = ((int32_t)-1506574567);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_74 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_75 = (uint32_t*)(&L_74->___FixedElementField);
		intptr_t L_76 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(L_76, 4)))))) = ((int32_t)-383834621);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_77 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_78 = (uint32_t*)(&L_77->___FixedElementField);
		intptr_t L_79 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(L_79, 4)))))) = ((int32_t)590);
		goto IL_0503;
	}

IL_02a3:
	{
		(&V_0)->___m_length = ((int32_t)27);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_80 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_81 = (uint32_t*)(&L_80->___FixedElementField);
		*(((int32_t*)L_81)) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_82 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_83 = (uint32_t*)(&L_82->___FixedElementField);
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_83, 4)))) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_84 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_85 = (uint32_t*)(&L_84->___FixedElementField);
		intptr_t L_86 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_85, ((intptr_t)il2cpp_codegen_multiply(L_86, 4)))))) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_87 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_88 = (uint32_t*)(&L_87->___FixedElementField);
		intptr_t L_89 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(L_89, 4)))))) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_90 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_91 = (uint32_t*)(&L_90->___FixedElementField);
		intptr_t L_92 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(L_92, 4)))))) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_93 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_94 = (uint32_t*)(&L_93->___FixedElementField);
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_94, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))))) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_96 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_97 = (uint32_t*)(&L_96->___FixedElementField);
		intptr_t L_98 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(L_98, 4)))))) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_99 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_100 = (uint32_t*)(&L_99->___FixedElementField);
		intptr_t L_101 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_100, ((intptr_t)il2cpp_codegen_multiply(L_101, 4)))))) = 0;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_102 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_103 = (uint32_t*)(&L_102->___FixedElementField);
		intptr_t L_104 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(L_104, 4)))))) = ((int32_t)-1741784063);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_105 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_106 = (uint32_t*)(&L_105->___FixedElementField);
		intptr_t L_107 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_106, ((intptr_t)il2cpp_codegen_multiply(L_107, 4)))))) = ((int32_t)-1093433509);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_108 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_109 = (uint32_t*)(&L_108->___FixedElementField);
		intptr_t L_110 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_109, ((intptr_t)il2cpp_codegen_multiply(L_110, 4)))))) = ((int32_t)-656826510);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_111 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_112 = (uint32_t*)(&L_111->___FixedElementField);
		intptr_t L_113 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(L_113, 4)))))) = ((int32_t)303378311);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_114 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_115 = (uint32_t*)(&L_114->___FixedElementField);
		intptr_t L_116 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_115, ((intptr_t)il2cpp_codegen_multiply(L_116, 4)))))) = ((int32_t)1809731782);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_117 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_118 = (uint32_t*)(&L_117->___FixedElementField);
		intptr_t L_119 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_118, ((intptr_t)il2cpp_codegen_multiply(L_119, 4)))))) = ((int32_t)-817205648);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_120 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_121 = (uint32_t*)(&L_120->___FixedElementField);
		intptr_t L_122 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)14),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(L_122, 4)))))) = ((int32_t)-711600113);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_123 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_124 = (uint32_t*)(&L_123->___FixedElementField);
		intptr_t L_125 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)15),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_124, ((intptr_t)il2cpp_codegen_multiply(L_125, 4)))))) = ((int32_t)649228654);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_126 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_127 = (uint32_t*)(&L_126->___FixedElementField);
		intptr_t L_128 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)16),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_127, ((intptr_t)il2cpp_codegen_multiply(L_128, 4)))))) = ((int32_t)-1379506512);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_129 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_130 = (uint32_t*)(&L_129->___FixedElementField);
		intptr_t L_131 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)17),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_130, ((intptr_t)il2cpp_codegen_multiply(L_131, 4)))))) = ((int32_t)487929380);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_132 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_133 = (uint32_t*)(&L_132->___FixedElementField);
		intptr_t L_134 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)18),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_133, ((intptr_t)il2cpp_codegen_multiply(L_134, 4)))))) = ((int32_t)1011012442);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_135 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_136 = (uint32_t*)(&L_135->___FixedElementField);
		intptr_t L_137 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)19),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_136, ((intptr_t)il2cpp_codegen_multiply(L_137, 4)))))) = ((int32_t)1677677582);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_138 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_139 = (uint32_t*)(&L_138->___FixedElementField);
		intptr_t L_140 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)20),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_139, ((intptr_t)il2cpp_codegen_multiply(L_140, 4)))))) = ((int32_t)-866815040);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_141 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_142 = (uint32_t*)(&L_141->___FixedElementField);
		intptr_t L_143 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)21),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_142, ((intptr_t)il2cpp_codegen_multiply(L_143, 4)))))) = ((int32_t)1710878487);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_144 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_145 = (uint32_t*)(&L_144->___FixedElementField);
		intptr_t L_146 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)22),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_145, ((intptr_t)il2cpp_codegen_multiply(L_146, 4)))))) = ((int32_t)1438394610);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_147 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_148 = (uint32_t*)(&L_147->___FixedElementField);
		intptr_t L_149 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)23),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_148, ((intptr_t)il2cpp_codegen_multiply(L_149, 4)))))) = ((int32_t)-2133014537);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_150 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_151 = (uint32_t*)(&L_150->___FixedElementField);
		intptr_t L_152 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)24),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_151, ((intptr_t)il2cpp_codegen_multiply(L_152, 4)))))) = ((int32_t)-194056740);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_153 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_154 = (uint32_t*)(&L_153->___FixedElementField);
		intptr_t L_155 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)25),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_154, ((intptr_t)il2cpp_codegen_multiply(L_155, 4)))))) = ((int32_t)1608314830);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_156 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&(&V_0)->___m_blocks);
		uint32_t* L_157 = (uint32_t*)(&L_156->___FixedElementField);
		intptr_t L_158 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)26),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_157, ((intptr_t)il2cpp_codegen_multiply(L_158, 4)))))) = ((int32_t)349175);
	}

IL_0503:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_159 = V_0;
		return L_159;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Pow10_mA03054009A2CF454BB3C0D1E9F1B6472FB7401A8 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, uint32_t ___1_exponent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_0;
	memset((&V_0), 0, sizeof(V_0));
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_1;
	memset((&V_1), 0, sizeof(V_1));
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* V_2 = NULL;
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* V_3 = NULL;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* V_6 = NULL;
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666));
		il2cpp_codegen_initobj((&V_1), sizeof(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666));
		V_2 = (&V_0);
		V_3 = (&V_1);
		uint32_t L_0 = ___1_exponent;
		V_4 = ((int32_t)((int32_t)L_0&7));
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_1 = V_2;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___g_PowerOf10_U32;
		uint32_t L_3 = V_4;
		NullCheck(L_2);
		uint32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		tBigInt_SetU32_m4D9602134447021404805AC0A997A21434FC72BD(L_1, L_5, NULL);
		uint32_t L_6 = ___1_exponent;
		___1_exponent = ((int32_t)((uint32_t)L_6>>3));
		V_5 = 0;
		goto IL_0071;
	}

IL_0033:
	{
		uint32_t L_7 = ___1_exponent;
		if (!((int32_t)((int32_t)L_7&1)))
		{
			goto IL_0066;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_8 = V_3;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_9 = V_2;
		int32_t L_10 = V_5;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_11;
		L_11 = BurstString_g_PowerOf10_Big_m05543D68CE2507D715E8B9AE33AC6106BFD32F27(L_10, NULL);
		V_7 = L_11;
		BurstString_BigInt_Multiply_m35A2F6E44C81B11FDD3FCD17C42469FBFB5648F9(L_8, L_9, (&V_7), NULL);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_12 = V_2;
		V_6 = L_12;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_13 = V_2;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_14 = V_3;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_15 = (*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_14);
		*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_13 = L_15;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_16 = V_3;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_17 = V_6;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_18 = (*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_17);
		*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_16 = L_18;
	}

IL_0066:
	{
		int32_t L_19 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_20 = ___1_exponent;
		___1_exponent = ((int32_t)((uint32_t)L_20>>1));
	}

IL_0071:
	{
		uint32_t L_21 = ___1_exponent;
		if (L_21)
		{
			goto IL_0033;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_22 = ___0_pResult;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_23 = V_2;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_24 = (*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_23);
		*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_22 = L_24;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_MultiplyPow10_m62128BDA4DC9C83FC01825C74BE1FE01CF752638 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_input, uint32_t ___2_exponent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_0;
	memset((&V_0), 0, sizeof(V_0));
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_1;
	memset((&V_1), 0, sizeof(V_1));
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* V_2 = NULL;
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* V_3 = NULL;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* V_6 = NULL;
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666));
		il2cpp_codegen_initobj((&V_1), sizeof(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666));
		V_2 = (&V_0);
		V_3 = (&V_1);
		uint32_t L_0 = ___2_exponent;
		V_4 = ((int32_t)((int32_t)L_0&7));
		uint32_t L_1 = V_4;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_2 = V_2;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_3 = ___1_input;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___g_PowerOf10_U32;
		uint32_t L_5 = V_4;
		NullCheck(L_4);
		uint32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		BurstString_BigInt_Multiply_mE2B6CA1B5BEB924A4CFB672AB71D4CCF3C79FABA(L_2, L_3, L_7, NULL);
		goto IL_003c;
	}

IL_0030:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_8 = V_2;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_9 = ___1_input;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_10 = (*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_9);
		*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_8 = L_10;
	}

IL_003c:
	{
		uint32_t L_11 = ___2_exponent;
		___2_exponent = ((int32_t)((uint32_t)L_11>>3));
		V_5 = 0;
		goto IL_0084;
	}

IL_0046:
	{
		uint32_t L_12 = ___2_exponent;
		if (!((int32_t)((int32_t)L_12&1)))
		{
			goto IL_0079;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_13 = V_3;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_14 = V_2;
		int32_t L_15 = V_5;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_16;
		L_16 = BurstString_g_PowerOf10_Big_m05543D68CE2507D715E8B9AE33AC6106BFD32F27(L_15, NULL);
		V_7 = L_16;
		BurstString_BigInt_Multiply_m35A2F6E44C81B11FDD3FCD17C42469FBFB5648F9(L_13, L_14, (&V_7), NULL);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_17 = V_2;
		V_6 = L_17;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_18 = V_2;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_19 = V_3;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_20 = (*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_19);
		*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_18 = L_20;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_21 = V_3;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_22 = V_6;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_23 = (*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_22);
		*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_21 = L_23;
	}

IL_0079:
	{
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		uint32_t L_25 = ___2_exponent;
		___2_exponent = ((int32_t)((uint32_t)L_25>>1));
	}

IL_0084:
	{
		uint32_t L_26 = ___2_exponent;
		if (L_26)
		{
			goto IL_0046;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_27 = ___0_pResult;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_28 = V_2;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_29 = (*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_28);
		*(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_27 = L_29;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_Pow2_mE7E1C022FA22D59386F72FDAF14C867627009F20 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, uint32_t ___1_exponent, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		uint32_t L_0 = ___1_exponent;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)32)));
		V_2 = 0;
		goto IL_0021;
	}

IL_0009:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_1 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_2 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_1->___m_blocks);
		uint32_t* L_3 = (uint32_t*)(&L_2->___FixedElementField);
		uint32_t L_4 = V_2;
		uint64_t L_5 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply((int64_t)L_5, L_6)),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_3, L_7)))) = 0;
		uint32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, 1));
	}

IL_0021:
	{
		uint32_t L_9 = V_2;
		uint64_t L_10 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = V_0;
		int64_t L_12 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_11,NULL));
		if ((((int64_t)L_10) <= ((int64_t)L_12)))
		{
			goto IL_0009;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_13 = ___0_pResult;
		int32_t L_14 = V_0;
		L_13->___m_length = ((int32_t)il2cpp_codegen_add(L_14, 1));
		uint32_t L_15 = ___1_exponent;
		V_1 = ((int32_t)((int32_t)L_15%((int32_t)32)));
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_16 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_17 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_16->___m_blocks);
		uint32_t* L_18 = (uint32_t*)(&L_17->___FixedElementField);
		int32_t L_19 = V_0;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		uint32_t* L_21 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4))));
		int32_t L_22 = ((int32_t)*(L_21));
		int32_t L_23 = V_1;
		*(((int32_t*)L_21)) = ((int32_t)(L_22|((int32_t)(1<<((int32_t)(L_23&((int32_t)31)))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_BigInt_DivideWithRemainder_MaxQuotient9_m7FDF6B0A7B6E523A708B24BD1A9C489B57AC2696 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pDividend, tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___1_divisor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	int32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t* V_7 = NULL;
	uint32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_0 = ___1_divisor;
		int32_t L_1 = L_0->___m_length;
		V_0 = L_1;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_2 = ___0_pDividend;
		int32_t L_3 = L_2->___m_length;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_4 = ___1_divisor;
		int32_t L_5 = L_4->___m_length;
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_6 = ___1_divisor;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_7 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_6->___m_blocks);
		uint32_t* L_8 = (uint32_t*)(&L_7->___FixedElementField);
		V_2 = L_8;
		uint32_t* L_9 = V_2;
		uintptr_t L_10 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_9,NULL));
		V_1 = (uint32_t*)L_10;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_11 = ___0_pDividend;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_12 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_11->___m_blocks);
		uint32_t* L_13 = (uint32_t*)(&L_12->___FixedElementField);
		V_4 = L_13;
		uint32_t* L_14 = V_4;
		uintptr_t L_15 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_14,NULL));
		V_3 = (uint32_t*)L_15;
		uint32_t* L_16 = V_1;
		V_5 = L_16;
		uint32_t* L_17 = V_3;
		V_6 = L_17;
		uint32_t* L_18 = V_5;
		int32_t L_19 = V_0;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		V_7 = ((uint32_t*)il2cpp_codegen_subtract((intptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))), 4));
		uint32_t* L_21 = V_6;
		int32_t L_22 = V_0;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t L_24 = ((int32_t)*(((uint32_t*)il2cpp_codegen_subtract((intptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))), 4))));
		uint32_t* L_25 = V_7;
		int32_t L_26 = ((int32_t)*(L_25));
		V_8 = ((int32_t)((uint32_t)(int32_t)L_24/(uint32_t)(int32_t)((int32_t)il2cpp_codegen_add(L_26, 1))));
		uint32_t L_27 = V_8;
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		int64_t L_28 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_9 = L_28;
		int64_t L_29 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_10 = L_29;
	}

IL_0066:
	{
		uint32_t* L_30 = V_5;
		int32_t L_31 = ((int32_t)*(L_30));
		uint64_t L_32 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_31,NULL));
		uint32_t L_33 = V_8;
		uint64_t L_34 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_33,NULL));
		uint64_t L_35 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_32, (int64_t)L_34)), (int64_t)L_35));
		uint64_t L_36 = V_11;
		V_10 = ((int64_t)((uint64_t)L_36>>((int32_t)32)));
		uint32_t* L_37 = V_6;
		int32_t L_38 = ((int32_t)*(L_37));
		uint64_t L_39 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_38,NULL));
		uint64_t L_40 = V_11;
		uint64_t L_41 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint64_t L_42 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract((int64_t)L_39, ((int64_t)((int64_t)L_40&(int64_t)L_41)))), (int64_t)L_42));
		uint64_t L_43 = V_12;
		int64_t L_44 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_9 = ((int64_t)(((int64_t)((uint64_t)L_43>>((int32_t)32)))&L_44));
		uint32_t* L_45 = V_6;
		uint64_t L_46 = V_12;
		uint64_t L_47 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint32_t L_48 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_46&(int64_t)L_47)),NULL));
		*(((int32_t*)L_45)) = ((int32_t)L_48);
		uint32_t* L_49 = V_5;
		V_5 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_49, 4));
		uint32_t* L_50 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_50, 4));
		uint32_t* L_51 = V_5;
		uint32_t* L_52 = V_7;
		if ((!(((uintptr_t)L_51) > ((uintptr_t)L_52))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_00b4;
	}

IL_00b0:
	{
		int32_t L_53 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_53, 1));
	}

IL_00b4:
	{
		int32_t L_54 = V_0;
		if ((((int32_t)L_54) <= ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_55 = ___0_pDividend;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_56 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_55->___m_blocks);
		uint32_t* L_57 = (uint32_t*)(&L_56->___FixedElementField);
		int32_t L_58 = V_0;
		intptr_t L_59 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_58, 1)),NULL));
		int32_t L_60 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(L_59, 4))))));
		if (!L_60)
		{
			goto IL_00b0;
		}
	}

IL_00cd:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_61 = ___0_pDividend;
		int32_t L_62 = V_0;
		L_61->___m_length = L_62;
	}

IL_00d4:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_63 = ___0_pDividend;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_64 = ___1_divisor;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_65;
		L_65 = BurstString_BigInt_Compare_m51FF09779D622DBD964086F559738DF85288EB28(L_63, L_64, NULL);
		if ((((int32_t)L_65) < ((int32_t)0)))
		{
			goto IL_0147;
		}
	}
	{
		uint32_t L_66 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, 1));
		uint32_t* L_67 = V_1;
		V_5 = L_67;
		uint32_t* L_68 = V_3;
		V_6 = L_68;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_13 = L_69;
	}

IL_00ee:
	{
		uint32_t* L_70 = V_6;
		int32_t L_71 = ((int32_t)*(L_70));
		uint64_t L_72 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_71,NULL));
		uint32_t* L_73 = V_5;
		int32_t L_74 = ((int32_t)*(L_73));
		uint64_t L_75 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_74,NULL));
		uint64_t L_76 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract((int64_t)L_72, (int64_t)L_75)), (int64_t)L_76));
		uint64_t L_77 = V_14;
		int64_t L_78 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_13 = ((int64_t)(((int64_t)((uint64_t)L_77>>((int32_t)32)))&L_78));
		uint32_t* L_79 = V_6;
		uint64_t L_80 = V_14;
		uint64_t L_81 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint32_t L_82 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_80&(int64_t)L_81)),NULL));
		*(((int32_t*)L_79)) = ((int32_t)L_82);
		uint32_t* L_83 = V_5;
		V_5 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_83, 4));
		uint32_t* L_84 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_84, 4));
		uint32_t* L_85 = V_5;
		uint32_t* L_86 = V_7;
		if ((!(((uintptr_t)L_85) > ((uintptr_t)L_86))))
		{
			goto IL_00ee;
		}
	}
	{
		goto IL_0127;
	}

IL_0123:
	{
		int32_t L_87 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_87, 1));
	}

IL_0127:
	{
		int32_t L_88 = V_0;
		if ((((int32_t)L_88) <= ((int32_t)0)))
		{
			goto IL_0140;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_89 = ___0_pDividend;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_90 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_89->___m_blocks);
		uint32_t* L_91 = (uint32_t*)(&L_90->___FixedElementField);
		int32_t L_92 = V_0;
		intptr_t L_93 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_92, 1)),NULL));
		int32_t L_94 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(L_93, 4))))));
		if (!L_94)
		{
			goto IL_0123;
		}
	}

IL_0140:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_95 = ___0_pDividend;
		int32_t L_96 = V_0;
		L_95->___m_length = L_96;
	}

IL_0147:
	{
		uint32_t L_97 = V_8;
		return L_97;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_BigInt_ShiftLeft_m489C694E212F5314D8B5B69E36984836FD9328A2 (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* ___0_pResult, uint32_t ___1_shift, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	uint32_t* V_5 = NULL;
	uint32_t* V_6 = NULL;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	{
		uint32_t L_0 = ___1_shift;
		V_0 = ((int32_t)((int32_t)L_0/((int32_t)32)));
		uint32_t L_1 = ___1_shift;
		V_1 = ((int32_t)((int32_t)L_1%((int32_t)32)));
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_2 = ___0_pResult;
		int32_t L_3 = L_2->___m_length;
		V_2 = L_3;
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0088;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_5 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_6 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_5->___m_blocks);
		uint32_t* L_7 = (uint32_t*)(&L_6->___FixedElementField);
		V_3 = L_7;
		uint32_t* L_8 = V_3;
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(L_8,NULL));
		V_4 = (uint32_t*)L_9;
		uint32_t* L_10 = V_4;
		int32_t L_11 = V_2;
		intptr_t L_12 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_11,NULL));
		V_5 = ((uint32_t*)il2cpp_codegen_subtract((intptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(L_12, 4)))), 4));
		uint32_t* L_13 = V_5;
		int32_t L_14 = V_0;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		V_6 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4))));
		goto IL_004c;
	}

IL_003a:
	{
		uint32_t* L_16 = V_6;
		uint32_t* L_17 = V_5;
		int32_t L_18 = ((int32_t)*(L_17));
		*(((int32_t*)L_16)) = L_18;
		uint32_t* L_19 = V_5;
		V_5 = ((uint32_t*)il2cpp_codegen_subtract((intptr_t)L_19, 4));
		uint32_t* L_20 = V_6;
		V_6 = ((uint32_t*)il2cpp_codegen_subtract((intptr_t)L_20, 4));
	}

IL_004c:
	{
		uint32_t* L_21 = V_5;
		uint32_t* L_22 = V_4;
		if ((!(((uintptr_t)L_21) < ((uintptr_t)L_22))))
		{
			goto IL_003a;
		}
	}
	{
		uintptr_t L_23 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (uint32_t*)L_23;
		V_7 = 0;
		goto IL_0075;
	}

IL_005a:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_24 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_25 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_24->___m_blocks);
		uint32_t* L_26 = (uint32_t*)(&L_25->___FixedElementField);
		uint32_t L_27 = V_7;
		uint64_t L_28 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_27,NULL));
		int64_t L_29 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply((int64_t)L_28, L_29)),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_26, L_30)))) = 0;
		uint32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, 1));
	}

IL_0075:
	{
		uint32_t L_32 = V_7;
		uint64_t L_33 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = V_0;
		int64_t L_35 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_34,NULL));
		if ((((int64_t)L_33) < ((int64_t)L_35)))
		{
			goto IL_005a;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_36 = ___0_pResult;
		int32_t* L_37 = (int32_t*)(&L_36->___m_length);
		int32_t* L_38 = L_37;
		int32_t L_39 = *(L_38);
		int32_t L_40 = V_0;
		*(L_38) = ((int32_t)il2cpp_codegen_add(L_39, L_40));
		return;
	}

IL_0088:
	{
		int32_t L_41 = V_2;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		V_9 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_44 = ___0_pResult;
		int32_t L_45 = V_9;
		L_44->___m_length = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_1;
		V_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_46));
		V_11 = 0;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_47 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_48 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_47->___m_blocks);
		uint32_t* L_49 = (uint32_t*)(&L_48->___FixedElementField);
		int32_t L_50 = V_8;
		intptr_t L_51 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_50,NULL));
		int32_t L_52 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(L_51, 4))))));
		V_12 = L_52;
		uint32_t L_53 = V_12;
		int32_t L_54 = V_10;
		V_13 = ((int32_t)((uint32_t)L_53>>((int32_t)(L_54&((int32_t)31)))));
		goto IL_010f;
	}

IL_00c5:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_55 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_56 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_55->___m_blocks);
		uint32_t* L_57 = (uint32_t*)(&L_56->___FixedElementField);
		int32_t L_58 = V_9;
		intptr_t L_59 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_58,NULL));
		uint32_t L_60 = V_11;
		uint32_t L_61 = V_13;
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(L_59, 4)))))) = ((int32_t)((int32_t)L_60|(int32_t)L_61));
		uint32_t L_62 = V_12;
		int32_t L_63 = V_1;
		V_11 = ((int32_t)((int32_t)L_62<<((int32_t)(L_63&((int32_t)31)))));
		int32_t L_64 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_64, 1));
		int32_t L_65 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_66 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_67 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_66->___m_blocks);
		uint32_t* L_68 = (uint32_t*)(&L_67->___FixedElementField);
		int32_t L_69 = V_8;
		intptr_t L_70 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_69,NULL));
		int32_t L_71 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(L_70, 4))))));
		V_12 = L_71;
		uint32_t L_72 = V_12;
		int32_t L_73 = V_10;
		V_13 = ((int32_t)((uint32_t)L_72>>((int32_t)(L_73&((int32_t)31)))));
	}

IL_010f:
	{
		int32_t L_74 = V_8;
		if ((((int32_t)L_74) > ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_75 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_76 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_75->___m_blocks);
		uint32_t* L_77 = (uint32_t*)(&L_76->___FixedElementField);
		int32_t L_78 = V_9;
		intptr_t L_79 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_78,NULL));
		uint32_t L_80 = V_11;
		uint32_t L_81 = V_13;
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(L_79, 4)))))) = ((int32_t)((int32_t)L_80|(int32_t)L_81));
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_82 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_83 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_82->___m_blocks);
		uint32_t* L_84 = (uint32_t*)(&L_83->___FixedElementField);
		int32_t L_85 = V_9;
		intptr_t L_86 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_85, 1)),NULL));
		uint32_t L_87 = V_12;
		int32_t L_88 = V_1;
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(L_86, 4)))))) = ((int32_t)((int32_t)L_87<<((int32_t)(L_88&((int32_t)31)))));
		V_14 = 0;
		goto IL_0166;
	}

IL_014b:
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_89 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_90 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_89->___m_blocks);
		uint32_t* L_91 = (uint32_t*)(&L_90->___FixedElementField);
		uint32_t L_92 = V_14;
		uint64_t L_93 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_92,NULL));
		int64_t L_94 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply((int64_t)L_93, L_94)),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_91, L_95)))) = 0;
		uint32_t L_96 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, 1));
	}

IL_0166:
	{
		uint32_t L_97 = V_14;
		uint64_t L_98 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_97,NULL));
		int32_t L_99 = V_0;
		int64_t L_100 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_99,NULL));
		if ((((int64_t)L_98) < ((int64_t)L_100)))
		{
			goto IL_014b;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_101 = ___0_pResult;
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_102 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&L_101->___m_blocks);
		uint32_t* L_103 = (uint32_t*)(&L_102->___FixedElementField);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_104 = ___0_pResult;
		int32_t L_105 = L_104->___m_length;
		intptr_t L_106 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_105, 1)),NULL));
		int32_t L_107 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(L_106, 4))))));
		if (L_107)
		{
			goto IL_0192;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_108 = ___0_pResult;
		int32_t* L_109 = (int32_t*)(&L_108->___m_length);
		int32_t* L_110 = L_109;
		int32_t L_111 = *(L_110);
		*(L_110) = ((int32_t)il2cpp_codegen_subtract(L_111, 1));
	}

IL_0192:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BurstString_Dragon4_m091C133A17E5B21A9EB2DBC20622F8E5086A6EA3 (uint64_t ___0_mantissa, int32_t ___1_exponent, uint32_t ___2_mantissaHighBitIdx, bool ___3_hasUnequalMargins, int32_t ___4_cutoffMode, int32_t ___5_cutoffNumber, uint8_t* ___6_pOutBuffer, uint32_t ___7_bufferSize, int32_t* ___8_pOutExponent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	uint8_t* V_0 = NULL;
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_1;
	memset((&V_1), 0, sizeof(V_1));
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_2;
	memset((&V_2), 0, sizeof(V_2));
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_3;
	memset((&V_3), 0, sizeof(V_3));
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* V_4 = NULL;
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	uint32_t V_11 = 0;
	bool V_12 = false;
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_13;
	memset((&V_13), 0, sizeof(V_13));
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_14;
	memset((&V_14), 0, sizeof(V_14));
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 V_20;
	memset((&V_20), 0, sizeof(V_20));
	{
		uint8_t* L_0 = ___6_pOutBuffer;
		V_0 = L_0;
		uint64_t L_1 = ___0_mantissa;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		uint8_t* L_2 = V_0;
		*(((int8_t*)L_2)) = ((int8_t)((int32_t)48));
		int32_t* L_3 = ___8_pOutExponent;
		*(L_3) = 0;
		return 1;
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666));
		il2cpp_codegen_initobj((&V_2), sizeof(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666));
		il2cpp_codegen_initobj((&V_3), sizeof(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666));
		il2cpp_codegen_initobj((&V_5), sizeof(tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666));
		bool L_4 = ___3_hasUnequalMargins;
		if (!L_4)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_5 = ___1_exponent;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_7 = ___0_mantissa;
		tBigInt_SetU64_mB70CDB2548ACA6D34813DBB052981C2543B3E04F((&V_2), ((int64_t)il2cpp_codegen_multiply(L_6, (int64_t)L_7)), NULL);
		int32_t L_8 = ___1_exponent;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_ShiftLeft_m489C694E212F5314D8B5B69E36984836FD9328A2((&V_2), L_8, NULL);
		tBigInt_SetU32_m4D9602134447021404805AC0A997A21434FC72BD((&V_1), 4, NULL);
		int32_t L_9 = ___1_exponent;
		BurstString_BigInt_Pow2_mE7E1C022FA22D59386F72FDAF14C867627009F20((&V_3), L_9, NULL);
		int32_t L_10 = ___1_exponent;
		BurstString_BigInt_Pow2_mE7E1C022FA22D59386F72FDAF14C867627009F20((&V_5), ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		goto IL_008c;
	}

IL_0066:
	{
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_12 = ___0_mantissa;
		tBigInt_SetU64_mB70CDB2548ACA6D34813DBB052981C2543B3E04F((&V_2), ((int64_t)il2cpp_codegen_multiply(L_11, (int64_t)L_12)), NULL);
		int32_t L_13 = ___1_exponent;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Pow2_mE7E1C022FA22D59386F72FDAF14C867627009F20((&V_1), ((int32_t)il2cpp_codegen_add(((-L_13)), 2)), NULL);
		tBigInt_SetU32_m4D9602134447021404805AC0A997A21434FC72BD((&V_3), 1, NULL);
		tBigInt_SetU32_m4D9602134447021404805AC0A997A21434FC72BD((&V_5), 2, NULL);
	}

IL_008c:
	{
		uintptr_t L_14 = (il2cpp_codegen_conv<uintptr_t,tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*,intptr_t,false,false>((&V_5),NULL));
		V_4 = (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_14;
		goto IL_00df;
	}

IL_0093:
	{
		int32_t L_15 = ___1_exponent;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_17 = ___0_mantissa;
		tBigInt_SetU64_mB70CDB2548ACA6D34813DBB052981C2543B3E04F((&V_2), ((int64_t)il2cpp_codegen_multiply(L_16, (int64_t)L_17)), NULL);
		int32_t L_18 = ___1_exponent;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_ShiftLeft_m489C694E212F5314D8B5B69E36984836FD9328A2((&V_2), L_18, NULL);
		tBigInt_SetU32_m4D9602134447021404805AC0A997A21434FC72BD((&V_1), 2, NULL);
		int32_t L_19 = ___1_exponent;
		BurstString_BigInt_Pow2_mE7E1C022FA22D59386F72FDAF14C867627009F20((&V_3), L_19, NULL);
		goto IL_00da;
	}

IL_00bc:
	{
		int64_t L_20 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_21 = ___0_mantissa;
		tBigInt_SetU64_mB70CDB2548ACA6D34813DBB052981C2543B3E04F((&V_2), ((int64_t)il2cpp_codegen_multiply(L_20, (int64_t)L_21)), NULL);
		int32_t L_22 = ___1_exponent;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Pow2_mE7E1C022FA22D59386F72FDAF14C867627009F20((&V_1), ((int32_t)il2cpp_codegen_add(((-L_22)), 1)), NULL);
		tBigInt_SetU32_m4D9602134447021404805AC0A997A21434FC72BD((&V_3), 1, NULL);
	}

IL_00da:
	{
		uintptr_t L_23 = (il2cpp_codegen_conv<uintptr_t,tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*,intptr_t,false,false>((&V_3),NULL));
		V_4 = (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_23;
	}

IL_00df:
	{
		uint32_t L_24 = ___2_mantissaHighBitIdx;
		int32_t L_25 = ___1_exponent;
		double L_26 = (il2cpp_codegen_conv<double,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_24, L_25)),NULL));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		double L_27;
		L_27 = ceil(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_26, (0.3010299956639812))), (0.68999999999999995))));
		int32_t L_28 = (il2cpp_codegen_conv<int32_t,double,double,false,false>(L_27,NULL));
		V_6 = L_28;
		int32_t L_29 = ___4_cutoffMode;
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_30 = V_6;
		int32_t L_31 = ___5_cutoffNumber;
		if ((((int32_t)L_30) > ((int32_t)((-L_31)))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_32 = ___5_cutoffNumber;
		V_6 = ((int32_t)il2cpp_codegen_add(((-L_32)), 1));
	}

IL_0112:
	{
		int32_t L_33 = V_6;
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_34 = V_6;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_MultiplyPow10_m62128BDA4DC9C83FC01825C74BE1FE01CF752638((&V_13), (&V_1), L_34, NULL);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_35 = V_13;
		V_1 = L_35;
		goto IL_0162;
	}

IL_0127:
	{
		int32_t L_36 = V_6;
		if ((((int32_t)L_36) >= ((int32_t)0)))
		{
			goto IL_0162;
		}
	}
	{
		int32_t L_37 = V_6;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Pow10_mA03054009A2CF454BB3C0D1E9F1B6472FB7401A8((&V_14), ((-L_37)), NULL);
		BurstString_BigInt_Multiply_m35A2F6E44C81B11FDD3FCD17C42469FBFB5648F9((&V_15), (&V_2), (&V_14), NULL);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_38 = V_15;
		V_2 = L_38;
		BurstString_BigInt_Multiply_m35A2F6E44C81B11FDD3FCD17C42469FBFB5648F9((&V_15), (&V_3), (&V_14), NULL);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666 L_39 = V_15;
		V_3 = L_39;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_40 = V_4;
		uintptr_t L_41 = (il2cpp_codegen_conv<uintptr_t,tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*,intptr_t,false,false>((&V_3),NULL));
		if ((((intptr_t)L_40) == ((intptr_t)L_41)))
		{
			goto IL_0162;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_42 = V_4;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Multiply2_m5B20533EC78BBECD044C1235B96284A39CD3D963((tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_42, (&V_3), NULL);
	}

IL_0162:
	{
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_43;
		L_43 = BurstString_BigInt_Compare_m51FF09779D622DBD964086F559738DF85288EB28((&V_2), (&V_1), NULL);
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_0176;
		}
	}
	{
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0194;
	}

IL_0176:
	{
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Multiply10_m6F3551E6309E09E3B00078890D95F2A007F124CD((&V_2), NULL);
		BurstString_BigInt_Multiply10_m6F3551E6309E09E3B00078890D95F2A007F124CD((&V_3), NULL);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_45 = V_4;
		uintptr_t L_46 = (il2cpp_codegen_conv<uintptr_t,tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*,intptr_t,false,false>((&V_3),NULL));
		if ((((intptr_t)L_45) == ((intptr_t)L_46)))
		{
			goto IL_0194;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_47 = V_4;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Multiply2_m5B20533EC78BBECD044C1235B96284A39CD3D963((tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_47, (&V_3), NULL);
	}

IL_0194:
	{
		int32_t L_48 = V_6;
		uint32_t L_49 = ___7_bufferSize;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_48, (int32_t)L_49));
		int32_t L_50 = ___5_cutoffNumber;
		if ((((int32_t)L_50) == ((int32_t)(-1))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_51 = ___4_cutoffMode;
		switch (L_51)
		{
			case 0:
			{
				goto IL_01d7;
			}
			case 1:
			{
				goto IL_01b5;
			}
			case 2:
			{
				goto IL_01c8;
			}
		}
	}
	{
		goto IL_01d7;
	}

IL_01b5:
	{
		int32_t L_52 = V_6;
		int32_t L_53 = ___5_cutoffNumber;
		V_16 = ((int32_t)il2cpp_codegen_subtract(L_52, L_53));
		int32_t L_54 = V_16;
		int32_t L_55 = V_7;
		if ((((int32_t)L_54) <= ((int32_t)L_55)))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_56 = V_16;
		V_7 = L_56;
		goto IL_01d7;
	}

IL_01c8:
	{
		int32_t L_57 = ___5_cutoffNumber;
		V_17 = ((-L_57));
		int32_t L_58 = V_17;
		int32_t L_59 = V_7;
		if ((((int32_t)L_58) <= ((int32_t)L_59)))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_60 = V_17;
		V_7 = L_60;
	}

IL_01d7:
	{
		int32_t* L_61 = ___8_pOutExponent;
		int32_t L_62 = V_6;
		*(L_61) = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
		int32_t L_63;
		L_63 = tBigInt_GetLength_m9CF9FA5B315E8FAD667F8CD49C46F5247E91AEEE_inline((&V_1), NULL);
		uint32_t L_64;
		L_64 = tBigInt_GetBlock_mEEA4E3FA63A0811DD4A756FF6E60ABC5B4F9FFBE((&V_1), ((int32_t)il2cpp_codegen_subtract(L_63, 1)), NULL);
		V_8 = L_64;
		uint32_t L_65 = V_8;
		if ((!(((uint32_t)L_65) >= ((uint32_t)8))))
		{
			goto IL_01fe;
		}
	}
	{
		uint32_t L_66 = V_8;
		if ((!(((uint32_t)L_66) > ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_023c;
		}
	}

IL_01fe:
	{
		uint32_t L_67 = V_8;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_68;
		L_68 = BurstString_LogBase2_m2F319D1D37390348D8304E3DEBBD4530FC8871B0(L_67, NULL);
		V_18 = L_68;
		uint32_t L_69 = V_18;
		V_19 = ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)59), (int32_t)L_69))%(uint32_t)(int32_t)((int32_t)32)));
		uint32_t L_70 = V_19;
		BurstString_BigInt_ShiftLeft_m489C694E212F5314D8B5B69E36984836FD9328A2((&V_1), L_70, NULL);
		uint32_t L_71 = V_19;
		BurstString_BigInt_ShiftLeft_m489C694E212F5314D8B5B69E36984836FD9328A2((&V_2), L_71, NULL);
		uint32_t L_72 = V_19;
		BurstString_BigInt_ShiftLeft_m489C694E212F5314D8B5B69E36984836FD9328A2((&V_3), L_72, NULL);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_73 = V_4;
		uintptr_t L_74 = (il2cpp_codegen_conv<uintptr_t,tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*,intptr_t,false,false>((&V_3),NULL));
		if ((((intptr_t)L_73) == ((intptr_t)L_74)))
		{
			goto IL_023c;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_75 = V_4;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Multiply2_m5B20533EC78BBECD044C1235B96284A39CD3D963((tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_75, (&V_3), NULL);
	}

IL_023c:
	{
		int32_t L_76 = ___4_cutoffMode;
		if (!L_76)
		{
			goto IL_0245;
		}
	}
	{
		int32_t L_77 = ___5_cutoffNumber;
		if ((!(((uint32_t)L_77) == ((uint32_t)(-1)))))
		{
			goto IL_02b7;
		}
	}

IL_0245:
	{
		int32_t L_78 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_78, 1));
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_79;
		L_79 = BurstString_BigInt_DivideWithRemainder_MaxQuotient9_m7FDF6B0A7B6E523A708B24BD1A9C489B57AC2696((&V_2), (&V_1), NULL);
		V_11 = L_79;
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_80 = V_4;
		BurstString_BigInt_Add_mF652852521D74DAB4F1AC5D011EA2C00CB99A7EA((&V_20), (&V_2), (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_80, NULL);
		int32_t L_81;
		L_81 = BurstString_BigInt_Compare_m51FF09779D622DBD964086F559738DF85288EB28((&V_2), (&V_3), NULL);
		V_9 = (bool)((((int32_t)L_81) < ((int32_t)0))? 1 : 0);
		int32_t L_82;
		L_82 = BurstString_BigInt_Compare_m51FF09779D622DBD964086F559738DF85288EB28((&V_20), (&V_1), NULL);
		V_10 = (bool)((((int32_t)L_82) > ((int32_t)0))? 1 : 0);
		bool L_83 = V_9;
		bool L_84 = V_10;
		int32_t L_85 = V_6;
		int32_t L_86 = V_7;
		if (((int32_t)(((int32_t)((int32_t)L_83|(int32_t)L_84))|((((int32_t)L_85) == ((int32_t)L_86))? 1 : 0))))
		{
			goto IL_02f3;
		}
	}
	{
		uint8_t* L_87 = V_0;
		uint32_t L_88 = V_11;
		uint8_t L_89 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_88)),NULL));
		*(((int8_t*)L_87)) = ((int8_t)L_89);
		uint8_t* L_90 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_90, 1));
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Multiply10_m6F3551E6309E09E3B00078890D95F2A007F124CD((&V_2), NULL);
		BurstString_BigInt_Multiply10_m6F3551E6309E09E3B00078890D95F2A007F124CD((&V_3), NULL);
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_91 = V_4;
		uintptr_t L_92 = (il2cpp_codegen_conv<uintptr_t,tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*,intptr_t,false,false>((&V_3),NULL));
		if ((((intptr_t)L_91) == ((intptr_t)L_92)))
		{
			goto IL_0245;
		}
	}
	{
		tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* L_93 = V_4;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Multiply2_m5B20533EC78BBECD044C1235B96284A39CD3D963((tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666*)L_93, (&V_3), NULL);
		goto IL_0245;
	}

IL_02b7:
	{
		V_9 = (bool)0;
		V_10 = (bool)0;
	}

IL_02bd:
	{
		int32_t L_94 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_94, 1));
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_95;
		L_95 = BurstString_BigInt_DivideWithRemainder_MaxQuotient9_m7FDF6B0A7B6E523A708B24BD1A9C489B57AC2696((&V_2), (&V_1), NULL);
		V_11 = L_95;
		bool L_96;
		L_96 = tBigInt_IsZero_mAC36C0DBF9226593F546E3D5941507796262C3CA((&V_2), NULL);
		int32_t L_97 = V_6;
		int32_t L_98 = V_7;
		if (((int32_t)((int32_t)L_96|((((int32_t)L_97) == ((int32_t)L_98))? 1 : 0))))
		{
			goto IL_02f3;
		}
	}
	{
		uint8_t* L_99 = V_0;
		uint32_t L_100 = V_11;
		uint8_t L_101 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_100)),NULL));
		*(((int8_t*)L_99)) = ((int8_t)L_101);
		uint8_t* L_102 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_102, 1));
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Multiply10_m6F3551E6309E09E3B00078890D95F2A007F124CD((&V_2), NULL);
		goto IL_02bd;
	}

IL_02f3:
	{
		bool L_103 = V_9;
		V_12 = L_103;
		bool L_104 = V_9;
		bool L_105 = V_10;
		if ((!(((uint32_t)L_104) == ((uint32_t)L_105))))
		{
			goto IL_031e;
		}
	}
	{
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_BigInt_Multiply2_m29F699BF3248269DB8FEEDC89CA57C1FFEBB95B5((&V_2), NULL);
		int32_t L_106;
		L_106 = BurstString_BigInt_Compare_m51FF09779D622DBD964086F559738DF85288EB28((&V_2), (&V_1), NULL);
		int32_t L_107 = L_106;
		V_12 = (bool)((((int32_t)L_107) < ((int32_t)0))? 1 : 0);
		if (L_107)
		{
			goto IL_031e;
		}
	}
	{
		uint32_t L_108 = V_11;
		V_12 = (bool)((((int32_t)((int32_t)((int32_t)L_108&1))) == ((int32_t)0))? 1 : 0);
	}

IL_031e:
	{
		bool L_109 = V_12;
		if (!L_109)
		{
			goto IL_0330;
		}
	}
	{
		uint8_t* L_110 = V_0;
		uint32_t L_111 = V_11;
		uint8_t L_112 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_111)),NULL));
		*(((int8_t*)L_110)) = ((int8_t)L_112);
		uint8_t* L_113 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_113, 1));
		goto IL_0372;
	}

IL_0330:
	{
		uint32_t L_114 = V_11;
		if ((!(((uint32_t)L_114) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0364;
		}
	}

IL_0336:
	{
		uint8_t* L_115 = V_0;
		uint8_t* L_116 = ___6_pOutBuffer;
		if ((!(((uintptr_t)L_115) == ((uintptr_t)L_116))))
		{
			goto IL_034d;
		}
	}
	{
		uint8_t* L_117 = V_0;
		*(((int8_t*)L_117)) = ((int8_t)((int32_t)49));
		uint8_t* L_118 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_118, 1));
		int32_t* L_119 = ___8_pOutExponent;
		int32_t* L_120 = ___8_pOutExponent;
		int32_t L_121 = *(L_120);
		*(L_119) = ((int32_t)il2cpp_codegen_add(L_121, 1));
		goto IL_0372;
	}

IL_034d:
	{
		uint8_t* L_122 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_122, 1));
		uint8_t* L_123 = V_0;
		int32_t L_124 = ((int32_t)*(L_123));
		if ((((int32_t)L_124) == ((int32_t)((int32_t)57))))
		{
			goto IL_0336;
		}
	}
	{
		uint8_t* L_125 = V_0;
		uint8_t* L_126 = L_125;
		int32_t L_127 = ((int32_t)*(L_126));
		uint8_t L_128 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_127, 1)),NULL));
		*(((int8_t*)L_126)) = ((int8_t)L_128);
		uint8_t* L_129 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_129, 1));
		goto IL_0372;
	}

IL_0364:
	{
		uint8_t* L_130 = V_0;
		uint32_t L_131 = V_11;
		uint8_t L_132 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)48), (int32_t)L_131)), 1)),NULL));
		*(((int8_t*)L_130)) = ((int8_t)L_132);
		uint8_t* L_133 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_133, 1));
	}

IL_0372:
	{
		uint8_t* L_134 = V_0;
		uint8_t* L_135 = ___6_pOutBuffer;
		int64_t L_136 = (il2cpp_codegen_conv<int64_t,uint8_t*,intptr_t,false,false>(((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_134, (intptr_t)L_135))/1)),NULL));
		uint32_t L_137 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(L_136,NULL));
		return L_137;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString_FormatInfinityNaN_m324356348BA55FAC5C833820C942963C5CA8BEA6 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, uint64_t ___3_mantissa, bool ___4_isNegative, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___5_formatOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0 = ___3_mantissa;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 3;
		goto IL_000d;
	}

IL_0006:
	{
		bool L_1 = ___4_isNegative;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(8, ((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0)));
	}

IL_000d:
	{
		V_0 = G_B3_0;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_2 = ___5_formatOptions;
		int8_t L_3 = L_2.___AlignAndSize;
		V_1 = L_3;
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t L_6 = ___2_destLength;
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_9;
		L_9 = BurstString_AlignLeft_m8755645187490C1854F69EB038155B6613E36797(L_4, L_5, L_6, L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		uint64_t L_10 = ___3_mantissa;
		if (L_10)
		{
			goto IL_0065;
		}
	}
	{
		bool L_11 = ___4_isNegative;
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_12 = ___1_destIndex;
		int32_t L_13 = *(L_12);
		int32_t L_14 = ___2_destLength;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}

IL_0030:
	{
		uint8_t* L_15 = ___0_dest;
		int32_t* L_16 = ___1_destIndex;
		int32_t* L_17 = ___1_destIndex;
		int32_t L_18 = *(L_17);
		V_2 = L_18;
		int32_t L_19 = V_2;
		*(L_16) = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_2;
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_20)))) = ((int8_t)((int32_t)45));
	}

IL_003e:
	{
		V_3 = 0;
		goto IL_005f;
	}

IL_0042:
	{
		int32_t* L_21 = ___1_destIndex;
		int32_t L_22 = *(L_21);
		int32_t L_23 = ___2_destLength;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}

IL_0048:
	{
		uint8_t* L_24 = ___0_dest;
		int32_t* L_25 = ___1_destIndex;
		int32_t* L_26 = ___1_destIndex;
		int32_t L_27 = *(L_26);
		V_2 = L_27;
		int32_t L_28 = V_2;
		*(L_25) = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_2;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___InfinityString;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, L_29)))) = ((int8_t)L_33);
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_005f:
	{
		int32_t L_35 = V_3;
		if ((((int32_t)L_35) < ((int32_t)8)))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_008f;
	}

IL_0065:
	{
		V_4 = 0;
		goto IL_008a;
	}

IL_006a:
	{
		int32_t* L_36 = ___1_destIndex;
		int32_t L_37 = *(L_36);
		int32_t L_38 = ___2_destLength;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}

IL_0070:
	{
		uint8_t* L_39 = ___0_dest;
		int32_t* L_40 = ___1_destIndex;
		int32_t* L_41 = ___1_destIndex;
		int32_t L_42 = *(L_41);
		V_2 = L_42;
		int32_t L_43 = V_2;
		*(L_40) = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_2;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___NanString;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, L_44)))) = ((int8_t)L_48);
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_008a:
	{
		int32_t L_50 = V_4;
		if ((((int32_t)L_50) < ((int32_t)3)))
		{
			goto IL_006a;
		}
	}

IL_008f:
	{
		uint8_t* L_51 = ___0_dest;
		int32_t* L_52 = ___1_destIndex;
		int32_t L_53 = ___2_destLength;
		int32_t L_54 = V_1;
		int32_t L_55 = V_0;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_56;
		L_56 = BurstString_AlignRight_m09C1074FFBBD1B87C86CA0F6F12A9230C96DB712(L_51, L_52, L_53, L_54, L_55, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertFloatToString_mAE985C11AB2384510261E959CD5F267AF19E088D (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, float ___3_value, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___4_formatOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	tFloatUnion32_t6A4A5EBD771045CFEDBFD3F71EFF400FFABEB20D V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint8_t* V_9 = NULL;
	NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441 V_10;
	memset((&V_10), 0, sizeof(V_10));
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(tFloatUnion32_t6A4A5EBD771045CFEDBFD3F71EFF400FFABEB20D));
		float L_0 = ___3_value;
		(&V_0)->___m_floatingPoint = L_0;
		uint32_t L_1;
		L_1 = tFloatUnion32_GetExponent_m3AAEFA1D21C5717F966030AEFC15063525AF42E9((&V_0), NULL);
		V_1 = L_1;
		uint32_t L_2;
		L_2 = tFloatUnion32_GetMantissa_m1CEA25E915CB7F02D0A515723DCAA9132F4F75CD((&V_0), NULL);
		V_2 = L_2;
		uint32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_003c;
		}
	}
	{
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t L_6 = ___2_destLength;
		uint32_t L_7 = V_2;
		uint64_t L_8 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_7,NULL));
		bool L_9;
		L_9 = tFloatUnion32_IsNegative_m93A3A3E68562946329E3409AA850BA29AACA6F91((&V_0), NULL);
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_10 = ___4_formatOptions;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_FormatInfinityNaN_m324356348BA55FAC5C833820C942963C5CA8BEA6(L_4, L_5, L_6, L_8, L_9, L_10, NULL);
		return;
	}

IL_003c:
	{
		uint32_t L_11 = V_1;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		int64_t L_12 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)8388608),NULL));
		uint32_t L_13 = V_2;
		uint64_t L_14 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)(L_12|(int64_t)L_14)),NULL));
		V_3 = L_15;
		uint32_t L_16 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, ((int32_t)127))), ((int32_t)23)));
		V_5 = ((int32_t)23);
		uint32_t L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		uint32_t L_18 = V_2;
		G_B6_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B6_0 = 0;
	}

IL_0062:
	{
		V_6 = (bool)G_B6_0;
		goto IL_007a;
	}

IL_0066:
	{
		uint32_t L_19 = V_2;
		V_3 = L_19;
		V_4 = ((int32_t)-149);
		uint32_t L_20 = V_3;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_21;
		L_21 = BurstString_LogBase2_m2F319D1D37390348D8304E3DEBBD4530FC8871B0(L_20, NULL);
		V_5 = L_21;
		V_6 = (bool)0;
	}

IL_007a:
	{
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_22 = ___4_formatOptions;
		uint8_t L_23 = L_22.___Specifier;
		if (!L_23)
		{
			goto IL_008c;
		}
	}
	{
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_24 = ___4_formatOptions;
		uint8_t L_25 = L_24.___Specifier;
		G_B11_0 = ((int32_t)(L_25));
		goto IL_008d;
	}

IL_008c:
	{
		G_B11_0 = (-1);
	}

IL_008d:
	{
		V_7 = G_B11_0;
		int32_t L_26 = V_7;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_27;
		L_27 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)10), ((int32_t)il2cpp_codegen_add(L_26, 1)), NULL);
		V_8 = L_27;
		int32_t L_28 = V_8;
		uintptr_t L_29 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		uintptr_t L_30 = L_29;
		int8_t* L_31;
		if (L_30 == 0)
		{
			L_31 = NULL;
		}
		else
		{
			L_31 = (int8_t*)alloca(L_30);
			memset(L_31, 0, L_30);
		}
		V_9 = (uint8_t*)L_31;
		uint8_t* L_32 = V_9;
		int32_t L_33 = V_8;
		bool L_34;
		L_34 = tFloatUnion32_IsNegative_m93A3A3E68562946329E3409AA850BA29AACA6F91((&V_0), NULL);
		NumberBuffer__ctor_mC6C15EBB2ACB2878357EF1E3F851F3E78BDA3960((&V_10), 1, L_32, L_33, (-1), L_34, NULL);
		uint32_t L_35 = V_3;
		uint64_t L_36 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_35,NULL));
		int32_t L_37 = V_4;
		uint32_t L_38 = V_5;
		bool L_39 = V_6;
		int32_t L_40 = V_7;
		uint8_t* L_41 = V_9;
		int32_t L_42 = V_8;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_43;
		L_43 = BurstString_Dragon4_m091C133A17E5B21A9EB2DBC20622F8E5086A6EA3(L_36, L_37, L_38, L_39, 1, L_40, L_41, ((int32_t)il2cpp_codegen_subtract(L_42, 1)), (&V_12), NULL);
		V_11 = L_43;
		uint8_t* L_44 = V_9;
		uint32_t L_45 = V_11;
		uintptr_t L_46 = (il2cpp_codegen_conv<uintptr_t,uint32_t,int32_t,false,false>(L_45,NULL));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, (intptr_t)L_46)))) = ((int8_t)0);
		uint32_t L_47 = V_11;
		(&V_10)->___DigitsCount = (int32_t)L_47;
		int32_t L_48 = V_12;
		(&V_10)->___Scale = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_7;
		if ((!(((uint32_t)L_49) == ((uint32_t)(-1)))))
		{
			goto IL_0102;
		}
	}
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441 L_50 = V_10;
		int32_t L_51 = L_50.___DigitsCount;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_52;
		L_52 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_51, ((int32_t)9), NULL);
		V_7 = L_52;
	}

IL_0102:
	{
		uint8_t* L_53 = ___0_dest;
		int32_t* L_54 = ___1_destIndex;
		int32_t L_55 = ___2_destLength;
		int32_t L_56 = V_7;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_57 = ___4_formatOptions;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_FormatNumber_m6C8D8E03586FCB9F31E36AFA63E054967F7BFC55(L_53, L_54, L_55, (&V_10), L_56, L_57, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BurstString_ConvertDoubleToString_mEB2CBC122A76752E9FCA3F8AD8CA898E5761EBE1 (uint8_t* ___0_dest, int32_t* ___1_destIndex, int32_t ___2_destLength, double ___3_value, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 ___4_formatOptions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit);
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	tFloatUnion64_tA7225EDB3329B2675933FD7846A30A1F1F349D76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint8_t* V_9 = NULL;
	NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441 V_10;
	memset((&V_10), 0, sizeof(V_10));
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(tFloatUnion64_tA7225EDB3329B2675933FD7846A30A1F1F349D76));
		double L_0 = ___3_value;
		(&V_0)->___m_floatingPoint = L_0;
		uint32_t L_1;
		L_1 = tFloatUnion64_GetExponent_mCC698D7208E9D37AC0E1E62637F30B2064CF89E0((&V_0), NULL);
		V_1 = L_1;
		uint64_t L_2;
		L_2 = tFloatUnion64_GetMantissa_m791F84BAA61B441557571CE0777ABDA4F41560C7((&V_0), NULL);
		V_2 = L_2;
		uint32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)2047)))))
		{
			goto IL_003b;
		}
	}
	{
		uint8_t* L_4 = ___0_dest;
		int32_t* L_5 = ___1_destIndex;
		int32_t L_6 = ___2_destLength;
		uint64_t L_7 = V_2;
		bool L_8;
		L_8 = tFloatUnion64_IsNegative_m8993D4E9E29452CC44946CA1E109974C920702CD((&V_0), NULL);
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_9 = ___4_formatOptions;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_FormatInfinityNaN_m324356348BA55FAC5C833820C942963C5CA8BEA6(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		return;
	}

IL_003b:
	{
		uint32_t L_10 = V_1;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		uint64_t L_11 = V_2;
		V_3 = ((int64_t)(((int64_t)4503599627370496LL)|(int64_t)L_11));
		uint32_t L_12 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, ((int32_t)1023))), ((int32_t)52)));
		V_5 = ((int32_t)52);
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		uint64_t L_14 = V_2;
		int64_t L_15 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		G_B6_0 = ((((int64_t)L_14) == ((int64_t)L_15))? 1 : 0);
		goto IL_0066;
	}

IL_0065:
	{
		G_B6_0 = 0;
	}

IL_0066:
	{
		V_6 = (bool)G_B6_0;
		goto IL_007f;
	}

IL_006a:
	{
		uint64_t L_16 = V_2;
		V_3 = L_16;
		V_4 = ((int32_t)-1074);
		uint64_t L_17 = V_3;
		uint32_t L_18 = (il2cpp_codegen_conv<uint32_t,uint64_t,int64_t,false,false>(L_17,NULL));
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_19;
		L_19 = BurstString_LogBase2_m2F319D1D37390348D8304E3DEBBD4530FC8871B0(L_18, NULL);
		V_5 = L_19;
		V_6 = (bool)0;
	}

IL_007f:
	{
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_20 = ___4_formatOptions;
		uint8_t L_21 = L_20.___Specifier;
		if (!L_21)
		{
			goto IL_0091;
		}
	}
	{
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_22 = ___4_formatOptions;
		uint8_t L_23 = L_22.___Specifier;
		G_B11_0 = ((int32_t)(L_23));
		goto IL_0092;
	}

IL_0091:
	{
		G_B11_0 = (-1);
	}

IL_0092:
	{
		V_7 = G_B11_0;
		int32_t L_24 = V_7;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_25;
		L_25 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)18), ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		V_8 = L_25;
		int32_t L_26 = V_8;
		uintptr_t L_27 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_26,NULL));
		uintptr_t L_28 = L_27;
		int8_t* L_29;
		if (L_28 == 0)
		{
			L_29 = NULL;
		}
		else
		{
			L_29 = (int8_t*)alloca(L_28);
			memset(L_29, 0, L_28);
		}
		V_9 = (uint8_t*)L_29;
		uint8_t* L_30 = V_9;
		int32_t L_31 = V_8;
		bool L_32;
		L_32 = tFloatUnion64_IsNegative_m8993D4E9E29452CC44946CA1E109974C920702CD((&V_0), NULL);
		NumberBuffer__ctor_mC6C15EBB2ACB2878357EF1E3F851F3E78BDA3960((&V_10), 1, L_30, L_31, (-1), L_32, NULL);
		uint64_t L_33 = V_3;
		int32_t L_34 = V_4;
		uint32_t L_35 = V_5;
		bool L_36 = V_6;
		int32_t L_37 = V_7;
		uint8_t* L_38 = V_9;
		int32_t L_39 = V_8;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_40;
		L_40 = BurstString_Dragon4_m091C133A17E5B21A9EB2DBC20622F8E5086A6EA3(L_33, L_34, L_35, L_36, 1, L_37, L_38, ((int32_t)il2cpp_codegen_subtract(L_39, 1)), (&V_12), NULL);
		V_11 = L_40;
		uint8_t* L_41 = V_9;
		uint32_t L_42 = V_11;
		uintptr_t L_43 = (il2cpp_codegen_conv<uintptr_t,uint32_t,int32_t,false,false>(L_42,NULL));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_41, (intptr_t)L_43)))) = ((int8_t)0);
		uint32_t L_44 = V_11;
		(&V_10)->___DigitsCount = (int32_t)L_44;
		int32_t L_45 = V_12;
		(&V_10)->___Scale = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_7;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_0106;
		}
	}
	{
		NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441 L_47 = V_10;
		int32_t L_48 = L_47.___DigitsCount;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_49;
		L_49 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_48, ((int32_t)17), NULL);
		V_7 = L_49;
	}

IL_0106:
	{
		uint8_t* L_50 = ___0_dest;
		int32_t* L_51 = ___1_destIndex;
		int32_t L_52 = ___2_destLength;
		int32_t L_53 = V_7;
		FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18 L_54 = ___4_formatOptions;
		CHECKED_LOCAL_INIT(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticInit,(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BurstString_FormatNumber_m6C8D8E03586FCB9F31E36AFA63E054967F7BFC55(L_50, L_51, L_52, (&V_10), L_53, L_54, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstString__cctor_m636725A2FB7B2025023B601F39A8208F952A0375 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____07DB995E8ED2CFB0AB71EBA69F3A3EC07D5C6AC10C0C64F33E94ED2949B348AA_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____C69994AC61B52FBCEA582D6CCCD595C12E00BDB18F0C6F593FB6B393CAEDB08C_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____D0067CAD9A63E0813759A2BB841051CA73570C0DA2E08E840A8EB45DB6A7A010_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____D5B592C05DC25B5032553F1B27F4139BE95E881F73DB33B02B05AB20C3F9981E_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___SplitByColon = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___SplitByColon), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		Il2CppFieldRvaData L_4 = {U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____07DB995E8ED2CFB0AB71EBA69F3A3EC07D5C6AC10C0C64F33E94ED2949B348AA_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D256_t2F059CDE66879491232692D95A3D1F1CC6AC8217)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_3, L_4);
		((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___logTable = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___logTable), (void*)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5;
		Il2CppFieldRvaData L_7 = {U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____C69994AC61B52FBCEA582D6CCCD595C12E00BDB18F0C6F593FB6B393CAEDB08C_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D32_tA97B7CA441E8AEDCD9F92D4A8C638C449A1ADEBE)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_6, L_7);
		((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___g_PowerOf10_U32 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___g_PowerOf10_U32), (void*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		Il2CppFieldRvaData L_10 = {U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____D0067CAD9A63E0813759A2BB841051CA73570C0DA2E08E840A8EB45DB6A7A010_RVAStorage, sizeof(int64_t)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_9, L_10);
		((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___InfinityString = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___InfinityString), (void*)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11;
		Il2CppFieldRvaData L_13 = {U3CPrivateImplementationDetailsU3E_tD8EBCEC13C7BE50B02F5DEB27FF31F67DB439523_StaticFields____D5B592C05DC25B5032553F1B27F4139BE95E881F73DB33B02B05AB20C3F9981E_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D3_t645ACEC6D3386F4061F03D61C7248557EA49769D)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_12, L_13);
		((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___NanString = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_StaticFields*)il2cpp_codegen_static_fields_for(BurstString_t7CAFF75B4DCFED6F041EB72DF140A7F05737EB67_il2cpp_TypeInfo_var))->___NanString), (void*)L_12);
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
IL2CPP_EXTERN_C void NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshal_pinvoke(const NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441& unmarshaled, NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshaled_pinvoke& marshaled)
{
	marshaled.____buffer = unmarshaled.____buffer;
	marshaled.___Kind = unmarshaled.___Kind;
	marshaled.___DigitsCount = unmarshaled.___DigitsCount;
	marshaled.___Scale = unmarshaled.___Scale;
	marshaled.___IsNegative = static_cast<int32_t>(unmarshaled.___IsNegative);
}
IL2CPP_EXTERN_C void NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshal_pinvoke_back(const NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshaled_pinvoke& marshaled, NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441& unmarshaled)
{
	unmarshaled.____buffer = marshaled.____buffer;
	int32_t unmarshaledKind_temp_1 = 0;
	unmarshaledKind_temp_1 = marshaled.___Kind;
	unmarshaled.___Kind = unmarshaledKind_temp_1;
	int32_t unmarshaledDigitsCount_temp_2 = 0;
	unmarshaledDigitsCount_temp_2 = marshaled.___DigitsCount;
	unmarshaled.___DigitsCount = unmarshaledDigitsCount_temp_2;
	int32_t unmarshaledScale_temp_3 = 0;
	unmarshaledScale_temp_3 = marshaled.___Scale;
	unmarshaled.___Scale = unmarshaledScale_temp_3;
	bool unmarshaledIsNegative_temp_4 = false;
	unmarshaledIsNegative_temp_4 = static_cast<bool>(marshaled.___IsNegative);
	unmarshaled.___IsNegative = unmarshaledIsNegative_temp_4;
}
IL2CPP_EXTERN_C void NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshal_pinvoke_cleanup(NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshal_com(const NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441& unmarshaled, NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshaled_com& marshaled)
{
	marshaled.____buffer = unmarshaled.____buffer;
	marshaled.___Kind = unmarshaled.___Kind;
	marshaled.___DigitsCount = unmarshaled.___DigitsCount;
	marshaled.___Scale = unmarshaled.___Scale;
	marshaled.___IsNegative = static_cast<int32_t>(unmarshaled.___IsNegative);
}
IL2CPP_EXTERN_C void NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshal_com_back(const NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshaled_com& marshaled, NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441& unmarshaled)
{
	unmarshaled.____buffer = marshaled.____buffer;
	int32_t unmarshaledKind_temp_1 = 0;
	unmarshaledKind_temp_1 = marshaled.___Kind;
	unmarshaled.___Kind = unmarshaledKind_temp_1;
	int32_t unmarshaledDigitsCount_temp_2 = 0;
	unmarshaledDigitsCount_temp_2 = marshaled.___DigitsCount;
	unmarshaled.___DigitsCount = unmarshaledDigitsCount_temp_2;
	int32_t unmarshaledScale_temp_3 = 0;
	unmarshaledScale_temp_3 = marshaled.___Scale;
	unmarshaled.___Scale = unmarshaledScale_temp_3;
	bool unmarshaledIsNegative_temp_4 = false;
	unmarshaledIsNegative_temp_4 = static_cast<bool>(marshaled.___IsNegative);
	unmarshaled.___IsNegative = unmarshaledIsNegative_temp_4;
}
IL2CPP_EXTERN_C void NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshal_com_cleanup(NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberBuffer__ctor_mC6C15EBB2ACB2878357EF1E3F851F3E78BDA3960 (NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* __this, int32_t ___0_kind, uint8_t* ___1_buffer, int32_t ___2_digitsCount, int32_t ___3_scale, bool ___4_isNegative, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_kind;
		__this->___Kind = L_0;
		uint8_t* L_1 = ___1_buffer;
		__this->____buffer = L_1;
		int32_t L_2 = ___2_digitsCount;
		__this->___DigitsCount = L_2;
		int32_t L_3 = ___3_scale;
		__this->___Scale = L_3;
		bool L_4 = ___4_isNegative;
		__this->___IsNegative = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* NumberBuffer_GetDigitsPointer_mEDF101B1FB7FD3D152E0A82195BD44DDB7A5E4AC (NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* __this, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = __this->____buffer;
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
IL2CPP_EXTERN_C void FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshal_pinvoke(const FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18& unmarshaled, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshaled_pinvoke& marshaled)
{
	marshaled.___Kind = unmarshaled.___Kind;
	marshaled.___AlignAndSize = unmarshaled.___AlignAndSize;
	marshaled.___Specifier = unmarshaled.___Specifier;
	marshaled.___Lowercase = static_cast<int32_t>(unmarshaled.___Lowercase);
}
IL2CPP_EXTERN_C void FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshal_pinvoke_back(const FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshaled_pinvoke& marshaled, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18& unmarshaled)
{
	uint8_t unmarshaledKind_temp_0 = 0;
	unmarshaledKind_temp_0 = marshaled.___Kind;
	unmarshaled.___Kind = unmarshaledKind_temp_0;
	int8_t unmarshaledAlignAndSize_temp_1 = 0x0;
	unmarshaledAlignAndSize_temp_1 = marshaled.___AlignAndSize;
	unmarshaled.___AlignAndSize = unmarshaledAlignAndSize_temp_1;
	uint8_t unmarshaledSpecifier_temp_2 = 0x0;
	unmarshaledSpecifier_temp_2 = marshaled.___Specifier;
	unmarshaled.___Specifier = unmarshaledSpecifier_temp_2;
	bool unmarshaledLowercase_temp_3 = false;
	unmarshaledLowercase_temp_3 = static_cast<bool>(marshaled.___Lowercase);
	unmarshaled.___Lowercase = unmarshaledLowercase_temp_3;
}
IL2CPP_EXTERN_C void FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshal_pinvoke_cleanup(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshal_com(const FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18& unmarshaled, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshaled_com& marshaled)
{
	marshaled.___Kind = unmarshaled.___Kind;
	marshaled.___AlignAndSize = unmarshaled.___AlignAndSize;
	marshaled.___Specifier = unmarshaled.___Specifier;
	marshaled.___Lowercase = static_cast<int32_t>(unmarshaled.___Lowercase);
}
IL2CPP_EXTERN_C void FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshal_com_back(const FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshaled_com& marshaled, FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18& unmarshaled)
{
	uint8_t unmarshaledKind_temp_0 = 0;
	unmarshaledKind_temp_0 = marshaled.___Kind;
	unmarshaled.___Kind = unmarshaledKind_temp_0;
	int8_t unmarshaledAlignAndSize_temp_1 = 0x0;
	unmarshaledAlignAndSize_temp_1 = marshaled.___AlignAndSize;
	unmarshaled.___AlignAndSize = unmarshaledAlignAndSize_temp_1;
	uint8_t unmarshaledSpecifier_temp_2 = 0x0;
	unmarshaledSpecifier_temp_2 = marshaled.___Specifier;
	unmarshaled.___Specifier = unmarshaledSpecifier_temp_2;
	bool unmarshaledLowercase_temp_3 = false;
	unmarshaledLowercase_temp_3 = static_cast<bool>(marshaled.___Lowercase);
	unmarshaled.___Lowercase = unmarshaledLowercase_temp_3;
}
IL2CPP_EXTERN_C void FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshal_com_cleanup(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatOptions__ctor_m2B3F2187A54E5310ADA5F9A4AD63E19A07FF63CD (FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18* __this, uint8_t ___0_kind, int8_t ___1_alignAndSize, uint8_t ___2_specifier, bool ___3_lowercase, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_initobj(__this, sizeof(FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18));
		uint8_t L_0 = ___0_kind;
		__this->___Kind = L_0;
		int8_t L_1 = ___1_alignAndSize;
		__this->___AlignAndSize = L_1;
		uint8_t L_2 = ___2_specifier;
		__this->___Specifier = L_2;
		bool L_3 = ___3_lowercase;
		__this->___Lowercase = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FormatOptions_get_Uppercase_mDDD90EE5E418C418782FCB436E5B0FB786703E90 (FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___Lowercase;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormatOptions_GetBase_m2AC486A4073138DFEBECB692B0C0949C4B75D16A (FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___Kind;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000c;
		}
	}
	{
		return ((int32_t)16);
	}

IL_000c:
	{
		return ((int32_t)10);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormatOptions_ToString_mBD55E8FD75446A8D2A0D16CEA04658E898508E99 (FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatKind_tBA15CECEF749274BD841B594520EEF07F761DA70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CE6C7F7F72B90957BFCD4BAD12273C41A1C3421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral733F2C0F892979C2C29E7E7599E36E7BC6DA158B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00E97A4D6DA0A1E727CA6FCAC517CF439F3A016);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEA647B69ECF2FB3DD083E36418FF930832E0BEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEAABBBE67A35DBB7CF309C3EC21780633775FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral6CE6C7F7F72B90957BFCD4BAD12273C41A1C3421);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral6CE6C7F7F72B90957BFCD4BAD12273C41A1C3421);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		uint8_t L_3 = __this->___Kind;
		uint8_t L_4 = L_3;
		RuntimeObject* L_5 = Box(NumberFormatKind_tBA15CECEF749274BD841B594520EEF07F761DA70_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralFFEAABBBE67A35DBB7CF309C3EC21780633775FD);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralFFEAABBBE67A35DBB7CF309C3EC21780633775FD);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		int8_t L_8 = __this->___AlignAndSize;
		int8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral733F2C0F892979C2C29E7E7599E36E7BC6DA158B);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral733F2C0F892979C2C29E7E7599E36E7BC6DA158B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		uint8_t L_13 = __this->___Specifier;
		uint8_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralEEA647B69ECF2FB3DD083E36418FF930832E0BEF);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteralEEA647B69ECF2FB3DD083E36418FF930832E0BEF);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		bool L_18;
		L_18 = FormatOptions_get_Uppercase_mDDD90EE5E418C418782FCB436E5B0FB786703E90(__this, NULL);
		bool L_19 = L_18;
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralC00E97A4D6DA0A1E727CA6FCAC517CF439F3A016, L_17, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* FormatOptions_ToString_mBD55E8FD75446A8D2A0D16CEA04658E898508E99_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<FormatOptions_t1B0FD52C3F9BF255D34816426421BE268C734A18>(__this);
	String_t* _returnValue;
	_returnValue = FormatOptions_ToString_mBD55E8FD75446A8D2A0D16CEA04658E898508E99(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t tBigInt_GetLength_m9CF9FA5B315E8FAD667F8CD49C46F5247E91AEEE (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_length;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tBigInt_GetBlock_mEEA4E3FA63A0811DD4A756FF6E60ABC5B4F9FFBE (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	{
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_0 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&__this->___m_blocks);
		uint32_t* L_1 = (uint32_t*)(&L_0->___FixedElementField);
		int32_t L_2 = ___0_idx;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		int32_t L_4 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, 4))))));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tBigInt_IsZero_mAC36C0DBF9226593F546E3D5941507796262C3CA (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_length;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tBigInt_SetU64_mB70CDB2548ACA6D34813DBB052981C2543B3E04F (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* __this, uint64_t ___0_val, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_val;
		uint64_t L_1 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		if ((!(((uint64_t)L_0) > ((uint64_t)L_1))))
		{
			goto IL_0034;
		}
	}
	{
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_2 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&__this->___m_blocks);
		uint32_t* L_3 = (uint32_t*)(&L_2->___FixedElementField);
		uint64_t L_4 = ___0_val;
		uint64_t L_5 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint32_t L_6 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_4&(int64_t)L_5)),NULL));
		*(((int32_t*)L_3)) = ((int32_t)L_6);
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_7 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&__this->___m_blocks);
		uint32_t* L_8 = (uint32_t*)(&L_7->___FixedElementField);
		uint64_t L_9 = ___0_val;
		uint64_t L_10 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint32_t L_11 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_9>>((int32_t)32)))&(int64_t)L_10)),NULL));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_8, 4)))) = ((int32_t)L_11);
		__this->___m_length = 2;
		return;
	}

IL_0034:
	{
		uint64_t L_12 = ___0_val;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_13 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&__this->___m_blocks);
		uint32_t* L_14 = (uint32_t*)(&L_13->___FixedElementField);
		uint64_t L_15 = ___0_val;
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint32_t L_17 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_15&(int64_t)L_16)),NULL));
		*(((int32_t*)L_14)) = ((int32_t)L_17);
		__this->___m_length = 1;
		return;
	}

IL_0050:
	{
		__this->___m_length = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tBigInt_SetU32_m4D9602134447021404805AC0A997A21434FC72BD (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* __this, uint32_t ___0_val, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_val;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983* L_1 = (U3Cm_blocksU3Ee__FixedBuffer_tB0B53B2E0FFA88A65564D265C5BAA18B5A355983*)(&__this->___m_blocks);
		uint32_t* L_2 = (uint32_t*)(&L_1->___FixedElementField);
		uint32_t L_3 = ___0_val;
		*(((int32_t*)L_2)) = ((int32_t)L_3);
		uint32_t L_4 = ___0_val;
		__this->___m_length = ((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		return;
	}

IL_001b:
	{
		__this->___m_length = 0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tFloatUnion32_IsNegative_m93A3A3E68562946329E3409AA850BA29AACA6F91 (tFloatUnion32_t6A4A5EBD771045CFEDBFD3F71EFF400FFABEB20D* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___m_integer;
		return (bool)((!(((uint32_t)((int32_t)((uint32_t)L_0>>((int32_t)31)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion32_GetExponent_m3AAEFA1D21C5717F966030AEFC15063525AF42E9 (tFloatUnion32_t6A4A5EBD771045CFEDBFD3F71EFF400FFABEB20D* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___m_integer;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)23)))&((int32_t)255)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion32_GetMantissa_m1CEA25E915CB7F02D0A515723DCAA9132F4F75CD (tFloatUnion32_t6A4A5EBD771045CFEDBFD3F71EFF400FFABEB20D* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___m_integer;
		return ((int32_t)((int32_t)L_0&((int32_t)8388607)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tFloatUnion64_IsNegative_m8993D4E9E29452CC44946CA1E109974C920702CD (tFloatUnion64_tA7225EDB3329B2675933FD7846A30A1F1F349D76* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___m_integer;
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((!(((uint64_t)((int64_t)((uint64_t)L_0>>((int32_t)63)))) <= ((uint64_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t tFloatUnion64_GetExponent_mCC698D7208E9D37AC0E1E62637F30B2064CF89E0 (tFloatUnion64_tA7225EDB3329B2675933FD7846A30A1F1F349D76* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___m_integer;
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)2047),NULL));
		uint32_t L_2 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_0>>((int32_t)52)))&L_1)),NULL));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t tFloatUnion64_GetMantissa_m791F84BAA61B441557571CE0777ABDA4F41560C7 (tFloatUnion64_tA7225EDB3329B2675933FD7846A30A1F1F349D76* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___m_integer;
		return ((int64_t)((int64_t)L_0&((int64_t)4503599627370495LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SharedStatic_GetOrCreateSharedStaticInternal_m1D96ADDAFC11B4DB2675D0BB40AFC77B0875A3E4 (int64_t ___0_getHashCode64, int64_t ___1_getSubHashCode64, uint32_t ___2_sizeOf, uint32_t ___3_alignment, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_getHashCode64;
		int64_t L_1 = ___1_getSubHashCode64;
		uint32_t L_2 = ___2_sizeOf;
		uint32_t L_3 = ___3_alignment;
		void* L_4;
		L_4 = BurstCompilerService_GetOrCreateSharedMemory_m6117DFC1C8F155C5F690A7465BDC0F76CC494699(L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_ReloadAssemblySearchPathsForBurstInternal_m810E3DBBBDEBFFABAAFE19B8AC58AD1D2B124980 (const RuntimeMethod* method) 
{
	typedef void (*BurstCompilerService_ReloadAssemblySearchPathsForBurstInternal_m810E3DBBBDEBFFABAAFE19B8AC58AD1D2B124980_ftn) ();
	static BurstCompilerService_ReloadAssemblySearchPathsForBurstInternal_m810E3DBBBDEBFFABAAFE19B8AC58AD1D2B124980_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BurstCompilerService_ReloadAssemblySearchPathsForBurstInternal_m810E3DBBBDEBFFABAAFE19B8AC58AD1D2B124980_ftn)il2cpp_codegen_resolve_icall ("Unity.Burst.LowLevel.BurstCompilerService::ReloadAssemblySearchPathsForBurstInternal()");
	_il2cpp_icall_func();
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_ClearCacheBetweenCodeLoads_mCC019A1FC10DEDF30E83165A175C144C50987097 (const RuntimeMethod* method) 
{
	{
		BurstCompilerService_ReloadAssemblySearchPathsForBurstInternal_m810E3DBBBDEBFFABAAFE19B8AC58AD1D2B124980(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstCompilerService_CompileAsyncDelegateMethod_mBA2CC9173C2B5D5E7A34F82D45FFA8ED8D044BCC (RuntimeObject* ___0_delegateMethod, String_t* ___1_compilerOptions, const RuntimeMethod* method) 
{
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar* V_1 = NULL;
	ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{
				uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
				V_1 = (Il2CppChar*)L_0;
				return;
			}
		});
		try
		{
			{
				RuntimeObject* L_1 = ___0_delegateMethod;
				String_t* L_2 = ___1_compilerOptions;
				bool L_3;
				L_3 = StringMarshaller_TryMarshalEmptyOrNullString_mA7E06E9C8BEF97EC745F7DE392C854F5F5B49999_inline(L_2, (&V_2), NULL);
				if (L_3)
				{
					G_B2_0 = L_1;
					goto IL_002a_1;
				}
				G_B1_0 = L_1;
			}
			{
				String_t* L_4 = ___1_compilerOptions;
				ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
				L_5 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_4, NULL);
				V_0 = L_5;
				Il2CppChar* L_6;
				L_6 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&V_0), NULL);
				V_1 = L_6;
				Il2CppChar* L_7 = V_1;
				uintptr_t L_8 = (il2cpp_codegen_conv<uintptr_t,Il2CppChar*,intptr_t,false,false>(L_7,NULL));
				int32_t L_9;
				L_9 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_0), NULL);
				ManagedSpanWrapper__ctor_m64EF660BE4BF42BC17706387C68D2BCE779802EF((&V_2), (void*)L_8, L_9, NULL);
				G_B2_0 = G_B1_0;
			}

IL_002a_1:
			{
				int32_t L_10;
				L_10 = BurstCompilerService_CompileAsyncDelegateMethod_Injected_m2903A77B2581D6063738EA9D298562EF1129E639(G_B2_0, (&V_2), NULL);
				V_3 = L_10;
				goto IL_0039;
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

IL_0039:
	{
		int32_t L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m01D6DED81167EEDAB3E556388CE397DCE9889B1E (int32_t ___0_userID, const RuntimeMethod* method) 
{
	typedef void* (*BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m01D6DED81167EEDAB3E556388CE397DCE9889B1E_ftn) (int32_t);
	static BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m01D6DED81167EEDAB3E556388CE397DCE9889B1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m01D6DED81167EEDAB3E556388CE397DCE9889B1E_ftn)il2cpp_codegen_resolve_icall ("Unity.Burst.LowLevel.BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod(System.Int32)");
	void* icallRetVal = _il2cpp_icall_func(___0_userID);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetOrCreateSharedMemory_m6117DFC1C8F155C5F690A7465BDC0F76CC494699 (int64_t ___0_keyLow, int64_t ___1_keyHigh, uint32_t ___2_size_of, uint32_t ___3_alignment, const RuntimeMethod* method) 
{
	typedef void* (*BurstCompilerService_GetOrCreateSharedMemory_m6117DFC1C8F155C5F690A7465BDC0F76CC494699_ftn) (int64_t, int64_t, uint32_t, uint32_t);
	static BurstCompilerService_GetOrCreateSharedMemory_m6117DFC1C8F155C5F690A7465BDC0F76CC494699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BurstCompilerService_GetOrCreateSharedMemory_m6117DFC1C8F155C5F690A7465BDC0F76CC494699_ftn)il2cpp_codegen_resolve_icall ("Unity.Burst.LowLevel.BurstCompilerService::GetOrCreateSharedMemory(System.Int64,System.Int64,System.UInt32,System.UInt32)");
	void* icallRetVal = _il2cpp_icall_func(___0_keyLow, ___1_keyHigh, ___2_size_of, ___3_alignment);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_Log_m239CB5D912F4EAAE5EC7AE8EB353675FCEE4051E (void* ___0_userData, int32_t ___1_logType, uint8_t* ___2_message, uint8_t* ___3_filename, int32_t ___4_lineNumber, const RuntimeMethod* method) 
{
	typedef void (*BurstCompilerService_Log_m239CB5D912F4EAAE5EC7AE8EB353675FCEE4051E_ftn) (void*, int32_t, uint8_t*, uint8_t*, int32_t);
	static BurstCompilerService_Log_m239CB5D912F4EAAE5EC7AE8EB353675FCEE4051E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BurstCompilerService_Log_m239CB5D912F4EAAE5EC7AE8EB353675FCEE4051E_ftn)il2cpp_codegen_resolve_icall ("Unity.Burst.LowLevel.BurstCompilerService::Log(System.Void*,Unity.Burst.LowLevel.BurstCompilerService/BurstLogType,System.Byte*,System.Byte*,System.Int32)");
	_il2cpp_icall_func(___0_userData, ___1_logType, ___2_message, ___3_filename, ___4_lineNumber);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_RuntimeLog_m6AF51F93F64B2888F5A8F28DDCA81723CF2D0B2B (void* ___0_userData, int32_t ___1_logType, uint8_t* ___2_message, uint8_t* ___3_filename, int32_t ___4_lineNumber, const RuntimeMethod* method) 
{
	typedef void (*BurstCompilerService_RuntimeLog_m6AF51F93F64B2888F5A8F28DDCA81723CF2D0B2B_ftn) (void*, int32_t, uint8_t*, uint8_t*, int32_t);
	static BurstCompilerService_RuntimeLog_m6AF51F93F64B2888F5A8F28DDCA81723CF2D0B2B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BurstCompilerService_RuntimeLog_m6AF51F93F64B2888F5A8F28DDCA81723CF2D0B2B_ftn)il2cpp_codegen_resolve_icall ("Unity.Burst.LowLevel.BurstCompilerService::RuntimeLog(System.Void*,Unity.Burst.LowLevel.BurstCompilerService/BurstLogType,System.Byte*,System.Byte*,System.Int32)");
	_il2cpp_icall_func(___0_userData, ___1_logType, ___2_message, ___3_filename, ___4_lineNumber);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* BurstCompilerService_GetMethodInfoForDelegate_m5690BEC3CA60D272C9E234E43922F9599935776A (Delegate_t* ___0_targetMethod, const RuntimeMethod* method) 
{
	{
		Delegate_t* L_0 = ___0_targetMethod;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_InvokeReset_m6044082DE39FED6374E246EC8AC9C3807AB7F38E (RuntimeObject* ___0_instance, MethodInfo_t* ___1_methodHandlePtr, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = ___1_methodHandlePtr;
		RuntimeObject* L_1 = ___0_instance;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, L_1, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_InvokeCompileInternal_m0851B497E8BD2E545013356D3756A327CDC97B08 (RuntimeObject* ___0_instance, MethodInfo_t* ___1_methodHandlePtr, String_t* ___2_fullMethodName, String_t* ___3_assemblyPaths, intptr_t ___4_userdata, int32_t ___5_dumpFlags, intptr_t ___6_compilerCallbackPointer, intptr_t ___7_logCallBack, String_t* ___8_compilerFlags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___1_methodHandlePtr;
		RuntimeObject* L_1 = ___0_instance;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___2_fullMethodName;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___3_assemblyPaths;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		intptr_t L_8 = ___4_userdata;
		intptr_t L_9 = L_8;
		RuntimeObject* L_10 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12 = ___5_dumpFlags;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		intptr_t L_16 = ___6_compilerCallbackPointer;
		intptr_t L_17 = L_16;
		RuntimeObject* L_18 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_15;
		intptr_t L_20 = ___7_logCallBack;
		intptr_t L_21 = L_20;
		RuntimeObject* L_22 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_19;
		String_t* L_24 = ___8_compilerFlags;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_24);
		NullCheck(L_0);
		RuntimeObject* L_25;
		L_25 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, L_1, L_23, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_InvokeSetNativeGetExternalFunctionPointer_m64FF7B2972C37CA81F9C42F2B20A4BEB42D519C4 (RuntimeObject* ___0_instance, MethodInfo_t* ___1_methodHandlePtr, intptr_t ___2_externalFunctionCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___1_methodHandlePtr;
		RuntimeObject* L_1 = ___0_instance;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		intptr_t L_4 = ___2_externalFunctionCallback;
		intptr_t L_5 = L_4;
		RuntimeObject* L_6 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_0);
		RuntimeObject* L_7;
		L_7 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, L_1, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BurstCompilerService_InvokeExtractCompilerFlags_mA63A5D14DD3C710EA3BCA840AC16C036E7F1D8FC (Delegate_t* ___0_extractCompilerFlagsDelegate, intptr_t ___1_jobTypeHandle, bool* ___2_didGetFlags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* V_0 = NULL;
	Type_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		Delegate_t* L_0 = ___0_extractCompilerFlagsDelegate;
		V_0 = ((ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15*)CastclassSealed((RuntimeObject*)L_0, ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15_il2cpp_TypeInfo_var));
		intptr_t L_1 = ___1_jobTypeHandle;
		Type_t* L_2;
		L_2 = SystemReflectionMarshalling_UnmarshalSystemType_mF33F046FC09763F6F9006B5902DC086AD310EC5B(L_1, NULL);
		V_1 = L_2;
		bool* L_3 = ___2_didGetFlags;
		ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* L_4 = V_0;
		Type_t* L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_inline(L_4, L_5, (&V_2), NULL);
		*(((int8_t*)L_3)) = ((int8_t)L_6);
		String_t* L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_Unity_Burst_LowLevel_BurstCompilerService_ClearCacheBetweenCodeLoads_RegisterLifecycleMethod_mE4BF757540209DBE791A47B5BC64F613673EE725 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerService_ClearCacheBetweenCodeLoads_mCC019A1FC10DEDF30E83165A175C144C50987097_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3EO_t5526C8E2D4142008AC3F1997DD3A2E2623274A8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6D9FEBB0838A71FE28376A7B6891A2CD8A2C8FD);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Assembly_t* G_B2_2 = NULL;
	Type_t* G_B2_3 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Assembly_t* G_B1_2 = NULL;
	Type_t* G_B1_3 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ClearCacheBetweenCodeLoadsAttribute_t219BC0720849DBA38E2EE521E635E4B4190C7D56_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (BurstCompilerService_tE08BB9266F1D91347D7089773A24F98694BB7210_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_3);
		Assembly_t* L_4;
		L_4 = VirtualFuncInvoker0< Assembly_t* >::Invoke(28, L_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((U3CU3EO_t5526C8E2D4142008AC3F1997DD3A2E2623274A8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_t5526C8E2D4142008AC3F1997DD3A2E2623274A8B_il2cpp_TypeInfo_var))->___U3C0U3E__ClearCacheBetweenCodeLoads;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = _stringLiteralF6D9FEBB0838A71FE28376A7B6891A2CD8A2C8FD;
			G_B2_2 = L_4;
			G_B2_3 = L_1;
			goto IL_0039;
		}
		G_B1_0 = L_6;
		G_B1_1 = _stringLiteralF6D9FEBB0838A71FE28376A7B6891A2CD8A2C8FD;
		G_B1_2 = L_4;
		G_B1_3 = L_1;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_7, NULL, (intptr_t)((void*)BurstCompilerService_ClearCacheBetweenCodeLoads_mCC019A1FC10DEDF30E83165A175C144C50987097_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = L_7;
		((U3CU3EO_t5526C8E2D4142008AC3F1997DD3A2E2623274A8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_t5526C8E2D4142008AC3F1997DD3A2E2623274A8B_il2cpp_TypeInfo_var))->___U3C0U3E__ClearCacheBetweenCodeLoads = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t5526C8E2D4142008AC3F1997DD3A2E2623274A8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_t5526C8E2D4142008AC3F1997DD3A2E2623274A8B_il2cpp_TypeInfo_var))->___U3C0U3E__ClearCacheBetweenCodeLoads), (void*)L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}

IL_0039:
	{
		LifecycleMethodRegistration_Register_mBB010D57CE5CE9C837B35F645C980574B54BA72D(G_B2_3, G_B2_2, G_B2_1, G_B2_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstCompilerService_CompileAsyncDelegateMethod_Injected_m2903A77B2581D6063738EA9D298562EF1129E639 (RuntimeObject* ___0_delegateMethod, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* ___1_compilerOptions, const RuntimeMethod* method) 
{
	typedef int32_t (*BurstCompilerService_CompileAsyncDelegateMethod_Injected_m2903A77B2581D6063738EA9D298562EF1129E639_ftn) (RuntimeObject*, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455*);
	static BurstCompilerService_CompileAsyncDelegateMethod_Injected_m2903A77B2581D6063738EA9D298562EF1129E639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BurstCompilerService_CompileAsyncDelegateMethod_Injected_m2903A77B2581D6063738EA9D298562EF1129E639_ftn)il2cpp_codegen_resolve_icall ("Unity.Burst.LowLevel.BurstCompilerService::CompileAsyncDelegateMethod_Injected(System.Object,UnityEngine.Bindings.ManagedSpanWrapper&)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_delegateMethod, ___1_compilerOptions);
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
bool ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_Multicast(ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* __this, Type_t* ___0_jobType, String_t** ___1_flags, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* currentDelegate = reinterpret_cast<ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, Type_t*, String_t**, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_jobType, ___1_flags, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenInstance(ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* __this, Type_t* ___0_jobType, String_t** ___1_flags, const RuntimeMethod* method)
{
	NullCheck(___0_jobType);
	typedef bool (*FunctionPointerType) (Type_t*, String_t**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_jobType, ___1_flags, method);
}
bool ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenStatic(ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* __this, Type_t* ___0_jobType, String_t** ___1_flags, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (Type_t*, String_t**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_jobType, ___1_flags, method);
}
bool ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenVirtual(ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* __this, Type_t* ___0_jobType, String_t** ___1_flags, const RuntimeMethod* method)
{
	NullCheck(___0_jobType);
	return VirtualFuncInvoker1< bool, String_t** >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_jobType, ___1_flags);
}
bool ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenInterface(ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* __this, Type_t* ___0_jobType, String_t** ___1_flags, const RuntimeMethod* method)
{
	NullCheck(___0_jobType);
	return InterfaceFuncInvoker1< bool, String_t** >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_jobType, ___1_flags);
}
bool ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenGenericVirtual(ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* __this, Type_t* ___0_jobType, String_t** ___1_flags, const RuntimeMethod* method)
{
	NullCheck(___0_jobType);
	return GenericVirtualFuncInvoker1< bool, String_t** >::Invoke(method, ___0_jobType, ___1_flags);
}
bool ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenGenericInterface(ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* __this, Type_t* ___0_jobType, String_t** ___1_flags, const RuntimeMethod* method)
{
	NullCheck(___0_jobType);
	return GenericInterfaceFuncInvoker1< bool, String_t** >::Invoke(method, ___0_jobType, ___1_flags);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtractCompilerFlags__ctor_m9A3B046A39A1E2A71D73003742C4741CA328B252 (ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenStatic;
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
						__this->___invoke_impl = (intptr_t)ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_OpenInstance;
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
	__this->___extra_arg = (intptr_t)ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF (ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* __this, Type_t* ___0_jobType, String_t** ___1_flags, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Type_t*, String_t**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_jobType, ___1_flags, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstUnsafeUtility_MemCpy_m2AC37FF2F833B5D0941CF54DA8FBFFB2FCEC5D04 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	int64_t V_1 = 0;
	{
		void* L_0 = ___0_destination;
		V_0 = (uint8_t*)L_0;
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = L_1;
		goto IL_0016;
	}

IL_0007:
	{
		uint8_t* L_2 = V_0;
		int64_t L_3 = V_1;
		intptr_t L_4 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_3,NULL));
		void* L_5 = ___1_source;
		int64_t L_6 = V_1;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_6,NULL));
		int32_t L_8 = ((int32_t)*(((uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, L_7)))));
		*(((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_4)))) = ((int8_t)L_8);
		int64_t L_9 = V_1;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_1 = ((int64_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0016:
	{
		int64_t L_11 = V_1;
		int64_t L_12 = ___2_size;
		if ((((int64_t)L_11) < ((int64_t)L_12)))
		{
			goto IL_0007;
		}
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_mD3DFDBBBE47A2E177F2D0764CD8F4F594B224047_inline (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFloatModeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_m51910AF7BA7B527BF0B12F5634B5C187B384EC25_inline (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CFloatPrecisionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_m84315C6A223375A16B0322C4F1290F8A730C3868_inline (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____enableBurstCompilation;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m04F0F92F718D2835251288A790AE8E1F497652AA_inline (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsGlobalU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_m0210E524B7FE44CDD4A4030AFE0BB4586B9E39A9_inline (BurstCompileAttribute_tC5073AAD2F6466A5EEBC9DA4A66628F2480B8735* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* BurstCompilerOptions_get_OptionsChanged_m8BB1CE7D1D6C0C6065DDDC65BF6EC28E31828BE0_inline (BurstCompilerOptions_t1AFF6FD4375BCFD72E3B1C4ABF5AA4888C3DF05D* __this, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___U3COptionsChangedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* NumberBuffer_GetDigitsPointer_mEDF101B1FB7FD3D152E0A82195BD44DDB7A5E4AC_inline (NumberBuffer_t7BDF928D6FCD007863C8FEF0DEA8A1FFA23D9441* __this, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = __this->____buffer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t tBigInt_GetLength_m9CF9FA5B315E8FAD667F8CD49C46F5247E91AEEE_inline (tBigInt_t716EDB9C078807DEFB1F75E2540F6B7080ECC666* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_length;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ExtractCompilerFlags_Invoke_mE790ED3E3B463A4EF1F31A3F30E7B1523269EABF_inline (ExtractCompilerFlags_t333DBAE08CBB33A87F3CDEB4F5876B8A0277CE15* __this, Type_t* ___0_jobType, String_t** ___1_flags, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Type_t*, String_t**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_jobType, ___1_flags, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
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
