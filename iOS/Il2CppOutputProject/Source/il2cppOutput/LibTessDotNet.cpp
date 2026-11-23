#include "pch-cpp.hpp"





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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
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

struct DefaultTypePool_1_t3BF153C13806D76AF42300338514FD1575691D54;
struct DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC;
struct DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2;
struct DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797;
struct DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4;
struct Dict_1_t8AAA6C8B7931DA57E8CC3F5087BAC7DF220AE204;
struct Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3;
struct IDictionary_2_t378E428EFD0077FCE9C551DB1EA9EA35B21079DD;
struct IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D;
struct LessOrEqual_tE6756ED924C497D7AD12EB945826755062BA0CBC;
struct LessOrEqual_tB5D4E598592A3FDB1D7550F803F5854AC8AA0007;
struct LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00;
struct LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6;
struct Node_t41D8E72C8400B864376C754DA1C76227BC210071;
struct Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C;
struct PriorityHeap_1_t398DFD3BBC195F75DD5945E4AEC8492BE85E9112;
struct PriorityQueue_1_t53CB997E46661E09CEF0599CEB8439712678DFE4;
struct PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29;
struct Queue_1_tD16569FEC985028AAF7AD07E944FCFFBE7567730;
struct Queue_1_t0EF83785A32509AFAD1DECBB79B203F1F8428FFC;
struct Queue_1_tFF89653FA4C031D1CC2D18DF7EE31A9F2DAD19FE;
struct Queue_1_t8C81B5CA8ECFD8367AB4A971F48B5EFEE7966102;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362;
struct CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300;
struct DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3;
struct MethodInfo_t;
struct NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966;
struct Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF;
struct Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE;
struct ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47;

IL2CPP_EXTERN_C RuntimeClass* ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_____e_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C;
IL2CPP_EXTERN_C String_t* _stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8;
IL2CPP_EXTERN_C String_t* _stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64;
IL2CPP_EXTERN_C String_t* _stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m004092468BAD1B30CA23F97F4F00ED69D37E7C01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t72340EDEA801D6F0C644242E26AA4B29BD6E99CC 
{
};
struct DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC  : public RuntimeObject
{
	Queue_1_tD16569FEC985028AAF7AD07E944FCFFBE7567730* ____pool;
};
struct DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2  : public RuntimeObject
{
	Queue_1_t0EF83785A32509AFAD1DECBB79B203F1F8428FFC* ____pool;
};
struct DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797  : public RuntimeObject
{
	Queue_1_tFF89653FA4C031D1CC2D18DF7EE31A9F2DAD19FE* ____pool;
};
struct DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4  : public RuntimeObject
{
	Queue_1_t8C81B5CA8ECFD8367AB4A971F48B5EFEE7966102* ____pool;
};
struct Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3  : public RuntimeObject
{
	LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* ____leq;
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____head;
};
struct Node_t41D8E72C8400B864376C754DA1C76227BC210071  : public RuntimeObject
{
	Il2CppSharedGenericObject* ____key;
	Node_t41D8E72C8400B864376C754DA1C76227BC210071* ____prev;
	Node_t41D8E72C8400B864376C754DA1C76227BC210071* ____next;
};
struct Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C  : public RuntimeObject
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ____key;
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____prev;
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____next;
};
struct PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29  : public RuntimeObject
{
	LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* ____leq;
	PriorityHeap_1_t398DFD3BBC195F75DD5945E4AEC8492BE85E9112* ____heap;
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* ____keys;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____order;
	int32_t ____size;
	int32_t ____max;
	bool ____initialized;
};
struct Geom_t2AECC4CF177AE64EA77403838222CB0163C19CA7  : public RuntimeObject
{
};
struct IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90  : public RuntimeObject
{
};
struct Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3  : public RuntimeObject
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____vHead;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____fHead;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eHead;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eHeadSym;
};
struct MeshUtils_t1C2AEE8E7D579C135509E319DA5D1651345F049A  : public RuntimeObject
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
struct Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF  : public RuntimeObject
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____prev;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____next;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____anEdge;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____trail;
	int32_t ____n;
	bool ____marked;
	bool ____inside;
};
struct ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47  : public RuntimeObject
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eUp;
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____nodeUp;
	int32_t ____windingNumber;
	bool ____inside;
	bool ____sentinel;
	bool ____dirty;
	bool ____fixUpperEdge;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04  : public IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90
{
	RuntimeObject* ____register;
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
struct NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D  : public IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90
{
};
struct PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 
{
	int32_t ____handle;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 
{
	float ___X;
	float ___Y;
	float ___Z;
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
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym;
};
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym;
};
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym;
};
struct ContourOrientation_tE15CCD811E3B5F0088FBC32D5EF60D9A20BEA290 
{
	int32_t ___value__;
};
struct ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F 
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Position;
	int32_t ___Data;
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
struct ElementType_tD824692A85C141E263ED4CA20D84C8DDBFCA6C90 
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
struct WindingRule_t6B5267D051AC236F280193E76FC44D9DEABF20B5 
{
	int32_t ___value__;
};
struct Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966  : public RuntimeObject
{
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E ____pair;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____next;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Sym;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Onext;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Lnext;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____Org;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____Lface;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ____activeRegion;
	int32_t ____winding;
};
struct Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE  : public RuntimeObject
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____prev;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____next;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____anEdge;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____coords;
	float ____s;
	float ____t;
	PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ____pqHandle;
	int32_t ____n;
	int32_t ____data;
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
struct Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8  : public RuntimeObject
{
	IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ____pool;
	Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* ____mesh;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____normal;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____sUnit;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____tUnit;
	float ____bminX;
	float ____bminY;
	float ____bmaxX;
	float ____bmaxY;
	int32_t ____windingRule;
	Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* ____dict;
	PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* ____pq;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____event;
	CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* ____combineCallback;
	ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* ____vertices;
	int32_t ____vertexCount;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____elements;
	int32_t ____elementCount;
	float ___SUnitX;
	float ___SUnitY;
	float ___SentinelCoord;
	bool ___NoEmptyPolygons;
	bool ___UsePooling;
};
struct LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00  : public MulticastDelegate_t
{
};
struct LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6  : public MulticastDelegate_t
{
};
struct CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300  : public MulticastDelegate_t
{
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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
struct PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields
{
	int32_t ___Invalid;
};
struct Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Zero;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
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
struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF  : public RuntimeArray
{
	ALIGN_FIELD (8) ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F m_Items[1];

	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F value)
	{
		m_Items[index] = value;
	}
};
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362  : public RuntimeArray
{
	ALIGN_FIELD (8) Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* m_Items[1];

	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* value)
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypePool_1__ctor_mB4BEF7B17EC7E886CEB07700AC5853C20D72F2AB_gshared (DefaultTypePool_1_t3BF153C13806D76AF42300338514FD1575691D54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1_Remove_m672772785F2B1353A638A8B6AAAEA1303E7C1ACC_gshared (Dict_1_t8AAA6C8B7931DA57E8CC3F5087BAC7DF220AE204* __this, Node_t41D8E72C8400B864376C754DA1C76227BC210071* ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t41D8E72C8400B864376C754DA1C76227BC210071* Dict_1_InsertBefore_m13321C321AFBB070296722DBCAD04F55E8583E71_gshared (Dict_1_t8AAA6C8B7931DA57E8CC3F5087BAC7DF220AE204* __this, Node_t41D8E72C8400B864376C754DA1C76227BC210071* ___0_node, Il2CppSharedGenericObject* ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Remove_m691DEC032AEAFBC87D27103969C4F4D0B8D537FF_gshared (PriorityQueue_1_t53CB997E46661E09CEF0599CEB8439712678DFE4* __this, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 PriorityQueue_1_Insert_m1215C223D745AD78C274468FBD386773D885D91D_gshared (PriorityQueue_1_t53CB997E46661E09CEF0599CEB8439712678DFE4* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t41D8E72C8400B864376C754DA1C76227BC210071* Dict_1_Find_mC5EB4E91A100C811CDDF49BF8279327193BC8D32_gshared (Dict_1_t8AAA6C8B7931DA57E8CC3F5087BAC7DF220AE204* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Node_get_Key_mFF1F01E3EE64D682447C641755A0761F0FF8FE7A_gshared_inline (Node_t41D8E72C8400B864376C754DA1C76227BC210071* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t41D8E72C8400B864376C754DA1C76227BC210071* Dict_1_Insert_m6B5CBA855377C267FCA98BBD98B31C1C38C57AF4_gshared (Dict_1_t8AAA6C8B7931DA57E8CC3F5087BAC7DF220AE204* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_mFC2CFE7C3AD17F8EB6594EB68C173F203BC9337E_gshared (LessOrEqual_tE6756ED924C497D7AD12EB945826755062BA0CBC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1__ctor_mA69B0C6C5740C6CAF3D788A9A6973A064A28E64F_gshared (Dict_1_t8AAA6C8B7931DA57E8CC3F5087BAC7DF220AE204* __this, LessOrEqual_tE6756ED924C497D7AD12EB945826755062BA0CBC* ___0_leq, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t41D8E72C8400B864376C754DA1C76227BC210071* Dict_1_Min_m0975F4DB1924B52E57474C637A12F079F3C07996_gshared (Dict_1_t8AAA6C8B7931DA57E8CC3F5087BAC7DF220AE204* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_mDFA8BC96A4418B21DA2944A2C4329606B19BDF42_gshared (LessOrEqual_tB5D4E598592A3FDB1D7550F803F5854AC8AA0007* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1__ctor_mF0579C7B6A15AB02B9DEBF095252463F8752A7DD_gshared (PriorityQueue_1_t53CB997E46661E09CEF0599CEB8439712678DFE4* __this, int32_t ___0_initialSize, LessOrEqual_tB5D4E598592A3FDB1D7550F803F5854AC8AA0007* ___1_leq, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Init_m3FD9E202292101C3C5DA3A316DA72B21DFBF9FFF_gshared (PriorityQueue_1_t53CB997E46661E09CEF0599CEB8439712678DFE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PriorityQueue_1_Minimum_m93E4A8B8D133366E3949A8F1150CCB1B62966705_gshared (PriorityQueue_1_t53CB997E46661E09CEF0599CEB8439712678DFE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* PriorityQueue_1_ExtractMin_m06EB52362E6BF23CC672F492C21A9FD1710BDC0B_gshared (PriorityQueue_1_t53CB997E46661E09CEF0599CEB8439712678DFE4* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___0_a, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF (float ___0_a, float ___1_x, float ___2_b, float ___3_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eNext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrig, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_vNext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrig, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___2_fNext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_vDel, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_newOrg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___1_fDel, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___2_newLFace, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_a, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_mE2132C4410E6FCC3090942C9E37A525B7873F0F1 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eDel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eDel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, const RuntimeMethod* method) ;
inline void DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4 (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797*, const RuntimeMethod*))DefaultTypePool_1__ctor_mB4BEF7B17EC7E886CEB07700AC5853C20D72F2AB_gshared)(__this, method);
}
inline void DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5 (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2*, const RuntimeMethod*))DefaultTypePool_1__ctor_mB4BEF7B17EC7E886CEB07700AC5853C20D72F2AB_gshared)(__this, method);
}
inline void DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC*, const RuntimeMethod*))DefaultTypePool_1__ctor_mB4BEF7B17EC7E886CEB07700AC5853C20D72F2AB_gshared)(__this, method);
}
inline void DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4*, const RuntimeMethod*))DefaultTypePool_1__ctor_mB4BEF7B17EC7E886CEB07700AC5853C20D72F2AB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482 (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) ;
inline void Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ___0_node, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, const RuntimeMethod*))Dict_1_Remove_m672772785F2B1353A638A8B6AAAEA1303E7C1ACC_gshared)(__this, ___0_node, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eDst, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_newEdge, const RuntimeMethod* method) ;
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ___0_node, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___1_key, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_InsertBefore_m13321C321AFBB070296722DBCAD04F55E8583E71_gshared)(__this, ___0_node, ___1_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793 (int32_t ___0_rule, int32_t ___1_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eDst, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regAbove, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eNewUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_eDst, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eSrc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_isect, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_org, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_dst, float* ___3_w0, float* ___4_w1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_inline (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, const RuntimeMethod* method) ;
inline void PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ___0_handle, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043, const RuntimeMethod*))PriorityQueue_1_Remove_m691DEC032AEAFBC87D27103969C4F4D0B8D537FF_gshared)(__this, ___0_handle, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_e2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_mEC7935EED47854721B3A81E27749CA3A7F4736D3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_o1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_d1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_o2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___3_d2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___4_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regFirst, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___1_regLast, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eFirst, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eLast, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___3_eTopLeft, bool ___4_cleanUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
inline PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_value, const RuntimeMethod* method)
{
	return ((  PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*, const RuntimeMethod*))PriorityQueue_1_Insert_m1215C223D745AD78C274468FBD386773D885D91D_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_isect, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_orgUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_dstUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___3_orgLo, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___4_dstLo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_vEvent, const RuntimeMethod* method) ;
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_key, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_Find_mC5EB4E91A100C811CDDF49BF8279327193BC8D32_gshared)(__this, ___0_key, method);
}
inline ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_inline (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* __this, const RuntimeMethod* method)
{
	return ((  ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* (*) (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, const RuntimeMethod*))Node_get_Key_mFF1F01E3EE64D682447C641755A0761F0FF8FE7A_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_vEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_vEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eBottomLeft, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) ;
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_key, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_Insert_m6B5CBA855377C267FCA98BBD98B31C1C38C57AF4_gshared)(__this, ___0_key, method);
}
inline void LessOrEqual__ctor_m6556B77F3E07A00B7AFD15AD07B0EF86306BFF0C (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_mFC2CFE7C3AD17F8EB6594EB68C173F203BC9337E_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* ___0_leq, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*, const RuntimeMethod*))Dict_1__ctor_mA69B0C6C5740C6CAF3D788A9A6973A064A28E64F_gshared)(__this, ___0_leq, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, float ___0_smin, float ___1_smax, float ___2_t, const RuntimeMethod* method) ;
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, const RuntimeMethod*))Dict_1_Min_m0975F4DB1924B52E57474C637A12F079F3C07996_gshared)(__this, method);
}
inline void LessOrEqual__ctor_m354C7C326099DA31A5715796F9CCA76DE5067731 (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_mDFA8BC96A4418B21DA2944A2C4329606B19BDF42_gshared)(__this, ___0_object, ___1_method, method);
}
inline void PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, int32_t ___0_initialSize, LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* ___1_leq, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, int32_t, LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*, const RuntimeMethod*))PriorityQueue_1__ctor_mF0579C7B6A15AB02B9DEBF095252463F8752A7DD_gshared)(__this, ___0_initialSize, ___1_leq, method);
}
inline void PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_Init_m3FD9E202292101C3C5DA3A316DA72B21DFBF9FFF_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86 (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_Minimum_m93E4A8B8D133366E3949A8F1150CCB1B62966705_gshared)(__this, method);
}
inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330 (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_ExtractMin_m06EB52362E6BF23CC672F492C21A9FD1710BDC0B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_mA9794AE1C4917832E71637ADA7B763D44F1AADCA (NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_lhs, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___1_rhs, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___2_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m615687EA76621EE708A5F7836B33DF54DC67E58C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_norm, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_u, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___1_v, float* ___2_dot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_mB470DCF8C4FD679BB83397B8DE58638B3896DC9B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m5B4F1EB6223DBC3AD38DC58AE036CA922E1319CE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_face, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, int32_t ___1_maxVertsPerFace, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_edge, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___0_vertices, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___0_value, bool ___1_keepOnlyBoundary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___0_elementType, int32_t ___1_polySize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793 (int32_t ___0_rule, int32_t ___1_n, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_rule;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_002d;
			}
			case 4:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001c:
	{
		int32_t L_1 = ___1_n;
		return (bool)((((int32_t)((int32_t)(L_1&1))) == ((int32_t)1))? 1 : 0);
	}

IL_0023:
	{
		int32_t L_2 = ___1_n;
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0028:
	{
		int32_t L_3 = ___1_n;
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}

IL_002d:
	{
		int32_t L_4 = ___1_n;
		return (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		int32_t L_5 = ___1_n;
		if ((((int32_t)L_5) >= ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6 = ___1_n;
		return (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_003f:
	{
		return (bool)1;
	}

IL_0041:
	{
		Exception_t* L_7 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) 
{
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_u;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___1_v;
		NullCheck(L_2);
		float L_3 = L_2->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_w;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___2_w;
		NullCheck(L_8);
		float L_9 = L_8->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___0_u;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___2_w;
		NullCheck(L_12);
		float L_13 = L_12->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___0_u;
		NullCheck(L_14);
		float L_15 = L_14->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___1_v;
		NullCheck(L_16);
		float L_17 = L_16->____t;
		return (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, ((float)il2cpp_codegen_subtract(L_3, L_5)))), ((float)il2cpp_codegen_multiply(L_7, ((float)il2cpp_codegen_subtract(L_9, L_11)))))), ((float)il2cpp_codegen_multiply(L_13, ((float)il2cpp_codegen_subtract(L_15, L_17))))))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) 
{
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_lhs;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___1_rhs;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___0_lhs;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_rhs;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		return (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) 
{
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_lhs;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___1_rhs;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___0_lhs;
		NullCheck(L_4);
		float L_5 = L_4->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_rhs;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___0_lhs;
		NullCheck(L_8);
		float L_9 = L_8->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___1_rhs;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		return (bool)((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___1_v;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___0_u;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_w;
		NullCheck(L_4);
		float L_5 = L_4->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_004c;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___1_v;
		NullCheck(L_12);
		float L_13 = L_12->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___0_u;
		NullCheck(L_14);
		float L_15 = L_14->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___0_u;
		NullCheck(L_16);
		float L_17 = L_16->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = ___2_w;
		NullCheck(L_18);
		float L_19 = L_18->____t;
		float L_20 = V_0;
		float L_21 = V_0;
		float L_22 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_13, L_15)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)(L_20/((float)il2cpp_codegen_add(L_21, L_22))))))));
	}

IL_004c:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = ___1_v;
		NullCheck(L_23);
		float L_24 = L_23->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___2_w;
		NullCheck(L_25);
		float L_26 = L_25->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = ___2_w;
		NullCheck(L_27);
		float L_28 = L_27->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = ___0_u;
		NullCheck(L_29);
		float L_30 = L_29->____t;
		float L_31 = V_1;
		float L_32 = V_0;
		float L_33 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_24, L_26)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_28, L_30)), ((float)(L_31/((float)il2cpp_codegen_add(L_32, L_33))))))));
	}

IL_006e:
	{
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___1_v;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___0_u;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_w;
		NullCheck(L_4);
		float L_5 = L_4->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___1_v;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___2_w;
		NullCheck(L_12);
		float L_13 = L_12->____t;
		float L_14 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = ___1_v;
		NullCheck(L_15);
		float L_16 = L_15->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___0_u;
		NullCheck(L_17);
		float L_18 = L_17->____t;
		float L_19 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_11, L_13)), L_14)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_16, L_18)), L_19))));
	}

IL_0046:
	{
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_lhs, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_rhs, const RuntimeMethod* method) 
{
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_lhs;
		NullCheck(L_0);
		float L_1 = L_0->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___1_rhs;
		NullCheck(L_2);
		float L_3 = L_2->____t;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___0_lhs;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_rhs;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___0_lhs;
		NullCheck(L_8);
		float L_9 = L_8->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___1_rhs;
		NullCheck(L_10);
		float L_11 = L_10->____s;
		return (bool)((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___1_v;
		NullCheck(L_0);
		float L_1 = L_0->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___0_u;
		NullCheck(L_2);
		float L_3 = L_2->____t;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_w;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_004c;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___1_v;
		NullCheck(L_12);
		float L_13 = L_12->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___0_u;
		NullCheck(L_14);
		float L_15 = L_14->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___0_u;
		NullCheck(L_16);
		float L_17 = L_16->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = ___2_w;
		NullCheck(L_18);
		float L_19 = L_18->____s;
		float L_20 = V_0;
		float L_21 = V_0;
		float L_22 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_13, L_15)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)(L_20/((float)il2cpp_codegen_add(L_21, L_22))))))));
	}

