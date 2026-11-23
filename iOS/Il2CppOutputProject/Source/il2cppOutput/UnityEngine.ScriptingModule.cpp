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

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BurstAuthorizedExternalMethodAttribute_t3C603CBA6244C7E648C5E6BDF55D274A57B3411B;
struct BurstDiscardAttribute_tFD6040CDC21DC75DE6457CA5E7686375C8426157;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Il2CppEagerStaticClassConstructionAttribute_t3D7D82DC5526590106245EEAFBBCDEF108E58986;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MonoPInvokeCallbackAttribute_t3568E3CF20F9BA374E25F24685212F0033C334B7;
struct NativeDisableUnsafePtrRestrictionAttribute_t4C95F4FB0F1BF2DF3258797C4622C134D1062098;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
struct PreserveAttribute_t1738E8F0C9331B6352A2D51C280CD0FA3AABD754;
struct RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct UnityEngineModuleAssembly_t3F6804C9FB33566CFEEDC6C7A94F5D50C0EEE3E1;
struct UsedByNativeCodeAttribute_tED735F025C1CC74BAA6B34A9BD2FC7CB1CB74BFE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataOwner_tCE1526E8508042F97CE454B8F70D36044C421CA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionMarshaller_t7B420501E566045746689D80747070C49FA2BFDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E0CE65B59BF1413DE667DB6AEBDD9F620619234;
IL2CPP_EXTERN_C String_t* _stringLiteral99AFA37AC0EE2B77EE281DB5399FEEDF77C37FB5;
IL2CPP_EXTERN_C String_t* _stringLiteralDC435B8AA14E51B7FC3CEF2ED8D5CED3A8A3151B;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtrObjectMarshalling_CreateDefault_m4F8A320EE6F89B67ABC377A7A291B6DA73FD884F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtrObjectMarshalling_CreateFromNative_m964C63649DC46B2B7F7A303B80033CD74DD14C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtrObjectMarshalling_GetIntPtr_m7BBDB8A0F10ED0D586DD31ABA43569B5D61C7814_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtrObjectMarshalling_SetIntPtr_mD44828D6E626A82ECB7073E788EFAE31D9E41BBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledArray_ThrowUnimplementedDataOwnerCase_m2C657ACD8D66C1D47CB0880CE2AD37D7385A5538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleThrowHelper_ThrowArgumentNullException_m7F2DC9C17105429BA3367C6956EA28B7DB7A4D58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleThrowHelper_ThrowNullReferenceException_mED48B07959D8C1FB63261F427C3AE14DEE66F26B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tF24D976A707B2278FC635C26AD3D29DD695F9D7F 
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct BindingsAllocator_tD180DB9CC5A3279BC8E12BC539D17EAF2C1F2381  : public RuntimeObject
{
};
struct CollectionMarshallingAccessorsAsserts_t4FEDE72BD20CFC6A500791EC58C2F350F69CAA1A  : public RuntimeObject
{
};
struct Debug_t7CA67D349E602EC3832CAB410708A01CF18CEB25  : public RuntimeObject
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct ExceptionMarshaller_t7B420501E566045746689D80747070C49FA2BFDF  : public RuntimeObject
{
};
struct IntPtrObjectMarshalling_t729BEB15011A354B63338E1031C26EE5FA0F32D6  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NoAllocHelpers_t5C2B43061F00675B5AD0044C341D0279E4F5F1ED  : public RuntimeObject
{
};
struct SimpleThrowHelper_tC7F83463CCD334C6792CF901ADD237C3A112DC12  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringMarshaller_tF5FD7C51BA5C829C9D68FADA00B81DE4A1CF10D4  : public RuntimeObject
{
};
struct SystemReflectionMarshalling_t59865ED5BAAFEB476FF1D3F328D831B6B6C7E845  : public RuntimeObject
{
};
struct UnsafeUtilityInternal_t5FEF1714A0FC54C68B384571076C8DF48E831240  : public RuntimeObject
{
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
struct BurstAuthorizedExternalMethodAttribute_t3C603CBA6244C7E648C5E6BDF55D274A57B3411B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct BurstDiscardAttribute_tFD6040CDC21DC75DE6457CA5E7686375C8426157  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Il2CppEagerStaticClassConstructionAttribute_t3D7D82DC5526590106245EEAFBBCDEF108E58986  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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
struct ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 
{
	void* ___begin;
	int32_t ___length;
};
struct MonoPInvokeCallbackAttribute_t3568E3CF20F9BA374E25F24685212F0033C334B7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct NativeDisableUnsafePtrRestrictionAttribute_t4C95F4FB0F1BF2DF3258797C4622C134D1062098  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct OutStringMarshaller_tD9EFDD4E5C64540EE6FB0F99B328183B8980BA5C 
{
	union
	{
		struct
		{
		};
		uint8_t OutStringMarshaller_tD9EFDD4E5C64540EE6FB0F99B328183B8980BA5C__padding[1];
	};
};
struct PreserveAttribute_t1738E8F0C9331B6352A2D51C280CD0FA3AABD754  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3COptionalU3Ek__BackingField;
	bool ___U3CGenerateProxyU3Ek__BackingField;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct UnityEngineModuleAssembly_t3F6804C9FB33566CFEEDC6C7A94F5D50C0EEE3E1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct UsedByNativeCodeAttribute_tED735F025C1CC74BAA6B34A9BD2FC7CB1CB74BFE  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___U3CNameU3Ek__BackingField;
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
struct NativeOwnedMemory_t78EF0D467F14059891C564355B0AEFDE81175B2B 
{
	void* ___data;
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct DataOwner_tCE1526E8508042F97CE454B8F70D36044C421CA5 
{
	int32_t ___value__;
};
struct MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 
{
	void* ___data;
	int32_t ___size;
	int32_t ___capacity;
	int32_t ___dataOwner;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BlittableArrayWrapper_t0A2B64A4A3E855FE9177EDF07099F1006B9F3589 
{
	MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 ___arrayWrapper;
};
struct BlittableListWrapper_tFB8018FE60D97C869C64538C02A4A18C3B9294CA 
{
	MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 ___arrayWrapper;
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct ExceptionMarshaller_t7B420501E566045746689D80747070C49FA2BFDF_ThreadStaticFields
{
	Exception_t* ___s_pendingException;
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
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
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



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m32C330C71F827286347AC99CA9329BEA58CC2873 (void* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshalledArray__ctor_mD393CE0CB31D502489C2B60C0A74CF196851ABE8 (MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536* __this, void* ___0_data, int32_t ___1_size, int32_t ___2_capacity, int32_t ___3_dataOwner, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsAllocator_Free_m3D757414A787767EE8BB9119071408A830E21835 (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsAllocator_FreeNativeOwnedMemory_m2D5B34DB9B5653DEF78C118221D29AF5DD483ED9 (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void MarshalledArray_ThrowUnimplementedDataOwnerCase_m2C657ACD8D66C1D47CB0880CE2AD37D7385A5538 (int32_t ___0_dataOwner, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR String_t* MarshalledArray_GetUnimplementedDataOwnerCaseMessage_mBD37F48D6A402C95AE1E11FC7642716A83A05C9C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 MarshalledArray_CreateFromPinnedData_m4CB80166B77DE39145E4AD6553C75529ACB0D74B (void* ___0_data, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mC5103EE3FE4FE245039B1107D6685296D9CC6560 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8 (uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UIntPtr_op_Explicit_m42C3EA82465934F505B4274A7CE320550A48B7B9 (uintptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedSpanWrapper__ctor_m64EF660BE4BF42BC17706387C68D2BCE779802EF (ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* __this, void* ___0_begin, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B SystemReflectionMarshalling_UnmarshalRuntimeTypeHandle_m6C8FDF990AC7ACFB505BFF67D4777D7E67AB8BB5 (intptr_t ___0_handlePtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UsedByNativeCodeAttribute_set_Name_m09634BC24D79F3A31969848ADB7C82072A8D5494_inline (UsedByNativeCodeAttribute_tED735F025C1CC74BAA6B34A9BD2FC7CB1CB74BFE* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute_set_Name_m99F533EEADEACAF185EA404C0920B689DC94A623_inline (RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute_set_Optional_mCFD7F94B50EEDB547C839C503F9676CB2E047B0D_inline (RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5* __this, bool ___0_value, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m7392CF023E50DFDA82090B3A7454797C2C131FDD (MonoPInvokeCallbackAttribute_t3568E3CF20F9BA374E25F24685212F0033C334B7* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeDisableUnsafePtrRestrictionAttribute__ctor_m56A26BB2C1A251C15BBB8DB50DE187E9B7EED5A9 (NativeDisableUnsafePtrRestrictionAttribute_t4C95F4FB0F1BF2DF3258797C4622C134D1062098* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppEagerStaticClassConstructionAttribute__ctor_mA7E4EB4327642FEC15C5409B08BDCDFE269F359A (Il2CppEagerStaticClassConstructionAttribute_t3D7D82DC5526590106245EEAFBBCDEF108E58986* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m32C330C71F827286347AC99CA9329BEA58CC2873 (void* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*Debug_LogWarning_m32C330C71F827286347AC99CA9329BEA58CC2873_ftn) (void*);
	static Debug_LogWarning_m32C330C71F827286347AC99CA9329BEA58CC2873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_LogWarning_m32C330C71F827286347AC99CA9329BEA58CC2873_ftn)il2cpp_codegen_resolve_icall ("Unity.Scripting.LowLevel.Debug::LogWarning(System.Void*)");
	_il2cpp_icall_func(___0_message);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m3DD7B93DF977FC792633C5821D2870381B94D249 (String_t* ___0_message, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_message;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(26, L_0, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if (L_5)
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		uintptr_t L_6 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (uint8_t*)L_6;
		goto IL_0022;
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		NullCheck(L_7);
		uintptr_t L_8 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_0 = (uint8_t*)L_8;
	}

IL_0022:
	{
		uint8_t* L_9 = V_0;
		Debug_LogWarning_m32C330C71F827286347AC99CA9329BEA58CC2873((void*)L_9, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstAuthorizedExternalMethodAttribute__ctor_mA3EEB1A90920FA4320D731C870386CB8714119D9 (BurstAuthorizedExternalMethodAttribute_t3C603CBA6244C7E648C5E6BDF55D274A57B3411B* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstDiscardAttribute__ctor_m4560DDB0821067081A9A4AE7AF8B90BD3407A7A6 (BurstDiscardAttribute_tFD6040CDC21DC75DE6457CA5E7686375C8426157* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEngineModuleAssembly__ctor_m0B4AC86AA7A369BBC9E6E2097D11A4A55A9923D6 (UnityEngineModuleAssembly_t3F6804C9FB33566CFEEDC6C7A94F5D50C0EEE3E1* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_mB1F1CBA3C310ABE49EFFD290BF33527B14657DEF (RuntimeArray* ___0_values, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		RuntimeArray* L_1 = ___0_values;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_length(L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshalledArray__ctor_mD393CE0CB31D502489C2B60C0A74CF196851ABE8 (MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536* __this, void* ___0_data, int32_t ___1_size, int32_t ___2_capacity, int32_t ___3_dataOwner, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_data;
		__this->___data = L_0;
		int32_t L_1 = ___1_size;
		__this->___size = L_1;
		int32_t L_2 = ___2_capacity;
		__this->___capacity = L_2;
		int32_t L_3 = ___3_dataOwner;
		__this->___dataOwner = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 MarshalledArray_CreateFromPinnedData_m4CB80166B77DE39145E4AD6553C75529ACB0D74B (void* ___0_data, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_data;
		int32_t L_1 = ___1_size;
		int32_t L_2 = ___1_size;
		MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 L_3;
		memset((&L_3), 0, sizeof(L_3));
		MarshalledArray__ctor_mD393CE0CB31D502489C2B60C0A74CF196851ABE8((&L_3), L_0, L_1, L_2, 0, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshalledArray_Free_mD3F20B29A68C32C48883B6D9666BED8D0876BF15 (MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___dataOwner;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_0037;
			}
			case 5:
			{
				goto IL_004e;
			}
			case 6:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_0043;
	}

IL_002b:
	{
		void* L_2 = __this->___data;
		BindingsAllocator_Free_m3D757414A787767EE8BB9119071408A830E21835(L_2, NULL);
		return;
	}

IL_0037:
	{
		void* L_3 = __this->___data;
		BindingsAllocator_FreeNativeOwnedMemory_m2D5B34DB9B5653DEF78C118221D29AF5DD483ED9(L_3, NULL);
		return;
	}

IL_0043:
	{
		int32_t L_4 = __this->___dataOwner;
		MarshalledArray_ThrowUnimplementedDataOwnerCase_m2C657ACD8D66C1D47CB0880CE2AD37D7385A5538(L_4, NULL);
	}

IL_004e:
	{
		return;
	}
}
IL2CPP_DISABLE_OPTIMIZATIONS
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR String_t* MarshalledArray_GetUnimplementedDataOwnerCaseMessage_mBD37F48D6A402C95AE1E11FC7642716A83A05C9C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0CE65B59BF1413DE667DB6AEBDD9F620619234);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral0E0CE65B59BF1413DE667DB6AEBDD9F620619234;
	}
}
IL2CPP_ENABLE_OPTIMIZATIONS
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void MarshalledArray_ThrowUnimplementedDataOwnerCase_m2C657ACD8D66C1D47CB0880CE2AD37D7385A5538 (int32_t ___0_dataOwner, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = MarshalledArray_GetUnimplementedDataOwnerCaseMessage_mBD37F48D6A402C95AE1E11FC7642716A83A05C9C(NULL);
		int32_t L_1 = ___0_dataOwner;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataOwner_tCE1526E8508042F97CE454B8F70D36044C421CA5_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC435B8AA14E51B7FC3CEF2ED8D5CED3A8A3151B)), L_3, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_5 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MarshalledArray_ThrowUnimplementedDataOwnerCase_m2C657ACD8D66C1D47CB0880CE2AD37D7385A5538_RuntimeMethod_var)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsAllocator_Free_m3D757414A787767EE8BB9119071408A830E21835 (void* ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*BindingsAllocator_Free_m3D757414A787767EE8BB9119071408A830E21835_ftn) (void*);
	static BindingsAllocator_Free_m3D757414A787767EE8BB9119071408A830E21835_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BindingsAllocator_Free_m3D757414A787767EE8BB9119071408A830E21835_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bindings.BindingsAllocator::Free(System.Void*)");
	_il2cpp_icall_func(___0_ptr);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsAllocator_FreeNativeOwnedMemory_m2D5B34DB9B5653DEF78C118221D29AF5DD483ED9 (void* ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*BindingsAllocator_FreeNativeOwnedMemory_m2D5B34DB9B5653DEF78C118221D29AF5DD483ED9_ftn) (void*);
	static BindingsAllocator_FreeNativeOwnedMemory_m2D5B34DB9B5653DEF78C118221D29AF5DD483ED9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BindingsAllocator_FreeNativeOwnedMemory_m2D5B34DB9B5653DEF78C118221D29AF5DD483ED9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bindings.BindingsAllocator::FreeNativeOwnedMemory(System.Void*)");
	_il2cpp_icall_func(___0_ptr);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BindingsAllocator_GetNativeOwnedDataPointer_m3668639A4B328ECC1DBB756D0217BEAFE136F25A (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		NullCheck(L_0);
		void* L_1 = ((NativeOwnedMemory_t78EF0D467F14059891C564355B0AEFDE81175B2B*)L_0)->___data;
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleThrowHelper_ThrowArgumentNullException_m7F2DC9C17105429BA3367C6956EA28B7DB7A4D58 (RuntimeObject* ___0_obj, String_t* ___1_parameterName, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___1_parameterName;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleThrowHelper_ThrowArgumentNullException_m7F2DC9C17105429BA3367C6956EA28B7DB7A4D58_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleThrowHelper_ThrowNullReferenceException_mED48B07959D8C1FB63261F427C3AE14DEE66F26B (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_0 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleThrowHelper_ThrowNullReferenceException_mED48B07959D8C1FB63261F427C3AE14DEE66F26B_RuntimeMethod_var)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableArrayWrapper__ctor_m01973995E52FAF7C794F1E79C18EF18A132340B0 (BlittableArrayWrapper_t0A2B64A4A3E855FE9177EDF07099F1006B9F3589* __this, void* ___0_data, int32_t ___1_size, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableListWrapper__ctor_mC84D2E6F6FFAA8F331B7F5DF76C48D0142B73EBB (BlittableListWrapper_tFB8018FE60D97C869C64538C02A4A18C3B9294CA* __this, BlittableArrayWrapper_t0A2B64A4A3E855FE9177EDF07099F1006B9F3589 ___0_arrayWrapper, int32_t ___1_listSize, const RuntimeMethod* method) 
{
	{
		BlittableArrayWrapper_t0A2B64A4A3E855FE9177EDF07099F1006B9F3589 L_0 = ___0_arrayWrapper;
		MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 L_1 = L_0.___arrayWrapper;
		__this->___arrayWrapper = L_1;
		MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536* L_2 = (MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536*)(&__this->___arrayWrapper);
		int32_t L_3 = ___1_listSize;
		L_2->___size = L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionMarshaller_SetPendingException_mC29B71798C84232CB8D6669AD47258D2303290D7 (Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionMarshaller_t7B420501E566045746689D80747070C49FA2BFDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___0_ex;
		((ExceptionMarshaller_t7B420501E566045746689D80747070C49FA2BFDF_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionMarshaller_t7B420501E566045746689D80747070C49FA2BFDF_il2cpp_TypeInfo_var))->___s_pendingException = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ExceptionMarshaller_t7B420501E566045746689D80747070C49FA2BFDF_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionMarshaller_t7B420501E566045746689D80747070C49FA2BFDF_il2cpp_TypeInfo_var))->___s_pendingException), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntPtrObjectMarshalling_CreateDefault_m4F8A320EE6F89B67ABC377A7A291B6DA73FD884F (intptr_t ___0_type, intptr_t* ___1_nativePointer, const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mC5103EE3FE4FE245039B1107D6685296D9CC6560(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99AFA37AC0EE2B77EE281DB5399FEEDF77C37FB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntPtrObjectMarshalling_CreateDefault_m4F8A320EE6F89B67ABC377A7A291B6DA73FD884F_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntPtrObjectMarshalling_CreateFromNative_m964C63649DC46B2B7F7A303B80033CD74DD14C9B (intptr_t ___0_typePtr, intptr_t ___1_ptr, const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mC5103EE3FE4FE245039B1107D6685296D9CC6560(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99AFA37AC0EE2B77EE281DB5399FEEDF77C37FB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntPtrObjectMarshalling_CreateFromNative_m964C63649DC46B2B7F7A303B80033CD74DD14C9B_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtrObjectMarshalling_GetIntPtr_m7BBDB8A0F10ED0D586DD31ABA43569B5D61C7814 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mC5103EE3FE4FE245039B1107D6685296D9CC6560(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99AFA37AC0EE2B77EE281DB5399FEEDF77C37FB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntPtrObjectMarshalling_GetIntPtr_m7BBDB8A0F10ED0D586DD31ABA43569B5D61C7814_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtrObjectMarshalling_SetIntPtr_mD44828D6E626A82ECB7073E788EFAE31D9E41BBC (RuntimeObject* ___0_obj, intptr_t ___1_ptr, const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mC5103EE3FE4FE245039B1107D6685296D9CC6560(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99AFA37AC0EE2B77EE281DB5399FEEDF77C37FB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntPtrObjectMarshalling_SetIntPtr_mD44828D6E626A82ECB7073E788EFAE31D9E41BBC_RuntimeMethod_var)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedSpanWrapper__ctor_m64EF660BE4BF42BC17706387C68D2BCE779802EF (ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* __this, void* ___0_begin, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_begin;
		__this->___begin = L_0;
		int32_t L_1 = ___1_length;
		__this->___length = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringMarshaller_TryMarshalEmptyOrNullString_mA7E06E9C8BEF97EC745F7DE392C854F5F5B49999 (String_t* ___0_s, ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455* ___1_managedSpanWrapper, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OutStringMarshaller_GetStringAndDispose_m9D37307AC8BEF58DBD9A58B691D3CEF09FF24D01 (ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 ___0_managedSpan, const RuntimeMethod* method) 
{
	{
		ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 L_0 = ___0_managedSpan;
		int32_t L_1 = L_0.___length;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 L_2 = ___0_managedSpan;
		void* L_3 = L_2.___begin;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_3) == ((intptr_t)L_4)))
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_5;
	}

IL_0018:
	{
		return (String_t*)NULL;
	}

IL_001a:
	{
		ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 L_6 = ___0_managedSpan;
		void* L_7 = L_6.___begin;
		ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 L_8 = ___0_managedSpan;
		int32_t L_9 = L_8.___length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)L_7, 0, L_9, NULL);
		ManagedSpanWrapper_tE5AE0420F9CEEE99A6586A5D9E7E73C92BC01455 L_11 = ___0_managedSpan;
		void* L_12 = L_11.___begin;
		BindingsAllocator_Free_m3D757414A787767EE8BB9119071408A830E21835(L_12, NULL);
		return L_10;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SystemReflectionMarshalling_UnmarshalSystemType_mF33F046FC09763F6F9006B5902DC086AD310EC5B (intptr_t ___0_handlePtr, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		intptr_t L_0 = ___0_handlePtr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (Type_t*)NULL;
	}

IL_000f:
	{
		intptr_t L_2 = ___0_handlePtr;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3;
		L_3 = SystemReflectionMarshalling_UnmarshalRuntimeTypeHandle_m6C8FDF990AC7ACFB505BFF67D4777D7E67AB8BB5(L_2, NULL);
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B SystemReflectionMarshalling_UnmarshalRuntimeTypeHandle_m6C8FDF990AC7ACFB505BFF67D4777D7E67AB8BB5 (intptr_t ___0_handlePtr, const RuntimeMethod* method) 
{
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* L_0;
		L_0 = il2cpp_unsafe_as_ref<RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B>((&___0_handlePtr));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = (*(RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B*)L_0);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedByNativeCodeAttribute__ctor_m66BA7B0C002396A062FDA86102193E5AE3F4D121 (UsedByNativeCodeAttribute_tED735F025C1CC74BAA6B34A9BD2FC7CB1CB74BFE* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedByNativeCodeAttribute__ctor_mD57627694C965713EF128ECB837FC7C385A3FA8A (UsedByNativeCodeAttribute_tED735F025C1CC74BAA6B34A9BD2FC7CB1CB74BFE* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_name;
		UsedByNativeCodeAttribute_set_Name_m09634BC24D79F3A31969848ADB7C82072A8D5494_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsedByNativeCodeAttribute_set_Name_m09634BC24D79F3A31969848ADB7C82072A8D5494 (UsedByNativeCodeAttribute_tED735F025C1CC74BAA6B34A9BD2FC7CB1CB74BFE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute__ctor_m85C09448FAFAA7CE99878EBB78C8BFA8AEBDF1F9 (RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute__ctor_m999CC5AAA2D52BC7BD717C9D4E822157210F2D66 (RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_name;
		RequiredByNativeCodeAttribute_set_Name_m99F533EEADEACAF185EA404C0920B689DC94A623_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute__ctor_m4E90B21E31D7E7A19B6BB7FB6F7094EF26417BBE (RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5* __this, bool ___0_optional, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___0_optional;
		RequiredByNativeCodeAttribute_set_Optional_mCFD7F94B50EEDB547C839C503F9676CB2E047B0D_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute_set_Name_m99F533EEADEACAF185EA404C0920B689DC94A623 (RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute_set_Optional_mCFD7F94B50EEDB547C839C503F9676CB2E047B0D (RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3COptionalU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute_set_GenerateProxy_m22975660D9481C771FCCB9F88E60970993BF66F9 (RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CGenerateProxyU3Ek__BackingField = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mFBCD210335404CF77CBA91028DD699B1EF5A277F (PreserveAttribute_t1738E8F0C9331B6352A2D51C280CD0FA3AABD754* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UsedByNativeCodeAttribute_set_Name_m09634BC24D79F3A31969848ADB7C82072A8D5494_inline (UsedByNativeCodeAttribute_tED735F025C1CC74BAA6B34A9BD2FC7CB1CB74BFE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute_set_Name_m99F533EEADEACAF185EA404C0920B689DC94A623_inline (RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequiredByNativeCodeAttribute_set_Optional_mCFD7F94B50EEDB547C839C503F9676CB2E047B0D_inline (RequiredByNativeCodeAttribute_tC3699422778E86188FB8C37313809DF50628C1A5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3COptionalU3Ek__BackingField = L_0;
		return;
	}
}
