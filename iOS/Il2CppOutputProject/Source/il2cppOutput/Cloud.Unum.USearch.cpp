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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
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

struct Dictionary_2_tA1C10CF9D35962FF0289095A43DEE774B7F13C47;
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354;
struct List_1_tA389B1109F43128C89C6358C6B56C819460CF5B3;
struct List_1_t0845A5AAFB6B816C6E2719A0588604CE3A080FDC;
struct ReadOnlyCollection_1_t15A54E961DBC027444DA89894B8AD689A38CE9AC;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct USearchException_t5DB7C3006A9F0CDF3CE2FDBAA131FE0E2957CBB9;
struct USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41;
struct ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4;
struct FilterCallback_t054E59DACA7991125F2791154689E66A75A6D8E2;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* USearchException_t5DB7C3006A9F0CDF3CE2FDBAA131FE0E2957CBB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral48091DF193DFA3847A6BA17BE7D400203CC2E68B;
IL2CPP_EXTERN_C String_t* _stringLiteral5BD01AF8925658D386F373DF631A5D1D859B7D50;
IL2CPP_EXTERN_C String_t* _stringLiteral869265B8B7F041503D1BE7B11948EEC054710B74;
IL2CPP_EXTERN_C String_t* _stringLiteralD21996E88DE5ED8CE4241E2E32F865E0A9FB32B2;
IL2CPP_EXTERN_C const RuntimeMethod* USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* USearchIndex_Load_m7FEC1255CE3F49F354B1CB298572CBFD84F48BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* USearchIndex_Remove_mBF3C1DFB1BD01A160FBC7489A60574DAE330E059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* USearchIndex_Search_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2E5B62B15F2CEC85A6714C8E9CD0FA7BB74EBEDB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28;;
struct IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke;
struct IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tD7BF4D876A43B9452DBEF003F33A2E3ED288674F 
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct NativeMethods_t584FE3840E9095703664AB879390C3F0FDD376E7  : public RuntimeObject
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
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	bool ___hasValue;
	int64_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
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
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
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
struct CompressionLevel_t6077A887918BD6DACDD8D3F0D660D157A604B1E1 
{
	int32_t ___value__;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
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
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	int32_t ___value__;
};
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct MetricKind_tB8007BDC4C65BE3C95B8F864FF06D0046F6BC010 
{
	uint32_t ___value__;
};
struct ScalarKind_t4B0220B4E5B20727714DBC01443816FA8EB37586 
{
	uint32_t ___value__;
};
struct USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA  : public RuntimeObject
{
	intptr_t ____index;
	bool ____disposedValue;
	uint64_t ____cachedDimensions;
};
struct ZipArchiveMode_tD0AA40EAC5C26DBB24E9F4AA965A0C83AB003BCD 
{
	int32_t ___value__;
};
struct ZipVersionMadeByPlatform_t0188CEF15A70E487DF8FEF967B9C70FE536330BE 
{
	uint8_t ___value__;
};
struct ZipVersionNeededValues_tA5A8C9E6B35A8273F2C0272F71053147EA4F0F5C 
{
	uint16_t ___value__;
};
struct BitFlagValues_tF0EF994D25EEFFA919B1774684312A68792BE372 
{
	uint16_t ___value__;
};
struct CompressionMethodValues_tC8C0E4F84E6CBF8501427A5A0CE2261859636BDC 
{
	uint16_t ___value__;
};
struct Nullable_1_tAC8899D7718BEF36A8590184EFBCA842A1BC9AB1 
{
	bool ___hasValue;
	int32_t ___value;
};
struct IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28 
{
	uint32_t ___metric_kind;
	intptr_t ___metric;
	uint32_t ___quantization;
	uint64_t ___dimensions;
	uint64_t ___connectivity;
	uint64_t ___expansion_add;
	uint64_t ___expansion_search;
	bool ___multi;
};
struct IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke
{
	uint32_t ___metric_kind;
	intptr_t ___metric;
	uint32_t ___quantization;
	uint64_t ___dimensions;
	uint64_t ___connectivity;
	uint64_t ___expansion_add;
	uint64_t ___expansion_search;
	int32_t ___multi;
};
struct IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_com
{
	uint32_t ___metric_kind;
	intptr_t ___metric;
	uint32_t ___quantization;
	uint64_t ___dimensions;
	uint64_t ___connectivity;
	uint64_t ___expansion_add;
	uint64_t ___expansion_search;
	int32_t ___multi;
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
struct USearchException_t5DB7C3006A9F0CDF3CE2FDBAA131FE0E2957CBB9  : public Exception_t
{
};
struct ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____archiveStream;
	ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* ____archiveStreamOwner;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ____archiveReader;
	int32_t ____mode;
	List_1_tA389B1109F43128C89C6358C6B56C819460CF5B3* ____entries;
	ReadOnlyCollection_1_t15A54E961DBC027444DA89894B8AD689A38CE9AC* ____entriesCollection;
	Dictionary_2_tA1C10CF9D35962FF0289095A43DEE774B7F13C47* ____entriesDictionary;
	bool ____readEntries;
	bool ____leaveOpen;
	int64_t ____centralDirectoryStart;
	bool ____isDisposed;
	uint32_t ____numberOfThisDisk;
	int64_t ____expectedNumberOfEntries;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____backingStream;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____archiveComment;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____entryNameEncoding;
};
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354  : public MulticastDelegate_t
{
};
struct ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4  : public RuntimeObject
{
	ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* ____archive;
	bool ____originallyInArchive;
	int32_t ____diskNumberStart;
	uint8_t ____versionMadeByPlatform;
	uint16_t ____versionMadeBySpecification;
	uint16_t ____versionToExtract;
	uint16_t ____generalPurposeBitFlag;
	uint16_t ____storedCompressionMethod;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ____lastModified;
	int64_t ____compressedSize;
	int64_t ____uncompressedSize;
	int64_t ____offsetOfLocalHeader;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____storedOffsetOfCompressedData;
	uint32_t ____crc32;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____compressedBytes;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____storedUncompressedData;
	bool ____currentlyOpenForWrite;
	bool ____everOpenedForWrite;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____outstandingWriteStream;
	uint32_t ____externalFileAttr;
	String_t* ____storedEntryName;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____storedEntryNameBytes;
	List_1_t0845A5AAFB6B816C6E2719A0588604CE3A080FDC* ____cdUnknownExtraFields;
	List_1_t0845A5AAFB6B816C6E2719A0588604CE3A080FDC* ____lhUnknownExtraFields;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____fileComment;
	Nullable_1_tAC8899D7718BEF36A8590184EFBCA842A1BC9AB1 ____compressionLevel;
};
struct FilterCallback_t054E59DACA7991125F2791154689E66A75A6D8E2  : public MulticastDelegate_t
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
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticFields
{
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___FilterFunction;
	RuntimeObject* ___filterLock;
};
struct ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4_StaticFields
{
	bool ___s_allowLargeZipArchiveEntriesInUpdateMode;
	uint8_t ___CurrentZipPlatform;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
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

IL2CPP_EXTERN_C void IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_pinvoke(const IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28& unmarshaled, IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_pinvoke_back(const IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke& marshaled, IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28& unmarshaled);
IL2CPP_EXTERN_C void IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_pinvoke_cleanup(IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke& marshaled);

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t USearchIndex_Search_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2E5B62B15F2CEC85A6714C8E9CD0FA7BB74EBEDB (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_queryVector, int32_t ___1_count, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299** ___2_keys, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___3_distances, uint32_t ___4_scalarKind, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___5_filter, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t USearchIndex_StaticFilter_m17A6CC9E3D3544C237CD43FDD0D92FB0D4752570 (int32_t ___0_key, intptr_t ___1_filterState, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_usearch_init_mD340C46E77FD2AA14F6D65019367E2B86788B355 (IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28* ___0_options, intptr_t* ___1_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD (intptr_t ___0_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_usearch_save_m88B1E4A8BD39AFBF380BC26E2A66AA02FC273EFE (intptr_t ___0_index, String_t* ___1_path, intptr_t* ___2_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t NativeMethods_usearch_size_m5CA044652D16A7CB3FE73581581758A7AC12C14E (intptr_t ___0_index, intptr_t* ___1_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C (uintptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t NativeMethods_usearch_capacity_m1FA0DC1F8EE3A9F8F71ACA84F4368F8C050DF99C (intptr_t ___0_index, intptr_t* ___1_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t NativeMethods_usearch_dimensions_m317F4684F03C5EBAAAEE831E3B6E8562AE747CD4 (intptr_t ___0_index, intptr_t* ___1_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t USearchIndex_Size_m1778C745B533C661D87FB19740D035C739547171 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8 (uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_usearch_reserve_mF22C3DBCFAF631C721060E427FFEB573E2229EBF (intptr_t ___0_index, uintptr_t ___1_capacity, intptr_t* ___2_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t USearchIndex_Capacity_m714D0D1765EFBDB57F327613BFB0C206FAB0A02D (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_IncreaseCapacity_m0AC47DD7ED27C0923364A6FEC792C6DBB4F05940 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, uint64_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_CheckIncreaseCapacity_mE4E423CBCF0226833A387DC0E13792564D5DF975 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, uint64_t ___0_size_increase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_usearch_add_m1F173A295EE852A823136034F18B38CD642E0AF4 (intptr_t ___0_index, uint64_t ___1_key, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_vector, uint32_t ___3_vector_kind, intptr_t* ___4_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t NativeMethods_usearch_remove_m25509F9200BC302B38D3C5A2D239DE1A334B70DC (intptr_t ___0_index, uint64_t ___1_key, intptr_t* ___2_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8 (uintptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchException__ctor_m85AB347B19F3DF70F179F20E9B308AF6238A3A98 (USearchException_t5DB7C3006A9F0CDF3CE2FDBAA131FE0E2957CBB9* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_usearch_free_m2BB6079FE404FF5F6D5828CBC32CD25078CC9B21 (intptr_t ___0_index, intptr_t* ___1_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_FreeIndex_m2C48FB9A9384D237176604FF4C1252E43F04EFFD (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t USearchIndex_Search_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2E5B62B15F2CEC85A6714C8E9CD0FA7BB74EBEDB (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_queryVector, int32_t ___1_count, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299** ___2_keys, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___3_distances, uint32_t ___4_scalarKind, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___5_filter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetTempPath_mA919EEA03E4CDC7C85A73771EBCF90F48A74B856 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetRandomFileName_m8530157ABDDA5F5C957D39306F9A51C5EC0B0CB1 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_Save_m45F7006ACCB10F74D537D40395F926F851681B7C (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* ZipFileExtensions_CreateEntryFromFile_m619C0ACEEDE17D2FCF20A6D6134B98CF1014091E (ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* ___0_destination, String_t* ___1_sourceFileName, String_t* ___2_entryName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* ZipArchive_GetEntry_m5C9258FD75F11A64621EEF2EB42CA7E0BE2921FE (ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* __this, String_t* ___0_entryName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ZipArchiveEntry_Open_m1D0EFB9AD33BA96AAF0C624EADA3E58CD6CC67FF (ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_usearch_load_buffer_m61101715A1C699E9A4E965A1C697E7A3A677A004 (intptr_t ___0_index, intptr_t ___1_buffer, uintptr_t ___2_length, intptr_t* ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t USearchIndex_Dimensions_m33101817CEFF790E8E112A8EC660F677B3CF0487 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C intptr_t CDECL usearch_init(IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke*, intptr_t*);
IL2CPP_EXTERN_C void CDECL usearch_free(intptr_t, intptr_t*);
IL2CPP_EXTERN_C void CDECL usearch_save(intptr_t, char*, intptr_t*);
IL2CPP_EXTERN_C uintptr_t CDECL usearch_size(intptr_t, intptr_t*);
IL2CPP_EXTERN_C uintptr_t CDECL usearch_capacity(intptr_t, intptr_t*);
IL2CPP_EXTERN_C uintptr_t CDECL usearch_dimensions(intptr_t, intptr_t*);
IL2CPP_EXTERN_C void CDECL usearch_reserve(intptr_t, uintptr_t, intptr_t*);
IL2CPP_EXTERN_C void CDECL usearch_add(intptr_t, uint64_t, float*, uint32_t, intptr_t*);
IL2CPP_EXTERN_C uintptr_t CDECL usearch_search(intptr_t, intptr_t, uint32_t, uintptr_t, uint64_t*, float*, intptr_t*);
IL2CPP_EXTERN_C uintptr_t CDECL usearch_remove(intptr_t, uint64_t, intptr_t*);
IL2CPP_EXTERN_C void CDECL usearch_load_buffer(intptr_t, intptr_t, uintptr_t, intptr_t*);
IL2CPP_EXTERN_C uintptr_t CDECL usearch_filtered_search(intptr_t, intptr_t, uint32_t, uintptr_t, Il2CppMethodPointer, intptr_t, uint64_t*, float*, intptr_t*);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_usearch_init_mD340C46E77FD2AA14F6D65019367E2B86788B355 (IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28* ___0_options, intptr_t* ___1_error, const RuntimeMethod* method) 
{


	typedef intptr_t (CDECL *PInvokeFunc) (IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke*, intptr_t*);

	IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke* ____0_options_marshaled = NULL;
	IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke ____0_options_marshaled_dereferenced = {};
	IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_pinvoke(*___0_options, ____0_options_marshaled_dereferenced);
	____0_options_marshaled = &____0_options_marshaled_dereferenced;

	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(usearch_init)(____0_options_marshaled, ___1_error);

	IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28 _____0_options_marshaled_unmarshaled_dereferenced;
	memset((&_____0_options_marshaled_unmarshaled_dereferenced), 0, sizeof(_____0_options_marshaled_unmarshaled_dereferenced));
	IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_pinvoke_back(*____0_options_marshaled, _____0_options_marshaled_unmarshaled_dereferenced);
	IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_pinvoke_cleanup(*____0_options_marshaled);
	*___0_options = _____0_options_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_usearch_free_m2BB6079FE404FF5F6D5828CBC32CD25078CC9B21 (intptr_t ___0_index, intptr_t* ___1_error, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t*);

	reinterpret_cast<PInvokeFunc>(usearch_free)(___0_index, ___1_error);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_usearch_save_m88B1E4A8BD39AFBF380BC26E2A66AA02FC273EFE (intptr_t ___0_index, String_t* ___1_path, intptr_t* ___2_error, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, char*, intptr_t*);

	char* ____1_path_marshaled = NULL;
	____1_path_marshaled = il2cpp_codegen_marshal_string(___1_path);

	reinterpret_cast<PInvokeFunc>(usearch_save)(___0_index, ____1_path_marshaled, ___2_error);

	il2cpp_codegen_marshal_free(____1_path_marshaled);
	____1_path_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t NativeMethods_usearch_size_m5CA044652D16A7CB3FE73581581758A7AC12C14E (intptr_t ___0_index, intptr_t* ___1_error, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);

	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(usearch_size)(___0_index, ___1_error);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t NativeMethods_usearch_capacity_m1FA0DC1F8EE3A9F8F71ACA84F4368F8C050DF99C (intptr_t ___0_index, intptr_t* ___1_error, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);

	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(usearch_capacity)(___0_index, ___1_error);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t NativeMethods_usearch_dimensions_m317F4684F03C5EBAAAEE831E3B6E8562AE747CD4 (intptr_t ___0_index, intptr_t* ___1_error, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);

	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(usearch_dimensions)(___0_index, ___1_error);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_usearch_reserve_mF22C3DBCFAF631C721060E427FFEB573E2229EBF (intptr_t ___0_index, uintptr_t ___1_capacity, intptr_t* ___2_error, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uintptr_t, intptr_t*);

	reinterpret_cast<PInvokeFunc>(usearch_reserve)(___0_index, ___1_capacity, ___2_error);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_usearch_add_m1F173A295EE852A823136034F18B38CD642E0AF4 (intptr_t ___0_index, uint64_t ___1_key, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_vector, uint32_t ___3_vector_kind, intptr_t* ___4_error, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint64_t, float*, uint32_t, intptr_t*);

	float* ____2_vector_marshaled = NULL;
	if (___2_vector != NULL)
	{
		____2_vector_marshaled = reinterpret_cast<float*>((___2_vector)->GetAddressAtUnchecked(0));
	}

	reinterpret_cast<PInvokeFunc>(usearch_add)(___0_index, ___1_key, ____2_vector_marshaled, ___3_vector_kind, ___4_error);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t NativeMethods_usearch_search_m80A8C4F74484C35781B1FC3F237A48E13DED0954 (intptr_t ___0_index, intptr_t ___1_query_vector, uint32_t ___2_query_kind, uintptr_t ___3_count, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___4_found_keys, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___5_found_distances, intptr_t* ___6_error, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, uint32_t, uintptr_t, uint64_t*, float*, intptr_t*);

	uint64_t* ____4_found_keys_marshaled = NULL;
	if (___4_found_keys != NULL)
	{
		il2cpp_array_size_t ____4_found_keys_Length = (___4_found_keys)->max_length;
		____4_found_keys_marshaled = il2cpp_codegen_marshal_allocate_array<uint64_t>(____4_found_keys_Length);
		memset(____4_found_keys_marshaled, 0, ____4_found_keys_Length * sizeof(uint64_t));
	}

	float* ____5_found_distances_marshaled = NULL;
	if (___5_found_distances != NULL)
	{
		il2cpp_array_size_t ____5_found_distances_Length = (___5_found_distances)->max_length;
		____5_found_distances_marshaled = il2cpp_codegen_marshal_allocate_array<float>(____5_found_distances_Length);
		memset(____5_found_distances_marshaled, 0, ____5_found_distances_Length * sizeof(float));
	}

	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(usearch_search)(___0_index, ___1_query_vector, ___2_query_kind, ___3_count, ____4_found_keys_marshaled, ____5_found_distances_marshaled, ___6_error);

	if (____4_found_keys_marshaled != NULL)
	{
		il2cpp_array_size_t ____4_found_keys_Length = (___4_found_keys)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____4_found_keys_Length); i++)
		{
			(___4_found_keys)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____4_found_keys_marshaled)[i]);
		}
	}

	il2cpp_codegen_marshal_free(____4_found_keys_marshaled);
	____4_found_keys_marshaled = NULL;

	if (____5_found_distances_marshaled != NULL)
	{
		il2cpp_array_size_t ____5_found_distances_Length = (___5_found_distances)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____5_found_distances_Length); i++)
		{
			(___5_found_distances)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____5_found_distances_marshaled)[i]);
		}
	}

	il2cpp_codegen_marshal_free(____5_found_distances_marshaled);
	____5_found_distances_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t NativeMethods_usearch_remove_m25509F9200BC302B38D3C5A2D239DE1A334B70DC (intptr_t ___0_index, uint64_t ___1_key, intptr_t* ___2_error, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, uint64_t, intptr_t*);

	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(usearch_remove)(___0_index, ___1_key, ___2_error);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_usearch_load_buffer_m61101715A1C699E9A4E965A1C697E7A3A677A004 (intptr_t ___0_index, intptr_t ___1_buffer, uintptr_t ___2_length, intptr_t* ___3_error, const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, intptr_t, uintptr_t, intptr_t*);

	reinterpret_cast<PInvokeFunc>(usearch_load_buffer)(___0_index, ___1_buffer, ___2_length, ___3_error);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t NativeMethods_usearch_filtered_search_m5A1805589EAD28DA2FDA9A282E3B09F3904959A6 (intptr_t ___0_index, intptr_t ___1_query_vector, uint32_t ___2_query_kind, uintptr_t ___3_count, FilterCallback_t054E59DACA7991125F2791154689E66A75A6D8E2* ___4_filter, intptr_t ___5_filterState, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___6_found_keys, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___7_found_distances, intptr_t* ___8_error, const RuntimeMethod* method) 
{
	typedef uintptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, uint32_t, uintptr_t, Il2CppMethodPointer, intptr_t, uint64_t*, float*, intptr_t*);

	Il2CppMethodPointer ____4_filter_marshaled = NULL;
	____4_filter_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___4_filter));

	uint64_t* ____6_found_keys_marshaled = NULL;
	if (___6_found_keys != NULL)
	{
		il2cpp_array_size_t ____6_found_keys_Length = (___6_found_keys)->max_length;
		____6_found_keys_marshaled = il2cpp_codegen_marshal_allocate_array<uint64_t>(____6_found_keys_Length);
		memset(____6_found_keys_marshaled, 0, ____6_found_keys_Length * sizeof(uint64_t));
	}

	float* ____7_found_distances_marshaled = NULL;
	if (___7_found_distances != NULL)
	{
		il2cpp_array_size_t ____7_found_distances_Length = (___7_found_distances)->max_length;
		____7_found_distances_marshaled = il2cpp_codegen_marshal_allocate_array<float>(____7_found_distances_Length);
		memset(____7_found_distances_marshaled, 0, ____7_found_distances_Length * sizeof(float));
	}

	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(usearch_filtered_search)(___0_index, ___1_query_vector, ___2_query_kind, ___3_count, ____4_filter_marshaled, ___5_filterState, ____6_found_keys_marshaled, ____7_found_distances_marshaled, ___8_error);

	if (____6_found_keys_marshaled != NULL)
	{
		il2cpp_array_size_t ____6_found_keys_Length = (___6_found_keys)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____6_found_keys_Length); i++)
		{
			(___6_found_keys)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____6_found_keys_marshaled)[i]);
		}
	}

	il2cpp_codegen_marshal_free(____6_found_keys_marshaled);
	____6_found_keys_marshaled = NULL;

	if (____7_found_distances_marshaled != NULL)
	{
		il2cpp_array_size_t ____7_found_distances_Length = (___7_found_distances)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____7_found_distances_Length); i++)
		{
			(___7_found_distances)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____7_found_distances_marshaled)[i]);
		}
	}

	il2cpp_codegen_marshal_free(____7_found_distances_marshaled);
	____7_found_distances_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t FilterCallback_Invoke_m384B8722053821C3182E47D540428F1474551D9D_Multicast(FilterCallback_t054E59DACA7991125F2791154689E66A75A6D8E2* __this, int32_t ___0_key, intptr_t ___1_filterState, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FilterCallback_t054E59DACA7991125F2791154689E66A75A6D8E2* currentDelegate = reinterpret_cast<FilterCallback_t054E59DACA7991125F2791154689E66A75A6D8E2*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_key, ___1_filterState, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
int32_t FilterCallback_Invoke_m384B8722053821C3182E47D540428F1474551D9D_OpenStatic(FilterCallback_t054E59DACA7991125F2791154689E66A75A6D8E2* __this, int32_t ___0_key, intptr_t ___1_filterState, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_key, ___1_filterState, method);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_FilterCallback_t054E59DACA7991125F2791154689E66A75A6D8E2 (FilterCallback_t054E59DACA7991125F2791154689E66A75A6D8E2* __this, int32_t ___0_key, intptr_t ___1_filterState, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	int32_t returnValue = il2cppPInvokeFunc(___0_key, ___1_filterState);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterCallback__ctor_m0027510C1EA4F95ABBAC9D73B2A1EAE6F08597D7 (FilterCallback_t054E59DACA7991125F2791154689E66A75A6D8E2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)FilterCallback_Invoke_m384B8722053821C3182E47D540428F1474551D9D_OpenStatic;
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
	__this->___extra_arg = (intptr_t)FilterCallback_Invoke_m384B8722053821C3182E47D540428F1474551D9D_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FilterCallback_Invoke_m384B8722053821C3182E47D540428F1474551D9D (FilterCallback_t054E59DACA7991125F2791154689E66A75A6D8E2* __this, int32_t ___0_key, intptr_t ___1_filterState, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_key, ___1_filterState, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchException__ctor_m85AB347B19F3DF70F179F20E9B308AF6238A3A98 (USearchException_t5DB7C3006A9F0CDF3CE2FDBAA131FE0E2957CBB9* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Exception_t_StaticInit);
	{
		String_t* L_0 = ___0_message;
		CHECKED_LOCAL_INIT(Exception_t_StaticInit,(Exception_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
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
extern "C" int32_t CDECL ReversePInvokeWrapper_USearchIndex_StaticFilter_m17A6CC9E3D3544C237CD43FDD0D92FB0D4752570(int32_t ___0_key, intptr_t ___1_filterState)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	int32_t returnValue;
	returnValue = USearchIndex_StaticFilter_m17A6CC9E3D3544C237CD43FDD0D92FB0D4752570(___0_key, ___1_filterState, NULL);

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex__ctor_mD72AE04D986450B225E37C19101D28B4765185EE (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, uint32_t ___0_metricKind, uint32_t ___1_quantization, uint64_t ___2_dimensions, uint64_t ___3_connectivity, uint64_t ___4_expansionAdd, uint64_t ___5_expansionSearch, bool ___6_multi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit);
	IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28));
		uint32_t L_0 = ___0_metricKind;
		(&V_2)->___metric_kind = L_0;
		intptr_t* L_1 = (intptr_t*)(&(&V_2)->___metric);
		il2cpp_codegen_initobj(L_1, sizeof(intptr_t));
		uint32_t L_2 = ___1_quantization;
		(&V_2)->___quantization = L_2;
		uint64_t L_3 = ___2_dimensions;
		(&V_2)->___dimensions = L_3;
		uint64_t L_4 = ___3_connectivity;
		(&V_2)->___connectivity = L_4;
		uint64_t L_5 = ___4_expansionAdd;
		(&V_2)->___expansion_add = L_5;
		uint64_t L_6 = ___5_expansionSearch;
		(&V_2)->___expansion_search = L_6;
		bool L_7 = ___6_multi;
		(&V_2)->___multi = L_7;
		IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28 L_8 = V_2;
		V_0 = L_8;
		intptr_t L_9;
		L_9 = NativeMethods_usearch_init_mD340C46E77FD2AA14F6D65019367E2B86788B355((&V_0), (&V_1), NULL);
		__this->____index = L_9;
		intptr_t L_10 = V_1;
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD(L_10, NULL);
		uint64_t L_11 = ___2_dimensions;
		__this->____cachedDimensions = L_11;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_Save_m45F7006ACCB10F74D537D40395F926F851681B7C (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->____index;
		String_t* L_1 = ___0_path;
		NativeMethods_usearch_save_m88B1E4A8BD39AFBF380BC26E2A66AA02FC273EFE(L_0, L_1, (&V_0), NULL);
		intptr_t L_2 = V_0;
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t USearchIndex_Size_m1778C745B533C661D87FB19740D035C739547171 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->____index;
		uintptr_t L_1;
		L_1 = NativeMethods_usearch_size_m5CA044652D16A7CB3FE73581581758A7AC12C14E(L_0, (&V_0), NULL);
		uint64_t L_2;
		L_2 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_1, NULL);
		intptr_t L_3 = V_0;
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD(L_3, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t USearchIndex_Capacity_m714D0D1765EFBDB57F327613BFB0C206FAB0A02D (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->____index;
		uintptr_t L_1;
		L_1 = NativeMethods_usearch_capacity_m1FA0DC1F8EE3A9F8F71ACA84F4368F8C050DF99C(L_0, (&V_0), NULL);
		uint64_t L_2;
		L_2 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_1, NULL);
		intptr_t L_3 = V_0;
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD(L_3, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t USearchIndex_Dimensions_m33101817CEFF790E8E112A8EC660F677B3CF0487 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->____index;
		uintptr_t L_1;
		L_1 = NativeMethods_usearch_dimensions_m317F4684F03C5EBAAAEE831E3B6E8562AE747CD4(L_0, (&V_0), NULL);
		uint64_t L_2;
		L_2 = UIntPtr_op_Explicit_mC39E70F0324C1C514A3044790BC19C5FC4C58E1C(L_1, NULL);
		intptr_t L_3 = V_0;
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD(L_3, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_IncreaseCapacity_m0AC47DD7ED27C0923364A6FEC792C6DBB4F05940 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, uint64_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->____index;
		uint64_t L_1;
		L_1 = USearchIndex_Size_m1778C745B533C661D87FB19740D035C739547171(__this, NULL);
		uint64_t L_2 = ___0_size;
		uintptr_t L_3;
		L_3 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(((int64_t)il2cpp_codegen_add((int64_t)L_1, (int64_t)L_2)), NULL);
		NativeMethods_usearch_reserve_mF22C3DBCFAF631C721060E427FFEB573E2229EBF(L_0, L_3, (&V_0), NULL);
		intptr_t L_4 = V_0;
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD(L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_CheckIncreaseCapacity_mE4E423CBCF0226833A387DC0E13792564D5DF975 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, uint64_t ___0_size_increase, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0;
		L_0 = USearchIndex_Size_m1778C745B533C661D87FB19740D035C739547171(__this, NULL);
		uint64_t L_1 = ___0_size_increase;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)L_1));
		uint64_t L_2;
		L_2 = USearchIndex_Capacity_m714D0D1765EFBDB57F327613BFB0C206FAB0A02D(__this, NULL);
		uint64_t L_3 = V_0;
		if ((!(((uint64_t)L_2) < ((uint64_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		uint64_t L_4 = ___0_size_increase;
		USearchIndex_IncreaseCapacity_m0AC47DD7ED27C0923364A6FEC792C6DBB4F05940(__this, L_4, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_Add_m798F0061642E57C817991F805939E38D79DF37BC (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, uint64_t ___0_key, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		USearchIndex_CheckIncreaseCapacity_mE4E423CBCF0226833A387DC0E13792564D5DF975(__this, L_0, NULL);
		intptr_t L_1 = __this->____index;
		uint64_t L_2 = ___0_key;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___1_vector;
		NativeMethods_usearch_add_m1F173A295EE852A823136034F18B38CD642E0AF4(L_1, L_2, L_3, 1, (&V_0), NULL);
		intptr_t L_4 = V_0;
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD(L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t USearchIndex_Remove_mBF3C1DFB1BD01A160FBC7489A60574DAE330E059 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, uint64_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_Remove_mBF3C1DFB1BD01A160FBC7489A60574DAE330E059_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->____index;
		uint64_t L_1 = ___0_key;
		uintptr_t L_2;
		L_2 = NativeMethods_usearch_remove_m25509F9200BC302B38D3C5A2D239DE1A334B70DC(L_0, L_1, (&V_0), NULL);
		uint32_t L_3;
		L_3 = UIntPtr_op_Explicit_m7802FC2BA4C3A18601BB8B58ED4708E0F07663E8(L_2, NULL);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,uint32_t,int32_t,true,true>(L_3,USearchIndex_Remove_mBF3C1DFB1BD01A160FBC7489A60574DAE330E059_RuntimeMethod_var));
		intptr_t L_5 = V_0;
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD(L_5, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD (intptr_t ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	{
		intptr_t L_0 = ___0_error;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		intptr_t L_2 = ___0_error;
		CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BD01AF8925658D386F373DF631A5D1D859B7D50)), L_3, NULL);
		USearchException_t5DB7C3006A9F0CDF3CE2FDBAA131FE0E2957CBB9* L_5 = (USearchException_t5DB7C3006A9F0CDF3CE2FDBAA131FE0E2957CBB9*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&USearchException_t5DB7C3006A9F0CDF3CE2FDBAA131FE0E2957CBB9_il2cpp_TypeInfo_var)));
		USearchException__ctor_m85AB347B19F3DF70F179F20E9B308AF6238A3A98(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD_RuntimeMethod_var)));
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_FreeIndex_m2C48FB9A9384D237176604FF4C1252E43F04EFFD (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->____index;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		intptr_t L_2 = __this->____index;
		NativeMethods_usearch_free_m2BB6079FE404FF5F6D5828CBC32CD25078CC9B21(L_2, (&V_0), NULL);
		intptr_t L_3 = V_0;
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD(L_3, NULL);
		__this->____index = 0;
	}

IL_0030:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_Dispose_mC0EC41A5D7AB56CE21B1542A021E8DA8EB356F21 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	{
		VirtualActionInvoker1< bool >::Invoke(5, __this, (bool)1);
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_Dispose_m1E56A0911A60686C8394317EAEFE372415E0CC15 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposedValue;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		USearchIndex_FreeIndex_m2C48FB9A9384D237176604FF4C1252E43F04EFFD(__this, NULL);
		__this->____disposedValue = (bool)1;
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_Finalize_mBFF52EE1BD67DF5B8E7BF91415BCCBDA2033057D (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}
		});
		try
		{
			VirtualActionInvoker1< bool >::Invoke(5, __this, (bool)0);
			goto IL_0010;
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

IL_0010:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t USearchIndex_StaticFilter_m17A6CC9E3D3544C237CD43FDD0D92FB0D4752570 (int32_t ___0_key, intptr_t ___1_filterState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit);
	{
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_0 = ((USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticFields*)il2cpp_codegen_static_fields_for(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var))->___FilterFunction;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_1 = ((USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticFields*)il2cpp_codegen_static_fields_for(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var))->___FilterFunction;
		int32_t L_2 = ___0_key;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0013:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t USearchIndex_Search_m6521FA721D493A1F18796D41F242A211976AF771 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_queryVector, int32_t ___1_count, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299** ___2_keys, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___3_distances, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___4_filter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_Search_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2E5B62B15F2CEC85A6714C8E9CD0FA7BB74EBEDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_queryVector;
		int32_t L_1 = ___1_count;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299** L_2 = ___2_keys;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_3 = ___3_distances;
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_4 = ___4_filter;
		int32_t L_5;
		L_5 = USearchIndex_Search_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2E5B62B15F2CEC85A6714C8E9CD0FA7BB74EBEDB(__this, L_0, L_1, L_2, L_3, 1, L_4, USearchIndex_Search_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2E5B62B15F2CEC85A6714C8E9CD0FA7BB74EBEDB_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* USearchIndex_GetIndexFilename_mE88AF9EF86D9F5CD493A4E9E6BC0885AE63F4011 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral869265B8B7F041503D1BE7B11948EEC054710B74);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral869265B8B7F041503D1BE7B11948EEC054710B74;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_Save_m55FD39E2289814E3CBF72506C9EC510E3A04B642 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* ___0_zipArchive, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	String_t* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CHECKED_LOCAL_INIT(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticInit,(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_0;
		L_0 = Path_GetTempPath_mA919EEA03E4CDC7C85A73771EBCF90F48A74B856(NULL);
		String_t* L_1;
		L_1 = Path_GetRandomFileName_m8530157ABDDA5F5C957D39306F9A51C5EC0B0CB1(NULL);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		USearchIndex_Save_m45F7006ACCB10F74D537D40395F926F851681B7C(__this, L_3, NULL);
	}
	try
	{
		ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* L_4 = ___0_zipArchive;
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(6, __this);
		ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* L_7;
		L_7 = ZipFileExtensions_CreateEntryFromFile_m619C0ACEEDE17D2FCF20A6D6134B98CF1014091E(L_4, L_5, L_6, NULL);
		goto IL_003f;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{
		Exception_t* L_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_8;
		Exception_t* L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_9);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral48091DF193DFA3847A6BA17BE7D400203CC2E68B)), L_10, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_003f;
	}

IL_003f:
	{
		String_t* L_12 = V_0;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex_Load_m7FEC1255CE3F49F354B1CB298572CBFD84F48BB6 (USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA* __this, ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* ___0_zipArchive, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_Load_m7FEC1255CE3F49F354B1CB298572CBFD84F48BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_2 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_5;
	memset((&V_5), 0, sizeof(V_5));
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28));
		intptr_t L_0;
		L_0 = NativeMethods_usearch_init_mD340C46E77FD2AA14F6D65019367E2B86788B355((&V_0), (&V_1), NULL);
		__this->____index = L_0;
		intptr_t L_1 = V_1;
		CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD(L_1, NULL);
	}
	try
	{
		{
			ZipArchive_t6469B8DB5F18FB4C7E24F625D0E53EA635D31C41* L_2 = ___0_zipArchive;
			String_t* L_3;
			L_3 = VirtualFuncInvoker0< String_t* >::Invoke(6, __this);
			NullCheck(L_2);
			ZipArchiveEntry_tEFD75A0570102F8A3DF70A038302146B46071DD4* L_4;
			L_4 = ZipArchive_GetEntry_m5C9258FD75F11A64621EEF2EB42CA7E0BE2921FE(L_2, L_3, NULL);
			NullCheck(L_4);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5;
			L_5 = ZipArchiveEntry_Open_m1D0EFB9AD33BA96AAF0C624EADA3E58CD6CC67FF(L_4, NULL);
			V_2 = L_5;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00aa_1:
				{
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = V_2;
						if (!L_6)
						{
							goto IL_00b3_1;
						}
					}
					{
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = V_2;
						NullCheck(L_7);
						InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
					}

IL_00b3_1:
					{
						return;
					}
				}
			});
			try
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
					MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_8, NULL);
					V_3 = L_8;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_009e_2:
						{
							{
								MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_3;
								if (!L_9)
								{
									goto IL_00a7_2;
								}
							}
							{
								MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = V_3;
								NullCheck(L_10);
								InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
							}

IL_00a7_2:
							{
								return;
							}
						}
					});
					try
					{
						{
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = V_2;
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = V_3;
							NullCheck(L_11);
							Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999(L_11, L_12, NULL);
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = V_3;
							NullCheck(L_13);
							int64_t L_14;
							L_14 = VirtualFuncInvoker0< int64_t >::Invoke(9, L_13);
							intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,true,false>(L_14,USearchIndex_Load_m7FEC1255CE3F49F354B1CB298572CBFD84F48BB6_RuntimeMethod_var));
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_15);
							V_4 = L_16;
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_3;
							int64_t L_18 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
							NullCheck(L_17);
							VirtualActionInvoker1< int64_t >::Invoke(11, L_17, L_18);
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_19 = V_3;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_4;
							NullCheck(L_21);
							int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
							NullCheck(L_19);
							int32_t L_23;
							L_23 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(28, L_19, L_20, 0, L_22);
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_4;
							GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_25;
							L_25 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_24, 3, NULL);
							V_5 = L_25;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_0094_3:
								{
									GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_5), NULL);
									return;
								}
							});
							try
							{
								intptr_t L_26;
								L_26 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_5), NULL);
								V_6 = L_26;
								intptr_t L_27 = __this->____index;
								intptr_t L_28 = V_6;
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
								NullCheck(L_29);
								int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_29)->max_length),NULL));
								int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_30,NULL));
								uintptr_t L_32;
								L_32 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8(L_31, NULL);
								NativeMethods_usearch_load_buffer_m61101715A1C699E9A4E965A1C697E7A3A677A004(L_27, L_28, L_32, (&V_1), NULL);
								intptr_t L_33 = V_1;
								CHECKED_LOCAL_INIT(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticInit,(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
								USearchIndex_HandleError_mA994306162027427B343B88E7A2C74610AA1A5BD(L_33, NULL);
								goto IL_009c_3;
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

IL_009c_3:
						{
							goto IL_00a8_2;
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

IL_00a8_2:
				{
					goto IL_00b4_1;
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

IL_00b4_1:
		{
			goto IL_00d0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b6;
		}
		throw e;
	}

CATCH_00b6:
	{
		Exception_t* L_34 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_34;
		Exception_t* L_35 = V_7;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_35);
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD21996E88DE5ED8CE4241E2E32F865E0A9FB32B2)), L_36, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_37, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00d0;
	}