IL_004c:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = ___1_v;
		NullCheck(L_23);
		float L_24 = L_23->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___2_w;
		NullCheck(L_25);
		float L_26 = L_25->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = ___2_w;
		NullCheck(L_27);
		float L_28 = L_27->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = ___0_u;
		NullCheck(L_29);
		float L_30 = L_29->____s;
		float L_31 = V_1;
		float L_32 = V_0;
		float L_33 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_24, L_26)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_28, L_30)), ((float)(L_31/((float)il2cpp_codegen_add(L_32, L_33))))))));
	}

IL_006e:
	{
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___1_v;
		NullCheck(L_0);
		float L_1 = L_0->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___0_u;
		NullCheck(L_2);
		float L_3 = L_2->____t;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_w;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___1_v;
		NullCheck(L_10);
		float L_11 = L_10->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___2_w;
		NullCheck(L_12);
		float L_13 = L_12->____s;
		float L_14 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = ___1_v;
		NullCheck(L_15);
		float L_16 = L_15->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___0_u;
		NullCheck(L_17);
		float L_18 = L_17->____s;
		float L_19 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_11, L_13)), L_14)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_16, L_18)), L_19))));
	}

IL_0046:
	{
		return (0.0f);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_mB470DCF8C4FD679BB83397B8DE58638B3896DC9B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___0_e;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_0, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___0_e;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____Org;
		bool L_4;
		L_4 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m5B4F1EB6223DBC3AD38DC58AE036CA922E1319CE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___0_e;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___0_e;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3;
		L_3 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_2, NULL);
		bool L_4;
		L_4 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_u, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_u;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___1_v;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = ___0_u;
		NullCheck(L_5);
		float L_6 = L_5->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = ___1_v;
		NullCheck(L_7);
		float L_8 = L_7->____t;
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_6, L_8)));
		return ((float)il2cpp_codegen_add(L_4, L_9));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_eDst, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eSrc, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___0_eDst;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____winding;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___1_eSrc;
		NullCheck(L_3);
		int32_t L_4 = L_3->____winding;
		NullCheck(L_1);
		L_1->____winding = ((int32_t)il2cpp_codegen_add(L_2, L_4));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___0_eDst;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____winding;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___1_eSrc;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Sym;
		NullCheck(L_10);
		int32_t L_11 = L_10->____winding;
		NullCheck(L_7);
		L_7->____winding = ((int32_t)il2cpp_codegen_add(L_8, L_11));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF (float ___0_a, float ___1_x, float ___2_b, float ___3_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_a;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		___0_a = (0.0f);
	}

IL_000f:
	{
		float L_1 = ___2_b;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		___2_b = (0.0f);
	}

IL_001e:
	{
		float L_2 = ___0_a;
		float L_3 = ___2_b;
		if ((((float)L_2) <= ((float)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		float L_4 = ___3_y;
		float L_5 = ___1_x;
		float L_6 = ___3_y;
		float L_7 = ___2_b;
		float L_8 = ___0_a;
		float L_9 = ___2_b;
		return ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_6)), ((float)(L_7/((float)il2cpp_codegen_add(L_8, L_9))))))));
	}

IL_002e:
	{
		float L_10 = ___2_b;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		float L_11 = ___1_x;
		float L_12 = ___3_y;
		float L_13 = ___1_x;
		float L_14 = ___0_a;
		float L_15 = ___0_a;
		float L_16 = ___2_b;
		return ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_13)), ((float)(L_14/((float)il2cpp_codegen_add(L_15, L_16))))))));
	}

IL_0042:
	{
		float L_17 = ___1_x;
		float L_18 = ___3_y;
		return ((float)(((float)il2cpp_codegen_add(L_17, L_18))/(2.0f)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___0_a, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___1_b, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_0 = ___0_a;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = *(L_0);
		V_0 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_2 = ___0_a;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_3 = ___1_b;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = *(L_3);
		*(((RuntimeObject**)L_2)) = ((RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)((RuntimeObject*)L_4));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_5 = ___1_b;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = V_0;
		*(((RuntimeObject**)L_5)) = ((RuntimeObject*)L_6);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_5), (void*)((RuntimeObject*)L_6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_mEC7935EED47854721B3A81E27749CA3A7F4736D3 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_o1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_d1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_o2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___3_d2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___4_v, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___1_d1;
		bool L_2;
		L_2 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___0_o1), (&___1_d1), NULL);
	}

IL_0012:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___3_d2;
		bool L_5;
		L_5 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___2_o2), (&___3_d2), NULL);
	}

IL_0024:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = ___2_o2;
		bool L_8;
		L_8 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___0_o1), (&___2_o2), NULL);
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___1_d1), (&___3_d2), NULL);
	}

IL_003f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___1_d1;
		bool L_11;
		L_11 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_0067;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___4_v;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = ___2_o2;
		NullCheck(L_13);
		float L_14 = L_13->____s;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = ___1_d1;
		NullCheck(L_15);
		float L_16 = L_15->____s;
		NullCheck(L_12);
		L_12->____s = ((float)(((float)il2cpp_codegen_add(L_14, L_16))/(2.0f)));
		goto IL_00eb;
	}

IL_0067:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___1_d1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = ___3_d2;
		bool L_19;
		L_19 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_00ae;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___1_d1;
		float L_23;
		L_23 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_20, L_21, L_22, NULL);
		V_0 = L_23;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___1_d1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___3_d2;
		float L_27;
		L_27 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_24, L_25, L_26, NULL);
		V_1 = L_27;
		float L_28 = V_0;
		float L_29 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_28, L_29))) < ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		float L_30 = V_0;
		V_0 = ((-L_30));
		float L_31 = V_1;
		V_1 = ((-L_31));
	}

IL_0092:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_32 = ___4_v;
		float L_33 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = ___2_o2;
		NullCheck(L_34);
		float L_35 = L_34->____s;
		float L_36 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = ___1_d1;
		NullCheck(L_37);
		float L_38 = L_37->____s;
		float L_39;
		L_39 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_33, L_35, L_36, L_38, NULL);
		NullCheck(L_32);
		L_32->____s = L_39;
		goto IL_00eb;
	}

IL_00ae:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = ___1_d1;
		float L_43;
		L_43 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_40, L_41, L_42, NULL);
		V_2 = L_43;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45 = ___3_d2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = ___1_d1;
		float L_47;
		L_47 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_44, L_45, L_46, NULL);
		V_3 = ((-L_47));
		float L_48 = V_2;
		float L_49 = V_3;
		if ((!(((float)((float)il2cpp_codegen_add(L_48, L_49))) < ((float)(0.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		float L_50 = V_2;
		V_2 = ((-L_50));
		float L_51 = V_3;
		V_3 = ((-L_51));
	}

IL_00d1:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = ___4_v;
		float L_53 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = ___2_o2;
		NullCheck(L_54);
		float L_55 = L_54->____s;
		float L_56 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_57 = ___3_d2;
		NullCheck(L_57);
		float L_58 = L_57->____s;
		float L_59;
		L_59 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_53, L_55, L_56, L_58, NULL);
		NullCheck(L_52);
		L_52->____s = L_59;
	}

IL_00eb:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_60 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_61 = ___1_d1;
		bool L_62;
		L_62 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_60, L_61, NULL);
		if (L_62)
		{
			goto IL_00fd;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___0_o1), (&___1_d1), NULL);
	}

IL_00fd:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_63 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_64 = ___3_d2;
		bool L_65;
		L_65 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_63, L_64, NULL);
		if (L_65)
		{
			goto IL_010f;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___2_o2), (&___3_d2), NULL);
	}

IL_010f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = ___2_o2;
		bool L_68;
		L_68 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_66, L_67, NULL);
		if (L_68)
		{
			goto IL_012a;
		}
	}
	{
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___0_o1), (&___2_o2), NULL);
		Geom_Swap_m2EF3AA22A8D7605C002830E18233E5CD25E9DE4E((&___1_d1), (&___3_d2), NULL);
	}

IL_012a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70 = ___1_d1;
		bool L_71;
		L_71 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_69, L_70, NULL);
		if (L_71)
		{
			goto IL_014e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = ___4_v;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_73 = ___2_o2;
		NullCheck(L_73);
		float L_74 = L_73->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = ___1_d1;
		NullCheck(L_75);
		float L_76 = L_75->____t;
		NullCheck(L_72);
		L_72->____t = ((float)(((float)il2cpp_codegen_add(L_74, L_76))/(2.0f)));
		return;
	}

IL_014e:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = ___1_d1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = ___3_d2;
		bool L_79;
		L_79 = Geom_TransLeq_m47D5FFA52E4F2BB755277E9D29DAC02C2AA4B4BD(L_77, L_78, NULL);
		if (!L_79)
		{
			goto IL_019e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_80 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = ___1_d1;
		float L_83;
		L_83 = Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B(L_80, L_81, L_82, NULL);
		V_4 = L_83;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_84 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_85 = ___1_d1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = ___3_d2;
		float L_87;
		L_87 = Geom_TransEval_mEA3BB959E68DCEBF3010130A22D37B669C03BA5B(L_84, L_85, L_86, NULL);
		V_5 = L_87;
		float L_88 = V_4;
		float L_89 = V_5;
		if ((!(((float)((float)il2cpp_codegen_add(L_88, L_89))) < ((float)(0.0f)))))
		{
			goto IL_0181;
		}
	}
	{
		float L_90 = V_4;
		V_4 = ((-L_90));
		float L_91 = V_5;
		V_5 = ((-L_91));
	}

IL_0181:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_92 = ___4_v;
		float L_93 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_94 = ___2_o2;
		NullCheck(L_94);
		float L_95 = L_94->____t;
		float L_96 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_97 = ___1_d1;
		NullCheck(L_97);
		float L_98 = L_97->____t;
		float L_99;
		L_99 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_93, L_95, L_96, L_98, NULL);
		NullCheck(L_92);
		L_92->____t = L_99;
		return;
	}

IL_019e:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_100 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_101 = ___2_o2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_102 = ___1_d1;
		float L_103;
		L_103 = Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA(L_100, L_101, L_102, NULL);
		V_6 = L_103;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_104 = ___0_o1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_105 = ___3_d2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_106 = ___1_d1;
		float L_107;
		L_107 = Geom_TransSign_m99C6BDBF9001C7DA783B291AA09273B75099E1AA(L_104, L_105, L_106, NULL);
		V_7 = ((-L_107));
		float L_108 = V_6;
		float L_109 = V_7;
		if ((!(((float)((float)il2cpp_codegen_add(L_108, L_109))) < ((float)(0.0f)))))
		{
			goto IL_01c9;
		}
	}
	{
		float L_110 = V_6;
		V_6 = ((-L_110));
		float L_111 = V_7;
		V_7 = ((-L_111));
	}

IL_01c9:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_112 = ___4_v;
		float L_113 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_114 = ___2_o2;
		NullCheck(L_114);
		float L_115 = L_114->____t;
		float L_116 = V_7;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_117 = ___3_d2;
		NullCheck(L_117);
		float L_118 = L_117->____t;
		float L_119;
		L_119 = Geom_Interpolate_m89F4E6101F8FA1D2993DA83CCDB860F571BAF1DF(L_113, L_115, L_116, L_118, NULL);
		NullCheck(L_112);
		L_112->____t = L_119;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Init_mD8243AFF3EE5E3F72571310BD8BB14459F946B80 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E V_1;
	memset((&V_1), 0, sizeof(V_1));
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_5 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_6 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1;
		V_4 = L_2;
		__this->____vHead = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead), (void*)L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = V_4;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_4 = ___0_pool;
		NullCheck(L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5;
		L_5 = GenericVirtualFuncInvoker0< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var, L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = L_5;
		V_5 = L_6;
		__this->____fHead = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead), (void*)L_6);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_5;
		V_0 = L_7;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_8 = ___0_pool;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_9;
		L_9 = EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F(L_8, NULL);
		V_1 = L_9;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_10 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10.____e;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11;
		V_6 = L_12;
		__this->____eHead = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead), (void*)L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_6;
		V_2 = L_13;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_14 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = L_14.____eSym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15;
		V_6 = L_16;
		__this->____eHeadSym = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym), (void*)L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_6;
		V_3 = L_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = L_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = L_18;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = L_19;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20;
		V_4 = L_21;
		NullCheck(L_20);
		L_20->____prev = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____prev), (void*)L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_4;
		NullCheck(L_19);
		L_19->____next = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____next), (void*)L_22);
		NullCheck(L_18);
		L_18->____anEdge = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____anEdge), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_23 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_24 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_25 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_26 = L_25;
		V_5 = L_26;
		NullCheck(L_24);
		L_24->____prev = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____prev), (void*)L_26);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_27 = V_5;
		NullCheck(L_23);
		L_23->____next = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->____next), (void*)L_27);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_28 = V_0;
		NullCheck(L_28);
		L_28->____anEdge = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____anEdge), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_29 = V_0;
		NullCheck(L_29);
		L_29->____trail = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->____trail), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_30 = V_0;
		NullCheck(L_30);
		L_30->____marked = (bool)0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_31 = V_0;
		NullCheck(L_31);
		L_31->____inside = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_2;
		NullCheck(L_32);
		L_32->____next = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____next), (void*)L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_3;
		NullCheck(L_34);
		L_34->____Sym = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->____Sym), (void*)L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_2;
		NullCheck(L_36);
		L_36->____Onext = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____Onext), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_2;
		NullCheck(L_37);
		L_37->____Lnext = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____Lnext), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_2;
		NullCheck(L_38);
		L_38->____Org = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->____Org), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_2;
		NullCheck(L_39);
		L_39->____Lface = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->____Lface), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_2;
		NullCheck(L_40);
		L_40->____winding = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_2;
		NullCheck(L_41);
		L_41->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_41->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_3;
		NullCheck(L_42);
		L_42->____next = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->____next), (void*)L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_2;
		NullCheck(L_44);
		L_44->____Sym = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->____Sym), (void*)L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_3;
		NullCheck(L_46);
		L_46->____Onext = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->____Onext), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_3;
		NullCheck(L_47);
		L_47->____Lnext = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____Lnext), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_3;
		NullCheck(L_48);
		L_48->____Org = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->____Org), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_3;
		NullCheck(L_49);
		L_49->____Lface = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->____Lface), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_3;
		NullCheck(L_50);
		L_50->____winding = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_3;
		NullCheck(L_51);
		L_51->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_51->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Reset_m7D0904C1C1CFE59B8C52DBD2144FB4090E9187D3 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_5 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_6 = NULL;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = __this->____fHead;
		V_0 = L_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = __this->____fHead;
		V_1 = L_1;
		goto IL_0020;
	}

IL_0010:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_0;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____next;
		V_1 = L_3;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_4 = ___0_pool;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_4);
		GenericVirtualActionInvoker1< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var, L_4, L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = V_1;
		V_0 = L_6;
	}

IL_0020:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_0;
		NullCheck(L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = L_7->____next;
		if (L_8)
		{
			goto IL_0010;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = __this->____vHead;
		V_2 = L_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = __this->____vHead;
		V_3 = L_10;
		goto IL_0048;
	}

IL_0038:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_2;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = L_11->____next;
		V_3 = L_12;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_13 = ___0_pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = V_2;
		NullCheck(L_13);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_13, L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_3;
		V_2 = L_15;
	}

IL_0048:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_2;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = L_16->____next;
		if (L_17)
		{
			goto IL_0038;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = __this->____eHead;
		V_4 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = __this->____eHead;
		V_5 = L_19;
		goto IL_0084;
	}

IL_0062:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_4;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____next;
		V_5 = L_21;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_22 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_4;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = L_23->____Sym;
		NullCheck(L_22);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_22, L_24);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_25 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_4;
		NullCheck(L_25);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_25, L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_5;
		V_4 = L_27;
	}

IL_0084:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_4;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____next;
		if (L_29)
		{
			goto IL_0062;
		}
	}
	{
		__this->____vHead = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		__this->____fHead = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		V_6 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____eHeadSym = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_6;
		__this->____eHead = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead), (void*)L_30);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = __this->____eHead;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB(L_0, L_1, NULL);
		V_0 = L_2;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_3 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = __this->____vHead;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_3, L_4, L_5, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_6 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = __this->____vHead;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_6, L_8, L_9, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_10 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = __this->____fHead;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_10, L_11, L_12, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eDst, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___1_eOrg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___2_eDst;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_0) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_1))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		V_0 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___2_eDst;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = ___1_eOrg;
		NullCheck(L_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = L_4->____Org;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_3) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		V_0 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_6 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___2_eDst;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = L_7->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___1_eOrg;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____Org;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_6, L_8, L_10, NULL);
	}

IL_0029:
	{
		V_1 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = ___2_eDst;
		NullCheck(L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = L_11->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___1_eOrg;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____Lface;
		if ((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_12) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_14)))
		{
			goto IL_004d;
		}
	}
	{
		V_1 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_15 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = ___2_eDst;
		NullCheck(L_16);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = L_16->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = ___1_eOrg;
		NullCheck(L_18);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_19 = L_18->____Lface;
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_15, L_17, L_19, NULL);
	}

IL_004d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = ___2_eDst;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___1_eOrg;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_20, L_21, NULL);
		bool L_22 = V_0;
		if (L_22)
		{
			goto IL_0070;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_23 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = ___2_eDst;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = ___1_eOrg;
		NullCheck(L_25);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = L_25->____Org;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_23, L_24, L_26, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = ___1_eOrg;
		NullCheck(L_27);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = L_27->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = ___1_eOrg;
		NullCheck(L_28);
		L_28->____anEdge = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____anEdge), (void*)L_29);
	}

IL_0070:
	{
		bool L_30 = V_1;
		if (L_30)
		{
			goto IL_008c;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_31 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = ___2_eDst;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = ___1_eOrg;
		NullCheck(L_33);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_34 = L_33->____Lface;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_31, L_32, L_34, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = ___1_eOrg;
		NullCheck(L_35);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_36 = L_35->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = ___1_eOrg;
		NullCheck(L_36);
		L_36->____anEdge = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____anEdge), (void*)L_37);
	}

IL_008c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eDel, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	bool V_1 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___1_eDel;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym;
		V_0 = L_1;
		V_1 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___1_eDel;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = ___1_eDel;
		NullCheck(L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5;
		L_5 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_4, NULL);
		if ((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_3) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		V_1 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_6 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___1_eDel;
		NullCheck(L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = L_7->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___1_eDel;
		NullCheck(L_9);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10;
		L_10 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_9, NULL);
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_6, L_8, L_10, NULL);
	}

IL_002b:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = ___1_eDel;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___1_eDel;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13))))
		{
			goto IL_0043;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_14 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___1_eDel;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____Org;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_14, L_16, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		goto IL_0081;
	}

IL_0043:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = ___1_eDel;
		NullCheck(L_17);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18;
		L_18 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_17, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___1_eDel;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20;
		L_20 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_19, NULL);
		NullCheck(L_18);
		L_18->____anEdge = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____anEdge), (void*)L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___1_eDel;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = L_21->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = ___1_eDel;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = L_23->____Onext;
		NullCheck(L_22);
		L_22->____anEdge = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____anEdge), (void*)L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = ___1_eDel;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = ___1_eDel;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27;
		L_27 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_26, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_25, L_27, NULL);
		bool L_28 = V_1;
		if (L_28)
		{
			goto IL_0081;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_29 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = ___1_eDel;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = ___1_eDel;
		NullCheck(L_31);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_32 = L_31->____Lface;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_29, L_30, L_32, NULL);
	}

