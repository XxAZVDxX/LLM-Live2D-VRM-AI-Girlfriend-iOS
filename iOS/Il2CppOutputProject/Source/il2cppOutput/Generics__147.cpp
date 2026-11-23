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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

struct IComparer_1_tFAD3AE9FE3CE1FB3CBB781C55DC57C986D71521E;
struct IEnumerator_1_t8CB33065830712577EAFAB72418518818E12D4AC;
struct IEnumerator_1_t176D8611E8975D2EFFA025241681431C3645D907;
struct IEnumerator_1_tB002FA98E94741D975CFC76BC98D50F0EFD60F41;
struct IEnumerator_1_t5CBE96AF6D34AD77B69C46BFC2D221735CFAC144;
struct IEnumerator_1_tC0DCDBFB5F49A30481B632EBFCCF52AD75C3E237;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t4D160F5614E249A0DFF732968FCD0B57F6281120;
struct IEnumerator_1_tB22FCD08D591B657979BC015772EF132DF8E4A74;
struct IEnumerator_1_t000A232CAF2DD4044B9AFBD8982ECD3FB93809DC;
struct IEnumerator_1_tE972D340F536B04FCEE79D5799CA3F036A83451E;
struct IEnumerator_1_t90BCA6A7B2801D6A60BF1AFFCCA677FFF22E4CDA;
struct IEnumerator_1_t2AE5E199CB93D17B1E27686CC16B6667521C4040;
struct IEnumerator_1_t837F12EEBD47871CA329AE5636F57529BD8510A5;
struct IEnumerator_1_tB17887AB90F31EF533692113C116282BE8137A72;
struct IEnumerator_1_t795CE62572C33D602EE9162EFF1F8EB4430DAD53;
struct IEnumerator_1_t039FD1F79231873CA31A318A129D0F6366AE3729;
struct IEnumerator_1_t05AB4B707B5C100437510D3CD21B098CF9B1B3E2;
struct IEnumerator_1_t15BDEA63728C9199E0531C862F5C850A3D0C29B8;
struct IList_1_tCD4E095B99FB5C974E730F8194E17585752C9C17;
struct IList_1_t9D41323B910C0BD2D04A6EF5DB4357FECB8F8BA3;
struct IList_1_t6D08EA7FA01BDF3C06E5BAAE0BFA0F62C86BD338;
struct IList_1_tB81C98CCFC4C70060D8C4A7773A2E018B7705389;
struct IList_1_tEBC9CEC655A21BEAC057F73381FE6A0F3284AB01;
struct IList_1_tCC943A0042E6BB5B3A81CD3BE47F5757992D48D0;
struct IList_1_t3EE866489B03C7FF7DEF9C7563B742E75B5689A2;
struct IList_1_t281C2488A2CCBB6BE7D56F60DD4217ED86CB27E2;
struct IList_1_tDE5A2CD28934CB598C6F11B9F1968099A5148F4C;
struct IList_1_t45147F5693AC2CD8E1FC02E6C69D23EC082D597B;
struct IList_1_t167843A5F05138E45B11C0C0C05948EC417AFA03;
struct IList_1_tFAAC62CDDF5DFAD071729740E8797D4AC890A2CE;
struct IReadOnlyList_1_t3CBC808A39DC158675C56B5C68B705D11B58CEA6;
struct IReadOnlyList_1_t4F009AA654F0054FD0DC2D5B509CADB4CB6AECA9;
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
struct List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F;
struct List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F;
struct List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9;
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2;
struct List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887;
struct ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69;
struct ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7;
struct ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135;
struct ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4;
struct ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65;
struct ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568;
struct ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6;
struct ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247;
struct ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235;
struct ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3;
struct ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9;
struct ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28;
struct ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3;
struct ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0;
struct ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94;
struct ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C;
struct ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00;
struct ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325;
struct EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA;
struct HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5;
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
struct KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E;
struct NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0;
struct NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2;
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A;
struct Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6;
struct UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C;
struct UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A;
struct UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B;
struct UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC;
struct UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1;
struct UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3;
struct UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6;
struct UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8;
struct UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6;
struct UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD;
struct UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00;
struct UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB;
struct ARExternalTextureU5BU5D_t483A650BFD03A821D79A3D8457F9EAB318CC4558;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MeshUpdateInfoU5BU5D_t56B06589F4F7A59D9062800119C7C592349C41AA;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB;
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F;
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299;
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A;
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811;
struct VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64;
struct XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27;
struct ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB;
struct LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E;
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B;
struct ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73;
struct RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316;
struct AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct Entry_t475ED76E31923970E7F7A6522E570E7577C487B9;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D;
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73;
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct StringBuilder_t;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Type_t;
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9;
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteral958BF5561D89C9A90653416FCB65BBE72DADDE1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA;
struct HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5;
struct NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0;
struct NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2;
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A;
struct Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6;
struct UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C;
struct UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A;
struct UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B;
struct UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC;
struct UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1;
struct UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3;
struct UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6;
struct UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8;
struct UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6;
struct UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD;
struct UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00;
struct UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB;
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F;
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299;
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A;
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811;
struct VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64;
struct XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27;
struct ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB;
struct LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E;
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B;
struct ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73;
struct RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tBCCAE4080E81992F81CEC3B682CED9E81A3B4D67  : public RuntimeObject
{
};
struct EmptyArray_1_tF44AD9BD1A58C47BDCB13A8D4D22873C785CC3F8  : public RuntimeObject
{
};
struct EmptyArray_1_t4505232400AEC5D181E96238357D9ACD1C992762  : public RuntimeObject
{
};
struct EmptyArray_1_tC51B5E29F025A6278666985527566B350371217C  : public RuntimeObject
{
};
struct EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867  : public RuntimeObject
{
};
struct EmptyArray_1_t38104844ACB1F00F66AB952D68C54320EF98254F  : public RuntimeObject
{
};
struct EmptyArray_1_t8918E90EE298C7A5BF7A13F4E945F3E26C567CE3  : public RuntimeObject
{
};
struct EmptyArray_1_tC9589F12F2382131419143780EC4B16F75839727  : public RuntimeObject
{
};
struct EmptyArray_1_t39CC4801B12BC59D744D8F2F14920ED998228BE1  : public RuntimeObject
{
};
struct EmptyArray_1_t8F16BED9A16610B0610D3B8977C56192C7CE8275  : public RuntimeObject
{
};
struct EmptyArray_1_tE873052363E5FFF3E3324D48BF2E70EABF9FBA3E  : public RuntimeObject
{
};
struct EmptyArray_1_tE694D0227F619BC5A10811AC94E5B6D8EE0CBD57  : public RuntimeObject
{
};
struct EmptyArray_1_tA05DBCB91EE064FE54203B7543F218C61D4C292D  : public RuntimeObject
{
};
struct EmptyArray_1_tFEE1A4E0C8058B54F07835CFB63F231873095076  : public RuntimeObject
{
};
struct EmptyArray_1_t8505E6935DD4C58400550971BB8321BD8CE9D6CF  : public RuntimeObject
{
};
struct EmptyArray_1_tA0B73630739AC85F81DDEFE547CAFB1C84FB72C6  : public RuntimeObject
{
};
struct EmptyArray_1_t1347A16AC3E72AFF909DAA98EED1FA11A4470068  : public RuntimeObject
{
};
struct EmptyArray_1_t5058CECA8099AD79767245351D26A5CB48C84746  : public RuntimeObject
{
};
struct EmptyArray_1_t47AB7FAF9E162BBE81FCF7964F3209ECF415B0A4  : public RuntimeObject
{
};
struct List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F  : public RuntimeObject
{
	KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F  : public RuntimeObject
{
	ARExternalTextureU5BU5D_t483A650BFD03A821D79A3D8457F9EAB318CC4558* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9  : public RuntimeObject
{
	MeshUpdateInfoU5BU5D_t56B06589F4F7A59D9062800119C7C592349C41AA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2  : public RuntimeObject
{
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286  : public RuntimeObject
{
	XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};
struct MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487  : public RuntimeObject
{
};
struct ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28  : public RuntimeObject
{
	List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* ___m_List;
};
struct ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3  : public RuntimeObject
{
	List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* ___m_List;
};
struct ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0  : public RuntimeObject
{
	List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* ___m_List;
};
struct ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94  : public RuntimeObject
{
	List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___m_List;
};
struct ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C  : public RuntimeObject
{
	List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* ___m_List;
};
struct ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00  : public RuntimeObject
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___m_List;
};
struct ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325  : public RuntimeObject
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___m_List;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
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
struct Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
struct Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 
{
	RuntimeObject* ___list;
	int32_t ___m_CurrentIndex;
	int32_t ___U3CstartU3Ek__BackingField;
	int32_t ___U3CendU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 
{
	RuntimeObject* ___list;
	int32_t ___m_CurrentIndex;
	int32_t ___U3CstartU3Ek__BackingField;
	int32_t ___U3CendU3Ek__BackingField;
};
struct HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 
{
	int32_t ___hash;
	int32_t ___lastFrameUsed;
	Il2CppSharedGenericObject* ___compiledGraph;
};
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 
{
	int16_t ___a;
	int16_t ___b;
	int16_t ___c;
};
struct Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 
{
	int32_t ___a;
	int32_t ___b;
	int32_t ___c;
};
struct ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CtextureU3Ek__BackingField;
	int32_t ___U3CpropertyIdU3Ek__BackingField;
};
struct ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CtextureU3Ek__BackingField;
	int32_t ___U3CpropertyIdU3Ek__BackingField;
};
struct ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CtextureU3Ek__BackingField;
	int32_t ___U3CpropertyIdU3Ek__BackingField;
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
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns;
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
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct XRFov_t51E4BB7B76304E61CF064687586D096CE585817A 
{
	float ___m_AngleLeft;
	float ___m_AngleRight;
	float ___m_AngleUp;
	float ___m_AngleDown;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 
{
	String_t* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_pinvoke
{
	char* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___insertionPointId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 
{
	String_t* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_pinvoke
{
	char* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_com
{
	Il2CppChar* ___slotName;
	int32_t ___assetId;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 
{
	String_t* ___alias;
	String_t* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_pinvoke
{
	char* ___alias;
	char* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_com
{
	Il2CppChar* ___alias;
	Il2CppChar* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 
{
	RuntimeObject* ___source;
	int64_t ___version;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_marshaled_pinvoke
{
	Il2CppIUnknown* ___source;
	int64_t ___version;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_marshaled_com
{
	Il2CppIUnknown* ___source;
	int64_t ___version;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD 
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshaled_pinvoke
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshaled_com
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 
{
	intptr_t ____value;
};
struct ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A 
{
	intptr_t ____value;
};
struct ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 
{
	intptr_t ____value;
};
struct ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 
{
	intptr_t ____value;
};
struct ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F 
{
	intptr_t ____value;
};
struct ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 
{
	intptr_t ____value;
};
struct ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B 
{
	intptr_t ____value;
};
struct ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F 
{
	intptr_t ____value;
};
struct ByReference_1_tC71D682DBC538763066DF671429413D25394012A 
{
	intptr_t ____value;
};
struct ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D 
{
	intptr_t ____value;
};
struct ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD 
{
	intptr_t ____value;
};
struct ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 
{
	intptr_t ____value;
};
struct ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E 
{
	intptr_t ____value;
};
struct ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA 
{
	intptr_t ____value;
};
struct ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 
{
	intptr_t ____value;
};
struct ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 
{
	intptr_t ____value;
};
struct ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 
{
	intptr_t ____value;
};
struct ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 
{
	intptr_t ____value;
};
struct ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 
{
	intptr_t ____value;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 
{
	List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* ____list;
	int32_t ____index;
	int32_t ____version;
	ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 ____current;
};
struct Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B 
{
	List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* ____list;
	int32_t ____index;
	int32_t ____version;
	XRFov_t51E4BB7B76304E61CF064687586D096CE585817A ____current;
};
struct KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
};
struct ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC 
{
	Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 ___m_Enumerator;
};
struct ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0 
{
	Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 ___m_Enumerator;
};
struct ReadOnlyNativeVector_1_t0DE13C6BA89CEDB2D828D3F45AA93F7EC7AD4A0E 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Count;
};
struct ReadOnlyNativeVector_1_t53A6814B9ECC2D21CA860DE85D9AEB86D11F6F17 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Count;
};
struct ReadOnlyNativeVector_1_tE45C179B8DFEAD70E1F59D744D5C6999873C0FFC 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Count;
};
struct UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD 
{
	AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D 
{
	uint8_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 
{
	EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 
{
	int16_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF 
{
	InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 
{
	InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 
{
	InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A 
{
	RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 
{
	float* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 
{
	uint16_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
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
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct FirstPersonFlag_tA3F69A61BD7FBAF3A2E0B32289BA11E3A9B05ED0 
{
	int32_t ___value__;
};
#pragma pack(push, tp, 1)
struct FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779__padding[32];
	};
};
#pragma pack(pop, tp)
struct MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CidU3Ek__BackingField;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___U3CmeshFilterU3Ek__BackingField;
};
struct MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001_marshaled_pinvoke
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CidU3Ek__BackingField;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___U3CmeshFilterU3Ek__BackingField;
};
struct MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001_marshaled_com
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CidU3Ek__BackingField;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___U3CmeshFilterU3Ek__BackingField;
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
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SelectorAccelerationTableType_t29E86C4FCF992B838F757327FF6002927A251B9A 
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
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___deviceMatcher;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke ___deviceMatcher;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com ___deviceMatcher;
};
struct VisualsProcessingType_t19983E0076886C15ED2761057B9992989A710ECC 
{
	int32_t ___value__;
};
struct Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Pos;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rot;
};
struct Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F 
{
	List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* ____list;
	int32_t ____index;
	int32_t ____version;
	KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 ____current;
};
struct Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E 
{
	List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* ____list;
	int32_t ____index;
	int32_t ____version;
	MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 ____current;
};
struct Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 
{
	List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ____list;
	int32_t ____index;
	int32_t ____version;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____current;
};
struct FixedList32Bytes_1_t02D797FE0EF11E83016BA95DD7B282490C8A472E 
{
	alignas(8) FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 ___data;
};
struct NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E 
{
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5 
{
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 
{
	int32_t ___type;
	int32_t ___uniqueStringId;
};
struct Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 ____pointer;
	int32_t ____length;
};
struct Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A ____pointer;
	int32_t ____length;
};
struct Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 ____pointer;
	int32_t ____length;
};
struct Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 ____pointer;
	int32_t ____length;
};
struct Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F ____pointer;
	int32_t ____length;
};
struct Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 ____pointer;
	int32_t ____length;
};
struct Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B ____pointer;
	int32_t ____length;
};
struct Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F ____pointer;
	int32_t ____length;
};
struct Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A ____pointer;
	int32_t ____length;
};
struct Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D ____pointer;
	int32_t ____length;
};
struct Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD ____pointer;
	int32_t ____length;
};
struct Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 ____pointer;
	int32_t ____length;
};
struct Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E ____pointer;
	int32_t ____length;
};
struct Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA ____pointer;
	int32_t ____length;
};
struct Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 ____pointer;
	int32_t ____length;
};
struct Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 ____pointer;
	int32_t ____length;
};
struct Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 ____pointer;
	int32_t ____length;
};
struct Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 
{
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 ____pointer;
	int32_t ____length;
};
struct Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB 
{
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___Renderer;
	int32_t ___FirstPersonFlag;
};
struct RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2_marshaled_pinvoke
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___Renderer;
	int32_t ___FirstPersonFlag;
};
struct RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2_marshaled_com
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___Renderer;
	int32_t ___FirstPersonFlag;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D 
{
	String_t* ___m_Path;
	String_t* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_pinvoke
{
	char* ___m_Path;
	char* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_com
{
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	Type_t* ___m_CachedType;
};
struct Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___Custom;
	float ___Weight;
};
struct Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD_marshaled_pinvoke
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___Custom;
	float ___Weight;
};
struct Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD_marshaled_com
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___Custom;
	float ___Weight;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289_marshaled_pinvoke
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289_marshaled_com
{
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B 
{
	float ___Time;
	bool ___IsCut;
	Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___Item;
};
struct RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B_marshaled_pinvoke
{
	float ___Time;
	int32_t ___IsCut;
	Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___Item;
};
struct RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B_marshaled_com
{
	float ___Time;
	int32_t ___IsCut;
	Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___Item;
};
struct EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 
{
	FixedList32Bytes_1_t02D797FE0EF11E83016BA95DD7B282490C8A472E ___m_FixedArray;
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B ___m_List;
	int32_t ___m_Length;
	bool ___m_Created;
	bool ___m_IsEmbedded;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_tBCCAE4080E81992F81CEC3B682CED9E81A3B4D67_StaticFields
{
	EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___Value;
};
struct EmptyArray_1_tF44AD9BD1A58C47BDCB13A8D4D22873C785CC3F8_StaticFields
{
	HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___Value;
};
struct EmptyArray_1_t4505232400AEC5D181E96238357D9ACD1C992762_StaticFields
{
	NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___Value;
};
struct EmptyArray_1_tC51B5E29F025A6278666985527566B350371217C_StaticFields
{
	NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* ___Value;
};
struct EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867_StaticFields
{
	SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___Value;
};
struct EmptyArray_1_t38104844ACB1F00F66AB952D68C54320EF98254F_StaticFields
{
	Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* ___Value;
};
struct EmptyArray_1_t8918E90EE298C7A5BF7A13F4E945F3E26C567CE3_StaticFields
{
	Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* ___Value;
};
struct EmptyArray_1_tC9589F12F2382131419143780EC4B16F75839727_StaticFields
{
	UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___Value;
};
struct EmptyArray_1_t39CC4801B12BC59D744D8F2F14920ED998228BE1_StaticFields
{
	UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___Value;
};
struct EmptyArray_1_t8F16BED9A16610B0610D3B8977C56192C7CE8275_StaticFields
{
	UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___Value;
};
struct EmptyArray_1_tE873052363E5FFF3E3324D48BF2E70EABF9FBA3E_StaticFields
{
	UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___Value;
};
struct EmptyArray_1_tE694D0227F619BC5A10811AC94E5B6D8EE0CBD57_StaticFields
{
	UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___Value;
};
struct EmptyArray_1_tA05DBCB91EE064FE54203B7543F218C61D4C292D_StaticFields
{
	UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___Value;
};
struct EmptyArray_1_tFEE1A4E0C8058B54F07835CFB63F231873095076_StaticFields
{
	UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___Value;
};
struct EmptyArray_1_t8505E6935DD4C58400550971BB8321BD8CE9D6CF_StaticFields
{
	UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___Value;
};
struct EmptyArray_1_tA0B73630739AC85F81DDEFE547CAFB1C84FB72C6_StaticFields
{
	UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___Value;
};
struct EmptyArray_1_t1347A16AC3E72AFF909DAA98EED1FA11A4470068_StaticFields
{
	UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___Value;
};
struct EmptyArray_1_t5058CECA8099AD79767245351D26A5CB48C84746_StaticFields
{
	UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* ___Value;
};
struct EmptyArray_1_t47AB7FAF9E162BBE81FCF7964F3209ECF415B0A4_StaticFields
{
	UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* ___Value;
};
struct List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F_StaticFields
{
	KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E* ___s_emptyArray;
};
struct List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F_StaticFields
{
	ARExternalTextureU5BU5D_t483A650BFD03A821D79A3D8457F9EAB318CC4558* ___s_emptyArray;
};
struct List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9_StaticFields
{
	MeshUpdateInfoU5BU5D_t56B06589F4F7A59D9062800119C7C592349C41AA* ___s_emptyArray;
};
struct List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2_StaticFields
{
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ___s_emptyArray;
};
struct List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286_StaticFields
{
	XRFovU5BU5D_tA4BD9240E5BF2E9F7CA7FC9DDA13F00246326FCA* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28_StaticFields
{
	ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* ___s_EmptyList;
};
struct ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3_StaticFields
{
	ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* ___s_EmptyList;
};
struct ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0_StaticFields
{
	ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* ___s_EmptyList;
};
struct ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94_StaticFields
{
	ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* ___s_EmptyList;
};
struct ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C_StaticFields
{
	ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* ___s_EmptyList;
};
struct ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00_StaticFields
{
	ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* ___s_EmptyList;
};
struct ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325_StaticFields
{
	ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* ___s_EmptyList;
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_StaticFields
{
	RuntimeObject* ___comparer;
};
struct ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC_StaticFields
{
	ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC ___s_EmptyList;
};
struct ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0_StaticFields
{
	ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0 ___s_EmptyList;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity;
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
struct RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB  : public RuntimeArray
{
	ALIGN_FIELD (8) RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 m_Items[1];

	inline RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Renderer), (void*)NULL);
	}
	inline RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Renderer), (void*)NULL);
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
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F  : public RuntimeArray
{
	ALIGN_FIELD (8) AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D m_Items[1];

	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Path), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_TypeFullName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CachedType), (void*)NULL);
		#endif
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Path), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_TypeFullName), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CachedType), (void*)NULL);
		#endif
	}
};
struct SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299  : public RuntimeArray
{
	ALIGN_FIELD (8) SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 m_Items[1];

	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
};
struct SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A  : public RuntimeArray
{
	ALIGN_FIELD (8) SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 m_Items[1];

	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___slotName), (void*)NULL);
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___slotName), (void*)NULL);
	}
};
struct UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811  : public RuntimeArray
{
	ALIGN_FIELD (8) UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 m_Items[1];

	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alias), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___asset), (void*)NULL);
		#endif
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___alias), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___asset), (void*)NULL);
		#endif
	}
};
struct VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64  : public RuntimeArray
{
	ALIGN_FIELD (8) VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 m_Items[1];

	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___source), (void*)NULL);
	}
	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___source), (void*)NULL);
	}
};
struct XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27  : public RuntimeArray
{
	ALIGN_FIELD (8) XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD m_Items[1];

	inline XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___qname), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___xso), (void*)NULL);
		#endif
	}
	inline XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___qname), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___xso), (void*)NULL);
		#endif
	}
};
struct ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD m_Items[1];

	inline Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Custom), (void*)NULL);
	}
	inline Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Custom), (void*)NULL);
	}
};
struct LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E  : public RuntimeArray
{
	ALIGN_FIELD (8) LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 m_Items[1];

	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___deviceMatcher))->___m_Patterns), (void*)NULL);
		#endif
	}
	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___layoutName))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___deviceMatcher))->___m_Patterns), (void*)NULL);
		#endif
	}
};
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B  : public RuntimeArray
{
	ALIGN_FIELD (8) EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 m_Items[1];

	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rootEntry), (void*)NULL);
		#endif
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderData), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___rootEntry), (void*)NULL);
		#endif
	}
};
struct ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 m_Items[1];

	inline Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 value)
	{
		m_Items[index] = value;
	}
};
struct RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316  : public RuntimeArray
{
	ALIGN_FIELD (8) RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B m_Items[1];

