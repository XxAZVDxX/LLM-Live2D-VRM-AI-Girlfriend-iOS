#include "pch-cpp.hpp"





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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668;
struct EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E;
struct EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38;
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581;
struct EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040;
struct EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B;
struct HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB;
struct HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243;
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
struct HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD;
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
struct HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24;
struct HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF;
struct HashSet_1_tC2D03386892405F3505A765D17445886085A7A09;
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
struct ICollection_1_tD48600DAC12B9C8EF571F89859FB62EAAC0480A7;
struct ICollection_1_t0F501B1E71D6A179FF1A7FAA5C2403DA14F3948D;
struct ICollection_1_t22419C4E4B157D4C36F10BC734577F050F099F7C;
struct ICollection_1_t03EA087489342703ED691AFD807C50289BADA136;
struct ICollection_1_t58D5B5A564BF08CD3C8EE106100AC0D7B8C4508B;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct ICollection_1_t7E71F1CA7971B264996E675DD23421D9B7165B6A;
struct ICollection_1_tB05B5C939E22A11768C1B52C0400170518EE9056;
struct ICollection_1_t346BCD896BC934127A50BAEED7A88A0045ADC869;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
struct IEnumerable_1_t4CED6A4913A79D38ECE40515C8B6B24438167380;
struct IEnumerable_1_tE1213A4B493AFC0D39430F0CA5C8664E4C15A296;
struct IEnumerable_1_tF78C5A55C1D093F0B8CD95E0247BA2EE703D9D55;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t9C73E2DA2A24734B7BEE3997930B156A82172C56;
struct IEnumerable_1_t4533B2D8B3D6913DE832723B49E41A3DB7E04996;
struct IEnumerable_1_tD9EBC00A566BFC18B2EA55C00C11CED783E8F4D0;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t6999C610E1C05F2C90151CD5C41E24528ACB3255;
struct IEnumerator_1_tEEE8F9DA1524453FDD56361AA56EB8DC32485A1C;
struct IEnumerator_1_tDB76B45124D1569F782EAE2F47993DF076758957;
struct IEnumerator_1_t737E5D96E5E3657734509E507812DBA5E7EDD547;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tF74C952F97E24A4AFD21162637D82942513CB35B;
struct IEnumerator_1_tDE9596775D251622B212A3B47BE1B38C5A392401;
struct IEnumerator_1_tD1292C112500DE5A170D22D7082FED191EB80EA8;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_tEA6D87A5AB670819FF91305D215B209552281584;
struct IEqualityComparer_1_t491CBF36A24B05E9D27E005C32F9DFAB28BCA898;
struct IEqualityComparer_1_t6FE30305ED686025427F2E3AF3C177EA120CF9A5;
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
struct IEqualityComparer_1_t95351C62AE7A3DC1F5A634C37AF7444A078B5B99;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t9CDB2E77DE70F06FC5ED90C78DB6B9C356ECCEA9;
struct IEqualityComparer_1_t8496C9AFEFC1FC9FFEA260FF65F522278D62FB3D;
struct IEqualityComparer_1_t79919FD3FA134176BC3D7CE5638B4D5CEA3EAF3C;
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3;
struct Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD;
struct Predicate_1_tA09A22025D8A8B89F9E77A582841E684EA7E759F;
struct Predicate_1_tB989E899E4E9154054171E9C43DE93B6E2AC6FCC;
struct Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF;
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2;
struct Predicate_1_t3C049B1B2E42E83B842DF97FD66D519DA80D5F0C;
struct Predicate_1_tEA79AA4099AC5E37355537A7E3D5D421B8E0C8E6;
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
struct SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0;
struct SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1;
struct SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C;
struct SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6;
struct SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7;
struct SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419;
struct SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04;
struct MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0;
IL2CPP_EXTERN_C String_t* _stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
struct SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0;
struct SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1;
struct SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C;
struct SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6;
struct SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7;
struct SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419;
struct SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01;
struct PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04;
struct MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668  : public RuntimeObject
{
};
struct EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E  : public RuntimeObject
{
};
struct EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38  : public RuntimeObject
{
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581  : public RuntimeObject
{
};
struct EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040  : public RuntimeObject
{
};
struct EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06  : public RuntimeObject
{
};
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_tC2D03386892405F3505A765D17445886085A7A09  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
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
struct Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 
{
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ____set;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 
{
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ____set;
	int32_t ____index;
	int32_t ____version;
	uint32_t ____current;
};
struct Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B 
{
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ____set;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB;
struct Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 
{
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ____set;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___value;
};
struct Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___value;
};
typedef Il2CppFullySharedGenericStruct Slot_tEC146EEEF7022C6542EBF082D658446682962BFD;
struct Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
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
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 
{
	String_t* ___MaterialName;
	String_t* ___ValueName;
};
struct MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42_marshaled_pinvoke
{
	char* ___MaterialName;
	char* ___ValueName;
};
struct MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42_marshaled_com
{
	Il2CppChar* ___MaterialName;
	Il2CppChar* ___ValueName;
};
struct MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 
{
	String_t* ___MaterialName;
	String_t* ___ValueName;
};
struct MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694_marshaled_pinvoke
{
	char* ___MaterialName;
	char* ___ValueName;
};
struct MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694_marshaled_com
{
	Il2CppChar* ___MaterialName;
	Il2CppChar* ___ValueName;
};
struct Enumerator_tEB94B2558F92A47485AA174C64C70B81F71AD5D2 
{
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ____set;
	int32_t ____index;
	int32_t ____version;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ____current;
};
struct Enumerator_t53D40B7BF4015A0F49792E6A13378BEBA8D91361 
{
	HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* ____set;
	int32_t ____index;
	int32_t ____version;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ____current;
};
struct Enumerator_t5C51B89A2548200F55BD9FD122927359BA4D6C4F 
{
	HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* ____set;
	int32_t ____index;
	int32_t ____version;
	MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ____current;
};
struct Enumerator_t1110E0B993C4C378B99A7EE22024CC06D07BA97C 
{
	HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* ____set;
	int32_t ____index;
	int32_t ____version;
	MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ____current;
};
struct Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992 
{
	int32_t ___hashCode;
	int32_t ___next;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___value;
};
struct Slot_t56693191A4E40E6B9446B76179425C639E0AC089 
{
	int32_t ___hashCode;
	int32_t ___next;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___value;
};
struct Slot_t1EAAAB0EB7E675D9AB16858BC529CD92F162AF8F 
{
	int32_t ___hashCode;
	int32_t ___next;
	MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___value;
};
struct Slot_tA01C4D8C303CBA221F4856AE5422402E2C7A5374 
{
	int32_t ___hashCode;
	int32_t ___next;
	MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___value;
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
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
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
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3  : public MulticastDelegate_t
{
};
struct Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD  : public MulticastDelegate_t
{
};
struct Predicate_1_tA09A22025D8A8B89F9E77A582841E684EA7E759F  : public MulticastDelegate_t
{
};
struct Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF  : public MulticastDelegate_t
{
};
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2  : public MulticastDelegate_t
{
};
struct Predicate_1_t3C049B1B2E42E83B842DF97FD66D519DA80D5F0C  : public MulticastDelegate_t
{
};
struct Predicate_1_tEA79AA4099AC5E37355537A7E3D5D421B8E0C8E6  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Enumerator_tF8E69BF07F9F02F7353403E775CC0C7C9D5920A7 
{
	HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* ____set;
	int32_t ____index;
	int32_t ____version;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ____current;
};
struct Predicate_1_tB989E899E4E9154054171E9C43DE93B6E2AC6FCC  : public MulticastDelegate_t
{
};
struct Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1 
{
	int32_t ___hashCode;
	int32_t ___next;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___value;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668_StaticFields
{
	EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* ___defaultComparer;
};
struct EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E_StaticFields
{
	EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* ___defaultComparer;
};
struct EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38_StaticFields
{
	EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* ___defaultComparer;
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields
{
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* ___defaultComparer;
};
struct EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040_StaticFields
{
	EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* ___defaultComparer;
};
struct EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06_StaticFields
{
	EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* ___defaultComparer;
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
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	String_t* ___s_nullMessage;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 m_Items[1];

	inline Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 value)
	{
		m_Items[index] = value;
	}
};
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
struct SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992 m_Items[1];

	inline Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_StringLowerCase), (void*)NULL);
		#endif
	}
	inline Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_StringLowerCase), (void*)NULL);
		#endif
	}
};
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5  : public RuntimeArray
{
	ALIGN_FIELD (8) InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 m_Items[1];

	inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringLowerCase), (void*)NULL);
		#endif
	}
	inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringLowerCase), (void*)NULL);
		#endif
	}
};
struct SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t56693191A4E40E6B9446B76179425C639E0AC089 m_Items[1];

	inline Slot_t56693191A4E40E6B9446B76179425C639E0AC089 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t56693191A4E40E6B9446B76179425C639E0AC089* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t56693191A4E40E6B9446B76179425C639E0AC089 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t56693191A4E40E6B9446B76179425C639E0AC089 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t56693191A4E40E6B9446B76179425C639E0AC089* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t56693191A4E40E6B9446B76179425C639E0AC089 value)
	{
		m_Items[index] = value;
	}
};
struct MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC m_Items[1];

	inline MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1 m_Items[1];

	inline Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_AdditionalParts), (void*)NULL);
		#endif
	}
	inline Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___value))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_AdditionalParts), (void*)NULL);
		#endif
	}
};
struct PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 m_Items[1];

	inline PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_AdditionalParts), (void*)NULL);
		#endif
	}
	inline PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_AdditionalParts), (void*)NULL);
		#endif
	}
};
struct SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 m_Items[1];

	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 value)
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
struct SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 m_Items[1];

	inline Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB m_Items[1];

	inline Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297  : public RuntimeArray
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
struct SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t1EAAAB0EB7E675D9AB16858BC529CD92F162AF8F m_Items[1];

	inline Slot_t1EAAAB0EB7E675D9AB16858BC529CD92F162AF8F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t1EAAAB0EB7E675D9AB16858BC529CD92F162AF8F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t1EAAAB0EB7E675D9AB16858BC529CD92F162AF8F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___ValueName), (void*)NULL);
		#endif
	}
	inline Slot_t1EAAAB0EB7E675D9AB16858BC529CD92F162AF8F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t1EAAAB0EB7E675D9AB16858BC529CD92F162AF8F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t1EAAAB0EB7E675D9AB16858BC529CD92F162AF8F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___ValueName), (void*)NULL);
		#endif
	}
};
struct MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04  : public RuntimeArray
{
	ALIGN_FIELD (8) MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 m_Items[1];

	inline MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ValueName), (void*)NULL);
		#endif
	}
	inline MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ValueName), (void*)NULL);
		#endif
	}
};
struct SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tA01C4D8C303CBA221F4856AE5422402E2C7A5374 m_Items[1];

	inline Slot_tA01C4D8C303CBA221F4856AE5422402E2C7A5374 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tA01C4D8C303CBA221F4856AE5422402E2C7A5374* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tA01C4D8C303CBA221F4856AE5422402E2C7A5374 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___ValueName), (void*)NULL);
		#endif
	}
	inline Slot_tA01C4D8C303CBA221F4856AE5422402E2C7A5374 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tA01C4D8C303CBA221F4856AE5422402E2C7A5374* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tA01C4D8C303CBA221F4856AE5422402E2C7A5374 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___ValueName), (void*)NULL);
		#endif
	}
};
struct MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835  : public RuntimeArray
{
	ALIGN_FIELD (8) MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 m_Items[1];