IL_0081:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_0;
		NullCheck(L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = L_33->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_34) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_35))))
		{
			goto IL_00a6;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_36 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_0;
		NullCheck(L_37);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = L_37->____Org;
		MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF(L_36, L_38, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_39 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_0;
		NullCheck(L_40);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_41 = L_40->____Lface;
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_39, L_41, (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL, NULL);
		goto IL_00d4;
	}

IL_00a6:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = ___1_eDel;
		NullCheck(L_42);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_43 = L_42->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_0;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45;
		L_45 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_44, NULL);
		NullCheck(L_43);
		L_43->____anEdge = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_43->____anEdge), (void*)L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_0;
		NullCheck(L_46);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = L_46->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		NullCheck(L_48);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = L_48->____Onext;
		NullCheck(L_47);
		L_47->____anEdge = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____anEdge), (void*)L_49);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_0;
		NullCheck(L_51);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52;
		L_52 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_51, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_50, L_52, NULL);
	}

IL_00d4:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_53 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = ___1_eDel;
		MeshUtils_KillEdge_mE2132C4410E6FCC3090942C9E37A525B7873F0F1(L_53, L_54, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_2 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___1_eOrg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Sym;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___1_eOrg;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Lnext;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_5, L_7, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___1_eOrg;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10;
		L_10 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_9, NULL);
		NullCheck(L_8);
		L_8->____Org = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Org), (void*)L_10);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_11 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____Org;
		MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC(L_11, L_12, L_14, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = ___1_eOrg;
		NullCheck(L_17);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = L_17->____Lface;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_19 = L_18;
		V_2 = L_19;
		NullCheck(L_16);
		L_16->____Lface = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____Lface), (void*)L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = V_2;
		NullCheck(L_15);
		L_15->____Lface = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Lface), (void*)L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___1_eOrg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054(__this, L_0, L_1, NULL);
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Sym;
		V_0 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = ___1_eOrg;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___1_eOrg;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Sym;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8;
		L_8 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_7, NULL);
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_5, L_8, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___1_eOrg;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_10, L_11, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___1_eOrg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____Org;
		NullCheck(L_12);
		Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E(L_12, L_14, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16;
		L_16 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_15, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_0;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Sym;
		NullCheck(L_16);
		L_16->____anEdge = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____anEdge), (void*)L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = ___1_eOrg;
		NullCheck(L_20);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21;
		L_21 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_20, NULL);
		NullCheck(L_19);
		Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF(L_19, L_21, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = ___1_eOrg;
		NullCheck(L_23);
		int32_t L_24 = L_23->____winding;
		NullCheck(L_22);
		L_22->____winding = L_24;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = ___1_eOrg;
		NullCheck(L_27);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = L_27->____Sym;
		NullCheck(L_28);
		int32_t L_29 = L_28->____winding;
		NullCheck(L_26);
		L_26->____winding = L_29;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_0;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eDst, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_3 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___1_eOrg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Sym;
		V_1 = L_4;
		V_2 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___2_eDst;
		NullCheck(L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = L_5->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___1_eOrg;
		NullCheck(L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = L_7->____Lface;
		if ((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_6) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_8)))
		{
			goto IL_0033;
		}
	}
	{
		V_2 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_9 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = ___2_eDst;
		NullCheck(L_10);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = L_10->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___1_eOrg;
		NullCheck(L_12);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = L_12->____Lface;
		MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD(L_9, L_11, L_13, NULL);
	}

IL_0033:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___1_eOrg;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Lnext;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_14, L_16, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = ___2_eDst;
		MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415(L_17, L_18, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = ___1_eOrg;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21;
		L_21 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_20, NULL);
		NullCheck(L_19);
		L_19->____Org = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____Org), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = ___2_eDst;
		NullCheck(L_23);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = L_23->____Org;
		NullCheck(L_22);
		L_22->____Org = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____Org), (void*)L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = ___1_eOrg;
		NullCheck(L_27);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_28 = L_27->____Lface;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_29 = L_28;
		V_3 = L_29;
		NullCheck(L_26);
		L_26->____Lface = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____Lface), (void*)L_29);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_30 = V_3;
		NullCheck(L_25);
		L_25->____Lface = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->____Lface), (void*)L_30);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = ___1_eOrg;
		NullCheck(L_31);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_32 = L_31->____Lface;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		NullCheck(L_32);
		L_32->____anEdge = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____anEdge), (void*)L_33);
		bool L_34 = V_2;
		if (L_34)
		{
			goto IL_008f;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_35 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = ___1_eOrg;
		NullCheck(L_37);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_38 = L_37->____Lface;
		MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578(L_35, L_36, L_38, NULL);
	}

IL_008f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_0;
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, int32_t ___1_maxVertsPerFace, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = __this->____fHead;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____next;
		V_0 = L_1;
		goto IL_00fe;
	}

IL_0011:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->____inside;
		if (!L_3)
		{
			goto IL_00f7;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____anEdge;
		V_1 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org;
		V_2 = L_7;
	}

IL_002a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Lnext;
		V_3 = L_9;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Sym;
		V_4 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_4;
		if (!L_12)
		{
			goto IL_00df;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_4;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____Lface;
		if (!L_14)
		{
			goto IL_00df;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_4;
		NullCheck(L_15);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = L_15->____Lface;
		NullCheck(L_16);
		bool L_17 = L_16->____inside;
		if (!L_17)
		{
			goto IL_00df;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0(L_18, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_4;
		NullCheck(L_20);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = L_20->____Lface;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0(L_21, NULL);
		V_5 = L_22;
		int32_t L_23 = V_5;
		int32_t L_24 = ___1_maxVertsPerFace;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_19, L_23)), 2))) > ((int32_t)L_24)))
		{
			goto IL_00df;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_1;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26;
		L_26 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_25, NULL);
		NullCheck(L_26);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = L_26->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_1;
		NullCheck(L_28);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = L_28->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_4;
		NullCheck(L_30);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = L_30->____Lnext;
		NullCheck(L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = L_31->____Lnext;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____Org;
		bool L_34;
		L_34 = Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3(L_27, L_29, L_33, NULL);
		if (!L_34)
		{
			goto IL_00df;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_4;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36;
		L_36 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_35, NULL);
		NullCheck(L_36);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = L_36->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_4;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39 = L_38->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = L_40->____Lnext;
		NullCheck(L_41);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = L_41->____Lnext;
		NullCheck(L_42);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = L_42->____Org;
		bool L_44;
		L_44 = Geom_VertCCW_m3C73C97020D8B1930F6299B1539CBE4E9962ACF3(L_37, L_39, L_43, NULL);
		if (!L_44)
		{
			goto IL_00df;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_4;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____Lnext;
		V_3 = L_46;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_47 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_4;
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(__this, L_47, L_48, NULL);
		V_1 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
	}

IL_00df:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_1;
		if (!L_49)
		{
			goto IL_00f0;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_1;
		NullCheck(L_50);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = L_50->____Lnext;
		NullCheck(L_51);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = L_51->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_53 = V_2;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_52) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_53)))
		{
			goto IL_00f7;
		}
	}

IL_00f0:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_3;
		V_1 = L_54;
		goto IL_002a;
	}

IL_00f7:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_55 = V_0;
		NullCheck(L_55);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_56 = L_55->____next;
		V_0 = L_56;
	}

IL_00fe:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_57 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_58 = __this->____fHead;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_57) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_58))))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m8BF4E325A856B4818EBD72204EC256BF74D7D6EF (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		float L_1 = __this->___X;
		return L_1;
	}

IL_000a:
	{
		int32_t L_2 = ___0_index;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		float L_3 = __this->___Y;
		return L_3;
	}

IL_0015:
	{
		int32_t L_4 = ___0_index;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		float L_5 = __this->___Z;
		return L_5;
	}

IL_0020:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		float L_1 = ___1_value;
		__this->___X = L_1;
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___0_index;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		float L_3 = ___1_value;
		__this->___Y = L_3;
		return;
	}

IL_0017:
	{
		int32_t L_4 = ___0_index;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = ___1_value;
		__this->___Z = L_5;
		return;
	}

IL_0023:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___X = L_0;
		float L_1 = ___1_y;
		__this->___Y = L_1;
		float L_2 = ___2_z;
		__this->___Z = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_lhs, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___1_rhs, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___2_result, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___2_result;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___0_lhs;
		float L_2 = L_1->___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___1_rhs;
		float L_4 = L_3->___X;
		L_0->___X = ((float)il2cpp_codegen_subtract(L_2, L_4));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_5 = ___2_result;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___0_lhs;
		float L_7 = L_6->___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_8 = ___1_rhs;
		float L_9 = L_8->___Y;
		L_5->___Y = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = ___2_result;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = ___0_lhs;
		float L_12 = L_11->___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_13 = ___1_rhs;
		float L_14 = L_13->___Z;
		L_10->___Z = ((float)il2cpp_codegen_subtract(L_12, L_14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m615687EA76621EE708A5F7836B33DF54DC67E58C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_v, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___0_v;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___0_v;
		float L_2 = L_1->___X;
		L_0->___X = ((-L_2));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___0_v;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_4 = ___0_v;
		float L_5 = L_4->___Y;
		L_3->___Y = ((-L_5));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___0_v;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_7 = ___0_v;
		float L_8 = L_7->___Z;
		L_6->___Z = ((-L_8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_u, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___1_v, float* ___2_dot, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___2_dot;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___0_u;
		float L_2 = L_1->___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___1_v;
		float L_4 = L_3->___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_5 = ___0_u;
		float L_6 = L_5->___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_7 = ___1_v;
		float L_8 = L_7->___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_9 = ___0_u;
		float L_10 = L_9->___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = ___1_v;
		float L_12 = L_11->___Z;
		*(L_0) = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_4)), ((float)il2cpp_codegen_multiply(L_6, L_8)))), ((float)il2cpp_codegen_multiply(L_10, L_12))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	int32_t V_0 = 0;
	float G_B4_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	{
		V_0 = 0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___0_v;
		float L_1 = L_0->___Y;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		float L_2;
		L_2 = fabsf(L_1);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___0_v;
		float L_4 = L_3->___X;
		float L_5;
		L_5 = fabsf(L_4);
		if ((!(((float)L_2) > ((float)L_5))))
		{
			goto IL_001c;
		}
	}
	{
		V_0 = 1;
	}

IL_001c:
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___0_v;
		float L_7 = L_6->___Z;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		float L_8;
		L_8 = fabsf(L_7);
		int32_t L_9 = V_0;
		if (!L_9)
		{
			G_B4_0 = L_8;
			goto IL_0032;
		}
		G_B3_0 = L_8;
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = ___0_v;
		float L_11 = L_10->___Y;
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_0032:
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_12 = ___0_v;
		float L_13 = L_12->___X;
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		float L_14;
		L_14 = fabsf(G_B5_0);
		if ((!(((float)G_B5_1) > ((float)L_14))))
		{
			goto IL_0041;
		}
	}
	{
		V_0 = 2;
	}

IL_0041:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->___X;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		float L_3 = __this->___Y;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		float L_6 = __this->___Z;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6>(__this);
	String_t* _returnValue;
	_returnValue = Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797* L_0 = (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797*)il2cpp_codegen_object_new(DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4(L_0, DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var, __this, L_0);
		DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2* L_1 = (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2*)il2cpp_codegen_object_new(DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5(L_1, DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var, __this, L_1);
		DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC* L_2 = (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC*)il2cpp_codegen_object_new(DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F(L_2, DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var, __this, L_2);
		DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4* L_3 = (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4*)il2cpp_codegen_object_new(DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F(L_3, DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var, __this, L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_mA9794AE1C4917832E71637ADA7B763D44F1AADCA (NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m346F20161A05B26221AED634400DC23D74889415 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_a, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_b, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___0_a;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___1_b;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Onext;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___1_b;
		NullCheck(L_5);
		L_5->____Lnext = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____Lnext), (void*)L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___0_a;
		NullCheck(L_8);
		L_8->____Lnext = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Lnext), (void*)L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = ___0_a;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		NullCheck(L_10);
		L_10->____Onext = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____Onext), (void*)L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___1_b;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_12);
		L_12->____Onext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____Onext), (void*)L_13);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m0E16EF166956CA6D7DEE0C0C541DD90F9B0F3BAC (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrig, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_vNext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_0);
		V_0 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___2_vNext;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____prev;
		V_1 = L_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev), (void*)L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next), (void*)L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___2_vNext;
		NullCheck(L_8);
		L_8->____next = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next), (void*)L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___2_vNext;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev), (void*)L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___1_eOrig;
		NullCheck(L_12);
		L_12->____anEdge = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge), (void*)L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = ___1_eOrig;
		V_2 = L_14;
	}

IL_0033:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_0;
		NullCheck(L_15);
		L_15->____Org = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Org), (void*)L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_2;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Onext;
		V_2 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = ___1_eOrig;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_19) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_20))))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mE0EED973273FBA225485B9D39397577ED118E578 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eOrig, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___2_fNext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1;
		L_1 = GenericVirtualFuncInvoker0< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var, L_0);
		V_0 = L_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = ___2_fNext;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____prev;
		V_1 = L_3;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev), (void*)L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next), (void*)L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = ___2_fNext;
		NullCheck(L_8);
		L_8->____next = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next), (void*)L_9);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = ___2_fNext;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev), (void*)L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___1_eOrig;
		NullCheck(L_12);
		L_12->____anEdge = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge), (void*)L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = V_0;
		NullCheck(L_14);
		L_14->____trail = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->____trail), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = V_0;
		NullCheck(L_15);
		L_15->____marked = (bool)0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = ___2_fNext;
		NullCheck(L_17);
		bool L_18 = L_17->____inside;
		NullCheck(L_16);
		L_16->____inside = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___1_eOrig;
		V_2 = L_19;
	}

IL_004d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = V_0;
		NullCheck(L_20);
		L_20->____Lface = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Lface), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = L_22->____Lnext;
		V_2 = L_23;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = ___1_eOrig;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_24) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_25))))
		{
			goto IL_004d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* MeshUtils_MakeEdge_m1FBC01F73703AF9899163059E14810E5B54033CB (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eNext, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_1;
		L_1 = EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F(L_0, NULL);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_2 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2.____e;
		V_0 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_2.____eSym;
		V_1 = L_4;
		Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788((&___1_eNext), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___1_eNext;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____next;
		V_2 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_2;
		NullCheck(L_8);
		L_8->____next = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next), (void*)L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_2;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		NullCheck(L_11);
		L_11->____next = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->____next), (void*)L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = ___1_eNext;
		NullCheck(L_13);
		L_13->____next = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____next), (void*)L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___1_eNext;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		NullCheck(L_16);
		L_16->____next = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____next), (void*)L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_1;
		NullCheck(L_18);
		L_18->____Sym = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____Sym), (void*)L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		NullCheck(L_20);
		L_20->____Onext = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Onext), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		NullCheck(L_22);
		L_22->____Lnext = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____Lnext), (void*)L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_0;
		NullCheck(L_24);
		L_24->____Org = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____Org), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		NullCheck(L_25);
		L_25->____Lface = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->____Lface), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_0;
		NullCheck(L_26);
		L_26->____winding = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_0;
		NullCheck(L_27);
		L_27->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_0;
		NullCheck(L_28);
		L_28->____Sym = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____Sym), (void*)L_29);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_1;
		NullCheck(L_30);
		L_30->____Onext = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->____Onext), (void*)L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_0;
		NullCheck(L_32);
		L_32->____Lnext = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____Lnext), (void*)L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_1;
		NullCheck(L_34);
		L_34->____Org = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->____Org), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_1;
		NullCheck(L_35);
		L_35->____Lface = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->____Lface), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_1;
		NullCheck(L_36);
		L_36->____winding = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		NullCheck(L_37);
		L_37->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_0;
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_mE2132C4410E6FCC3090942C9E37A525B7873F0F1 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eDel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788((&___1_eDel), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___1_eDel;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____next;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___1_eDel;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Sym;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____next;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_6);
		L_6->____next = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next), (void*)L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_0;
		NullCheck(L_9);
		L_9->____next = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____next), (void*)L_10);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_11 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___1_eDel;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = L_12->____Sym;
		NullCheck(L_11);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_11, L_13);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_14 = ___0_pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___1_eDel;
		NullCheck(L_14);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_14, L_15);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m1CAF836C0795C6B7AE8785EC8667DB16BC3C83AF (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_vDel, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_newOrg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___1_vDel;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		V_1 = L_2;
	}

IL_0009:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_newOrg;
		NullCheck(L_3);
		L_3->____Org = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Org), (void*)L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Onext;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))))
		{
			goto IL_0009;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___1_vDel;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____prev;
		V_2 = L_10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = ___1_vDel;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = L_11->____next;
		V_3 = L_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = V_2;
		NullCheck(L_13);
		L_13->____prev = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____prev), (void*)L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_3;
		NullCheck(L_15);
		L_15->____next = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____next), (void*)L_16);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_17 = ___0_pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = ___1_vDel;
		NullCheck(L_17);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_17, L_18);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m75741DEEB1047F98DB2077A37F0C4FAEFDBEB3FD (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___1_fDel, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___2_newLFace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_2 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_3 = NULL;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___1_fDel;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		V_1 = L_2;
	}

IL_0009:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = ___2_newLFace;
		NullCheck(L_3);
		L_3->____Lface = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Lface), (void*)L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Lnext;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))))
		{
			goto IL_0009;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = ___1_fDel;
		NullCheck(L_9);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = L_9->____prev;
		V_2 = L_10;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = ___1_fDel;
		NullCheck(L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = L_11->____next;
		V_3 = L_12;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = V_3;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = V_2;
		NullCheck(L_13);
		L_13->____prev = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____prev), (void*)L_14);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_3;
		NullCheck(L_15);
		L_15->____next = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____next), (void*)L_16);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_17 = ___0_pool;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = ___1_fDel;
		NullCheck(L_17);
		GenericVirtualActionInvoker1< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var, L_17, L_18);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		V_0 = (0.0f);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___0_f;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge;
		V_1 = L_1;
	}