IL_00d0:
	{
		uint64_t L_38;
		L_38 = USearchIndex_Dimensions_m33101817CEFF790E8E112A8EC660F677B3CF0487(__this, NULL);
		__this->____cachedDimensions = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void USearchIndex__cctor_m8212A442DA31AE6AC5210FCADFED676680639E98 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticFields*)il2cpp_codegen_static_fields_for(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var))->___filterLock = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_StaticFields*)il2cpp_codegen_static_fields_for(USearchIndex_tCC3A72F5A38034F46128608DBF280E0D714765BA_il2cpp_TypeInfo_var))->___filterLock), (void*)L_0);
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
IL2CPP_EXTERN_C void IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_pinvoke(const IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28& unmarshaled, IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke& marshaled)
{
	marshaled.___metric_kind = unmarshaled.___metric_kind;
	marshaled.___metric = unmarshaled.___metric;
	marshaled.___quantization = unmarshaled.___quantization;
	marshaled.___dimensions = unmarshaled.___dimensions;
	marshaled.___connectivity = unmarshaled.___connectivity;
	marshaled.___expansion_add = unmarshaled.___expansion_add;
	marshaled.___expansion_search = unmarshaled.___expansion_search;
	marshaled.___multi = static_cast<int32_t>(unmarshaled.___multi);
}
IL2CPP_EXTERN_C void IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_pinvoke_back(const IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke& marshaled, IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28& unmarshaled)
{
	uint32_t unmarshaledmetric_kind_temp_0 = 0;
	unmarshaledmetric_kind_temp_0 = marshaled.___metric_kind;
	unmarshaled.___metric_kind = unmarshaledmetric_kind_temp_0;
	intptr_t unmarshaledmetric_temp_1;
	memset((&unmarshaledmetric_temp_1), 0, sizeof(unmarshaledmetric_temp_1));
	unmarshaledmetric_temp_1 = marshaled.___metric;
	unmarshaled.___metric = unmarshaledmetric_temp_1;
	uint32_t unmarshaledquantization_temp_2 = 0;
	unmarshaledquantization_temp_2 = marshaled.___quantization;
	unmarshaled.___quantization = unmarshaledquantization_temp_2;
	uint64_t unmarshaleddimensions_temp_3 = 0;
	unmarshaleddimensions_temp_3 = marshaled.___dimensions;
	unmarshaled.___dimensions = unmarshaleddimensions_temp_3;
	uint64_t unmarshaledconnectivity_temp_4 = 0;
	unmarshaledconnectivity_temp_4 = marshaled.___connectivity;
	unmarshaled.___connectivity = unmarshaledconnectivity_temp_4;
	uint64_t unmarshaledexpansion_add_temp_5 = 0;
	unmarshaledexpansion_add_temp_5 = marshaled.___expansion_add;
	unmarshaled.___expansion_add = unmarshaledexpansion_add_temp_5;
	uint64_t unmarshaledexpansion_search_temp_6 = 0;
	unmarshaledexpansion_search_temp_6 = marshaled.___expansion_search;
	unmarshaled.___expansion_search = unmarshaledexpansion_search_temp_6;
	bool unmarshaledmulti_temp_7 = false;
	unmarshaledmulti_temp_7 = static_cast<bool>(marshaled.___multi);
	unmarshaled.___multi = unmarshaledmulti_temp_7;
}
IL2CPP_EXTERN_C void IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_pinvoke_cleanup(IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_com(const IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28& unmarshaled, IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_com& marshaled)
{
	marshaled.___metric_kind = unmarshaled.___metric_kind;
	marshaled.___metric = unmarshaled.___metric;
	marshaled.___quantization = unmarshaled.___quantization;
	marshaled.___dimensions = unmarshaled.___dimensions;
	marshaled.___connectivity = unmarshaled.___connectivity;
	marshaled.___expansion_add = unmarshaled.___expansion_add;
	marshaled.___expansion_search = unmarshaled.___expansion_search;
	marshaled.___multi = static_cast<int32_t>(unmarshaled.___multi);
}
IL2CPP_EXTERN_C void IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_com_back(const IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_com& marshaled, IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28& unmarshaled)
{
	uint32_t unmarshaledmetric_kind_temp_0 = 0;
	unmarshaledmetric_kind_temp_0 = marshaled.___metric_kind;
	unmarshaled.___metric_kind = unmarshaledmetric_kind_temp_0;
	intptr_t unmarshaledmetric_temp_1;
	memset((&unmarshaledmetric_temp_1), 0, sizeof(unmarshaledmetric_temp_1));
	unmarshaledmetric_temp_1 = marshaled.___metric;
	unmarshaled.___metric = unmarshaledmetric_temp_1;
	uint32_t unmarshaledquantization_temp_2 = 0;
	unmarshaledquantization_temp_2 = marshaled.___quantization;
	unmarshaled.___quantization = unmarshaledquantization_temp_2;
	uint64_t unmarshaleddimensions_temp_3 = 0;
	unmarshaleddimensions_temp_3 = marshaled.___dimensions;
	unmarshaled.___dimensions = unmarshaleddimensions_temp_3;
	uint64_t unmarshaledconnectivity_temp_4 = 0;
	unmarshaledconnectivity_temp_4 = marshaled.___connectivity;
	unmarshaled.___connectivity = unmarshaledconnectivity_temp_4;
	uint64_t unmarshaledexpansion_add_temp_5 = 0;
	unmarshaledexpansion_add_temp_5 = marshaled.___expansion_add;
	unmarshaled.___expansion_add = unmarshaledexpansion_add_temp_5;
	uint64_t unmarshaledexpansion_search_temp_6 = 0;
	unmarshaledexpansion_search_temp_6 = marshaled.___expansion_search;
	unmarshaled.___expansion_search = unmarshaledexpansion_search_temp_6;
	bool unmarshaledmulti_temp_7 = false;
	unmarshaledmulti_temp_7 = static_cast<bool>(marshaled.___multi);
	unmarshaled.___multi = unmarshaledmulti_temp_7;
}
IL2CPP_EXTERN_C void IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshal_com_cleanup(IndexOptions_t0B0D431C8FB7C54B7E372FA63920F9619CEBDF28_marshaled_com& marshaled)
{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