	inline MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ValueName), (void*)NULL);
		#endif
	}
	inline MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ValueName), (void*)NULL);
		#endif
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC8EB7E5E12FA6F38890EB2435FF06B81B3BBBB0A (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA74E823F988E9515688F756D0DD9223AE0248596 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set1, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m76A9036184E9E454D1A7553EF88A707525F27A8A (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m324C75B2D781E7BF38384F10C30AEC7668EB7CDA (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mFDA37D3F003EF52B5E93673AE3ED38E04D5DB500 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m6D3D24A6F1E5CB0ABD85841349382CE64EF2F690 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3C27BBD4EFB01EA7A8B2DE3F0E12CD9E449950DF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFE3FD5858B2622B0DB3A98E965A87270E087E292 (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mAFBFB4E9CC9508A1AE5E2FD2A63AEE373D77C409 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m6B2495F23F97908BC4EE3B987C1F16093E922C62 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m7EE99125BBB78B18669A0B9760A5F6E4A01454FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* EqualityComparer_1_get_Default_m33839529811E5B677FAC3708C8617567B0D8A1AB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA593337684C1715F8F7DDDE4399536CB8767D9AE (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m48DF5063EEA93A7753ECFC022584BC5879F67BB3 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mE79F5A3C8490054B23264CA3292ED4ECD6AE7A1E (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m9D129AAD52690789DC1E875DA22208A523541411 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m12456C0B5F2BD37BD07B7CFDA9F116F25281B6D1 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mE7E76F7B64EAB9DB84193329E6DE509AA98D922A (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mF4BE03AACFEFADB2AF97B062CCBF788B4B45B8D3 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mE3EB6B7254469CC1B786252C4CC9E221D59D5D70 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_index, int32_t ___1_hashCode, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mA1B61994FAB542B6C40F2B1F6BDD417501CDA050 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mA1CB8FE8A84C5D1386228D2ABBC9BCB047D163AB (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mCCACCE15A67A4C2F57BBCEE9FF8856544DC2CF2F (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m95D3F3FF905181D3CD46CD2426F4F37FD426B81C (Enumerator_tEB94B2558F92A47485AA174C64C70B81F71AD5D2* __this, HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mEE0682F788B7CB4A00C5FD93576ABF58350CF2FD (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDCCB1329C655014754502005D24A65823666CA5A (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8B4BDF53D356DC2B6824AECCDFD936A57EBBA0FD_inline (Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m601FAA1088C6E2673429E100BD859DC44074A8B7 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m75E93F1A8CC2B3C092B09C717B5F4B3612FC7DBB (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* EqualityComparer_1_get_Default_m1701DA58877D954684AA859977226F1A3CA29FE4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m37AE72B655C69E26D791659C8010BE8B245A4063 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB54C9343C334B5DF741F28762DF3BF609B75F89D (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4ECE243C46B2A94CCA3027A28B9A6DC82116BDA1 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m53463D3FFA27A76F7521DAEF5469DF6F6295EC6C (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m67E5A95B8244932B307D14673CCD6D07BE59325D (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m84E2C5ACA46A29746138313D4414CD419E02F512 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mBF9125A1637F70253CCB30F0AB844E81ED3BF380 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m67C432A0E7F7FA094BF47EB394AD8A8455465740 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_index, int32_t ___1_hashCode, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mCC507641C9E7CFEB28D8E9B48CA94F6FEECA73FC (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mFE9CDE443CAB0ED62AD337734F4B762CEA92FEA5 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m360C074565C02AC8ADB02864B6F95A423BF5851E (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m21BBCA1790F5990FBBA013E7FCB6A3166ACAFDF5 (Enumerator_t53D40B7BF4015A0F49792E6A13378BEBA8D91361* __this, HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m4D50A936F51B7B36167032A5486C1B375DE01A54 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mC3242AE1A0E7E0481D26A2A6369F8B257624C55C_inline (Predicate_1_tA09A22025D8A8B89F9E77A582841E684EA7E759F* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m745CF1B9E09C7188E58F45CBDFF43E5BA42B9620 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mBCC8B79F43F226EFB55237BC8AF1B038FD8A7D36 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* EqualityComparer_1_get_Default_m4A0896866DFD0BFADEBA26A14A4072AC9D9917D8_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFC3ABD9B392DE2F40985925ABC08BA1459B5F6E4 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD073B28596FF3A83B06D2C917FCF2D10F5D94372 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m6697C93FA4EE093921C5765C6F3484777246EE12 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mF6B7A9579D122B655180B1B56EB3DA87F3D46167 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m47155C7D260A5C12CC93E90A14D4554D17E37F1F (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m39B566378AD1EF02E6E6D135E8F5AA7216EFB45F (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mBEF82257C8F5AFE73305A602536496BE0E512E23 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m0594A940F2ADB614CAA703B0F1DFCD15A6CA6329 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_index, int32_t ___1_hashCode, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mE4C9D1F8BFD05EA7EDAD5D186153A5135AE293ED (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m54D386E54FD853D8B410D65049B7B5E9D96244BD (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m47AF3F67F0D00BF19747208D1B3A3233AEDBC95A (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m460D0268E0EAD8DDF942699DB292BA7FC04B31BD (Enumerator_tF8E69BF07F9F02F7353403E775CC0C7C9D5920A7* __this, HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mD7019504367CF88BF03BF13365DBA24FA58FAE84 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDB799908FE78068E57CBAC14B4E85314BC5F7ABE (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD00114316CACFD296E750222C808E712960B78FF_inline (Predicate_1_tB989E899E4E9154054171E9C43DE93B6E2AC6FCC* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m3CD22E798A2CE8BA8CA466AA43AC54CD8523C5EC (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m048FA262F10970373C3496B36D2BAC845C2F9B6E (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_index, int32_t ___1_hashCode, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFCDFCE9F84E8B082D8437ADEBC2510701403EFB1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m028A58CFB5CA2ADFA2DB7DA34F5AC5D8B6265BE2_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m2E98FD13307EF10E42ECB39FED69CFAC76491024_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m1FDBBBAFA1029BF3FDD33A556E6145B3CF95E49A_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_index, int32_t ___1_hashCode, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA_gshared (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m83B5F0C3F341B138AD189241E6762A78BD201667_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m37222ED818520CDC7B7D634E6DE4C9A3248648B8_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mAE35D751DCAC8CDD71BE675A190D2DF9CAB2B946_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mCDCBCF67914F9F88FE8F46CDF4FF7F02972B0C92_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E87B79B4FAE21AB1EBA9FCECC8E3828BBAF1705_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m978CC93C745B8F3687AD7969B0E7AEED974ABF5B_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mD9C2C94294AE71FE28BB7EBE1D856E0942D7F120_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m265D56C5A03DC6473FC91B32E34BD38FCC0C3AF1_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m4C6337D769BC083E636B55B9DD25C5B0BBB7CFEA_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026_gshared (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m5F346A005CA1BC8F871E36DDDCC26C310A1851FB_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m0D65AFF43065FE03318CBDDB2A1E63B51476FB9A_gshared_inline (Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mD52B5DA7BA680E5FFC237284B322EECCD570272E_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m5A24DE79434A627CC158B3751DEEBA7F9889783F_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* EqualityComparer_1_get_Default_m32928E69E3C6D1697740EC456BC3B9A5AC93C349_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m531DBABA15EA98DBF5C6DE1E62AFB1D012010187 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mEDD53ACF25430B43F18F9F26CB5A2B0965A376D9 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mCBEBF1086E34EC0DEE386D311ED3DEA76D4CD98C (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mA36218D70D462C8D4E428890ADA815B2921DB648 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mDEF32368B249831F004B3F47C54931AECB967034 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m1950DF531B90F5C776FE75390A895FF1421FF4F7 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m466FD283556A50A24CD0DDA2BB2DD7D704A5CB50 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m9D2B93EB85307730A80B2CE73E968FF75E22361C (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_index, int32_t ___1_hashCode, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m49A16C018337FDAB79E1D4BFCDC88F91B135DEF9 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m3AED34CF2F567B05BA093394C98ACB61BD52E247 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m63A8EFE4D0CDD7FC3D5F49C707713BBA96F99C24 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0B5A0C3294DC2D2E9BF2BFCC4E92F04E8A6416E0 (Enumerator_t5C51B89A2548200F55BD9FD122927359BA4D6C4F* __this, HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m4760A6CCCFB088F092D14D512C33919EA9714F65 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m4CAAC948169F4EFFA0934B9E6CE7DA0EDE4D244A (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m81838A1F104FBBCDD5C6811BD6C3717AE42CB5DC_inline (Predicate_1_t3C049B1B2E42E83B842DF97FD66D519DA80D5F0C* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mD2A0F7A2BC421305BF8A1BDA8C480E54BA55A28C (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m0DA280BDD10BEE337900568C4F8C17BC8C3D2750 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* EqualityComparer_1_get_Default_mF00E6E86D7E7FBC14582A2E06BC461183D5A7582_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mABCF0D2838F75EE5FB0EEC24F28C600BD93D3A87 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3023228F481122875227BB58F35C9D9C5E496DA7 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m621D9D4D8627A9C221C2D49B7433C0F4524E94B3 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m8C44F75AC1DCED4F3CD641DEA487E6E47D070747 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m5E1F9C0B2D4F5A939E44840777D253BD730B1717 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mDA45DB33DB221D7D3838271D1A1B72DDBDFADE58 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m76D3ED013D4B7EE959ACAF70E11B224C1801DD41 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mB045B77C4D25077FD6BA9502869BD574FAE4CD7A (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_index, int32_t ___1_hashCode, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m8D5B41C8A26946F560372912F0167E9D9DF97B32 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m8BCF38C552447FF80D8DA5589E666A7F1180CE42 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m116D5FEFFF650B5929CAB371BA641C53F6D60A83 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFA52AD7F5AE20EB34EC849239CEA82DA82A3F20C (Enumerator_t1110E0B993C4C378B99A7EE22024CC06D07BA97C* __this, HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m682CC4197C8B2A1E8CB2E1B5C38E892A4FBAC7A5 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m6CD3DC0FE93813913EB693DCBB074181C35BF844 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m05C5A23AFB6C565071E1E1192DCC3DE5CE5035B7_inline (Predicate_1_tEA79AA4099AC5E37355537A7E3D5D421B8E0C8E6* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m13F08A32D567B4A16109BBBDFA4F3791D7C3726C (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m599C2136AAA8B85D9724FF18ABE264974106FA46 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* EqualityComparer_1_CreateComparer_m5641C6C3F2BDF42B483859C7C1A734FB901C288B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* EqualityComparer_1_CreateComparer_mF604E0C159C27034DB312EA1AD3A026618433378 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* EqualityComparer_1_CreateComparer_m4E64AAE802462A678408F709D7B1A2E4F1FD603F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* EqualityComparer_1_CreateComparer_mC981CE792065DC096B3A50940E29759945C78256 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* EqualityComparer_1_CreateComparer_m84CBAEA0E45887F64B46515E065CC53779DBF05B (const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC8EB7E5E12FA6F38890EB2435FF06B81B3BBBB0A (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA74E823F988E9515688F756D0DD9223AE0248596 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_m2D30A02470631B29664BF3981E958399DCD05E59 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_set1, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_fshared)(___0_set1, ___1_set2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m76A9036184E9E454D1A7553EF88A707525F27A8A (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m324C75B2D781E7BF38384F10C30AEC7668EB7CDA (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mFDA37D3F003EF52B5E93673AE3ED38E04D5DB500 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m6D3D24A6F1E5CB0ABD85841349382CE64EF2F690 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3C27BBD4EFB01EA7A8B2DE3F0E12CD9E449950DF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFE3FD5858B2622B0DB3A98E965A87270E087E292 (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mAFBFB4E9CC9508A1AE5E2FD2A63AEE373D77C409 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m6B2495F23F97908BC4EE3B987C1F16093E922C62 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m7EE99125BBB78B18669A0B9760A5F6E4A01454FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* EqualityComparer_1_get_Default_m33839529811E5B677FAC3708C8617567B0D8A1AB_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA593337684C1715F8F7DDDE4399536CB8767D9AE (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m48DF5063EEA93A7753ECFC022584BC5879F67BB3 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mE79F5A3C8490054B23264CA3292ED4ECD6AE7A1E (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_mEE3BE892E186C9374F85D41990FB9EC272705F9C (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___0_set1, HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B*, HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_fshared)(___0_set1, ___1_set2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m9D129AAD52690789DC1E875DA22208A523541411 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m12456C0B5F2BD37BD07B7CFDA9F116F25281B6D1 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mE7E76F7B64EAB9DB84193329E6DE509AA98D922A (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mF4BE03AACFEFADB2AF97B062CCBF788B4B45B8D3 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mE3EB6B7254469CC1B786252C4CC9E221D59D5D70 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_index, int32_t ___1_hashCode, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mA1B61994FAB542B6C40F2B1F6BDD417501CDA050 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mA1CB8FE8A84C5D1386228D2ABBC9BCB047D163AB (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mCCACCE15A67A4C2F57BBCEE9FF8856544DC2CF2F (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m95D3F3FF905181D3CD46CD2426F4F37FD426B81C (Enumerator_tEB94B2558F92A47485AA174C64C70B81F71AD5D2* __this, HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mEE0682F788B7CB4A00C5FD93576ABF58350CF2FD (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___0_array, const RuntimeMethod* method) ;
inline void HashSet_1_Clear_m56D38E234BDE97079710F068E3EAE1D14D26BE38 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDCCB1329C655014754502005D24A65823666CA5A (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8B4BDF53D356DC2B6824AECCDFD936A57EBBA0FD_inline (Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m601FAA1088C6E2673429E100BD859DC44074A8B7 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m75E93F1A8CC2B3C092B09C717B5F4B3612FC7DBB (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* EqualityComparer_1_get_Default_m1701DA58877D954684AA859977226F1A3CA29FE4_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m37AE72B655C69E26D791659C8010BE8B245A4063 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB54C9343C334B5DF741F28762DF3BF609B75F89D (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4ECE243C46B2A94CCA3027A28B9A6DC82116BDA1 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_m6694965D6BDADD5CC238865E1F76F61D92B2716A (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* ___0_set1, HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB*, HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_fshared)(___0_set1, ___1_set2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m53463D3FFA27A76F7521DAEF5469DF6F6295EC6C (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m67E5A95B8244932B307D14673CCD6D07BE59325D (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m84E2C5ACA46A29746138313D4414CD419E02F512 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mBF9125A1637F70253CCB30F0AB844E81ED3BF380 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m67C432A0E7F7FA094BF47EB394AD8A8455465740 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_index, int32_t ___1_hashCode, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mCC507641C9E7CFEB28D8E9B48CA94F6FEECA73FC (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mFE9CDE443CAB0ED62AD337734F4B762CEA92FEA5 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m360C074565C02AC8ADB02864B6F95A423BF5851E (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m21BBCA1790F5990FBBA013E7FCB6A3166ACAFDF5 (Enumerator_t53D40B7BF4015A0F49792E6A13378BEBA8D91361* __this, HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m4D50A936F51B7B36167032A5486C1B375DE01A54 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* ___0_array, const RuntimeMethod* method) ;
inline void HashSet_1_Clear_m77FC5DB22FE5492542CD8124700F1366FA7781DB (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mC3242AE1A0E7E0481D26A2A6369F8B257624C55C_inline (Predicate_1_tA09A22025D8A8B89F9E77A582841E684EA7E759F* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m745CF1B9E09C7188E58F45CBDFF43E5BA42B9620 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mBCC8B79F43F226EFB55237BC8AF1B038FD8A7D36 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* EqualityComparer_1_get_Default_m4A0896866DFD0BFADEBA26A14A4072AC9D9917D8_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFC3ABD9B392DE2F40985925ABC08BA1459B5F6E4 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD073B28596FF3A83B06D2C917FCF2D10F5D94372 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m6697C93FA4EE093921C5765C6F3484777246EE12 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_m3EB2FC760B463CDCE0838CAFB44F137DB6A77BFF (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* ___0_set1, HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243*, HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_fshared)(___0_set1, ___1_set2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mF6B7A9579D122B655180B1B56EB3DA87F3D46167 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m47155C7D260A5C12CC93E90A14D4554D17E37F1F (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m39B566378AD1EF02E6E6D135E8F5AA7216EFB45F (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mBEF82257C8F5AFE73305A602536496BE0E512E23 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m0594A940F2ADB614CAA703B0F1DFCD15A6CA6329 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_index, int32_t ___1_hashCode, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mE4C9D1F8BFD05EA7EDAD5D186153A5135AE293ED (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m54D386E54FD853D8B410D65049B7B5E9D96244BD (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m47AF3F67F0D00BF19747208D1B3A3233AEDBC95A (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m460D0268E0EAD8DDF942699DB292BA7FC04B31BD (Enumerator_tF8E69BF07F9F02F7353403E775CC0C7C9D5920A7* __this, HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mD7019504367CF88BF03BF13365DBA24FA58FAE84 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* ___0_array, const RuntimeMethod* method) ;
inline void HashSet_1_Clear_m4EBCE5BD30890632D42A7037DB4B52FE36F06488 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDB799908FE78068E57CBAC14B4E85314BC5F7ABE (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD00114316CACFD296E750222C808E712960B78FF_inline (Predicate_1_tB989E899E4E9154054171E9C43DE93B6E2AC6FCC* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m3CD22E798A2CE8BA8CA466AA43AC54CD8523C5EC (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m048FA262F10970373C3496B36D2BAC845C2F9B6E (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set1, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_fshared)(___0_set1, ___1_set2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_index, int32_t ___1_hashCode, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
inline void HashSet_1_Clear_m756D9726C9F4BFB2C3500A8A9F27FF47A550EC1D (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline void HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mFCDFCE9F84E8B082D8437ADEBC2510701403EFB1 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mFCDFCE9F84E8B082D8437ADEBC2510701403EFB1_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_set1, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_fshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m028A58CFB5CA2ADFA2DB7DA34F5AC5D8B6265BE2 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_CopyFrom_m028A58CFB5CA2ADFA2DB7DA34F5AC5D8B6265BE2_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m2E98FD13307EF10E42ECB39FED69CFAC76491024 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_TrimExcess_m2E98FD13307EF10E42ECB39FED69CFAC76491024_gshared)(__this, method);
}
inline void HashSet_1_AddValue_m1FDBBBAFA1029BF3FDD33A556E6145B3CF95E49A (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_index, int32_t ___1_hashCode, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, int32_t, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_AddValue_m1FDBBBAFA1029BF3FDD33A556E6145B3CF95E49A_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B*, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_m83B5F0C3F341B138AD189241E6762A78BD201667 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, const RuntimeMethod*))HashSet_1_CopyTo_m83B5F0C3F341B138AD189241E6762A78BD201667_gshared)(__this, ___0_array, method);
}
inline void HashSet_1_Clear_m4C8B89A7D6EE903FEDF2AE7EB15C12372E770087 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
inline bool HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88*, Il2CppSharedGenericObject*, const RuntimeMethod*))Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline)(__this, ___0_obj, method);
}
inline void HashSet_1_SetCapacity_m37222ED818520CDC7B7D634E6DE4C9A3248648B8 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m37222ED818520CDC7B7D634E6DE4C9A3248648B8_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_mAE35D751DCAC8CDD71BE675A190D2DF9CAB2B946 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_mAE35D751DCAC8CDD71BE675A190D2DF9CAB2B946_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5 (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5_fshared)(__this, ___0_set, method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline)(method);
}
inline void HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_mCDCBCF67914F9F88FE8F46CDF4FF7F02972B0C92 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mCDCBCF67914F9F88FE8F46CDF4FF7F02972B0C92_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_m5E87B79B4FAE21AB1EBA9FCECC8E3828BBAF1705 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m5E87B79B4FAE21AB1EBA9FCECC8E3828BBAF1705_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_set1, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_fshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m978CC93C745B8F3687AD7969B0E7AEED974ABF5B (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_CopyFrom_m978CC93C745B8F3687AD7969B0E7AEED974ABF5B_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mD9C2C94294AE71FE28BB7EBE1D856E0942D7F120 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mD9C2C94294AE71FE28BB7EBE1D856E0942D7F120_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m265D56C5A03DC6473FC91B32E34BD38FCC0C3AF1 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_TrimExcess_m265D56C5A03DC6473FC91B32E34BD38FCC0C3AF1_gshared)(__this, method);
}
inline void HashSet_1_AddValue_m4C6337D769BC083E636B55B9DD25C5B0BBB7CFEA (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, int32_t, int32_t, const RuntimeMethod*))HashSet_1_AddValue_m4C6337D769BC083E636B55B9DD25C5B0BBB7CFEA_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026 (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65*, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_m5F346A005CA1BC8F871E36DDDCC26C310A1851FB (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*, const RuntimeMethod*))HashSet_1_CopyTo_m5F346A005CA1BC8F871E36DDDCC26C310A1851FB_gshared)(__this, ___0_array, method);
}
inline void HashSet_1_Clear_m3A65B0CC7DF750490916D98C62E7434024BE21DB (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
inline bool HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m0D65AFF43065FE03318CBDDB2A1E63B51476FB9A_inline (Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2*, int32_t, const RuntimeMethod*))Predicate_1_Invoke_m0D65AFF43065FE03318CBDDB2A1E63B51476FB9A_gshared_inline)(__this, ___0_obj, method);
}
inline void HashSet_1_SetCapacity_mD52B5DA7BA680E5FFC237284B322EECCD570272E (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_mD52B5DA7BA680E5FFC237284B322EECCD570272E_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_m5A24DE79434A627CC158B3751DEEBA7F9889783F (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m5A24DE79434A627CC158B3751DEEBA7F9889783F_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* EqualityComparer_1_get_Default_m32928E69E3C6D1697740EC456BC3B9A5AC93C349_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m531DBABA15EA98DBF5C6DE1E62AFB1D012010187 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mEDD53ACF25430B43F18F9F26CB5A2B0965A376D9 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mCBEBF1086E34EC0DEE386D311ED3DEA76D4CD98C (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_mEE394AFA44F08946E4A1ACF6CAECE1E66E9DC95D (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* ___0_set1, HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF*, HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_fshared)(___0_set1, ___1_set2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mA36218D70D462C8D4E428890ADA815B2921DB648 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mDEF32368B249831F004B3F47C54931AECB967034 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m1950DF531B90F5C776FE75390A895FF1421FF4F7 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m466FD283556A50A24CD0DDA2BB2DD7D704A5CB50 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m9D2B93EB85307730A80B2CE73E968FF75E22361C (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_index, int32_t ___1_hashCode, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m49A16C018337FDAB79E1D4BFCDC88F91B135DEF9 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m3AED34CF2F567B05BA093394C98ACB61BD52E247 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m63A8EFE4D0CDD7FC3D5F49C707713BBA96F99C24 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0B5A0C3294DC2D2E9BF2BFCC4E92F04E8A6416E0 (Enumerator_t5C51B89A2548200F55BD9FD122927359BA4D6C4F* __this, HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m4760A6CCCFB088F092D14D512C33919EA9714F65 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* ___0_array, const RuntimeMethod* method) ;
inline void HashSet_1_Clear_mD5D17E3B1F72BBDDDD63954001A4EC939198E90D (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m4CAAC948169F4EFFA0934B9E6CE7DA0EDE4D244A (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m81838A1F104FBBCDD5C6811BD6C3717AE42CB5DC_inline (Predicate_1_t3C049B1B2E42E83B842DF97FD66D519DA80D5F0C* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mD2A0F7A2BC421305BF8A1BDA8C480E54BA55A28C (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m0DA280BDD10BEE337900568C4F8C17BC8C3D2750 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* EqualityComparer_1_get_Default_mF00E6E86D7E7FBC14582A2E06BC461183D5A7582_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mABCF0D2838F75EE5FB0EEC24F28C600BD93D3A87 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3023228F481122875227BB58F35C9D9C5E496DA7 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m621D9D4D8627A9C221C2D49B7433C0F4524E94B3 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_m2DF09488D63AE1F6DD854C68FCCB94E6A05E3EB0 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* ___0_set1, HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09*, HashSet_1_tC2D03386892405F3505A765D17445886085A7A09*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_fshared)(___0_set1, ___1_set2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m8C44F75AC1DCED4F3CD641DEA487E6E47D070747 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m5E1F9C0B2D4F5A939E44840777D253BD730B1717 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mDA45DB33DB221D7D3838271D1A1B72DDBDFADE58 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m76D3ED013D4B7EE959ACAF70E11B224C1801DD41 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mB045B77C4D25077FD6BA9502869BD574FAE4CD7A (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_index, int32_t ___1_hashCode, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m8D5B41C8A26946F560372912F0167E9D9DF97B32 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m8BCF38C552447FF80D8DA5589E666A7F1180CE42 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m116D5FEFFF650B5929CAB371BA641C53F6D60A83 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFA52AD7F5AE20EB34EC849239CEA82DA82A3F20C (Enumerator_t1110E0B993C4C378B99A7EE22024CC06D07BA97C* __this, HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m682CC4197C8B2A1E8CB2E1B5C38E892A4FBAC7A5 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* ___0_array, const RuntimeMethod* method) ;
inline void HashSet_1_Clear_m6471E8D9E40E61D5B2DD699EC1257D025815F6F2 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09*, const RuntimeMethod*))HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m6CD3DC0FE93813913EB693DCBB074181C35BF844 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m05C5A23AFB6C565071E1E1192DCC3DE5CE5035B7_inline (Predicate_1_tEA79AA4099AC5E37355537A7E3D5D421B8E0C8E6* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m13F08A32D567B4A16109BBBDFA4F3791D7C3726C (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m599C2136AAA8B85D9724FF18ABE264974106FA46 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* EqualityComparer_1_CreateComparer_m5641C6C3F2BDF42B483859C7C1A734FB901C288B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* EqualityComparer_1_CreateComparer_mF604E0C159C27034DB312EA1AD3A026618433378 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* EqualityComparer_1_CreateComparer_m4E64AAE802462A678408F709D7B1A2E4F1FD603F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method) ;
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* EqualityComparer_1_CreateComparer_mC981CE792065DC096B3A50940E29759945C78256 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* EqualityComparer_1_CreateComparer_m84CBAEA0E45887F64B46515E065CC53779DBF05B (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0;
		L_0 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1;
		L_1 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB61A4173FD9D000867524949D5E105DE2C1B7D54 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1;
		L_1 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mC8EB7E5E12FA6F38890EB2435FF06B81B3BBBB0A(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3F29A5426149F521CEE6900B9A4097810124ED8E (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1;
		L_1 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mA74E823F988E9515688F756D0DD9223AE0248596(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA74E823F988E9515688F756D0DD9223AE0248596 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m2D30A02470631B29664BF3981E958399DCD05E59(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_7 = V_0;
		HashSet_1_CopyFrom_m76A9036184E9E454D1A7553EF88A707525F27A8A(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m324C75B2D781E7BF38384F10C30AEC7668EB7CDA(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mFDA37D3F003EF52B5E93673AE3ED38E04D5DB500(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m76A9036184E9E454D1A7553EF88A707525F27A8A (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_m6D3D24A6F1E5CB0ABD85841349382CE64EF2F690(__this, L_29, L_30, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC8EB7E5E12FA6F38890EB2435FF06B81B3BBBB0A (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m8DCCFBE982C11AAB3D29ED804447945A4FFC110B (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_2;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		int32_t L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mD398237C598AECB4793962F1E4DBA8BBA5DBE38B (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m3C27BBD4EFB01EA7A8B2DE3F0E12CD9E449950DF(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		int32_t L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = __this->____freeList;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_36;
		int32_t L_37 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_38 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = __this->____count;
		if (L_39)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_40 = V_5;
		__this->____freeList = L_40;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_41 = V_3;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_42 = V_4;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_44 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_0135:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_5;
		V_2 = L_46;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_47 = V_4;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next;
		V_5 = L_49;
	}

IL_014c:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 HashSet_1_GetEnumerator_m55BD13C9FD783AFB7B5B8F018E3008E05137A360 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFE3FD5858B2622B0DB3A98E965A87270E087E292((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mFB5AA335BD4906485CB12ED2FBFFAF51FA3F1EBB (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFE3FD5858B2622B0DB3A98E965A87270E087E292((&L_0), __this, NULL);
		Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mE1616E3A1216DC33957C20680B934BC088CECEBA (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFE3FD5858B2622B0DB3A98E965A87270E087E292((&L_0), __this, NULL);
		Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m225089E5EADAC464572D74B63933A7D9ACD63349 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		HashSet_1_CopyTo_mAFBFB4E9CC9508A1AE5E2FD2A63AEE373D77C409(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mE05F83949ED3974F2CB3209AA5925C2E0B62BF4B (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_11 = (SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)(SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B(__this, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m324C75B2D781E7BF38384F10C30AEC7668EB7CDA (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6);
				V_1 = L_7;
				int32_t L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
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

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_mD32D2B9F71BE0E1C4624DF7FF318D5124A936244 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				int32_t L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
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

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mAFBFB4E9CC9508A1AE5E2FD2A63AEE373D77C409 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m3C27BBD4EFB01EA7A8B2DE3F0E12CD9E449950DF(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3C27BBD4EFB01EA7A8B2DE3F0E12CD9E449950DF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (int32_t)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m14A96615AA5F5F1497A6E01A5DF2BF13F022325E (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_8 = ___0_match;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mFDA37D3F003EF52B5E93673AE3ED38E04D5DB500 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_5 = (SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)(SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8)L_16);
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_5 = (SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)(SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m7EE99125BBB78B18669A0B9760A5F6E4A01454FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m6B2495F23F97908BC4EE3B987C1F16093E922C62(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m6B2495F23F97908BC4EE3B987C1F16093E922C62 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_1 = (SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)(SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_3 = __this->____slots;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		int32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		int32_t L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m7EE99125BBB78B18669A0B9760A5F6E4A01454FF(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		int32_t L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m6D3D24A6F1E5CB0ABD85841349382CE64EF2F690 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		int32_t L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		int32_t L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mCCBBA7A7E1C76C56AA42BDB67DD077178C0A828F (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* L_0;
		L_0 = EqualityComparer_1_get_Default_m33839529811E5B677FAC3708C8617567B0D8A1AB_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mA593337684C1715F8F7DDDE4399536CB8767D9AE(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA593337684C1715F8F7DDDE4399536CB8767D9AE (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* L_1;
		L_1 = EqualityComparer_1_get_Default_m33839529811E5B677FAC3708C8617567B0D8A1AB_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3CEFDA5A9AFB1AF5D55005C81FF129DB1F4529FA (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* L_1;
		L_1 = EqualityComparer_1_get_Default_m33839529811E5B677FAC3708C8617567B0D8A1AB_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m48DF5063EEA93A7753ECFC022584BC5879F67BB3(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB44CEE232ED8200AA578E856F0120001CD8959BF (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* L_1;
		L_1 = EqualityComparer_1_get_Default_m33839529811E5B677FAC3708C8617567B0D8A1AB_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mE79F5A3C8490054B23264CA3292ED4ECD6AE7A1E(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mE79F5A3C8490054B23264CA3292ED4ECD6AE7A1E (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mA593337684C1715F8F7DDDE4399536CB8767D9AE(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mEE3BE892E186C9374F85D41990FB9EC272705F9C(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* L_7 = V_0;
		HashSet_1_CopyFrom_m9D129AAD52690789DC1E875DA22208A523541411(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m12456C0B5F2BD37BD07B7CFDA9F116F25281B6D1(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mE7E76F7B64EAB9DB84193329E6DE509AA98D922A(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mF4BE03AACFEFADB2AF97B062CCBF788B4B45B8D3(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m9D129AAD52690789DC1E875DA22208A523541411 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_m12456C0B5F2BD37BD07B7CFDA9F116F25281B6D1(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_mE3EB6B7254469CC1B786252C4CC9E221D59D5D70(__this, L_29, L_30, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m48DF5063EEA93A7753ECFC022584BC5879F67BB3 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mA593337684C1715F8F7DDDE4399536CB8767D9AE(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m12456C0B5F2BD37BD07B7CFDA9F116F25281B6D1(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mE54F826F3B1DE031E41B427D02252DFCFFD14965 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_item, const RuntimeMethod* method) 
{
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mA1B61994FAB542B6C40F2B1F6BDD417501CDA050(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m208059B8D89BB100809C7CA51253201A3B504A0B (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mA1CB8FE8A84C5D1386228D2ABBC9BCB047D163AB(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_2;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mC37F16C733A0C792834FE98C79BB2F0B5F7D64F9 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_mCCACCE15A67A4C2F57BBCEE9FF8856544DC2CF2F(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDCCB1329C655014754502005D24A65823666CA5A (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mA1CB8FE8A84C5D1386228D2ABBC9BCB047D163AB(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
	}
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* L_36 = (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735*)(&((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value);
		il2cpp_codegen_initobj(L_36, sizeof(InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735));
	}

IL_00d1:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_37 = V_4;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = __this->____freeList;
		((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___next = L_39;
		int32_t L_40 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = __this->____count;
		if (L_42)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_43 = V_5;
		__this->____freeList = L_43;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_44 = V_3;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_47 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_0135:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_5;
		V_2 = L_49;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_50 = V_4;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___next;
		V_5 = L_52;
	}

IL_014c:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEB94B2558F92A47485AA174C64C70B81F71AD5D2 HashSet_1_GetEnumerator_mBFD95C9855C3832DAEAEA8C73E0CA35B78E718E0 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEB94B2558F92A47485AA174C64C70B81F71AD5D2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m95D3F3FF905181D3CD46CD2426F4F37FD426B81C((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9B71E050942AF2DF503B91F095E91A0DE13C5AE1 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEB94B2558F92A47485AA174C64C70B81F71AD5D2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m95D3F3FF905181D3CD46CD2426F4F37FD426B81C((&L_0), __this, NULL);
		Enumerator_tEB94B2558F92A47485AA174C64C70B81F71AD5D2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mEDCBDF387EB71BF2FC73D1DAF9A2605296BF4CD3 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEB94B2558F92A47485AA174C64C70B81F71AD5D2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m95D3F3FF905181D3CD46CD2426F4F37FD426B81C((&L_0), __this, NULL);
		Enumerator_tEB94B2558F92A47485AA174C64C70B81F71AD5D2 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m3EA07CB405178425AAE9EE459AFC9707178BCB08 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_14 = (InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5*)(InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_15 = V_0;
		HashSet_1_CopyTo_mEE0682F788B7CB4A00C5FD93576ABF58350CF2FD(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m082B963E72C36EC10B68BE5002612E307632931A (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_11 = (SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)(SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5*)CastclassSealed((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mA1B61994FAB542B6C40F2B1F6BDD417501CDA050(__this, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2E138E1B572E38E2A758B658241F9AB54D84863E (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_item, const RuntimeMethod* method) 
{
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mA1B61994FAB542B6C40F2B1F6BDD417501CDA050(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mE7E76F7B64EAB9DB84193329E6DE509AA98D922A (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_7;
				L_7 = InterfaceFuncInvoker0< InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6);
				V_1 = L_7;
				InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mA1B61994FAB542B6C40F2B1F6BDD417501CDA050(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
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

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m8671C54C24AA5DECD496BDB55B3DE15893441FC5 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m56D38E234BDE97079710F068E3EAE1D14D26BE38(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9;
				L_9 = InterfaceFuncInvoker0< InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_mDCCB1329C655014754502005D24A65823666CA5A(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
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

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mEE0682F788B7CB4A00C5FD93576ABF58350CF2FD (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___0_array, const RuntimeMethod* method) 
{
	{
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_mCCACCE15A67A4C2F57BBCEE9FF8856544DC2CF2F(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mCCACCE15A67A4C2F57BBCEE9FF8856544DC2CF2F (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m297747EB2D2F9496E70AFB2A5AF3AD551FB6240C (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* L_8 = ___0_match;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_m8B4BDF53D356DC2B6824AECCDFD936A57EBBA0FD_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mDCCB1329C655014754502005D24A65823666CA5A(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mF4BE03AACFEFADB2AF97B062CCBF788B4B45B8D3 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_5 = (SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)(SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992)L_16);
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m12456C0B5F2BD37BD07B7CFDA9F116F25281B6D1 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_5 = (SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)(SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m75E93F1A8CC2B3C092B09C717B5F4B3612FC7DBB (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m601FAA1088C6E2673429E100BD859DC44074A8B7(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m601FAA1088C6E2673429E100BD859DC44074A8B7 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_1 = (SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)(SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_3 = __this->____slots;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mA1B61994FAB542B6C40F2B1F6BDD417501CDA050 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m12456C0B5F2BD37BD07B7CFDA9F116F25281B6D1(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_mA1CB8FE8A84C5D1386228D2ABBC9BCB047D163AB(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m75E93F1A8CC2B3C092B09C717B5F4B3612FC7DBB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___m_StringLowerCase), (void*)NULL);
		#endif
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mE3EB6B7254469CC1B786252C4CC9E221D59D5D70 (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, int32_t ___0_index, int32_t ___1_hashCode, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___m_StringLowerCase), (void*)NULL);
		#endif
		SlotU5BU5D_t123558B2D530E4B5BD1DE3DEE7D54DDEEF5B44F0* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mA1CB8FE8A84C5D1386228D2ABBC9BCB047D163AB (HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4321A942505EDE6B0C4A1E0C0F4AFBA5D04729B9 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* L_0;
		L_0 = EqualityComparer_1_get_Default_m1701DA58877D954684AA859977226F1A3CA29FE4_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m37AE72B655C69E26D791659C8010BE8B245A4063(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m37AE72B655C69E26D791659C8010BE8B245A4063 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* L_1;
		L_1 = EqualityComparer_1_get_Default_m1701DA58877D954684AA859977226F1A3CA29FE4_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mE9BBADC8DC2EFAB269306ED519B82E0F5E39BAC7 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* L_1;
		L_1 = EqualityComparer_1_get_Default_m1701DA58877D954684AA859977226F1A3CA29FE4_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mB54C9343C334B5DF741F28762DF3BF609B75F89D(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mE109802EC31C70B936E1686F2D1C53BAECEE0477 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* L_1;
		L_1 = EqualityComparer_1_get_Default_m1701DA58877D954684AA859977226F1A3CA29FE4_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m4ECE243C46B2A94CCA3027A28B9A6DC82116BDA1(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4ECE243C46B2A94CCA3027A28B9A6DC82116BDA1 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m37AE72B655C69E26D791659C8010BE8B245A4063(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m6694965D6BDADD5CC238865E1F76F61D92B2716A(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_7 = V_0;
		HashSet_1_CopyFrom_m53463D3FFA27A76F7521DAEF5469DF6F6295EC6C(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m67E5A95B8244932B307D14673CCD6D07BE59325D(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m84E2C5ACA46A29746138313D4414CD419E02F512(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mBF9125A1637F70253CCB30F0AB844E81ED3BF380(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m53463D3FFA27A76F7521DAEF5469DF6F6295EC6C (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_m67E5A95B8244932B307D14673CCD6D07BE59325D(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_m67C432A0E7F7FA094BF47EB394AD8A8455465740(__this, L_29, L_30, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB54C9343C334B5DF741F28762DF3BF609B75F89D (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m37AE72B655C69E26D791659C8010BE8B245A4063(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m67E5A95B8244932B307D14673CCD6D07BE59325D(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m05ECCF2A423A3ADCE3CC70FBE4783B9B97DE1D4A (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) 
{
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mCC507641C9E7CFEB28D8E9B48CA94F6FEECA73FC(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m0D79EAECE46ED7F69840100B63E7DE7D2EE4BFEE (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mFE9CDE443CAB0ED62AD337734F4B762CEA92FEA5(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_2;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m657576C0FA6008A083F573CCF127A05BC42457A0 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m360C074565C02AC8ADB02864B6F95A423BF5851E(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mFE9CDE443CAB0ED62AD337734F4B762CEA92FEA5(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = __this->____freeList;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_36;
		int32_t L_37 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_38 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = __this->____count;
		if (L_39)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_40 = V_5;
		__this->____freeList = L_40;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_41 = V_3;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_42 = V_4;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_44 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_0135:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_5;
		V_2 = L_46;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_47 = V_4;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next;
		V_5 = L_49;
	}

IL_014c:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t53D40B7BF4015A0F49792E6A13378BEBA8D91361 HashSet_1_GetEnumerator_m24450750EBC550E9E3AB649F62EA49F40999E52F (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t53D40B7BF4015A0F49792E6A13378BEBA8D91361 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m21BBCA1790F5990FBBA013E7FCB6A3166ACAFDF5((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20B5CAD86E4D745B402D751DC133312DB07CB9C6 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t53D40B7BF4015A0F49792E6A13378BEBA8D91361 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m21BBCA1790F5990FBBA013E7FCB6A3166ACAFDF5((&L_0), __this, NULL);
		Enumerator_t53D40B7BF4015A0F49792E6A13378BEBA8D91361 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m563FDD2C7B7546E592DFE7CBE9A8F93BD917F767 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t53D40B7BF4015A0F49792E6A13378BEBA8D91361 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m21BBCA1790F5990FBBA013E7FCB6A3166ACAFDF5((&L_0), __this, NULL);
		Enumerator_t53D40B7BF4015A0F49792E6A13378BEBA8D91361 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_mBCAF6A42ADB7233DF9D43CDCA28A3236414800AD (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_14 = (MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01*)(MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_15 = V_0;
		HashSet_1_CopyTo_m4D50A936F51B7B36167032A5486C1B375DE01A54(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m91C50F768CEAD59A6487E8EFDDF736794854D8F4 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_11 = (SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)(SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01*)CastclassSealed((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mCC507641C9E7CFEB28D8E9B48CA94F6FEECA73FC(__this, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mE900C9FCB26E90C930D45CB9B1F65869D4ED4AC0 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) 
{
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mCC507641C9E7CFEB28D8E9B48CA94F6FEECA73FC(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m84E2C5ACA46A29746138313D4414CD419E02F512 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_7;
				L_7 = InterfaceFuncInvoker0< MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6);
				V_1 = L_7;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mCC507641C9E7CFEB28D8E9B48CA94F6FEECA73FC(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
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

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m768354411E9514AF96032B5DC6F48741A151656B (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m77FC5DB22FE5492542CD8124700F1366FA7781DB(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_9;
				L_9 = InterfaceFuncInvoker0< MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
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

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m4D50A936F51B7B36167032A5486C1B375DE01A54 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* ___0_array, const RuntimeMethod* method) 
{
	{
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m360C074565C02AC8ADB02864B6F95A423BF5851E(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m360C074565C02AC8ADB02864B6F95A423BF5851E (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		MeshIdU5BU5D_t3E39DFB92817D0E90346DA8E65BFB634DC640E01* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m38659885C81BEC1C8606ADA27FBF5936E481D364 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, Predicate_1_tA09A22025D8A8B89F9E77A582841E684EA7E759F* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_tA09A22025D8A8B89F9E77A582841E684EA7E759F* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_tA09A22025D8A8B89F9E77A582841E684EA7E759F* L_8 = ___0_match;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mC3242AE1A0E7E0481D26A2A6369F8B257624C55C_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mBF9125A1637F70253CCB30F0AB844E81ED3BF380 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_5 = (SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)(SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t56693191A4E40E6B9446B76179425C639E0AC089 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t56693191A4E40E6B9446B76179425C639E0AC089)L_16);
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m67E5A95B8244932B307D14673CCD6D07BE59325D (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_5 = (SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)(SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mBCC8B79F43F226EFB55237BC8AF1B038FD8A7D36 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m745CF1B9E09C7188E58F45CBDFF43E5BA42B9620(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m745CF1B9E09C7188E58F45CBDFF43E5BA42B9620 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_1 = (SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)(SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_3 = __this->____slots;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mCC507641C9E7CFEB28D8E9B48CA94F6FEECA73FC (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m67E5A95B8244932B307D14673CCD6D07BE59325D(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_mFE9CDE443CAB0ED62AD337734F4B762CEA92FEA5(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mBCC8B79F43F226EFB55237BC8AF1B038FD8A7D36(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m67C432A0E7F7FA094BF47EB394AD8A8455465740 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, int32_t ___0_index, int32_t ___1_hashCode, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mFE9CDE443CAB0ED62AD337734F4B762CEA92FEA5 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m290C0FEA7D032B7A023297BA14ABDEEF3AAA388D (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* L_0;
		L_0 = EqualityComparer_1_get_Default_m4A0896866DFD0BFADEBA26A14A4072AC9D9917D8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mFC3ABD9B392DE2F40985925ABC08BA1459B5F6E4(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFC3ABD9B392DE2F40985925ABC08BA1459B5F6E4 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* L_1;
		L_1 = EqualityComparer_1_get_Default_m4A0896866DFD0BFADEBA26A14A4072AC9D9917D8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m53E4A58A263450147ABE80ACAEE774F4F06389F7 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* L_1;
		L_1 = EqualityComparer_1_get_Default_m4A0896866DFD0BFADEBA26A14A4072AC9D9917D8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mD073B28596FF3A83B06D2C917FCF2D10F5D94372(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m481BEE56FFED39D08B4E3420DF2B96F0EB50AC8F (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* L_1;
		L_1 = EqualityComparer_1_get_Default_m4A0896866DFD0BFADEBA26A14A4072AC9D9917D8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m6697C93FA4EE093921C5765C6F3484777246EE12(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m6697C93FA4EE093921C5765C6F3484777246EE12 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mFC3ABD9B392DE2F40985925ABC08BA1459B5F6E4(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m3EB2FC760B463CDCE0838CAFB44F137DB6A77BFF(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* L_7 = V_0;
		HashSet_1_CopyFrom_mF6B7A9579D122B655180B1B56EB3DA87F3D46167(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m47155C7D260A5C12CC93E90A14D4554D17E37F1F(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m39B566378AD1EF02E6E6D135E8F5AA7216EFB45F(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mBEF82257C8F5AFE73305A602536496BE0E512E23(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mF6B7A9579D122B655180B1B56EB3DA87F3D46167 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_m47155C7D260A5C12CC93E90A14D4554D17E37F1F(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_m0594A940F2ADB614CAA703B0F1DFCD15A6CA6329(__this, L_29, L_30, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD073B28596FF3A83B06D2C917FCF2D10F5D94372 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mFC3ABD9B392DE2F40985925ABC08BA1459B5F6E4(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m47155C7D260A5C12CC93E90A14D4554D17E37F1F(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m00E2B97BE4074636C8EDDED51E5C1C0C27C7E241 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_item, const RuntimeMethod* method) 
{
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mE4C9D1F8BFD05EA7EDAD5D186153A5135AE293ED(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mBFF089381B4F9F83CAB4B68BF69351CDB316A5F0 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m54D386E54FD853D8B410D65049B7B5E9D96244BD(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_2;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m0B8229BF56B4620D100B23F4B02CABFCC1C02DD2 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m47AF3F67F0D00BF19747208D1B3A3233AEDBC95A(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDB799908FE78068E57CBAC14B4E85314BC5F7ABE (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m54D386E54FD853D8B410D65049B7B5E9D96244BD(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
	}
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_36 = (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*)(&((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value);
		il2cpp_codegen_initobj(L_36, sizeof(PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79));
	}

IL_00d1:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_37 = V_4;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = __this->____freeList;
		((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___next = L_39;
		int32_t L_40 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = __this->____count;
		if (L_42)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_43 = V_5;
		__this->____freeList = L_43;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_44 = V_3;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_47 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_0135:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_5;
		V_2 = L_49;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_50 = V_4;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___next;
		V_5 = L_52;
	}

IL_014c:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF8E69BF07F9F02F7353403E775CC0C7C9D5920A7 HashSet_1_GetEnumerator_m6489B1D751E73295030BB63B5D122640BA39856E (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF8E69BF07F9F02F7353403E775CC0C7C9D5920A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m460D0268E0EAD8DDF942699DB292BA7FC04B31BD((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m91AB566D3BAFCB27FB576F282F253F8B750C3124 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF8E69BF07F9F02F7353403E775CC0C7C9D5920A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m460D0268E0EAD8DDF942699DB292BA7FC04B31BD((&L_0), __this, NULL);
		Enumerator_tF8E69BF07F9F02F7353403E775CC0C7C9D5920A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m208B25F21CADBCBC2002A42579290D5B214CA805 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF8E69BF07F9F02F7353403E775CC0C7C9D5920A7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m460D0268E0EAD8DDF942699DB292BA7FC04B31BD((&L_0), __this, NULL);
		Enumerator_tF8E69BF07F9F02F7353403E775CC0C7C9D5920A7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m6535D216E50C34DF0363A1A3F31A2190E6C1E8E2 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_14 = (PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1*)(PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_15 = V_0;
		HashSet_1_CopyTo_mD7019504367CF88BF03BF13365DBA24FA58FAE84(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m3E64FA0DF2145EADA3574A8FD271B898F1F07E1A (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_11 = (SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)(SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1*)CastclassSealed((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mE4C9D1F8BFD05EA7EDAD5D186153A5135AE293ED(__this, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m05629EEF0DDCDC30A5AA99F66A11463F35DB3714 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_item, const RuntimeMethod* method) 
{
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mE4C9D1F8BFD05EA7EDAD5D186153A5135AE293ED(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m39B566378AD1EF02E6E6D135E8F5AA7216EFB45F (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_7;
				L_7 = InterfaceFuncInvoker0< PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6);
				V_1 = L_7;
				PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mE4C9D1F8BFD05EA7EDAD5D186153A5135AE293ED(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
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

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m4563BA45A276202EA123B43F4AFD97D4B51EAF1F (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m4EBCE5BD30890632D42A7037DB4B52FE36F06488(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_9;
				L_9 = InterfaceFuncInvoker0< PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_mDB799908FE78068E57CBAC14B4E85314BC5F7ABE(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
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

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mD7019504367CF88BF03BF13365DBA24FA58FAE84 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* ___0_array, const RuntimeMethod* method) 
{
	{
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m47AF3F67F0D00BF19747208D1B3A3233AEDBC95A(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m47AF3F67F0D00BF19747208D1B3A3233AEDBC95A (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		PropertyPathU5BU5D_t3242F5318E9FCD964C859C73D015DAC85179CEB1* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m31CA1A848885EF41EE3FD274ACB28F038E1B775F (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, Predicate_1_tB989E899E4E9154054171E9C43DE93B6E2AC6FCC* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_tB989E899E4E9154054171E9C43DE93B6E2AC6FCC* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_tB989E899E4E9154054171E9C43DE93B6E2AC6FCC* L_8 = ___0_match;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mD00114316CACFD296E750222C808E712960B78FF_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mDB799908FE78068E57CBAC14B4E85314BC5F7ABE(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mBEF82257C8F5AFE73305A602536496BE0E512E23 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_5 = (SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)(SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1)L_16);
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m47155C7D260A5C12CC93E90A14D4554D17E37F1F (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_5 = (SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)(SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m048FA262F10970373C3496B36D2BAC845C2F9B6E (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m3CD22E798A2CE8BA8CA466AA43AC54CD8523C5EC(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m3CD22E798A2CE8BA8CA466AA43AC54CD8523C5EC (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_1 = (SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)(SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_3 = __this->____slots;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mE4C9D1F8BFD05EA7EDAD5D186153A5135AE293ED (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m47155C7D260A5C12CC93E90A14D4554D17E37F1F(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m54D386E54FD853D8B410D65049B7B5E9D96244BD(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m048FA262F10970373C3496B36D2BAC845C2F9B6E(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___m_AdditionalParts), (void*)NULL);
		#endif
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m0594A940F2ADB614CAA703B0F1DFCD15A6CA6329 (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, int32_t ___0_index, int32_t ___1_hashCode, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___m_AdditionalParts), (void*)NULL);
		#endif
		SlotU5BU5D_tEE507B3AF89409A54A921CA9AF19EA95E275531C* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m54D386E54FD853D8B410D65049B7B5E9D96244BD (HashSet_1_t4FBFDDA1AD07FFD212AA59BAB18C9A86185C2243* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0;
		L_0 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1;
		L_1 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA476795C67986109E5187494DEC5981D25457C86 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1;
		L_1 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB226FE67A69CD8BBFE3F07A9BAB84AB6853A10C6 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1;
		L_1 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_7 = V_0;
		HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		uint32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC(__this, L_29, L_30, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m348E36EA9F5CD3B346A1D013F3E4950DFF39426A (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m02385B663B65E53485251FFFD116D0F26BA172B9 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		uint32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_2;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		uint32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		uint32_t L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m7A73EAC25610F587DD30114203F21E505AB6338C (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		uint32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		uint32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		uint32_t L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = __this->____freeList;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_36;
		int32_t L_37 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_38 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = __this->____count;
		if (L_39)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_40 = V_5;
		__this->____freeList = L_40;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_41 = V_3;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_42 = V_4;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_44 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_0135:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_5;
		V_2 = L_46;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_47 = V_4;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next;
		V_5 = L_49;
	}

IL_014c:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 HashSet_1_GetEnumerator_m519EAE87AF990E90AF0AC67400E9F88D37675611 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6A9D59B9A319E9A8A0FE2F5738A41821BCD74D97 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C((&L_0), __this, NULL);
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m3A48D76992C5D568FB0D0739748467B17D196FDC (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C((&L_0), __this, NULL);
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m062A764FA7943A6A3EFF468126A44868DD745178 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m502E844E033C614B7D9F80E372E5AA9C7C9B872E (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_11 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mDA8E52933A6A885D9FCF549C99489EF5E095BE1E (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				uint32_t L_7;
				L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6);
				V_1 = L_7;
				uint32_t L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
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

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m361BA2407FA8688E1FE9DAB61C67EBE7535D1AF0 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m756D9726C9F4BFB2C3500A8A9F27FF47A550EC1D(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				uint32_t L_9;
				L_9 = InterfaceFuncInvoker0< uint32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				uint32_t L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
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

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		uint32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (uint32_t)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m1D8E57063CD3288C9CACB27466A7002F984FD411 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* L_8 = ___0_match;
		uint32_t L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382)L_16);
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_1 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_3 = __this->____slots;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		uint32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		uint32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		uint32_t L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		uint32_t L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_index, int32_t ___1_hashCode, uint32_t ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		uint32_t L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		uint32_t L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0;
		L_0 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1;
		L_1 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m29CA721F1C302B35D6CBAB2E0A3D7E00B9DC778A_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1;
		L_1 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFE99F8010A42781CF855814597CF0160C7FFB4A5_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1;
		L_1 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mFCDFCE9F84E8B082D8437ADEBC2510701403EFB1(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFCDFCE9F84E8B082D8437ADEBC2510701403EFB1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_7 = V_0;
		HashSet_1_CopyFrom_m028A58CFB5CA2ADFA2DB7DA34F5AC5D8B6265BE2(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m2E98FD13307EF10E42ECB39FED69CFAC76491024(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m028A58CFB5CA2ADFA2DB7DA34F5AC5D8B6265BE2_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Il2CppSharedGenericObject* L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_m1FDBBBAFA1029BF3FDD33A556E6145B3CF95E49A(__this, L_29, L_30, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF8FC537CD21BAD2908F4EC89D6D155406E529902_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		Il2CppSharedGenericObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_2;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		Il2CppSharedGenericObject* L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m4EB641361BDF3FC11FB4CDA8A79424B55AFB3BFA_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		Il2CppSharedGenericObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		Il2CppSharedGenericObject** L_36 = (Il2CppSharedGenericObject**)(&((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value);
		il2cpp_codegen_initobj(L_36, sizeof(Il2CppSharedGenericObject*));
	}

IL_00d1:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_37 = V_4;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = __this->____freeList;
		((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___next = L_39;
		int32_t L_40 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = __this->____count;
		if (L_42)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_43 = V_5;
		__this->____freeList = L_43;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_44 = V_3;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_47 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_0135:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_5;
		V_2 = L_49;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_50 = V_4;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___next;
		V_5 = L_52;
	}

IL_014c:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B HashSet_1_GetEnumerator_m424EB03E25DE615E5944D7BCC698FFE80BEFF568_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7C4EDEF9A1A1238E38791125AF77173136D29EBC_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA((&L_0), __this, NULL);
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m6D162755CCCDAC249342CE4E5EBC477BC28E8823_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA((&L_0), __this, NULL);
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_mD99634BD0AF191CA3EC70A966A839B07FB765690_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = V_0;
		HashSet_1_CopyTo_m83B5F0C3F341B138AD189241E6762A78BD201667(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mFFAE37018AAB07191DF230CF56C687331BCC199E_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_11 = (SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)(SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Il2CppSharedGenericObject* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D(__this, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				Il2CppSharedGenericObject* L_7;
				L_7 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6);
				V_1 = L_7;
				Il2CppSharedGenericObject* L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
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

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_mA328CEBE6E025549E9D544B0DC20F1CCEC010DC5_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m4C8B89A7D6EE903FEDF2AE7EB15C12372E770087(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				Il2CppSharedGenericObject* L_9;
				L_9 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				Il2CppSharedGenericObject* L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
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

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m83B5F0C3F341B138AD189241E6762A78BD201667_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		Il2CppSharedGenericObject* L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (Il2CppSharedGenericObject*)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_mE45557F0DF09C075D4766A041E2C84982308AA79_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_8 = ___0_match;
		Il2CppSharedGenericObject* L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m2E98FD13307EF10E42ECB39FED69CFAC76491024_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_5 = (SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)(SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16)L_16);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_5 = (SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)(SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mAE35D751DCAC8CDD71BE675A190D2DF9CAB2B946_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m37222ED818520CDC7B7D634E6DE4C9A3248648B8(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m37222ED818520CDC7B7D634E6DE4C9A3248648B8_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_1 = (SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)(SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_3 = __this->____slots;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		Il2CppSharedGenericObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		Il2CppSharedGenericObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		Il2CppSharedGenericObject* L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mAE35D751DCAC8CDD71BE675A190D2DF9CAB2B946(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		Il2CppSharedGenericObject* L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value), (void*)L_50);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m1FDBBBAFA1029BF3FDD33A556E6145B3CF95E49A_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_index, int32_t ___1_hashCode, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		Il2CppSharedGenericObject* L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value), (void*)L_8);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		Il2CppSharedGenericObject* L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m938F8F1E5CECD06A2575952EC6D253BF0053EC3D_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAFD9C455FC1D54D3BBD67275A15A02AD4193A4DE_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mDEE8470968EF687DF9B40AE07DE41E0B09652532_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4523730BBAA53ADE100ED764690FEC1639243C75_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_5 = V_0;
		bool L_6;
		L_6 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_7 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA1015BCA85A81FCEC34284D87AAE4E1AB7526FDD_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mFBAD19B5E7335AF392786729D62E2D9B04E0DDF4_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		il2cpp_codegen_memcpy(L_33, il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		InvokerActionInvoker3< int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), __this, L_29, L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_33: *(void**)L_33));
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB3665C091D8A36D90CC380C1D4FA37220DC6C40D_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF6F4FF6F131B5A5671352C1A2E44A08203658B06_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_0: *(void**)L_0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_5, NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m6D40586EE21316C2647D81169AFFF9B4C7719F74_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_17 = L_1;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_1: *(void**)L_1));
		V_1 = L_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_17: *(void**)L_17), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_18: *(void**)L_18));
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22));
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m88DE8E9D3C3D641EB7F4567A05CB23A65AAABB4A_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mE12E434B402CFEB49197444DE1D52A3AE4C7F6EE_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_18 = L_1;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_1: *(void**)L_1));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_19: *(void**)L_19));
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22));
		il2cpp_codegen_write_field_data<int32_t, false>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22), L_31);
	}

IL_00a7:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		il2cpp_codegen_write_field_data<int32_t, false>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), (-1));
		bool L_34;
		L_34 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		if (!L_34)
		{
			goto IL_00d1;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_35 = V_4;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16)))), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	}

IL_00d1:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_37 = V_4;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = __this->____freeList;
		il2cpp_codegen_write_field_data<int32_t, false>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22), L_39);
		int32_t L_40 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = __this->____count;
		if (L_42)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_43 = V_5;
		__this->____freeList = L_43;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_44 = V_3;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_47 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_0135:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_5;
		V_2 = L_49;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_50 = V_4;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22));
		V_5 = L_52;
	}

IL_014c:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m76BECFED2AFB768A9DE14C29899DD46F16044F4D_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetEnumerator_m75DD344FE9A073CA9564DC6A425EC36883FB32A7_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB077531C4148EC6AF72C7EC429E44A8636D2A8AA_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m63E181A7F597D9BB07C674DA40F21F4A2B755FB3_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m2D69A3859D85C85A103B08728E096D87DC9F5715_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)))(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m05AAB1A1992F82537C1125645B4D0D82676561FA_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_22;
		L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_21: *(void**)L_21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m1C3E9C4A4AE3555B04CD0140644DC4387D7592C6_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6, (Il2CppFullySharedGenericAny*)L_7);
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_8, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_9;
				L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_8: *(void**)L_8));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
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

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m36DD4EF6FD936E9120140D6BCCA67DA891759D7E_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37)))(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_1, L_9, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_10: *(void**)L_10));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
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

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3B04E1071B17DF96CD5B72299EE55F25E75EBD50_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3A8192100B5A0772B9962D3F1AA5CF3760ED113F_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_23);
		il2cpp_codegen_memcpy((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), L_28, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15), (void**)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), (void*)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m779C784616153E67C9EB38CEF6875A7DCC2492AA_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_11 = L_7;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_2, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(V_2, L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_8 = ___0_match;
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_8);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_memcpy(L_11, V_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_12;
		L_12 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_11: *(void**)L_11));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m61244B342437754775955075EDF4F12C60341CE0_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	const uint32_t SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13));
	const Slot_tEC146EEEF7022C6542EBF082D658446682962BFD L_16 = alloca(SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
	int32_t V_0 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		il2cpp_codegen_memcpy(L_16, (L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
		NullCheck(L_11);
		il2cpp_codegen_memcpy((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), L_16, SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13), (void**)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), (void*)L_16);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		il2cpp_codegen_write_field_data<int32_t, false>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22), ((int32_t)il2cpp_codegen_subtract(L_26, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mB8584D1E01509492EE6C3DC75184140DBE2F053B_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mC3B321603207D03BD776F91FF7741EFF27621BD2_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40)))(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mA861522E8D0DB9628EEABF16F04BD49C6C0DC774_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_1 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_write_field_data<int32_t, false>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22), ((int32_t)il2cpp_codegen_subtract(L_17, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m58D69C8710CAB51D00282379158F183A79344DFB_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_19 = L_2;
	const Il2CppFullySharedGenericAny L_50 = L_2;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_3;
		L_3 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_2: *(void**)L_2));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_19: *(void**)L_19), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_20: *(void**)L_20));
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22));
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22));
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		il2cpp_codegen_write_field_data<int32_t, false>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_47);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_field_data<true>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16), L_50, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		il2cpp_codegen_write_field_data<int32_t, false>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22), ((int32_t)il2cpp_codegen_subtract(L_56, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m038B507326561F3D8BD44AD54E3FFAC497ED5C05_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_index, int32_t ___1_hashCode, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		il2cpp_codegen_write_field_data<int32_t, false>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_5);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___2_value : &___2_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_field_data<true>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16), L_8, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_write_field_data<int32_t, false>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 13),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22), ((int32_t)il2cpp_codegen_subtract(L_14, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set1, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->____comparer;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->____comparer;
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m1A1758DA258D8DE5AA075333D2B6D4DF0B75A4D6_fshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15), L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = __this->____comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15)) ? L_3: *(void**)L_3));
		return ((int32_t)(L_4&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFA9ABE9EAD278DF60DCED8638691B11924112574_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_0;
		L_0 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1;
		L_1 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m05CD922C8A58A2FC0B03BD567B51E707F484DF87_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1;
		L_1 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mCDCBCF67914F9F88FE8F46CDF4FF7F02972B0C92(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m613AA75C8A30C4D00871800AB27984D83BB5D357_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1;
		L_1 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m5E87B79B4FAE21AB1EBA9FCECC8E3828BBAF1705(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E87B79B4FAE21AB1EBA9FCECC8E3828BBAF1705_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_7 = V_0;
		HashSet_1_CopyFrom_m978CC93C745B8F3687AD7969B0E7AEED974ABF5B(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mD9C2C94294AE71FE28BB7EBE1D856E0942D7F120(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m265D56C5A03DC6473FC91B32E34BD38FCC0C3AF1(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m978CC93C745B8F3687AD7969B0E7AEED974ABF5B_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_m4C6337D769BC083E636B55B9DD25C5B0BBB7CFEA(__this, L_29, L_30, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mCDCBCF67914F9F88FE8F46CDF4FF7F02972B0C92_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m9BAC32E7B754E44559FB523A5D208102062F3EC2_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mE684C73317C3A59D1D277D3C1B456DF23555A57C_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_2;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		int32_t L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m17E41F33EC34CF660E73A8144A3C02F320415319_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		int32_t L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = __this->____freeList;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_36;
		int32_t L_37 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_38 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = __this->____count;
		if (L_39)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_40 = V_5;
		__this->____freeList = L_40;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_41 = V_3;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_42 = V_4;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_44 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_0135:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_5;
		V_2 = L_46;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_47 = V_4;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next;
		V_5 = L_49;
	}

IL_014c:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 HashSet_1_GetEnumerator_mD8064197AE7997F40E2AC5FBB70EE851FCECADA0_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mAA7F6ECF59772981918C64A0B8188010F5E37955_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026((&L_0), __this, NULL);
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m5BB0BE8BBA9F7DE54CB34150BB75F8D48F77E61E_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026((&L_0), __this, NULL);
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_mD2AC22E0E4A0F6E5D537D93004C9D9E5FDAC7509_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_14 = (__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)(__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_15 = V_0;
		HashSet_1_CopyTo_m5F346A005CA1BC8F871E36DDDCC26C310A1851FB(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m5C78FF00814B7A2DDFBAC0BFE68B03D800B57CAF_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_11 = (SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)(SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)CastclassSealed((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113(__this, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mDC432112D14CA9886B702C47A3A1905EB0F2DF21_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mD9C2C94294AE71FE28BB7EBE1D856E0942D7F120_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6);
				V_1 = L_7;
				int32_t L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
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

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m35C35C524D201D1AF60BF37630B64F740B4C2AEB_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m3A65B0CC7DF750490916D98C62E7434024BE21DB(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				int32_t L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
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

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m5F346A005CA1BC8F871E36DDDCC26C310A1851FB_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (int32_t)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_mBB8BDFE95D719DD51B7DFE3F99959AB61D2422E4_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* L_8 = ___0_match;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_m0D65AFF43065FE03318CBDDB2A1E63B51476FB9A_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m265D56C5A03DC6473FC91B32E34BD38FCC0C3AF1_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_5 = (SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)(SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB)L_16);
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_5 = (SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)(SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m5A24DE79434A627CC158B3751DEEBA7F9889783F_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_mD52B5DA7BA680E5FFC237284B322EECCD570272E(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mD52B5DA7BA680E5FFC237284B322EECCD570272E_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_1 = (SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)(SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_3 = __this->____slots;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		int32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		int32_t L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m5A24DE79434A627CC158B3751DEEBA7F9889783F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		int32_t L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m4C6337D769BC083E636B55B9DD25C5B0BBB7CFEA_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		int32_t L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		int32_t L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m8CCC64484FB7270752F3FC5AED1E4EC79FBFD3BB (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* L_0;
		L_0 = EqualityComparer_1_get_Default_m32928E69E3C6D1697740EC456BC3B9A5AC93C349_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m531DBABA15EA98DBF5C6DE1E62AFB1D012010187(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m531DBABA15EA98DBF5C6DE1E62AFB1D012010187 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* L_1;
		L_1 = EqualityComparer_1_get_Default_m32928E69E3C6D1697740EC456BC3B9A5AC93C349_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2EAD2123A122EB47D058CAE58B2E731F0AD1E702 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* L_1;
		L_1 = EqualityComparer_1_get_Default_m32928E69E3C6D1697740EC456BC3B9A5AC93C349_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mEDD53ACF25430B43F18F9F26CB5A2B0965A376D9(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m334709E00B989EDB5DA9F1AE8475E611EFD02528 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* L_1;
		L_1 = EqualityComparer_1_get_Default_m32928E69E3C6D1697740EC456BC3B9A5AC93C349_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mCBEBF1086E34EC0DEE386D311ED3DEA76D4CD98C(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mCBEBF1086E34EC0DEE386D311ED3DEA76D4CD98C (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m531DBABA15EA98DBF5C6DE1E62AFB1D012010187(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mEE394AFA44F08946E4A1ACF6CAECE1E66E9DC95D(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* L_7 = V_0;
		HashSet_1_CopyFrom_mA36218D70D462C8D4E428890ADA815B2921DB648(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_mDEF32368B249831F004B3F47C54931AECB967034(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m1950DF531B90F5C776FE75390A895FF1421FF4F7(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m466FD283556A50A24CD0DDA2BB2DD7D704A5CB50(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mA36218D70D462C8D4E428890ADA815B2921DB648 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_mDEF32368B249831F004B3F47C54931AECB967034(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_m9D2B93EB85307730A80B2CE73E968FF75E22361C(__this, L_29, L_30, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mEDD53ACF25430B43F18F9F26CB5A2B0965A376D9 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m531DBABA15EA98DBF5C6DE1E62AFB1D012010187(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_mDEF32368B249831F004B3F47C54931AECB967034(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m5EBA740FFDCA9B7D9938A7AC1CE1CB35B8A79E5D (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_item, const RuntimeMethod* method) 
{
	{
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m49A16C018337FDAB79E1D4BFCDC88F91B135DEF9(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mB39966F0744BA8FFC81D553DCF2DE499008B7B67 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m3AED34CF2F567B05BA093394C98ACB61BD52E247(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_2;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m98CC496286DAEE7330C3C03C5CAAB03225E1F7DA (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m63A8EFE4D0CDD7FC3D5F49C707713BBA96F99C24(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m4CAAC948169F4EFFA0934B9E6CE7DA0EDE4D244A (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m3AED34CF2F567B05BA093394C98ACB61BD52E247(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
	}
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42* L_36 = (MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42*)(&((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value);
		il2cpp_codegen_initobj(L_36, sizeof(MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42));
	}

IL_00d1:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_37 = V_4;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = __this->____freeList;
		((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___next = L_39;
		int32_t L_40 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = __this->____count;
		if (L_42)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_43 = V_5;
		__this->____freeList = L_43;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_44 = V_3;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_47 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_0135:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_5;
		V_2 = L_49;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_50 = V_4;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___next;
		V_5 = L_52;
	}

IL_014c:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5C51B89A2548200F55BD9FD122927359BA4D6C4F HashSet_1_GetEnumerator_m01C238BAC447BA267A837FE3B3CE0A15085D9260 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5C51B89A2548200F55BD9FD122927359BA4D6C4F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0B5A0C3294DC2D2E9BF2BFCC4E92F04E8A6416E0((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m718D774AFB30596EC7D7B1EC0BC10E49445DBA5A (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5C51B89A2548200F55BD9FD122927359BA4D6C4F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0B5A0C3294DC2D2E9BF2BFCC4E92F04E8A6416E0((&L_0), __this, NULL);
		Enumerator_t5C51B89A2548200F55BD9FD122927359BA4D6C4F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m4E41D89963B75022F4725FCE50F437932427337E (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5C51B89A2548200F55BD9FD122927359BA4D6C4F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0B5A0C3294DC2D2E9BF2BFCC4E92F04E8A6416E0((&L_0), __this, NULL);
		Enumerator_t5C51B89A2548200F55BD9FD122927359BA4D6C4F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_mBE34D80FEAD10BCF8355E94F63A9FF80FB90DC36 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_14 = (MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04*)(MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_15 = V_0;
		HashSet_1_CopyTo_m4760A6CCCFB088F092D14D512C33919EA9714F65(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m732FD87905ACC3ABC87F8E83F39E2B31AD64745A (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_11 = (SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)(SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04*)CastclassSealed((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m49A16C018337FDAB79E1D4BFCDC88F91B135DEF9(__this, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m9D5BFCF25026E75F02F463F2DA8585866DB4DAA0 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_item, const RuntimeMethod* method) 
{
	{
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m49A16C018337FDAB79E1D4BFCDC88F91B135DEF9(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m1950DF531B90F5C776FE75390A895FF1421FF4F7 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_7;
				L_7 = InterfaceFuncInvoker0< MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6);
				V_1 = L_7;
				MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m49A16C018337FDAB79E1D4BFCDC88F91B135DEF9(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
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

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_mF1B0DCE8740E1466E6AC1915968B3BF2366D2FFD (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_mD5D17E3B1F72BBDDDD63954001A4EC939198E90D(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_9;
				L_9 = InterfaceFuncInvoker0< MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_m4CAAC948169F4EFFA0934B9E6CE7DA0EDE4D244A(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
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

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m4760A6CCCFB088F092D14D512C33919EA9714F65 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* ___0_array, const RuntimeMethod* method) 
{
	{
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m63A8EFE4D0CDD7FC3D5F49C707713BBA96F99C24(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m63A8EFE4D0CDD7FC3D5F49C707713BBA96F99C24 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		MaterialTargetU5BU5D_t7D3E5103ABAC0352FB400A2CECBF8EDD91810C04* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m444324FD2B4001BAD00365FC0E0DCC8B2266833A (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, Predicate_1_t3C049B1B2E42E83B842DF97FD66D519DA80D5F0C* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_t3C049B1B2E42E83B842DF97FD66D519DA80D5F0C* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t3C049B1B2E42E83B842DF97FD66D519DA80D5F0C* L_8 = ___0_match;
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_m81838A1F104FBBCDD5C6811BD6C3717AE42CB5DC_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m4CAAC948169F4EFFA0934B9E6CE7DA0EDE4D244A(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m466FD283556A50A24CD0DDA2BB2DD7D704A5CB50 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_5 = (SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)(SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t1EAAAB0EB7E675D9AB16858BC529CD92F162AF8F L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t1EAAAB0EB7E675D9AB16858BC529CD92F162AF8F)L_16);
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mDEF32368B249831F004B3F47C54931AECB967034 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_5 = (SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)(SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m0DA280BDD10BEE337900568C4F8C17BC8C3D2750 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_mD2A0F7A2BC421305BF8A1BDA8C480E54BA55A28C(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mD2A0F7A2BC421305BF8A1BDA8C480E54BA55A28C (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_1 = (SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)(SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_3 = __this->____slots;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m49A16C018337FDAB79E1D4BFCDC88F91B135DEF9 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_mDEF32368B249831F004B3F47C54931AECB967034(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m3AED34CF2F567B05BA093394C98ACB61BD52E247(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m0DA280BDD10BEE337900568C4F8C17BC8C3D2750(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___ValueName), (void*)NULL);
		#endif
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m9D2B93EB85307730A80B2CE73E968FF75E22361C (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, int32_t ___0_index, int32_t ___1_hashCode, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___ValueName), (void*)NULL);
		#endif
		SlotU5BU5D_t730BF6ABAC79240F46B76210A6A7CC48A5E43419* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m3AED34CF2F567B05BA093394C98ACB61BD52E247 (HashSet_1_t53FD5C99439C6FFB7905270B80067C77D87767DF* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD5EE2D0ACA7E19D25C05B9B476995D4B132A2871 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* L_0;
		L_0 = EqualityComparer_1_get_Default_mF00E6E86D7E7FBC14582A2E06BC461183D5A7582_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_mABCF0D2838F75EE5FB0EEC24F28C600BD93D3A87(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mABCF0D2838F75EE5FB0EEC24F28C600BD93D3A87 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* L_1;
		L_1 = EqualityComparer_1_get_Default_mF00E6E86D7E7FBC14582A2E06BC461183D5A7582_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		___0_comparer = L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD9BCAA75E597459264A4CB9D178DECE0624F706B (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* L_1;
		L_1 = EqualityComparer_1_get_Default_mF00E6E86D7E7FBC14582A2E06BC461183D5A7582_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m3023228F481122875227BB58F35C9D9C5E496DA7(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC181A0A8310614186CAF9DF3D19BC476CA1400FB (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* L_1;
		L_1 = EqualityComparer_1_get_Default_mF00E6E86D7E7FBC14582A2E06BC461183D5A7582_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		HashSet_1__ctor_m621D9D4D8627A9C221C2D49B7433C0F4524E94B3(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m621D9D4D8627A9C221C2D49B7433C0F4524E94B3 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mABCF0D2838F75EE5FB0EEC24F28C600BD93D3A87(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_tC2D03386892405F3505A765D17445886085A7A09*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m2DF09488D63AE1F6DD854C68FCCB94E6A05E3EB0(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* L_7 = V_0;
		HashSet_1_CopyFrom_m8C44F75AC1DCED4F3CD641DEA487E6E47D070747(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m5E1F9C0B2D4F5A939E44840777D253BD730B1717(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mDA45DB33DB221D7D3838271D1A1B72DDBDFADE58(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m76D3ED013D4B7EE959ACAF70E11B224C1801DD41(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m8C44F75AC1DCED4F3CD641DEA487E6E47D070747 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)CastclassSealed((RuntimeObject*)L_14, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12))));
		HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_m5E1F9C0B2D4F5A939E44840777D253BD730B1717(__this, L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_mB045B77C4D25077FD6BA9502869BD574FAE4CD7A(__this, L_29, L_30, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3023228F481122875227BB58F35C9D9C5E496DA7 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mABCF0D2838F75EE5FB0EEC24F28C600BD93D3A87(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m5E1F9C0B2D4F5A939E44840777D253BD730B1717(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4622261BE8447639FEBF2F23957D980F07CE1EEF (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_item, const RuntimeMethod* method) 
{
	{
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m8D5B41C8A26946F560372912F0167E9D9DF97B32(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mCAB5B76F9E65D94A9058191EBA661325FB21A03E (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m8BCF38C552447FF80D8DA5589E666A7F1180CE42(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_1 = L_2;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m23AC78F7055623B093945CF5510135FBC6A96FE3 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m116D5FEFFF650B5929CAB371BA641C53F6D60A83(__this, L_0, L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m6CD3DC0FE93813913EB693DCBB074181C35BF844 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m8BCF38C552447FF80D8DA5589E666A7F1180CE42(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
	}
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694* L_36 = (MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694*)(&((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value);
		il2cpp_codegen_initobj(L_36, sizeof(MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694));
	}

IL_00d1:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_37 = V_4;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = __this->____freeList;
		((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___next = L_39;
		int32_t L_40 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = __this->____count;
		if (L_42)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_43 = V_5;
		__this->____freeList = L_43;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_44 = V_3;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_47 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_0135:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_5;
		V_2 = L_49;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_50 = V_4;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___next;
		V_5 = L_52;
	}

IL_014c:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1110E0B993C4C378B99A7EE22024CC06D07BA97C HashSet_1_GetEnumerator_mEB91D2C307CA6BAA8CAE64673EA0106F529521D9 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1110E0B993C4C378B99A7EE22024CC06D07BA97C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFA52AD7F5AE20EB34EC849239CEA82DA82A3F20C((&L_0), __this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mD0546392029828201803CED614EFD1F94A259DA2 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1110E0B993C4C378B99A7EE22024CC06D07BA97C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFA52AD7F5AE20EB34EC849239CEA82DA82A3F20C((&L_0), __this, NULL);
		Enumerator_t1110E0B993C4C378B99A7EE22024CC06D07BA97C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m04C3D9AD299C26C5123E10C4CB820FA1C337D8FC (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1110E0B993C4C378B99A7EE22024CC06D07BA97C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFA52AD7F5AE20EB34EC849239CEA82DA82A3F20C((&L_0), __this, NULL);
		Enumerator_t1110E0B993C4C378B99A7EE22024CC06D07BA97C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_mBFDEE522C02B6D1E7C0B580827C37FF5AC066914 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 27)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_14 = (MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835*)(MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29), (uint32_t)L_13);
		V_0 = L_14;
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_15 = V_0;
		HashSet_1_CopyTo_m682CC4197C8B2A1E8CB2E1B5C38E892A4FBAC7A5(__this, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m3AC74D045AFE0F8DB483437216AF1CC3DE9E72FF (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_11 = (SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)(SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 31)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835*)CastclassSealed((RuntimeObject*)L_15, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29)));
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m8D5B41C8A26946F560372912F0167E9D9DF97B32(__this, L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m1960E5EC6982B6D358544DA0A6BFA55F496D3E48 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_item, const RuntimeMethod* method) 
{
	{
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m8D5B41C8A26946F560372912F0167E9D9DF97B32(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mDA45DB33DB221D7D3838271D1A1B72DDBDFADE58 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_7;
				L_7 = InterfaceFuncInvoker0< MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_6);
				V_1 = L_7;
				MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m8D5B41C8A26946F560372912F0167E9D9DF97B32(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
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

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_mB0C38A4F7885ABC5477EDB8766213702D235C2DE (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tC2D03386892405F3505A765D17445886085A7A09*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m6471E8D9E40E61D5B2DD699EC1257D025815F6F2(__this, NULL);
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 33), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_9;
				L_9 = InterfaceFuncInvoker0< MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 35), L_8);
				V_1 = L_9;
				MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_m6CD3DC0FE93813913EB693DCBB074181C35BF844(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
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

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m682CC4197C8B2A1E8CB2E1B5C38E892A4FBAC7A5 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* ___0_array, const RuntimeMethod* method) 
{
	{
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m116D5FEFFF650B5929CAB371BA641C53F6D60A83(__this, L_0, 0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m116D5FEFFF650B5929CAB371BA641C53F6D60A83 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		MaterialTargetU5BU5D_tBBE12585DB7C5029831B499BFF1CD788A5223835* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_mA9E4F91AF3F6EF3E0FA3399FB33EDB2C386404CD (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, Predicate_1_tEA79AA4099AC5E37355537A7E3D5D421B8E0C8E6* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_tEA79AA4099AC5E37355537A7E3D5D421B8E0C8E6* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_tEA79AA4099AC5E37355537A7E3D5D421B8E0C8E6* L_8 = ___0_match;
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_m05C5A23AFB6C565071E1E1192DCC3DE5CE5035B7_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m6CD3DC0FE93813913EB693DCBB074181C35BF844(__this, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m76D3ED013D4B7EE959ACAF70E11B224C1801DD41 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_5 = (SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)(SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_tA01C4D8C303CBA221F4856AE5422402E2C7A5374 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_tA01C4D8C303CBA221F4856AE5422402E2C7A5374)L_16);
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m5E1F9C0B2D4F5A939E44840777D253BD730B1717 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_5 = (SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)(SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m599C2136AAA8B85D9724FF18ABE264974106FA46 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m13F08A32D567B4A16109BBBDFA4F3791D7C3726C(__this, L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m13F08A32D567B4A16109BBBDFA4F3791D7C3726C (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_1 = (SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)(SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_3 = __this->____slots;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m8D5B41C8A26946F560372912F0167E9D9DF97B32 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m5E1F9C0B2D4F5A939E44840777D253BD730B1717(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0010:
	{
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m8BCF38C552447FF80D8DA5589E666A7F1180CE42(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m599C2136AAA8B85D9724FF18ABE264974106FA46(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___ValueName), (void*)NULL);
		#endif
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mB045B77C4D25077FD6BA9502869BD574FAE4CD7A (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, int32_t ___0_index, int32_t ___1_hashCode, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___MaterialName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___ValueName), (void*)NULL);
		#endif
		SlotU5BU5D_t608341E129FA95E1B683C78EDAA41F684D41F25E* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m8BCF38C552447FF80D8DA5589E666A7F1180CE42 (HashSet_1_tC2D03386892405F3505A765D17445886085A7A09* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 20), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* EqualityComparer_1_get_Default_m33839529811E5B677FAC3708C8617567B0D8A1AB_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* V_0 = NULL;
	{
		EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* L_0 = ((EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5641C6C3F2BDF42B483859C7C1A734FB901C288B(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t2766463F2A6BE0C5D9D2243C503B3989C7C10668* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8B4BDF53D356DC2B6824AECCDFD936A57EBBA0FD_inline (Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* EqualityComparer_1_get_Default_m1701DA58877D954684AA859977226F1A3CA29FE4_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* V_0 = NULL;
	{
		EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* L_0 = ((EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mF604E0C159C27034DB312EA1AD3A026618433378(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t4E4D91E805805ACBEFA703FD1F34D24F15041F4E* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mC3242AE1A0E7E0481D26A2A6369F8B257624C55C_inline (Predicate_1_tA09A22025D8A8B89F9E77A582841E684EA7E759F* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* EqualityComparer_1_get_Default_m4A0896866DFD0BFADEBA26A14A4072AC9D9917D8_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* V_0 = NULL;
	{
		EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* L_0 = ((EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m4E64AAE802462A678408F709D7B1A2E4F1FD603F(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tC97615634F3C29334C0D1ACC23E26BE1CDCEEF38* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD00114316CACFD296E750222C808E712960B78FF_inline (Predicate_1_tB989E899E4E9154054171E9C43DE93B6E2AC6FCC* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_0 = NULL;
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0 = ((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* V_0 = NULL;
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_0 = ((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m0D65AFF43065FE03318CBDDB2A1E63B51476FB9A_gshared_inline (Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* EqualityComparer_1_get_Default_m32928E69E3C6D1697740EC456BC3B9A5AC93C349_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* V_0 = NULL;
	{
		EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* L_0 = ((EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mC981CE792065DC096B3A50940E29759945C78256(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tED75718E22F89EDABE6FB8BC470DB3FE25221040* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m81838A1F104FBBCDD5C6811BD6C3717AE42CB5DC_inline (Predicate_1_t3C049B1B2E42E83B842DF97FD66D519DA80D5F0C* __this, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MaterialTarget_t64339C68F767DF437802382CA7210479AD78BD42, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* EqualityComparer_1_get_Default_mF00E6E86D7E7FBC14582A2E06BC461183D5A7582_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* V_0 = NULL;
	{
		EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* L_0 = ((EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m84CBAEA0E45887F64B46515E065CC53779DBF05B(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t079D22977F15D8253008A0C222808C1A395FED06* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m05C5A23AFB6C565071E1E1192DCC3DE5CE5035B7_inline (Predicate_1_tEA79AA4099AC5E37355537A7E3D5D421B8E0C8E6* __this, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MaterialTarget_tE02828F1E0AC3E7D213D49DD96BC2B235D470694, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