IL_000d:
	{
		float L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = L_3->____Org;
		NullCheck(L_4);
		float L_5 = L_4->____s;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		NullCheck(L_7);
		float L_8 = L_7->____s;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____Org;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		NullCheck(L_13);
		float L_14 = L_13->____t;
		V_0 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_8)), ((float)il2cpp_codegen_add(L_11, L_14))))));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_1;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Lnext;
		V_1 = L_16;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = ___0_f;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____anEdge;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_17) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_19))))
		{
			goto IL_000d;
		}
	}
	{
		float L_20 = V_0;
		return L_20;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Init_m3BBE75E5B051EE36FEC84AB7A343878D8A31125E (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Reset_mA465348BA96A189842668A660718EA65A96F3F79 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		V_0 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		__this->____next = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = V_0;
		__this->____prev = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev), (void*)L_0);
		__this->____anEdge = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero;
		__this->____coords = L_1;
		__this->____s = (0.0f);
		__this->____t = (0.0f);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_2 = (PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043*)(&__this->____pqHandle);
		il2cpp_codegen_initobj(L_2, sizeof(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043));
		__this->____n = 0;
		__this->____data = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mF0524539C2A7708D255C415B73D6253EAF2CBF3C (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		V_0 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____anEdge;
		V_1 = L_0;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_1;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Lnext;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = __this->____anEdge;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_4) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Init_m03F7722EFAFCD37C885A8C161DD89CDFD2245847 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Reset_mCE1993AB18C22B85935F5CF6E60AD07A63D97B02 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	{
		V_0 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		__this->____next = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = V_0;
		__this->____prev = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev), (void*)L_0);
		__this->____anEdge = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		__this->____trail = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trail), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		__this->____n = 0;
		__this->____marked = (bool)0;
		__this->____inside = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face__ctor_mC2E2FBE2A1C7557E01D2324B38344BE5C0825E57 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_____e_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_____e_FieldInfo_var, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke_back(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_____e_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_____e_FieldInfo_var, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke_cleanup(EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_____e_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_____e_FieldInfo_var, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com_back(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_____e_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_____e_FieldInfo_var, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com_cleanup(EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E EdgePair_Create_m7196DB2612DDC69F4AF9EE133D20846B86A4E69F (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___0_pool;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1;
		L_1 = GenericVirtualFuncInvoker0< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var, L_0);
		V_0 = L_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_2 = ___0_pool;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3;
		L_3 = GenericVirtualFuncInvoker0< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var, L_2);
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_5 = (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E*)(&L_4->____pair);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		L_5->____e = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____e), (void*)L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_8 = (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E*)(&L_7->____pair);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		L_8->____eSym = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____eSym), (void*)L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_12 = L_11->____pair;
		NullCheck(L_10);
		L_10->____pair = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair))->____e), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair))->____eSym), (void*)NULL);
		#endif
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_14 = L_13->____pair;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482 (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		V_0 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____eSym = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eSym), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = V_0;
		__this->____e = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____e), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____Lface;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_value, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Lface = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Lface), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____Org;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_value, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Org = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Org), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Lnext;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Onext;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(__this, NULL);
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_m7EB3B9E1FC30A3F92AE831142E9FB11DBACF3788 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** ___0_e, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_0 = ___0_e;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = *(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_2 = ___0_e;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = *(L_2);
		NullCheck(L_3);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_4 = (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E*)(&L_3->____pair);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eSym;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_1) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5))))
		{
			goto IL_0019;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_6 = ___0_e;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_7 = ___0_e;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = *(L_7);
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Sym;
		*(((RuntimeObject**)L_6)) = ((RuntimeObject*)L_9);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_6), (void*)((RuntimeObject*)L_9));
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Init_mAA9EFDE3C5AC0F238629D2134D72F372337BA0B7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Reset_m5660C4D534CBBF59F2E32F423E56517E41042542 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_0 = (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E*)(&__this->____pair);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = ___0_pool;
		EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482(L_0, L_1, NULL);
		V_0 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____Lnext = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lnext), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2;
		V_0 = L_3;
		__this->____Onext = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Onext), (void*)L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4;
		V_0 = L_5;
		__this->____Sym = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Sym), (void*)L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		__this->____next = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next), (void*)L_6);
		__this->____Org = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Org), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		__this->____Lface = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lface), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		__this->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		__this->____winding = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m349424407337EC75E8156A48AFE20702CFF727DE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PQHandle__cctor_mD8C4AC80F990EA1FFB03A124B5370D10E39F9763 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid = ((int32_t)268435455);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_1 = L_0->____nodeUp;
		NullCheck(L_1);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_2 = L_1->____prev;
		NullCheck(L_2);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = L_2->____key;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_1 = L_0->____nodeUp;
		NullCheck(L_1);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_2 = L_1->____next;
		NullCheck(L_2);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = L_2->____key;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg1, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___1_reg2, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	float V_2 = 0.0f;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp;
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___1_reg2;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5;
		L_5 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_4, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_5) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_6))))
		{
			goto IL_00a6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8;
		L_8 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_7, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9))))
		{
			goto IL_0084;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_0;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = L_10->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = L_12->____Org;
		bool L_14;
		L_14 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0062;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_1;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16;
		L_16 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_15, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_0;
		NullCheck(L_17);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = L_17->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_1;
		NullCheck(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = L_19->____Org;
		float L_21;
		L_21 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_16, L_18, L_20, NULL);
		return (bool)((((int32_t)((!(((float)L_21) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0062:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_0;
		NullCheck(L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23;
		L_23 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_22, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		NullCheck(L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = L_24->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_0;
		NullCheck(L_26);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = L_26->____Org;
		float L_28;
		L_28 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_23, L_25, L_27, NULL);
		return (bool)((((int32_t)((!(((float)L_28) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0084:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_1;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30;
		L_30 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_29, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = __this->____event;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____Org;
		float L_34;
		L_34 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_30, L_31, L_33, NULL);
		return (bool)((((int32_t)((!(((float)L_34) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00a6:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_1;
		NullCheck(L_35);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36;
		L_36 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_35, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_36) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_37))))
		{
			goto IL_00d6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_0;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39;
		L_39 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_38, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = __this->____event;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_0;
		NullCheck(L_41);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = L_41->____Org;
		float L_43;
		L_43 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_39, L_40, L_42, NULL);
		return (bool)((((int32_t)((!(((float)L_43) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00d6:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_0;
		NullCheck(L_44);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45;
		L_45 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_44, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = __this->____event;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_0;
		NullCheck(L_47);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_48 = L_47->____Org;
		float L_49;
		L_49 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_45, L_46, L_48, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_1;
		NullCheck(L_50);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51;
		L_51 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_50, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = __this->____event;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_1;
		NullCheck(L_53);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = L_53->____Org;
		float L_55;
		L_55 = Geom_EdgeEval_mBAA4526E696D91195D0824B9CD891AED17EB6B8F(L_51, L_52, L_54, NULL);
		V_2 = L_55;
		float L_56 = V_2;
		return (bool)((((int32_t)((!(((float)L_49) >= ((float)L_56)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		bool L_1 = L_0->____fixUpperEdge;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___0_reg;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp;
		NullCheck(L_3);
		L_3->____activeRegion = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____activeRegion), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_4 = __this->____dict;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___0_reg;
		NullCheck(L_5);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_6 = L_5->____nodeUp;
		NullCheck(L_4);
		Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9(L_4, L_6, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_7 = __this->____pool;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = ___0_reg;
		NullCheck(L_7);
		GenericVirtualActionInvoker1< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var, L_7, L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_newEdge, const RuntimeMethod* method) 
{
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___0_reg;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp;
		NullCheck(L_0);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_0, L_1, L_3, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___0_reg;
		NullCheck(L_4);
		L_4->____fixUpperEdge = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___0_reg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___1_newEdge;
		NullCheck(L_5);
		L_5->____eUp = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____eUp), (void*)L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___1_newEdge;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = ___0_reg;
		NullCheck(L_7);
		L_7->____activeRegion = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____activeRegion), (void*)L_8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1->____Org;
		V_0 = L_2;
	}

IL_000c:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_3, NULL);
		___0_reg = L_4;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___0_reg;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____eUp;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___0_reg;
		NullCheck(L_9);
		bool L_10 = L_9->____fixUpperEdge;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_11 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_12 = __this->____pool;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14;
		L_14 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_13, NULL);
		NullCheck(L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = L_14->____eUp;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Sym;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_17 = ___0_reg;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____eUp;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____Lnext;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20;
		L_20 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_11, L_12, L_16, L_19, NULL);
		V_1 = L_20;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_21 = ___0_reg;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_21, L_22, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24;
		L_24 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_23, NULL);
		___0_reg = L_24;
	}

IL_006a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___0_reg;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2;
		L_2 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_1, NULL);
		V_0 = L_2;
	}

IL_000c:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_3, NULL);
		___0_reg = L_4;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___0_reg;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____eUp;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___0_reg;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regAbove, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eNewUp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = __this->____pool;
		NullCheck(L_0);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___1_eNewUp;
		NullCheck(L_2);
		L_2->____eUp = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp), (void*)L_3);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_5 = __this->____dict;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = ___0_regAbove;
		NullCheck(L_6);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_7 = L_6->____nodeUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = V_0;
		NullCheck(L_5);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_9;
		L_9 = Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390(L_5, L_7, L_8, Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->____nodeUp = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____nodeUp), (void*)L_9);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = V_0;
		NullCheck(L_10);
		L_10->____fixUpperEdge = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = V_0;
		NullCheck(L_11);
		L_11->____sentinel = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = V_0;
		NullCheck(L_12);
		L_12->____dirty = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___1_eNewUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = V_0;
		NullCheck(L_13);
		L_13->____activeRegion = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____activeRegion), (void*)L_14);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1 = ___0_reg;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2;
		L_2 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->____windingNumber;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___0_reg;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp;
		NullCheck(L_5);
		int32_t L_6 = L_5->____winding;
		NullCheck(L_0);
		L_0->____windingNumber = ((int32_t)il2cpp_codegen_add(L_3, L_6));
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = ___0_reg;
		int32_t L_8 = __this->____windingRule;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___0_reg;
		NullCheck(L_9);
		int32_t L_10 = L_9->____windingNumber;
		bool L_11;
		L_11 = Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793(L_8, L_10, NULL);
		NullCheck(L_7);
		L_7->____inside = L_11;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_reg, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_reg;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____Lface;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___0_reg;
		NullCheck(L_5);
		bool L_6 = L_5->____inside;
		NullCheck(L_4);
		L_4->____inside = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_4);
		L_4->____anEdge = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____anEdge), (void*)L_7);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = ___0_reg;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regFirst, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___1_regLast, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regFirst;
		V_0 = L_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1 = ___0_regFirst;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____eUp;
		V_1 = L_2;
		goto IL_00ad;
	}

IL_000e:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = V_0;
		NullCheck(L_3);
		L_3->____fixUpperEdge = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5;
		L_5 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_4, NULL);
		V_2 = L_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = V_2;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____eUp;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_3;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = L_10->____Org;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_11)))
		{
			goto IL_0069;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = V_2;
		NullCheck(L_12);
		bool L_13 = L_12->____fixUpperEdge;
		if (L_13)
		{
			goto IL_0043;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = V_0;
		Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787(__this, L_14, NULL);
		goto IL_00b4;
	}

IL_0043:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_15 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_16 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18;
		L_18 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_17, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_3;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = L_19->____Sym;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21;
		L_21 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_15, L_16, L_18, L_20, NULL);
		V_3 = L_21;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_22 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_3;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_22, L_23, NULL);
	}

IL_0069:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		NullCheck(L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = L_24->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_3;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_25) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_26)))
		{
			goto IL_009d;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_27 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_28 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_3;
		NullCheck(L_29);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30;
		L_30 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_29, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_3;
		NullCheck(L_27);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_27, L_28, L_30, L_31, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_32 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_33 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_3;
		NullCheck(L_32);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_32, L_33, L_34, L_35, NULL);
	}

IL_009d:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_36 = V_0;
		Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787(__this, L_36, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_37 = V_2;
		NullCheck(L_37);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = L_37->____eUp;
		V_1 = L_38;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_39 = V_2;
		V_0 = L_39;
	}

IL_00ad:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_40 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_41 = ___1_regLast;
		if ((!(((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_40) == ((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_41))))
		{
			goto IL_000e;
		}
	}

IL_00b4:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_1;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eFirst, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___2_eLast, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___3_eTopLeft, bool ___4_cleanUp, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	{
		V_0 = (bool)1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___1_eFirst;
		V_1 = L_0;
	}

IL_0004:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1 = ___0_regUp;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_1;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Sym;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D(__this, L_1, L_3, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Onext;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = ___2_eLast;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))))
		{
			goto IL_0004;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___3_eTopLeft;
		if (L_9)
		{
			goto IL_0034;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11;
		L_11 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_10, NULL);
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____eUp;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13;
		L_13 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_12, NULL);
		___3_eTopLeft = L_13;
	}

IL_0034:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = ___0_regUp;
		V_2 = L_14;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___3_eTopLeft;
		V_4 = L_15;
	}

IL_003a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = V_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_17;
		L_17 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_16, NULL);
		V_3 = L_17;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = V_3;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____eUp;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = L_19->____Sym;
		V_1 = L_20;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_1;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = L_21->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_4;
		NullCheck(L_23);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = L_23->____Org;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_22) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_24))))
		{
			goto IL_0106;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_1;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_4;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_26) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_27)))
		{
			goto IL_009b;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_28 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_29 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_1;
		NullCheck(L_30);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31;
		L_31 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_30, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		NullCheck(L_28);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_28, L_29, L_31, L_32, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_33 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_34 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_4;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36;
		L_36 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_35, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		NullCheck(L_33);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_33, L_34, L_36, L_37, NULL);
	}

IL_009b:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_38 = V_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40 = L_39->____windingNumber;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = L_41->____winding;
		NullCheck(L_38);
		L_38->____windingNumber = ((int32_t)il2cpp_codegen_subtract(L_40, L_42));
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_43 = V_3;
		int32_t L_44 = __this->____windingRule;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = L_45->____windingNumber;
		bool L_47;
		L_47 = Geom_IsWindingInside_mAECD5C0CDC153F6036441D90EFB993F77C723793(L_44, L_46, NULL);
		NullCheck(L_43);
		L_43->____inside = L_47;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_48 = V_2;
		NullCheck(L_48);
		L_48->____dirty = (bool)1;
		bool L_49 = V_0;
		if (L_49)
		{
			goto IL_00fa;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_50 = V_2;
		bool L_51;
		L_51 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_50, NULL);
		if (!L_51)
		{
			goto IL_00fa;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_4;
		Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B(L_52, L_53, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_54 = V_2;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_54, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_55 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_56 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57 = V_4;
		NullCheck(L_55);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_55, L_56, L_57, NULL);
	}

IL_00fa:
	{
		V_0 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_58 = V_3;
		V_2 = L_58;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_1;
		V_4 = L_59;
		goto IL_003a;
	}

IL_0106:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_60 = V_2;
		NullCheck(L_60);
		L_60->____dirty = (bool)1;
		bool L_61 = ___4_cleanUp;
		if (!L_61)
		{
			goto IL_0118;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_62 = V_2;
		Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025(__this, L_62, NULL);
	}

IL_0118:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_e1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_e2, const RuntimeMethod* method) 
{
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___0_e1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___1_e2;
		NullCheck(L_0);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_isect, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_org, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_dst, float* ___3_w0, float* ___4_w1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___1_org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___0_isect;
		float L_2;
		L_2 = Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B(L_0, L_1, NULL);
		V_0 = L_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___2_dst;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___0_isect;
		float L_5;
		L_5 = Geom_VertL1dist_mAC0CFD4F9DB8AAE3089193AE779B7A5FE509467B(L_3, L_4, NULL);
		V_1 = L_5;
		float* L_6 = ___3_w0;
		float L_7 = V_1;
		float L_8 = V_0;
		float L_9 = V_1;
		*(L_6) = ((float)(((float)(L_7/((float)il2cpp_codegen_add(L_8, L_9))))/(2.0f)));
		float* L_10 = ___4_w1;
		float L_11 = V_0;
		float L_12 = V_0;
		float L_13 = V_1;
		*(L_10) = ((float)(((float)(L_11/((float)il2cpp_codegen_add(L_12, L_13))))/(2.0f)));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___0_isect;
		NullCheck(L_14);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_15 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_14->____coords);
		float* L_16 = (float*)(&L_15->___X);
		float* L_17 = L_16;
		float L_18 = *(L_17);
		float* L_19 = ___3_w0;
		float L_20 = *(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___1_org;
		NullCheck(L_21);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_22 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_21->____coords);
		float L_23 = L_22->___X;
		float* L_24 = ___4_w1;
		float L_25 = *(L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___2_dst;
		NullCheck(L_26);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_27 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_26->____coords);
		float L_28 = L_27->___X;
		*(L_17) = ((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_20, L_23)), ((float)il2cpp_codegen_multiply(L_25, L_28))))));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = ___0_isect;
		NullCheck(L_29);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_30 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_29->____coords);
		float* L_31 = (float*)(&L_30->___Y);
		float* L_32 = L_31;
		float L_33 = *(L_32);
		float* L_34 = ___3_w0;
		float L_35 = *(L_34);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = ___1_org;
		NullCheck(L_36);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_37 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_36->____coords);
		float L_38 = L_37->___Y;
		float* L_39 = ___4_w1;
		float L_40 = *(L_39);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = ___2_dst;
		NullCheck(L_41);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_42 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_41->____coords);
		float L_43 = L_42->___Y;
		*(L_32) = ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_35, L_38)), ((float)il2cpp_codegen_multiply(L_40, L_43))))));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = ___0_isect;
		NullCheck(L_44);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_45 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_44->____coords);
		float* L_46 = (float*)(&L_45->___Z);
		float* L_47 = L_46;
		float L_48 = *(L_47);
		float* L_49 = ___3_w0;
		float L_50 = *(L_49);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = ___1_org;
		NullCheck(L_51);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_52 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_51->____coords);
		float L_53 = L_52->___Z;
		float* L_54 = ___4_w1;
		float L_55 = *(L_54);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = ___2_dst;
		NullCheck(L_56);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_57 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_56->____coords);
		float L_58 = L_57->___Z;
		*(L_47) = ((float)il2cpp_codegen_add(L_48, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_50, L_53)), ((float)il2cpp_codegen_multiply(L_55, L_58))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_isect, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_orgUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___2_dstUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___3_orgLo, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___4_dstLo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_isect;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero;
		NullCheck(L_0);
		L_0->____coords = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___0_isect;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___1_orgUp;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___2_dstUp;
		Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E(__this, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = ___0_isect;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___3_orgLo;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = ___4_dstLo;
		Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E(__this, L_5, L_6, L_7, (&V_2), (&V_3), NULL);
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_8 = __this->____combineCallback;
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___0_isect;
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_10 = __this->____combineCallback;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = ___0_isect;
		NullCheck(L_11);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_12 = L_11->____coords;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = ___1_orgUp;
		NullCheck(L_15);
		int32_t L_16 = L_15->____data;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_16);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_14;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = ___2_dstUp;
		NullCheck(L_18);
		int32_t L_19 = L_18->____data;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___3_orgLo;
		NullCheck(L_21);
		int32_t L_22 = L_21->____data;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_22);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = L_20;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___4_dstLo;
		NullCheck(L_24);
		int32_t L_25 = L_24->____data;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_25);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = L_26;
		float L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_28);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = L_27;
		float L_30 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_30);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = L_29;
		float L_32 = V_2;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_32);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = L_31;
		float L_34 = V_3;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_34);
		NullCheck(L_10);
		int32_t L_35;
		L_35 = CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_inline(L_10, L_12, L_23, L_33, NULL);
		NullCheck(L_9);
		L_9->____data = L_35;
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___0_regUp;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org;
		bool L_10;
		L_10 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_00da;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_2;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12;
		L_12 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_11, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_1;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_2;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____Org;
		float L_17;
		L_17 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_12, L_14, L_16, NULL);
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_004c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_1;
		NullCheck(L_18);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = L_18->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_2;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20->____Org;
		bool L_22;
		L_22 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_19, L_21, NULL);
		if (L_22)
		{
			goto IL_00a4;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_23 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_24 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_2;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Sym;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27;
		L_27 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_23, L_24, L_26, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_28 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_29 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_2;
		NullCheck(L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32;
		L_32 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_31, NULL);
		NullCheck(L_28);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_28, L_29, L_30, L_32, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_33 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_34 = V_0;
		V_3 = (bool)1;
		NullCheck(L_34);
		L_34->____dirty = (bool)1;
		bool L_35 = V_3;
		NullCheck(L_33);
		L_33->____dirty = L_35;
		goto IL_0140;
	}

IL_00a4:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_1;
		NullCheck(L_36);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = L_36->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_2;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39 = L_38->____Org;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_37) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_39)))
		{
			goto IL_0140;
		}
	}
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_40 = __this->____pq;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_1;
		NullCheck(L_41);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = L_41->____Org;
		NullCheck(L_42);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_43 = L_42->____pqHandle;
		NullCheck(L_40);
		PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA(L_40, L_43, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_2;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45;
		L_45 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_44, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_45, L_46, NULL);
		goto IL_0140;
	}

IL_00da:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_1;
		NullCheck(L_47);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_48;
		L_48 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_47, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_2;
		NullCheck(L_49);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_50 = L_49->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_1;
		NullCheck(L_51);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = L_51->____Org;
		float L_53;
		L_53 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_48, L_50, L_52, NULL);
		if ((!(((float)L_53) < ((float)(0.0f)))))
		{
			goto IL_00fa;
		}
	}
	{
		return (bool)0;
	}