	inline RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B value)
	{
		m_Items[index] = value;
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
struct EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA  : public RuntimeArray
{
	ALIGN_FIELD (8) EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 m_Items[1];

	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 value)
	{
		m_Items[index] = value;
	}
};
struct HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5  : public RuntimeArray
{
	ALIGN_FIELD (8) HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 m_Items[1];

	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___compiledGraph), (void*)NULL);
	}
	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___compiledGraph), (void*)NULL);
	}
};
struct NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 m_Items[1];

	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C m_Items[1];

	inline NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C value)
	{
		m_Items[index] = value;
	}
};
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06  : public RuntimeArray
{
	ALIGN_FIELD (8) SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 m_Items[1];

	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 value)
	{
		m_Items[index] = value;
	}
};
struct Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 m_Items[1];

	inline Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 value)
	{
		m_Items[index] = value;
	}
};
struct Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6  : public RuntimeArray
{
	ALIGN_FIELD (8) Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 m_Items[1];

	inline Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD m_Items[1];

	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D m_Items[1];

	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 m_Items[1];

	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B m_Items[1];

	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 m_Items[1];

	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 m_Items[1];

	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF m_Items[1];

	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 m_Items[1];

	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 m_Items[1];

	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A m_Items[1];

	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 m_Items[1];

	inline UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 m_Items[1];