IL_00fa:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_54 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_55;
		L_55 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_54, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_56 = ___0_regUp;
		V_3 = (bool)1;
		NullCheck(L_56);
		L_56->____dirty = (bool)1;
		bool L_57 = V_3;
		NullCheck(L_55);
		L_55->____dirty = L_57;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_58 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_59 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60 = V_1;
		NullCheck(L_60);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = L_60->____Sym;
		NullCheck(L_58);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62;
		L_62 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_58, L_59, L_61, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_63 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_64 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65 = V_2;
		NullCheck(L_65);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66;
		L_66 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_65, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_1;
		NullCheck(L_63);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_63, L_64, L_66, L_67, NULL);
	}

IL_0140:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	bool V_4 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___0_regUp;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		bool L_10;
		L_10 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_009f;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12;
		L_12 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_11, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14;
		L_14 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_13, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_1;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____Org;
		float L_17;
		L_17 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_12, L_14, L_16, NULL);
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_19;
		L_19 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_18, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_20 = ___0_regUp;
		V_4 = (bool)1;
		NullCheck(L_20);
		L_20->____dirty = (bool)1;
		bool L_21 = V_4;
		NullCheck(L_19);
		L_19->____dirty = L_21;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_22 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_23 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25;
		L_25 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_22, L_23, L_24, NULL);
		V_3 = L_25;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_26 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_27 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_2;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_3;
		NullCheck(L_26);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_26, L_27, L_29, L_30, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_3;
		NullCheck(L_31);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_32 = L_31->____Lface;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_33 = ___0_regUp;
		NullCheck(L_33);
		bool L_34 = L_33->____inside;
		NullCheck(L_32);
		L_32->____inside = L_34;
		goto IL_0110;
	}

IL_009f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_2;
		NullCheck(L_35);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36;
		L_36 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_35, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		NullCheck(L_37);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38;
		L_38 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_37, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_2;
		NullCheck(L_39);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = L_39->____Org;
		float L_41;
		L_41 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_36, L_38, L_40, NULL);
		if ((!(((float)L_41) > ((float)(0.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		return (bool)0;
	}

IL_00bf:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_42 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_43 = V_0;
		V_4 = (bool)1;
		NullCheck(L_43);
		L_43->____dirty = (bool)1;
		bool L_44 = V_4;
		NullCheck(L_42);
		L_42->____dirty = L_44;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_45 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_46 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_2;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48;
		L_48 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_45, L_46, L_47, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_49 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_50 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_1;
		NullCheck(L_51);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = L_51->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_2;
		NullCheck(L_53);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = L_53->____Sym;
		NullCheck(L_49);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_49, L_50, L_52, L_54, NULL);
		NullCheck(L_48);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_55;
		L_55 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_48, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_56 = ___0_regUp;
		NullCheck(L_56);
		bool L_57 = L_56->____inside;
		NullCheck(L_55);
		L_55->____inside = L_57;
	}

IL_0110:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	CHECKED_LOCAL(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticInit);
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_6 = NULL;
	float V_7 = 0.0f;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_8 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_9 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_10 = NULL;
	bool V_11 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* G_B14_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___0_regUp;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org;
		V_4 = L_9;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		V_5 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_2;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		V_6 = L_13;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_4;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_14) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_15))))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_003c:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_3;
		NullCheck(L_16);
		float L_17 = L_16->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_5;
		NullCheck(L_18);
		float L_19 = L_18->____t;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		float L_20;
		L_20 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_17, L_19, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = V_4;
		NullCheck(L_21);
		float L_22 = L_21->____t;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = V_6;
		NullCheck(L_23);
		float L_24 = L_23->____t;
		float L_25;
		L_25 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_22, L_24, NULL);
		V_7 = L_25;
		float L_26 = V_7;
		if ((!(((float)L_20) > ((float)L_26))))
		{
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0069:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = V_4;
		bool L_29;
		L_29 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_0086;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_32 = V_4;
		float L_33;
		L_33 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_30, L_31, L_32, NULL);
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		return (bool)0;
	}

IL_0086:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = V_3;
		float L_37;
		L_37 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_34, L_35, L_36, NULL);
		if ((!(((float)L_37) < ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		return (bool)0;
	}

IL_0099:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_38 = __this->____pool;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39;
		L_39 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_38);
		V_8 = L_39;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = V_8;
		Geom_EdgeIntersect_mEC7935EED47854721B3A81E27749CA3A7F4736D3(L_40, L_41, L_42, L_43, L_44, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = __this->____event;
		bool L_47;
		L_47 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_45, L_46, NULL);
		if (!L_47)
		{
			goto IL_00e7;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_48 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49 = __this->____event;
		NullCheck(L_49);
		float L_50 = L_49->____s;
		NullCheck(L_48);
		L_48->____s = L_50;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = __this->____event;
		NullCheck(L_52);
		float L_53 = L_52->____t;
		NullCheck(L_51);
		L_51->____t = L_53;
	}

IL_00e7:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = V_4;
		bool L_56;
		L_56 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_54, L_55, NULL);
		if (L_56)
		{
			goto IL_00f5;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_57 = V_4;
		G_B14_0 = L_57;
		goto IL_00f6;
	}

IL_00f5:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = V_3;
		G_B14_0 = L_58;
	}

IL_00f6:
	{
		V_9 = G_B14_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_60 = V_8;
		bool L_61;
		L_61 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_011f;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_63 = V_9;
		NullCheck(L_63);
		float L_64 = L_63->____s;
		NullCheck(L_62);
		L_62->____s = L_64;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_65 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = V_9;
		NullCheck(L_66);
		float L_67 = L_66->____t;
		NullCheck(L_65);
		L_65->____t = L_67;
	}

IL_011f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_68 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = V_3;
		bool L_70;
		L_70 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_68, L_69, NULL);
		if (L_70)
		{
			goto IL_0134;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = V_4;
		bool L_73;
		L_73 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_71, L_72, NULL);
		if (!L_73)
		{
			goto IL_014b;
		}
	}

IL_0134:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_74 = ___0_regUp;
		bool L_75;
		L_75 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_74, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_76 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = V_8;
		NullCheck(L_76);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_76, L_77);
		return (bool)0;
	}

IL_014b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_79 = __this->____event;
		bool L_80;
		L_80 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_78, L_79, NULL);
		if (L_80)
		{
			goto IL_0170;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = __this->____event;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83 = V_8;
		float L_84;
		L_84 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_81, L_82, L_83, NULL);
		if ((((float)L_84) >= ((float)(0.0f))))
		{
			goto IL_019b;
		}
	}

IL_0170:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_85 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = __this->____event;
		bool L_87;
		L_87 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_85, L_86, NULL);
		if (L_87)
		{
			goto IL_03a0;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_88 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_89 = __this->____event;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_90 = V_8;
		float L_91;
		L_91 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_88, L_89, L_90, NULL);
		if ((!(((float)L_91) <= ((float)(0.0f)))))
		{
			goto IL_03a0;
		}
	}

IL_019b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_92 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_93 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_92) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_93))))
		{
			goto IL_0219;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_94 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_95 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_96 = V_1;
		NullCheck(L_96);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_97 = L_96->____Sym;
		NullCheck(L_94);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_98;
		L_98 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_94, L_95, L_97, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_99 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_100 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_101 = V_2;
		NullCheck(L_101);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_102 = L_101->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_103 = V_1;
		NullCheck(L_99);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_99, L_100, L_102, L_103, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_104 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_105;
		L_105 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_104, NULL);
		___0_regUp = L_105;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_106 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_107;
		L_107 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_106, NULL);
		NullCheck(L_107);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_108 = L_107->____eUp;
		V_1 = L_108;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_109 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_110;
		L_110 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_109, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_111 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_112;
		L_112 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_110, L_111, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_113 = ___0_regUp;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_114 = V_1;
		NullCheck(L_114);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_115;
		L_115 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_114, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_116 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_117 = V_1;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_113, L_115, L_116, L_117, (bool)1, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_118 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_119 = V_8;
		NullCheck(L_118);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_118, L_119);
		return (bool)1;
	}

IL_0219:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_120 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_121 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_120) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_121))))
		{
			goto IL_02b3;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_122 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_123 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_124 = V_2;
		NullCheck(L_124);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_125 = L_124->____Sym;
		NullCheck(L_122);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_126;
		L_126 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_122, L_123, L_125, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_127 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_128 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_129 = V_1;
		NullCheck(L_129);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_130 = L_129->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_131 = V_2;
		NullCheck(L_131);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_132;
		L_132 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_131, NULL);
		NullCheck(L_127);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_127, L_128, L_130, L_132, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_133 = ___0_regUp;
		V_0 = L_133;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_134 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_135;
		L_135 = Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7(__this, L_134, NULL);
		___0_regUp = L_135;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_136 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_137;
		L_137 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_136, NULL);
		NullCheck(L_137);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_138 = L_137->____eUp;
		NullCheck(L_138);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_139;
		L_139 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_138, NULL);
		V_10 = L_139;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_140 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_141 = V_2;
		NullCheck(L_141);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_142;
		L_142 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_141, NULL);
		NullCheck(L_140);
		L_140->____eUp = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&L_140->____eUp), (void*)L_142);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_143 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_144;
		L_144 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_143, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		V_2 = L_144;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_145 = ___0_regUp;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_146 = V_2;
		NullCheck(L_146);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_147 = L_146->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_148 = V_1;
		NullCheck(L_148);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_149;
		L_149 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_148, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_150 = V_10;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_145, L_147, L_149, L_150, (bool)1, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_151 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_152 = V_8;
		NullCheck(L_151);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_151, L_152);
		return (bool)1;
	}

IL_02b3:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_153 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_154 = __this->____event;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_155 = V_8;
		float L_156;
		L_156 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_153, L_154, L_155, NULL);
		if ((!(((float)L_156) >= ((float)(0.0f)))))
		{
			goto IL_0325;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_157 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_158;
		L_158 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_157, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_159 = ___0_regUp;
		V_11 = (bool)1;
		NullCheck(L_159);
		L_159->____dirty = (bool)1;
		bool L_160 = V_11;
		NullCheck(L_158);
		L_158->____dirty = L_160;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_161 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_162 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_163 = V_1;
		NullCheck(L_163);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_164 = L_163->____Sym;
		NullCheck(L_161);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_165;
		L_165 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_161, L_162, L_164, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_166 = V_1;
		NullCheck(L_166);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_167 = L_166->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_168 = __this->____event;
		NullCheck(L_168);
		float L_169 = L_168->____s;
		NullCheck(L_167);
		L_167->____s = L_169;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_170 = V_1;
		NullCheck(L_170);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_171 = L_170->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_172 = __this->____event;
		NullCheck(L_172);
		float L_173 = L_172->____t;
		NullCheck(L_171);
		L_171->____t = L_173;
	}

IL_0325:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_174 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_175 = __this->____event;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_176 = V_8;
		float L_177;
		L_177 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_174, L_175, L_176, NULL);
		if ((!(((float)L_177) <= ((float)(0.0f)))))
		{
			goto IL_0391;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_178 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_179 = V_0;
		V_11 = (bool)1;
		NullCheck(L_179);
		L_179->____dirty = (bool)1;
		bool L_180 = V_11;
		NullCheck(L_178);
		L_178->____dirty = L_180;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_181 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_182 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_183 = V_2;
		NullCheck(L_183);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_184 = L_183->____Sym;
		NullCheck(L_181);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_185;
		L_185 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_181, L_182, L_184, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_186 = V_2;
		NullCheck(L_186);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_187 = L_186->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_188 = __this->____event;
		NullCheck(L_188);
		float L_189 = L_188->____s;
		NullCheck(L_187);
		L_187->____s = L_189;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_190 = V_2;
		NullCheck(L_190);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_191 = L_190->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_192 = __this->____event;
		NullCheck(L_192);
		float L_193 = L_192->____t;
		NullCheck(L_191);
		L_191->____t = L_193;
	}

IL_0391:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_194 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_195 = V_8;
		NullCheck(L_194);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_194, L_195);
		return (bool)0;
	}

IL_03a0:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_196 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_197 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_198 = V_1;
		NullCheck(L_198);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_199 = L_198->____Sym;
		NullCheck(L_196);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_200;
		L_200 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_196, L_197, L_199, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_201 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_202 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_203 = V_2;
		NullCheck(L_203);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_204 = L_203->____Sym;
		NullCheck(L_201);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_205;
		L_205 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_201, L_202, L_204, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_206 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_207 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_208 = V_2;
		NullCheck(L_208);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_209;
		L_209 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_208, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_210 = V_1;
		NullCheck(L_206);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_206, L_207, L_209, L_210, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_211 = V_1;
		NullCheck(L_211);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_212 = L_211->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_213 = V_8;
		NullCheck(L_213);
		float L_214 = L_213->____s;
		NullCheck(L_212);
		L_212->____s = L_214;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_215 = V_1;
		NullCheck(L_215);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_216 = L_215->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_217 = V_8;
		NullCheck(L_217);
		float L_218 = L_217->____t;
		NullCheck(L_216);
		L_216->____t = L_218;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_219 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_220 = V_8;
		NullCheck(L_219);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_219, L_220);
		V_8 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_221 = V_1;
		NullCheck(L_221);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_222 = L_221->____Org;
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_223 = __this->____pq;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_224 = V_1;
		NullCheck(L_224);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_225 = L_224->____Org;
		NullCheck(L_223);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_226;
		L_226 = PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA(L_223, L_225, PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		NullCheck(L_222);
		L_222->____pqHandle = L_226;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_227 = V_1;
		NullCheck(L_227);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_228 = L_227->____Org;
		NullCheck(L_228);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_229 = (PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043*)(&L_228->____pqHandle);
		int32_t L_230 = L_229->____handle;
		CHECKED_LOCAL_INIT(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticInit,(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_231 = ((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid;
		if ((!(((uint32_t)L_230) == ((uint32_t)L_231))))
		{
			goto IL_045a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_232 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_232, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_232, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299_RuntimeMethod_var)));
	}

IL_045a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_233 = V_1;
		NullCheck(L_233);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_234 = L_233->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_235 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_236 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_237 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_238 = V_6;
		Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE(__this, L_234, L_235, L_236, L_237, L_238, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_239 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_240;
		L_240 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_239, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_241 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_242 = V_0;
		V_11 = (bool)1;
		NullCheck(L_242);
		L_242->____dirty = (bool)1;
		bool L_243 = V_11;
		bool L_244 = L_243;
		V_11 = L_244;
		NullCheck(L_241);
		L_241->____dirty = L_244;
		bool L_245 = V_11;
		NullCheck(L_240);
		L_240->____dirty = L_245;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_000a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		___0_regUp = L_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_3, NULL);
		V_0 = L_4;
	}

IL_0015:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____dirty;
		if (L_6)
		{
			goto IL_000a;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = ___0_regUp;
		NullCheck(L_7);
		bool L_8 = L_7->____dirty;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___0_regUp;
		V_0 = L_9;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11;
		L_11 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_10, NULL);
		___0_regUp = L_11;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = ___0_regUp;
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13 = ___0_regUp;
		NullCheck(L_13);
		bool L_14 = L_13->____dirty;
		if (L_14)
		{
			goto IL_003c;
		}
	}

IL_003b:
	{
		return;
	}

IL_003c:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = ___0_regUp;
		NullCheck(L_15);
		L_15->____dirty = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = ___0_regUp;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____eUp;
		V_1 = L_17;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = V_0;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____eUp;
		V_2 = L_19;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21;
		L_21 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_20, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		NullCheck(L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23;
		L_23 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_22, NULL);
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_21) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_23)))
		{
			goto IL_00cb;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24 = ___0_regUp;
		bool L_25;
		L_25 = Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2(__this, L_24, NULL);
		if (!L_25)
		{
			goto IL_00cb;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->____fixUpperEdge;
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = V_0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_28, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_29 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_30 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_2;
		NullCheck(L_29);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_29, L_30, L_31, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_32 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_33;
		L_33 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_32, NULL);
		V_0 = L_33;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_34 = V_0;
		NullCheck(L_34);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = L_34->____eUp;
		V_2 = L_35;
		goto IL_00cb;
	}

IL_009a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_36 = ___0_regUp;
		NullCheck(L_36);
		bool L_37 = L_36->____fixUpperEdge;
		if (!L_37)
		{
			goto IL_00cb;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_38 = ___0_regUp;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_38, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_39 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_40 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_1;
		NullCheck(L_39);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_39, L_40, L_41, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_42 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_43;
		L_43 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_42, NULL);
		___0_regUp = L_43;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_44 = ___0_regUp;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = L_44->____eUp;
		V_1 = L_45;
	}

IL_00cb:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		NullCheck(L_46);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = L_46->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_2;
		NullCheck(L_48);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49 = L_48->____Org;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_47) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_49)))
		{
			goto IL_0125;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_1;
		NullCheck(L_50);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51;
		L_51 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_50, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_2;
		NullCheck(L_52);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_53;
		L_53 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_52, NULL);
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_51) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_53)))
		{
			goto IL_011d;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_54 = ___0_regUp;
		NullCheck(L_54);
		bool L_55 = L_54->____fixUpperEdge;
		if (L_55)
		{
			goto IL_011d;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_56 = V_0;
		NullCheck(L_56);
		bool L_57 = L_56->____fixUpperEdge;
		if (L_57)
		{
			goto IL_011d;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58 = V_1;
		NullCheck(L_58);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59;
		L_59 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_58, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_60 = __this->____event;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_59) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_60)))
		{
			goto IL_0113;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_2;
		NullCheck(L_61);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62;
		L_62 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_61, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_63 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_62) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_63))))
		{
			goto IL_011d;
		}
	}

IL_0113:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_64 = ___0_regUp;
		bool L_65;
		L_65 = Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299(__this, L_64, NULL);
		if (!L_65)
		{
			goto IL_0125;
		}
	}
	{
		return;
	}

IL_011d:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_66 = ___0_regUp;
		bool L_67;
		L_67 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_66, NULL);
	}

IL_0125:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = V_1;
		NullCheck(L_68);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = L_68->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = V_2;
		NullCheck(L_70);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = L_70->____Org;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_69) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_71))))
		{
			goto IL_0015;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_72 = V_1;
		NullCheck(L_72);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_73;
		L_73 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_72, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_74 = V_2;
		NullCheck(L_74);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75;
		L_75 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_74, NULL);
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_73) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_75))))
		{
			goto IL_0015;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_76 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_77 = V_1;
		Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B(L_76, L_77, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_78 = ___0_regUp;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_78, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_79 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_80 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_81 = V_1;
		NullCheck(L_79);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_79, L_80, L_81, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_82 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_83;
		L_83 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_82, NULL);
		___0_regUp = L_83;
		goto IL_0015;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___1_eBottomLeft, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	bool V_4 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_5 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___1_eBottomLeft;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext;
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3;
		L_3 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_2, NULL);
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___0_regUp;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp;
		V_2 = L_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = V_1;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____eUp;
		V_3 = L_7;
		V_4 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_3;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_11)))
		{
			goto IL_0036;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = ___0_regUp;
		bool L_13;
		L_13 = Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299(__this, L_12, NULL);
	}

IL_0036:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_2;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = __this->____event;
		bool L_17;
		L_17 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_18 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_19 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21;
		L_21 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_20, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		NullCheck(L_18);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_18, L_19, L_21, L_22, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24;
		L_24 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_23, NULL);
		___0_regUp = L_24;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26;
		L_26 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_25, NULL);
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____eUp;
		V_0 = L_27;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = ___0_regUp;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_29;
		L_29 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_28, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_30 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31;
		L_31 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_29, L_30, NULL);
		V_4 = (bool)1;
	}

IL_0089:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_3;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = __this->____event;
		bool L_35;
		L_35 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_00c1;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_36 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_37 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = ___1_eBottomLeft;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_3;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40;
		L_40 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_39, NULL);
		NullCheck(L_36);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_36, L_37, L_38, L_40, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_41 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42;
		L_42 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_41, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		___1_eBottomLeft = L_42;
		V_4 = (bool)1;
	}