	inline UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA682763059A2DC752F8FB6A9BBED309F82C2DB8E (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m41797F47596B44EEDDA9C6FFFE692BEC2B9B980B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFCABC4930C3A71D29154B83760CAB599123F68E4 (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBB321FD00ACFC08F94640B1E0C80DB2B2CC122B5 (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m31B5E7F8E3D51CB370BE05608F7B2C3C11EE0C55 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6057F27D1ACAA9CBF4A9FFC87FDAA2ACC117A809 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD865206564138ED88C746288B0A9A6EB96555FC2 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m15D679310A0AC97586C8124180F5EB3E1D40A2BC (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9ADA09E692C504A400AF0D8E4BF59A7C3C2C8F93 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m942BE9C1C9D8A0392F495981442E058E887308CF (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m299B4E260E97612F6BFD1965863F5EDB0D80889F (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m705B2717517A6E1493976E0F972CEC791692FF97 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBE061D69DECDF68D566C15E465E25ECFCE11FCD3 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m05F05C64F32981A1BF2CEC3E7589604A188B612B (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD887308D8602D0A6C687F8B588F772CB0D0911A2 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCC0B8F0541328E20D9E516ACE2AF53B44AA502ED (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB4FF2AFAA94D01923F9242ACB66F817F7CF18C7 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC5B4A17FCA21C2DF1F66767E828535AD34B90513 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m116AE421F0EB30927F6725D62792FFA5A6065627 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF523F5C22B1C3DFB9577177B1C50F9DC3B9704C2 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m33394098C1C040B6577A13565B005D626C626998 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAC5EAC32404917AD2C3C5618AB0234A151B5D2BC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m40807F66AD9634874F484D3B3BD8150C0EBCCC7F (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE4DF1F8EB3A5DCA1E96582AFE6D32FACF680CDC5 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB93E2CFB5B2969AC39C4A63A510317CFDEE6CFF9 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m989053EC4E5C8CEDAE6D100C0507BCE7CF6BE8A7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD3065D7A926DDD6807774F528EF0D74C95B73147 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m26DD8D621F4B82DD8AF033C7ABF8ABC7475D7ADB (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA5768C536204B5BD1FAF1DA63A182D90F8E99A00 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1614379187C193FBC11C8EA68980A7A00B472377 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m75DEDE8EC817491CD64CE8D09BCFBA73BDB72656 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD092C8821B7FC54D44F94C4F3B282D4588DED068 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_end_mC88895A5E8F7A351D97661721B9E79D6FCE973C6_fshared_inline (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_start_m39F633BEE3CE3CF8AB778A0AE341497B2F23B9F1_fshared_inline (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyListSpan_1_get_Count_m6AEC994166BC0E2CD3D0C8C1B1C71F0A62A48C95_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyListSpan_1_get_Item_m86F5425273CD3135B4764E114DE97CB858561F20_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m931D62B874E9D73A02E4B75554A13ABB9E4194FD_gshared (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 ReadOnlyListSpan_1_GetEnumerator_m0E4B5C22F4346E0C782C582A499CBBCF1768BA56_fshared_inline (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m856186ED4CAEE837A4098549F9F3FF8347B63B03_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_mAB047FC1F3C5853B1053849D6F673C92029E1DEA_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_Equals_m3FF71E0169172C8E80707EE752F1261ED3B351DE_gshared (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* __this, Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyListSpan_1_Equals_m95FF4523E33E4FD9717BC2849B8811556B391D25_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyListSpan_1_Equals_mC839E459348742C75CB1CCCE279F346C33C4DE59_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerator_GetHashCode_m43C30E6AEBF284AF2DD64494BDB2AB48F8125D4C_gshared (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyListSpan_1_GetHashCode_m465EB22D612E0FEDD43C110FFFC834E979DECF57_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyListSpan_1_ToString_m30AC764FF632920E19FDFEC30C6CE7D9FC1356AC_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyListSpan_1_get_Count_mB9B6FC7126545BF12B1C12560A79FDD5B6135321_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyListSpan_1_get_Item_mE623420F3DC21EB7BB66A96DD03B9AB36B8FA7BE_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD276A3E1BAEB4C826E515E3936E13955DBE48A0D_fshared (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B7FA4BF190591FFA67EA4992A48BD2AA041CD13_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_m18FDBF32F851A3BA802C1486656BD1BA9A8D7E1A_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyListSpan_1_Equals_mD81B540C37F74BF29A97329D2B39FBA7B2BF4BAC_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyListSpan_1_Equals_mB935A66C830E6C97D8461B3E93522D625FDC0473_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerator_GetHashCode_mD3851CC5A559E71E80171CFD875008ECB1F7DE9A_fshared (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyListSpan_1_GetHashCode_m58583F9ACAEA9324D4C15DA3DF6B0A93F49C9DFA_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyListSpan_1_ToString_mCDE626AECF83378C09AB8908021AB9D6D7F24E67_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 List_1_get_Item_m3224AD3F98EDB5C8088067D6F71BD7F983BEB136_gshared (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F List_1_GetEnumerator_m4E8AA70885B919583BD44F8430D6D194B752E944_gshared (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F ReadOnlyList_1_GetEnumerator_mC65D948BA81DFE83ECCCC954E18EA22189B33FB9_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_Equals_mE5EE3EBDAD773B2B31394DABC6D930821C1167E4_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* __this, ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_m39AC438D290F79F2B51F48064D0B1EEEDFE9789D_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* ___0_lhs, ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 Enumerator_get_Current_m7F7CEEEDCF6123B5A9689B757693192D6C352B68_gshared_inline (Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyValuePair_2_ToString_m92F46DB3FC0F5D9175819B37B2E8C9C498FB3EA1_gshared (KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCE5EC9419ADF6EC4C0B9C8CF5F406B17CD5C560F_gshared (Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB45DF9F619AF28574715B4D66E48A2D37885C9D3_gshared (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_mE2760724C77A10431C64AC35871578394BD84BB4_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 List_1_get_Item_m78D3AC6D23D04EC77487F9B46E569065E227F0D6 (List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 List_1_GetEnumerator_mCBCAED9EBE4AA9E8DA3556BFAB849966605E0FFC (List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 ReadOnlyList_1_GetEnumerator_mBB17282A3F696318A24C40ED9C9C3BD9900603F3 (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_mB0864413423171B80175A26FF478FACA1C6CAF0C (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* ___0_lhs, ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 Enumerator_get_Current_m7D744ECF2EC365FA7792D722619E477143579725_inline (Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF83E2C0513BF627CD4B426C17EDEBCE04BA0EECF (Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8611A2A5E6B290A775A233867AD5B993B19BCA5 (List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_m6DDA3518B75CDF61A3038C7357DE4BC4D1F817FE (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 List_1_get_Item_mC2B02D75C0DDB460AA7B891AF2A356394BF4D838 (List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E List_1_GetEnumerator_m1A1A74D73E5CA27399C9CCB66DD363637885CC05 (List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E ReadOnlyList_1_GetEnumerator_m8E20EE92E9D87C8348DD3BD0B31D1D1BA028BD1F (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_m10006CE133DA82A98172B1BE19691168536F170E (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* ___0_lhs, ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 Enumerator_get_Current_mDEFD14C124A84610F097747CEE4FB6F1AA8AB2F3_inline (Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE1F743CF396846EE3B2EF1A5DFAE0BDE0DDB824 (Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9671702289C413BEE379D41C36234BF1CEA8EFB7 (List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_mD69530C6AFE4C87C77B50B85829B2FAC76AA5502 (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 ReadOnlyList_1_GetEnumerator_mC9608B67FD0ED3A5F6399FB5E08E6FA8F1B9B54B (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_mB23FCBF3509ADC2FD4569AA28C85481DDFA883D7 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* ___0_lhs, ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6 (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA48F9B1D25C8FBF25520257A5D3DC9F78DECB453 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_mC61D7DFF23B35F96F2D733CB60284B8F1CBDD449 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFov_t51E4BB7B76304E61CF064687586D096CE585817A List_1_get_Item_m002283E4B011370F9AF0D2FA066A537D75F39AFE (List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B List_1_GetEnumerator_mED4954AEAAB1CDC4F3BBC9A4D90D73825F1EE44D (List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B ReadOnlyList_1_GetEnumerator_m0C3C4B8421B5EA1B4D331CF9328E08A207E9D937 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_m545A15746A28037AF15C98D3E7B4FC0E48E458F6 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* ___0_lhs, ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRFov_t51E4BB7B76304E61CF064687586D096CE585817A Enumerator_get_Current_m8D4427C1AD90FA12DC408E816243ADAA6DF627DB_inline (Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mED7BDA90BE7924285630EBE1B758D37E99B5807F (Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m62650656F91FEC30C2FD8F327B1C40F60765EE80 (List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_m4768C9E8888D4A13B66E1E49B47567269E1A4BFC (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 ReadOnlyList_1_GetEnumerator_m4B044B89B5BDDC24C0017A4F8E3957987EDC2507_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_mED35A5BFE82950C2AEA6C4A5388926E78DA372F8_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* ___0_lhs, ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_m1A1F35CF09DD948FFA3DDD09E14EDAD278D59DB6_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyMemory_1_ToString_m0C4DF727B39C613F84AC56D6FDAF7ACFF9E39720 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mD0C4947B91FD3864C476B6CA8BA929A6F5B01175 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_mC20EA69C2706DE824529A0506BD45837E26C6980 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_GetHashCode_mE47597BBDBFFBC9185DE65261A7388207854ADE6 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_m74D5DE9AF0CCB1FF7B88058328C835DBD981C568_fshared (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880 (EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_destination, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_left, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05_gshared (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_destination, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197 (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_destination, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mAEF567F21308EFA541F6912B8AAB23C9C58593E9 (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ___0_destination, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_destination, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m8D063C3550F50DB141C43F4EFE3D9A04C7620B80 (Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ___0_destination, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m874FB990BD4C4CAB728D63F58851BF2EABBEB10D (Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ___0_destination, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32 (UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_destination, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2 (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_destination, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D (UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_destination, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD (UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_destination, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0 (UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_destination, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_destination, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C (UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_destination, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645 (UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_destination, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724 (UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_destination, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E (UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_destination, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_mBDCCC7D03D4C397E8F32FB955EC547A2FDFA5543 (UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* ___0_destination, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m996D3C06C347B6A640186D2FAC8C066B5DD1AAC2 (UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___0_destination, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA682763059A2DC752F8FB6A9BBED309F82C2DB8E (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m41797F47596B44EEDDA9C6FFFE692BEC2B9B980B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFCABC4930C3A71D29154B83760CAB599123F68E4 (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBB321FD00ACFC08F94640B1E0C80DB2B2CC122B5 (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m31B5E7F8E3D51CB370BE05608F7B2C3C11EE0C55 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6057F27D1ACAA9CBF4A9FFC87FDAA2ACC117A809 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD865206564138ED88C746288B0A9A6EB96555FC2 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m15D679310A0AC97586C8124180F5EB3E1D40A2BC (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9ADA09E692C504A400AF0D8E4BF59A7C3C2C8F93 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m942BE9C1C9D8A0392F495981442E058E887308CF (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m299B4E260E97612F6BFD1965863F5EDB0D80889F (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m705B2717517A6E1493976E0F972CEC791692FF97 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBE061D69DECDF68D566C15E465E25ECFCE11FCD3 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m05F05C64F32981A1BF2CEC3E7589604A188B612B (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD887308D8602D0A6C687F8B588F772CB0D0911A2 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCC0B8F0541328E20D9E516ACE2AF53B44AA502ED (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB4FF2AFAA94D01923F9242ACB66F817F7CF18C7 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC5B4A17FCA21C2DF1F66767E828535AD34B90513 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m116AE421F0EB30927F6725D62792FFA5A6065627 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF523F5C22B1C3DFB9577177B1C50F9DC3B9704C2 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m33394098C1C040B6577A13565B005D626C626998 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAC5EAC32404917AD2C3C5618AB0234A151B5D2BC (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m40807F66AD9634874F484D3B3BD8150C0EBCCC7F (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE4DF1F8EB3A5DCA1E96582AFE6D32FACF680CDC5 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB93E2CFB5B2969AC39C4A63A510317CFDEE6CFF9 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m989053EC4E5C8CEDAE6D100C0507BCE7CF6BE8A7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD3065D7A926DDD6807774F528EF0D74C95B73147 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m26DD8D621F4B82DD8AF033C7ABF8ABC7475D7ADB (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA5768C536204B5BD1FAF1DA63A182D90F8E99A00 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1614379187C193FBC11C8EA68980A7A00B472377 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m75DEDE8EC817491CD64CE8D09BCFBA73BDB72656 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD092C8821B7FC54D44F94C4F3B282D4588DED068 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) ;
inline int32_t Enumerator_get_end_mA57C9B393320CEA4D1ECC2591D47D95FB2170CA1_inline (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*, const RuntimeMethod*))Enumerator_get_end_mC88895A5E8F7A351D97661721B9E79D6FCE973C6_fshared_inline)(__this, method);
}
inline int32_t Enumerator_get_start_mC9D8EBC2736FAD6939936A613B2763A3BB12F5C6_inline (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*, const RuntimeMethod*))Enumerator_get_start_m39F633BEE3CE3CF8AB778A0AE341497B2F23B9F1_fshared_inline)(__this, method);
}
inline int32_t ReadOnlyListSpan_1_get_Count_m6AEC994166BC0E2CD3D0C8C1B1C71F0A62A48C95 (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC*, const RuntimeMethod*))ReadOnlyListSpan_1_get_Count_m6AEC994166BC0E2CD3D0C8C1B1C71F0A62A48C95_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* ReadOnlyListSpan_1_get_Item_m86F5425273CD3135B4764E114DE97CB858561F20 (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC*, int32_t, const RuntimeMethod*))ReadOnlyListSpan_1_get_Item_m86F5425273CD3135B4764E114DE97CB858561F20_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void Enumerator__ctor_m931D62B874E9D73A02E4B75554A13ABB9E4194FD (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*, RuntimeObject*, const RuntimeMethod*))Enumerator__ctor_m931D62B874E9D73A02E4B75554A13ABB9E4194FD_gshared)(__this, ___0_list, method);
}
inline Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 ReadOnlyListSpan_1_GetEnumerator_m11B9B59218AF129BAF575FA65093D82742368A92_inline (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 (*) (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC*, const RuntimeMethod*))ReadOnlyListSpan_1_GetEnumerator_m0E4B5C22F4346E0C782C582A499CBBCF1768BA56_fshared_inline)(__this, method);
}
inline RuntimeObject* ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m856186ED4CAEE837A4098549F9F3FF8347B63B03 (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC*, const RuntimeMethod*))ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m856186ED4CAEE837A4098549F9F3FF8347B63B03_gshared)(__this, method);
}
inline RuntimeObject* ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_mAB047FC1F3C5853B1053849D6F673C92029E1DEA (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC*, const RuntimeMethod*))ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_mAB047FC1F3C5853B1053849D6F673C92029E1DEA_gshared)(__this, method);
}
inline bool Enumerator_Equals_m3FF71E0169172C8E80707EE752F1261ED3B351DE (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* __this, Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*, Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7, const RuntimeMethod*))Enumerator_Equals_m3FF71E0169172C8E80707EE752F1261ED3B351DE_gshared)(__this, ___0_other, method);
}
inline bool ReadOnlyListSpan_1_Equals_m95FF4523E33E4FD9717BC2849B8811556B391D25 (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC*, ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC, const RuntimeMethod*))ReadOnlyListSpan_1_Equals_m95FF4523E33E4FD9717BC2849B8811556B391D25_gshared)(__this, ___0_other, method);
}
inline bool ReadOnlyListSpan_1_Equals_mC839E459348742C75CB1CCCE279F346C33C4DE59 (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC*, RuntimeObject*, const RuntimeMethod*))ReadOnlyListSpan_1_Equals_mC839E459348742C75CB1CCCE279F346C33C4DE59_gshared)(__this, ___0_obj, method);
}
inline int32_t Enumerator_GetHashCode_m43C30E6AEBF284AF2DD64494BDB2AB48F8125D4C (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*, const RuntimeMethod*))Enumerator_GetHashCode_m43C30E6AEBF284AF2DD64494BDB2AB48F8125D4C_gshared)(__this, method);
}
inline int32_t ReadOnlyListSpan_1_GetHashCode_m465EB22D612E0FEDD43C110FFFC834E979DECF57 (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC*, const RuntimeMethod*))ReadOnlyListSpan_1_GetHashCode_m465EB22D612E0FEDD43C110FFFC834E979DECF57_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline String_t* ReadOnlyListSpan_1_ToString_m30AC764FF632920E19FDFEC30C6CE7D9FC1356AC (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC*, const RuntimeMethod*))ReadOnlyListSpan_1_ToString_m30AC764FF632920E19FDFEC30C6CE7D9FC1356AC_gshared)(__this, method);
}
inline int32_t ReadOnlyListSpan_1_get_Count_mB9B6FC7126545BF12B1C12560A79FDD5B6135321 (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*, const RuntimeMethod*))ReadOnlyListSpan_1_get_Count_mB9B6FC7126545BF12B1C12560A79FDD5B6135321_fshared)(__this, method);
}
inline void ReadOnlyListSpan_1_get_Item_mE623420F3DC21EB7BB66A96DD03B9AB36B8FA7BE (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ReadOnlyListSpan_1_get_Item_mE623420F3DC21EB7BB66A96DD03B9AB36B8FA7BE_fshared)((ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*)__this, ___0_index, il2cppRetVal, method);
}
inline void Enumerator__ctor_mD276A3E1BAEB4C826E515E3936E13955DBE48A0D (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*, RuntimeObject*, const RuntimeMethod*))Enumerator__ctor_mD276A3E1BAEB4C826E515E3936E13955DBE48A0D_fshared)(__this, ___0_list, method);
}
inline RuntimeObject* ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B7FA4BF190591FFA67EA4992A48BD2AA041CD13 (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*, const RuntimeMethod*))ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B7FA4BF190591FFA67EA4992A48BD2AA041CD13_fshared)(__this, method);
}
inline RuntimeObject* ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_m18FDBF32F851A3BA802C1486656BD1BA9A8D7E1A (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*, const RuntimeMethod*))ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_m18FDBF32F851A3BA802C1486656BD1BA9A8D7E1A_fshared)(__this, method);
}
inline bool ReadOnlyListSpan_1_Equals_mD81B540C37F74BF29A97329D2B39FBA7B2BF4BAC (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*, ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0, const RuntimeMethod*))ReadOnlyListSpan_1_Equals_mD81B540C37F74BF29A97329D2B39FBA7B2BF4BAC_fshared)(__this, ___0_other, method);
}
inline bool ReadOnlyListSpan_1_Equals_mB935A66C830E6C97D8461B3E93522D625FDC0473 (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*, RuntimeObject*, const RuntimeMethod*))ReadOnlyListSpan_1_Equals_mB935A66C830E6C97D8461B3E93522D625FDC0473_fshared)(__this, ___0_obj, method);
}
inline int32_t Enumerator_GetHashCode_mD3851CC5A559E71E80171CFD875008ECB1F7DE9A (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*, const RuntimeMethod*))Enumerator_GetHashCode_mD3851CC5A559E71E80171CFD875008ECB1F7DE9A_fshared)(__this, method);
}
inline int32_t ReadOnlyListSpan_1_GetHashCode_m58583F9ACAEA9324D4C15DA3DF6B0A93F49C9DFA (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*, const RuntimeMethod*))ReadOnlyListSpan_1_GetHashCode_m58583F9ACAEA9324D4C15DA3DF6B0A93F49C9DFA_fshared)(__this, method);
}
inline String_t* ReadOnlyListSpan_1_ToString_mCDE626AECF83378C09AB8908021AB9D6D7F24E67 (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*, const RuntimeMethod*))ReadOnlyListSpan_1_ToString_mCDE626AECF83378C09AB8908021AB9D6D7F24E67_fshared)(__this, method);
}
inline int32_t List_1_get_Count_m4BEC24E525A06CD8CEE9CEDE8E94330FE2BC67F5_inline (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 List_1_get_Item_m3224AD3F98EDB5C8088067D6F71BD7F983BEB136 (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 (*) (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F*, int32_t, const RuntimeMethod*))List_1_get_Item_m3224AD3F98EDB5C8088067D6F71BD7F983BEB136_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F List_1_GetEnumerator_m4E8AA70885B919583BD44F8430D6D194B752E944 (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F (*) (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F*, const RuntimeMethod*))List_1_GetEnumerator_m4E8AA70885B919583BD44F8430D6D194B752E944_gshared)(__this, method);
}
inline Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F ReadOnlyList_1_GetEnumerator_mC65D948BA81DFE83ECCCC954E18EA22189B33FB9 (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F (*) (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28*, const RuntimeMethod*))ReadOnlyList_1_GetEnumerator_mC65D948BA81DFE83ECCCC954E18EA22189B33FB9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool ReadOnlyList_1_Equals_m422E36825921DEA2F16D50CBA45D85312D3BA5EC (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28*, ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28*, const RuntimeMethod*))ReadOnlyList_1_Equals_mE5EE3EBDAD773B2B31394DABC6D930821C1167E4_fshared)(__this, ___0_other, method);
}
inline bool ReadOnlyList_1_op_Equality_m39AC438D290F79F2B51F48064D0B1EEEDFE9789D (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* ___0_lhs, ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28*, ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28*, const RuntimeMethod*))ReadOnlyList_1_op_Equality_m39AC438D290F79F2B51F48064D0B1EEEDFE9789D_gshared)(___0_lhs, ___1_rhs, method);
}
inline void Enumerator_Dispose_m0EF474B2E6DC86B3EE679A0178105242B5688725 (Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared)(__this, method);
}
inline KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 Enumerator_get_Current_m7F7CEEEDCF6123B5A9689B757693192D6C352B68_inline (Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 (*) (Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F*, const RuntimeMethod*))Enumerator_get_Current_m7F7CEEEDCF6123B5A9689B757693192D6C352B68_gshared_inline)(__this, method);
}
inline String_t* KeyValuePair_2_ToString_m92F46DB3FC0F5D9175819B37B2E8C9C498FB3EA1 (KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4*, const RuntimeMethod*))KeyValuePair_2_ToString_m92F46DB3FC0F5D9175819B37B2E8C9C498FB3EA1_gshared)(__this, method);
}
inline bool Enumerator_MoveNext_mCE5EC9419ADF6EC4C0B9C8CF5F406B17CD5C560F (Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F*, const RuntimeMethod*))Enumerator_MoveNext_mCE5EC9419ADF6EC4C0B9C8CF5F406B17CD5C560F_gshared)(__this, method);
}
inline void List_1__ctor_mB45DF9F619AF28574715B4D66E48A2D37885C9D3 (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F*, int32_t, const RuntimeMethod*))List_1__ctor_mB45DF9F619AF28574715B4D66E48A2D37885C9D3_gshared)(__this, ___0_capacity, method);
}
inline void ReadOnlyList_1__ctor_mE2760724C77A10431C64AC35871578394BD84BB4 (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28*, List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F*, const RuntimeMethod*))ReadOnlyList_1__ctor_mE2760724C77A10431C64AC35871578394BD84BB4_gshared)(__this, ___0_list, method);
}
inline int32_t List_1_get_Count_mC02564F7D882A75D4367481E1BF0413CDD9B35EF_inline (List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 List_1_get_Item_m78D3AC6D23D04EC77487F9B46E569065E227F0D6 (List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 List_1_GetEnumerator_mCBCAED9EBE4AA9E8DA3556BFAB849966605E0FFC (List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 ReadOnlyList_1_GetEnumerator_mBB17282A3F696318A24C40ED9C9C3BD9900603F3 (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, const RuntimeMethod* method) ;
inline bool ReadOnlyList_1_Equals_mD9A33BF01CAF32C5BD0AB1C83184C0B0F825B99C (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3*, ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3*, const RuntimeMethod*))ReadOnlyList_1_Equals_mE5EE3EBDAD773B2B31394DABC6D930821C1167E4_fshared)(__this, ___0_other, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_mB0864413423171B80175A26FF478FACA1C6CAF0C (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* ___0_lhs, ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* ___1_rhs, const RuntimeMethod* method) ;
inline void Enumerator_Dispose_m677FE74C81BB4AC4BB52F22C77CBC2E0259B7BE0 (Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 Enumerator_get_Current_m7D744ECF2EC365FA7792D722619E477143579725_inline (Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARExternalTexture_ToString_m6E4AF1FEEFE54AA9680BC13971B1285D50EF783C (ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF83E2C0513BF627CD4B426C17EDEBCE04BA0EECF (Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8611A2A5E6B290A775A233867AD5B993B19BCA5 (List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_m6DDA3518B75CDF61A3038C7357DE4BC4D1F817FE (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* ___0_list, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m2F473C41100A82DCB758D7A195EB1DD952A82ACB_inline (List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 List_1_get_Item_mC2B02D75C0DDB460AA7B891AF2A356394BF4D838 (List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E List_1_GetEnumerator_m1A1A74D73E5CA27399C9CCB66DD363637885CC05 (List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E ReadOnlyList_1_GetEnumerator_m8E20EE92E9D87C8348DD3BD0B31D1D1BA028BD1F (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, const RuntimeMethod* method) ;
inline bool ReadOnlyList_1_Equals_m4AC17251BFA3358A899D308E952CEF618CFFD5E0 (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0*, ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0*, const RuntimeMethod*))ReadOnlyList_1_Equals_mE5EE3EBDAD773B2B31394DABC6D930821C1167E4_fshared)(__this, ___0_other, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_m10006CE133DA82A98172B1BE19691168536F170E (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* ___0_lhs, ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* ___1_rhs, const RuntimeMethod* method) ;
inline void Enumerator_Dispose_mFFDF7DCDF265271F79245D41531ED3543BA6EF75 (Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 Enumerator_get_Current_mDEFD14C124A84610F097747CEE4FB6F1AA8AB2F3_inline (Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueType_ToString_mFE1CB83BECC99D07BEA7EAB25AF73BE5A727C04D (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE1F743CF396846EE3B2EF1A5DFAE0BDE0DDB824 (Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9671702289C413BEE379D41C36234BF1CEA8EFB7 (List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_mD69530C6AFE4C87C77B50B85829B2FAC76AA5502 (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* ___0_list, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 ReadOnlyList_1_GetEnumerator_mC9608B67FD0ED3A5F6399FB5E08E6FA8F1B9B54B (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, const RuntimeMethod* method) ;
inline bool ReadOnlyList_1_Equals_m8148EC6C733368979540E48002655798CE833514 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94*, ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94*, const RuntimeMethod*))ReadOnlyList_1_Equals_mE5EE3EBDAD773B2B31394DABC6D930821C1167E4_fshared)(__this, ___0_other, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_mB23FCBF3509ADC2FD4569AA28C85481DDFA883D7 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* ___0_lhs, ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* ___1_rhs, const RuntimeMethod* method) ;
inline void Enumerator_Dispose_m26283ED5A88641328A709A34A0C0804C4DBB9BBB (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pose_ToString_m4F33190911B86A9B72CA59D6AF3C633569CDE6D2 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6 (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA48F9B1D25C8FBF25520257A5D3DC9F78DECB453 (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_mC61D7DFF23B35F96F2D733CB60284B8F1CBDD449 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___0_list, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mC3EB5B42E649A756DA6396DF3385FD7C3F280444_inline (List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFov_t51E4BB7B76304E61CF064687586D096CE585817A List_1_get_Item_m002283E4B011370F9AF0D2FA066A537D75F39AFE (List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B List_1_GetEnumerator_mED4954AEAAB1CDC4F3BBC9A4D90D73825F1EE44D (List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B ReadOnlyList_1_GetEnumerator_m0C3C4B8421B5EA1B4D331CF9328E08A207E9D937 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, const RuntimeMethod* method) ;
inline bool ReadOnlyList_1_Equals_m009D3F6ABC0BF7A1B67D96CD6AD213C79044221C (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C*, ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C*, const RuntimeMethod*))ReadOnlyList_1_Equals_mE5EE3EBDAD773B2B31394DABC6D930821C1167E4_fshared)(__this, ___0_other, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_m545A15746A28037AF15C98D3E7B4FC0E48E458F6 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* ___0_lhs, ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* ___1_rhs, const RuntimeMethod* method) ;
inline void Enumerator_Dispose_m5E9F0BA6BDC704A98AE4114A2D1157165EC839CA (Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRFov_t51E4BB7B76304E61CF064687586D096CE585817A Enumerator_get_Current_m8D4427C1AD90FA12DC408E816243ADAA6DF627DB_inline (Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRFov_ToString_m08445F611AE8F17B0EDD1113AB7521B039427197 (XRFov_t51E4BB7B76304E61CF064687586D096CE585817A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mED7BDA90BE7924285630EBE1B758D37E99B5807F (Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m62650656F91FEC30C2FD8F327B1C40F60765EE80 (List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_m4768C9E8888D4A13B66E1E49B47567269E1A4BFC (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* ___0_list, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared)(__this, ___0_index, method);
}
inline Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9_gshared)(__this, method);
}
inline Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 ReadOnlyList_1_GetEnumerator_m4B044B89B5BDDC24C0017A4F8E3957987EDC2507 (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 (*) (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00*, const RuntimeMethod*))ReadOnlyList_1_GetEnumerator_m4B044B89B5BDDC24C0017A4F8E3957987EDC2507_gshared)(__this, method);
}
inline bool ReadOnlyList_1_Equals_mF13FF37F6F9E987FB069D233010E9C70807AEDB6 (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00*, ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00*, const RuntimeMethod*))ReadOnlyList_1_Equals_mE5EE3EBDAD773B2B31394DABC6D930821C1167E4_fshared)(__this, ___0_other, method);
}
inline bool ReadOnlyList_1_op_Equality_mED35A5BFE82950C2AEA6C4A5388926E78DA372F8 (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* ___0_lhs, ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00*, ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00*, const RuntimeMethod*))ReadOnlyList_1_op_Equality_mED35A5BFE82950C2AEA6C4A5388926E78DA372F8_gshared)(___0_lhs, ___1_rhs, method);
}
inline void Enumerator_Dispose_mD5CB9146005B12D9E7D7390E961933AB12147A62 (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared)(__this, method);
}
inline Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*, const RuntimeMethod*))Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25 (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9*, const RuntimeMethod*))Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25_gshared)(__this, method);
}
inline void List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516_gshared)(__this, ___0_capacity, method);
}
inline void ReadOnlyList_1__ctor_m1A1F35CF09DD948FFA3DDD09E14EDAD278D59DB6 (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00*, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))ReadOnlyList_1__ctor_m1A1F35CF09DD948FFA3DDD09E14EDAD278D59DB6_gshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyMemory_1_ToString_m0C4DF727B39C613F84AC56D6FDAF7ACFF9E39720 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared)(___0_span, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
inline bool ReadOnlyMemory_1_Equals_mC3969DE0744A246E0576FEDE51191A0D3F5F69A9 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399, const RuntimeMethod*))ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared)(__this, ___0_other, method);
}
inline ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_memory, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, const RuntimeMethod*))Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_fshared)(___0_memory, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mD0C4947B91FD3864C476B6CA8BA929A6F5B01175 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_mC20EA69C2706DE824529A0506BD45837E26C6980 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_GetHashCode_mE47597BBDBFFBC9185DE65261A7388207854ADE6 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) ;
inline int32_t ReadOnlyMemory_1_CombineHashCodes_mAD75C6BDDB231C42D8A846F50E2B081E244108DA (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))ReadOnlyMemory_1_CombineHashCodes_m74D5DE9AF0CCB1FF7B88058328C835DBD981C568_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline String_t* ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857 (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
inline String_t* ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, const RuntimeMethod*))ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline bool ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, RuntimeObject*, const RuntimeMethod*))ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888_fshared)(__this, ___0_obj, method);
}
inline bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4, const RuntimeMethod*))ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared)(__this, ___0_other, method);
}
inline int32_t ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, const RuntimeMethod*))ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880 (EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_destination, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m2310FC0E91B7ECFAE542316434BB4C9D6782042B_inline (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000*, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mBDAC100928A2A40355010648140EA50C37DE399E (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ___0_left, ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000, ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
inline void Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05 (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_destination, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m61A414D4F9636EAC0C3689FCCF1A7EA5ECD32F53_inline (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57*, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_m3E5BDB77835A736157FA2EC596A124328094905D (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ___0_left, ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57, ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197 (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_destination, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mB77B497E05DB783A900DCEAD111F61A3F27C7D35_inline (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA*, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_m1C315B0091ADD10B08153159755014876AB3A48B (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ___0_left, ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA, ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mAEF567F21308EFA541F6912B8AAB23C9C58593E9 (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ___0_destination, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mDB114C7D221442BDEE04AA70632C39DEB2E6CEBB_inline (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF*, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mE33850CC1927163B1248DA163F7F4014F52FD68C (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF ___0_left, ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF, ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_destination, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m68B11A5CBD341B71C3B49A184D9A4A0F68B2BC1B_inline (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84*, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_m273AE2A699A7739E89673154DA9E3BE6B08A180D (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___0_left, ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84, ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m8D063C3550F50DB141C43F4EFE3D9A04C7620B80 (Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ___0_destination, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0406EEDB5B7DEDD87C6F2C00F4441989850C5E66_inline (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3*, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mC7FA128CC2B7A28D2649391BE1542727BD8EF339 (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3 ___0_left, ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3, ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m874FB990BD4C4CAB728D63F58851BF2EABBEB10D (Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ___0_destination, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m7B80672948294F3FEE08B413961A0352CA69129E_inline (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3*, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mB5D5A621364F96AE1128A9C00F431B7DA200016F (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3 ___0_left, ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3, ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32 (UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_destination, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mE74E20E42241965E7A458DF5E23A7FA9058C4F4E_inline (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724*, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mF3F15A8AA6E17FA6D014FF4ABE0086AD06B6D198 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ___0_left, ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724, ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2 (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_destination, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mE51F6529B403BD5E3C8AAE7BAE04BC3F93F7C31F_inline (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085*, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mAA0D16E0236C8BED9AB454299585D774E815A4A8 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ___0_left, ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085, ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D (UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_destination, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m199E5AF4F96498C11635398C59864ECAB82E7455_inline (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7*, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mBCAD4291296A130D084599C071B39A72441A6041 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ___0_left, ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7, ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD (UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_destination, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m3F71A8FCBA59B8D461F3B6CA8F89B020499102F8_inline (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E*, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mE6044990D7E1998FCBA25CBD93EC07FB978178A3 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ___0_left, ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E, ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0 (UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_destination, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m0A622A67EF6097E611538708F12B2AFCDBD113A1_inline (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974*, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mE014CA0F1BF433B90328F47079B9D6A39F491376 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ___0_left, ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974, ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_destination, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mA8962BCDAF15875BAA1631B9B69E1AC9230C568A_inline (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44*, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_m876FCAB5A193A17183A4C1055D7D78BF713D1E18 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ___0_left, ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44, ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C (UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_destination, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m66392F19D65D8E37FF8EFFBBA237A8B3CDBD1E3A_inline (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71*, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mE483F93046822C9468678DB29F761D3F06FF3C7E (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ___0_left, ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71, ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645 (UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_destination, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m6C812749CD726114A53FA991ED2B2081E6A42C54_inline (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185*, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_m795ADA90BB856BC321715377F80986612F556D4C (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ___0_left, ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185, ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724 (UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_destination, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mC0D0EA7EE88DAA315FBD8A84318719AB5E2BAA66_inline (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB*, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mD76E07AC17F959B55344C6E355DB9D0CEC31FC0C (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ___0_left, ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB, ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E (UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_destination, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m05FAEE8A43921FFBDAA0B10C45DF7B413F8B7795_inline (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357*, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mB157614B5969EB80F641D18A4DB33C3D8FC885C1 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ___0_left, ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357, ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_mBDCCC7D03D4C397E8F32FB955EC547A2FDFA5543 (UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* ___0_destination, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m189B1065E7F68FCEFFD8B51369EE9310DF43AB4E_inline (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E*, UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_m3EDB78E2FEE1B7D258823CFA9B42822972E7004D (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E ___0_left, ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E, ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m996D3C06C347B6A640186D2FAC8C066B5DD1AAC2 (UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___0_destination, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_mC5370B060FD7B513D4E024C074C86F97DBAFBB17_inline (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5*, UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline bool ReadOnlySpan_1_op_Equality_mD2406E85102C4510337D5938C7775580D1FD07B6 (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5 ___0_left, ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5, ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5, const RuntimeMethod*))ReadOnlySpan_1_op_Equality_mCB01F92371372FA04CD22F603093A600A977916A_fshared)(___0_left, ___1_right, method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA682763059A2DC752F8FB6A9BBED309F82C2DB8E (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ReadOnlyCollection_1_get_Item_mB75B18588E7000A150FA7A2E0B4EC76FDCE123DF (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_2;
		L_2 = InterfaceFuncInvoker1< RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mFCABC4930C3A71D29154B83760CAB599123F68E4 (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m25FA2278834C9A83BCA3D20E76FAD7D7C125CB2E (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m3007CB595F2B723644A342F5DC071D77958C881D (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBB321FD00ACFC08F94640B1E0C80DB2B2CC122B5 (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m6ED6BF7BDEADBD3107D085C5C44528FF8AE4976F (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_2;
		L_2 = InterfaceFuncInvoker1< RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m10BA916CE102EDA1BC97BCC2FFDAB17D425CF6D7 (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA682763059A2DC752F8FB6A9BBED309F82C2DB8E(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< RendererFirstPersonFlagsU5BU5D_t7C1DA36847754B9B710438AB68AC4776B3BFD2BB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_35;
			L_35 = InterfaceFuncInvoker1< RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m0B8E8A51C32E1B5201D9FA82004D442911AE214E (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_2;
		L_2 = InterfaceFuncInvoker1< RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m41797F47596B44EEDDA9C6FFFE692BEC2B9B980B (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2));
		RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mD7D3A7AF0C9B33D3F49CC9D7939DA680E374A43C (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m41797F47596B44EEDDA9C6FFFE692BEC2B9B980B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mFCABC4930C3A71D29154B83760CAB599123F68E4(__this, ((*(RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mE4A3EDC3AF17DF9F50D41F6816AFF5CE12C02459 (ReadOnlyCollection_1_t28908DB731B27F5F1ECC20DABC255C28456BA887* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m41797F47596B44EEDDA9C6FFFE692BEC2B9B980B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mBB321FD00ACFC08F94640B1E0C80DB2B2CC122B5(__this, ((*(RendererFirstPersonFlags_t5093AE07CA468FEE66CA830D5096C2F7848EF0D2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m31B5E7F8E3D51CB370BE05608F7B2C3C11EE0C55 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ReadOnlyCollection_1_get_Item_m5AB43596F44CC288DA87BCA19EC8D9CF352BC830 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_2;
		L_2 = InterfaceFuncInvoker1< AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6057F27D1ACAA9CBF4A9FFC87FDAA2ACC117A809 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m3D5D6472653F81CBBF60F1A4F5FB285FE8FD81F4 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m73A5FD2B15474679BE446FD212642A0DFA1BDACC (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD865206564138ED88C746288B0A9A6EB96555FC2 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m5CAA0592F9EEFE14B9D85A067D8A48E463BD0255 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_2;
		L_2 = InterfaceFuncInvoker1< AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mE829AA0EB6560D334DE747097153F5A357D552D3 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m31B5E7F8E3D51CB370BE05608F7B2C3C11EE0C55(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_35;
			L_35 = InterfaceFuncInvoker1< AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mDA2999BA621C7C5B8E399FFFEBBFEC2075F03CFB (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_2;
		L_2 = InterfaceFuncInvoker1< AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D));
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m01E51474F8560A28BE0B3BC89A91337DBA7CF7D3 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m6057F27D1ACAA9CBF4A9FFC87FDAA2ACC117A809(__this, ((*(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF018250B690D9925EADF086DD08D674AFB5B8D59 (ReadOnlyCollection_1_t32D3583BA30824B44FED94CE41C1088BA7F66C69* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m496DFF37E9CC6DE59F0E2B4E2A5DBEAA32DEAD94(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mD865206564138ED88C746288B0A9A6EB96555FC2(__this, ((*(AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m15D679310A0AC97586C8124180F5EB3E1D40A2BC (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ReadOnlyCollection_1_get_Item_m6397C9E0F57C3E4112047E50BA57CF877EF7AA5E (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_2;
		L_2 = InterfaceFuncInvoker1< SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9ADA09E692C504A400AF0D8E4BF59A7C3C2C8F93 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m9CEC885D66A757E55A1BCAAA81EE56C3331F7C80 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5281DA7E199DAF2110C2E3AC674BF46ED6E5A909 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m942BE9C1C9D8A0392F495981442E058E887308CF (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mADAE772B4BD15F8285463DB5CE3C374B3886B620 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_2;
		L_2 = InterfaceFuncInvoker1< SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mC35A16F6E2DB9422F719776935632AAC1B8CEF43 (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m15D679310A0AC97586C8124180F5EB3E1D40A2BC(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< SlotDefinitionU5BU5D_t9003D04EBDD74C44DD8490A99624A727154E1299*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_35;
			L_35 = InterfaceFuncInvoker1< SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m1FF003DF50C41FA0FE8F95E3E98170E1AC8394BB (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_2;
		L_2 = InterfaceFuncInvoker1< SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8));
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m4DABD32E7AACFC8A0443D40D2F09D045E7AE944B (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m9ADA09E692C504A400AF0D8E4BF59A7C3C2C8F93(__this, ((*(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m85B208EB89FC3FC4D4874377BB2FABD4DDB604AB (ReadOnlyCollection_1_tF2ABA1656E36C231EEBB5C7CEED077E4AC8239B7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m948DB26D5A8A2DF64E9700A6DEB6F836B10749A3(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m942BE9C1C9D8A0392F495981442E058E887308CF(__this, ((*(SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m299B4E260E97612F6BFD1965863F5EDB0D80889F (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ReadOnlyCollection_1_get_Item_m60E6A62D890747F1AC1DC730E0D3FCE9D4E02F01 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_2;
		L_2 = InterfaceFuncInvoker1< SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m705B2717517A6E1493976E0F972CEC791692FF97 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mC1257C5457DDC4F101CB1C6E13C3918EDA840EAA (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mE2C132C56C7624052D3E4DD98373FEC71D0C7CB4 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBE061D69DECDF68D566C15E465E25ECFCE11FCD3 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m10F1544185B2CAC61276C7FC78D4A1E5250030AE (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_2;
		L_2 = InterfaceFuncInvoker1< SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m0AE5422374BE07A750F53B941582E1D7881D19C9 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m299B4E260E97612F6BFD1965863F5EDB0D80889F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< SlotUsageEntryU5BU5D_t02CCAC4881F115443BE39FCBE8439A9DCFC1C67A*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_35;
			L_35 = InterfaceFuncInvoker1< SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m2E8461F31879EC0FA0F5D99691AFAFB5A7346225 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_2;
		L_2 = InterfaceFuncInvoker1< SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76));
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m64537CE10B51851FBE9771726AFCC8AAF5CF02C8 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m705B2717517A6E1493976E0F972CEC791692FF97(__this, ((*(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m199CADD8D916A7510EF043D4D33ADE50B0DFFD37 (ReadOnlyCollection_1_tB75E264D1AFFBCE0E99EF3B6508A1772E4F74135* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBF48FC95A670E75A65647A9F7520AEB9AE4A0FE6(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mBE061D69DECDF68D566C15E465E25ECFCE11FCD3(__this, ((*(SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m05F05C64F32981A1BF2CEC3E7589604A188B612B (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ReadOnlyCollection_1_get_Item_mF2270136C87C6CD47C4ED8B9CB895254931977C9 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_2;
		L_2 = InterfaceFuncInvoker1< UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD887308D8602D0A6C687F8B588F772CB0D0911A2 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mDA466383B01D8262103FE86D1BFABC09CADECA76 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m8F53882B80F14E008D7286F26BBF322554B99DBA (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCC0B8F0541328E20D9E516ACE2AF53B44AA502ED (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m4FF40A61AEA113EF82D13F16B3B2C6BF18B677E3 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_2;
		L_2 = InterfaceFuncInvoker1< UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m26C1285E73FDD195193E87CAE2B53B9D1237EB84 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m05F05C64F32981A1BF2CEC3E7589604A188B612B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< UsingEntryU5BU5D_t3E321CB1464DE1D2F7FDE3790BD4AD8B72FBE811*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_35;
			L_35 = InterfaceFuncInvoker1< UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA86767BE1489730FEEF7C9B2F51CADDCB1AFE68A (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_2;
		L_2 = InterfaceFuncInvoker1< UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484));
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mB58F33AA4E890E1EB6DC1BFAA71B1EAE2F5E5B48 (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mD887308D8602D0A6C687F8B588F772CB0D0911A2(__this, ((*(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m45B400C577803964484B6C2318A986085887DF6E (ReadOnlyCollection_1_t03DF8DEE56271CB6F01A668065CE8A667D463CC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mBA2972FFD773AA00EC4BAD22D43C97C5FFFD31EA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mCC0B8F0541328E20D9E516ACE2AF53B44AA502ED(__this, ((*(UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ReadOnlyCollection_1_get_Item_mFD65FE8672CF437F4E56553136F3296603743E5B (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2;
		L_2 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m373BF4F61459CBD0614937565D50D38211EC389D (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m627A159A926F95C24D2FC6C0A665BAE6B31C6210 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF2CBAC673542C78C4E66A0B63AB25F7E23E426F4 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2;
		L_2 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mB9E303B104B18F639A07B580FCDCB916D8C5F43A (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mCB408C9C0EF8BB4EAF3BD9D74210EA1BF645DF9F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< VersionInfoU5BU5D_tA86713FC86D1EDA523BC741A17D81B20A869AE64*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_35;
			L_35 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m7FF73F40502F4224B0A39DC1C6E21D7F62ED5320 (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2;
		L_2 = InterfaceFuncInvoker1< VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8));
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m21250661C6C1891AA59CA1F5DB154974346EB45E (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mA07C916646443F7E600B771BA5B6E3276CF6F38D(__this, ((*(VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mBDF6671029CE751A5B90318650A9E1266C9FFBAC (ReadOnlyCollection_1_t8D2DFE1EAD5470CAE23C2E0016BE260592A57C65* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mCB5B8ABED8FAA81E9313462E91E846577DBF79E7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m24635AF1EE0DBE26C00D1E919C331F3EC3514442(__this, ((*(VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCB4FF2AFAA94D01923F9242ACB66F817F7CF18C7 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ReadOnlyCollection_1_get_Item_m4534A86754FC3150BB56EE056CF44694CFD57C47 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_2;
		L_2 = InterfaceFuncInvoker1< XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m116AE421F0EB30927F6725D62792FFA5A6065627 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m8AA5CBAE562679AFCE7394F17B403AAF1B7890E2 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m183CC0AE8D94E74219F7F9C2466D2F7804BA497B (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF523F5C22B1C3DFB9577177B1C50F9DC3B9704C2 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m00D2C57ECBF88B874CB68F5C81534469F56A4FEF (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_2;
		L_2 = InterfaceFuncInvoker1< XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m4C097801325D2332FC1A226D23825CFF771B6ED6 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mCB4FF2AFAA94D01923F9242ACB66F817F7CF18C7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< XmlSchemaObjectEntryU5BU5D_tBCEE5881A0EF3ACBC998EFA679ACBF1ED8256E27*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_35;
			L_35 = InterfaceFuncInvoker1< XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mEA0B17247D97DD5D3CB64691624A04D50BCA99A1 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_2;
		L_2 = InterfaceFuncInvoker1< XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC5B4A17FCA21C2DF1F66767E828535AD34B90513 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD));
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mBD795131F32122B764751DC7B95C0ED36D0371AA (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC5B4A17FCA21C2DF1F66767E828535AD34B90513(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m116AE421F0EB30927F6725D62792FFA5A6065627(__this, ((*(XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mCCDA3835E895D0768BB7B32D130DDF9C4FD557C8 (ReadOnlyCollection_1_t9309D20294B0D49BDEA1E5D7CF07BB04A6F32568* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC5B4A17FCA21C2DF1F66767E828535AD34B90513(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mF523F5C22B1C3DFB9577177B1C50F9DC3B9704C2(__this, ((*(XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m33394098C1C040B6577A13565B005D626C626998 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ReadOnlyCollection_1_get_Item_m96D7E7FCA04DE23EC4C0A0B048D1D754D17EF680 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_2;
		L_2 = InterfaceFuncInvoker1< Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m40807F66AD9634874F484D3B3BD8150C0EBCCC7F (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m8BBE3A087DB60CA97B402960B9B479488A7F2A44 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2E67C85AF9FCD273304B6B3251A9CF8D3CED0517 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mE4DF1F8EB3A5DCA1E96582AFE6D32FACF680CDC5 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mEFD93DD2501C662AC25464CF3837EC25E62626B4 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_2;
		L_2 = InterfaceFuncInvoker1< Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m422248984A15878B68673C6C418627AC7B44C550 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m33394098C1C040B6577A13565B005D626C626998(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ItemU5BU5D_tCCFC6638F39E7103A90E8282EFBD83395B20B7CB*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_35;
			L_35 = InterfaceFuncInvoker1< Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m298759261315F8DE274C96B1F78C3A034283A1D8 (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_2;
		L_2 = InterfaceFuncInvoker1< Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mAC5EAC32404917AD2C3C5618AB0234A151B5D2BC (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD));
		Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m66710E6D746B175AD0069E2AFA232FE88289003F (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mAC5EAC32404917AD2C3C5618AB0234A151B5D2BC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m40807F66AD9634874F484D3B3BD8150C0EBCCC7F(__this, ((*(Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mFCF04E1876A1EEB964C6E7CB317819C2704CEB5E (ReadOnlyCollection_1_t575221CFDB55918436CF43264EDB19DBC94405D6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mAC5EAC32404917AD2C3C5618AB0234A151B5D2BC(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mE4DF1F8EB3A5DCA1E96582AFE6D32FACF680CDC5(__this, ((*(Item_t1F213755A47E6D4A60EE00FA97923233E51D7FAD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ReadOnlyCollection_1_get_Item_m0A91A846BBC91E711D2FD276F926C8622F725207 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2;
		L_2 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m2E2F7FE9FE98257542D040CCB5A505040BB765DD (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m77826D7B702325BB85B22D685A41A3BDBF2E6DFE (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m00749260A028B5DAE550D78E7C08AA80CB178383 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2;
		L_2 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m97E025565D89BA957D0D7595F9930CB1EBA802FD (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m88DC99D667337D16893CDF63694D22FEAF331E05(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< LayoutMatcherU5BU5D_t790C71C3787F12C3EE9F7ABDC24DFCEB5281F90E*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_35;
			L_35 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m91FB5557DA051340EECCD4F9A13275A509B5379B (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2;
		L_2 = InterfaceFuncInvoker1< LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6));
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m07AAC581ACA363E09C760153D0F5634069AAEF43 (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m9FE5CCC2B059229D4C97248D4F5E82C20ECB5FBE(__this, ((*(LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m28EE46B044CC3F881E8EEF91F1FB3C37C601376C (ReadOnlyCollection_1_t219F9DE246A267F098345182628B7967858ED247* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m9E692C71C0193F22ACD65EEFBA4ECA75E5C53AAD(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m093DAAF13F65B6DE09B24D00F36FCC13F61E6E15(__this, ((*(LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ReadOnlyCollection_1_get_Item_m586F777658B145682E70A3FCE202B5FEE78F8F18 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2;
		L_2 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mF318B9F02EA7AE7C2734AC064B64ED94C16F8798 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7C08CE459BEEDC1DF2952F054F69A3482C2433F6 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m5D48D4159D5115984C187FE5B07D9140556FDA49 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2;
		L_2 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m8958097E6E660BACA1709F0424DE966BF89439FD (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m8B2AEA509E07E389B797D3576C0DDF9A5551E3A4(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_35;
			L_35 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mAC7741CB7BECB294DA1E38E3745C58853F0A197A (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2;
		L_2 = InterfaceFuncInvoker1< EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289));
		EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mC6029EF4ADA5CF37C75A5D189C30F6EEF696996C (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mD750C5DD43B49E3369FF1CC3778B43D83F58636E(__this, ((*(EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mF634A5AA11D90AB73EE09FC2DA892D8C98BD76E1 (ReadOnlyCollection_1_t537840A047E12157FC8F008F8986460D6E1ED235* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mC9A90AF46B6E7EC8BC710283B87EB110801FAB1B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mDA0A610D1FE508DC17DABD5A4D5D861295857416(__this, ((*(EntryProcessingInfo_tE4803801829E2739380552B9DE313B056A9C9289*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB93E2CFB5B2969AC39C4A63A510317CFDEE6CFF9 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ReadOnlyCollection_1_get_Item_m2873EE6951A9D52360B2983D71A24CBBB412E669 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_2;
		L_2 = InterfaceFuncInvoker1< Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD3065D7A926DDD6807774F528EF0D74C95B73147 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m518D0DA542FB03A5EC3D28A2BA16ECAC2D01DD25 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mC29C91AEC09530EFA2EC4F7CDB86C1F7E2973140 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m26DD8D621F4B82DD8AF033C7ABF8ABC7475D7ADB (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m8E4C2C760903C7EA67FE6FF09C09A49877F3CFE5 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_2;
		L_2 = InterfaceFuncInvoker1< Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m069159C372D25365EDAC10B39048134700316192 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mB93E2CFB5B2969AC39C4A63A510317CFDEE6CFF9(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< ItemU5BU5D_t1BE09B3DC30555BDE6DCCB3E47B0CAD060E38B73*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_35;
			L_35 = InterfaceFuncInvoker1< Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mBE287B5E2719FB5CA2D4CBB5BC113174C63D77DE (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_2;
		L_2 = InterfaceFuncInvoker1< Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m989053EC4E5C8CEDAE6D100C0507BCE7CF6BE8A7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9));
		Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mA660C38FD0787017894FDFDC334E44CFD2612386 (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m989053EC4E5C8CEDAE6D100C0507BCE7CF6BE8A7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mD3065D7A926DDD6807774F528EF0D74C95B73147(__this, ((*(Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m7158231C15FFBB9BFA6D6C619F34E574BDCC76CF (ReadOnlyCollection_1_t46D95FFFC4790800955B456576222EF3ACAD2DC3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m989053EC4E5C8CEDAE6D100C0507BCE7CF6BE8A7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m26DD8D621F4B82DD8AF033C7ABF8ABC7475D7ADB(__this, ((*(Item_t451B0F5ACBE74A12F984548E7F04A85270912DA9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mA5768C536204B5BD1FAF1DA63A182D90F8E99A00 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ReadOnlyCollection_1_get_Item_m629A53464FB7B4FBBB8B011A4E5ABDA2FB236B6C (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_2;
		L_2 = InterfaceFuncInvoker1< RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m75DEDE8EC817491CD64CE8D09BCFBA73BDB72656 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m6D1B02DA65790B10D6AC649CB5BFB02D47B70D95 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m12E9F80E8FBC3968C432691E7BC1C495FB1E362C (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD092C8821B7FC54D44F94C4F3B282D4588DED068 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m1D5EB6438C4221D078C4F7C47FD49C17F44D49E0 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_2;
		L_2 = InterfaceFuncInvoker1< RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m077B6DC74DFC374D67ED0A2123019815AD604BC3 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mA5768C536204B5BD1FAF1DA63A182D90F8E99A00(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< RecordingItemU5BU5D_t228311297F412A340877DF3E2E283CF129D86316*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_35;
			L_35 = InterfaceFuncInvoker1< RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA0918F854D8301692ABD5FC09118B33565AB5510 (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_2;
		L_2 = InterfaceFuncInvoker1< RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m1614379187C193FBC11C8EA68980A7A00B472377 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B));
		RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m03F5113A82A515CBF9586737F10A9A7F2F0F6B9C (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1614379187C193FBC11C8EA68980A7A00B472377(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m75DEDE8EC817491CD64CE8D09BCFBA73BDB72656(__this, ((*(RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m7CDCD9BDBD24662DDD49C70C631294B140E295AE (ReadOnlyCollection_1_t0CB4C481EACBE4CE57BE9DDE62444E73D8C242E9* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m1614379187C193FBC11C8EA68980A7A00B472377(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mD092C8821B7FC54D44F94C4F3B282D4588DED068(__this, ((*(RecordingItem_t93E6DE178E1A6CD7D286976816F71B561800900B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyListSpan_1_get_Count_m6AEC994166BC0E2CD3D0C8C1B1C71F0A62A48C95_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_0 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		int32_t L_1;
		L_1 = Enumerator_get_end_mA57C9B393320CEA4D1ECC2591D47D95FB2170CA1_inline(L_0, NULL);
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_2 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		int32_t L_3;
		L_3 = Enumerator_get_start_mC9D8EBC2736FAD6939936A613B2763A3BB12F5C6_inline(L_2, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyListSpan_1_get_Count_m6AEC994166BC0E2CD3D0C8C1B1C71F0A62A48C95_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC>(__this);
	int32_t _returnValue;
	_returnValue = ReadOnlyListSpan_1_get_Count_m6AEC994166BC0E2CD3D0C8C1B1C71F0A62A48C95(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyListSpan_1_get_Item_m86F5425273CD3135B4764E114DE97CB858561F20_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0 = ___0_index;
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_1 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		int32_t L_2;
		L_2 = Enumerator_get_start_mC9D8EBC2736FAD6939936A613B2763A3BB12F5C6_inline(L_1, NULL);
		___0_index = ((int32_t)il2cpp_codegen_add(L_0, L_2));
		int32_t L_3 = ___0_index;
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_4 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		int32_t L_5;
		L_5 = Enumerator_get_start_mC9D8EBC2736FAD6939936A613B2763A3BB12F5C6_inline(L_4, NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = ___0_index;
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_7 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		int32_t L_8;
		L_8 = Enumerator_get_end_mA57C9B393320CEA4D1ECC2591D47D95FB2170CA1_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0031:
	{
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_10 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		RuntimeObject* L_11 = L_10->___list;
		int32_t L_12 = ___0_index;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_11, L_12);
		return L_13;
	}
}
IL2CPP_EXTERN_C  Il2CppSharedGenericObject* ReadOnlyListSpan_1_get_Item_m86F5425273CD3135B4764E114DE97CB858561F20_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC>(__this);
	Il2CppSharedGenericObject* _returnValue;
	_returnValue = ReadOnlyListSpan_1_get_Item_m86F5425273CD3135B4764E114DE97CB858561F20(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyListSpan_1__ctor_mE3FBA3D5EC9A980B9FAB385D0C098B5F0E956846_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_list;
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Enumerator__ctor_m931D62B874E9D73A02E4B75554A13ABB9E4194FD((&L_3), L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_Enumerator = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Enumerator))->___list), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC ReadOnlyListSpan_1_Empty_m25AF59375324CD0D792ECBAE52543B9882909FC3_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC L_0 = ((ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m856186ED4CAEE837A4098549F9F3FF8347B63B03_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 L_0;
		L_0 = ReadOnlyListSpan_1_GetEnumerator_m11B9B59218AF129BAF575FA65093D82742368A92_inline(__this, NULL);
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m856186ED4CAEE837A4098549F9F3FF8347B63B03_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m856186ED4CAEE837A4098549F9F3FF8347B63B03(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_mAB047FC1F3C5853B1053849D6F673C92029E1DEA_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 L_0;
		L_0 = ReadOnlyListSpan_1_GetEnumerator_m11B9B59218AF129BAF575FA65093D82742368A92_inline(__this, NULL);
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_mAB047FC1F3C5853B1053849D6F673C92029E1DEA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_mAB047FC1F3C5853B1053849D6F673C92029E1DEA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyListSpan_1_Equals_m95FF4523E33E4FD9717BC2849B8811556B391D25_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC ___0_other, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_0 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC L_1 = ___0_other;
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7 L_2 = L_1.___m_Enumerator;
		bool L_3;
		L_3 = Enumerator_Equals_m3FF71E0169172C8E80707EE752F1261ED3B351DE(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyListSpan_1_Equals_m95FF4523E33E4FD9717BC2849B8811556B391D25_AdjustorThunk (RuntimeObject* __this, ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC ___0_other, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC>(__this);
	bool _returnValue;
	_returnValue = ReadOnlyListSpan_1_Equals_m95FF4523E33E4FD9717BC2849B8811556B391D25(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyListSpan_1_Equals_mC839E459348742C75CB1CCCE279F346C33C4DE59_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))));
		ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC L_2 = V_0;
		bool L_3;
		L_3 = ReadOnlyListSpan_1_Equals_m95FF4523E33E4FD9717BC2849B8811556B391D25(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyListSpan_1_Equals_mC839E459348742C75CB1CCCE279F346C33C4DE59_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC>(__this);
	bool _returnValue;
	_returnValue = ReadOnlyListSpan_1_Equals_mC839E459348742C75CB1CCCE279F346C33C4DE59(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyListSpan_1_GetHashCode_m465EB22D612E0FEDD43C110FFFC834E979DECF57_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_0 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		int32_t L_1;
		L_1 = Enumerator_GetHashCode_m43C30E6AEBF284AF2DD64494BDB2AB48F8125D4C(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyListSpan_1_GetHashCode_m465EB22D612E0FEDD43C110FFFC834E979DECF57_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC>(__this);
	int32_t _returnValue;
	_returnValue = ReadOnlyListSpan_1_GetHashCode_m465EB22D612E0FEDD43C110FFFC834E979DECF57(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyListSpan_1_ToString_m30AC764FF632920E19FDFEC30C6CE7D9FC1356AC_gshared (ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	Il2CppSharedGenericObject* V_3 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	StringBuilder_t* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	StringBuilder_t* G_B4_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_3 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		int32_t L_4;
		L_4 = Enumerator_get_start_mC9D8EBC2736FAD6939936A613B2763A3BB12F5C6_inline(L_3, NULL);
		V_1 = L_4;
		goto IL_007a;
	}

IL_0020:
	{
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_5 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		RuntimeObject* L_6 = L_5->___list;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Il2CppSharedGenericObject* L_8;
		L_8 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_6, L_7);
		V_2 = L_8;
		StringBuilder_t* L_9 = V_0;
		Il2CppSharedGenericObject* L_10 = V_2;
		if (!L_10)
		{
			G_B3_0 = L_9;
			goto IL_006b;
		}
		G_B2_0 = L_9;
	}
	{
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_11 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		RuntimeObject* L_12 = L_11->___list;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		Il2CppSharedGenericObject* L_14;
		L_14 = InterfaceFuncInvoker1< Il2CppSharedGenericObject*, int32_t >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_12, L_13);
		V_3 = L_14;
		NullCheck((RuntimeObject*)(V_3));
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)(V_3));
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_15, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		G_B4_0 = L_16;
		G_B4_1 = G_B2_0;
		goto IL_0070;
	}

IL_006b:
	{
		G_B4_0 = _stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F;
		G_B4_1 = G_B3_0;
	}

IL_0070:
	{
		NullCheck(G_B4_1);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B4_1, G_B4_0, NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_007a:
	{
		int32_t L_19 = V_1;
		Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7* L_20 = (Enumerator_tC5BD7049BDD0A4088BAFDC0E9BE510888A0F4DD7*)(&__this->___m_Enumerator);
		int32_t L_21;
		L_21 = Enumerator_get_end_mA57C9B393320CEA4D1ECC2591D47D95FB2170CA1_inline(L_20, NULL);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_24);
		return L_25;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyListSpan_1_ToString_m30AC764FF632920E19FDFEC30C6CE7D9FC1356AC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t694D265F3A1189E1E7996F3B02066EAE7E0568AC>(__this);
	String_t* _returnValue;
	_returnValue = ReadOnlyListSpan_1_ToString_m30AC764FF632920E19FDFEC30C6CE7D9FC1356AC(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyListSpan_1_get_Count_mB9B6FC7126545BF12B1C12560A79FDD5B6135321_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_0 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		int32_t L_1;
		L_1 = ((  int32_t (*) (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(L_0, NULL);
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_2 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		int32_t L_3;
		L_3 = ((  int32_t (*) (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(L_2, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_1, L_3));
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyListSpan_1_get_Count_mB9B6FC7126545BF12B1C12560A79FDD5B6135321_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0>(__this);
	int32_t _returnValue;
	_returnValue = ReadOnlyListSpan_1_get_Count_mB9B6FC7126545BF12B1C12560A79FDD5B6135321(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyListSpan_1_get_Item_mE623420F3DC21EB7BB66A96DD03B9AB36B8FA7BE_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38);
	{
		int32_t L_0 = ___0_index;
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_1 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		int32_t L_2;
		L_2 = ((  int32_t (*) (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(L_1, NULL);
		___0_index = ((int32_t)il2cpp_codegen_add(L_0, L_2));
		int32_t L_3 = ___0_index;
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_4 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		int32_t L_5;
		L_5 = ((  int32_t (*) (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(L_4, NULL);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = ___0_index;
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_7 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		int32_t L_8;
		L_8 = ((  int32_t (*) (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0031:
	{
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_10 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		RuntimeObject* L_11 = L_10->___list;
		int32_t L_12 = ___0_index;
		NullCheck(L_11);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_11, L_12, (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38);
		return;
	}
}
IL2CPP_EXTERN_C  void ReadOnlyListSpan_1_get_Item_mE623420F3DC21EB7BB66A96DD03B9AB36B8FA7BE_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0>(__this);
	ReadOnlyListSpan_1_get_Item_mE623420F3DC21EB7BB66A96DD03B9AB36B8FA7BE(_thisAdjusted, ___0_index, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyListSpan_1__ctor_m3848921642AF8A037E0FE14F84095219E30D348A_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_list;
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Enumerator__ctor_mD276A3E1BAEB4C826E515E3936E13955DBE48A0D((&L_3), L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_Enumerator = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Enumerator))->___list), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0 ReadOnlyListSpan_1_Empty_m4D609CB31E90E15AD8248211BFFBCDAFF0D4B62F_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0 L_0 = ((ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 ReadOnlyListSpan_1_GetEnumerator_m0E4B5C22F4346E0C782C582A499CBBCF1768BA56_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 L_0 = __this->___m_Enumerator;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B7FA4BF190591FFA67EA4992A48BD2AA041CD13_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 L_0;
		L_0 = ((  Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 (*) (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(__this, NULL);
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B7FA4BF190591FFA67EA4992A48BD2AA041CD13_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyListSpan_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B7FA4BF190591FFA67EA4992A48BD2AA041CD13(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_m18FDBF32F851A3BA802C1486656BD1BA9A8D7E1A_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 L_0;
		L_0 = ((  Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 (*) (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(__this, NULL);
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_m18FDBF32F851A3BA802C1486656BD1BA9A8D7E1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyListSpan_1_System_Collections_IEnumerable_GetEnumerator_m18FDBF32F851A3BA802C1486656BD1BA9A8D7E1A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyListSpan_1_Equals_mD81B540C37F74BF29A97329D2B39FBA7B2BF4BAC_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_0 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0 L_1 = ___0_other;
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 L_2 = L_1.___m_Enumerator;
		bool L_3;
		L_3 = ((  bool (*) (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*, Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(L_0, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyListSpan_1_Equals_mD81B540C37F74BF29A97329D2B39FBA7B2BF4BAC_AdjustorThunk (RuntimeObject* __this, ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0 ___0_other, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0>(__this);
	bool _returnValue;
	_returnValue = ReadOnlyListSpan_1_Equals_mD81B540C37F74BF29A97329D2B39FBA7B2BF4BAC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyListSpan_1_Equals_mB935A66C830E6C97D8461B3E93522D625FDC0473_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6))));
		ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0 L_2 = V_0;
		bool L_3;
		L_3 = ((  bool (*) (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0*, ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyListSpan_1_Equals_mB935A66C830E6C97D8461B3E93522D625FDC0473_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0>(__this);
	bool _returnValue;
	_returnValue = ReadOnlyListSpan_1_Equals_mB935A66C830E6C97D8461B3E93522D625FDC0473(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyListSpan_1_GetHashCode_m58583F9ACAEA9324D4C15DA3DF6B0A93F49C9DFA_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_0 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		int32_t L_1;
		L_1 = Enumerator_GetHashCode_mD3851CC5A559E71E80171CFD875008ECB1F7DE9A(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyListSpan_1_GetHashCode_m58583F9ACAEA9324D4C15DA3DF6B0A93F49C9DFA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0>(__this);
	int32_t _returnValue;
	_returnValue = ReadOnlyListSpan_1_GetHashCode_m58583F9ACAEA9324D4C15DA3DF6B0A93F49C9DFA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyListSpan_1_ToString_mCDE626AECF83378C09AB8908021AB9D6D7F24E67_fshared (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	void* L_16 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38);
	const Il2CppFullySharedGenericAny L_15 = L_8;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38);
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38);
	memset(V_2, 0, SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38);
	memset(V_3, 0, SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38);
	StringBuilder_t* G_B3_0 = NULL;
	StringBuilder_t* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	StringBuilder_t* G_B4_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_3 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		int32_t L_4;
		L_4 = ((  int32_t (*) (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(L_3, NULL);
		V_1 = L_4;
		goto IL_007a;
	}

IL_0020:
	{
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_5 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		RuntimeObject* L_6 = L_5->___list;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_6, L_7, (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_memcpy(V_2, L_8, SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38);
		StringBuilder_t* L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_10);
		if (!L_11)
		{
			G_B3_0 = L_9;
			goto IL_006b;
		}
		G_B2_0 = L_9;
	}
	{
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_12 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		RuntimeObject* L_13 = L_12->___list;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_13, L_14, (Il2CppFullySharedGenericAny*)L_15);
		il2cpp_codegen_memcpy(V_3, L_15, SizeOf_T_tFD6297963F9E9D16F988A129DAB45C47F7E87C38);
		Il2CppConstrainedCallData L_17;
		Il2CppMethodPointer L_18 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12), (void*)(Il2CppFullySharedGenericAny*)V_3, &L_17, L_16);
		typedef String_t* ( *func_L_19)(void*,const RuntimeMethod*);
		String_t* L_20 = ((func_L_19)L_18)(L_17.thisPtr,L_17.method);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_20, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		G_B4_0 = L_21;
		G_B4_1 = G_B2_0;
		goto IL_0070;
	}

IL_006b:
	{
		G_B4_0 = _stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F;
		G_B4_1 = G_B3_0;
	}

IL_0070:
	{
		NullCheck(G_B4_1);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B4_1, G_B4_0, NULL);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007a:
	{
		int32_t L_24 = V_1;
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* L_25 = (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*)(&__this->___m_Enumerator);
		int32_t L_26;
		L_26 = ((  int32_t (*) (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(L_25, NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyListSpan_1_ToString_mCDE626AECF83378C09AB8908021AB9D6D7F24E67_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0>(__this);
	String_t* _returnValue;
	_returnValue = ReadOnlyListSpan_1_ToString_mCDE626AECF83378C09AB8908021AB9D6D7F24E67(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyList_1_get_Count_m8E35F216A8AE6104EB75CB1406FFF8B4B6F73869_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* L_0 = __this->___m_List;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4BEC24E525A06CD8CEE9CEDE8E94330FE2BC67F5_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 ReadOnlyList_1_get_Item_m8FF6295CBC99C41C14F48AB3F56F83570B4CD1E8_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* L_0 = __this->___m_List;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_2;
		L_2 = List_1_get_Item_m3224AD3F98EDB5C8088067D6F71BD7F983BEB136(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_mE2760724C77A10431C64AC35871578394BD84BB4_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* ___0_list, const RuntimeMethod* method) 
{
	List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* G_B2_0 = NULL;
	ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* G_B2_1 = NULL;
	List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* G_B1_0 = NULL;
	ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* L_0 = ___0_list;
		List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_List = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_List), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F ReadOnlyList_1_GetEnumerator_mC65D948BA81DFE83ECCCC954E18EA22189B33FB9_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* L_0 = __this->___m_List;
		NullCheck(L_0);
		Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F L_1;
		L_1 = List_1_GetEnumerator_m4E8AA70885B919583BD44F8430D6D194B752E944(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3823BF24BC3248FCFB3D46A5ED520D5C9859F444_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_mC65D948BA81DFE83ECCCC954E18EA22189B33FB9(__this, NULL);
		Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m9ECA2CCD3A8614F83255B153596551B20A7D4FB0_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_mC65D948BA81DFE83ECCCC954E18EA22189B33FB9(__this, NULL);
		Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_Equals_m919F140CE8E609CA25C7486EE5DF1DC0A5EC54DF_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
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
		if ((!(((RuntimeObject*)(ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type(L_2);
		NullCheck((RuntimeObject*)__this);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		bool L_7;
		L_7 = ReadOnlyList_1_Equals_m422E36825921DEA2F16D50CBA45D85312D3BA5EC(__this, ((ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28*)CastclassClass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), NULL);
		return L_7;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_m39AC438D290F79F2B51F48064D0B1EEEDFE9789D_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* ___0_lhs, ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* ___1_rhs, const RuntimeMethod* method) 
{
	{
		ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* L_0 = ___0_lhs;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* L_1 = ___1_rhs;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* L_2 = ___0_lhs;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* L_3 = ___0_lhs;
		ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* L_4 = ___1_rhs;
		NullCheck(L_3);
		bool L_5;
		L_5 = ReadOnlyList_1_Equals_m422E36825921DEA2F16D50CBA45D85312D3BA5EC(L_3, L_4, NULL);
		return L_5;
	}

IL_0013:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Inequality_m3B30401C659722C2B3DD1F4C8BBB7FB7D5869182_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* ___0_lhs, ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* ___1_rhs, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit);
	{
		ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* L_0 = ___0_lhs;
		ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* L_1 = ___1_rhs;
		CHECKED_LOCAL_INIT(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = ReadOnlyList_1_op_Equality_m39AC438D290F79F2B51F48064D0B1EEEDFE9789D(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyList_1_ToString_m6217CA3A95419E67FD7AE983BA4E80B4E23965C2_gshared (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* L_3 = __this->___m_List;
		NullCheck(L_3);
		Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F L_4;
		L_4 = List_1_GetEnumerator_m4E8AA70885B919583BD44F8430D6D194B752E944(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{
				Enumerator_Dispose_m0EF474B2E6DC86B3EE679A0178105242B5688725((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0020_1:
			{
				KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_5;
				L_5 = Enumerator_get_Current_m7F7CEEEDCF6123B5A9689B757693192D6C352B68_inline((&V_1), NULL);
				V_2 = L_5;
				StringBuilder_t* L_6 = V_0;
				G_B3_0 = L_6;
			}
			{
				String_t* L_8;
				L_8 = KeyValuePair_2_ToString_m92F46DB3FC0F5D9175819B37B2E8C9C498FB3EA1((&V_2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
				String_t* L_9;
				L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_8, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				G_B5_0 = L_9;
				G_B5_1 = G_B3_0;
				goto IL_0054_1;
			}

IL_004f_1:
			{
				G_B5_0 = _stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F;
				G_B5_1 = G_B4_0;
			}

IL_0054_1:
			{
				NullCheck(G_B5_1);
				StringBuilder_t* L_10;
				L_10 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B5_1, G_B5_0, NULL);
			}

IL_005a_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mCE5EC9419ADF6EC4C0B9C8CF5F406B17CD5C560F((&V_1), NULL);
				if (L_11)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0073;
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

IL_0073:
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__cctor_m176C7D74A5233CE0919BD5C5E18FC30A2A2822FE_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F* L_0 = (List_1_tFB7C9B925D36B2FA8E26ADA9DF69582CAA02A94F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		List_1__ctor_mB45DF9F619AF28574715B4D66E48A2D37885C9D3(L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28* L_1 = (ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		ReadOnlyList_1__ctor_mE2760724C77A10431C64AC35871578394BD84BB4(L_1, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		((ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ReadOnlyList_1_t03C8AC34856FCA2C62D65E52B783E83B314AEF28_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyList_1_get_Count_mF89B06F440DBB8FEB40077A8DB72D711493281A5 (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, const RuntimeMethod* method) 
{
	{
		List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* L_0 = __this->___m_List;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC02564F7D882A75D4367481E1BF0413CDD9B35EF_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 ReadOnlyList_1_get_Item_mC10D43FD27A8584EAD9993508DFA8514787CF726 (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* L_0 = __this->___m_List;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 L_2;
		L_2 = List_1_get_Item_m78D3AC6D23D04EC77487F9B46E569065E227F0D6(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_m6DDA3518B75CDF61A3038C7357DE4BC4D1F817FE (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* ___0_list, const RuntimeMethod* method) 
{
	List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* G_B2_0 = NULL;
	ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* G_B2_1 = NULL;
	List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* G_B1_0 = NULL;
	ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* L_0 = ___0_list;
		List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_List = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_List), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 ReadOnlyList_1_GetEnumerator_mBB17282A3F696318A24C40ED9C9C3BD9900603F3 (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, const RuntimeMethod* method) 
{
	{
		List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* L_0 = __this->___m_List;
		NullCheck(L_0);
		Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 L_1;
		L_1 = List_1_GetEnumerator_mCBCAED9EBE4AA9E8DA3556BFAB849966605E0FFC(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m63FEA9CE03A5E3916E69C55F499FBEB2130B4782 (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_mBB17282A3F696318A24C40ED9C9C3BD9900603F3(__this, NULL);
		Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m83CF37CC2F785AD8D83B1D9C9BD7B3299F2A5777 (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_mBB17282A3F696318A24C40ED9C9C3BD9900603F3(__this, NULL);
		Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_Equals_m2853ACFD7D6047B6426AB4F6699701D0C172D7B5 (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
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
		if ((!(((RuntimeObject*)(ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type(L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(__this);
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		bool L_7;
		L_7 = ReadOnlyList_1_Equals_mD9A33BF01CAF32C5BD0AB1C83184C0B0F825B99C(__this, ((ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3*)CastclassClass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), NULL);
		return L_7;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_mB0864413423171B80175A26FF478FACA1C6CAF0C (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* ___0_lhs, ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* ___1_rhs, const RuntimeMethod* method) 
{
	{
		ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* L_0 = ___0_lhs;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* L_1 = ___1_rhs;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* L_2 = ___0_lhs;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* L_3 = ___0_lhs;
		ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* L_4 = ___1_rhs;
		NullCheck(L_3);
		bool L_5;
		L_5 = ReadOnlyList_1_Equals_mD9A33BF01CAF32C5BD0AB1C83184C0B0F825B99C(L_3, L_4, NULL);
		return L_5;
	}

IL_0013:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Inequality_mD69C802E418E458E435AC2899BBACF5705DCD67E (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* ___0_lhs, ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* ___1_rhs, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit);
	{
		ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* L_0 = ___0_lhs;
		ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* L_1 = ___1_rhs;
		CHECKED_LOCAL_INIT(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = ReadOnlyList_1_op_Equality_mB0864413423171B80175A26FF478FACA1C6CAF0C(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyList_1_ToString_mB9584A9E0CE3A5592792724080CA402582338148 (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 V_2;
	memset((&V_2), 0, sizeof(V_2));
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* L_3 = __this->___m_List;
		NullCheck(L_3);
		Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3 L_4;
		L_4 = List_1_GetEnumerator_mCBCAED9EBE4AA9E8DA3556BFAB849966605E0FFC(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{
				Enumerator_Dispose_m677FE74C81BB4AC4BB52F22C77CBC2E0259B7BE0((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0020_1:
			{
				ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 L_5;
				L_5 = Enumerator_get_Current_m7D744ECF2EC365FA7792D722619E477143579725_inline((&V_1), NULL);
				V_2 = L_5;
				StringBuilder_t* L_6 = V_0;
				G_B3_0 = L_6;
			}
			{
				String_t* L_8;
				L_8 = ARExternalTexture_ToString_m6E4AF1FEEFE54AA9680BC13971B1285D50EF783C((&V_2), NULL);
				String_t* L_9;
				L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_8, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				G_B5_0 = L_9;
				G_B5_1 = G_B3_0;
				goto IL_0054_1;
			}

IL_004f_1:
			{
				G_B5_0 = _stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F;
				G_B5_1 = G_B4_0;
			}

IL_0054_1:
			{
				NullCheck(G_B5_1);
				StringBuilder_t* L_10;
				L_10 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B5_1, G_B5_0, NULL);
			}

IL_005a_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mF83E2C0513BF627CD4B426C17EDEBCE04BA0EECF((&V_1), NULL);
				if (L_11)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0073;
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

IL_0073:
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__cctor_mEBEA432AD884461EA0CD01B8A77783D7FF36FE32 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F* L_0 = (List_1_t073F04D3DD63A0C6F72BD5795EE55D9EF83C097F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		List_1__ctor_mF8611A2A5E6B290A775A233867AD5B993B19BCA5(L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3* L_1 = (ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		ReadOnlyList_1__ctor_m6DDA3518B75CDF61A3038C7357DE4BC4D1F817FE(L_1, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		((ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ReadOnlyList_1_tE6FDADF001AF091E6D114839B09439A24A35F8E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyList_1_get_Count_mE28DF61CF685DB972306A01A98E4D621F15FC9D1 (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, const RuntimeMethod* method) 
{
	{
		List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* L_0 = __this->___m_List;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m2F473C41100A82DCB758D7A195EB1DD952A82ACB_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 ReadOnlyList_1_get_Item_m79B9E0A7DFB950C64ED79EF88539ADADF0C3A60E (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* L_0 = __this->___m_List;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 L_2;
		L_2 = List_1_get_Item_mC2B02D75C0DDB460AA7B891AF2A356394BF4D838(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_mD69530C6AFE4C87C77B50B85829B2FAC76AA5502 (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* ___0_list, const RuntimeMethod* method) 
{
	List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* G_B2_0 = NULL;
	ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* G_B2_1 = NULL;
	List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* G_B1_0 = NULL;
	ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* L_0 = ___0_list;
		List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_List = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_List), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E ReadOnlyList_1_GetEnumerator_m8E20EE92E9D87C8348DD3BD0B31D1D1BA028BD1F (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, const RuntimeMethod* method) 
{
	{
		List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* L_0 = __this->___m_List;
		NullCheck(L_0);
		Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E L_1;
		L_1 = List_1_GetEnumerator_m1A1A74D73E5CA27399C9CCB66DD363637885CC05(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m40265A8A61418EBFAE338C16F44EE901C1AE1FA8 (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_m8E20EE92E9D87C8348DD3BD0B31D1D1BA028BD1F(__this, NULL);
		Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m27DE6FA10D898484CFFF4C11FE704CB280B1A374 (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_m8E20EE92E9D87C8348DD3BD0B31D1D1BA028BD1F(__this, NULL);
		Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_Equals_m4D56AC53DF1C11B0C588E76A75133B94F82030A0 (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
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
		if ((!(((RuntimeObject*)(ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type(L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(__this);
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		bool L_7;
		L_7 = ReadOnlyList_1_Equals_m4AC17251BFA3358A899D308E952CEF618CFFD5E0(__this, ((ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0*)CastclassClass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), NULL);
		return L_7;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_m10006CE133DA82A98172B1BE19691168536F170E (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* ___0_lhs, ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* ___1_rhs, const RuntimeMethod* method) 
{
	{
		ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* L_0 = ___0_lhs;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* L_1 = ___1_rhs;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* L_2 = ___0_lhs;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* L_3 = ___0_lhs;
		ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* L_4 = ___1_rhs;
		NullCheck(L_3);
		bool L_5;
		L_5 = ReadOnlyList_1_Equals_m4AC17251BFA3358A899D308E952CEF618CFFD5E0(L_3, L_4, NULL);
		return L_5;
	}

IL_0013:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Inequality_m0A4B9DF7B3AC10DD311F97BCE6E898076C9F5590 (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* ___0_lhs, ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* ___1_rhs, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit);
	{
		ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* L_0 = ___0_lhs;
		ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* L_1 = ___1_rhs;
		CHECKED_LOCAL_INIT(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = ReadOnlyList_1_op_Equality_m10006CE133DA82A98172B1BE19691168536F170E(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyList_1_ToString_m44FE592684F7995A7138F03AE965D49609042E15 (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E V_1;
	memset((&V_1), 0, sizeof(V_1));
	MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 V_2;
	memset((&V_2), 0, sizeof(V_2));
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* L_3 = __this->___m_List;
		NullCheck(L_3);
		Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E L_4;
		L_4 = List_1_GetEnumerator_m1A1A74D73E5CA27399C9CCB66DD363637885CC05(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{
				Enumerator_Dispose_mFFDF7DCDF265271F79245D41531ED3543BA6EF75((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0020_1:
			{
				MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 L_5;
				L_5 = Enumerator_get_Current_mDEFD14C124A84610F097747CEE4FB6F1AA8AB2F3_inline((&V_1), NULL);
				V_2 = L_5;
				StringBuilder_t* L_6 = V_0;
				G_B3_0 = L_6;
			}
			{
				Il2CppFakeBox<MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001> L_8(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), V_2);
				String_t* L_9;
				L_9 = ValueType_ToString_mFE1CB83BECC99D07BEA7EAB25AF73BE5A727C04D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), NULL);
				String_t* L_10;
				L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_9, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				G_B5_0 = L_10;
				G_B5_1 = G_B3_0;
				goto IL_0054_1;
			}

IL_004f_1:
			{
				G_B5_0 = _stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F;
				G_B5_1 = G_B4_0;
			}

IL_0054_1:
			{
				NullCheck(G_B5_1);
				StringBuilder_t* L_11;
				L_11 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B5_1, G_B5_0, NULL);
			}

IL_005a_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_mBE1F743CF396846EE3B2EF1A5DFAE0BDE0DDB824((&V_1), NULL);
				if (L_12)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0073;
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

IL_0073:
	{
		StringBuilder_t* L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_15);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__cctor_m0A9908C9047988B063DD71DFFAC7DDCD3A45267A (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9* L_0 = (List_1_t08A14FD241DB3D96E1F2B03598A176DCC3F1CCC9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		List_1__ctor_m9671702289C413BEE379D41C36234BF1CEA8EFB7(L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0* L_1 = (ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		ReadOnlyList_1__ctor_mD69530C6AFE4C87C77B50B85829B2FAC76AA5502(L_1, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		((ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ReadOnlyList_1_tF544680ED3DBD1DC70C3157ACD89C08CE7EC37E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyList_1_get_Count_mB7FBC74D9915A57E232D3A6801F38EB0BF580869 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, const RuntimeMethod* method) 
{
	{
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = __this->___m_List;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF35895D0A5F369F3003B2BF656C692AAD6169B74_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ReadOnlyList_1_get_Item_m7B876F509A27F0DAE135D9E34D024F4C678AFA89 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = __this->___m_List;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = List_1_get_Item_m30DAA93C38186B88FCB4FDE8CD17B27CC6517431(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_mC61D7DFF23B35F96F2D733CB60284B8F1CBDD449 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* ___0_list, const RuntimeMethod* method) 
{
	List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* G_B2_0 = NULL;
	ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* G_B2_1 = NULL;
	List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* G_B1_0 = NULL;
	ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = ___0_list;
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_List = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_List), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 ReadOnlyList_1_GetEnumerator_mC9608B67FD0ED3A5F6399FB5E08E6FA8F1B9B54B (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, const RuntimeMethod* method) 
{
	{
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = __this->___m_List;
		NullCheck(L_0);
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 L_1;
		L_1 = List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mAABD976B1EBAB3B576C09864D6DF764FCABABBB2 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_mC9608B67FD0ED3A5F6399FB5E08E6FA8F1B9B54B(__this, NULL);
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m3A36B11C170288CF6792B719B7D9BF449373CC71 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_mC9608B67FD0ED3A5F6399FB5E08E6FA8F1B9B54B(__this, NULL);
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_Equals_m68695D8AFAC4D2A6A32222C6DFE386823FBC5451 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
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
		if ((!(((RuntimeObject*)(ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type(L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(__this);
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		bool L_7;
		L_7 = ReadOnlyList_1_Equals_m8148EC6C733368979540E48002655798CE833514(__this, ((ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94*)CastclassClass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), NULL);
		return L_7;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_mB23FCBF3509ADC2FD4569AA28C85481DDFA883D7 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* ___0_lhs, ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* ___1_rhs, const RuntimeMethod* method) 
{
	{
		ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* L_0 = ___0_lhs;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* L_1 = ___1_rhs;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* L_2 = ___0_lhs;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* L_3 = ___0_lhs;
		ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* L_4 = ___1_rhs;
		NullCheck(L_3);
		bool L_5;
		L_5 = ReadOnlyList_1_Equals_m8148EC6C733368979540E48002655798CE833514(L_3, L_4, NULL);
		return L_5;
	}

IL_0013:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Inequality_mB3FCB6D42966C835CD48FC530A943DAABEA267E4 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* ___0_lhs, ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* ___1_rhs, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit);
	{
		ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* L_0 = ___0_lhs;
		ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* L_1 = ___1_rhs;
		CHECKED_LOCAL_INIT(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = ReadOnlyList_1_op_Equality_mB23FCBF3509ADC2FD4569AA28C85481DDFA883D7(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyList_1_ToString_m3A0997D686F81C501BD8952032628F985ABA62E0 (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticInit);
	StringBuilder_t* V_0 = NULL;
	Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_3 = __this->___m_List;
		NullCheck(L_3);
		Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83 L_4;
		L_4 = List_1_GetEnumerator_m77E58C41D9615087D6BC38CBD1BD2EBBFA697601(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{
				Enumerator_Dispose_m26283ED5A88641328A709A34A0C0804C4DBB9BBB((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0020_1:
			{
				Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
				L_5 = Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_inline((&V_1), NULL);
				V_2 = L_5;
				StringBuilder_t* L_6 = V_0;
				G_B3_0 = L_6;
			}
			{
				CHECKED_LOCAL_INIT(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticInit,(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				String_t* L_8;
				L_8 = Pose_ToString_m4F33190911B86A9B72CA59D6AF3C633569CDE6D2((&V_2), NULL);
				String_t* L_9;
				L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_8, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				G_B5_0 = L_9;
				G_B5_1 = G_B3_0;
				goto IL_0054_1;
			}

IL_004f_1:
			{
				G_B5_0 = _stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F;
				G_B5_1 = G_B4_0;
			}

IL_0054_1:
			{
				NullCheck(G_B5_1);
				StringBuilder_t* L_10;
				L_10 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B5_1, G_B5_0, NULL);
			}

IL_005a_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mD7AEDA023CFBC8132E5FD250C3E8FD190DC8ABA6((&V_1), NULL);
				if (L_11)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0073;
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

IL_0073:
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__cctor_mAB61EC6DDB60462B1A3E80DD27AB724BFA033C97 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2* L_0 = (List_1_t785970ECD3400B166B17F92860A0ABA24BBD51B2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		List_1__ctor_mA48F9B1D25C8FBF25520257A5D3DC9F78DECB453(L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94* L_1 = (ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		ReadOnlyList_1__ctor_mC61D7DFF23B35F96F2D733CB60284B8F1CBDD449(L_1, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		((ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ReadOnlyList_1_t59697941BC823301960079A45332927E1B316E94_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyList_1_get_Count_m86A3E05F5CD2374FA15E2CF074D059561F113B54 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, const RuntimeMethod* method) 
{
	{
		List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* L_0 = __this->___m_List;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC3EB5B42E649A756DA6396DF3385FD7C3F280444_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFov_t51E4BB7B76304E61CF064687586D096CE585817A ReadOnlyList_1_get_Item_mEA2EC651C9BCAB5D7F2EF3815CC092A7D274B274 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* L_0 = __this->___m_List;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_2;
		L_2 = List_1_get_Item_m002283E4B011370F9AF0D2FA066A537D75F39AFE(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_m4768C9E8888D4A13B66E1E49B47567269E1A4BFC (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* ___0_list, const RuntimeMethod* method) 
{
	List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* G_B2_0 = NULL;
	ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* G_B2_1 = NULL;
	List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* G_B1_0 = NULL;
	ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* L_0 = ___0_list;
		List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_List = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_List), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B ReadOnlyList_1_GetEnumerator_m0C3C4B8421B5EA1B4D331CF9328E08A207E9D937 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, const RuntimeMethod* method) 
{
	{
		List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* L_0 = __this->___m_List;
		NullCheck(L_0);
		Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B L_1;
		L_1 = List_1_GetEnumerator_mED4954AEAAB1CDC4F3BBC9A4D90D73825F1EE44D(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m78ED79CDAC51C659BD793F67C6836587D17DD097 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_m0C3C4B8421B5EA1B4D331CF9328E08A207E9D937(__this, NULL);
		Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m0DD0FD406F919F28133D7614D6587B41B5075F87 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_m0C3C4B8421B5EA1B4D331CF9328E08A207E9D937(__this, NULL);
		Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_Equals_m782683E45BA1D9742D65E0000905B247AE3D2BE7 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
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
		if ((!(((RuntimeObject*)(ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type(L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(__this);
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		bool L_7;
		L_7 = ReadOnlyList_1_Equals_m009D3F6ABC0BF7A1B67D96CD6AD213C79044221C(__this, ((ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C*)CastclassClass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), NULL);
		return L_7;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_m545A15746A28037AF15C98D3E7B4FC0E48E458F6 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* ___0_lhs, ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* ___1_rhs, const RuntimeMethod* method) 
{
	{
		ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* L_0 = ___0_lhs;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* L_1 = ___1_rhs;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* L_2 = ___0_lhs;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* L_3 = ___0_lhs;
		ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* L_4 = ___1_rhs;
		NullCheck(L_3);
		bool L_5;
		L_5 = ReadOnlyList_1_Equals_m009D3F6ABC0BF7A1B67D96CD6AD213C79044221C(L_3, L_4, NULL);
		return L_5;
	}

IL_0013:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Inequality_m52D70799B0953C72697DE3AB709218EE67DDDBD4 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* ___0_lhs, ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* ___1_rhs, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit);
	{
		ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* L_0 = ___0_lhs;
		ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* L_1 = ___1_rhs;
		CHECKED_LOCAL_INIT(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = ReadOnlyList_1_op_Equality_m545A15746A28037AF15C98D3E7B4FC0E48E458F6(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyList_1_ToString_mAAC3A2E7378E1B7D10839405CD3F86FA090DA196 (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRFov_t51E4BB7B76304E61CF064687586D096CE585817A V_2;
	memset((&V_2), 0, sizeof(V_2));
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* L_3 = __this->___m_List;
		NullCheck(L_3);
		Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B L_4;
		L_4 = List_1_GetEnumerator_mED4954AEAAB1CDC4F3BBC9A4D90D73825F1EE44D(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{
				Enumerator_Dispose_m5E9F0BA6BDC704A98AE4114A2D1157165EC839CA((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0020_1:
			{
				XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_5;
				L_5 = Enumerator_get_Current_m8D4427C1AD90FA12DC408E816243ADAA6DF627DB_inline((&V_1), NULL);
				V_2 = L_5;
				StringBuilder_t* L_6 = V_0;
				G_B3_0 = L_6;
			}
			{
				String_t* L_8;
				L_8 = XRFov_ToString_m08445F611AE8F17B0EDD1113AB7521B039427197((&V_2), NULL);
				String_t* L_9;
				L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_8, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				G_B5_0 = L_9;
				G_B5_1 = G_B3_0;
				goto IL_0054_1;
			}

IL_004f_1:
			{
				G_B5_0 = _stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F;
				G_B5_1 = G_B4_0;
			}

IL_0054_1:
			{
				NullCheck(G_B5_1);
				StringBuilder_t* L_10;
				L_10 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B5_1, G_B5_0, NULL);
			}

IL_005a_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mED7BDA90BE7924285630EBE1B758D37E99B5807F((&V_1), NULL);
				if (L_11)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0073;
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

IL_0073:
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__cctor_mE9DC3D0EECBDB38F59EA55A5A8FC5DBB20B91886 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286* L_0 = (List_1_t766BA31F1CC8853BBDAD74CC8D3E628C299FE286*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		List_1__ctor_m62650656F91FEC30C2FD8F327B1C40F60765EE80(L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C* L_1 = (ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		ReadOnlyList_1__ctor_m4768C9E8888D4A13B66E1E49B47567269E1A4BFC(L_1, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		((ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ReadOnlyList_1_t11BE7A81501ACC15E8263B8B0D633C9C8F0D502C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyList_1_get_Count_m3579FBC5D664DF55D9B9BB280E1B90024F882951_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___m_List;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyList_1_get_Item_m596FE63BE85BDC21F885FD1C82F2DE4DBBDC1A6E_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___m_List;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_m1A1F35CF09DD948FFA3DDD09E14EDAD278D59DB6_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_list, const RuntimeMethod* method) 
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* G_B2_0 = NULL;
	ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* G_B2_1 = NULL;
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* G_B1_0 = NULL;
	ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_list;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_List = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_List), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 ReadOnlyList_1_GetEnumerator_m4B044B89B5BDDC24C0017A4F8E3957987EDC2507_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = __this->___m_List;
		NullCheck(L_0);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_1;
		L_1 = List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mE486BEE1FDA3D39708E6D74C1ED60AC9B8426918_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_m4B044B89B5BDDC24C0017A4F8E3957987EDC2507(__this, NULL);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m331688127B38867E01FFB162733FE67A28EDAE44_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_0;
		L_0 = ReadOnlyList_1_GetEnumerator_m4B044B89B5BDDC24C0017A4F8E3957987EDC2507(__this, NULL);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_Equals_m022D25088B9FB0156F60225101CB27404B368CC7_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
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
		if ((!(((RuntimeObject*)(ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type(L_2);
		NullCheck((RuntimeObject*)__this);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		bool L_7;
		L_7 = ReadOnlyList_1_Equals_mF13FF37F6F9E987FB069D233010E9C70807AEDB6(__this, ((ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00*)CastclassClass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), NULL);
		return L_7;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_mED35A5BFE82950C2AEA6C4A5388926E78DA372F8_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* ___0_lhs, ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* ___1_rhs, const RuntimeMethod* method) 
{
	{
		ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* L_0 = ___0_lhs;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* L_1 = ___1_rhs;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* L_2 = ___0_lhs;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* L_3 = ___0_lhs;
		ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* L_4 = ___1_rhs;
		NullCheck(L_3);
		bool L_5;
		L_5 = ReadOnlyList_1_Equals_mF13FF37F6F9E987FB069D233010E9C70807AEDB6(L_3, L_4, NULL);
		return L_5;
	}

IL_0013:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Inequality_m61092BBEF2E4CFAE6790D9FEC321093F2EF66DC6_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* ___0_lhs, ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* ___1_rhs, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit);
	{
		ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* L_0 = ___0_lhs;
		ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* L_1 = ___1_rhs;
		CHECKED_LOCAL_INIT(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = ReadOnlyList_1_op_Equality_mED35A5BFE82950C2AEA6C4A5388926E78DA372F8(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyList_1_ToString_mF69609788797AF70A8A08D2B1056FCC1AAE7B831_gshared (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppSharedGenericObject* V_2 = NULL;
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___m_List;
		NullCheck(L_3);
		Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9 L_4;
		L_4 = List_1_GetEnumerator_mD48177D95D4B5D6A9D8E84E2477668C2850DD5D9(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{
				Enumerator_Dispose_mD5CB9146005B12D9E7D7390E961933AB12147A62((&V_1), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0020_1:
			{
				Il2CppSharedGenericObject* L_5;
				L_5 = Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_inline((&V_1), NULL);
				V_2 = L_5;
				StringBuilder_t* L_6 = V_0;
				Il2CppSharedGenericObject* L_7 = V_2;
				if (!L_7)
				{
					G_B4_0 = L_6;
					goto IL_004f_1;
				}
				G_B3_0 = L_6;
			}
			{
				NullCheck((RuntimeObject*)(V_2));
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)(V_2));
				String_t* L_9;
				L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_8, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				G_B5_0 = L_9;
				G_B5_1 = G_B3_0;
				goto IL_0054_1;
			}

IL_004f_1:
			{
				G_B5_0 = _stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F;
				G_B5_1 = G_B4_0;
			}

IL_0054_1:
			{
				NullCheck(G_B5_1);
				StringBuilder_t* L_10;
				L_10 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B5_1, G_B5_0, NULL);
			}

IL_005a_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_m2B096A69E95EF2C7A223BA853D66AEC59C4A5C25((&V_1), NULL);
				if (L_11)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0073;
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

IL_0073:
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__cctor_m352FA363E09E40C4B11A4064E3709BCB1D5D99DB_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		List_1__ctor_m54D719307910A9DC9CD4DEFA8AE2626F49EB7516(L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00* L_1 = (ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		ReadOnlyList_1__ctor_m1A1F35CF09DD948FFA3DDD09E14EDAD278D59DB6(L_1, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		((ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ReadOnlyList_1_tF3B140750C7BEDB958BA5BE5AFF28CF7710FAB00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyList_1_get_Count_m1CE2C64FC59B3A309659E3BD053154D7462DB66D_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_List;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1_get_Item_mCC10C8D59C4245D7A6295AD3D921B4FE7A69F731_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t4C11BB4A8E68AA8EA1429119605D0571656556DF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t4C11BB4A8E68AA8EA1429119605D0571656556DF);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_List;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t4C11BB4A8E68AA8EA1429119605D0571656556DF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__ctor_m5BE2C04E72FFFA1875A797F84712E505FEA5526C_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* G_B2_0 = NULL;
	ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* G_B2_1 = NULL;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* G_B1_0 = NULL;
	ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_List = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_List), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1_GetEnumerator_mE21206F69F8C7A9C19C499A1276C9A6D89E58C67_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_1 = alloca(SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_List;
		NullCheck(L_0);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_0, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m52935F0A2B339986F27080639FF36E18DF81DE9A_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86);
	{
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), __this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m25C0CBE6489FAE8539794CF64093500171D3365F_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86);
	{
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), __this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_Equals_mE5EE3EBDAD773B2B31394DABC6D930821C1167E4_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* __this, ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* ___0_other, const RuntimeMethod* method) 
{
	{
		ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* L_0 = ___0_other;
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
		ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* L_1 = ___0_other;
		if ((((RuntimeObject*)(ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*)__this) == ((RuntimeObject*)(ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = __this->___m_List;
		ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* L_3 = ___0_other;
		NullCheck(L_3);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = L_3->___m_List;
		bool L_5;
		L_5 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7((RuntimeObject*)L_2, (RuntimeObject*)L_4, NULL);
		return L_5;
	}

IL_001b:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_Equals_m9345F9CD04D413BE9041E7F6F461DEFCD88B91A6_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
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
		if ((!(((RuntimeObject*)(ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type(L_2);
		NullCheck((RuntimeObject*)__this);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		bool L_7;
		L_7 = ((  bool (*) (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*, ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(__this, ((ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*)CastclassClass((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6))), NULL);
		return L_7;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Equality_mC20115E4FEE35B75EE1E1707A32B3FEACF90DCFB_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* ___0_lhs, ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* ___1_rhs, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* L_0 = ___0_lhs;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* L_1 = ___1_rhs;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* L_2 = ___0_lhs;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* L_3 = ___0_lhs;
		ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* L_4 = ___1_rhs;
		NullCheck(L_3);
		bool L_5;
		L_5 = ((  bool (*) (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*, ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(L_3, L_4, NULL);
		return L_5;
	}

IL_0013:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyList_1_op_Inequality_m74FC47BA03769AFB91542B14623258CDA98F6FF5_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* ___0_lhs, ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* ___1_rhs, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit);
	{
		ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* L_0 = ___0_lhs;
		ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* L_1 = ___1_rhs;
		CHECKED_LOCAL_INIT(ReadOnlyList_1_t0A5699F9B96E6870474526CAB91398E5C1713E40_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = ((  bool (*) (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*, ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyList_1_GetHashCode_m43EBC151880FBE2BEC4C729D2DC68829611EB4D6_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = __this->___m_List;
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
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = __this->___m_List;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyList_1_ToString_m7C5EF10559DA6C793E4190DA42E71C376FB51E21_fshared (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const uint32_t SizeOf_T_t4C11BB4A8E68AA8EA1429119605D0571656556DF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t4C11BB4A8E68AA8EA1429119605D0571656556DF);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t4C11BB4A8E68AA8EA1429119605D0571656556DF);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86);
	StringBuilder_t* V_0 = NULL;
	Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF V_1 = alloca(SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86);
	memset(V_1, 0, SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t4C11BB4A8E68AA8EA1429119605D0571656556DF);
	memset(V_2, 0, SizeOf_T_t4C11BB4A8E68AA8EA1429119605D0571656556DF);
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = __this->___m_List;
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_Enumerator_t0F7008DA65E4FCBB0449CDC4793AA4A5FD901E86);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{
				Il2CppConstrainedCallData L_6;
				Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12), (void*)(Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_1, &L_6, L_5);
				typedef void ( *func_L_8)(void*,const RuntimeMethod*);
				((func_L_8)L_7)(L_6.thisPtr,L_6.method);
				return;
			}
		});
		try
		{
			{
				goto IL_005a_1;
			}

IL_0020_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_1, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_2, L_9, SizeOf_T_t4C11BB4A8E68AA8EA1429119605D0571656556DF);
				StringBuilder_t* L_10 = V_0;
				il2cpp_codegen_memcpy(L_11, V_2, SizeOf_T_t4C11BB4A8E68AA8EA1429119605D0571656556DF);
				bool L_12 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_11);
				if (!L_12)
				{
					G_B4_0 = L_10;
					goto IL_004f_1;
				}
				G_B3_0 = L_10;
			}
			{
				Il2CppConstrainedCallData L_14;
				Il2CppMethodPointer L_15 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (void*)(Il2CppFullySharedGenericAny*)V_2, &L_14, L_13);
				typedef String_t* ( *func_L_16)(void*,const RuntimeMethod*);
				String_t* L_17 = ((func_L_16)L_15)(L_14.thisPtr,L_14.method);
				String_t* L_18;
				L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_17, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				G_B5_0 = L_18;
				G_B5_1 = G_B3_0;
				goto IL_0054_1;
			}

IL_004f_1:
			{
				G_B5_0 = _stringLiteral9B6EFB1D7065A9D39621C940A3CF056D5F8F037F;
				G_B5_1 = G_B4_0;
			}

IL_0054_1:
			{
				NullCheck(G_B5_1);
				StringBuilder_t* L_19;
				L_19 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B5_1, G_B5_0, NULL);
			}

IL_005a_1:
			{
				bool L_20;
				L_20 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
				if (L_20)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0073;
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

IL_0073:
	{
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_23);
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyList_1__cctor_m594B115EC483B344FF1A63CBAC1478F3102089D4_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)))(L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325* L_1 = (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		((  void (*) (ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)))(L_1, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		((ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ReadOnlyList_1_t5A1F1137790DEE4D01A68AC8ED621605C0290325_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_EmptyList), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyMemory_1_ToString_m0C4DF727B39C613F84AC56D6FDAF7ACFF9E39720 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral958BF5561D89C9A90653416FCB65BBE72DADDE1E);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	String_t* V_0 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_0058;
	}

IL_0058:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = ((int32_t)(L_3&((int32_t)2147483647LL)));
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral958BF5561D89C9A90653416FCB65BBE72DADDE1E, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyMemory_1_ToString_m0C4DF727B39C613F84AC56D6FDAF7ACFF9E39720_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399>(__this);
	String_t* _returnValue;
	_returnValue = ReadOnlyMemory_1_ToString_m0C4DF727B39C613F84AC56D6FDAF7ACFF9E39720(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlyMemory_1_get_Span_mA087C8160638E6581A03C1BDAF2803AC88834762 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(4, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_5, NULL);
		return L_6;
	}

IL_0039:
	{
		goto IL_008e;
	}

IL_008e:
	{
		RuntimeObject* L_7 = __this->____object;
		if (!L_7)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_8 = __this->____object;
		int32_t L_9 = __this->____index;
		int32_t L_10 = __this->____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_11;
		memset((&L_11), 0, sizeof(L_11));
		ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline((&L_11), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9))), L_9, ((int32_t)(L_10&((int32_t)2147483647LL))), NULL);
		return L_11;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mD0C4947B91FD3864C476B6CA8BA929A6F5B01175 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11))));
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_2 = V_0;
		bool L_3;
		L_3 = ReadOnlyMemory_1_Equals_mC3969DE0744A246E0576FEDE51191A0D3F5F69A9(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13))))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_5 = ___0_obj;
		V_1 = ((*(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)UnBox(L_5, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13))));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_6 = V_1;
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_7;
		L_7 = Memory_1_op_Implicit_m7B80A71310A3EA9F99CB1774CAFED254811599CD(L_6, NULL);
		bool L_8;
		L_8 = ReadOnlyMemory_1_Equals_mC3969DE0744A246E0576FEDE51191A0D3F5F69A9(__this, L_7, NULL);
		return L_8;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyMemory_1_Equals_mD0C4947B91FD3864C476B6CA8BA929A6F5B01175_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399>(__this);
	bool _returnValue;
	_returnValue = ReadOnlyMemory_1_Equals_mD0C4947B91FD3864C476B6CA8BA929A6F5B01175(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_GetHashCode_mE47597BBDBFFBC9185DE65261A7388207854ADE6 (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____object;
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
		RuntimeObject* L_1 = __this->____object;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		int32_t* L_3 = (int32_t*)(&__this->____index);
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_3, NULL);
		int32_t* L_5 = (int32_t*)(&__this->____length);
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_5, NULL);
		int32_t L_7;
		L_7 = ReadOnlyMemory_1_CombineHashCodes_mC20EA69C2706DE824529A0506BD45837E26C6980(L_2, L_4, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyMemory_1_GetHashCode_mE47597BBDBFFBC9185DE65261A7388207854ADE6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399>(__this);
	int32_t _returnValue;
	_returnValue = ReadOnlyMemory_1_GetHashCode_mE47597BBDBFFBC9185DE65261A7388207854ADE6(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_mC20EA69C2706DE824529A0506BD45837E26C6980 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_h1;
		int32_t L_1 = ___1_h2;
		int32_t L_2;
		L_2 = ReadOnlyMemory_1_CombineHashCodes_mAD75C6BDDB231C42D8A846F50E2B081E244108DA(L_0, L_1, NULL);
		int32_t L_3 = ___2_h3;
		int32_t L_4;
		L_4 = ReadOnlyMemory_1_CombineHashCodes_mAD75C6BDDB231C42D8A846F50E2B081E244108DA(L_2, L_3, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyMemory_1__ctor_m1FD19CA8A2CB8A92DC095EE34D414ADE2FD39A12_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		__this->____object = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_10);
		int32_t L_11 = ___1_start;
		__this->____index = L_11;
		int32_t L_12 = ___2_length;
		__this->____length = L_12;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_get_Length_m65A4E9056707DCDBB66443924288D7E0BA7D0074_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return ((int32_t)(L_0&((int32_t)2147483647LL)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral958BF5561D89C9A90653416FCB65BBE72DADDE1E);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	String_t* V_0 = NULL;
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_3;
		L_3 = ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		V_1 = L_3;
		String_t* L_4;
		L_4 = ReadOnlySpan_1_ToString_m04AD05E39D10A41E67653C41A22108A810CA9857((&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		return L_4;
	}

IL_003f:
	{
		String_t* L_5 = V_0;
		int32_t L_6 = __this->____index;
		int32_t L_7 = __this->____length;
		NullCheck(L_5);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, L_6, ((int32_t)(L_7&((int32_t)2147483647LL))), NULL);
		return L_8;
	}

IL_0058:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_10);
		int32_t L_12 = __this->____length;
		int32_t L_13 = ((int32_t)(L_12&((int32_t)2147483647LL)));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral958BF5561D89C9A90653416FCB65BBE72DADDE1E, L_11, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4>(__this);
	String_t* _returnValue;
	_returnValue = ReadOnlyMemory_1_ToString_m1AB8B8725FFC7144748E59C73875E2C6822E2321(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ReadOnlyMemory_1_get_Span_m3BBCF2EFAFAB7DAA8882208AF319487E00DC3895_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 >::Invoke(4, ((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_5;
		L_5 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_6;
		L_6 = ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))(L_5, NULL);
		return L_6;
	}

IL_0039:
	{
		bool L_7 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_7)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject* L_8 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
		String_t* L_9 = V_1;
		if (!L_9)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_10 = V_1;
		NullCheck(L_10);
		Il2CppChar* L_11;
		L_11 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_10, NULL);
		Il2CppFullySharedGenericAny* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_11);
		String_t* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->____stringLength;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_15;
		memset((&L_15), 0, sizeof(L_15));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_15), L_12, L_14, NULL);
		V_2 = L_15;
		int32_t L_16 = __this->____index;
		int32_t L_17 = __this->____length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_18;
		L_18 = ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))((&V_2), L_16, L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_18;
	}

IL_008e:
	{
		RuntimeObject* L_19 = __this->____object;
		if (!L_19)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_20 = __this->____object;
		int32_t L_21 = __this->____index;
		int32_t L_22 = __this->____length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_23;
		memset((&L_23), 0, sizeof(L_23));
		ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline((&L_23), ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_20, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9))), L_21, ((int32_t)(L_22&((int32_t)2147483647LL))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return L_23;
	}

IL_00b9:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_24 = V_2;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11))))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11))));
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_2 = V_0;
		bool L_3;
		L_3 = ((  bool (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		RuntimeObject* L_4 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13))))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_5 = ___0_obj;
		V_1 = ((*(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*)UnBox(L_5, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13))));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_6 = V_1;
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_7;
		L_7 = ((  ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)))(L_6, NULL);
		bool L_8;
		L_8 = ((  bool (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(__this, L_7, NULL);
		return L_8;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4>(__this);
	bool _returnValue;
	_returnValue = ReadOnlyMemory_1_Equals_m2C16DF2AE78D8E7182CFAE8E3E07C3B20A777888(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____object;
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_1 = ___0_other;
		RuntimeObject* L_2 = L_1.____object;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = __this->____index;
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_4 = ___0_other;
		int32_t L_5 = L_4.____index;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = __this->____length;
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_7 = ___0_other;
		int32_t L_8 = L_7.____length;
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_AdjustorThunk (RuntimeObject* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4>(__this);
	bool _returnValue;
	_returnValue = ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = __this->____object;
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
		RuntimeObject* L_1 = __this->____object;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		int32_t* L_3 = (int32_t*)(&__this->____index);
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_3, NULL);
		int32_t* L_5 = (int32_t*)(&__this->____length);
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_5, NULL);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)))(L_2, L_4, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4>(__this);
	int32_t _returnValue;
	_returnValue = ReadOnlyMemory_1_GetHashCode_m96535F6C6512A16E6DBC2A8341F8FECDF2E47F54(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_m74D5DE9AF0CCB1FF7B88058328C835DBD981C568_fshared (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_left;
		int32_t L_1 = ___0_left;
		int32_t L_2 = ___1_right;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_0<<5)), L_1))^L_2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyMemory_1_CombineHashCodes_m1F4667745BEC8579517F436310474B5FEE8379E6_fshared (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0 = ___0_h1;
		int32_t L_1 = ___1_h2;
		int32_t L_2;
		L_2 = ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))(L_0, L_1, NULL);
		int32_t L_3 = ___2_h3;
		int32_t L_4;
		L_4 = ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))(L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_m76D2DB58E89EF8DAAB0BEEC5E80CC99E7C3CB752_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, int32_t* ___0_start, int32_t* ___1_length, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_start;
		int32_t L_1 = __this->____index;
		*(L_0) = L_1;
		int32_t* L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		*(L_2) = L_3;
		RuntimeObject* L_4 = __this->____object;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyNativeVector_1__ctor_m64EB14620E394C425562A5F9AD826C959C29BD96_fshared (ReadOnlyNativeVector_1_tE45C179B8DFEAD70E1F59D744D5C6999873C0FFC* __this, intptr_t ___0_ptr, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_ptr;
		__this->___m_Ptr = L_0;
		int32_t L_1 = ___1_size;
		__this->___m_Count = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m570BAA2FA6B3B2F7F152D6619D1CF100D9349FAF (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_12;
		L_12 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>(L_11);
		int32_t L_13 = ___1_start;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_14;
		L_14 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_12, L_13, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mF2ADB2B548C4E7719F88D0ABC14770AE5E4DE14E (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_2;
		L_2 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>((uint8_t*)L_1);
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ReadOnlySpan_1_get_Item_m6A5C732A45AE02479171B621A148DBC2399CC0E5 (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_2 = __this->____pointer;
		V_0 = L_2;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_5;
		L_5 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_3, L_4, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m7183D13AD806FDB2EC0884762F77A4C86FE4602A (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_2 = ___0_destination;
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_3 = L_2.____pointer;
		V_0 = L_3;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5 = __this->____pointer;
		V_0 = L_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m033324D7B7BD7BAF8F65DE0934269BDDDB71EF5F (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_2 = ___0_destination;
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_3 = L_2.____pointer;
		V_1 = L_3;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_1));
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5 = __this->____pointer;
		V_1 = L_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mCA881F846F1762D5AE214F0AAA740E7CA119C7EC (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ReadOnlySpan_1_Slice_m7C47F3D3EA3870649051BCE9293B3938931EF55F (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_2 = __this->____pointer;
		V_0 = L_2;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_5;
		L_5 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_3, L_4, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m2310FC0E91B7ECFAE542316434BB4C9D6782042B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ReadOnlySpan_1_Slice_m80AC0C5A0EBBFE2438C2D42F6048AC07AF86697D (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5 = __this->____pointer;
		V_0 = L_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_8;
		L_8 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_6, L_7, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m2310FC0E91B7ECFAE542316434BB4C9D6782042B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ReadOnlySpan_1_ToArray_m32FED539B1AE3E7D80E2C647267628D88C95851A (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_1 = ((EmptyArray_1_tBCCAE4080E81992F81CEC3B682CED9E81A3B4D67_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_3 = (EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA*)(EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>(L_5);
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_7 = __this->____pointer;
		V_0 = L_7;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m410F5EE92CACE44CC4DE5DCC7D5D143EEA37EF03 (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ___0_left, ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 L_0 = ___0_left;
		ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mBDAC100928A2A40355010648140EA50C37DE399E(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m65967C64A7A6961BD33CDE60AF90ABA8EFB3E9A0 (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m3C18BC4937635B9FCA7A528656359E4BF954CA99 (ReadOnlySpan_1_t7F03D2582CD1D30379484DC4C7234A09661B8000* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m52859FE79EBD2B8DECF3E13A88DCA05F0BBEC0D5_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_12;
		L_12 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>(L_11);
		int32_t L_13 = ___1_start;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_14;
		L_14 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_12, L_13, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4F3AAB57F39E2E2579C12537324356199712C995_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___1_length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___0_pointer;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>((uint8_t*)L_3);
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		int32_t L_6 = ___1_length;
		__this->____length = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ReadOnlySpan_1_get_Item_m54C6853793A297EC8E291814DE88BEB8A7CE3E51_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_2 = __this->____pointer;
		V_0 = L_2;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_5;
		L_5 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_3, L_4, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mCC42376BE7A3B0B3FA269BB7B746C2A0E139C7CE_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_2 = ___0_destination;
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_3 = L_2.____pointer;
		V_0 = L_3;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5 = __this->____pointer;
		V_0 = L_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m1F29665F008B75D3A568BCBB9C2C5A85D085F7E2_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_2 = ___0_destination;
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_3 = L_2.____pointer;
		V_1 = L_3;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_1));
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5 = __this->____pointer;
		V_1 = L_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m24869D7EE38C2A3AF6EB662716D082145E19E488_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_1 = __this->____pointer;
		V_1 = L_1;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_as_ref<Il2CppChar>(L_2);
		V_0 = L_3;
		Il2CppChar* L_4 = V_0;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppChar*,intptr_t,false,false>(L_4,NULL));
		int32_t L_6 = __this->____length;
		String_t* L_7;
		L_7 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)L_5, 0, L_6, NULL);
		return L_7;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_9);
		int32_t L_11 = __this->____length;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_10, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ReadOnlySpan_1_Slice_mC99246C639C1C0F9BBF0C1F65B9A048B13049AA4_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_2 = __this->____pointer;
		V_0 = L_2;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_5;
		L_5 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_3, L_4, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m61A414D4F9636EAC0C3689FCCF1A7EA5ECD32F53_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ReadOnlySpan_1_Slice_m068A228D6A88F930B6917158C335F7964B9B16ED_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5 = __this->____pointer;
		V_0 = L_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_8;
		L_8 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_6, L_7, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m61A414D4F9636EAC0C3689FCCF1A7EA5ECD32F53_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ReadOnlySpan_1_ToArray_m3EAFADE1D32F93E52A5C68335CEEBDB840D7580A_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_1 = ((EmptyArray_1_tF44AD9BD1A58C47BDCB13A8D4D22873C785CC3F8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_3 = (HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5*)(HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>(L_5);
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_7 = __this->____pointer;
		V_0 = L_7;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_6, L_8, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m7F618D95C6871AD1E1E7CB4BFF6DA57AF103E484_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ___0_left, ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 L_0 = ___0_left;
		ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m3E5BDB77835A736157FA2EC596A124328094905D(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m0BA22FF13C56D3EE51C779C23D705DC5FFD10783_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m4E42154AB110E3CF06C3A6D6E839B10EC4758644_gshared (ReadOnlySpan_1_tE0300BBDB651E6D564DFE7BDA80CDBF9E4ABFF57* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m608B0D10A71E6646CFC375049BEE1BD4A91E42D8 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_12;
		L_12 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>(L_11);
		int32_t L_13 = ___1_start;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_14;
		L_14 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_12, L_13, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA00771A913574E450B7709FFE23409830DB02E45 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_2;
		L_2 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>((uint8_t*)L_1);
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ReadOnlySpan_1_get_Item_m700CC33B3C856FED3CCC86C3ED00E982364740EE (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_2 = __this->____pointer;
		V_0 = L_2;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_5;
		L_5 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_3, L_4, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m95C90CC8DDDFB4AF85F92507CEC7AE3E1CB452C2 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_2 = ___0_destination;
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_3 = L_2.____pointer;
		V_0 = L_3;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5 = __this->____pointer;
		V_0 = L_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mC5E1BDB5173850E33F2CFD3639E9121CE51BC2DD (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_2 = ___0_destination;
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_3 = L_2.____pointer;
		V_1 = L_3;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_1));
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5 = __this->____pointer;
		V_1 = L_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mA3FD0ADDF9145E4C17E97DAF1747D1C5FB02CD88 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ReadOnlySpan_1_Slice_mCC37A7202F48A6418256606101B999C623E89A32 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_2 = __this->____pointer;
		V_0 = L_2;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_5;
		L_5 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_3, L_4, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mB77B497E05DB783A900DCEAD111F61A3F27C7D35_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ReadOnlySpan_1_Slice_m51C8F4D23DD6380A637AEED12D9D6FBB9D661934 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5 = __this->____pointer;
		V_0 = L_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_8;
		L_8 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_6, L_7, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mB77B497E05DB783A900DCEAD111F61A3F27C7D35_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ReadOnlySpan_1_ToArray_m7B7801DA2AD817458514F0E76FB154378963B3D1 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_1 = ((EmptyArray_1_t4505232400AEC5D181E96238357D9ACD1C992762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_3 = (NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0*)(NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>(L_5);
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_7 = __this->____pointer;
		V_0 = L_7;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m56807FF5E068AE9B6D327B3F1D0797B54D179E23 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ___0_left, ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA L_0 = ___0_left;
		ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m1C315B0091ADD10B08153159755014876AB3A48B(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mD43FB77B142634D2E86E0FE099E74A56DB9C9020 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m65BE3303AD5CA8A8C18952615D5A45C5B270B3C7 (ReadOnlySpan_1_tE3210CB260ACE9EAED2369F5CCC0DB30753D60FA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m09193B91E591D145E0E45A090A3EB6D4B2C57AB5 (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_12;
		L_12 = il2cpp_unsafe_as_ref<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C>(L_11);
		int32_t L_13 = ___1_start;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_14;
		L_14 = il2cpp_unsafe_add<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C,int32_t>(L_12, L_13, sizeof(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C));
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4140194F1A34569F797FC7B8856E00EC45A5A83 (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_2;
		L_2 = il2cpp_unsafe_as_ref<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C>((uint8_t*)L_1);
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ReadOnlySpan_1_get_Item_m0EFF6B03BEA63D9161B380F2B8C530E5DFF80517 (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_2 = __this->____pointer;
		V_0 = L_2;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_5;
		L_5 = il2cpp_unsafe_add<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C,int32_t>(L_3, L_4, sizeof(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m28AC1B3F0BC5DA9816391EBC5AC1D6E34ECED063 (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 L_2 = ___0_destination;
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_3 = L_2.____pointer;
		V_0 = L_3;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_5 = __this->____pointer;
		V_0 = L_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mAEF567F21308EFA541F6912B8AAB23C9C58593E9(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m053CF40268F1FAE237756E83ED514579C331BA33 (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 L_2 = ___0_destination;
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_3 = L_2.____pointer;
		V_1 = L_3;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_1));
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_5 = __this->____pointer;
		V_1 = L_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mAEF567F21308EFA541F6912B8AAB23C9C58593E9(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m2DBB564761CD33F84389F4A91D5C4B84BE8CF80D (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF ReadOnlySpan_1_Slice_mA571B572AAB720BD338165E1F5C9397C5B090ABD (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_2 = __this->____pointer;
		V_0 = L_2;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_5;
		L_5 = il2cpp_unsafe_add<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C,int32_t>(L_3, L_4, sizeof(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mDB114C7D221442BDEE04AA70632C39DEB2E6CEBB_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF ReadOnlySpan_1_Slice_mD5E47C53C4D2BD33E0DA639E4C1EA8B0AB22BA84 (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_5 = __this->____pointer;
		V_0 = L_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_8;
		L_8 = il2cpp_unsafe_add<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C,int32_t>(L_6, L_7, sizeof(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mDB114C7D221442BDEE04AA70632C39DEB2E6CEBB_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* ReadOnlySpan_1_ToArray_m9BD32E52441446D0B21067775B4ACF80FF638504 (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_1 = ((EmptyArray_1_tC51B5E29F025A6278666985527566B350371217C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_3 = (NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2*)(NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_6;
		L_6 = il2cpp_unsafe_as_ref<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C>(L_5);
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_7 = __this->____pointer;
		V_0 = L_7;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mAEF567F21308EFA541F6912B8AAB23C9C58593E9(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m81A615A8647AF9DBF26C2C8A1E9E9AA524EB1E80 (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF ___0_left, ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF L_0 = ___0_left;
		ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mE33850CC1927163B1248DA163F7F4014F52FD68C(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mD55550BBD5BDE1B6396FBC290CB77A9EDCF12F6C (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mC38857FE546FA793E572CD24B55E2FE5E9B13A06 (ReadOnlySpan_1_t3B90470FA44A6ECA954564891CC7592FC657D9EF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0C325927D022A4794D0573B41E1BAC18B83DB914 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_12;
		L_12 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_11);
		int32_t L_13 = ___1_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_14;
		L_14 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_12, L_13, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAAA13269ECF8F777B3D66AA1381ABAF562ECAFAD (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_2;
		L_2 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>((uint8_t*)L_1);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ReadOnlySpan_1_get_Item_m2D69BC4DF6C72A65AF6044FD5D9A1DA836E581CC (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_2 = __this->____pointer;
		V_0 = L_2;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_5;
		L_5 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_3, L_4, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mC13BF984D3064FAB75E9F31240A0D461090D28B5 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_2 = ___0_destination;
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3 = L_2.____pointer;
		V_0 = L_3;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_0 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m69C0DC7A9642D41BA974889DBF468384BE169D08 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_2 = ___0_destination;
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3 = L_2.____pointer;
		V_1 = L_3;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_1));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_1 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mFD9D2B3920E4AFC4709C68A4404CD723A0ED8A19 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ReadOnlySpan_1_Slice_m76C587257127EDB2661E9B2E077F2D6C2904394C (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_2 = __this->____pointer;
		V_0 = L_2;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_5;
		L_5 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_3, L_4, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m68B11A5CBD341B71C3B49A184D9A4A0F68B2BC1B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ReadOnlySpan_1_Slice_m31FCCE32E3D3F2C5C6059960D7F47D3C0D63FAB6 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_0 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_8;
		L_8 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_6, L_7, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m68B11A5CBD341B71C3B49A184D9A4A0F68B2BC1B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ReadOnlySpan_1_ToArray_m935765D78782E0DA24C534996DA3AF27448E26F6 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_1 = ((EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_3 = (SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)(SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_5);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_7 = __this->____pointer;
		V_0 = L_7;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mD43349D875DC6D0FB0535BE3B3830C1450435420 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___0_left, ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_0 = ___0_left;
		ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m273AE2A699A7739E89673154DA9E3BE6B08A180D(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m721EBEC6C55EAE29C1D18E357CBE1B795B121355 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m5003E9917221426C5BF4F1DD6CCD9F9C627F8CB2 (ReadOnlySpan_1_t274763BD5FC8FCD51E9C71396D664D8858CF9E84* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9A0255B7BA91B844202FAAD2B1F49D85A36577E6 (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_12;
		L_12 = il2cpp_unsafe_as_ref<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58>(L_11);
		int32_t L_13 = ___1_start;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_14;
		L_14 = il2cpp_unsafe_add<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58,int32_t>(L_12, L_13, sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58));
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB4FAA861500646952C39AFBDF15CAA9E95997EE9 (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_2;
		L_2 = il2cpp_unsafe_as_ref<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58>((uint8_t*)L_1);
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ReadOnlySpan_1_get_Item_m0A843DC74F63245AEA2AB26D4444371C4651C54E (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_2 = __this->____pointer;
		V_0 = L_2;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_5;
		L_5 = il2cpp_unsafe_add<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58,int32_t>(L_3, L_4, sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mF29F69D45340C718EC781B8DC6E48FC03ACF49DE (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 L_2 = ___0_destination;
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_3 = L_2.____pointer;
		V_0 = L_3;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_5 = __this->____pointer;
		V_0 = L_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m8D063C3550F50DB141C43F4EFE3D9A04C7620B80(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m00F273405455CFA7FF0C9B9B7F94CC70DC6F636D (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 L_2 = ___0_destination;
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_3 = L_2.____pointer;
		V_1 = L_3;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_1));
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_5 = __this->____pointer;
		V_1 = L_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m8D063C3550F50DB141C43F4EFE3D9A04C7620B80(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mD8B326616E26537ED891FC425CCF3DDE98941EB8 (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3 ReadOnlySpan_1_Slice_m69B2FB654A855D75F0AFBA0CC67CB5C83936483B (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_2 = __this->____pointer;
		V_0 = L_2;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_5;
		L_5 = il2cpp_unsafe_add<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58,int32_t>(L_3, L_4, sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0406EEDB5B7DEDD87C6F2C00F4441989850C5E66_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3 ReadOnlySpan_1_Slice_m000517E22E98B82461D5A2A3225BFF2BF814103C (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_5 = __this->____pointer;
		V_0 = L_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_8;
		L_8 = il2cpp_unsafe_add<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58,int32_t>(L_6, L_7, sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0406EEDB5B7DEDD87C6F2C00F4441989850C5E66_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* ReadOnlySpan_1_ToArray_m7866FF1384B8146779F18DD9D3F559AE6A5BDFE8 (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_1 = ((EmptyArray_1_t38104844ACB1F00F66AB952D68C54320EF98254F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_3 = (Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A*)(Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_6;
		L_6 = il2cpp_unsafe_as_ref<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58>(L_5);
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_7 = __this->____pointer;
		V_0 = L_7;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m8D063C3550F50DB141C43F4EFE3D9A04C7620B80(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mB8392C2556A8A3F0B3885F9335EFA42288A27A00 (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3 ___0_left, ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3 L_0 = ___0_left;
		ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mC7FA128CC2B7A28D2649391BE1542727BD8EF339(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m1D7A516BAAA22ECC3921AA6E24FBD724E80EA157 (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mAB9BBB135A7C64446B5D3C4CA1BBD83674F59DCD (ReadOnlySpan_1_tD04D81DA84CC5A72E046B65011E7DC58F807A7E3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAE8F746B70A676C972A603BBEB6357EF30E637A9 (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_12;
		L_12 = il2cpp_unsafe_as_ref<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6>(L_11);
		int32_t L_13 = ___1_start;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_14;
		L_14 = il2cpp_unsafe_add<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6,int32_t>(L_12, L_13, sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6));
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m25124BB6954720608416402740CA140A1DF2F7DE (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_2;
		L_2 = il2cpp_unsafe_as_ref<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6>((uint8_t*)L_1);
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ReadOnlySpan_1_get_Item_m90BA25DE192DE34FE8B5C191C2261F66B35C042F (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_2 = __this->____pointer;
		V_0 = L_2;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_5;
		L_5 = il2cpp_unsafe_add<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6,int32_t>(L_3, L_4, sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m860A910C63E1C753EDCC6A5661F22711358ACC85 (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD L_2 = ___0_destination;
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_3 = L_2.____pointer;
		V_0 = L_3;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_5 = __this->____pointer;
		V_0 = L_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m874FB990BD4C4CAB728D63F58851BF2EABBEB10D(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m40EA65F4FF29AB08AC66C851B7EF0A28EE30421E (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD L_2 = ___0_destination;
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_3 = L_2.____pointer;
		V_1 = L_3;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_1));
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_5 = __this->____pointer;
		V_1 = L_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m874FB990BD4C4CAB728D63F58851BF2EABBEB10D(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m1BF0B7443F85763D2069FEB8292BD0113A8DE834 (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3 ReadOnlySpan_1_Slice_m2430BD8C94D75D108F6B788812BF89EAADDD59E6 (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_2 = __this->____pointer;
		V_0 = L_2;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_5;
		L_5 = il2cpp_unsafe_add<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6,int32_t>(L_3, L_4, sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m7B80672948294F3FEE08B413961A0352CA69129E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3 ReadOnlySpan_1_Slice_mB8F89A3A1D79CA968CEE369456390471B2E792E1 (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_5 = __this->____pointer;
		V_0 = L_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_8;
		L_8 = il2cpp_unsafe_add<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6,int32_t>(L_6, L_7, sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m7B80672948294F3FEE08B413961A0352CA69129E_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* ReadOnlySpan_1_ToArray_m5943AB118265BE912567CD09B1CECF1ABF2F500C (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_1 = ((EmptyArray_1_t8918E90EE298C7A5BF7A13F4E945F3E26C567CE3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_3 = (Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6*)(Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_6;
		L_6 = il2cpp_unsafe_as_ref<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6>(L_5);
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_7 = __this->____pointer;
		V_0 = L_7;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m874FB990BD4C4CAB728D63F58851BF2EABBEB10D(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m595E43109729D75A6FF151BC956D07721BDBDF13 (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3 ___0_left, ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3 L_0 = ___0_left;
		ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mB5D5A621364F96AE1128A9C00F431B7DA200016F(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mD530A10D1C9ACCD131132EAD0D5D694D41CDF6FD (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m0BAFBBBA3D75C413DDCEBC4ACE6C5067F98478A7 (ReadOnlySpan_1_t14B3FAFC9FA8DF9A3B6888B94B5135AD6F5D82B3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5E675F5E8D162043F87E2E91F1A8D105D7D6C805 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_12, L_13, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE81A67141DF0778695C0ED7D4B8CD743D3D9937A (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>((uint8_t*)L_1);
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ReadOnlySpan_1_get_Item_m5AD40C70CAAA66F55544EAC5853562624CEDD4EE (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_3, L_4, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m462FF7C791121DD80E6F704DB2D83D2C2ACFC393 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_2 = ___0_destination;
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mEF58D18A89697D8ABD7CBF3429385673C7761681 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_2 = ___0_destination;
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_1));
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m0A37625A3D8AD5F461CF2313B575BFA3733E2101 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ReadOnlySpan_1_Slice_m1A17102D00964F8C9CAA5228E1BDEE0B6E117306 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_3, L_4, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mE74E20E42241965E7A458DF5E23A7FA9058C4F4E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ReadOnlySpan_1_Slice_m686B172296E5F07DD0F950F9CC4BEAACA8803F5E (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_6, L_7, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mE74E20E42241965E7A458DF5E23A7FA9058C4F4E_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ReadOnlySpan_1_ToArray_m4DAE4DF83F97F2C213CF0F4123E98C8EC177E78D (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_1 = ((EmptyArray_1_tC9589F12F2382131419143780EC4B16F75839727_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_3 = (UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C*)(UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>(L_5);
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m76CC706E0DC452534C66712C378BE8BC1C6FB5EB (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ___0_left, ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 L_0 = ___0_left;
		ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mF3F15A8AA6E17FA6D014FF4ABE0086AD06B6D198(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m76978FAF00A8E3252E8313F55DFC9F929D49DFAC (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m43C6A9CCE77A1684A388D45472B151BC1E9E2FB5 (ReadOnlySpan_1_tE2870E9FEF162F87E01410AAAD6F1D8D2CF73724* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m2F11BBDD5F40B3226343C8301D11CC6E963E6AA6 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6D5420C8A93291544AE831713247C1704DF9BD52 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>((uint8_t*)L_1);
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ReadOnlySpan_1_get_Item_m98B57C2A5E139669314D54C37555841CBDE6B522 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mACF46BD6440A3D12A9E678D67489845FB950A350 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_2 = ___0_destination;
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mD02B4DAC081D1126CCAFF03C10856E9499F4FD75 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_2 = ___0_destination;
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_1));
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mF1043B2E0ED0B5BDDE0B51B193FACBE22DDA8DD9 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ReadOnlySpan_1_Slice_m21882D8D2EB4B8F82D2C107BE2C24206DB7F4009 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mE51F6529B403BD5E3C8AAE7BAE04BC3F93F7C31F_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ReadOnlySpan_1_Slice_m3871F3E7E821A4EC6AF2A9C5A1D4596CAFB68983 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mE51F6529B403BD5E3C8AAE7BAE04BC3F93F7C31F_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ReadOnlySpan_1_ToArray_m6E1A66F46B330789396D8C37C0E94F05B67372A9 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_1 = ((EmptyArray_1_t39CC4801B12BC59D744D8F2F14920ED998228BE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_3 = (UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A*)(UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>(L_5);
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m1438CC85E8FE3070B8950EC1DF36DD564AB671C7 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ___0_left, ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 L_0 = ___0_left;
		ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mAA0D16E0236C8BED9AB454299585D774E815A4A8(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m3660C302C942FD77049B0CAD4AC68EB137DDA8A5 (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m727A5786C807A6259D66FE3A64E0D1F5B3B593AA (ReadOnlySpan_1_t45680D5970EE2CDABC05A4D1502128ECAEB17085* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mAA7A1052208657A7111E40B70FDCA2A68B1A0947 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m33DDE487056A39B3BC9C2E571A2CEA7E13D55B1E (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>((uint8_t*)L_1);
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ReadOnlySpan_1_get_Item_m8ED7F37A0082EDBAB853E9946CBA1F644CEC31AF (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m0D2DD6C54E7953D98BE0C9063E11CE5F6E204AE6 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_2 = ___0_destination;
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m6EEA709B6D29E6703041EAF8412D7BAFE54D9D60 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_2 = ___0_destination;
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_1));
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mAAA5018256445B0A1B95AA7213E518CEFD28FA52 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ReadOnlySpan_1_Slice_m508AAB58F2C24C123188E44363B6E7BD9CCF61B7 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m199E5AF4F96498C11635398C59864ECAB82E7455_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ReadOnlySpan_1_Slice_mEDFF49D53D3CD81EAF4E97B62985909F2B1CC9FD (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m199E5AF4F96498C11635398C59864ECAB82E7455_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ReadOnlySpan_1_ToArray_m708CF60D3276EC800AC6035D5CBAE8C7F449968B (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_1 = ((EmptyArray_1_t8F16BED9A16610B0610D3B8977C56192C7CE8275_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_3 = (UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B*)(UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>(L_5);
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m8CA3ACF501717BD5F9131EABF09D05D540CAE146 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ___0_left, ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 L_0 = ___0_left;
		ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mBCAD4291296A130D084599C071B39A72441A6041(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m75BDD2461A1FFD7278388A31C55D84A5B604D5A1 (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m92CDF0BFB26B1ECFBC53061EC8FE3DACE549987C (ReadOnlySpan_1_t5958E85C901E89A8E7C5DBF11DE12814057072B7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE418BAFE8F76B4E12877C45D607567B3F59BFBC8 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mCA18A92CD10111753DACA7E015842930111D8CB2 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>((uint8_t*)L_1);
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ReadOnlySpan_1_get_Item_m532749192F7E0DCDAD1DDA8415C52D1B25BF5AA3 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mD224A407D0BB9254768A5B562AF61FD5F4C72B60 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_2 = ___0_destination;
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m422F9A851A2C1A4FF5E6A81A46F4A64D27A5AB64 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_2 = ___0_destination;
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_1));
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mD029C64D210A944CE10F606D7746BFE758BE1E83 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ReadOnlySpan_1_Slice_m0EFC5D7F3C3C50BC9BC997C24FA7E0225C77E4B5 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m3F71A8FCBA59B8D461F3B6CA8F89B020499102F8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ReadOnlySpan_1_Slice_mDE1C92A75905CE447C0E91872495892163285242 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m3F71A8FCBA59B8D461F3B6CA8F89B020499102F8_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ReadOnlySpan_1_ToArray_m68FF07494DFCC75CA7B9A37374E671C3E8778FF7 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_1 = ((EmptyArray_1_tE873052363E5FFF3E3324D48BF2E70EABF9FBA3E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_3 = (UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC*)(UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>(L_5);
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mD9C6F9460372638CF531AC5345C89547E37694A7 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ___0_left, ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E L_0 = ___0_left;
		ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mE6044990D7E1998FCBA25CBD93EC07FB978178A3(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m1561401F7190CD7EA7E7BCA79EB608779FC3EEAC (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m8B91F1E659BB530A8A4BBFBA9599BD143BDA6DD2 (ReadOnlySpan_1_t2C9F593EF5E4AD148EC8401C095671A8B5B33A7E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mEB5134B131D0E170994F7494CF7B926025DB115D (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD410A300E402FE08E89132BFAB0DCF881D3A4578 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>((uint8_t*)L_1);
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ReadOnlySpan_1_get_Item_m161FDA2AF27E9551881AF5113CC0DB16CD228A22 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m4481713E73C1C2D87CA4427A52238E9FFE94C3EB (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_2 = ___0_destination;
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m482AAA43086A659D3B44458010B23AFAA06FAE72 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_2 = ___0_destination;
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_1));
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m364E1785B96B2251A8440C3BAC04C660E3479CEB (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ReadOnlySpan_1_Slice_mA6CFAB3B79A8C4796C3ABE6658206A3C22936085 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0A622A67EF6097E611538708F12B2AFCDBD113A1_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ReadOnlySpan_1_Slice_m33DD63C018A322555D2CBBBE10758907E6371125 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0A622A67EF6097E611538708F12B2AFCDBD113A1_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ReadOnlySpan_1_ToArray_mECE62226B3A5EE00DED45C53014CFDF63E149BAE (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_1 = ((EmptyArray_1_tE694D0227F619BC5A10811AC94E5B6D8EE0CBD57_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_3 = (UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1*)(UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>(L_5);
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mFF252618100520D5459BBB026D18309BA70258C2 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ___0_left, ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 L_0 = ___0_left;
		ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mE014CA0F1BF433B90328F47079B9D6A39F491376(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m0D0DEA968CE25B4D93F60AE55FAF300165A6F3B6 (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mB312A1CB4929D78F97971315202646EEC20F2C8D (ReadOnlySpan_1_tC069AED9CE39F0F4AF434A60781FDC641490E974* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m57B50A119CB5C15D895BE4D8AE7AD0EC3DB2AE1C (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA20344976D826FC2C274A834141568E60CF1C41 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>((uint8_t*)L_1);
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ReadOnlySpan_1_get_Item_m9FA1BC0E559A238DB85D6C394431613EF6D1C912 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m36269F94D96E64B8C76A76A5A81F98732BDAA1ED (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_2 = ___0_destination;
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m6B3E3BC9772DF6300E69BC1D29668E5D7E9F2DFE (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_2 = ___0_destination;
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_1));
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m25F6F75A5F83A7718391D78ABAA79AC113834BA8 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ReadOnlySpan_1_Slice_m281B5F126175A24079897CAE694CBEB012476B75 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mA8962BCDAF15875BAA1631B9B69E1AC9230C568A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ReadOnlySpan_1_Slice_m5B38060FD3E682A7F9E63884F09373040AA01C2F (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mA8962BCDAF15875BAA1631B9B69E1AC9230C568A_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ReadOnlySpan_1_ToArray_m96B6D7BB4635BCDCAC0664D9DEEB80B666275D65 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_1 = ((EmptyArray_1_tA05DBCB91EE064FE54203B7543F218C61D4C292D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_3 = (UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3*)(UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>(L_5);
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mCF84881D054EAB14DC95F42E72F8B77B1AAF79FE (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ___0_left, ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 L_0 = ___0_left;
		ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m876FCAB5A193A17183A4C1055D7D78BF713D1E18(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mD9D8965F7459C54F3B5D270C08D9045FCE5D3A9F (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m0441F743AE7A7D6E633E6914C58A5833448BE5A0 (ReadOnlySpan_1_t37390238ECF9A0EFF4CB76B7DBB7D843AC6EED44* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3CE2144C56D797A26A410A0E721647C49F1C7911 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m729EEF0D26B094E266E97D2363E9AE019C5111C2 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>((uint8_t*)L_1);
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ReadOnlySpan_1_get_Item_mB6E7B868E780FD750B8D126D693BC21D70891C59 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m4D629049AA36AECB1CC99ED29CA62B07DD71A479 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_2 = ___0_destination;
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m081261D096219E736EB4704994639CA61A9A15F3 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_2 = ___0_destination;
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_1));
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m4FC4F99F9CE75AF1962CD853CBA05704DB24E740 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ReadOnlySpan_1_Slice_m6141C6014D7DB6661E415A349F85CFC24AD39E29 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m66392F19D65D8E37FF8EFFBBA237A8B3CDBD1E3A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ReadOnlySpan_1_Slice_mFB1FD51F619CED37AB98FE11ADA12E1A248CA654 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m66392F19D65D8E37FF8EFFBBA237A8B3CDBD1E3A_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ReadOnlySpan_1_ToArray_m5C43083C5EA83FFA854CE1025FE7BB19084088A6 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_1 = ((EmptyArray_1_tFEE1A4E0C8058B54F07835CFB63F231873095076_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_3 = (UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6*)(UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>(L_5);
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m5EA646D572B2CB430D29682121D2E767D0FC0E10 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ___0_left, ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 L_0 = ___0_left;
		ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mE483F93046822C9468678DB29F761D3F06FF3C7E(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mDFB15E52356B7B5B0BBC5DD55D37E73949CD4951 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m9E81D896EA507DF702BD1FF2F16365A0B0964CC6 (ReadOnlySpan_1_tB75D9F26DD2BD9AD7A09CB890238569A36CEAE71* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5CC9461EEA62E6AFAF192130729ED899D96B29B3 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB6C538A745906E2EEE476700D4A6CF9A9A92EB5D (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>((uint8_t*)L_1);
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ReadOnlySpan_1_get_Item_m11A070F8C669DF00BEBBAFCCE308167A62CE2414 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m9C9BB2ADE31A5E9AE88B1DC117EE7A21DA034566 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_2 = ___0_destination;
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m541B7430479FF42C6E99B081967334D54EAE91B4 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_2 = ___0_destination;
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_1));
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m2E4F1A19AB1855334C1547CF9ACE15DCD5F19115 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ReadOnlySpan_1_Slice_mFA719902E1959E981FA51B31A52B996B8F6BE910 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m6C812749CD726114A53FA991ED2B2081E6A42C54_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ReadOnlySpan_1_Slice_m3F1CDD84C47D5AC4C38D0DDC665D6C9057C2A134 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m6C812749CD726114A53FA991ED2B2081E6A42C54_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ReadOnlySpan_1_ToArray_mE9BF1873C7223539CB354D755DF3E755893C1FA3 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_1 = ((EmptyArray_1_t8505E6935DD4C58400550971BB8321BD8CE9D6CF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_3 = (UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8*)(UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>(L_5);
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m347BD1CD824074BBC26EB1051075ECD277168123 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ___0_left, ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 L_0 = ___0_left;
		ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m795ADA90BB856BC321715377F80986612F556D4C(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_mDEE0D8A5A525E6E8D8DF700D22F05FE391C20BF7 (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m743C71EDA03D628765DAEBB14012ECAA95546ACC (ReadOnlySpan_1_tB6FE251575712C11FEE83B2E61559919FADC9185* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mE4CAB4D57E4C6E471E6A60C4799A21D30FB02B2D (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFBFA9E1B046147D3C522901F21C3C5F95F96C3A9 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>((uint8_t*)L_1);
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ReadOnlySpan_1_get_Item_m5BAB7F8367BFD56799C9DAB924319B29C849EFAA (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mBFE5760589371B72B121A0657E7DE957833CF600 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_2 = ___0_destination;
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mB232D471E0491EC6B2B5B62ECD7745CE9FCF5917 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_2 = ___0_destination;
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_1));
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m36141D2BD434E4019FE80411CD822DDE9FD76D94 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ReadOnlySpan_1_Slice_m6CE825274F8FB27E8FB35C7DFD51D5E851B2BD6B (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mC0D0EA7EE88DAA315FBD8A84318719AB5E2BAA66_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ReadOnlySpan_1_Slice_m3881951A18DF66F1782D779BB8EE5EC9D06FF08A (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mC0D0EA7EE88DAA315FBD8A84318719AB5E2BAA66_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ReadOnlySpan_1_ToArray_mC89AF6BAE06006D4CAA441423BA863BB00C55DA4 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_1 = ((EmptyArray_1_tA0B73630739AC85F81DDEFE547CAFB1C84FB72C6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_3 = (UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6*)(UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>(L_5);
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m0335BE2D9DC8BC4528C9B72341862BBC11C45771 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ___0_left, ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB L_0 = ___0_left;
		ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mD76E07AC17F959B55344C6E355DB9D0CEC31FC0C(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m21A8FEDE18AF0F567A556E08E29F117929D7BDB7 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mDC82A3E60B9B2B00D89C73168BB8E9434EB111B8 (ReadOnlySpan_1_t86CCB719C2A553DFB7BAFF7E00E22CE413558FDB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1B5DCEC898FA002743A46CAE3EF79478280F2495 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC063A887117628AF77F776F879E95FC3BF8CBE59 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>((uint8_t*)L_1);
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ReadOnlySpan_1_get_Item_m22ADF866AFD450445C3D2F486B708A4576F31579 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_mB69C78875838F393BDF5BB034069DA2320BC3A35 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_2 = ___0_destination;
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m40AB691564D0BD700021FED7BB8FA32FC357FBD7 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_2 = ___0_destination;
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_1));
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m63875ED1586E2AEA4E20F492EC777F59915B5873 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ReadOnlySpan_1_Slice_m3C1994A1FB731B0263CA40C3B80EB49AA8F6A5BA (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m05FAEE8A43921FFBDAA0B10C45DF7B413F8B7795_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ReadOnlySpan_1_Slice_mA22892A878DC4FF0A3F8C88DC34693C975450D5C (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m05FAEE8A43921FFBDAA0B10C45DF7B413F8B7795_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ReadOnlySpan_1_ToArray_mDBBC462A167BABADD2E16326C5753AE64187F1CE (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_1 = ((EmptyArray_1_t1347A16AC3E72AFF909DAA98EED1FA11A4470068_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_3 = (UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD*)(UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>(L_5);
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m49286FADA0F2B5C4A32BC6C39F788EB03BDD7A6F (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ___0_left, ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 L_0 = ___0_left;
		ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mB157614B5969EB80F641D18A4DB33C3D8FC885C1(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m9B50B4F9892CB22144594508E242DB52CB78D11D (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mA8AF62B0E177AAB66CE75AE6DC16854B9EC68618 (ReadOnlySpan_1_t696FE6F96AA7BCE8F69F5C7FA90443A2B6B40357* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m9EE5AA2C6F474A87EDBC562FEFDD5E3614E91AF2 (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73));
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1C1AC064655CAD3B5FE879FA16B9D02D297E1DB2 (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73>((uint8_t*)L_1);
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* ReadOnlySpan_1_get_Item_m2755AC34B6E32D581F15332969A2D9E54160BB11 (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m9BE39284B4F812AB263BA19A88318986400FC72B (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 L_2 = ___0_destination;
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_mBDCCC7D03D4C397E8F32FB955EC547A2FDFA5543(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_m71433EFC5A729908EC988E037934232310A2D120 (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9DA7921D616AFD6EFF2CEF642A21C62ED20C6F05 L_2 = ___0_destination;
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_1));
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_mBDCCC7D03D4C397E8F32FB955EC547A2FDFA5543(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m4DCC3446A0972B5568A9C2D559BD1FB89D439561 (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E ReadOnlySpan_1_Slice_m227FB23C675EE7DA0C8C0D20C490376156129AEE (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m189B1065E7F68FCEFFD8B51369EE9310DF43AB4E_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E ReadOnlySpan_1_Slice_mDDD26BD2D19FD5F1FF4811DEAB57D910978BC2D7 (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m189B1065E7F68FCEFFD8B51369EE9310DF43AB4E_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* ReadOnlySpan_1_ToArray_mB121B5A1EE07998B898C2D5A302E1CAC335FACA9 (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_1 = ((EmptyArray_1_t5058CECA8099AD79767245351D26A5CB48C84746_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_3 = (UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00*)(UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tD80EAF8442A3FD67A1B95323EAB0DBBF2B70AF00* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73>(L_5);
		ByReference_1_t6DE5AAABB959B9270B2A107245588A5D9FD5DC10 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t453075A075D99649F8B3C2ED564085F6F2036D73_mBDCCC7D03D4C397E8F32FB955EC547A2FDFA5543(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_m5E2294260132AC089CF5D1ABFD9D32E121E34E23 (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E ___0_left, ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E L_0 = ___0_left;
		ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_m3EDB78E2FEE1B7D258823CFA9B42822972E7004D(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m61D449DCB07C9226893B6D705D174CEB5D127A7F (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_m5F0F1ECA65F9CD0E78582FDF37B78EBCB2FC1B98 (ReadOnlySpan_1_tF8DAF2B7A0E7DD5B50B12D3B4ADBCB3E2876117E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m663A49222CE5B63BDF17D1F044B147F16CA6B52D (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_12;
		L_12 = il2cpp_unsafe_as_ref<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516>(L_11);
		int32_t L_13 = ___1_start;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_14;
		L_14 = il2cpp_unsafe_add<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516,int32_t>(L_12, L_13, sizeof(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516));
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m8C9ABF07F53204CEF3BC66717957E9FB9079144B (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516>((uint8_t*)L_1);
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ReadOnlySpan_1_get_Item_m733DBEC1997736918F81804AE8D15E33A9801B3C (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m32C570A8CB721B220B83BC9728173BF3FBA8ED5A (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB L_2 = ___0_destination;
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m996D3C06C347B6A640186D2FAC8C066B5DD1AAC2(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_TryCopyTo_mA86201860528C3418A58EB4EF6602D54E9AF015D (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1 = (&___0_destination)->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t83DEC692D54FF8BED9317442919944F109D8D9FB L_2 = ___0_destination;
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_1));
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m996D3C06C347B6A640186D2FAC8C066B5DD1AAC2(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_m159BC7A611E225103CE6328AF7378722051FDF8A (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DCA6040AD5A31C81EBE664FAFD10DAFB1B1CD5D, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5 ReadOnlySpan_1_Slice_m9EB8BAFB47885F213AB056406CD45AC774917A7B (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mC5370B060FD7B513D4E024C074C86F97DBAFBB17_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5 ReadOnlySpan_1_Slice_m342C30CF931B104227DB89ACDA0B255A8037DBCA (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516));
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_mC5370B060FD7B513D4E024C074C86F97DBAFBB17_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* ReadOnlySpan_1_ToArray_m7DE1C45CC2CD5BC193168141AE3E7256EB2FB4C0 (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit);
	ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t2CC7A65B03485BD65154EC916E29A7561444DA62_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_1 = ((EmptyArray_1_t47AB7FAF9E162BBE81FCF7964F3209ECF415B0A4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___Value;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_3 = (UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB*)(UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tB6FB30BCFA360D4DBA55B9B2866F28A0B61155CB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516>(L_5);
		ByReference_1_tDBC52CE13CB5F6C96F41D19B1F960D4BDEF4BE23 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516_m996D3C06C347B6A640186D2FAC8C066B5DD1AAC2(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_op_Inequality_mDBE97D041CE0AA7A2316CF8043735500764E316F (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5 ___0_left, ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5 ___1_right, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5 L_0 = ___0_left;
		ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5 L_1 = ___1_right;
		bool L_2;
		L_2 = ReadOnlySpan_1_op_Equality_mD2406E85102C4510337D5938C7775580D1FD07B6(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_Equals_m2576FF32D5643F19BFBD12C4164C49D6973F2708 (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_GetHashCode_mEA8D4EC603889E4C3361BEA8B6840650D8F431C9 (ReadOnlySpan_1_t51A82B8CA8400B5D03100B09202DC5C6C6E65DD5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_end_mC88895A5E8F7A351D97661721B9E79D6FCE973C6_fshared_inline (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CendU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_start_m39F633BEE3CE3CF8AB778A0AE341497B2F23B9F1_fshared_inline (Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CstartU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 ReadOnlyListSpan_1_GetEnumerator_m0E4B5C22F4346E0C782C582A499CBBCF1768BA56_fshared_inline (ReadOnlyListSpan_1_t97986762F5C4B666167C99AD86C64732F09E05F0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tF812F82D392D3C51B369AD4AA7E96E450BFB9604 L_0 = __this->___m_Enumerator;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 Enumerator_get_Current_m7F7CEEEDCF6123B5A9689B757693192D6C352B68_gshared_inline (Enumerator_t2405134C35A5A45D4CC15DA7321535FE5733E10F* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 Enumerator_get_Current_m7D744ECF2EC365FA7792D722619E477143579725_inline (Enumerator_t87DF0C370E44E18E84D810909182A0BBA3C0B8D3* __this, const RuntimeMethod* method) 
{
	{
		ARExternalTexture_t1352736BC96EF5E724FBF7FB74E026B82D581A17 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 Enumerator_get_Current_mDEFD14C124A84610F097747CEE4FB6F1AA8AB2F3_inline (Enumerator_t90A90EC620626CD6E0FA6CA1C70690EBE726868E* __this, const RuntimeMethod* method) 
{
	{
		MeshUpdateInfo_tEB4311EC1447AF17E075F15B4DCD32CCA1DAA001 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Enumerator_get_Current_m6CFD77A67D671FDB545634AC75B48AF3D226680D_inline (Enumerator_t9E4B7447CB50C7EB89642157584641306C42EE83* __this, const RuntimeMethod* method) 
{
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRFov_t51E4BB7B76304E61CF064687586D096CE585817A Enumerator_get_Current_m8D4427C1AD90FA12DC408E816243ADAA6DF627DB_inline (Enumerator_t900BD83B9FBA5193595EF853DC41A2A005A2F53B* __this, const RuntimeMethod* method) 
{
	{
		XRFov_t51E4BB7B76304E61CF064687586D096CE585817A L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mA50CED82C4671CC4E1D82333FAC2587F700565D0_gshared_inline (Enumerator_tC367FBE981D257FF6A6357382526F6EC9FF3B2F9* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7, sizeof(uint8_t));
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7B5C2765879EA5E8D1617D834CC465A39540A913_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<uint8_t>(L_11);
		int32_t L_13 = ___1_start;
		uint8_t* L_14;
		L_14 = il2cpp_unsafe_add<uint8_t,int32_t>(L_12, L_13, sizeof(uint8_t));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Il2CppFullySharedGenericAny* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_11);
		int32_t L_13 = ___1_start;
		Il2CppFullySharedGenericAny* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_12, L_13, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
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