IL_00c1:
	{
		bool L_43 = V_4;
		if (!L_43)
		{
			goto IL_00d6;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_44 = ___0_regUp;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = ___1_eBottomLeft;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_44, L_46, L_47, L_48, (bool)1, NULL);
		return;
	}

IL_00d6:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_3;
		NullCheck(L_49);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_50 = L_49->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_2;
		NullCheck(L_51);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = L_51->____Org;
		bool L_53;
		L_53 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_00f3;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_3;
		NullCheck(L_54);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55;
		L_55 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_54, NULL);
		V_5 = L_55;
		goto IL_00f6;
	}

IL_00f3:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = V_2;
		V_5 = L_56;
	}

IL_00f6:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_57 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_58 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = ___1_eBottomLeft;
		NullCheck(L_59);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60;
		L_60 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_59, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_5;
		NullCheck(L_57);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62;
		L_62 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_57, L_58, L_60, L_61, NULL);
		V_5 = L_62;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_63 = ___0_regUp;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64 = V_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65 = V_5;
		NullCheck(L_65);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66 = L_65->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_5;
		NullCheck(L_67);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = L_67->____Onext;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_63, L_64, L_66, L_68, (bool)0, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = V_5;
		NullCheck(L_69);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = L_69->____Sym;
		NullCheck(L_70);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_71 = L_70->____activeRegion;
		NullCheck(L_71);
		L_71->____fixUpperEdge = (bool)1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_72 = ___0_regUp;
		Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025(__this, L_72, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___0_regUp, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___1_vEvent, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___0_regUp;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____Org;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___1_vEvent;
		bool L_5;
		L_5 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var)));
	}

IL_0020:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8;
		L_8 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_7, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___1_vEvent;
		bool L_10;
		L_10 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_008c;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_11 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_12 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = L_13->____Sym;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15;
		L_15 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_11, L_12, L_14, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = ___0_regUp;
		NullCheck(L_16);
		bool L_17 = L_16->____fixUpperEdge;
		if (!L_17)
		{
			goto IL_006c;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_18 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_19 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____Onext;
		NullCheck(L_18);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_18, L_19, L_21, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_22 = ___0_regUp;
		NullCheck(L_22);
		L_22->____fixUpperEdge = (bool)0;
	}

IL_006c:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_23 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_24 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___1_vEvent;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____anEdge;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_0;
		NullCheck(L_23);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_23, L_24, L_26, L_27, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = ___1_vEvent;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_28, NULL);
		return;
	}

IL_008c:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_29 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_vEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_5 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_6 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* G_B7_0 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = __this->____pool;
		NullCheck(L_0);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___0_vEvent;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____anEdge;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym;
		NullCheck(L_2);
		L_2->____eUp = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp), (void*)L_5);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_6 = __this->____dict;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = V_0;
		NullCheck(L_6);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_8;
		L_8 = Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4(L_6, L_7, NULL);
		NullCheck(L_8);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9;
		L_9 = Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_inline(L_8, NULL);
		V_1 = L_9;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_10 = __this->____pool;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = V_0;
		NullCheck(L_10);
		GenericVirtualActionInvoker1< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var, L_10, L_11);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = V_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13;
		L_13 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_12, NULL);
		V_2 = L_13;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = V_2;
		if (L_14)
		{
			goto IL_0047;
		}
	}
	{
		return;
	}

IL_0047:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = V_1;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____eUp;
		V_3 = L_16;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_17 = V_2;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____eUp;
		V_4 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_3;
		NullCheck(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20;
		L_20 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_19, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___0_vEvent;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_3;
		NullCheck(L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = L_22->____Org;
		float L_24;
		L_24 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_20, L_21, L_23, NULL);
		if ((!(((float)L_24) == ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___0_vEvent;
		Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44(__this, L_25, L_26, NULL);
		return;
	}

IL_0078:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_4;
		NullCheck(L_27);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28;
		L_28 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_27, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_3;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30;
		L_30 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_29, NULL);
		bool L_31;
		L_31 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_008f;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_32 = V_2;
		G_B7_0 = L_32;
		goto IL_0090;
	}

IL_008f:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_33 = V_1;
		G_B7_0 = L_33;
	}

IL_0090:
	{
		V_5 = G_B7_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_34 = V_1;
		NullCheck(L_34);
		bool L_35 = L_34->____inside;
		if (L_35)
		{
			goto IL_00a3;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_36 = V_5;
		NullCheck(L_36);
		bool L_37 = L_36->____fixUpperEdge;
		if (!L_37)
		{
			goto IL_011f;
		}
	}

IL_00a3:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_38 = V_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_39 = V_1;
		if ((!(((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_38) == ((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_39))))
		{
			goto IL_00ce;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_40 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_41 = __this->____pool;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = ___0_vEvent;
		NullCheck(L_42);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = L_42->____anEdge;
		NullCheck(L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = L_43->____Sym;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_3;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____Lnext;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47;
		L_47 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_40, L_41, L_44, L_46, NULL);
		V_6 = L_47;
		goto IL_00f3;
	}

IL_00ce:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_48 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_49 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_4;
		NullCheck(L_50);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51;
		L_51 = Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7(L_50, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = ___0_vEvent;
		NullCheck(L_52);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = L_52->____anEdge;
		NullCheck(L_48);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54;
		L_54 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_48, L_49, L_51, L_53, NULL);
		NullCheck(L_54);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = L_54->____Sym;
		V_6 = L_55;
	}

IL_00f3:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_56 = V_5;
		NullCheck(L_56);
		bool L_57 = L_56->____fixUpperEdge;
		if (!L_57)
		{
			goto IL_0108;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_58 = V_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_6;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_58, L_59, NULL);
		goto IL_0117;
	}

IL_0108:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_60 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_6;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_62;
		L_62 = Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D(__this, L_60, L_61, NULL);
		Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50(__this, L_62, NULL);
	}

IL_0117:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_63 = ___0_vEvent;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_63, NULL);
		return;
	}

IL_011f:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_64 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_65 = ___0_vEvent;
		NullCheck(L_65);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66 = L_65->____anEdge;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = ___0_vEvent;
		NullCheck(L_67);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = L_67->____anEdge;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_64, L_66, L_68, (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___0_vEvent, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___0_vEvent;
		__this->____event = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event), (void*)L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___0_vEvent;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____anEdge;
		V_0 = L_2;
		goto IL_0028;
	}

IL_0010:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Onext;
		V_0 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___0_vEvent;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____anEdge;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7))))
		{
			goto IL_0028;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___0_vEvent;
		Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B(__this, L_8, NULL);
		return;
	}

IL_0028:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_0;
		NullCheck(L_9);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = L_9->____activeRegion;
		if (!L_10)
		{
			goto IL_0010;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = L_11->____activeRegion;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13;
		L_13 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_12, NULL);
		V_1 = L_13;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = V_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15;
		L_15 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_14, NULL);
		V_2 = L_15;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = V_2;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____eUp;
		V_3 = L_17;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19;
		L_19 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_18, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		V_4 = L_19;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_4;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_3;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_21) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_22))))
		{
			goto IL_006a;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_4;
		Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6(__this, L_23, L_24, NULL);
		return;
	}

IL_006a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_4;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_3;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_25, L_27, L_28, L_29, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, float ___0_smin, float ___1_smax, float ___2_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = L_3->____Org;
		float L_5 = ___1_smax;
		NullCheck(L_4);
		L_4->____s = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org;
		float L_8 = ___2_t;
		NullCheck(L_7);
		L_7->____t = L_8;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_0;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10;
		L_10 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_9, NULL);
		float L_11 = ___0_smin;
		NullCheck(L_10);
		L_10->____s = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		float L_14 = ___2_t;
		NullCheck(L_13);
		L_13->____t = L_14;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16;
		L_16 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_15, NULL);
		__this->____event = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event), (void*)L_16);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_17 = __this->____pool;
		NullCheck(L_17);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18;
		L_18 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_17);
		V_1 = L_18;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_19 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_19);
		L_19->____eUp = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____eUp), (void*)L_20);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_21 = V_1;
		NullCheck(L_21);
		L_21->____windingNumber = 0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_22 = V_1;
		NullCheck(L_22);
		L_22->____inside = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = V_1;
		NullCheck(L_23);
		L_23->____fixUpperEdge = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24 = V_1;
		NullCheck(L_24);
		L_24->____sentinel = (bool)1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = V_1;
		NullCheck(L_25);
		L_25->____dirty = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26 = V_1;
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_27 = __this->____dict;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = V_1;
		NullCheck(L_27);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_29;
		L_29 = Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615(L_27, L_28, Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var);
		NullCheck(L_26);
		L_26->____nodeUp = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____nodeUp), (void*)L_29);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* L_0 = (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*)il2cpp_codegen_object_new(LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var);
		LessOrEqual__ctor_m6556B77F3E07A00B7AFD15AD07B0EF86306BFF0C(L_0, __this, (intptr_t)((void*)Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var), NULL);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_1 = (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*)il2cpp_codegen_object_new(Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var);
		Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7(L_1, L_0, Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7_RuntimeMethod_var);
		__this->____dict = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict), (void*)L_1);
		float L_2 = __this->___SentinelCoord;
		float L_3 = __this->___SentinelCoord;
		float L_4 = __this->___SentinelCoord;
		Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3(__this, ((-L_2)), L_3, ((-L_4)), NULL);
		float L_5 = __this->___SentinelCoord;
		float L_6 = __this->___SentinelCoord;
		float L_7 = __this->___SentinelCoord;
		Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3(__this, ((-L_5)), L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	{
		goto IL_0010;
	}

IL_0002:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = V_0;
		NullCheck(L_0);
		bool L_1 = L_0->____sentinel;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_2, NULL);
	}

IL_0010:
	{
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_3 = __this->____dict;
		NullCheck(L_3);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_4;
		L_4 = Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84(L_3, NULL);
		NullCheck(L_4);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5;
		L_5 = Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_inline(L_4, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		__this->____dict = (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict), (void*)(Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eHead;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____next;
		V_1 = L_3;
		goto IL_00c5;
	}

IL_0018:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_1;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____next;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Lnext;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		bool L_12;
		L_12 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_1;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = L_13->____Lnext;
		NullCheck(L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = L_14->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_15) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_1;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_17, L_18, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_19 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_20 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_1;
		NullCheck(L_19);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_19, L_20, L_21, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_3;
		V_1 = L_22;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = L_23->____Lnext;
		V_3 = L_24;
	}

IL_006a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_3;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_1;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_26) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_27))))
		{
			goto IL_00c3;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_1;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_28) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_29)))
		{
			goto IL_009d;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_2;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_30) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_31)))
		{
			goto IL_0084;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_2;
		NullCheck(L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = L_33->____Sym;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_32) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_34))))
		{
			goto IL_008b;
		}
	}

IL_0084:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_2;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = L_35->____next;
		V_2 = L_36;
	}

IL_008b:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_37 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_38 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_3;
		NullCheck(L_37);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_37, L_38, L_39, NULL);
	}

IL_009d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_2;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_40) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_41)))
		{
			goto IL_00aa;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_2;
		NullCheck(L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = L_43->____Sym;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_42) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_44))))
		{
			goto IL_00b1;
		}
	}

IL_00aa:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_2;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____next;
		V_2 = L_46;
	}

IL_00b1:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_47 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_48 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_1;
		NullCheck(L_47);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_47, L_48, L_49, NULL);
	}

IL_00c3:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_2;
		V_1 = L_50;
	}

IL_00c5:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_51) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_52))))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticInit);
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____vHead;
		V_0 = L_1;
		V_2 = 0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____next;
		V_1 = L_3;
		goto IL_0022;
	}

IL_0017:
	{
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_1;
		NullCheck(L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = L_5->____next;
		V_1 = L_6;
	}

IL_0022:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 8));
		int32_t L_10 = V_2;
		LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* L_11 = (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*)il2cpp_codegen_object_new(LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var);
		LessOrEqual__ctor_m354C7C326099DA31A5715796F9CCA76DE5067731(L_11, NULL, (intptr_t)((void*)Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819_RuntimeMethod_var), NULL);
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_12 = (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*)il2cpp_codegen_object_new(PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var);
		PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF(L_12, L_10, L_11, PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var);
		__this->____pq = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pq), (void*)L_12);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_13 = __this->____mesh;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____vHead;
		V_0 = L_14;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____next;
		V_1 = L_16;
		goto IL_008d;
	}

IL_0057:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = V_1;
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_18 = __this->____pq;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = V_1;
		NullCheck(L_18);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_20;
		L_20 = PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA(L_18, L_19, PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		NullCheck(L_17);
		L_17->____pqHandle = L_20;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = V_1;
		NullCheck(L_21);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_22 = (PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043*)(&L_21->____pqHandle);
		int32_t L_23 = L_22->____handle;
		CHECKED_LOCAL_INIT(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticInit,(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_24 = ((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0086;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA_RuntimeMethod_var)));
	}

IL_0086:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = V_1;
		NullCheck(L_26);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = L_26->____next;
		V_1 = L_27;
	}

IL_008d:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = V_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_28) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_29))))
		{
			goto IL_0057;
		}
	}
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_30 = __this->____pq;
		NullCheck(L_30);
		PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF(L_30, PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	{
		__this->____pq = (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pq), (void*)(PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_004f;
	}

IL_0013:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3->____next;
		V_1 = L_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____anEdge;
		V_2 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_2;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Lnext;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_9) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_10))))
		{
			goto IL_004d;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_2;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Onext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		Geom_AddWinding_m6EF7D9E71F27FA2029D3464EBF2828972B0D9A0B(L_12, L_13, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_14 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_15 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_2;
		NullCheck(L_14);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_14, L_15, L_16, NULL);
	}

IL_004d:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = V_1;
		V_0 = L_17;
	}

IL_004f:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_19 = __this->____mesh;
		NullCheck(L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = L_19->____fHead;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_18) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_20))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	{
		Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC(__this, NULL);
		Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA(__this, NULL);
		Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4(__this, NULL);
		Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8(__this, NULL);
		goto IL_0059;
	}

IL_001a:
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_0 = __this->____pq;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86(L_0, NULL);
		V_1 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = V_0;
		bool L_5;
		L_5 = Geom_VertEq_m632C1C0D1944780014311BF1AC8BFD0E53CD4A41(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_6 = __this->____pq;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330(L_6, NULL);
		V_1 = L_7;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____anEdge;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = V_1;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____anEdge;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_9, L_11, NULL);
		goto IL_001a;
	}

IL_0052:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = V_0;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_12, NULL);
	}

IL_0059:
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_13 = __this->____pq;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14;
		L_14 = PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330(L_13, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14;
		V_0 = L_15;
		if (L_15)
		{
			goto IL_001a;
		}
	}
	{
		Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E(__this, NULL);
		Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784(__this, NULL);
		Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* Tess_get_Vertices_mDBE386129B4DF1C7D1F16A937D2D47FFF3567E45 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_0 = __this->____vertices;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Tess_get_Elements_mED221BAB8BAAAC0EA4160C2C5DA5E38803883D7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____elements;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_ElementCount_m1D5AF4E9A9295BA0D57AA883D2C226D32C154E3F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____elementCount;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_m9C50EAA56E0DBFFB1B779D0A921ECA9C7984E7A2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* L_0 = (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04*)il2cpp_codegen_object_new(DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var);
		DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD(L_0, NULL);
		Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		__this->___SUnitX = (1.0f);
		__this->___SentinelCoord = (4.00000006E+30f);
		__this->___UsePooling = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero;
		__this->____normal = L_0;
		V_0 = (0.0f);
		__this->____bmaxY = (0.0f);
		float L_1 = V_0;
		float L_2 = L_1;
		V_0 = L_2;
		__this->____bmaxX = L_2;
		float L_3 = V_0;
		float L_4 = L_3;
		V_0 = L_4;
		__this->____bminY = L_4;
		float L_5 = V_0;
		__this->____bminX = L_5;
		__this->____windingRule = 0;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_6 = ___0_pool;
		__this->____pool = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool), (void*)L_6);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_7 = __this->____pool;
		if (L_7)
		{
			goto IL_0075;
		}
	}
	{
		NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D* L_8 = (NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D*)il2cpp_codegen_object_new(NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D_il2cpp_TypeInfo_var);
		NullPool__ctor_mA9794AE1C4917832E71637ADA7B763D44F1AADCA(L_8, NULL);
		__this->____pool = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool), (void*)L_8);
	}

IL_0075:
	{
		__this->____mesh = (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh), (void*)(Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL);
		__this->____vertices = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL);
		__this->____vertexCount = 0;
		__this->____elements = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____elementCount = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___0_norm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_8 = NULL;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____vHead;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1->____next;
		V_0 = L_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_0;
		NullCheck(L_5);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_5->____coords);
		float L_7 = L_6->___X;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_7);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = V_0;
		NullCheck(L_9);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_9->____coords);
		float L_11 = L_10->___Y;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_11);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = L_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = V_0;
		NullCheck(L_13);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_14 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_13->____coords);
		float L_15 = L_14->___Z;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_15);
		V_1 = L_12;
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_16 = (VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)SZArrayNew(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_17 = L_16;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_18);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_19 = L_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = V_0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_20);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_21 = L_19;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_22);
		V_2 = L_21;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_23;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = V_0;
		NullCheck(L_25);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_26 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_25->____coords);
		float L_27 = L_26->___X;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_27);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_24;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = V_0;
		NullCheck(L_29);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_30 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_29->____coords);
		float L_31 = L_30->___Y;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_31);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_28;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = V_0;
		NullCheck(L_33);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_34 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_33->____coords);
		float L_35 = L_34->___Z;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_35);
		V_3 = L_32;
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_36 = (VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)SZArrayNew(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_37 = L_36;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_38);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_39 = L_37;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = V_0;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_40);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_41 = L_39;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = V_0;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_42);
		V_4 = L_41;
		goto IL_0175;
	}

IL_009f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_0;
		NullCheck(L_43);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_44 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_43->____coords);
		float L_45 = L_44->___X;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = 0;
		float L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((float)L_45) < ((float)L_48))))
		{
			goto IL_00c1;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_50 = V_0;
		NullCheck(L_50);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_51 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_50->____coords);
		float L_52 = L_51->___X;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_52);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_53 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = V_0;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_54);
	}

IL_00c1:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = V_0;
		NullCheck(L_55);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_56 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_55->____coords);
		float L_57 = L_56->___Y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = 1;
		float L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((!(((float)L_57) < ((float)L_60))))
		{
			goto IL_00e3;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = V_0;
		NullCheck(L_62);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_63 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_62->____coords);
		float L_64 = L_63->___Y;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_64);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_65 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = V_0;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_66);
	}

IL_00e3:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = V_0;
		NullCheck(L_67);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_68 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_67->____coords);
		float L_69 = L_68->___Z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_70 = V_1;
		NullCheck(L_70);
		int32_t L_71 = 2;
		float L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((float)L_69) < ((float)L_72))))
		{
			goto IL_0105;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_73 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_74 = V_0;
		NullCheck(L_74);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_75 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_74->____coords);
		float L_76 = L_75->___Z;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_76);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_77 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = V_0;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_78);
	}

IL_0105:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_79 = V_0;
		NullCheck(L_79);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_80 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_79->____coords);
		float L_81 = L_80->___X;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = 0;
		float L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		if ((!(((float)L_81) > ((float)L_84))))
		{
			goto IL_0128;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = V_0;
		NullCheck(L_86);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_87 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_86->____coords);
		float L_88 = L_87->___X;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_88);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_89 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_90 = V_0;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_90);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_90);
	}

IL_0128:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_91 = V_0;
		NullCheck(L_91);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_92 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_91->____coords);
		float L_93 = L_92->___Y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_94 = V_3;
		NullCheck(L_94);
		int32_t L_95 = 1;
		float L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		if ((!(((float)L_93) > ((float)L_96))))
		{
			goto IL_014b;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_97 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_98 = V_0;
		NullCheck(L_98);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_99 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_98->____coords);
		float L_100 = L_99->___Y;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_100);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_101 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_102 = V_0;
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_102);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_102);
	}

IL_014b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_103 = V_0;
		NullCheck(L_103);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_104 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_103->____coords);
		float L_105 = L_104->___Z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_106 = V_3;
		NullCheck(L_106);
		int32_t L_107 = 2;
		float L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		if ((!(((float)L_105) > ((float)L_108))))
		{
			goto IL_016e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_109 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_110 = V_0;
		NullCheck(L_110);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_111 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_110->____coords);
		float L_112 = L_111->___Z;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_112);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_113 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_114 = V_0;
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_114);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_114);
	}

IL_016e:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_115 = V_0;
		NullCheck(L_115);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_116 = L_115->____next;
		V_0 = L_116;
	}

IL_0175:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_117 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_118 = __this->____mesh;
		NullCheck(L_118);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_119 = L_118->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_117) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_119))))
		{
			goto IL_009f;
		}
	}
	{
		V_5 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_120 = V_3;
		NullCheck(L_120);
		int32_t L_121 = 1;
		float L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_123 = V_1;
		NullCheck(L_123);
		int32_t L_124 = 1;
		float L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_126 = V_3;
		NullCheck(L_126);
		int32_t L_127 = 0;
		float L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_129 = V_1;
		NullCheck(L_129);
		int32_t L_130 = 0;
		float L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		if ((!(((float)((float)il2cpp_codegen_subtract(L_122, L_125))) > ((float)((float)il2cpp_codegen_subtract(L_128, L_131))))))
		{
			goto IL_019c;
		}
	}
	{
		V_5 = 1;
	}

IL_019c:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_132 = V_3;
		NullCheck(L_132);
		int32_t L_133 = 2;
		float L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_135 = V_1;
		NullCheck(L_135);
		int32_t L_136 = 2;
		float L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_138 = V_3;
		int32_t L_139 = V_5;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		float L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_142 = V_1;
		int32_t L_143 = V_5;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		float L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		if ((!(((float)((float)il2cpp_codegen_subtract(L_134, L_137))) > ((float)((float)il2cpp_codegen_subtract(L_141, L_145))))))
		{
			goto IL_01b1;
		}
	}
	{
		V_5 = 2;
	}

IL_01b1:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_146 = V_1;
		int32_t L_147 = V_5;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		float L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_150 = V_3;
		int32_t L_151 = V_5;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		float L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		if ((!(((float)L_149) >= ((float)L_153))))
		{
			goto IL_01d6;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_154 = ___0_norm;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_155;
		memset((&L_155), 0, sizeof(L_155));
		Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C((&L_155), (0.0f), (0.0f), (1.0f), NULL);
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_154 = L_155;
		return;
	}

IL_01d6:
	{
		V_6 = (0.0f);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_156 = V_2;
		int32_t L_157 = V_5;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_160 = V_4;
		int32_t L_161 = V_5;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		V_8 = L_163;
		NullCheck(L_159);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_164 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_159->____coords);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_165 = V_8;
		NullCheck(L_165);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_166 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_165->____coords);
		Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008(L_164, L_166, (&V_9), NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_167 = __this->____mesh;
		NullCheck(L_167);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_168 = L_167->____vHead;
		NullCheck(L_168);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_169 = L_168->____next;
		V_0 = L_169;
		goto IL_02e1;
	}

IL_0211:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_170 = V_0;
		NullCheck(L_170);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_171 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_170->____coords);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_172 = V_8;
		NullCheck(L_172);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_173 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_172->____coords);
		Vec3_Sub_mFA0434EA3AC2F8C1A173BF40E85FCF41120FB008(L_171, L_173, (&V_10), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_174 = V_9;
		float L_175 = L_174.___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_176 = V_10;
		float L_177 = L_176.___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_178 = V_9;
		float L_179 = L_178.___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_180 = V_10;
		float L_181 = L_180.___Y;
		(&V_11)->___X = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_175, L_177)), ((float)il2cpp_codegen_multiply(L_179, L_181))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_182 = V_9;
		float L_183 = L_182.___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_184 = V_10;
		float L_185 = L_184.___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_186 = V_9;
		float L_187 = L_186.___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_188 = V_10;
		float L_189 = L_188.___Z;
		(&V_11)->___Y = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_183, L_185)), ((float)il2cpp_codegen_multiply(L_187, L_189))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_190 = V_9;
		float L_191 = L_190.___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_192 = V_10;
		float L_193 = L_192.___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_194 = V_9;
		float L_195 = L_194.___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_196 = V_10;
		float L_197 = L_196.___X;
		(&V_11)->___Z = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_191, L_193)), ((float)il2cpp_codegen_multiply(L_195, L_197))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_198 = V_11;
		float L_199 = L_198.___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_200 = V_11;
		float L_201 = L_200.___X;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_202 = V_11;
		float L_203 = L_202.___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_204 = V_11;
		float L_205 = L_204.___Y;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_206 = V_11;
		float L_207 = L_206.___Z;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_208 = V_11;
		float L_209 = L_208.___Z;
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_199, L_201)), ((float)il2cpp_codegen_multiply(L_203, L_205)))), ((float)il2cpp_codegen_multiply(L_207, L_209))));
		float L_210 = V_7;
		float L_211 = V_6;
		if ((!(((float)L_210) > ((float)L_211))))
		{
			goto IL_02da;
		}
	}
	{
		float L_212 = V_7;
		V_6 = L_212;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_213 = ___0_norm;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_214 = V_11;
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_213 = L_214;
	}

IL_02da:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_215 = V_0;
		NullCheck(L_215);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_216 = L_215->____next;
		V_0 = L_216;
	}

IL_02e1:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_217 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_218 = __this->____mesh;
		NullCheck(L_218);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_219 = L_218->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_217) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_219))))
		{
			goto IL_0211;
		}
	}
	{
		float L_220 = V_6;
		if ((!(((float)L_220) <= ((float)(0.0f)))))
		{
			goto IL_031c;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_221 = ___0_norm;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_222 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero;
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_221 = L_222;
		int32_t L_223;
		L_223 = Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F((&V_9), NULL);
		V_5 = L_223;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_224 = ___0_norm;
		int32_t L_225 = V_5;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_224, L_225, (1.0f), NULL);
	}

IL_031c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	{
		V_0 = (0.0f);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next;
		V_1 = L_2;
		goto IL_0037;
	}

IL_0019:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_1;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____anEdge;
		NullCheck(L_4);
		int32_t L_5 = L_4->____winding;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		float L_6 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_1;
		float L_8;
		L_8 = MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859(L_7, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_6, L_8));
	}

IL_0030:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = V_1;
		NullCheck(L_9);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = L_9->____next;
		V_1 = L_10;
	}

IL_0037:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_12 = __this->____mesh;
		NullCheck(L_12);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = L_12->____fHead;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_11) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_13))))
		{
			goto IL_0019;
		}
	}
	{
		float L_14 = V_0;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_15 = __this->____mesh;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____vHead;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = L_16->____next;
		V_2 = L_17;
		goto IL_0074;
	}

IL_0060:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = V_2;
		NullCheck(L_19);
		float L_20 = L_19->____t;
		NullCheck(L_18);
		L_18->____t = ((-L_20));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = V_2;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = L_21->____next;
		V_2 = L_22;
	}

IL_0074:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = V_2;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_24 = __this->____mesh;
		NullCheck(L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = L_24->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_23) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_25))))
		{
			goto IL_0060;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_26 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____tUnit);
		Vec3_Neg_m615687EA76621EE708A5F7836B33DF54DC67E58C(L_26, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	float V_6 = 0.0f;
	int32_t G_B6_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B5_1 = NULL;
	float G_B7_0 = 0.0f;
	int32_t G_B7_1 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B8_1 = NULL;
	float G_B10_0 = 0.0f;
	int32_t G_B10_1 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B10_2 = NULL;
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = __this->____normal;
		V_0 = L_0;
		V_1 = (bool)0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = V_0;
		float L_2 = L_1.___X;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_3 = V_0;
		float L_4 = L_3.___Y;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_5 = V_0;
		float L_6 = L_5.___Z;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907(__this, (&V_0), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_7 = V_0;
		__this->____normal = L_7;
		V_1 = (bool)1;
	}

IL_0041:
	{
		int32_t L_8;
		L_8 = Vec3_LongAxis_mE37BAB8C067EE68DBA8BC23061B6A0F1F175645F((&V_0), NULL);
		V_2 = L_8;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_9 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____sUnit);
		int32_t L_10 = V_2;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_9, L_10, (0.0f), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____sUnit);
		int32_t L_12 = V_2;
		float L_13 = __this->___SUnitX;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_11, ((int32_t)(((int32_t)il2cpp_codegen_add(L_12, 1))%3)), L_13, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_14 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____sUnit);
		int32_t L_15 = V_2;
		float L_16 = __this->___SUnitY;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_14, ((int32_t)(((int32_t)il2cpp_codegen_add(L_15, 2))%3)), L_16, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_17 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____tUnit);
		int32_t L_18 = V_2;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_17, L_18, (0.0f), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_19 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____tUnit);
		int32_t L_20 = V_2;
		int32_t L_21 = V_2;
		float L_22;
		L_22 = Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318((&V_0), L_21, NULL);
		if ((((float)L_22) > ((float)(0.0f))))
		{
			G_B6_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_20, 1))%3));
			G_B6_1 = L_19;
			goto IL_00b9;
		}
		G_B5_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_20, 1))%3));
		G_B5_1 = L_19;
	}
	{
		float L_23 = __this->___SUnitY;
		G_B7_0 = L_23;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_00c0;
	}

IL_00b9:
	{
		float L_24 = __this->___SUnitY;
		G_B7_0 = ((-L_24));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_00c0:
	{
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(G_B7_2, G_B7_1, G_B7_0, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_25 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____tUnit);
		int32_t L_26 = V_2;
		int32_t L_27 = V_2;
		float L_28;
		L_28 = Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318((&V_0), L_27, NULL);
		if ((((float)L_28) > ((float)(0.0f))))
		{
			G_B9_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_26, 2))%3));
			G_B9_1 = L_25;
			goto IL_00e8;
		}
		G_B8_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_26, 2))%3));
		G_B8_1 = L_25;
	}
	{
		float L_29 = __this->___SUnitX;
		G_B10_0 = ((-L_29));
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00ee;
	}

IL_00e8:
	{
		float L_30 = __this->___SUnitX;
		G_B10_0 = L_30;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00ee:
	{
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(G_B10_2, G_B10_1, G_B10_0, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_31 = __this->____mesh;
		NullCheck(L_31);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_32 = L_31->____vHead;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____next;
		V_4 = L_33;
		goto IL_0142;
	}

IL_0107:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = V_4;
		NullCheck(L_34);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_35 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_34->____coords);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_36 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____sUnit);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = V_4;
		NullCheck(L_37);
		float* L_38 = (float*)(&L_37->____s);
		Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65(L_35, L_36, L_38, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39 = V_4;
		NullCheck(L_39);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_40 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&L_39->____coords);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_41 = (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)(&__this->____tUnit);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = V_4;
		NullCheck(L_42);
		float* L_43 = (float*)(&L_42->____t);
		Vec3_Dot_m6A3064B83CC6528E85FEB9E6F8D62699AFCE3E65(L_40, L_41, L_43, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = V_4;
		NullCheck(L_44);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45 = L_44->____next;
		V_4 = L_45;
	}

IL_0142:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = V_4;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_47 = __this->____mesh;
		NullCheck(L_47);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_48 = L_47->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_46) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_48))))
		{
			goto IL_0107;
		}
	}
	{
		bool L_49 = V_1;
		if (!L_49)
		{
			goto IL_015a;
		}
	}
	{
		Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469(__this, NULL);
	}

IL_015a:
	{
		V_3 = (bool)1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_50 = __this->____mesh;
		NullCheck(L_50);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = L_50->____vHead;
		NullCheck(L_51);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = L_51->____next;
		V_5 = L_52;
		goto IL_0223;
	}

IL_0173:
	{
		bool L_53 = V_3;
		if (!L_53)
		{
			goto IL_01aa;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = V_5;
		NullCheck(L_54);
		float L_55 = L_54->____s;
		float L_56 = L_55;
		V_6 = L_56;
		__this->____bmaxX = L_56;
		float L_57 = V_6;
		__this->____bminX = L_57;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = V_5;
		NullCheck(L_58);
		float L_59 = L_58->____t;
		float L_60 = L_59;
		V_6 = L_60;
		__this->____bmaxY = L_60;
		float L_61 = V_6;
		__this->____bminY = L_61;
		V_3 = (bool)0;
		goto IL_021a;
	}

IL_01aa:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = V_5;
		NullCheck(L_62);
		float L_63 = L_62->____s;
		float L_64 = __this->____bminX;
		if ((!(((float)L_63) < ((float)L_64))))
		{
			goto IL_01c6;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_65 = V_5;
		NullCheck(L_65);
		float L_66 = L_65->____s;
		__this->____bminX = L_66;
	}

IL_01c6:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = V_5;
		NullCheck(L_67);
		float L_68 = L_67->____s;
		float L_69 = __this->____bmaxX;
		if ((!(((float)L_68) > ((float)L_69))))
		{
			goto IL_01e2;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70 = V_5;
		NullCheck(L_70);
		float L_71 = L_70->____s;
		__this->____bmaxX = L_71;
	}

IL_01e2:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = V_5;
		NullCheck(L_72);
		float L_73 = L_72->____t;
		float L_74 = __this->____bminY;
		if ((!(((float)L_73) < ((float)L_74))))
		{
			goto IL_01fe;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = V_5;
		NullCheck(L_75);
		float L_76 = L_75->____t;
		__this->____bminY = L_76;
	}

IL_01fe:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = V_5;
		NullCheck(L_77);
		float L_78 = L_77->____t;
		float L_79 = __this->____bmaxY;
		if ((!(((float)L_78) > ((float)L_79))))
		{
			goto IL_021a;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_80 = V_5;
		NullCheck(L_80);
		float L_81 = L_80->____t;
		__this->____bmaxY = L_81;
	}

IL_021a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = V_5;
		NullCheck(L_82);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83 = L_82->____next;
		V_5 = L_83;
	}

IL_0223:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_84 = V_5;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_85 = __this->____mesh;
		NullCheck(L_85);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = L_85->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_84) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_86))))
		{
			goto IL_0173;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___0_face, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___0_face;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge;
		V_0 = L_1;
		goto IL_0010;
	}

IL_0009:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3;
		L_3 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_2, NULL);
		V_0 = L_3;
	}

IL_0010:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5;
		L_5 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_4, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org;
		bool L_8;
		L_8 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_5, L_7, NULL);
		if (L_8)
		{
			goto IL_0009;
		}
	}
	{
		goto IL_002c;
	}

IL_0025:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_0;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Lnext;
		V_0 = L_10;
	}

IL_002c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = L_11->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14;
		L_14 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_13, NULL);
		bool L_15;
		L_15 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_0025;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_0;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17;
		L_17 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_16, NULL);
		V_1 = L_17;
		goto IL_0121;
	}

IL_004b:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_0;
		NullCheck(L_18);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19;
		L_19 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_18, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20->____Org;
		bool L_22;
		L_22 = Geom_VertLeq_m25B97ECD29F77FDDE4227AB1EFC084A682E77819(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_0081;
	}

IL_0063:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_23 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_24 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_1;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_1;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28;
		L_28 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_23, L_24, L_26, L_27, NULL);
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____Sym;
		V_1 = L_29;
	}

IL_0081:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_1;
		NullCheck(L_30);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = L_30->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_0;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_31) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_32)))
		{
			goto IL_00ba;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		NullCheck(L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = L_33->____Lnext;
		bool L_35;
		L_35 = Geom_EdgeGoesLeft_mB470DCF8C4FD679BB83397B8DE58638B3896DC9B(L_34, NULL);
		if (L_35)
		{
			goto IL_0063;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_1;
		NullCheck(L_36);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = L_36->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39;
		L_39 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_38, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = L_40->____Lnext;
		NullCheck(L_41);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42;
		L_42 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_41, NULL);
		float L_43;
		L_43 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_37, L_39, L_42, NULL);
		if ((((float)L_43) <= ((float)(0.0f))))
		{
			goto IL_0063;
		}
	}

IL_00ba:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_1;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45;
		L_45 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_44, NULL);
		V_1 = L_45;
		goto IL_0121;
	}

IL_00c3:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_46 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_47 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_0;
		NullCheck(L_49);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50;
		L_50 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_49, NULL);
		NullCheck(L_46);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51;
		L_51 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_46, L_47, L_48, L_50, NULL);
		NullCheck(L_51);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = L_51->____Sym;
		V_0 = L_52;
	}

IL_00e1:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_1;
		NullCheck(L_53);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = L_53->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_0;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_54) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_55)))
		{
			goto IL_011a;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = V_0;
		NullCheck(L_56);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57;
		L_57 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_56, NULL);
		bool L_58;
		L_58 = Geom_EdgeGoesRight_m5B4F1EB6223DBC3AD38DC58AE036CA922E1319CE(L_57, NULL);
		if (L_58)
		{
			goto IL_00c3;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_0;
		NullCheck(L_59);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_60;
		L_60 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_59, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_0;
		NullCheck(L_61);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = L_61->____Org;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = V_0;
		NullCheck(L_63);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64;
		L_64 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_63, NULL);
		NullCheck(L_64);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_65 = L_64->____Org;
		float L_66;
		L_66 = Geom_EdgeSign_m1E254A34EA256A3A1943AA258152B19C1BA550F4(L_60, L_62, L_65, NULL);
		if ((((float)L_66) >= ((float)(0.0f))))
		{
			goto IL_00c3;
		}
	}

IL_011a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_0;
		NullCheck(L_67);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = L_67->____Lnext;
		V_0 = L_68;
	}

IL_0121:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = V_0;
		NullCheck(L_69);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = L_69->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_71 = V_1;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_70) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_71))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_014d;
	}

IL_012f:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_72 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_73 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_74 = V_1;
		NullCheck(L_74);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_75 = L_74->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_76 = V_1;
		NullCheck(L_72);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_77;
		L_77 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_72, L_73, L_75, L_76, NULL);
		NullCheck(L_77);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_78 = L_77->____Sym;
		V_1 = L_78;
	}

IL_014d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_79 = V_1;
		NullCheck(L_79);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_80 = L_79->____Lnext;
		NullCheck(L_80);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_81 = L_80->____Lnext;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_82 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_81) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_82))))
		{
			goto IL_012f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_002b;
	}

IL_0013:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3->____next;
		V_1 = L_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_0;
		Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894(__this, L_7, NULL);
	}

IL_0029:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = V_1;
		V_0 = L_8;
	}

IL_002b:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_10 = __this->____mesh;
		NullCheck(L_10);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = L_10->____fHead;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_9) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_11))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___0_value, bool ___1_keepOnlyBoundary, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B4_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B5_1 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eHead;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_006c;
	}

IL_0013:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____next;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		NullCheck(L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6;
		L_6 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_5, NULL);
		NullCheck(L_6);
		bool L_7 = L_6->____inside;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		NullCheck(L_8);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = L_8->____Lface;
		NullCheck(L_9);
		bool L_10 = L_9->____inside;
		if ((((int32_t)L_7) == ((int32_t)L_10)))
		{
			goto IL_004c;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		NullCheck(L_12);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = L_12->____Lface;
		NullCheck(L_13);
		bool L_14 = L_13->____inside;
		if (L_14)
		{
			G_B4_0 = L_11;
			goto IL_0044;
		}
		G_B3_0 = L_11;
	}
	{
		int32_t L_15 = ___0_value;
		G_B5_0 = ((-L_15));
		G_B5_1 = G_B3_0;
		goto IL_0045;
	}

IL_0044:
	{
		int32_t L_16 = ___0_value;
		G_B5_0 = L_16;
		G_B5_1 = G_B4_0;
	}

IL_0045:
	{
		NullCheck(G_B5_1);
		G_B5_1->____winding = G_B5_0;
		goto IL_006a;
	}

IL_004c:
	{
		bool L_17 = ___1_keepOnlyBoundary;
		if (L_17)
		{
			goto IL_0058;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_0;
		NullCheck(L_18);
		L_18->____winding = 0;
		goto IL_006a;
	}

IL_0058:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_19 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_20 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		NullCheck(L_19);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_19, L_20, L_21, NULL);
	}

IL_006a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		V_0 = L_22;
	}

IL_006c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_24 = __this->____mesh;
		NullCheck(L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = L_24->____eHead;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_23) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_25))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___0_edge, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___0_edge;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1;
		L_1 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___0_edge;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3;
		L_3 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_2, NULL);
		NullCheck(L_3);
		bool L_4 = L_3->____inside;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___0_edge;
		NullCheck(L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6;
		L_6 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7 = L_6->____n;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___0_elementType, int32_t ___1_polySize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		int32_t L_0 = ___1_polySize;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_000c;
		}
	}
	{
		___1_polySize = 3;
	}

IL_000c:
	{
		int32_t L_1 = ___1_polySize;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_0022;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_2 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_3 = __this->____pool;
		int32_t L_4 = ___1_polySize;
		NullCheck(L_2);
		Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C(L_2, L_3, L_4, NULL);
	}

IL_0022:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_5 = __this->____mesh;
		NullCheck(L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = L_5->____vHead;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____next;
		V_0 = L_7;
		goto IL_0043;
	}

IL_0035:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		NullCheck(L_8);
		L_8->____n = (-1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = V_0;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____next;
		V_0 = L_10;
	}

IL_0043:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_12 = __this->____mesh;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = L_12->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_11) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_13))))
		{
			goto IL_0035;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_14 = __this->____mesh;
		NullCheck(L_14);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = L_14->____fHead;
		NullCheck(L_15);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = L_15->____next;
		V_1 = L_16;
		goto IL_00dd;
	}

IL_0064:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = V_1;
		NullCheck(L_17);
		L_17->____n = (-1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = V_1;
		NullCheck(L_18);
		bool L_19 = L_18->____inside;
		if (!L_19)
		{
			goto IL_00d6;
		}
	}
	{
		bool L_20 = __this->___NoEmptyPolygons;
		if (!L_20)
		{
			goto IL_008d;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = V_1;
		float L_22;
		L_22 = MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859(L_21, NULL);
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		float L_23;
		L_23 = fabsf(L_22);
		if ((((float)L_23) < ((float)(1.40129846E-45f))))
		{
			goto IL_00d6;
		}
	}

IL_008d:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_24 = V_1;
		NullCheck(L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = L_24->____anEdge;
		V_2 = L_25;
		V_5 = 0;
	}

IL_0097:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_2;
		NullCheck(L_26);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = L_26->____Org;
		V_0 = L_27;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->____n;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00b5;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = V_0;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		L_30->____n = L_31;
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b5:
	{
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_2;
		NullCheck(L_34);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = L_34->____Lnext;
		V_2 = L_35;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_37 = V_1;
		NullCheck(L_37);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = L_37->____anEdge;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_36) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_38))))
		{
			goto IL_0097;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_39 = V_1;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		L_39->____n = L_40;
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00d6:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_42 = V_1;
		NullCheck(L_42);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_43 = L_42->____next;
		V_1 = L_43;
	}

IL_00dd:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_44 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_45 = __this->____mesh;
		NullCheck(L_45);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_46 = L_45->____fHead;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_44) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_46))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_47 = V_3;
		__this->____elementCount = L_47;
		int32_t L_48 = ___0_elementType;
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_49, 2));
	}

IL_00fd:
	{
		int32_t L_50 = V_3;
		int32_t L_51 = ___1_polySize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_50, L_51)));
		__this->____elements = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)L_52);
		int32_t L_53 = V_4;
		__this->____vertexCount = L_53;
		int32_t L_54 = __this->____vertexCount;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_55 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)SZArrayNew(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var, (uint32_t)L_54);
		__this->____vertices = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)L_55);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_56 = __this->____mesh;
		NullCheck(L_56);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_57 = L_56->____vHead;
		NullCheck(L_57);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = L_57->____next;
		V_0 = L_58;
		goto IL_017f;
	}

IL_0137:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60 = L_59->____n;
		if ((((int32_t)L_60) == ((int32_t)(-1))))
		{
			goto IL_0178;
		}
	}
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_61 = __this->____vertices;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = V_0;
		NullCheck(L_62);
		int32_t L_63 = L_62->____n;
		NullCheck(L_61);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_64 = V_0;
		NullCheck(L_64);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_65 = L_64->____coords;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___Position = L_65;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_66 = __this->____vertices;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = L_67->____n;
		NullCheck(L_66);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = L_69->____data;
		((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___Data = L_70;
	}

IL_0178:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = V_0;
		NullCheck(L_71);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = L_71->____next;
		V_0 = L_72;
	}

IL_017f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_73 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_74 = __this->____mesh;
		NullCheck(L_74);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = L_74->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_73) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_75))))
		{
			goto IL_0137;
		}
	}
	{
		V_7 = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_76 = __this->____mesh;
		NullCheck(L_76);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_77 = L_76->____fHead;
		NullCheck(L_77);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_78 = L_77->____next;
		V_1 = L_78;
		goto IL_0280;
	}

IL_01a6:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_79 = V_1;
		NullCheck(L_79);
		bool L_80 = L_79->____inside;
		if (!L_80)
		{
			goto IL_0279;
		}
	}
	{
		bool L_81 = __this->___NoEmptyPolygons;
		if (!L_81)
		{
			goto IL_01ce;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_82 = V_1;
		float L_83;
		L_83 = MeshUtils_FaceArea_mDE166ED484B8CF884C0846D250D75774E1EBA859(L_82, NULL);
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		float L_84;
		L_84 = fabsf(L_83);
		if ((((float)L_84) < ((float)(1.40129846E-45f))))
		{
			goto IL_0279;
		}
	}

IL_01ce:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_85 = V_1;
		NullCheck(L_85);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_86 = L_85->____anEdge;
		V_2 = L_86;
		V_5 = 0;
	}

IL_01d8:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_87 = V_2;
		NullCheck(L_87);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_88 = L_87->____Org;
		V_0 = L_88;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____elements;
		int32_t L_90 = V_7;
		int32_t L_91 = L_90;
		V_7 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_92 = V_0;
		NullCheck(L_92);
		int32_t L_93 = L_92->____n;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (int32_t)L_93);
		int32_t L_94 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_95 = V_2;
		NullCheck(L_95);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_96 = L_95->____Lnext;
		V_2 = L_96;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_97 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_98 = V_1;
		NullCheck(L_98);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_99 = L_98->____anEdge;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_97) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_99))))
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_100 = V_5;
		V_6 = L_100;
		goto IL_0224;
	}

IL_020f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = __this->____elements;
		int32_t L_102 = V_7;
		int32_t L_103 = L_102;
		V_7 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (int32_t)(-1));
		int32_t L_104 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0224:
	{
		int32_t L_105 = V_6;
		int32_t L_106 = ___1_polySize;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_020f;
		}
	}
	{
		int32_t L_107 = ___0_elementType;
		if ((!(((uint32_t)L_107) == ((uint32_t)1))))
		{
			goto IL_0279;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_108 = V_1;
		NullCheck(L_108);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_109 = L_108->____anEdge;
		V_2 = L_109;
	}

IL_0234:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____elements;
		int32_t L_111 = V_7;
		int32_t L_112 = L_111;
		V_7 = ((int32_t)il2cpp_codegen_add(L_112, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_113 = V_2;
		int32_t L_114;
		L_114 = Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8(__this, L_113, NULL);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (int32_t)L_114);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_115 = V_2;
		NullCheck(L_115);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_116 = L_115->____Lnext;
		V_2 = L_116;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_117 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_118 = V_1;
		NullCheck(L_118);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_119 = L_118->____anEdge;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_117) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_119))))
		{
			goto IL_0234;
		}
	}
	{
		int32_t L_120 = V_5;
		V_6 = L_120;
		goto IL_0274;
	}

IL_025f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = __this->____elements;
		int32_t L_122 = V_7;
		int32_t L_123 = L_122;
		V_7 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (int32_t)(-1));
		int32_t L_124 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_0274:
	{
		int32_t L_125 = V_6;
		int32_t L_126 = ___1_polySize;
		if ((((int32_t)L_125) < ((int32_t)L_126)))
		{
			goto IL_025f;
		}
	}

IL_0279:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_127 = V_1;
		NullCheck(L_127);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_128 = L_127->____next;
		V_1 = L_128;
	}

IL_0280:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_129 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_130 = __this->____mesh;
		NullCheck(L_130);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_131 = L_130->____fHead;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_129) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_131))))
		{
			goto IL_01a6;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		__this->____vertexCount = 0;
		__this->____elementCount = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_0065;
	}

IL_0026:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->____inside;
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____anEdge;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6;
		V_1 = L_7;
		V_2 = L_7;
	}

IL_0037:
	{
		int32_t L_8 = __this->____vertexCount;
		__this->____vertexCount = ((int32_t)il2cpp_codegen_add(L_8, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Lnext;
		V_1 = L_10;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_11) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_13 = __this->____elementCount;
		__this->____elementCount = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005e:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = V_0;
		NullCheck(L_14);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = L_14->____next;
		V_0 = L_15;
	}

IL_0065:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_17 = __this->____mesh;
		NullCheck(L_17);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = L_17->____fHead;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_16) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_18))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_19 = __this->____elementCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_19, 2)));
		__this->____elements = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)L_20);
		int32_t L_21 = __this->____vertexCount;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_22 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)SZArrayNew(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->____vertices = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)L_22);
		V_5 = 0;
		V_6 = 0;
		V_3 = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_23 = __this->____mesh;
		NullCheck(L_23);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_24 = L_23->____fHead;
		NullCheck(L_24);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_25 = L_24->____next;
		V_0 = L_25;
		goto IL_0148;
	}

IL_00b5:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->____inside;
		if (!L_27)
		{
			goto IL_0141;
		}
	}
	{
		V_4 = 0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_28 = V_0;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____anEdge;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = L_29;
		V_1 = L_30;
		V_2 = L_30;
	}

IL_00cc:
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_31 = __this->____vertices;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		NullCheck(L_33);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = L_33->____Org;
		NullCheck(L_34);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_35 = L_34->____coords;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___Position = L_35;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_36 = __this->____vertices;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39 = L_38->____Org;
		NullCheck(L_39);
		int32_t L_40 = L_39->____data;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___Data = L_40;
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_1;
		NullCheck(L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = L_43->____Lnext;
		V_1 = L_44;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_45) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_46))))
		{
			goto IL_00cc;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = __this->____elements;
		int32_t L_48 = V_6;
		int32_t L_49 = L_48;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_3;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (int32_t)L_50);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = __this->____elements;
		int32_t L_52 = V_6;
		int32_t L_53 = L_52;
		V_6 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_4;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_54);
		int32_t L_55 = V_3;
		int32_t L_56 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_55, L_56));
	}

IL_0141:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_57 = V_0;
		NullCheck(L_57);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_58 = L_57->____next;
		V_0 = L_58;
	}

IL_0148:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_59 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_60 = __this->____mesh;
		NullCheck(L_60);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_61 = L_60->____fHead;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_59) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_61))))
		{
			goto IL_00b5;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___0_vertices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_005b;
	}

IL_000a:
	{
		RuntimeObject* L_0 = ___0_vertices;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_2;
		L_2 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		RuntimeObject* L_3 = ___0_vertices;
		int32_t L_4 = V_1;
		RuntimeObject* L_5 = ___0_vertices;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_7;
		L_7 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_3, ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))%L_6)));
		V_3 = L_7;
		float L_8 = V_0;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_9 = V_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_10 = L_9.___Position;
		float L_11 = L_10.___X;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_12 = V_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_13 = L_12.___Position;
		float L_14 = L_13.___Y;
		V_0 = ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_11, L_14))));
		float L_15 = V_0;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_16 = V_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_17 = L_16.___Position;
		float L_18 = L_17.___Y;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_19 = V_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_20 = L_19.___Position;
		float L_21 = L_20.___X;
		V_0 = ((float)il2cpp_codegen_subtract(L_15, ((float)il2cpp_codegen_multiply(L_18, L_21))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005b:
	{
		int32_t L_23 = V_1;
		RuntimeObject* L_24 = ___0_vertices;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_24);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_000a;
		}
	}
	{
		float L_26 = V_0;
		return ((float)il2cpp_codegen_multiply((0.5f), L_26));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_mF667311A04886C578E9808D715A4D6470D0AD5A5 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) 
{
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_0 = ___0_vertices;
		int32_t L_1 = ___1_forceOrientation;
		Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887(__this, (RuntimeObject*)L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_m8EDE4A726EAE9475970B07B9ABA4D7F0F8D1674E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_vertices;
		int32_t L_1 = ___1_forceOrientation;
		Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B17_0 = 0;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool;
		NullCheck(L_1);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_2;
		L_2 = GenericVirtualFuncInvoker0< Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* >::Invoke(IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var, L_1);
		__this->____mesh = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh), (void*)L_2);
	}

IL_0019:
	{
		V_0 = (bool)0;
		int32_t L_3 = ___1_forceOrientation;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_4 = ___0_vertices;
		float L_5;
		L_5 = Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841(__this, L_4, NULL);
		V_2 = L_5;
		int32_t L_6 = ___1_forceOrientation;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		float L_7 = V_2;
		if ((((float)L_7) < ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}

IL_0032:
	{
		int32_t L_8 = ___1_forceOrientation;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0040;
		}
	}
	{
		float L_9 = V_2;
		G_B9_0 = ((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		goto IL_0044;
	}

IL_0040:
	{
		G_B9_0 = 0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B9_0 = 1;
	}

IL_0044:
	{
		V_0 = (bool)G_B9_0;
	}

IL_0045:
	{
		V_1 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		V_3 = 0;
		goto IL_00f0;
	}

IL_004e:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		if (L_10)
		{
			goto IL_007d;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_11 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_12 = __this->____pool;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13;
		L_13 = Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7(L_11, L_12, NULL);
		V_1 = L_13;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_14 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_15 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Sym;
		NullCheck(L_14);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_14, L_15, L_16, L_18, NULL);
		goto IL_0097;
	}

IL_007d:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_19 = __this->____mesh;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_20 = __this->____pool;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_1;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22;
		L_22 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_19, L_20, L_21, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = L_23->____Lnext;
		V_1 = L_24;
	}

IL_0097:
	{
		bool L_25 = V_0;
		if (L_25)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_26 = V_3;
		G_B17_0 = L_26;
		goto IL_00a7;
	}

IL_009d:
	{
		RuntimeObject* L_27 = ___0_vertices;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_27);
		int32_t L_29 = V_3;
		G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_28, 1)), L_29));
	}

IL_00a7:
	{
		V_4 = G_B17_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_1;
		NullCheck(L_30);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = L_30->____Org;
		RuntimeObject* L_32 = ___0_vertices;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_34;
		L_34 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_32, L_33);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_35 = L_34.___Position;
		NullCheck(L_31);
		L_31->____coords = L_35;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_1;
		NullCheck(L_36);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = L_36->____Org;
		RuntimeObject* L_38 = ___0_vertices;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_40;
		L_40 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_38, L_39);
		int32_t L_41 = L_40.___Data;
		NullCheck(L_37);
		L_37->____data = L_41;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_1;
		NullCheck(L_42);
		L_42->____winding = 1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_1;
		NullCheck(L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = L_43->____Sym;
		NullCheck(L_44);
		L_44->____winding = (-1);
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00f0:
	{
		int32_t L_46 = V_3;
		RuntimeObject* L_47 = ___0_vertices;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_47);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_004e;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_Tessellate_m1A288974947B0D69A8FC26556C151259C8C8418E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___0_windingRule, int32_t ___1_elementType, int32_t ___2_polySize, CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* ___3_combineCallback, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___4_normal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m004092468BAD1B30CA23F97F4F00ED69D37E7C01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = ___4_normal;
		__this->____normal = L_0;
		__this->____vertices = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL);
		__this->____elements = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		int32_t L_1 = ___0_windingRule;
		__this->____windingRule = L_1;
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_2 = ___3_combineCallback;
		__this->____combineCallback = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____combineCallback), (void*)L_2);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_3 = __this->____mesh;
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2(__this, NULL);
		Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD(__this, NULL);
		int32_t L_4 = ___1_elementType;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A(__this, 1, (bool)1, NULL);
		goto IL_004e;
	}

IL_0048:
	{
		Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91(__this, NULL);
	}

IL_004e:
	{
		int32_t L_5 = ___1_elementType;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83(__this, NULL);
		goto IL_0062;
	}

IL_005a:
	{
		int32_t L_6 = ___1_elementType;
		int32_t L_7 = ___2_polySize;
		Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B(__this, L_6, L_7, NULL);
	}

IL_0062:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_8 = __this->____pool;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_9 = __this->____mesh;
		NullCheck(L_8);
		GenericVirtualActionInvoker1< Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* >::Invoke(IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m004092468BAD1B30CA23F97F4F00ED69D37E7C01_RuntimeMethod_var, L_8, L_9);
		__this->____mesh = (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh), (void*)(Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Init_m80C01AA8B6EF1AF955B6E6D038266AC164C7C7B8 (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Reset_m48644BA3A77C7E987752B537061AB5CE6ADD78DD (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___0_pool, const RuntimeMethod* method) 
{
	{
		__this->____eUp = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eUp), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		__this->____nodeUp = (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodeUp), (void*)(Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*)NULL);
		__this->____windingNumber = 0;
		__this->____inside = (bool)0;
		__this->____sentinel = (bool)0;
		__this->____dirty = (bool)0;
		__this->____fixUpperEdge = (bool)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion__ctor_m30F0FDCDC7ACA4654AE05183BB52C250FFD904C2 (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mD7A2D36CB7A7980370FD0F66BF3B59325C1EC9EB (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, int32_t ___1_data, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = ___0_position;
		__this->___Position = L_0;
		int32_t L_1 = ___1_data;
		__this->___Data = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = __this->___Position;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = __this->___Data;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F>(__this);
	String_t* _returnValue;
	_returnValue = ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A(_thisAdjusted, method);
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
int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_Multicast(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* currentDelegate = reinterpret_cast<CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_position, ___1_data, ___2_weights, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_OpenStatic(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_position, ___1_data, ___2_weights, method);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, int32_t*, float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	int32_t* ____1_data_marshaled = NULL;
	if (___1_data != NULL)
	{
		____1_data_marshaled = reinterpret_cast<int32_t*>((___1_data)->GetAddressAtUnchecked(0));
	}

	float* ____2_weights_marshaled = NULL;
	if (___2_weights != NULL)
	{
		____2_weights_marshaled = reinterpret_cast<float*>((___2_weights)->GetAddressAtUnchecked(0));
	}

	int32_t returnValue = il2cppPInvokeFunc(___0_position, ____1_data_marshaled, ____2_weights_marshaled);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineCallback__ctor_m4C08DD9F36BCA4F132C1AE0D7A6FAA7540EC1C47 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_OpenStatic;
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
	__this->___extra_arg = (intptr_t)CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, ___1_data, ___2_weights, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_inline (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, ___1_data, ___2_weights, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Node_get_Key_mFF1F01E3EE64D682447C641755A0761F0FF8FE7A_gshared_inline (Node_t41D8E72C8400B864376C754DA1C76227BC210071* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->____key;
		return L_0;
	}
}
