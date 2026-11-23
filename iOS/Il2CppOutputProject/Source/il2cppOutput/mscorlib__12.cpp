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

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8;
struct BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED;
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F;
struct CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
struct ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6;
struct KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4;
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A;
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B;
struct MethodInfo_t;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Parser_t6A7CE2538ABB8199316C04EA7019A63D2F863378;
struct RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9;
struct RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541;
struct RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7;
struct RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0;
struct RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017;
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170;
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A;
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C;
struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001;
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807;
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39;
struct RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19;
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE;
struct SHA1CryptoServiceProvider_tB1E1EB97160D3366AB4FF858F56D2734C2A6675F;
struct SHA1Internal_t63BFC4D44B43FD41AD65B8755CE4383D529B9A62;
struct SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478;
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9;
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C;
struct SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631;
struct SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC;
struct SHA512_t4D716D49F898611875B880291C726B1D1DE354C8;
struct SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SecurityDocument_t1EF9C739012187A2E853E30DA404D76829A108AE;
struct SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55;
struct String_t;
struct StringBuilder_t;
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8;
struct Tokenizer_tDC33FFEB2A356550D330747B62E1643ABE77D5C5;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PKCS1_t452C52E34A25E358B56E2A83A3ABEC0FF36EBF35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t6A7CE2538ABB8199316C04EA7019A63D2F863378_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSAManaged_t897B29EF76C459408E11A42680C942716D809001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHA1CryptoServiceProvider_tB1E1EB97160D3366AB4FF858F56D2734C2A6675F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04F339E2067485077633DE2026F6468EC3550949;
IL2CPP_EXTERN_C String_t* _stringLiteral05C15450D2F0DDDB7162178E1DBFA769201F00D7;
IL2CPP_EXTERN_C String_t* _stringLiteral085EB94908CA7962D8666204E1774BC6C4DAFE93;
IL2CPP_EXTERN_C String_t* _stringLiteral09EF2FDC3FAE6054A3CB18177E629410B6F521BD;
IL2CPP_EXTERN_C String_t* _stringLiteral0B31027F164515A1950B5D7471AE7856BE543763;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9F4D0749C191AA058D272D4A8D657770F4EC47;
IL2CPP_EXTERN_C String_t* _stringLiteral1009529A874680F74C20466A4DC605BB5FBE0343;
IL2CPP_EXTERN_C String_t* _stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1;
IL2CPP_EXTERN_C String_t* _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
IL2CPP_EXTERN_C String_t* _stringLiteral167E6E6EB13F42BCA02A2CAA251B92A9CCA2C7E4;
IL2CPP_EXTERN_C String_t* _stringLiteral16E9DD45E634B2228FB2D601F40B422756460D29;
IL2CPP_EXTERN_C String_t* _stringLiteral17BA770D472146F14CBDE2CFF7752F076430BCBE;
IL2CPP_EXTERN_C String_t* _stringLiteral19D9038AC1BF3C8D5DACB3B90F69218555A3642B;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5E6167C9670E5BC3AE1719704B0899C16A6934;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3E7AAC4DACF245D01365DAFBFC4E7CC149D9D4;
IL2CPP_EXTERN_C String_t* _stringLiteral1BB255AEC7801EA23874053F71A4B27CAE62FA4F;
IL2CPP_EXTERN_C String_t* _stringLiteral1F527C4F0133D516BCA172E511F39D05622AF8D5;
IL2CPP_EXTERN_C String_t* _stringLiteral21DDD46A31A90051E0424907A787DB1D19854FDB;
IL2CPP_EXTERN_C String_t* _stringLiteral364C07934203B37A9BDE4465A48ACF11B03DBF88;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3ACF9889056BF1B361FA0E5D4F4FBCE1A5609337;
IL2CPP_EXTERN_C String_t* _stringLiteral3B899E43C7F5ACD46D39930AA357B0AEF6D743CD;
IL2CPP_EXTERN_C String_t* _stringLiteral421D87CB39AEFB620F4500E914A7C45D02B4E8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral42F629CC32087815BDEE088698E50CE910A82D86;
IL2CPP_EXTERN_C String_t* _stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90;
IL2CPP_EXTERN_C String_t* _stringLiteral4C165AC935D6227499C3BBAAE617813538CCD53F;
IL2CPP_EXTERN_C String_t* _stringLiteral4EDB96BC7FB13DCA5DD4D432246DFF4E4C2768AF;
IL2CPP_EXTERN_C String_t* _stringLiteral510DDF106C5B1BC34025AB6E18D1490A125BE7EE;
IL2CPP_EXTERN_C String_t* _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B;
IL2CPP_EXTERN_C String_t* _stringLiteral55A326D360D02C44975E4A74CD36AA58A27ABDAE;
IL2CPP_EXTERN_C String_t* _stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA8506F2D4A43268C4972888A4AB14A363FFC93;
IL2CPP_EXTERN_C String_t* _stringLiteral683A95818280F9859694F418A2FD0A817678C9DB;
IL2CPP_EXTERN_C String_t* _stringLiteral754E9D0DA5D0AA6E78CF7A6A990E76FC40CB2117;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral843721C7127A167D5AB501DA6E84766B8AA89A08;
IL2CPP_EXTERN_C String_t* _stringLiteral85F02773B30D7E03E02058A46638441028F4AD00;
IL2CPP_EXTERN_C String_t* _stringLiteral87254B87EFE7A82850E53C9703C3E9FAF7F20C3F;
IL2CPP_EXTERN_C String_t* _stringLiteral882AD41FD98E301986427165C0B4D87BA813F51E;
IL2CPP_EXTERN_C String_t* _stringLiteral912A82BAAC370D79146E0671264D84DF2EE0A910;
IL2CPP_EXTERN_C String_t* _stringLiteral924AEFB6378CB06F66BFB22C0F29341E17E55FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral957AD0C0A464CD75ADA45D0ADE41A7DE8D134D5D;
IL2CPP_EXTERN_C String_t* _stringLiteral97B6B54C4BC93ACD2AE3E79C7D8301B9848A9ACA;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralAC4897A73F30B50F7A20E6701A6556743DEC3465;
IL2CPP_EXTERN_C String_t* _stringLiteralB09A7EB2043BD75CFD923CD1922392FD00DBA589;
IL2CPP_EXTERN_C String_t* _stringLiteralB16364632FFDA7CF8AB0EF198C603812CB7ECD94;
IL2CPP_EXTERN_C String_t* _stringLiteralB6ECC951044973F59B3140CDD58CEABD8A4A8855;
IL2CPP_EXTERN_C String_t* _stringLiteralB786F94A76805784693B800EE79057F12D559607;
IL2CPP_EXTERN_C String_t* _stringLiteralBB87AD62156342FD78943479E2E2D70AA96017CD;
IL2CPP_EXTERN_C String_t* _stringLiteralBCE0872F5165E6C8FE1F549A5FF8610489DA81A0;
IL2CPP_EXTERN_C String_t* _stringLiteralBF2563E74F9540023FD791064905E23A69F0A847;
IL2CPP_EXTERN_C String_t* _stringLiteralC0178A80B5F0EC925E6A79673FB00AB1CC3CED51;
IL2CPP_EXTERN_C String_t* _stringLiteralC48047DC30C0105AD0A35E895D497910257F3688;
IL2CPP_EXTERN_C String_t* _stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17;
IL2CPP_EXTERN_C String_t* _stringLiteralD83E6451A66A42CA6C15A0E72F329277C30648E8;
IL2CPP_EXTERN_C String_t* _stringLiteralDABBB9C036193D85D6C01708C64DD345BCE1FCC4;
IL2CPP_EXTERN_C String_t* _stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73;
IL2CPP_EXTERN_C String_t* _stringLiteralE156F349FFEB7E37AADF61D5759C8AD59E404A4D;
IL2CPP_EXTERN_C String_t* _stringLiteralF05661A5CE0E6BCE422902F2071C70CE8276C2CE;
IL2CPP_EXTERN_C String_t* _stringLiteralF2F225F8883699F8AB0D8A2E36E1F91F3C91320A;
IL2CPP_EXTERN_C String_t* _stringLiteralF7C58A06A3AA45E378C72A78FCD067F110CEC438;
IL2CPP_EXTERN_C String_t* _stringLiteralF8BD9A7F60F0A925FBA0FA74162E5EC956585C8D;
IL2CPP_EXTERN_C String_t* _stringLiteralF92983BF587E917A224D8A0A152F85AB3B9C7CA6;
IL2CPP_EXTERN_C String_t* _stringLiteralFB04E57151EC195DBDBED5827D22C5146A2B0C12;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34;
IL2CPP_EXTERN_C const RuntimeMethod* RC2CryptoServiceProvider_CreateDecryptor_m02BB8EF7CE89FCB7B4D65C14A01C91F51CF5C0E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC2CryptoServiceProvider_CreateEncryptor_mFF1F4E37A7D9FB0F114897016EF9FA29D5EB86C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC2CryptoServiceProvider__ctor_mC6C627AF436F5CC74BC74B0B2924210769B6DE59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RC2_set_KeySize_m571205E2818BE2DF3E61A7743C0F8A9BFA1770C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RIPEMD160Managed__ctor_m7A61ACB69319E21CDB19248D67B2E068F0A90F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSACryptoServiceProvider_Common_mFBF1A75D8845D897D1D7918FEDA9E43ED5C60037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSACryptoServiceProvider_ExportParameters_m8980F0F7F7040DD1AE134A388DCDAD85200C4997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSACryptoServiceProvider_GetHashNameFromOID_m65191D5425D9DFB12648C9B96D29092863E6D5CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSACryptoServiceProvider_OnKeyGenerated_mF4F409622B100A87075A653C416A882CAB51030F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSACryptoServiceProvider_VerifyHash_m8638C767565FA34974E2537EA44FBD30AE796ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSA_EncryptValue_m3FE5D9069FDBF156E443C2045216C1F98B9BCA03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RSA_FromXmlString_m2D91EC1FA91EFE3AB2E6A83CA6E7EA19E4AD0E3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RijndaelManagedTransform_EncryptData_m73E1872DFCB22C6FEFA3EAAC623B6DDB75E433D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RijndaelManagedTransform_GenerateKeyExpansion_mAAEEC20C8B3AE40E5F2701BAF651CF7EF317266D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RijndaelManagedTransform_TransformBlock_mAE10B83EAE53673A980E6AC1F726F0395BECB433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RijndaelManagedTransform_TransformFinalBlock_m9C283374D582D8924D6E63E61EBAFDE76024A86F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RijndaelManagedTransform__ctor_mD1F6B761C562BF69146E59A4C6F2638B76BAC543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SHA1Managed__ctor_m121A32E272AF588A533354D0D2558A1A6A0BBDEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SHA384Managed__ctor_m74FB06DE60901FB22E145BFEFD3DB27EF0F2B4AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SHA512Managed__ctor_m655EE905F876E121FA9C8D29C578F2C8230B1371_RuntimeMethod_var;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____125CF2084D7EEC18DC9795BE4BAA221655C0EABAB89E90A74FB0370378A60293_RVAStorage;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B_RVAStorage;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04_RVAStorage;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____78AD7906208AA1E531D0C1100062DE3D252210B1E4214061294A0BB7C94762B8_RVAStorage;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____B215DD70A77190680641703C6DF73729B4583E285AF8B51ACF9086655FB2D0F3_RVAStorage;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2_RVAStorage;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____CE11D6DEAFFC6D6EF6030E30E7444C933E6261F32AA737064EF0446C219ECE22_RVAStorage;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____E148B2057CF0C1595155635E761FB66AAE634C40D8FABC4CE79A2DB8886525D4_RVAStorage;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50  : public RuntimeObject
{
};
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8  : public RuntimeObject
{
	int32_t ___KeySizeValue;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue;
};
struct CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3  : public RuntimeObject
{
	int32_t ___ProviderType;
	String_t* ___ProviderName;
	String_t* ___KeyContainerName;
	int32_t ___KeyNumber;
	int32_t ___m_flags;
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	bool ____disposed;
	int32_t ___HashSizeValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue;
	int32_t ___State;
};
struct KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6  : public RuntimeObject
{
	CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* ____params;
	String_t* ____keyvalue;
	String_t* ____filename;
	String_t* ____container;
};
struct KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4  : public RuntimeObject
{
	int32_t ___m_minSize;
	int32_t ___m_maxSize;
	int32_t ___m_skipSize;
};
struct Parser_t6A7CE2538ABB8199316C04EA7019A63D2F863378  : public RuntimeObject
{
	SecurityDocument_t1EF9C739012187A2E853E30DA404D76829A108AE* ____doc;
	Tokenizer_tDC33FFEB2A356550D330747B62E1643ABE77D5C5* ____t;
};
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3  : public RuntimeObject
{
};
struct SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55  : public RuntimeObject
{
	String_t* ___text;
	String_t* ___tag;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___attributes;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___children;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
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
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Exponent;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Modulus;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Q;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DP;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DQ;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InverseQ;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___D;
};
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_pinvoke
{
	Il2CppSafeArray* ___Exponent;
	Il2CppSafeArray* ___Modulus;
	Il2CppSafeArray* ___P;
	Il2CppSafeArray* ___Q;
	Il2CppSafeArray* ___DP;
	Il2CppSafeArray* ___DQ;
	Il2CppSafeArray* ___InverseQ;
	Il2CppSafeArray* ___D;
};
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_com
{
	Il2CppSafeArray* ___Exponent;
	Il2CppSafeArray* ___Modulus;
	Il2CppSafeArray* ___P;
	Il2CppSafeArray* ___Q;
	Il2CppSafeArray* ___DP;
	Il2CppSafeArray* ___DQ;
	Il2CppSafeArray* ___InverseQ;
	Il2CppSafeArray* ___D;
};
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct SHA512_t4D716D49F898611875B880291C726B1D1DE354C8  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4__padding[10];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55__padding[1018];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07__padding[1024];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5__padding[10800];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373__padding[12];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413__padding[120];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284__padding[1208];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF__padding[128];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E__padding[130];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C__padding[1450];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070__padding[1472];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7__padding[15];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1__padding[152];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3__padding[16];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D__padding[1665];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155__padding[170];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6__padding[172];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6__padding[174];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_t548A67B8FAEBE929F5BE1C5FA92A7708E5A34C85 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t548A67B8FAEBE929F5BE1C5FA92A7708E5A34C85__padding[20];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355__padding[2048];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE__padding[2100];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A__padding[212];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A__padding[2176];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC__padding[2350];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630__padding[2382];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14__padding[24];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265__padding[240];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143__padding[256];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37__padding[262];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D28_t34EAC035C50566A024A2BBD8522AC245D494580E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t34EAC035C50566A024A2BBD8522AC245D494580E__padding[28];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51__padding[288];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312__padding[3];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3132_tF0F1005A79A2387D724DFD9EE4EDC366B0A4914C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_tF0F1005A79A2387D724DFD9EE4EDC366B0A4914C__padding[3132];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0__padding[32];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970__padding[336];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4__padding[36];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00__padding[360];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E__padding[38];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08__padding[40];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669__padding[4096];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A__padding[42];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE__padding[44];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116__padding[48];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89__padding[52];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D56_tCF60E23359634B97A792A75277ACC2176949BCE7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_tCF60E23359634B97A792A75277ACC2176949BCE7__padding[56];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD__padding[5952];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B__padding[6];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5__padding[64];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D640_t910C17DFA2BEC9D837C794531BFFFE8A70E81109 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D640_t910C17DFA2BEC9D837C794531BFFFE8A70E81109__padding[640];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE__padding[648];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC__padding[72];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61__padding[76];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3__padding[84];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B__padding[94];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E__padding[998];
	};
};
#pragma pack(pop, tp)
struct CipherMode_t932070F221590D5F955DE31430C6EAA91B97F027 
{
	int32_t ___value__;
};
struct CspProviderFlags_tE84737C4FE8BB969ADE9D11702DB91D3165D668F 
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
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B  : public MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____H;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buff;
	uint64_t ___count;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____ProcessingBuffer;
	int32_t ____ProcessingBufferCount;
};
struct PaddingMode_t938E0AB76C80739DB1BB44D7D6B9B94C03B72E1D 
{
	int32_t ___value__;
};
struct RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017  : public RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int64_t ____count;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____stateMD160;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____blockDWords;
};
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170  : public RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3
{
	intptr_t ____handle;
};
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* ___store;
	bool ___persistKey;
	bool ___persisted;
	bool ___privateKeyExportable;
	bool ___m_disposed;
	RSAManaged_t897B29EF76C459408E11A42680C942716D809001* ___rsa;
};
struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	bool ___isCRTpossible;
	bool ___keyBlinding;
	bool ___keypairGenerated;
	bool ___m_disposed;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___d;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___p;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___q;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___dp;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___dq;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___qInv;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___n;
	BigInteger_t558902B37952162AF8408D05F8341E49AACAC1ED* ___e;
	KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC* ___KeyGenerated;
};
struct RijndaelManagedTransformMode_t33650C741B47AA120D56BCD94B473406BBFB436D 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct SHA1CryptoServiceProvider_tB1E1EB97160D3366AB4FF858F56D2734C2A6675F  : public SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE
{
	SHA1Internal_t63BFC4D44B43FD41AD65B8755CE4383D529B9A62* ___sha;
};
struct SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478  : public SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int64_t ____count;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____stateSHA1;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____expandedBuffer;
};
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C  : public SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int64_t ____count;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____stateSHA256;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____W;
};
struct SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC  : public SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	uint64_t ____count;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____stateSHA384;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____W;
};
struct SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B  : public SHA512_t4D716D49F898611875B880291C726B1D1DE354C8
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	uint64_t ____count;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____stateSHA512;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____W;
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
struct RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19  : public RuntimeObject
{
	int32_t ___m_cipherMode;
	int32_t ___m_paddingValue;
	int32_t ___m_transformMode;
	int32_t ___m_blockSizeBits;
	int32_t ___m_blockSizeBytes;
	int32_t ___m_inputBlockSize;
	int32_t ___m_outputBlockSize;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_encryptKeyExpansion;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_decryptKeyExpansion;
	int32_t ___m_Nr;
	int32_t ___m_Nb;
	int32_t ___m_Nk;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_encryptindex;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_decryptindex;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_IV;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_lastBlockBuffer;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_depadBuffer;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_shiftRegister;
};
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	int32_t ___BlockSizeValue;
	int32_t ___FeedbackSizeValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue;
	int32_t ___KeySizeValue;
	int32_t ___ModeValue;
	int32_t ___PaddingValue;
};
struct SymmetricTransform_tDD1D096506ADC83C468EE253DE76D1EB315DAC43  : public RuntimeObject
{
	SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* ___algo;
	bool ___encrypt;
	int32_t ___BlockSizeByte;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___temp;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___temp2;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workBuff;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workout;
	int32_t ___padmode;
	int32_t ___FeedBackByte;
	bool ___m_disposed;
	bool ___lastBlock;
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ____rng;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
	int32_t ___EffectiveKeySizeValue;
};
struct RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7  : public SymmetricTransform_tDD1D096506ADC83C468EE253DE76D1EB315DAC43
{
	uint16_t ___R0;
	uint16_t ___R1;
	uint16_t ___R2;
	uint16_t ___R3;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___K;
	int32_t ___j;
};
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};
struct KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC  : public MulticastDelegate_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541  : public RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9
{
	bool ___m_use40bitSalt;
};
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39  : public Rijndael_t282661761E53E282457A31F5675ACF53D64EE807
{
};
struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields
{
	__StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5 ___001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2;
	__StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155 ___021022D5891F99B3B525763EB77BAEC69B107268F560721F5060FCDBD4D5AAE8;
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476;
	__StaticArrayInitTypeSizeU3D56_tCF60E23359634B97A792A75277ACC2176949BCE7 ___07FA6E88C946B2528C09C16C2FB8E9CDA49AFFAFC601774C437FD9F2DF3ECE01;
	__StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3 ___0C496C9AE05419BD25256D0EF4F31AFD291119F14B8BD683BF1774F91E08659D;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C;
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___0F9E3C7E66CDEF5C44FA29E65CA676C480F7A2A4A067F70107FDC292C68D38B0;
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___1199C3B39A2FA058EFF5B3829616AE81EE2B59A51D89C107A5FA4B6FEF95DD16;
	__StaticArrayInitTypeSizeU3D640_t910C17DFA2BEC9D837C794531BFFFE8A70E81109 ___125CF2084D7EEC18DC9795BE4BAA221655C0EABAB89E90A74FB0370378A60293;
	__StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE ___12D518BA10F3DD1A331E65FBD4C330930C0A0BD9F50F37BE0BDF596E964B9A78;
	__StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF ___195ABC1ABB69B6BD65F20ACAFA79EED2D330BF513E25C830F24B8A78D8703446;
	__StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4 ___1A07BC77B9912D8D87E9B28E0167F53A9B09BB017B35A35F3913989C9440A60B;
	__StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C ___1B9CC34A0CF8DBCC350E200673FAC4124DDAD581F1FC2C16FF9A1C0154691687;
	__StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00 ___1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B;
	__StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A ___1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2;
	__StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4 ___215E3E0B11A214B3198654E87B3D953AC8FB1ABC7045AF841A7C4892624BDE49;
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___2403FBEA85D0741C5727760E97EF16C9BF23294F21C0F1265A4BAF7F22202A64;
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___24CB9F17C8326D8BB8EC908716519DF7F265AE825F0DD13BB04E03A90B07D90E;
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___25308BAB47481701F1E861B1EA4F2409E73ABB14E9579C26DF4ABE440A0DCF0A;
	__StaticArrayInitTypeSizeU3D3132_tF0F1005A79A2387D724DFD9EE4EDC366B0A4914C ___25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F;
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4;
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___42E1421FC2A5A6A33E964D7EB9603EB101818D858DDA09B2BC9B5A888C1C351C;
	__StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B ___44D066BAE9848B4A4B2C31F1854666526A32D0588635569423BDA1DA303C97DF;
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 ___4623CA5867960AA898AA1F65E720CD5ECD3552542E0C6F6FB65B21D14DD1CBC2;
	__StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116 ___4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6;
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669 ___493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B;
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 ___494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046;
	__StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630 ___4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0;
	__StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE ___508085E0DDEEA9CE48BFAE98CEC779F8D06301AE973555D37680D08190CAFA70;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006;
	__StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A ___5292FD0A8E62FCCBE41F34EFE7575D097990A66FE23B3507971C5BF272A4362E;
	__StaticArrayInitTypeSizeU3D20_t548A67B8FAEBE929F5BE1C5FA92A7708E5A34C85 ___533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA;
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9;
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___55D0BF716B334D123E0088CFB3F8E2FEA17AF5025BB527F95EEB09BA978EA329;
	__StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5 ___56073E3CC3FC817690CC306D0DB7EA63EBCB0801359567CA44CA3D3B9BF63854;
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA;
	__StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 ___5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF;
	__StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B ___61D639BE11384EE21CDE2B40357F4F9D80A106C97C592D18A9F4CAA442CA5D31;
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___62E6F13B53D67FDD780E20D89A6E8EE503B197AC16AC3F1D2571C147FDD324C9;
	__StaticArrayInitTypeSizeU3D28_t34EAC035C50566A024A2BBD8522AC245D494580E ___64A0AD5A7BF0B569FABE66AF3006423DA81FF79CD282E8D781CD013B1FD7D5CE;
	__StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355 ___668BB69E184E0C32DC3BC488001C506C87EE5A95C7E7B6B87D24C3A6DC779956;
	__StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116 ___6708B572BDBE5D5E79701DBB9744AF74B50FED7608218F2D7BF1B5D87E5A53ED;
	__StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE ___67856A16DB0550FDAB4D1A9B208B0C155C4679CA116BF867B74ED2A0AA4D2955;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85;
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A ___71F7F6B226CBC11C8B26D506869FAE022928427389882579DB316F36FF34A096;
	__StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355 ___73F5D95C401726B2C92EC96A696BA15F0E5A5C6DD9AC6BEB3736A81772A11531;
	__StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51 ___74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20;
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04;
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 ___78AD7906208AA1E531D0C1100062DE3D252210B1E4214061294A0BB7C94762B8;
	__StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070 ___7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915;
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___801494072CDD59E61F9AA9345A80D045378705DFDCE94902C22EAEAE049BE780;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77;
	int64_t ___82B100804CE219CD73E155C7C6457FCF04EA539DE5B19F4736E800098714EB21;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10;
	__StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E ___86BDA34D2165AC08F2DE4918B302E44205CDEA674FCA7F2C7F56D4F12D8B0C73;
	int64_t ___8BFD94DEAAC0F168DC8B50A00AC120A113B550B68FEF344F807D503D1A6E5DED;
	__StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D ___8CCE27079B32C13BB310169A6AD26AE419CDC98B7E2EFD3CC9997257F4BC1DEF;
	__StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD ___9086502742CE7F0595B57A4E5B32901FF4CF97959B92F7E91A435E4765AC1115;
	__StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970 ___93B42898102ACB2421875C45676880B8A07390D8DF0E1EE85C5D1AA26964B0C6;
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___93F28AF88A06482BE13F8D0354B6A7676DDAED573EA3938C50F6E53E6D6BB0B6;
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 ___95BDE712712F10D07813AE3DEEA40D1F38E3FCF1A92CC435F17A326CC22242EB;
	__StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37 ___964889A5283FD0A3DFC8AE256721E6F67B8212FD6841AB1C821DE3134DE79B07;
	__StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7 ___96E3FDE919EC36694EFBEC22FEF80F84EE640CC5E46CED07C3E65AC04607C7D6;
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___9960C7FC60CDD325C8A2A00995BE7064EAC3F6295C6A5C4E797D2281846131E4;
	__StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE ___99E66DACA3EFF94776AF1258E0E5B2F4DF2900E4EA32351B0DF37A87F2426B1F;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9;
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 ___A2DFDF9C2CED8BB1C0B9B06064345ACC9C22DFE5FEC9976FF061F0994451519B;
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___A2EC7CB9B0FE89F9A9BEA547D773225AFE6E4535DF28325A0D6CD7A5E2D20376;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA;
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08 ___A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF;
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669 ___B215DD70A77190680641703C6DF73729B4583E285AF8B51ACF9086655FB2D0F3;
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5;
	__StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A ___B55F94CD2F415D0279D7A1AF2265C4D9A90CE47F8C900D5D09AD088796210838;
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___BABD01C34E7E65E57E4C431281E782B4101CE0644A8090AD6E501F1C6CF2C9DF;
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0;
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___C250CAD28060A4EB63B4C4A643DDA196CCD35FD2FC67FB749ADF4BAC6D62E1A0;
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F;
	__StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07 ___C8EC70AC5A448C3A45CF1DFCC1375BE4E80DC6793E97D5E89BD97A0DC232B2E3;
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB;
	__StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E ___C9830DF6956357ACE51CE1F82298578B36EB45A0CFDB8AEC5B9FDA7DB17E8063;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016;
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___CAFFFC9D15E4037EE8FBDB1A45DFE456F0936BDC7310F1882EAF14B706A76658;
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669 ___CE11D6DEAFFC6D6EF6030E30E7444C933E6261F32AA737064EF0446C219ECE22;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1;
	__StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B ___D3B16F8D71CB719B941527D5A1ADA7ED83F4EB967FEE117DDA2FE4021E1D283F;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631;
	__StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6 ___D6691EE5A533DE7E0859066942261B24D0C836D7EE016D2251377BFEE40FEA15;
	__StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355 ___D870074914025E855AA5985A2D6778F1E277036BF9C9F03DEC61F3C496FEC35C;
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___D896D464C3726A21162F271ACB711464AD07EA9C9CE78E0297FD0DE934471FA6;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3;
	__StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC ___DCE88EE5233B9D0FD0D7A6222C82BC3AEE83B15E9992F939B17AB40530DB555C;
	__StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1 ___DD471F12FFA94CC557A02A91C2CBB95F551AB28C8BBF297B2F953B8886BCCF6D;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D;
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669 ___E148B2057CF0C1595155635E761FB66AAE634C40D8FABC4CE79A2DB8886525D4;
	__StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E ___E2C673A3A737B04369A63F1FB1A30F6E742B066E2CCCD9B1838793CBB5590598;
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___E32C465157D21F39B3DBF186A98FB02185C63B0260B47247A7A5FDF2B061EAA8;
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 ___E5F4F6214036DF103321A8A0CE30C2EF935694B4199D52BC538E7EF3F045CB92;
	__StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5 ___E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B;
	__StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55 ___E8588351183F6F6A7DAD54DC28357628F3C4D4B358AB92A18AE7D08B0D9B0092;
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___EBE07C3718876777F609CD22058F4C3A6CCCC695F5BDE90998DC1E12E0CBE63D;
	__StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 ___EE415D5C3ECC6C8C19F71BCD4E03847F5A15931374A7F5BF88C24B722F04B8FE;
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___EF39C5A882F9477B2A250BA257247825CEB07FC53C3C984385F2C2E5F8222431;
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___EF82B163CA8252A793A6E73F57775D843C9A21F65586926EB11893FA8BB603E9;
	__StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 ___F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB;
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312 ___F1945CD6C19E56B3C1C78943EF5EC18116907A4CA1EFC40A57D48AB1DB7ADFC5;
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8;
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563;
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A ___F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3;
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315;
	__StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284 ___FB2089AF82E09593374B65EC2440779FDCF5DD6DA07D26E57AF6790667B937CD;
	__StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 ___FD68700E95459C5E7A49C5830F8BD0A9BA4BD171252663D8066B09E7768C5C5D;
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 ___FEC387BA57A54BB6066E4CA8A4F9C0FF9C36B9CBD6600C3683F6FB1BDB5077EB;
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty;
};
struct KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6_StaticFields
{
	bool ____userPathExists;
	String_t* ____userPath;
	bool ____machinePathExists;
	String_t* ____machinePath;
	RuntimeObject* ___lockobj;
};
struct SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_tag_chars;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_text_chars;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_attr_name_chars;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_attr_value_chars;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___invalid_chars;
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
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___K;
};
struct RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_StaticFields
{
	RuntimeObject* ____lock;
};
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_StaticFields
{
	int32_t ___s_UseMachineKeyStore;
};
struct SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____K;
};
struct SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticFields
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____K;
};
struct SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticFields
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____K;
};
struct RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_Sbox;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_Rcon;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_T;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_TF;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_iT;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_iTF;
};
struct RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_StaticFields
{
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes;
};
struct RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pitable;
};
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields
{
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes;
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes;
};
struct RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_StaticFields
{
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03  : public RuntimeArray
{
	ALIGN_FIELD (8) KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* m_Items[1];

	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* value)
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



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067 (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09 (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymmetricAlgorithm__ctor_mB028F36D59487421C796D35BE91150C3BDFCEC5A (SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058 (String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymmetricAlgorithm_set_KeySize_m2C9A68250B608A9B36DB5A9ED1DE887D9458BDF2 (SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104 (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* __this, int32_t ___0_minSize, int32_t ___1_maxSize, int32_t ___2_skipSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2__ctor_m94A6F88E8969E391B1DD483862C429978A4289F4 (RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CryptoConfig_get_AllowOnlyFipsAlgorithms_mA16FE662AA39F2F95122B1DF80564FD3C3EECF6B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_HasAlgorithm_mAA3A48D94C841B4E5646F691BB0E7BACBAB717E0 (int32_t ___0_dwCalg, int32_t ___1_dwKeySize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2Transform__ctor_m51A6DD03C2B3A918F64F40D3C2F96B00EE49EFEA (RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7* __this, RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9* ___0_rc2Algo, bool ___1_encryption, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_iv, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* Utils_get_StaticRandomNumberGenerator_mE0A165662E0A5BC22FE7FDBE77CA07CC31D2DC6B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rijndael__ctor_m713B46B5009EA3F1B078211B039C5F2400D80FFE (Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RijndaelManaged_NewEncryptor_m609455DF427C98226BC3EA551EF95B6747B87C9F (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbKey, int32_t ___1_mode, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_rgbIV, int32_t ___3_feedbackSize, int32_t ___4_encryptMode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Utils_GenerateRandom_m46C9652C8F757092A322C471EB8A384EFA1180C0 (int32_t ___0_keySize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform__ctor_mD1F6B761C562BF69146E59A4C6F2638B76BAC543 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbKey, int32_t ___1_mode, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_rgbIV, int32_t ___3_blockSize, int32_t ___4_feedbackSize, int32_t ___5_PaddingValue, int32_t ___6_transformMode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform_GenerateKeyExpansion_mAAEEC20C8B3AE40E5F2701BAF651CF7EF317266D (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbKey, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5 (RuntimeArray* ___0_src, int32_t ___1_srcOffsetBytes, RuntimeArray* ___2_dst, int32_t ___3_dstOffsetBytes, int32_t ___4_byteCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform_Dispose_mF9EF14E5A6559CEFC966A6B957BA6E99B22B34B7 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_EncryptData_m73E1872DFCB22C6FEFA3EAAC623B6DDB75E433D4 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inputBuffer, int32_t ___1_inputOffset, int32_t ___2_inputCount, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___3_outputBuffer, int32_t ___4_outputOffset, int32_t ___5_paddingMode, bool ___6_fLast, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inputBuffer, int32_t ___1_inputOffset, int32_t ___2_inputCount, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___3_outputBuffer, int32_t ___4_outputOffset, int32_t ___5_paddingMode, bool ___6_fLast, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform_Reset_m0A01E6C9AB2E6D1D0B4892A68BDC30F41A558C54 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memcpy_mD0ABB1CFA4E5CD409977A2E19D002C8589324A41 (uint8_t* ___0_pDest, int32_t ___1_destIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_src, int32_t ___3_srcIndex, int32_t ___4_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform_Enc_mBC8F3DE74DECA755F832AAE060703DA79382931C (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, int32_t* ___0_encryptindex, int32_t* ___1_encryptKeyExpansion, int32_t* ___2_T, int32_t* ___3_TF, int32_t* ___4_work, int32_t* ___5_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memcpy_m87345ACEE449F8CEA42341BC9F4AFC3743EF96D1 (uint8_t* ___0_dest, uint8_t* ___1_src, int32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform_Dec_m1B1D3DA43A43958141E72C6E58D3EE694D033C20 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, int32_t* ___0_decryptindex, int32_t* ___1_decryptKeyExpansion, int32_t* ___2_iT, int32_t* ___3_iTF, int32_t* ___4_work, int32_t* ___5_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_rot3_mC256E018A1372D35D21A4786C68EDEAE99D7328E (int32_t ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_SubWord_m0C9E2276F0B1B3DC886E776C35B6A2A258392C15 (int32_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_MulX_m4D29B34854F83AF9A803DA63F2EE632F8F21076E (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_rot2_mE287C14754453D18776FF20479E8E689DAD8E812 (int32_t ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_rot1_m5C9B7277D9CB12B69889B13AEAC78AA48197A518 (int32_t ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160Managed__ctor_m7A61ACB69319E21CDB19248D67B2E068F0A90F9B (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160__ctor_m607085A4057F40B3D531017C4D25298CACD393F0 (RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160Managed_InitializeState_m1CF5C2E6896C5F05FA04DCABE83BE7A22580C2A0 (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160Managed__HashData_m609CCFFA119605035B3812D13E2052210B0FEDFD (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_partIn, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RIPEMD160Managed__EndHash_m78FAA89B5187A8F7D8F49CDA1EB1EC490BD0B1E8 (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160Managed_MDTransform_mFA6339C9D5B302EC71DA09C882E729D50C108B27 (uint32_t* ___0_blockDWords, uint32_t* ___1_state, uint8_t* ___2_block, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_DWORDToLittleEndian_mCE59B477B258C78B5C18225FFCC443B5D3268EA8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_digits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_DWORDFromLittleEndian_m5D4F77444B1A8EF6FD408C7A8899010BF2957B1E (uint32_t* ___0_x, int32_t ___1_digits, uint8_t* ___2_block, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679 (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307 (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924 (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsymmetricAlgorithm__ctor_m6B15CBCEA8C5C867059BBEE94EF8CACDE106A143 (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_mE4BC404364B89F41C863EC3860ED4B9D7DD7A06F (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m6302B6B3CBD47EB25810F7DA50CAB0EDDAB2A039 (Parser_t6A7CE2538ABB8199316C04EA7019A63D2F863378* __this, String_t* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* Parser_GetTopElement_m59236914846FFF7D0EA00722392C9583FD74B479 (Parser_t6A7CE2538ABB8199316C04EA7019A63D2F863378* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecurityElement_SearchForTextOfLocalName_m74A19EC2C8BA0424B34EDC6E6D8CB765D81067B1 (SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* __this, String_t* ___0_strLocalName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259 (String_t* ___0_key, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_DiscardWhiteSpaces_m7943E6B191C018429583BADB995B6CBF8DDE3792 (String_t* ___0_inputBuffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m74A4B904FEAADB8D68D54E0DD680AE532042FFE9 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, int32_t ___0_dwKeySize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m95594DB8505C25F75C6D4E0672AB7919D50E8B1B (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, int32_t ___0_dwKeySize, CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* ___1_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSA__ctor_mBBB2BDB3545EC263517C4882739F3D79990F7630 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider_Common_mB4886190942D48EED5F08EAA87516FA7BC7EE37B (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, int32_t ___0_dwKeySize, bool ___1_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider_Common_mFBF1A75D8845D897D1D7918FEDA9E43ED5C60037 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsymmetricAlgorithm_set_KeySize_mD1671D252CCA9F1E78F865817F4F13B157BDB5AD (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged__ctor_m4B552B282B99F6BC184D8CB99FF5A2ECE82714C3 (RSAManaged_t897B29EF76C459408E11A42680C942716D809001* __this, int32_t ___0_keySize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler__ctor_m5175361C70B5DFE4CDDE90986969DCDF098DD58F (KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged_add_KeyGenerated_m7FA3B020FB6D782A60C45165A1B753D9EC4549A2 (RSAManaged_t897B29EF76C459408E11A42680C942716D809001* __this, KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CspParameters__ctor_m13501EC2E6431EAB226063DACD25AB408DD954C8 (CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* __this, int32_t ___0_dwTypeIn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RSACryptoServiceProvider_get_UseMachineKeyStore_m3C3D83294EA42CD6E3EA2C7DFE42E39F29895D04 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CspParameters_set_Flags_m9C1F8339A1C321C6EDCB76E6038B7786D9EA7F6A (CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyPairPersistence__ctor_mEDAD0CB8925F5188D527B6FF85B481D94DEDD5DC (KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* __this, CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* ___0_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyPairPersistence_Load_m54CA39F726BE9A2A0E1F68C36ED67FA3A4C49A78 (KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RSAManaged_get_PublicOnly_m342FC195A5AADA4012C269D2F45486C5729EFE6F (RSAManaged_t897B29EF76C459408E11A42680C942716D809001* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RSACryptoServiceProvider_GetHashNameFromOID_m65191D5425D9DFB12648C9B96D29092863E6D5CF (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, String_t* ___0_oid, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* HashAlgorithm_Create_mCCF58B59C5F93DE5220039DDDEE7486C8D104AFC (String_t* ___0_hashName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PKCS1_Verify_v15_mE4B2E0EC61E47745711DF0307C2096DE70768D2F (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___0_rsa, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___1_hash, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_hashValue, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_signature, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyPairPersistence_Remove_mBF912685AFD920126AACBF2950893576F4308888 (KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsymmetricAlgorithm_Clear_m786C408F7FFE6844D1C2A44F085D28055B61DEE6 (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyPairPersistence_set_KeyValue_m4FFF2A6100E07BF33C1EB0D4C98E3ECDC536D6EB (KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyPairPersistence_Save_m19F91B457374C019AB4BDDECA7E02A30DBFBC801 (KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1CryptoServiceProvider__ctor_mD863AABD787970AB697A5013890F672428608C0C (SHA1CryptoServiceProvider_tB1E1EB97160D3366AB4FF858F56D2734C2A6675F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1__ctor_m7132D34515F4EE573D30BCE82420DFE376757299 (SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed_InitializeState_mC573FB9F933ADA6EAE2BCBBA972DF292CD7B5F96 (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed__HashData_mD1D36C9A750B40701EFAC11EE9A71B376AB9D684 (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_partIn, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA1Managed__EndHash_m7A35BAB8DD676C3D36B6FF925CF5A714208E39B7 (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed_SHATransform_m9DAE27BCA41E2FB5ECE1DFA3D5991C5699018F44 (uint32_t* ___0_expandedBuffer, uint32_t* ___1_state, uint8_t* ___2_block, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_DWORDToBigEndian_mA140AA639B5F71A633E7F45A8B790266C481850C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_digits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_DWORDFromBigEndian_mE902303B984074D0A51DC96A79C9B698F91070B7 (uint32_t* ___0_x, int32_t ___1_digits, uint8_t* ___2_block, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed_SHAExpand_m6A9B2E025F25FD489FD29B1A400051B975156519 (uint32_t* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256__ctor_m354FC0752A5657B4F02AEE3D5C4E499895C9EBF4 (SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed_InitializeState_m2EE9F457AF738E6215F0C55499030C9C9588B688 (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed__HashData_mBDBA48376D6C20D80FC4A3576E4A090D498C5B08 (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_partIn, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA256Managed__EndHash_mF544FE173BC1F97FFF5B74CAC8CBFC5D8DF5809D (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed_SHATransform_m5A45221586B5752B10D40158CC9EAC0CF16B1A7F (uint32_t* ___0_expandedBuffer, uint32_t* ___1_state, uint8_t* ___2_block, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed_SHA256Expand_mB01374BE8E2726FBE899199B2AA6B56C00067A91 (uint32_t* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_Sigma_1_mA321674AF9F374B645DA44FE4BC05139E63CB2EE (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_Ch_mA58A79EF9D9DA08F3B7FC1AE53EBD864E5D9733D (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_Sigma_0_m3146C6035EC5A565348A6DDB47EA62666B0E19F3 (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_Maj_m5AD8BD05D5FA1CBE527F72BA3738FB42EB4A3F11 (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B (uint32_t ___0_x, int32_t ___1_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_sigma_1_mB4128D82D412D98B7F32476C29120DF75DF5F27A (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_sigma_0_mDC3E4ED93A72E3F08397D2A78F360B1BBE005F88 (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed__ctor_m74FB06DE60901FB22E145BFEFD3DB27EF0F2B4AB (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384__ctor_m740B58543790E70202E16FED9828E57079491452 (SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed_InitializeState_mE066CAD46BA745F2A32D304B9D6571C8FD0404DC (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed__HashData_m67836C08CD5748E149087A8E92A1C0402D2F384B (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_partIn, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA384Managed__EndHash_m94A87B2D16129D81A39225A280302DCE27CE5EDE (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed_SHATransform_m0E466584B58EDD0BE8F1D859FED12B06A441849F (uint64_t* ___0_expandedBuffer, uint64_t* ___1_state, uint8_t* ___2_block, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_QuadWordToBigEndian_m59FADC7929A070E26FE5D3529C5B714906361210 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_x, int32_t ___2_digits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_QuadWordFromBigEndian_m89F610D4C743DFF4E9D4C12E00F6F9F4060C9B65 (uint64_t* ___0_x, int32_t ___1_digits, uint8_t* ___2_block, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed_SHA384Expand_mF4100DF582DC5954876CB1059BAA9E55497F8677 (uint64_t* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_Sigma_1_m8C1F4CD35998186DEC3118591BD2F522CD57EAA4 (uint64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_Ch_mCB44386434A98BEA39555D2191E589B44B223EE8 (uint64_t ___0_x, uint64_t ___1_y, uint64_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_Sigma_0_mE815A3D33B61D725A3A183B58A17B81F618B60EF (uint64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_Maj_m8A89CFA2F06F32A9DEB2274143462944FFFFA7DE (uint64_t ___0_x, uint64_t ___1_y, uint64_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806 (uint64_t ___0_x, int32_t ___1_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_sigma_1_mBD2155423E2A5A07D972896C0D3951B2624E5937 (uint64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_sigma_0_mE377477397E061A86C3E868F662B56160833F7B3 (uint64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed__ctor_m655EE905F876E121FA9C8D29C578F2C8230B1371 (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512__ctor_m587B0EC7EBBCB2B98577E5CDB5E7B03828AA6A62 (SHA512_t4D716D49F898611875B880291C726B1D1DE354C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed_InitializeState_m0ACA942F310A3CDADC240AD99D388EF325596ABC (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed__HashData_mBD32602B5ED68F9962AAFECF00544CFF19CD7920 (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_partIn, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA512Managed__EndHash_m530F4A3967FA0F5E35289F838F681D86AC5B3BA5 (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed_SHATransform_m2EB780F28F10348640662DB9708422CB2997CBA6 (uint64_t* ___0_expandedBuffer, uint64_t* ___1_state, uint8_t* ___2_block, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed_SHA512Expand_m3B11EDEE55CD27A41A54301AB3742FC2AA69A202 (uint64_t* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_Sigma_1_m5B6FFA362C7E06D30E63A9DA41742016571ABC23 (uint64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_Ch_mDCE7073385996C882C900E5A278B083F8918BD53 (uint64_t ___0_x, uint64_t ___1_y, uint64_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_Sigma_0_mDF97D56328E7ECD0388BE82D4E3F322146A01AAB (uint64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_Maj_m707D469B6407FD70C8F5332E4A6C72C132567D74 (uint64_t ___0_x, uint64_t ___1_y, uint64_t ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8 (uint64_t ___0_x, int32_t ___1_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_sigma_1_m84EEF0431B0B9EF244B68AB66D439569E1E97A8C (uint64_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_sigma_0_mF2E63C577F9241ADCA334AA64A1D5EB16C0530B2 (uint64_t ___0_x, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5__ctor_m2ADB9C1AC9A8A73EC6E896B4EFCD451192B166F3 (MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* __this, const RuntimeMethod* method) 
{
	{
		HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708(__this, NULL);
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue = ((int32_t)128);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* MD5_Create_mD7AEBE7A752D163971C764A9A8CC0029C865F223 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* L_0 = (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B*)il2cpp_codegen_object_new(MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067(L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberGenerator__ctor_mD6E74EAE1521A2378699C97B8B3E9AE16C5DFABA (RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* RandomNumberGenerator_Create_m10E13D4B5CF93E2EBB1BE9226488C919FFAC3340 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_0 = (RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170*)il2cpp_codegen_object_new(RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170_il2cpp_TypeInfo_var);
		RNGCryptoServiceProvider__ctor_m605146E692C0209B3FFE83F7AC94335CA089CA09(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberGenerator_Dispose_m3C4215E0EACE0A9A91FDE146BDEE954F8E9AE615 (RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberGenerator_Dispose_m1A365DC4FD2B462DC6216D44A6F9C162629A797B (RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* __this, bool ___0_disposing, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2__ctor_m94A6F88E8969E391B1DD483862C429978A4289F4 (RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_StaticInit);
	{
		SymmetricAlgorithm__ctor_mB028F36D59487421C796D35BE91150C3BDFCEC5A(__this, NULL);
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeySizeValue = ((int32_t)128);
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___BlockSizeValue = ((int32_t)64);
		int32_t L_0 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___BlockSizeValue;
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___FeedbackSizeValue = L_0;
		CHECKED_LOCAL_INIT(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_StaticInit,(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_1 = ((RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_StaticFields*)il2cpp_codegen_static_fields_for(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var))->___s_legalBlockSizes;
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___LegalBlockSizesValue = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___LegalBlockSizesValue), (void*)L_1);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_2 = ((RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_StaticFields*)il2cpp_codegen_static_fields_for(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var))->___s_legalKeySizes;
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___LegalKeySizesValue = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___LegalKeySizesValue), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC2_get_EffectiveKeySize_mCD0C4026D03E4B3213A91D6A312E7081503F6FF8 (RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___EffectiveKeySizeValue;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeySizeValue;
		return L_1;
	}

IL_000f:
	{
		int32_t L_2 = __this->___EffectiveKeySizeValue;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC2_get_KeySize_m452815755C8C12CC3FF05A5D1A0FFE9186038CE5 (RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeySizeValue;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2_set_KeySize_m571205E2818BE2DF3E61A7743C0F8A9BFA1770C5 (RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->___EffectiveKeySizeValue;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2;
		L_2 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A5E6167C9670E5BC3AE1719704B0899C16A6934)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_3 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2_set_KeySize_m571205E2818BE2DF3E61A7743C0F8A9BFA1770C5_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_4 = ___0_value;
		SymmetricAlgorithm_set_KeySize_m2C9A68250B608A9B36DB5A9ED1DE887D9458BDF2(__this, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2__cctor_m388E5A8393D1B433EB160C0D9C7ACE958715A517 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_0 = (KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)SZArrayNew(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var, (uint32_t)1);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_1 = L_0;
		KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* L_2 = (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)il2cpp_codegen_object_new(KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104(L_2, ((int32_t)64), ((int32_t)64), 0, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)L_2);
		((RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_StaticFields*)il2cpp_codegen_static_fields_for(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var))->___s_legalBlockSizes = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_StaticFields*)il2cpp_codegen_static_fields_for(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var))->___s_legalBlockSizes), (void*)L_1);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_3 = (KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)SZArrayNew(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var, (uint32_t)1);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_4 = L_3;
		KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* L_5 = (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)il2cpp_codegen_object_new(KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104(L_5, ((int32_t)40), ((int32_t)1024), 8, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)L_5);
		((RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_StaticFields*)il2cpp_codegen_static_fields_for(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var))->___s_legalKeySizes = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_StaticFields*)il2cpp_codegen_static_fields_for(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var))->___s_legalKeySizes), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2CryptoServiceProvider__ctor_mC6C627AF436F5CC74BC74B0B2924210769B6DE59 (RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_StaticInit);
	CHECKED_LOCAL(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit);
	CHECKED_LOCAL(RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_StaticInit);
	{
		CHECKED_LOCAL_INIT(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_StaticInit,(RC2_tFBB9A77126D49FBFBA021B103073FBA78F57B0B9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RC2__ctor_m94A6F88E8969E391B1DD483862C429978A4289F4(__this, NULL);
		CHECKED_LOCAL_INIT(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit,(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = CryptoConfig_get_AllowOnlyFipsAlgorithms_mA16FE662AA39F2F95122B1DF80564FD3C3EECF6B(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17BA770D472146F14CBDE2CFF7752F076430BCBE)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2CryptoServiceProvider__ctor_mC6C627AF436F5CC74BC74B0B2924210769B6DE59_RuntimeMethod_var)));
	}

IL_001d:
	{
		bool L_3;
		L_3 = Utils_HasAlgorithm_mAA3A48D94C841B4E5646F691BB0E7BACBAB717E0(((int32_t)26114), 0, NULL);
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC48047DC30C0105AD0A35E895D497910257F3688)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_5 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2CryptoServiceProvider__ctor_mC6C627AF436F5CC74BC74B0B2924210769B6DE59_RuntimeMethod_var)));
	}

IL_003a:
	{
		CHECKED_LOCAL_INIT(RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_StaticInit,(RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_6 = ((RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_StaticFields*)il2cpp_codegen_static_fields_for(RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_il2cpp_TypeInfo_var))->___s_legalKeySizes;
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___LegalKeySizesValue = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___LegalKeySizesValue), (void*)L_6);
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___FeedbackSizeValue = 8;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RC2CryptoServiceProvider_get_EffectiveKeySize_m8339BB19C2002EF87A37C2927C843F4BF441C1A6 (RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeySizeValue;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RC2CryptoServiceProvider_CreateEncryptor_mFF1F4E37A7D9FB0F114897016EF9FA29D5EB86C0 (RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_rgbIV, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___m_use40bitSalt;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_1 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF2563E74F9540023FD791064905E23A69F0A847)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2CryptoServiceProvider_CreateEncryptor_mFF1F4E37A7D9FB0F114897016EF9FA29D5EB86C0_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_rgbKey;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_rgbIV;
		RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7* L_4 = (RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7*)il2cpp_codegen_object_new(RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_il2cpp_TypeInfo_var);
		RC2Transform__ctor_m51A6DD03C2B3A918F64F40D3C2F96B00EE49EFEA(L_4, __this, (bool)1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RC2CryptoServiceProvider_CreateDecryptor_m02BB8EF7CE89FCB7B4D65C14A01C91F51CF5C0E7 (RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_rgbIV, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___m_use40bitSalt;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_1 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF2563E74F9540023FD791064905E23A69F0A847)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RC2CryptoServiceProvider_CreateDecryptor_m02BB8EF7CE89FCB7B4D65C14A01C91F51CF5C0E7_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_rgbKey;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_rgbIV;
		RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7* L_4 = (RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7*)il2cpp_codegen_object_new(RC2Transform_t715B3309C1B219A09B641E87BFDB66EC016E59B7_il2cpp_TypeInfo_var);
		RC2Transform__ctor_m51A6DD03C2B3A918F64F40D3C2F96B00EE49EFEA(L_4, __this, (bool)0, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2CryptoServiceProvider_GenerateKey_mC67AFFBEB92A66F569501D176D767178EA533378 (RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeySizeValue;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0/8)));
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeyValue = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeyValue), (void*)L_1);
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_2;
		L_2 = Utils_get_StaticRandomNumberGenerator_mE0A165662E0A5BC22FE7FDBE77CA07CC31D2DC6B(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeyValue;
		NullCheck(L_2);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6, L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2CryptoServiceProvider_GenerateIV_m427EB2BB15D5BBAB4799495113113C2AB076EBB5 (RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___IVValue = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___IVValue), (void*)L_0);
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_1;
		L_1 = Utils_get_StaticRandomNumberGenerator_mE0A165662E0A5BC22FE7FDBE77CA07CC31D2DC6B(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___IVValue;
		NullCheck(L_1);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6, L_1, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC2CryptoServiceProvider__cctor_m595B2CB68BCE0D153AA0C20F3F391391EA869EF0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_0 = (KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)SZArrayNew(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var, (uint32_t)1);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_1 = L_0;
		KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* L_2 = (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)il2cpp_codegen_object_new(KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104(L_2, ((int32_t)40), ((int32_t)128), 8, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)L_2);
		((RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_StaticFields*)il2cpp_codegen_static_fields_for(RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_il2cpp_TypeInfo_var))->___s_legalKeySizes = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_StaticFields*)il2cpp_codegen_static_fields_for(RC2CryptoServiceProvider_tCD53638728EFD5594242B33A17B4A85FC3977541_il2cpp_TypeInfo_var))->___s_legalKeySizes), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rijndael__ctor_m713B46B5009EA3F1B078211B039C5F2400D80FFE (Rijndael_t282661761E53E282457A31F5675ACF53D64EE807* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticInit);
	{
		SymmetricAlgorithm__ctor_mB028F36D59487421C796D35BE91150C3BDFCEC5A(__this, NULL);
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeySizeValue = ((int32_t)256);
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___BlockSizeValue = ((int32_t)128);
		int32_t L_0 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___BlockSizeValue;
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___FeedbackSizeValue = L_0;
		CHECKED_LOCAL_INIT(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticInit,(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_1 = ((Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields*)il2cpp_codegen_static_fields_for(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var))->___s_legalBlockSizes;
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___LegalBlockSizesValue = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___LegalBlockSizesValue), (void*)L_1);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_2 = ((Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields*)il2cpp_codegen_static_fields_for(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var))->___s_legalKeySizes;
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___LegalKeySizesValue = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___LegalKeySizesValue), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rijndael__cctor_m41EC5AB11041B2E8C9057A162C43F42FAFEDC7AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_0 = (KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)SZArrayNew(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var, (uint32_t)1);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_1 = L_0;
		KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* L_2 = (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)il2cpp_codegen_object_new(KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104(L_2, ((int32_t)128), ((int32_t)256), ((int32_t)64), NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)L_2);
		((Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields*)il2cpp_codegen_static_fields_for(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var))->___s_legalBlockSizes = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields*)il2cpp_codegen_static_fields_for(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var))->___s_legalBlockSizes), (void*)L_1);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_3 = (KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)SZArrayNew(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var, (uint32_t)1);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_4 = L_3;
		KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* L_5 = (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)il2cpp_codegen_object_new(KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104(L_5, ((int32_t)128), ((int32_t)256), ((int32_t)64), NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)L_5);
		((Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields*)il2cpp_codegen_static_fields_for(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var))->___s_legalKeySizes = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields*)il2cpp_codegen_static_fields_for(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var))->___s_legalKeySizes), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7 (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticInit);
	CHECKED_LOCAL(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit);
	{
		CHECKED_LOCAL_INIT(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticInit,(Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Rijndael__ctor_m713B46B5009EA3F1B078211B039C5F2400D80FFE(__this, NULL);
		CHECKED_LOCAL_INIT(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit,(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = CryptoConfig_get_AllowOnlyFipsAlgorithms_mA16FE662AA39F2F95122B1DF80564FD3C3EECF6B(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17BA770D472146F14CBDE2CFF7752F076430BCBE)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManaged__ctor_mACBA07A36FCD3FE3858C4B1FBBC57D7CBB7109C7_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RijndaelManaged_CreateEncryptor_mCABABD9D312991105648BF2ED1FECDC3152F45CF (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_rgbIV, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbKey;
		int32_t L_1 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___ModeValue;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_rgbIV;
		int32_t L_3 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___FeedbackSizeValue;
		RuntimeObject* L_4;
		L_4 = RijndaelManaged_NewEncryptor_m609455DF427C98226BC3EA551EF95B6747B87C9F(__this, L_0, L_1, L_2, L_3, 0, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RijndaelManaged_CreateDecryptor_mAAB5F9C9C134E198B751B79DAE79359D1ECD5B93 (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_rgbIV, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbKey;
		int32_t L_1 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___ModeValue;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_rgbIV;
		int32_t L_3 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___FeedbackSizeValue;
		RuntimeObject* L_4;
		L_4 = RijndaelManaged_NewEncryptor_m609455DF427C98226BC3EA551EF95B6747B87C9F(__this, L_0, L_1, L_2, L_3, 1, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged_GenerateKey_m248D1B85CD3E430D74D3267A8FDF9BAD713E236F (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeySizeValue;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Utils_GenerateRandom_m46C9652C8F757092A322C471EB8A384EFA1180C0(((int32_t)(L_0/8)), NULL);
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeyValue = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeyValue), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManaged_GenerateIV_m4CA7BE98DB2586AD780AF72014272A9893260420 (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___BlockSizeValue;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Utils_GenerateRandom_m46C9652C8F757092A322C471EB8A384EFA1180C0(((int32_t)(L_0/8)), NULL);
		((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___IVValue = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___IVValue), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RijndaelManaged_NewEncryptor_m609455DF427C98226BC3EA551EF95B6747B87C9F (RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbKey, int32_t ___1_mode, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_rgbIV, int32_t ___3_feedbackSize, int32_t ___4_encryptMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbKey;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___KeySizeValue;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Utils_GenerateRandom_m46C9652C8F757092A322C471EB8A384EFA1180C0(((int32_t)(L_1/8)), NULL);
		___0_rgbKey = L_2;
	}

IL_0012:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_rgbIV;
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___BlockSizeValue;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Utils_GenerateRandom_m46C9652C8F757092A322C471EB8A384EFA1180C0(((int32_t)(L_4/8)), NULL);
		___2_rgbIV = L_5;
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_rgbKey;
		int32_t L_7 = ___1_mode;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_rgbIV;
		int32_t L_9 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___BlockSizeValue;
		int32_t L_10 = ___3_feedbackSize;
		int32_t L_11 = ((SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8*)__this)->___PaddingValue;
		int32_t L_12 = ___4_encryptMode;
		RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* L_13 = (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19*)il2cpp_codegen_object_new(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var);
		RijndaelManagedTransform__ctor_mD1F6B761C562BF69146E59A4C6F2638B76BAC543(L_13, L_6, L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		return L_13;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform__ctor_mD1F6B761C562BF69146E59A4C6F2638B76BAC543 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbKey, int32_t ___1_mode, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_rgbIV, int32_t ___3_blockSize, int32_t ___4_feedbackSize, int32_t ___5_PaddingValue, int32_t ___6_transformMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbKey;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF92983BF587E917A224D8A0A152F85AB3B9C7CA6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform__ctor_mD1F6B761C562BF69146E59A4C6F2638B76BAC543_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___3_blockSize;
		__this->___m_blockSizeBits = L_2;
		int32_t L_3 = ___3_blockSize;
		__this->___m_blockSizeBytes = ((int32_t)(L_3/8));
		int32_t L_4 = ___1_mode;
		__this->___m_cipherMode = L_4;
		int32_t L_5 = ___5_PaddingValue;
		__this->___m_paddingValue = L_5;
		int32_t L_6 = ___6_transformMode;
		__this->___m_transformMode = L_6;
		int32_t L_7 = ___3_blockSize;
		__this->___m_Nb = ((int32_t)(L_7/((int32_t)32)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_rgbKey;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		__this->___m_Nk = ((int32_t)(L_9/4));
		int32_t L_10 = __this->___m_Nb;
		if ((((int32_t)L_10) > ((int32_t)6)))
		{
			goto IL_005f;
		}
	}
	{
		G_B5_0 = 2;
		goto IL_0060;
	}

IL_005f:
	{
		G_B5_0 = 3;
	}

IL_0060:
	{
		V_0 = G_B5_0;
		int32_t L_11 = __this->___m_Nb;
		if ((((int32_t)L_11) > ((int32_t)6)))
		{
			goto IL_006d;
		}
	}
	{
		G_B8_0 = 3;
		goto IL_006e;
	}

IL_006d:
	{
		G_B8_0 = 4;
	}

IL_006e:
	{
		V_1 = G_B8_0;
		int32_t L_12 = __this->___m_Nb;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_2 = L_13;
		int32_t L_14 = __this->___m_Nb;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_14);
		V_3 = L_15;
		int32_t L_16 = __this->___m_Nb;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_4 = L_17;
		int32_t L_18 = __this->___m_Nb;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_5 = L_19;
		int32_t L_20 = __this->___m_Nb;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_6 = L_21;
		int32_t L_22 = __this->___m_Nb;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_22);
		V_7 = L_23;
		V_8 = 0;
		goto IL_0139;
	}

IL_00c0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_2;
		int32_t L_25 = V_8;
		int32_t L_26 = V_8;
		int32_t L_27 = __this->___m_Nb;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(L_26, 1))%L_27)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_3;
		int32_t L_29 = V_8;
		int32_t L_30 = V_8;
		int32_t L_31 = V_0;
		int32_t L_32 = __this->___m_Nb;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(L_30, L_31))%L_32)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_4;
		int32_t L_34 = V_8;
		int32_t L_35 = V_8;
		int32_t L_36 = V_1;
		int32_t L_37 = __this->___m_Nb;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(L_35, L_36))%L_37)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_5;
		int32_t L_39 = V_8;
		int32_t L_40 = V_8;
		int32_t L_41 = __this->___m_Nb;
		int32_t L_42 = __this->___m_Nb;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_40, 1)), L_41))%L_42)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_6;
		int32_t L_44 = V_8;
		int32_t L_45 = V_8;
		int32_t L_46 = V_0;
		int32_t L_47 = __this->___m_Nb;
		int32_t L_48 = __this->___m_Nb;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_45, L_46)), L_47))%L_48)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_7;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int32_t L_52 = V_1;
		int32_t L_53 = __this->___m_Nb;
		int32_t L_54 = __this->___m_Nb;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (int32_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_51, L_52)), L_53))%L_54)));
		int32_t L_55 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0139:
	{
		int32_t L_56 = V_8;
		int32_t L_57 = __this->___m_Nb;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_58 = __this->___m_Nb;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_58, 3)));
		__this->___m_encryptindex = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_encryptindex), (void*)L_59);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = __this->___m_encryptindex;
		int32_t L_62 = __this->___m_Nb;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_60, 0, (RuntimeArray*)L_61, 0, L_62, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___m_encryptindex;
		int32_t L_65 = __this->___m_Nb;
		int32_t L_66 = __this->___m_Nb;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_63, 0, (RuntimeArray*)L_64, L_65, L_66, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->___m_encryptindex;
		int32_t L_69 = __this->___m_Nb;
		int32_t L_70 = __this->___m_Nb;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_67, 0, (RuntimeArray*)L_68, ((int32_t)il2cpp_codegen_multiply(L_69, 2)), L_70, NULL);
		int32_t L_71 = __this->___m_Nb;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_71, 3)));
		__this->___m_decryptindex = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_decryptindex), (void*)L_72);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = __this->___m_decryptindex;
		int32_t L_75 = __this->___m_Nb;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_73, 0, (RuntimeArray*)L_74, 0, L_75, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = __this->___m_decryptindex;
		int32_t L_78 = __this->___m_Nb;
		int32_t L_79 = __this->___m_Nb;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_76, 0, (RuntimeArray*)L_77, L_78, L_79, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->___m_decryptindex;
		int32_t L_82 = __this->___m_Nb;
		int32_t L_83 = __this->___m_Nb;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_80, 0, (RuntimeArray*)L_81, ((int32_t)il2cpp_codegen_multiply(L_82, 2)), L_83, NULL);
		int32_t L_84 = __this->___m_cipherMode;
		V_9 = L_84;
		int32_t L_85 = V_9;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_85, 1))) > ((uint32_t)1))))
		{
			goto IL_0216;
		}
	}
	{
		int32_t L_86 = V_9;
		if ((((int32_t)L_86) == ((int32_t)4)))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0246;
	}

IL_0216:
	{
		int32_t L_87 = __this->___m_blockSizeBytes;
		__this->___m_inputBlockSize = L_87;
		int32_t L_88 = __this->___m_blockSizeBytes;
		__this->___m_outputBlockSize = L_88;
		goto IL_0256;
	}

IL_0230:
	{
		int32_t L_89 = ___4_feedbackSize;
		__this->___m_inputBlockSize = ((int32_t)(L_89/8));
		int32_t L_90 = ___4_feedbackSize;
		__this->___m_outputBlockSize = ((int32_t)(L_90/8));
		goto IL_0256;
	}

IL_0246:
	{
		String_t* L_91;
		L_91 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55A326D360D02C44975E4A74CD36AA58A27ABDAE)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_92 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_92, L_91, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_92, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform__ctor_mD1F6B761C562BF69146E59A4C6F2638B76BAC543_RuntimeMethod_var)));
	}

IL_0256:
	{
		int32_t L_93 = ___1_mode;
		if ((((int32_t)L_93) == ((int32_t)1)))
		{
			goto IL_0261;
		}
	}
	{
		int32_t L_94 = ___1_mode;
		if ((!(((uint32_t)L_94) == ((uint32_t)4))))
		{
			goto IL_02fd;
		}
	}

IL_0261:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ___2_rgbIV;
		if (L_95)
		{
			goto IL_026f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_96 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_96, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7C58A06A3AA45E378C72A78FCD067F110CEC438)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_96, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform__ctor_mD1F6B761C562BF69146E59A4C6F2638B76BAC543_RuntimeMethod_var)));
	}

IL_026f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ___2_rgbIV;
		NullCheck(L_97);
		int32_t L_98 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_97)->max_length),NULL));
		int32_t L_99 = __this->___m_Nb;
		if ((((int32_t)((int32_t)(L_98/4))) == ((int32_t)L_99)))
		{
			goto IL_028c;
		}
	}
	{
		String_t* L_100;
		L_100 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8BD9A7F60F0A925FBA0FA74162E5EC956585C8D)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_101 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_101, L_100, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_101, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform__ctor_mD1F6B761C562BF69146E59A4C6F2638B76BAC543_RuntimeMethod_var)));
	}

IL_028c:
	{
		int32_t L_102 = __this->___m_Nb;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_102);
		__this->___m_IV = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IV), (void*)L_103);
		V_10 = 0;
		V_11 = 0;
		goto IL_02f3;
	}

IL_02a5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = ___2_rgbIV;
		int32_t L_105 = V_10;
		int32_t L_106 = L_105;
		V_10 = ((int32_t)il2cpp_codegen_add(L_106, 1));
		NullCheck(L_104);
		int32_t L_107 = L_106;
		uint8_t L_108 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_12 = (int32_t)L_108;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = ___2_rgbIV;
		int32_t L_110 = V_10;
		int32_t L_111 = L_110;
		V_10 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		NullCheck(L_109);
		int32_t L_112 = L_111;
		uint8_t L_113 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_13 = (int32_t)L_113;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = ___2_rgbIV;
		int32_t L_115 = V_10;
		int32_t L_116 = L_115;
		V_10 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		NullCheck(L_114);
		int32_t L_117 = L_116;
		uint8_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_14 = (int32_t)L_118;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = ___2_rgbIV;
		int32_t L_120 = V_10;
		int32_t L_121 = L_120;
		V_10 = ((int32_t)il2cpp_codegen_add(L_121, 1));
		NullCheck(L_119);
		int32_t L_122 = L_121;
		uint8_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_15 = (int32_t)L_123;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = __this->___m_IV;
		int32_t L_125 = V_11;
		int32_t L_126 = V_15;
		int32_t L_127 = V_14;
		int32_t L_128 = V_13;
		int32_t L_129 = V_12;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_126<<((int32_t)24)))|((int32_t)(L_127<<((int32_t)16)))))|((int32_t)(L_128<<8))))|L_129)));
		int32_t L_130 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_02f3:
	{
		int32_t L_131 = V_11;
		int32_t L_132 = __this->___m_Nb;
		if ((((int32_t)L_131) < ((int32_t)L_132)))
		{
			goto IL_02a5;
		}
	}

IL_02fd:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = ___0_rgbKey;
		RijndaelManagedTransform_GenerateKeyExpansion_mAAEEC20C8B3AE40E5F2701BAF651CF7EF317266D(__this, L_133, NULL);
		int32_t L_134 = __this->___m_cipherMode;
		if ((!(((uint32_t)L_134) == ((uint32_t)1))))
		{
			goto IL_0338;
		}
	}
	{
		int32_t L_135 = __this->___m_Nb;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_135);
		__this->___m_lastBlockBuffer = L_136;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_lastBlockBuffer), (void*)L_136);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = __this->___m_IV;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = __this->___m_lastBlockBuffer;
		int32_t L_139 = __this->___m_blockSizeBytes;
		bool L_140;
		L_140 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_137, 0, (RuntimeArray*)L_138, 0, L_139, NULL);
	}

IL_0338:
	{
		int32_t L_141 = __this->___m_cipherMode;
		if ((!(((uint32_t)L_141) == ((uint32_t)4))))
		{
			goto IL_0370;
		}
	}
	{
		int32_t L_142 = __this->___m_Nb;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_143 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(4, L_142)));
		__this->___m_shiftRegister = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_shiftRegister), (void*)L_143);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = __this->___m_IV;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_145 = __this->___m_shiftRegister;
		int32_t L_146 = __this->___m_Nb;
		bool L_147;
		L_147 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_144, 0, (RuntimeArray*)L_145, 0, ((int32_t)il2cpp_codegen_multiply(4, L_146)), NULL);
	}

IL_0370:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform_Dispose_m970FA1754087296B8CFD594E8C5EDC17737B6B5A (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, const RuntimeMethod* method) 
{
	{
		RijndaelManagedTransform_Dispose_mF9EF14E5A6559CEFC966A6B957BA6E99B22B34B7(__this, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform_Dispose_mF9EF14E5A6559CEFC966A6B957BA6E99B22B34B7 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_00d8;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___m_IV;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___m_IV;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___m_IV;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		__this->___m_IV = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_IV), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___m_lastBlockBuffer;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___m_lastBlockBuffer;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___m_lastBlockBuffer;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, 0, L_8, NULL);
		__this->___m_lastBlockBuffer = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_lastBlockBuffer), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_004c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___m_encryptKeyExpansion;
		if (!L_9)
		{
			goto IL_006f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->___m_encryptKeyExpansion;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___m_encryptKeyExpansion;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_12, NULL);
		__this->___m_encryptKeyExpansion = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_encryptKeyExpansion), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_006f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___m_decryptKeyExpansion;
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___m_decryptKeyExpansion;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___m_decryptKeyExpansion;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_14, 0, L_16, NULL);
		__this->___m_decryptKeyExpansion = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_decryptKeyExpansion), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_0092:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___m_depadBuffer;
		if (!L_17)
		{
			goto IL_00b5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___m_depadBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___m_depadBuffer;
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_18, 0, L_20, NULL);
		__this->___m_depadBuffer = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_depadBuffer), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_00b5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___m_shiftRegister;
		if (!L_21)
		{
			goto IL_00d8;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___m_shiftRegister;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___m_shiftRegister;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_22, 0, L_24, NULL);
		__this->___m_shiftRegister = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_shiftRegister), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_00d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_get_InputBlockSize_m4333C9207224F9E4C65481C8AF09C5CAEAFB7014 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_inputBlockSize;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_get_OutputBlockSize_m76DD2514B3D31683D0DD39D82637BBBD4CF8A900 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_outputBlockSize;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RijndaelManagedTransform_get_CanTransformMultipleBlocks_mE0DB6DAB357A95AFD4AA5EFF2CB4F22975BC6631 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_TransformBlock_mAE10B83EAE53673A980E6AC1F726F0395BECB433 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inputBuffer, int32_t ___1_inputOffset, int32_t ___2_inputCount, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_outputBuffer, int32_t ___4_outputOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inputBuffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral21DDD46A31A90051E0424907A787DB1D19854FDB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_TransformBlock_mAE10B83EAE53673A980E6AC1F726F0395BECB433_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___3_outputBuffer;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral510DDF106C5B1BC34025AB6E18D1490A125BE7EE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_TransformBlock_mAE10B83EAE53673A980E6AC1F726F0395BECB433_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___1_inputOffset;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5;
		L_5 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B899E43C7F5ACD46D39930AA357B0AEF6D743CD)), L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_TransformBlock_mAE10B83EAE53673A980E6AC1F726F0395BECB433_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_7 = ___2_inputCount;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_8 = ___2_inputCount;
		int32_t L_9 = __this->___m_inputBlockSize;
		if (((int32_t)(L_8%L_9)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_10 = ___2_inputCount;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_inputBuffer;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((((int32_t)L_10) <= ((int32_t)L_12)))
		{
			goto IL_005a;
		}
	}

IL_004a:
	{
		String_t* L_13;
		L_13 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16E9DD45E634B2228FB2D601F40B422756460D29)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_TransformBlock_mAE10B83EAE53673A980E6AC1F726F0395BECB433_RuntimeMethod_var)));
	}

IL_005a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_inputBuffer;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		int32_t L_17 = ___2_inputCount;
		int32_t L_18 = ___1_inputOffset;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, L_17))) >= ((int32_t)L_18)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_19;
		L_19 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_TransformBlock_mAE10B83EAE53673A980E6AC1F726F0395BECB433_RuntimeMethod_var)));
	}

IL_0072:
	{
		int32_t L_21 = __this->___m_transformMode;
		if (L_21)
		{
			goto IL_008f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_inputBuffer;
		int32_t L_23 = ___1_inputOffset;
		int32_t L_24 = ___2_inputCount;
		int32_t L_25 = ___4_outputOffset;
		int32_t L_26 = __this->___m_paddingValue;
		int32_t L_27;
		L_27 = RijndaelManagedTransform_EncryptData_m73E1872DFCB22C6FEFA3EAAC623B6DDB75E433D4(__this, L_22, L_23, L_24, (&___3_outputBuffer), L_25, L_26, (bool)0, NULL);
		return L_27;
	}

IL_008f:
	{
		int32_t L_28 = __this->___m_paddingValue;
		if ((((int32_t)L_28) == ((int32_t)3)))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_29 = __this->___m_paddingValue;
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_00b6;
		}
	}

IL_00a1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___0_inputBuffer;
		int32_t L_31 = ___1_inputOffset;
		int32_t L_32 = ___2_inputCount;
		int32_t L_33 = ___4_outputOffset;
		int32_t L_34 = __this->___m_paddingValue;
		int32_t L_35;
		L_35 = RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F(__this, L_30, L_31, L_32, (&___3_outputBuffer), L_33, L_34, (bool)0, NULL);
		return L_35;
	}

IL_00b6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___m_depadBuffer;
		if (L_36)
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_37 = __this->___m_inputBlockSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_37);
		__this->___m_depadBuffer = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_depadBuffer), (void*)L_38);
		int32_t L_39 = ___2_inputCount;
		int32_t L_40 = __this->___m_inputBlockSize;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___0_inputBuffer;
		int32_t L_42 = ___1_inputOffset;
		int32_t L_43 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = __this->___m_depadBuffer;
		int32_t L_45 = __this->___m_inputBlockSize;
		bool L_46;
		L_46 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_41, ((int32_t)il2cpp_codegen_add(L_42, L_43)), (RuntimeArray*)L_44, 0, L_45, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___0_inputBuffer;
		int32_t L_48 = ___1_inputOffset;
		int32_t L_49 = V_0;
		int32_t L_50 = ___4_outputOffset;
		int32_t L_51 = __this->___m_paddingValue;
		int32_t L_52;
		L_52 = RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F(__this, L_47, L_48, L_49, (&___3_outputBuffer), L_50, L_51, (bool)0, NULL);
		return L_52;
	}

IL_0104:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___m_depadBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->___m_depadBuffer;
		NullCheck(L_54);
		int32_t L_55 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_54)->max_length),NULL));
		int32_t L_56 = ___4_outputOffset;
		int32_t L_57 = __this->___m_paddingValue;
		int32_t L_58;
		L_58 = RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F(__this, L_53, 0, L_55, (&___3_outputBuffer), L_56, L_57, (bool)0, NULL);
		V_1 = L_58;
		int32_t L_59 = ___4_outputOffset;
		int32_t L_60 = __this->___m_outputBlockSize;
		___4_outputOffset = ((int32_t)il2cpp_codegen_add(L_59, L_60));
		int32_t L_61 = ___2_inputCount;
		int32_t L_62 = __this->___m_inputBlockSize;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_61, L_62));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___0_inputBuffer;
		int32_t L_64 = ___1_inputOffset;
		int32_t L_65 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = __this->___m_depadBuffer;
		int32_t L_67 = __this->___m_inputBlockSize;
		bool L_68;
		L_68 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_63, ((int32_t)il2cpp_codegen_add(L_64, L_65)), (RuntimeArray*)L_66, 0, L_67, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___0_inputBuffer;
		int32_t L_70 = ___1_inputOffset;
		int32_t L_71 = V_2;
		int32_t L_72 = ___4_outputOffset;
		int32_t L_73 = __this->___m_paddingValue;
		int32_t L_74;
		L_74 = RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F(__this, L_69, L_70, L_71, (&___3_outputBuffer), L_72, L_73, (bool)0, NULL);
		V_1 = L_74;
		int32_t L_75 = __this->___m_outputBlockSize;
		int32_t L_76 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_75, L_76));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RijndaelManagedTransform_TransformFinalBlock_m9C283374D582D8924D6E63E61EBAFDE76024A86F (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inputBuffer, int32_t ___1_inputOffset, int32_t ___2_inputCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inputBuffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral21DDD46A31A90051E0424907A787DB1D19854FDB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_TransformFinalBlock_m9C283374D582D8924D6E63E61EBAFDE76024A86F_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_inputOffset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B899E43C7F5ACD46D39930AA357B0AEF6D743CD)), L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_TransformFinalBlock_m9C283374D582D8924D6E63E61EBAFDE76024A86F_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_5 = ___2_inputCount;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = ___2_inputCount;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_inputBuffer;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		if ((((int32_t)L_6) <= ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}

IL_0031:
	{
		String_t* L_9;
		L_9 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16E9DD45E634B2228FB2D601F40B422756460D29)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_TransformFinalBlock_m9C283374D582D8924D6E63E61EBAFDE76024A86F_RuntimeMethod_var)));
	}

IL_0041:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_inputBuffer;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = ___2_inputCount;
		int32_t L_14 = ___1_inputOffset;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_12, L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_15;
		L_15 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_TransformFinalBlock_m9C283374D582D8924D6E63E61EBAFDE76024A86F_RuntimeMethod_var)));
	}

IL_0059:
	{
		int32_t L_17 = __this->___m_transformMode;
		if (L_17)
		{
			goto IL_007f;
		}
	}
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_inputBuffer;
		int32_t L_19 = ___1_inputOffset;
		int32_t L_20 = ___2_inputCount;
		int32_t L_21 = __this->___m_paddingValue;
		int32_t L_22;
		L_22 = RijndaelManagedTransform_EncryptData_m73E1872DFCB22C6FEFA3EAAC623B6DDB75E433D4(__this, L_18, L_19, L_20, (&V_0), 0, L_21, (bool)1, NULL);
		RijndaelManagedTransform_Reset_m0A01E6C9AB2E6D1D0B4892A68BDC30F41A558C54(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		return L_23;
	}

IL_007f:
	{
		int32_t L_24 = ___2_inputCount;
		int32_t L_25 = __this->___m_inputBlockSize;
		if (!((int32_t)(L_24%L_25)))
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_26;
		L_26 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ACF9889056BF1B361FA0E5D4F4FBCE1A5609337)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_27 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_27, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_TransformFinalBlock_m9C283374D582D8924D6E63E61EBAFDE76024A86F_RuntimeMethod_var)));
	}

IL_0099:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___m_depadBuffer;
		if (L_28)
		{
			goto IL_00bf;
		}
	}
	{
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___0_inputBuffer;
		int32_t L_30 = ___1_inputOffset;
		int32_t L_31 = ___2_inputCount;
		int32_t L_32 = __this->___m_paddingValue;
		int32_t L_33;
		L_33 = RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F(__this, L_29, L_30, L_31, (&V_1), 0, L_32, (bool)1, NULL);
		RijndaelManagedTransform_Reset_m0A01E6C9AB2E6D1D0B4892A68BDC30F41A558C54(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_1;
		return L_34;
	}

IL_00bf:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___m_depadBuffer;
		NullCheck(L_35);
		int32_t L_36 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_35)->max_length),NULL));
		int32_t L_37 = ___2_inputCount;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_36, L_37)));
		V_2 = L_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___m_depadBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___m_depadBuffer;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		bool L_43;
		L_43 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_39, 0, (RuntimeArray*)L_40, 0, L_42, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ___0_inputBuffer;
		int32_t L_45 = ___1_inputOffset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___m_depadBuffer;
		NullCheck(L_47);
		int32_t L_48 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_47)->max_length),NULL));
		int32_t L_49 = ___2_inputCount;
		bool L_50;
		L_50 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_44, L_45, (RuntimeArray*)L_46, L_48, L_49, NULL);
		V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		int32_t L_54 = __this->___m_paddingValue;
		int32_t L_55;
		L_55 = RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F(__this, L_51, 0, L_53, (&V_3), 0, L_54, (bool)1, NULL);
		RijndaelManagedTransform_Reset_m0A01E6C9AB2E6D1D0B4892A68BDC30F41A558C54(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_3;
		return L_56;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform_Reset_m0A01E6C9AB2E6D1D0B4892A68BDC30F41A558C54 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_depadBuffer = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_depadBuffer), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		int32_t L_0 = __this->___m_cipherMode;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___m_IV;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___m_lastBlockBuffer;
		int32_t L_3 = __this->___m_blockSizeBytes;
		bool L_4;
		L_4 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, 0, L_3, NULL);
	}

IL_002a:
	{
		int32_t L_5 = __this->___m_cipherMode;
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			goto IL_004f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___m_IV;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___m_shiftRegister;
		int32_t L_8 = __this->___m_Nb;
		bool L_9;
		L_9 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, ((int32_t)il2cpp_codegen_multiply(4, L_8)), NULL);
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_EncryptData_m73E1872DFCB22C6FEFA3EAAC623B6DDB75E433D4 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inputBuffer, int32_t ___1_inputOffset, int32_t ___2_inputCount, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___3_outputBuffer, int32_t ___4_outputOffset, int32_t ___5_paddingMode, bool ___6_fLast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManagedTransform_EncryptData_m73E1872DFCB22C6FEFA3EAAC623B6DDB75E433D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	int32_t* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	int32_t* V_9 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t* V_11 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_12 = NULL;
	int32_t* V_13 = NULL;
	int32_t* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_26 = NULL;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t* V_29 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_30 = NULL;
	int32_t G_B51_0 = 0;
	int32_t G_B54_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B60_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inputBuffer;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___1_inputOffset;
		int32_t L_3 = ___2_inputCount;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3)))))
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0178A80B5F0EC925E6A79673FB00AB1CC3CED51)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_5 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_EncryptData_m73E1872DFCB22C6FEFA3EAAC623B6DDB75E433D4_RuntimeMethod_var)));
	}

IL_0018:
	{
		V_0 = 0;
		int32_t L_6 = ___2_inputCount;
		int32_t L_7 = __this->___m_inputBlockSize;
		V_1 = ((int32_t)(L_6%L_7));
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		int32_t L_8 = ___1_inputOffset;
		V_3 = L_8;
		V_4 = 0;
		bool L_9 = ___6_fLast;
		if (!L_9)
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_10 = ___5_paddingMode;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1)))
		{
			case 0:
			{
				goto IL_0050;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_007c;
			}
			case 4:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_0050:
	{
		int32_t L_11 = V_1;
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_12;
		L_12 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFB04E57151EC195DBDBED5827D22C5146A2B0C12)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_13 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_EncryptData_m73E1872DFCB22C6FEFA3EAAC623B6DDB75E433D4_RuntimeMethod_var)));
	}

IL_0063:
	{
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_15 = __this->___m_inputBlockSize;
		int32_t L_16 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		goto IL_0090;
	}

IL_0071:
	{
		int32_t L_17 = __this->___m_inputBlockSize;
		int32_t L_18 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		goto IL_0090;
	}

IL_007c:
	{
		int32_t L_19 = __this->___m_inputBlockSize;
		int32_t L_20 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, L_20));
		goto IL_0090;
	}

IL_0087:
	{
		int32_t L_21 = __this->___m_inputBlockSize;
		int32_t L_22 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
	}

IL_0090:
	{
		int32_t L_23 = V_0;
		if (!L_23)
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_24 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_24);
		V_2 = L_25;
		int32_t L_26 = ___5_paddingMode;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_26, 1)))
		{
			case 0:
			{
				goto IL_00ec;
			}
			case 1:
			{
				goto IL_00b9;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00d1;
			}
			case 4:
			{
				goto IL_00da;
			}
		}
	}
	{
		goto IL_00ec;
	}

IL_00b9:
	{
		V_4 = 0;
		goto IL_00ca;
	}

IL_00be:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_2;
		int32_t L_28 = V_4;
		int32_t L_29 = V_0;
		uint8_t L_30 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_29,NULL));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint8_t)L_30);
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00ca:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00ec;
	}

IL_00d1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		uint8_t L_37 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_36,NULL));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_35, 1))), (uint8_t)L_37);
		goto IL_00ec;
	}

IL_00da:
	{
		RNGCryptoServiceProvider_tAD9D75EFF3D2ED0929EEE27A53BE82AB83D78170* L_38;
		L_38 = Utils_get_StaticRandomNumberGenerator_mE0A165662E0A5BC22FE7FDBE77CA07CC31D2DC6B(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		NullCheck(L_38);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6, L_38, L_39);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_2;
		int32_t L_41 = V_0;
		int32_t L_42 = V_0;
		uint8_t L_43 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_42,NULL));
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_41, 1))), (uint8_t)L_43);
	}

IL_00ec:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_44 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = *(L_44);
		if (L_45)
		{
			goto IL_0101;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_46 = ___3_outputBuffer;
		int32_t L_47 = ___2_inputCount;
		int32_t L_48 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_47, L_48)));
		*(((RuntimeObject**)L_46)) = ((RuntimeObject*)L_49);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_46), (void*)((RuntimeObject*)L_49));
		___4_outputOffset = 0;
		goto IL_011e;
	}

IL_0101:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_50 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = *(L_50);
		NullCheck(L_51);
		int32_t L_52 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_51)->max_length),NULL));
		int32_t L_53 = ___4_outputOffset;
		int32_t L_54 = ___2_inputCount;
		int32_t L_55 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, L_53))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_54, L_55)))))
		{
			goto IL_011e;
		}
	}
	{
		String_t* L_56;
		L_56 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0178A80B5F0EC925E6A79673FB00AB1CC3CED51)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_57 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_57, L_56, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_EncryptData_m73E1872DFCB22C6FEFA3EAAC623B6DDB75E433D4_RuntimeMethod_var)));
	}

IL_011e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->___m_encryptindex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = L_58;
		V_6 = L_59;
		if (!L_59)
		{
			goto IL_012f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_6;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		if (L_61)
		{
			goto IL_0135;
		}
	}

IL_012f:
	{
		uintptr_t L_62 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_5 = (int32_t*)L_62;
		goto IL_0140;
	}

IL_0135:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_6;
		NullCheck(L_63);
		uintptr_t L_64 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_5 = (int32_t*)L_64;
	}

IL_0140:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___m_encryptKeyExpansion;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = L_65;
		V_8 = L_66;
		if (!L_66)
		{
			goto IL_0151;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_8;
		NullCheck(L_67);
		int32_t L_68 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_67)->max_length),NULL));
		if (L_68)
		{
			goto IL_0157;
		}
	}

IL_0151:
	{
		uintptr_t L_69 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_7 = (int32_t*)L_69;
		goto IL_0162;
	}

IL_0157:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_8;
		NullCheck(L_70);
		uintptr_t L_71 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_7 = (int32_t*)L_71;
	}

IL_0162:
	{
		CHECKED_LOCAL_INIT(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit,(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_T;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = L_72;
		V_10 = L_73;
		if (!L_73)
		{
			goto IL_0172;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_10;
		NullCheck(L_74);
		int32_t L_75 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_74)->max_length),NULL));
		if (L_75)
		{
			goto IL_0178;
		}
	}

IL_0172:
	{
		uintptr_t L_76 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_9 = (int32_t*)L_76;
		goto IL_0183;
	}

IL_0178:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = V_10;
		NullCheck(L_77);
		uintptr_t L_78 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_9 = (int32_t*)L_78;
	}

IL_0183:
	{
		CHECKED_LOCAL_INIT(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit,(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_TF;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = L_79;
		V_12 = L_80;
		if (!L_80)
		{
			goto IL_0193;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = V_12;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if (L_82)
		{
			goto IL_0199;
		}
	}

IL_0193:
	{
		uintptr_t L_83 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_11 = (int32_t*)L_83;
		goto IL_01a4;
	}

IL_0199:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = V_12;
		NullCheck(L_84);
		uintptr_t L_85 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_11 = (int32_t*)L_85;
	}

IL_01a4:
	{
		int32_t L_86 = __this->___m_Nb;
		uintptr_t L_87 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_86,NULL));
		if ((uintptr_t)L_87 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), RijndaelManagedTransform_EncryptData_m73E1872DFCB22C6FEFA3EAAC623B6DDB75E433D4_RuntimeMethod_var);
		intptr_t L_88 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_87, 4));
		int8_t* L_89;
		if (L_88 == 0)
		{
			L_89 = NULL;
		}
		else
		{
			L_89 = (int8_t*)alloca(L_88);
			memset(L_89, 0, L_88);
		}
		V_13 = (int32_t*)L_89;
		int32_t L_90 = __this->___m_Nb;
		uintptr_t L_91 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		if ((uintptr_t)L_91 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), RijndaelManagedTransform_EncryptData_m73E1872DFCB22C6FEFA3EAAC623B6DDB75E433D4_RuntimeMethod_var);
		intptr_t L_92 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_91, 4));
		int8_t* L_93;
		if (L_92 == 0)
		{
			L_93 = NULL;
		}
		else
		{
			L_93 = (int8_t*)alloca(L_92);
			memset(L_93, 0, L_92);
		}
		V_14 = (int32_t*)L_93;
		int32_t L_94 = ___2_inputCount;
		int32_t L_95 = V_0;
		int32_t L_96 = __this->___m_inputBlockSize;
		V_15 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_94, L_95))/L_96));
		int32_t L_97 = ___4_outputOffset;
		V_16 = L_97;
		V_17 = 0;
		goto IL_0672;
	}

IL_01d6:
	{
		int32_t L_98 = __this->___m_cipherMode;
		if ((!(((uint32_t)L_98) == ((uint32_t)4))))
		{
			goto IL_01f9;
		}
	}
	{
		int32_t* L_99 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = __this->___m_shiftRegister;
		int32_t L_101 = __this->___m_blockSizeBytes;
		Buffer_Memcpy_mD0ABB1CFA4E5CD409977A2E19D002C8589324A41((uint8_t*)L_99, 0, L_100, 0, L_101, NULL);
		goto IL_02ca;
	}

IL_01f9:
	{
		int32_t L_102 = V_17;
		int32_t L_103 = V_15;
		if ((!(((uint32_t)L_102) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_103, 1))))))
		{
			goto IL_0204;
		}
	}
	{
		int32_t L_104 = V_0;
		if (L_104)
		{
			goto IL_0219;
		}
	}

IL_0204:
	{
		int32_t* L_105 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = ___0_inputBuffer;
		int32_t L_107 = V_3;
		int32_t L_108 = __this->___m_blockSizeBytes;
		Buffer_Memcpy_mD0ABB1CFA4E5CD409977A2E19D002C8589324A41((uint8_t*)L_105, 0, L_106, L_107, L_108, NULL);
		goto IL_02ca;
	}

IL_0219:
	{
		V_18 = 0;
		int32_t L_109 = V_3;
		V_4 = L_109;
		V_19 = 0;
		goto IL_02bd;
	}

IL_0227:
	{
		int32_t L_110 = V_4;
		int32_t L_111 = V_3;
		int32_t L_112 = V_1;
		if ((((int32_t)L_110) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_111, L_112)))))
		{
			goto IL_0239;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = ___0_inputBuffer;
		int32_t L_114 = V_4;
		int32_t L_115 = L_114;
		V_4 = ((int32_t)il2cpp_codegen_add(L_115, 1));
		NullCheck(L_113);
		int32_t L_116 = L_115;
		uint8_t L_117 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		G_B51_0 = ((int32_t)(L_117));
		goto IL_0242;
	}

IL_0239:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = V_2;
		int32_t L_119 = V_18;
		int32_t L_120 = L_119;
		V_18 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		NullCheck(L_118);
		int32_t L_121 = L_120;
		uint8_t L_122 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		G_B51_0 = ((int32_t)(L_122));
	}

IL_0242:
	{
		V_20 = G_B51_0;
		int32_t L_123 = V_4;
		int32_t L_124 = V_3;
		int32_t L_125 = V_1;
		if ((((int32_t)L_123) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_124, L_125)))))
		{
			goto IL_0256;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = ___0_inputBuffer;
		int32_t L_127 = V_4;
		int32_t L_128 = L_127;
		V_4 = ((int32_t)il2cpp_codegen_add(L_128, 1));
		NullCheck(L_126);
		int32_t L_129 = L_128;
		uint8_t L_130 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		G_B54_0 = ((int32_t)(L_130));
		goto IL_025f;
	}

IL_0256:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = V_2;
		int32_t L_132 = V_18;
		int32_t L_133 = L_132;
		V_18 = ((int32_t)il2cpp_codegen_add(L_133, 1));
		NullCheck(L_131);
		int32_t L_134 = L_133;
		uint8_t L_135 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		G_B54_0 = ((int32_t)(L_135));
	}

IL_025f:
	{
		V_21 = G_B54_0;
		int32_t L_136 = V_4;
		int32_t L_137 = V_3;
		int32_t L_138 = V_1;
		if ((((int32_t)L_136) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_137, L_138)))))
		{
			goto IL_0273;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = ___0_inputBuffer;
		int32_t L_140 = V_4;
		int32_t L_141 = L_140;
		V_4 = ((int32_t)il2cpp_codegen_add(L_141, 1));
		NullCheck(L_139);
		int32_t L_142 = L_141;
		uint8_t L_143 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		G_B57_0 = ((int32_t)(L_143));
		goto IL_027c;
	}

IL_0273:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_144 = V_2;
		int32_t L_145 = V_18;
		int32_t L_146 = L_145;
		V_18 = ((int32_t)il2cpp_codegen_add(L_146, 1));
		NullCheck(L_144);
		int32_t L_147 = L_146;
		uint8_t L_148 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		G_B57_0 = ((int32_t)(L_148));
	}

IL_027c:
	{
		V_22 = G_B57_0;
		int32_t L_149 = V_4;
		int32_t L_150 = V_3;
		int32_t L_151 = V_1;
		if ((((int32_t)L_149) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_150, L_151)))))
		{
			goto IL_0290;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_152 = ___0_inputBuffer;
		int32_t L_153 = V_4;
		int32_t L_154 = L_153;
		V_4 = ((int32_t)il2cpp_codegen_add(L_154, 1));
		NullCheck(L_152);
		int32_t L_155 = L_154;
		uint8_t L_156 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		G_B60_0 = ((int32_t)(L_156));
		goto IL_0299;
	}

IL_0290:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_157 = V_2;
		int32_t L_158 = V_18;
		int32_t L_159 = L_158;
		V_18 = ((int32_t)il2cpp_codegen_add(L_159, 1));
		NullCheck(L_157);
		int32_t L_160 = L_159;
		uint8_t L_161 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		G_B60_0 = ((int32_t)(L_161));
	}

IL_0299:
	{
		V_23 = G_B60_0;
		int32_t* L_162 = V_13;
		int32_t L_163 = V_19;
		intptr_t L_164 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_163,NULL));
		int32_t L_165 = V_23;
		int32_t L_166 = V_22;
		int32_t L_167 = V_21;
		int32_t L_168 = V_20;
		*(((int32_t*)il2cpp_codegen_add((intptr_t)L_162, ((intptr_t)il2cpp_codegen_multiply(L_164, 4))))) = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_165<<((int32_t)24)))|((int32_t)(L_166<<((int32_t)16)))))|((int32_t)(L_167<<8))))|L_168));
		int32_t L_169 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_169, 1));
	}

IL_02bd:
	{
		int32_t L_170 = V_19;
		int32_t L_171 = __this->___m_Nb;
		if ((((int32_t)L_170) < ((int32_t)L_171)))
		{
			goto IL_0227;
		}
	}

IL_02ca:
	{
		int32_t L_172 = __this->___m_cipherMode;
		if ((!(((uint32_t)L_172) == ((uint32_t)1))))
		{
			goto IL_02fd;
		}
	}
	{
		V_24 = 0;
		goto IL_02f3;
	}

IL_02d8:
	{
		int32_t* L_173 = V_13;
		int32_t L_174 = V_24;
		intptr_t L_175 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_174,NULL));
		int32_t* L_176 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_173, ((intptr_t)il2cpp_codegen_multiply(L_175, 4))));
		int32_t L_177 = *(L_176);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = __this->___m_lastBlockBuffer;
		int32_t L_179 = V_24;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		int32_t L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		*(L_176) = ((int32_t)(L_177^L_181));
		int32_t L_182 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_182, 1));
	}

IL_02f3:
	{
		int32_t L_183 = V_24;
		int32_t L_184 = __this->___m_Nb;
		if ((((int32_t)L_183) < ((int32_t)L_184)))
		{
			goto IL_02d8;
		}
	}

IL_02fd:
	{
		int32_t* L_185 = V_5;
		int32_t* L_186 = V_7;
		int32_t* L_187 = V_9;
		int32_t* L_188 = V_11;
		int32_t* L_189 = V_13;
		int32_t* L_190 = V_14;
		RijndaelManagedTransform_Enc_mBC8F3DE74DECA755F832AAE060703DA79382931C(__this, L_185, L_186, L_187, L_188, L_189, L_190, NULL);
		int32_t L_191 = __this->___m_cipherMode;
		if ((!(((uint32_t)L_191) == ((uint32_t)4))))
		{
			goto IL_059a;
		}
	}
	{
		int32_t L_192 = V_3;
		V_4 = L_192;
		int32_t L_193 = V_17;
		int32_t L_194 = V_15;
		if ((!(((uint32_t)L_193) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_194, 1))))))
		{
			goto IL_032c;
		}
	}
	{
		int32_t L_195 = V_0;
		if (L_195)
		{
			goto IL_0424;
		}
	}

IL_032c:
	{
		V_25 = 0;
		goto IL_0412;
	}

IL_0334:
	{
		int32_t L_196 = V_4;
		int32_t L_197 = V_3;
		int32_t L_198 = __this->___m_inputBlockSize;
		if ((((int32_t)L_196) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_197, L_198)))))
		{
			goto IL_0535;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_199 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_200 = *(L_199);
		int32_t L_201 = V_16;
		int32_t L_202 = L_201;
		V_16 = ((int32_t)il2cpp_codegen_add(L_202, 1));
		int32_t* L_203 = V_14;
		int32_t L_204 = V_25;
		intptr_t L_205 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_204,NULL));
		int32_t L_206 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_203, ((intptr_t)il2cpp_codegen_multiply(L_205, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_207 = ___0_inputBuffer;
		int32_t L_208 = V_4;
		int32_t L_209 = L_208;
		V_4 = ((int32_t)il2cpp_codegen_add(L_209, 1));
		NullCheck(L_207);
		int32_t L_210 = L_209;
		uint8_t L_211 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		uint8_t L_212 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(L_206&((int32_t)255)))^(int32_t)L_211)),NULL));
		NullCheck(L_200);
		(L_200)->SetAt(static_cast<il2cpp_array_size_t>(L_202), (uint8_t)L_212);
		int32_t L_213 = V_4;
		int32_t L_214 = V_3;
		int32_t L_215 = __this->___m_inputBlockSize;
		if ((((int32_t)L_213) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_214, L_215)))))
		{
			goto IL_0535;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_216 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_217 = *(L_216);
		int32_t L_218 = V_16;
		int32_t L_219 = L_218;
		V_16 = ((int32_t)il2cpp_codegen_add(L_219, 1));
		int32_t* L_220 = V_14;
		int32_t L_221 = V_25;
		intptr_t L_222 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_221,NULL));
		int32_t L_223 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_220, ((intptr_t)il2cpp_codegen_multiply(L_222, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_224 = ___0_inputBuffer;
		int32_t L_225 = V_4;
		int32_t L_226 = L_225;
		V_4 = ((int32_t)il2cpp_codegen_add(L_226, 1));
		NullCheck(L_224);
		int32_t L_227 = L_226;
		uint8_t L_228 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		uint8_t L_229 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(((int32_t)(L_223>>8))&((int32_t)255)))^(int32_t)L_228)),NULL));
		NullCheck(L_217);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(L_219), (uint8_t)L_229);
		int32_t L_230 = V_4;
		int32_t L_231 = V_3;
		int32_t L_232 = __this->___m_inputBlockSize;
		if ((((int32_t)L_230) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_231, L_232)))))
		{
			goto IL_0535;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_233 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_234 = *(L_233);
		int32_t L_235 = V_16;
		int32_t L_236 = L_235;
		V_16 = ((int32_t)il2cpp_codegen_add(L_236, 1));
		int32_t* L_237 = V_14;
		int32_t L_238 = V_25;
		intptr_t L_239 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_238,NULL));
		int32_t L_240 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_237, ((intptr_t)il2cpp_codegen_multiply(L_239, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_241 = ___0_inputBuffer;
		int32_t L_242 = V_4;
		int32_t L_243 = L_242;
		V_4 = ((int32_t)il2cpp_codegen_add(L_243, 1));
		NullCheck(L_241);
		int32_t L_244 = L_243;
		uint8_t L_245 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		uint8_t L_246 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(((int32_t)(L_240>>((int32_t)16)))&((int32_t)255)))^(int32_t)L_245)),NULL));
		NullCheck(L_234);
		(L_234)->SetAt(static_cast<il2cpp_array_size_t>(L_236), (uint8_t)L_246);
		int32_t L_247 = V_4;
		int32_t L_248 = V_3;
		int32_t L_249 = __this->___m_inputBlockSize;
		if ((((int32_t)L_247) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_248, L_249)))))
		{
			goto IL_0535;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_250 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_251 = *(L_250);
		int32_t L_252 = V_16;
		int32_t L_253 = L_252;
		V_16 = ((int32_t)il2cpp_codegen_add(L_253, 1));
		int32_t* L_254 = V_14;
		int32_t L_255 = V_25;
		intptr_t L_256 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_255,NULL));
		int32_t L_257 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_254, ((intptr_t)il2cpp_codegen_multiply(L_256, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_258 = ___0_inputBuffer;
		int32_t L_259 = V_4;
		int32_t L_260 = L_259;
		V_4 = ((int32_t)il2cpp_codegen_add(L_260, 1));
		NullCheck(L_258);
		int32_t L_261 = L_260;
		uint8_t L_262 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		uint8_t L_263 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(((int32_t)(L_257>>((int32_t)24)))&((int32_t)255)))^(int32_t)L_262)),NULL));
		NullCheck(L_251);
		(L_251)->SetAt(static_cast<il2cpp_array_size_t>(L_253), (uint8_t)L_263);
		int32_t L_264 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_264, 1));
	}

IL_0412:
	{
		int32_t L_265 = V_25;
		int32_t L_266 = __this->___m_Nb;
		if ((((int32_t)L_265) < ((int32_t)L_266)))
		{
			goto IL_0334;
		}
	}
	{
		goto IL_0535;
	}

IL_0424:
	{
		int32_t L_267 = __this->___m_inputBlockSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_268 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_267);
		V_26 = L_268;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_269 = ___0_inputBuffer;
		int32_t L_270 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_271 = V_26;
		int32_t L_272 = V_1;
		bool L_273;
		L_273 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_269, L_270, (RuntimeArray*)L_271, 0, L_272, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_274 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_275 = V_26;
		int32_t L_276 = V_1;
		int32_t L_277 = V_0;
		bool L_278;
		L_278 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_274, 0, (RuntimeArray*)L_275, L_276, L_277, NULL);
		V_4 = 0;
		V_27 = 0;
		goto IL_0528;
	}

IL_0454:
	{
		int32_t L_279 = V_4;
		int32_t L_280 = __this->___m_inputBlockSize;
		if ((((int32_t)L_279) >= ((int32_t)L_280)))
		{
			goto IL_0535;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_281 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_282 = *(L_281);
		int32_t L_283 = V_16;
		int32_t L_284 = L_283;
		V_16 = ((int32_t)il2cpp_codegen_add(L_284, 1));
		int32_t* L_285 = V_14;
		int32_t L_286 = V_27;
		intptr_t L_287 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_286,NULL));
		int32_t L_288 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_285, ((intptr_t)il2cpp_codegen_multiply(L_287, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_289 = V_26;
		int32_t L_290 = V_4;
		int32_t L_291 = L_290;
		V_4 = ((int32_t)il2cpp_codegen_add(L_291, 1));
		NullCheck(L_289);
		int32_t L_292 = L_291;
		uint8_t L_293 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		uint8_t L_294 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(L_288&((int32_t)255)))^(int32_t)L_293)),NULL));
		NullCheck(L_282);
		(L_282)->SetAt(static_cast<il2cpp_array_size_t>(L_284), (uint8_t)L_294);
		int32_t L_295 = V_4;
		int32_t L_296 = __this->___m_inputBlockSize;
		if ((((int32_t)L_295) >= ((int32_t)L_296)))
		{
			goto IL_0535;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_297 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_298 = *(L_297);
		int32_t L_299 = V_16;
		int32_t L_300 = L_299;
		V_16 = ((int32_t)il2cpp_codegen_add(L_300, 1));
		int32_t* L_301 = V_14;
		int32_t L_302 = V_27;
		intptr_t L_303 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_302,NULL));
		int32_t L_304 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_301, ((intptr_t)il2cpp_codegen_multiply(L_303, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_305 = V_26;
		int32_t L_306 = V_4;
		int32_t L_307 = L_306;
		V_4 = ((int32_t)il2cpp_codegen_add(L_307, 1));
		NullCheck(L_305);
		int32_t L_308 = L_307;
		uint8_t L_309 = (L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		uint8_t L_310 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(((int32_t)(L_304>>8))&((int32_t)255)))^(int32_t)L_309)),NULL));
		NullCheck(L_298);
		(L_298)->SetAt(static_cast<il2cpp_array_size_t>(L_300), (uint8_t)L_310);
		int32_t L_311 = V_4;
		int32_t L_312 = __this->___m_inputBlockSize;
		if ((((int32_t)L_311) >= ((int32_t)L_312)))
		{
			goto IL_0535;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_313 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_314 = *(L_313);
		int32_t L_315 = V_16;
		int32_t L_316 = L_315;
		V_16 = ((int32_t)il2cpp_codegen_add(L_316, 1));
		int32_t* L_317 = V_14;
		int32_t L_318 = V_27;
		intptr_t L_319 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_318,NULL));
		int32_t L_320 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_317, ((intptr_t)il2cpp_codegen_multiply(L_319, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_321 = V_26;
		int32_t L_322 = V_4;
		int32_t L_323 = L_322;
		V_4 = ((int32_t)il2cpp_codegen_add(L_323, 1));
		NullCheck(L_321);
		int32_t L_324 = L_323;
		uint8_t L_325 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		uint8_t L_326 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(((int32_t)(L_320>>((int32_t)16)))&((int32_t)255)))^(int32_t)L_325)),NULL));
		NullCheck(L_314);
		(L_314)->SetAt(static_cast<il2cpp_array_size_t>(L_316), (uint8_t)L_326);
		int32_t L_327 = V_4;
		int32_t L_328 = __this->___m_inputBlockSize;
		if ((((int32_t)L_327) >= ((int32_t)L_328)))
		{
			goto IL_0535;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_329 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_330 = *(L_329);
		int32_t L_331 = V_16;
		int32_t L_332 = L_331;
		V_16 = ((int32_t)il2cpp_codegen_add(L_332, 1));
		int32_t* L_333 = V_14;
		int32_t L_334 = V_27;
		intptr_t L_335 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_334,NULL));
		int32_t L_336 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_333, ((intptr_t)il2cpp_codegen_multiply(L_335, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_337 = V_26;
		int32_t L_338 = V_4;
		int32_t L_339 = L_338;
		V_4 = ((int32_t)il2cpp_codegen_add(L_339, 1));
		NullCheck(L_337);
		int32_t L_340 = L_339;
		uint8_t L_341 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		uint8_t L_342 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(((int32_t)(L_336>>((int32_t)24)))&((int32_t)255)))^(int32_t)L_341)),NULL));
		NullCheck(L_330);
		(L_330)->SetAt(static_cast<il2cpp_array_size_t>(L_332), (uint8_t)L_342);
		int32_t L_343 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_343, 1));
	}

IL_0528:
	{
		int32_t L_344 = V_27;
		int32_t L_345 = __this->___m_Nb;
		if ((((int32_t)L_344) < ((int32_t)L_345)))
		{
			goto IL_0454;
		}
	}

IL_0535:
	{
		V_4 = 0;
		goto IL_0559;
	}

IL_053a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_346 = __this->___m_shiftRegister;
		int32_t L_347 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_348 = __this->___m_shiftRegister;
		int32_t L_349 = V_4;
		int32_t L_350 = __this->___m_inputBlockSize;
		NullCheck(L_348);
		int32_t L_351 = ((int32_t)il2cpp_codegen_add(L_349, L_350));
		uint8_t L_352 = (L_348)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(L_347), (uint8_t)L_352);
		int32_t L_353 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_353, 1));
	}

IL_0559:
	{
		int32_t L_354 = V_4;
		int32_t L_355 = __this->___m_blockSizeBytes;
		int32_t L_356 = __this->___m_inputBlockSize;
		if ((((int32_t)L_354) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_355, L_356)))))
		{
			goto IL_053a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_357 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_358 = *(L_357);
		int32_t L_359 = V_17;
		int32_t L_360 = __this->___m_inputBlockSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_361 = __this->___m_shiftRegister;
		int32_t L_362 = __this->___m_blockSizeBytes;
		int32_t L_363 = __this->___m_inputBlockSize;
		int32_t L_364 = __this->___m_inputBlockSize;
		bool L_365;
		L_365 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_358, ((int32_t)il2cpp_codegen_multiply(L_359, L_360)), (RuntimeArray*)L_361, ((int32_t)il2cpp_codegen_subtract(L_362, L_363)), L_364, NULL);
		goto IL_0663;
	}

IL_059a:
	{
		V_28 = 0;
		goto IL_0619;
	}

IL_059f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_366 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_367 = *(L_366);
		int32_t L_368 = V_16;
		int32_t L_369 = L_368;
		V_16 = ((int32_t)il2cpp_codegen_add(L_369, 1));
		int32_t* L_370 = V_14;
		int32_t L_371 = V_28;
		intptr_t L_372 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_371,NULL));
		int32_t L_373 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_370, ((intptr_t)il2cpp_codegen_multiply(L_372, 4)))));
		uint8_t L_374 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(L_373&((int32_t)255))),NULL));
		NullCheck(L_367);
		(L_367)->SetAt(static_cast<il2cpp_array_size_t>(L_369), (uint8_t)L_374);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_375 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_376 = *(L_375);
		int32_t L_377 = V_16;
		int32_t L_378 = L_377;
		V_16 = ((int32_t)il2cpp_codegen_add(L_378, 1));
		int32_t* L_379 = V_14;
		int32_t L_380 = V_28;
		intptr_t L_381 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_380,NULL));
		int32_t L_382 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_379, ((intptr_t)il2cpp_codegen_multiply(L_381, 4)))));
		uint8_t L_383 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(L_382>>8))&((int32_t)255))),NULL));
		NullCheck(L_376);
		(L_376)->SetAt(static_cast<il2cpp_array_size_t>(L_378), (uint8_t)L_383);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_384 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_385 = *(L_384);
		int32_t L_386 = V_16;
		int32_t L_387 = L_386;
		V_16 = ((int32_t)il2cpp_codegen_add(L_387, 1));
		int32_t* L_388 = V_14;
		int32_t L_389 = V_28;
		intptr_t L_390 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_389,NULL));
		int32_t L_391 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_388, ((intptr_t)il2cpp_codegen_multiply(L_390, 4)))));
		uint8_t L_392 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(L_391>>((int32_t)16)))&((int32_t)255))),NULL));
		NullCheck(L_385);
		(L_385)->SetAt(static_cast<il2cpp_array_size_t>(L_387), (uint8_t)L_392);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_393 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_394 = *(L_393);
		int32_t L_395 = V_16;
		int32_t L_396 = L_395;
		V_16 = ((int32_t)il2cpp_codegen_add(L_396, 1));
		int32_t* L_397 = V_14;
		int32_t L_398 = V_28;
		intptr_t L_399 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_398,NULL));
		int32_t L_400 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_397, ((intptr_t)il2cpp_codegen_multiply(L_399, 4)))));
		uint8_t L_401 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(L_400>>((int32_t)24)))&((int32_t)255))),NULL));
		NullCheck(L_394);
		(L_394)->SetAt(static_cast<il2cpp_array_size_t>(L_396), (uint8_t)L_401);
		int32_t L_402 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_402, 1));
	}

IL_0619:
	{
		int32_t L_403 = V_28;
		int32_t L_404 = __this->___m_Nb;
		if ((((int32_t)L_403) < ((int32_t)L_404)))
		{
			goto IL_059f;
		}
	}
	{
		int32_t L_405 = __this->___m_cipherMode;
		if ((!(((uint32_t)L_405) == ((uint32_t)1))))
		{
			goto IL_0663;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_406 = __this->___m_lastBlockBuffer;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_407 = L_406;
		V_30 = L_407;
		if (!L_407)
		{
			goto IL_0640;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_408 = V_30;
		NullCheck(L_408);
		int32_t L_409 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_408)->max_length),NULL));
		if (L_409)
		{
			goto IL_0646;
		}
	}

IL_0640:
	{
		uintptr_t L_410 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_29 = (int32_t*)L_410;
		goto IL_0651;
	}

IL_0646:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_411 = V_30;
		NullCheck(L_411);
		uintptr_t L_412 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_411)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_29 = (int32_t*)L_412;
	}

IL_0651:
	{
		int32_t* L_413 = V_29;
		int32_t* L_414 = V_14;
		int32_t L_415 = __this->___m_blockSizeBytes;
		Buffer_Memcpy_m87345ACEE449F8CEA42341BC9F4AFC3743EF96D1((uint8_t*)L_413, (uint8_t*)L_414, L_415, NULL);
		V_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
	}

IL_0663:
	{
		int32_t L_416 = V_3;
		int32_t L_417 = __this->___m_inputBlockSize;
		V_3 = ((int32_t)il2cpp_codegen_add(L_416, L_417));
		int32_t L_418 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_418, 1));
	}

IL_0672:
	{
		int32_t L_419 = V_17;
		int32_t L_420 = V_15;
		if ((((int32_t)L_419) < ((int32_t)L_420)))
		{
			goto IL_01d6;
		}
	}
	{
		V_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		V_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		V_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		V_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		int32_t L_421 = ___2_inputCount;
		int32_t L_422 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_421, L_422));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inputBuffer, int32_t ___1_inputOffset, int32_t ___2_inputCount, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___3_outputBuffer, int32_t ___4_outputOffset, int32_t ___5_paddingMode, bool ___6_fLast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit);
	int32_t* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	int32_t* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	int32_t* V_8 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	int32_t* V_10 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	int32_t* V_12 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_13 = NULL;
	int32_t* V_14 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_15 = NULL;
	int32_t* V_16 = NULL;
	int32_t* V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_22 = NULL;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	int32_t V_39 = 0;
	int32_t V_40 = 0;
	int32_t V_41 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inputBuffer;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___1_inputOffset;
		int32_t L_3 = ___2_inputCount;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3)))))
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_4;
		L_4 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0178A80B5F0EC925E6A79673FB00AB1CC3CED51)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_5 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var)));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_6 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = *(L_6);
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_8 = ___3_outputBuffer;
		int32_t L_9 = ___2_inputCount;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		*(((RuntimeObject**)L_8)) = ((RuntimeObject*)L_10);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_8), (void*)((RuntimeObject*)L_10));
		___4_outputOffset = 0;
		goto IL_0046;
	}

IL_002b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_11 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = *(L_11);
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = ___4_outputOffset;
		int32_t L_15 = ___2_inputCount;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, L_14))) >= ((int32_t)L_15)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_16;
		L_16 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0178A80B5F0EC925E6A79673FB00AB1CC3CED51)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_17 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var)));
	}

IL_0046:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___m_encryptindex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18;
		V_1 = L_19;
		if (!L_19)
		{
			goto IL_0055;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if (L_21)
		{
			goto IL_005a;
		}
	}

IL_0055:
	{
		uintptr_t L_22 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (int32_t*)L_22;
		goto IL_0063;
	}

IL_005a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		NullCheck(L_23);
		uintptr_t L_24 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_0 = (int32_t*)L_24;
	}

IL_0063:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->___m_encryptKeyExpansion;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25;
		V_3 = L_26;
		if (!L_26)
		{
			goto IL_0072;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_3;
		NullCheck(L_27);
		int32_t L_28 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_27)->max_length),NULL));
		if (L_28)
		{
			goto IL_0077;
		}
	}

IL_0072:
	{
		uintptr_t L_29 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (int32_t*)L_29;
		goto IL_0080;
	}

IL_0077:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_3;
		NullCheck(L_30);
		uintptr_t L_31 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_2 = (int32_t*)L_31;
	}

IL_0080:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___m_decryptindex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = L_32;
		V_5 = L_33;
		if (!L_33)
		{
			goto IL_0091;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_5;
		NullCheck(L_34);
		int32_t L_35 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_34)->max_length),NULL));
		if (L_35)
		{
			goto IL_0097;
		}
	}

IL_0091:
	{
		uintptr_t L_36 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_4 = (int32_t*)L_36;
		goto IL_00a2;
	}

IL_0097:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_5;
		NullCheck(L_37);
		uintptr_t L_38 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_4 = (int32_t*)L_38;
	}

IL_00a2:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->___m_decryptKeyExpansion;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = L_39;
		V_7 = L_40;
		if (!L_40)
		{
			goto IL_00b3;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_7;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		if (L_42)
		{
			goto IL_00b9;
		}
	}

IL_00b3:
	{
		uintptr_t L_43 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = (int32_t*)L_43;
		goto IL_00c4;
	}

IL_00b9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_7;
		NullCheck(L_44);
		uintptr_t L_45 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_6 = (int32_t*)L_45;
	}

IL_00c4:
	{
		CHECKED_LOCAL_INIT(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit,(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_T;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = L_46;
		V_9 = L_47;
		if (!L_47)
		{
			goto IL_00d4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_9;
		NullCheck(L_48);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_48)->max_length),NULL));
		if (L_49)
		{
			goto IL_00da;
		}
	}

IL_00d4:
	{
		uintptr_t L_50 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_8 = (int32_t*)L_50;
		goto IL_00e5;
	}

IL_00da:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_9;
		NullCheck(L_51);
		uintptr_t L_52 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_8 = (int32_t*)L_52;
	}

IL_00e5:
	{
		CHECKED_LOCAL_INIT(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit,(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_TF;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = L_53;
		V_11 = L_54;
		if (!L_54)
		{
			goto IL_00f5;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_11;
		NullCheck(L_55);
		int32_t L_56 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_55)->max_length),NULL));
		if (L_56)
		{
			goto IL_00fb;
		}
	}

IL_00f5:
	{
		uintptr_t L_57 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_10 = (int32_t*)L_57;
		goto IL_0106;
	}

IL_00fb:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_11;
		NullCheck(L_58);
		uintptr_t L_59 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_10 = (int32_t*)L_59;
	}

IL_0106:
	{
		CHECKED_LOCAL_INIT(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit,(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_iT;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = L_60;
		V_13 = L_61;
		if (!L_61)
		{
			goto IL_0116;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_13;
		NullCheck(L_62);
		int32_t L_63 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_62)->max_length),NULL));
		if (L_63)
		{
			goto IL_011c;
		}
	}

IL_0116:
	{
		uintptr_t L_64 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_12 = (int32_t*)L_64;
		goto IL_0127;
	}

IL_011c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_13;
		NullCheck(L_65);
		uintptr_t L_66 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_12 = (int32_t*)L_66;
	}

IL_0127:
	{
		CHECKED_LOCAL_INIT(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit,(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_iTF;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = L_67;
		V_15 = L_68;
		if (!L_68)
		{
			goto IL_0137;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_15;
		NullCheck(L_69);
		int32_t L_70 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_69)->max_length),NULL));
		if (L_70)
		{
			goto IL_013d;
		}
	}

IL_0137:
	{
		uintptr_t L_71 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_14 = (int32_t*)L_71;
		goto IL_0148;
	}

IL_013d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_15;
		NullCheck(L_72);
		uintptr_t L_73 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_14 = (int32_t*)L_73;
	}

IL_0148:
	{
		int32_t L_74 = __this->___m_Nb;
		uintptr_t L_75 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_74,NULL));
		if ((uintptr_t)L_75 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var);
		intptr_t L_76 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_75, 4));
		int8_t* L_77;
		if (L_76 == 0)
		{
			L_77 = NULL;
		}
		else
		{
			L_77 = (int8_t*)alloca(L_76);
			memset(L_77, 0, L_76);
		}
		V_16 = (int32_t*)L_77;
		int32_t L_78 = __this->___m_Nb;
		uintptr_t L_79 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_78,NULL));
		if ((uintptr_t)L_79 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var);
		intptr_t L_80 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_79, 4));
		int8_t* L_81;
		if (L_80 == 0)
		{
			L_81 = NULL;
		}
		else
		{
			L_81 = (int8_t*)alloca(L_80);
			memset(L_81, 0, L_80);
		}
		V_17 = (int32_t*)L_81;
		int32_t L_82 = ___2_inputCount;
		int32_t L_83 = __this->___m_inputBlockSize;
		V_18 = ((int32_t)(L_82/L_83));
		int32_t L_84 = ___1_inputOffset;
		V_19 = L_84;
		V_20 = 0;
		int32_t L_85 = ___4_outputOffset;
		V_21 = L_85;
		V_24 = 0;
		goto IL_04f9;
	}

IL_017e:
	{
		int32_t L_86 = __this->___m_cipherMode;
		if ((!(((uint32_t)L_86) == ((uint32_t)4))))
		{
			goto IL_01fd;
		}
	}
	{
		V_20 = 0;
		V_25 = 0;
		goto IL_01f1;
	}

IL_018f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = __this->___m_shiftRegister;
		int32_t L_88 = V_20;
		int32_t L_89 = L_88;
		V_20 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		NullCheck(L_87);
		int32_t L_90 = L_89;
		uint8_t L_91 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_26 = (int32_t)L_91;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = __this->___m_shiftRegister;
		int32_t L_93 = V_20;
		int32_t L_94 = L_93;
		V_20 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		NullCheck(L_92);
		int32_t L_95 = L_94;
		uint8_t L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_27 = (int32_t)L_96;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = __this->___m_shiftRegister;
		int32_t L_98 = V_20;
		int32_t L_99 = L_98;
		V_20 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		NullCheck(L_97);
		int32_t L_100 = L_99;
		uint8_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_28 = (int32_t)L_101;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = __this->___m_shiftRegister;
		int32_t L_103 = V_20;
		int32_t L_104 = L_103;
		V_20 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		NullCheck(L_102);
		int32_t L_105 = L_104;
		uint8_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		V_29 = (int32_t)L_106;
		int32_t* L_107 = V_16;
		int32_t L_108 = V_25;
		intptr_t L_109 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_108,NULL));
		int32_t L_110 = V_29;
		int32_t L_111 = V_28;
		int32_t L_112 = V_27;
		int32_t L_113 = V_26;
		*(((int32_t*)il2cpp_codegen_add((intptr_t)L_107, ((intptr_t)il2cpp_codegen_multiply(L_109, 4))))) = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_110<<((int32_t)24)))|((int32_t)(L_111<<((int32_t)16)))))|((int32_t)(L_112<<8))))|L_113));
		int32_t L_114 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_01f1:
	{
		int32_t L_115 = V_25;
		int32_t L_116 = __this->___m_Nb;
		if ((((int32_t)L_115) < ((int32_t)L_116)))
		{
			goto IL_018f;
		}
	}
	{
		goto IL_025e;
	}

IL_01fd:
	{
		int32_t L_117 = V_19;
		V_20 = L_117;
		V_30 = 0;
		goto IL_0254;
	}

IL_0206:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = ___0_inputBuffer;
		int32_t L_119 = V_20;
		int32_t L_120 = L_119;
		V_20 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		NullCheck(L_118);
		int32_t L_121 = L_120;
		uint8_t L_122 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_31 = (int32_t)L_122;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = ___0_inputBuffer;
		int32_t L_124 = V_20;
		int32_t L_125 = L_124;
		V_20 = ((int32_t)il2cpp_codegen_add(L_125, 1));
		NullCheck(L_123);
		int32_t L_126 = L_125;
		uint8_t L_127 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		V_32 = (int32_t)L_127;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = ___0_inputBuffer;
		int32_t L_129 = V_20;
		int32_t L_130 = L_129;
		V_20 = ((int32_t)il2cpp_codegen_add(L_130, 1));
		NullCheck(L_128);
		int32_t L_131 = L_130;
		uint8_t L_132 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		V_33 = (int32_t)L_132;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = ___0_inputBuffer;
		int32_t L_134 = V_20;
		int32_t L_135 = L_134;
		V_20 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		NullCheck(L_133);
		int32_t L_136 = L_135;
		uint8_t L_137 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		V_34 = (int32_t)L_137;
		int32_t* L_138 = V_16;
		int32_t L_139 = V_30;
		intptr_t L_140 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_139,NULL));
		int32_t L_141 = V_34;
		int32_t L_142 = V_33;
		int32_t L_143 = V_32;
		int32_t L_144 = V_31;
		*(((int32_t*)il2cpp_codegen_add((intptr_t)L_138, ((intptr_t)il2cpp_codegen_multiply(L_140, 4))))) = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_141<<((int32_t)24)))|((int32_t)(L_142<<((int32_t)16)))))|((int32_t)(L_143<<8))))|L_144));
		int32_t L_145 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_145, 1));
	}

IL_0254:
	{
		int32_t L_146 = V_30;
		int32_t L_147 = __this->___m_Nb;
		if ((((int32_t)L_146) < ((int32_t)L_147)))
		{
			goto IL_0206;
		}
	}

IL_025e:
	{
		int32_t L_148 = __this->___m_cipherMode;
		if ((!(((uint32_t)L_148) == ((uint32_t)4))))
		{
			goto IL_03cb;
		}
	}
	{
		int32_t* L_149 = V_0;
		int32_t* L_150 = V_2;
		int32_t* L_151 = V_8;
		int32_t* L_152 = V_10;
		int32_t* L_153 = V_16;
		int32_t* L_154 = V_17;
		RijndaelManagedTransform_Enc_mBC8F3DE74DECA755F832AAE060703DA79382931C(__this, L_149, L_150, L_151, L_152, L_153, L_154, NULL);
		int32_t L_155 = V_19;
		V_20 = L_155;
		V_35 = 0;
		goto IL_0362;
	}

IL_0286:
	{
		int32_t L_156 = V_20;
		int32_t L_157 = V_19;
		int32_t L_158 = __this->___m_inputBlockSize;
		if ((((int32_t)L_156) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_157, L_158)))))
		{
			goto IL_036f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_159 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_160 = *(L_159);
		int32_t L_161 = V_21;
		int32_t L_162 = L_161;
		V_21 = ((int32_t)il2cpp_codegen_add(L_162, 1));
		int32_t* L_163 = V_17;
		int32_t L_164 = V_35;
		intptr_t L_165 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_164,NULL));
		int32_t L_166 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_163, ((intptr_t)il2cpp_codegen_multiply(L_165, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_167 = ___0_inputBuffer;
		int32_t L_168 = V_20;
		int32_t L_169 = L_168;
		V_20 = ((int32_t)il2cpp_codegen_add(L_169, 1));
		NullCheck(L_167);
		int32_t L_170 = L_169;
		uint8_t L_171 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		uint8_t L_172 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(L_166&((int32_t)255)))^(int32_t)L_171)),NULL));
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(L_162), (uint8_t)L_172);
		int32_t L_173 = V_20;
		int32_t L_174 = V_19;
		int32_t L_175 = __this->___m_inputBlockSize;
		if ((((int32_t)L_173) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_174, L_175)))))
		{
			goto IL_036f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_176 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_177 = *(L_176);
		int32_t L_178 = V_21;
		int32_t L_179 = L_178;
		V_21 = ((int32_t)il2cpp_codegen_add(L_179, 1));
		int32_t* L_180 = V_17;
		int32_t L_181 = V_35;
		intptr_t L_182 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_181,NULL));
		int32_t L_183 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_180, ((intptr_t)il2cpp_codegen_multiply(L_182, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_184 = ___0_inputBuffer;
		int32_t L_185 = V_20;
		int32_t L_186 = L_185;
		V_20 = ((int32_t)il2cpp_codegen_add(L_186, 1));
		NullCheck(L_184);
		int32_t L_187 = L_186;
		uint8_t L_188 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		uint8_t L_189 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(((int32_t)(L_183>>8))&((int32_t)255)))^(int32_t)L_188)),NULL));
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(L_179), (uint8_t)L_189);
		int32_t L_190 = V_20;
		int32_t L_191 = V_19;
		int32_t L_192 = __this->___m_inputBlockSize;
		if ((((int32_t)L_190) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_191, L_192)))))
		{
			goto IL_036f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_193 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_194 = *(L_193);
		int32_t L_195 = V_21;
		int32_t L_196 = L_195;
		V_21 = ((int32_t)il2cpp_codegen_add(L_196, 1));
		int32_t* L_197 = V_17;
		int32_t L_198 = V_35;
		intptr_t L_199 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_198,NULL));
		int32_t L_200 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_197, ((intptr_t)il2cpp_codegen_multiply(L_199, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_201 = ___0_inputBuffer;
		int32_t L_202 = V_20;
		int32_t L_203 = L_202;
		V_20 = ((int32_t)il2cpp_codegen_add(L_203, 1));
		NullCheck(L_201);
		int32_t L_204 = L_203;
		uint8_t L_205 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		uint8_t L_206 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(((int32_t)(L_200>>((int32_t)16)))&((int32_t)255)))^(int32_t)L_205)),NULL));
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(L_196), (uint8_t)L_206);
		int32_t L_207 = V_20;
		int32_t L_208 = V_19;
		int32_t L_209 = __this->___m_inputBlockSize;
		if ((((int32_t)L_207) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_208, L_209)))))
		{
			goto IL_036f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_210 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_211 = *(L_210);
		int32_t L_212 = V_21;
		int32_t L_213 = L_212;
		V_21 = ((int32_t)il2cpp_codegen_add(L_213, 1));
		int32_t* L_214 = V_17;
		int32_t L_215 = V_35;
		intptr_t L_216 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_215,NULL));
		int32_t L_217 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_214, ((intptr_t)il2cpp_codegen_multiply(L_216, 4)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_218 = ___0_inputBuffer;
		int32_t L_219 = V_20;
		int32_t L_220 = L_219;
		V_20 = ((int32_t)il2cpp_codegen_add(L_220, 1));
		NullCheck(L_218);
		int32_t L_221 = L_220;
		uint8_t L_222 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		uint8_t L_223 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(((int32_t)(L_217>>((int32_t)24)))&((int32_t)255)))^(int32_t)L_222)),NULL));
		NullCheck(L_211);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(L_213), (uint8_t)L_223);
		int32_t L_224 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add(L_224, 1));
	}

IL_0362:
	{
		int32_t L_225 = V_35;
		int32_t L_226 = __this->___m_Nb;
		if ((((int32_t)L_225) < ((int32_t)L_226)))
		{
			goto IL_0286;
		}
	}

IL_036f:
	{
		V_20 = 0;
		goto IL_0393;
	}

IL_0374:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_227 = __this->___m_shiftRegister;
		int32_t L_228 = V_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_229 = __this->___m_shiftRegister;
		int32_t L_230 = V_20;
		int32_t L_231 = __this->___m_inputBlockSize;
		NullCheck(L_229);
		int32_t L_232 = ((int32_t)il2cpp_codegen_add(L_230, L_231));
		uint8_t L_233 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		NullCheck(L_227);
		(L_227)->SetAt(static_cast<il2cpp_array_size_t>(L_228), (uint8_t)L_233);
		int32_t L_234 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_234, 1));
	}

IL_0393:
	{
		int32_t L_235 = V_20;
		int32_t L_236 = __this->___m_blockSizeBytes;
		int32_t L_237 = __this->___m_inputBlockSize;
		if ((((int32_t)L_235) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_236, L_237)))))
		{
			goto IL_0374;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_238 = ___0_inputBuffer;
		int32_t L_239 = V_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_240 = __this->___m_shiftRegister;
		int32_t L_241 = __this->___m_blockSizeBytes;
		int32_t L_242 = __this->___m_inputBlockSize;
		int32_t L_243 = __this->___m_inputBlockSize;
		bool L_244;
		L_244 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_238, L_239, (RuntimeArray*)L_240, ((int32_t)il2cpp_codegen_subtract(L_241, L_242)), L_243, NULL);
		goto IL_04e8;
	}

IL_03cb:
	{
		int32_t* L_245 = V_4;
		int32_t* L_246 = V_6;
		int32_t* L_247 = V_12;
		int32_t* L_248 = V_14;
		int32_t* L_249 = V_16;
		int32_t* L_250 = V_17;
		RijndaelManagedTransform_Dec_m1B1D3DA43A43958141E72C6E58D3EE694D033C20(__this, L_245, L_246, L_247, L_248, L_249, L_250, NULL);
		int32_t L_251 = __this->___m_cipherMode;
		if ((!(((uint32_t)L_251) == ((uint32_t)1))))
		{
			goto IL_045c;
		}
	}
	{
		int32_t L_252 = V_19;
		V_20 = L_252;
		V_36 = 0;
		goto IL_0452;
	}

IL_03ef:
	{
		int32_t* L_253 = V_17;
		int32_t L_254 = V_36;
		intptr_t L_255 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_254,NULL));
		int32_t* L_256 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_253, ((intptr_t)il2cpp_codegen_multiply(L_255, 4))));
		int32_t L_257 = *(L_256);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_258 = __this->___m_lastBlockBuffer;
		int32_t L_259 = V_36;
		NullCheck(L_258);
		int32_t L_260 = L_259;
		int32_t L_261 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_260));
		*(L_256) = ((int32_t)(L_257^L_261));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_262 = ___0_inputBuffer;
		int32_t L_263 = V_20;
		int32_t L_264 = L_263;
		V_20 = ((int32_t)il2cpp_codegen_add(L_264, 1));
		NullCheck(L_262);
		int32_t L_265 = L_264;
		uint8_t L_266 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		V_37 = (int32_t)L_266;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_267 = ___0_inputBuffer;
		int32_t L_268 = V_20;
		int32_t L_269 = L_268;
		V_20 = ((int32_t)il2cpp_codegen_add(L_269, 1));
		NullCheck(L_267);
		int32_t L_270 = L_269;
		uint8_t L_271 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		V_38 = (int32_t)L_271;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_272 = ___0_inputBuffer;
		int32_t L_273 = V_20;
		int32_t L_274 = L_273;
		V_20 = ((int32_t)il2cpp_codegen_add(L_274, 1));
		NullCheck(L_272);
		int32_t L_275 = L_274;
		uint8_t L_276 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		V_39 = (int32_t)L_276;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_277 = ___0_inputBuffer;
		int32_t L_278 = V_20;
		int32_t L_279 = L_278;
		V_20 = ((int32_t)il2cpp_codegen_add(L_279, 1));
		NullCheck(L_277);
		int32_t L_280 = L_279;
		uint8_t L_281 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		V_40 = (int32_t)L_281;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_282 = __this->___m_lastBlockBuffer;
		int32_t L_283 = V_36;
		int32_t L_284 = V_40;
		int32_t L_285 = V_39;
		int32_t L_286 = V_38;
		int32_t L_287 = V_37;
		NullCheck(L_282);
		(L_282)->SetAt(static_cast<il2cpp_array_size_t>(L_283), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_284<<((int32_t)24)))|((int32_t)(L_285<<((int32_t)16)))))|((int32_t)(L_286<<8))))|L_287)));
		int32_t L_288 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_288, 1));
	}

IL_0452:
	{
		int32_t L_289 = V_36;
		int32_t L_290 = __this->___m_Nb;
		if ((((int32_t)L_289) < ((int32_t)L_290)))
		{
			goto IL_03ef;
		}
	}

IL_045c:
	{
		V_41 = 0;
		goto IL_04db;
	}

IL_0461:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_291 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_292 = *(L_291);
		int32_t L_293 = V_21;
		int32_t L_294 = L_293;
		V_21 = ((int32_t)il2cpp_codegen_add(L_294, 1));
		int32_t* L_295 = V_17;
		int32_t L_296 = V_41;
		intptr_t L_297 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_296,NULL));
		int32_t L_298 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_295, ((intptr_t)il2cpp_codegen_multiply(L_297, 4)))));
		uint8_t L_299 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(L_298&((int32_t)255))),NULL));
		NullCheck(L_292);
		(L_292)->SetAt(static_cast<il2cpp_array_size_t>(L_294), (uint8_t)L_299);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_300 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_301 = *(L_300);
		int32_t L_302 = V_21;
		int32_t L_303 = L_302;
		V_21 = ((int32_t)il2cpp_codegen_add(L_303, 1));
		int32_t* L_304 = V_17;
		int32_t L_305 = V_41;
		intptr_t L_306 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_305,NULL));
		int32_t L_307 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_304, ((intptr_t)il2cpp_codegen_multiply(L_306, 4)))));
		uint8_t L_308 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(L_307>>8))&((int32_t)255))),NULL));
		NullCheck(L_301);
		(L_301)->SetAt(static_cast<il2cpp_array_size_t>(L_303), (uint8_t)L_308);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_309 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_310 = *(L_309);
		int32_t L_311 = V_21;
		int32_t L_312 = L_311;
		V_21 = ((int32_t)il2cpp_codegen_add(L_312, 1));
		int32_t* L_313 = V_17;
		int32_t L_314 = V_41;
		intptr_t L_315 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_314,NULL));
		int32_t L_316 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_313, ((intptr_t)il2cpp_codegen_multiply(L_315, 4)))));
		uint8_t L_317 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(L_316>>((int32_t)16)))&((int32_t)255))),NULL));
		NullCheck(L_310);
		(L_310)->SetAt(static_cast<il2cpp_array_size_t>(L_312), (uint8_t)L_317);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_318 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_319 = *(L_318);
		int32_t L_320 = V_21;
		int32_t L_321 = L_320;
		V_21 = ((int32_t)il2cpp_codegen_add(L_321, 1));
		int32_t* L_322 = V_17;
		int32_t L_323 = V_41;
		intptr_t L_324 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_323,NULL));
		int32_t L_325 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_322, ((intptr_t)il2cpp_codegen_multiply(L_324, 4)))));
		uint8_t L_326 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((int32_t)(((int32_t)(L_325>>((int32_t)24)))&((int32_t)255))),NULL));
		NullCheck(L_319);
		(L_319)->SetAt(static_cast<il2cpp_array_size_t>(L_321), (uint8_t)L_326);
		int32_t L_327 = V_41;
		V_41 = ((int32_t)il2cpp_codegen_add(L_327, 1));
	}

IL_04db:
	{
		int32_t L_328 = V_41;
		int32_t L_329 = __this->___m_Nb;
		if ((((int32_t)L_328) < ((int32_t)L_329)))
		{
			goto IL_0461;
		}
	}

IL_04e8:
	{
		int32_t L_330 = V_19;
		int32_t L_331 = __this->___m_inputBlockSize;
		V_19 = ((int32_t)il2cpp_codegen_add(L_330, L_331));
		int32_t L_332 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_332, 1));
	}

IL_04f9:
	{
		int32_t L_333 = V_24;
		int32_t L_334 = V_18;
		if ((((int32_t)L_333) < ((int32_t)L_334)))
		{
			goto IL_017e;
		}
	}
	{
		bool L_335 = ___6_fLast;
		if (L_335)
		{
			goto IL_0508;
		}
	}
	{
		int32_t L_336 = ___2_inputCount;
		return L_336;
	}

IL_0508:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_337 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_338 = *(L_337);
		V_22 = L_338;
		V_23 = 0;
		int32_t L_339 = ___5_paddingMode;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_339, 1)))
		{
			case 0:
			{
				goto IL_06c9;
			}
			case 1:
			{
				goto IL_0532;
			}
			case 2:
			{
				goto IL_06c9;
			}
			case 3:
			{
				goto IL_05cc;
			}
			case 4:
			{
				goto IL_0661;
			}
		}
	}
	{
		goto IL_06c9;
	}

IL_0532:
	{
		int32_t L_340 = ___2_inputCount;
		if (L_340)
		{
			goto IL_0545;
		}
	}
	{
		String_t* L_341;
		L_341 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19D9038AC1BF3C8D5DACB3B90F69218555A3642B)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_342 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_342, L_341, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_342, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var)));
	}

IL_0545:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_343 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_344 = *(L_343);
		int32_t L_345 = ___2_inputCount;
		NullCheck(L_344);
		int32_t L_346 = ((int32_t)il2cpp_codegen_subtract(L_345, 1));
		uint8_t L_347 = (L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_346));
		V_23 = (int32_t)L_347;
		int32_t L_348 = V_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_349 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_350 = *(L_349);
		NullCheck(L_350);
		int32_t L_351 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_350)->max_length),NULL));
		if ((((int32_t)L_348) > ((int32_t)L_351)))
		{
			goto IL_0566;
		}
	}
	{
		int32_t L_352 = V_23;
		int32_t L_353 = __this->___m_inputBlockSize;
		if ((((int32_t)L_352) > ((int32_t)L_353)))
		{
			goto IL_0566;
		}
	}
	{
		int32_t L_354 = V_23;
		if ((((int32_t)L_354) > ((int32_t)0)))
		{
			goto IL_0576;
		}
	}

IL_0566:
	{
		String_t* L_355;
		L_355 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19D9038AC1BF3C8D5DACB3B90F69218555A3642B)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_356 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_356, L_355, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_356, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var)));
	}

IL_0576:
	{
		V_20 = 1;
		goto IL_059d;
	}

IL_057b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_357 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_358 = *(L_357);
		int32_t L_359 = ___2_inputCount;
		int32_t L_360 = V_20;
		NullCheck(L_358);
		int32_t L_361 = ((int32_t)il2cpp_codegen_subtract(L_359, L_360));
		uint8_t L_362 = (L_358)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		int32_t L_363 = V_23;
		if ((((int32_t)L_362) == ((int32_t)L_363)))
		{
			goto IL_0597;
		}
	}
	{
		String_t* L_364;
		L_364 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19D9038AC1BF3C8D5DACB3B90F69218555A3642B)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_365 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_365, L_364, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_365, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var)));
	}

IL_0597:
	{
		int32_t L_366 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_366, 1));
	}

IL_059d:
	{
		int32_t L_367 = V_20;
		int32_t L_368 = V_23;
		if ((((int32_t)L_367) <= ((int32_t)L_368)))
		{
			goto IL_057b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_369 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_370 = *(L_369);
		NullCheck(L_370);
		int32_t L_371 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_370)->max_length),NULL));
		int32_t L_372 = V_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_373 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_371, L_372)));
		V_22 = L_373;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_374 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_375 = *(L_374);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_376 = V_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_377 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_378 = *(L_377);
		NullCheck(L_378);
		int32_t L_379 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_378)->max_length),NULL));
		int32_t L_380 = V_23;
		bool L_381;
		L_381 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_375, 0, (RuntimeArray*)L_376, 0, ((int32_t)il2cpp_codegen_subtract(L_379, L_380)), NULL);
		goto IL_06c9;
	}

IL_05cc:
	{
		int32_t L_382 = ___2_inputCount;
		if (L_382)
		{
			goto IL_05df;
		}
	}
	{
		String_t* L_383;
		L_383 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19D9038AC1BF3C8D5DACB3B90F69218555A3642B)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_384 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_384, L_383, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_384, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var)));
	}

IL_05df:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_385 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_386 = *(L_385);
		int32_t L_387 = ___2_inputCount;
		NullCheck(L_386);
		int32_t L_388 = ((int32_t)il2cpp_codegen_subtract(L_387, 1));
		uint8_t L_389 = (L_386)->GetAt(static_cast<il2cpp_array_size_t>(L_388));
		V_23 = (int32_t)L_389;
		int32_t L_390 = V_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_391 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_392 = *(L_391);
		NullCheck(L_392);
		int32_t L_393 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_392)->max_length),NULL));
		if ((((int32_t)L_390) > ((int32_t)L_393)))
		{
			goto IL_0600;
		}
	}
	{
		int32_t L_394 = V_23;
		int32_t L_395 = __this->___m_inputBlockSize;
		if ((((int32_t)L_394) > ((int32_t)L_395)))
		{
			goto IL_0600;
		}
	}
	{
		int32_t L_396 = V_23;
		if ((((int32_t)L_396) > ((int32_t)0)))
		{
			goto IL_0610;
		}
	}

IL_0600:
	{
		String_t* L_397;
		L_397 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19D9038AC1BF3C8D5DACB3B90F69218555A3642B)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_398 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_398, L_397, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_398, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var)));
	}

IL_0610:
	{
		V_20 = 2;
		goto IL_0635;
	}

IL_0615:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_399 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_400 = *(L_399);
		int32_t L_401 = ___2_inputCount;
		int32_t L_402 = V_20;
		NullCheck(L_400);
		int32_t L_403 = ((int32_t)il2cpp_codegen_subtract(L_401, L_402));
		uint8_t L_404 = (L_400)->GetAt(static_cast<il2cpp_array_size_t>(L_403));
		if (!L_404)
		{
			goto IL_062f;
		}
	}
	{
		String_t* L_405;
		L_405 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19D9038AC1BF3C8D5DACB3B90F69218555A3642B)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_406 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_406, L_405, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_406, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var)));
	}

IL_062f:
	{
		int32_t L_407 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_407, 1));
	}

IL_0635:
	{
		int32_t L_408 = V_20;
		int32_t L_409 = V_23;
		if ((((int32_t)L_408) <= ((int32_t)L_409)))
		{
			goto IL_0615;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_410 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_411 = *(L_410);
		NullCheck(L_411);
		int32_t L_412 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_411)->max_length),NULL));
		int32_t L_413 = V_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_414 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_412, L_413)));
		V_22 = L_414;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_415 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_416 = *(L_415);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_417 = V_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_418 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_419 = *(L_418);
		NullCheck(L_419);
		int32_t L_420 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_419)->max_length),NULL));
		int32_t L_421 = V_23;
		bool L_422;
		L_422 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_416, 0, (RuntimeArray*)L_417, 0, ((int32_t)il2cpp_codegen_subtract(L_420, L_421)), NULL);
		goto IL_06c9;
	}

IL_0661:
	{
		int32_t L_423 = ___2_inputCount;
		if (L_423)
		{
			goto IL_0674;
		}
	}
	{
		String_t* L_424;
		L_424 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19D9038AC1BF3C8D5DACB3B90F69218555A3642B)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_425 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_425, L_424, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_425, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var)));
	}

IL_0674:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_426 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_427 = *(L_426);
		int32_t L_428 = ___2_inputCount;
		NullCheck(L_427);
		int32_t L_429 = ((int32_t)il2cpp_codegen_subtract(L_428, 1));
		uint8_t L_430 = (L_427)->GetAt(static_cast<il2cpp_array_size_t>(L_429));
		V_23 = (int32_t)L_430;
		int32_t L_431 = V_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_432 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_433 = *(L_432);
		NullCheck(L_433);
		int32_t L_434 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_433)->max_length),NULL));
		if ((((int32_t)L_431) > ((int32_t)L_434)))
		{
			goto IL_0695;
		}
	}
	{
		int32_t L_435 = V_23;
		int32_t L_436 = __this->___m_inputBlockSize;
		if ((((int32_t)L_435) > ((int32_t)L_436)))
		{
			goto IL_0695;
		}
	}
	{
		int32_t L_437 = V_23;
		if ((((int32_t)L_437) > ((int32_t)0)))
		{
			goto IL_06a5;
		}
	}

IL_0695:
	{
		String_t* L_438;
		L_438 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19D9038AC1BF3C8D5DACB3B90F69218555A3642B)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_439 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_439, L_438, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_439, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_DecryptData_mF288A9309CD6129BE0CBF9E6D212C4CAEA7D4C8F_RuntimeMethod_var)));
	}

IL_06a5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_440 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_441 = *(L_440);
		NullCheck(L_441);
		int32_t L_442 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_441)->max_length),NULL));
		int32_t L_443 = V_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_444 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_442, L_443)));
		V_22 = L_444;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_445 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_446 = *(L_445);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_447 = V_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_448 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_449 = *(L_448);
		NullCheck(L_449);
		int32_t L_450 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_449)->max_length),NULL));
		int32_t L_451 = V_23;
		bool L_452;
		L_452 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_446, 0, (RuntimeArray*)L_447, 0, ((int32_t)il2cpp_codegen_subtract(L_450, L_451)), NULL);
	}

IL_06c9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_453 = ___3_outputBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_454 = V_22;
		*(((RuntimeObject**)L_453)) = ((RuntimeObject*)L_454);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_453), (void*)((RuntimeObject*)L_454));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_455 = V_22;
		NullCheck(L_455);
		int32_t L_456 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_455)->max_length),NULL));
		return L_456;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform_Enc_mBC8F3DE74DECA755F832AAE060703DA79382931C (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, int32_t* ___0_encryptindex, int32_t* ___1_encryptKeyExpansion, int32_t* ___2_T, int32_t* ___3_TF, int32_t* ___4_work, int32_t* ___5_temp, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_2 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		int32_t* L_0 = ___4_work;
		int32_t L_1 = V_2;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t* L_3 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 4))));
		int32_t L_4 = *(L_3);
		int32_t* L_5 = ___1_encryptKeyExpansion;
		int32_t L_6 = V_2;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 4)))));
		*(L_3) = ((int32_t)(L_4^L_8));
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001a:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = __this->___m_Nb;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t* L_12 = ___1_encryptKeyExpansion;
		int32_t L_13 = __this->___m_Nb;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uintptr_t L_15 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, 4)))),NULL));
		V_1 = (int32_t*)L_15;
		V_3 = 1;
		goto IL_011a;
	}

IL_0037:
	{
		int32_t* L_16 = ___0_encryptindex;
		V_0 = L_16;
		V_4 = 0;
		goto IL_00e2;
	}

IL_0041:
	{
		int32_t* L_17 = ___5_temp;
		int32_t L_18 = V_4;
		intptr_t L_19 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_18,NULL));
		int32_t* L_20 = ___2_T;
		int32_t* L_21 = ___4_work;
		int32_t L_22 = V_4;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t L_24 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))));
		intptr_t L_25 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)(L_24&((int32_t)255))),NULL));
		int32_t L_26 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(L_25, 4)))));
		int32_t* L_27 = ___2_T;
		int32_t* L_28 = ___4_work;
		int32_t* L_29 = V_0;
		int32_t L_30 = *(L_29);
		intptr_t L_31 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_30,NULL));
		int32_t L_32 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_31, 4)))));
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)256), ((int32_t)(((int32_t)(L_32>>8))&((int32_t)255))))),NULL));
		int32_t L_34 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		int32_t* L_35 = ___2_T;
		int32_t* L_36 = ___4_work;
		int32_t* L_37 = V_0;
		int32_t L_38 = __this->___m_Nb;
		intptr_t L_39 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_38,NULL));
		int32_t L_40 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_39, 4)))));
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		int32_t L_42 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))));
		intptr_t L_43 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)(((int32_t)(L_42>>((int32_t)16)))&((int32_t)255))))),NULL));
		int32_t L_44 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_43, 4)))));
		int32_t* L_45 = ___2_T;
		int32_t* L_46 = ___4_work;
		int32_t* L_47 = V_0;
		int32_t L_48 = __this->___m_Nb;
		intptr_t L_49 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_48, 2)),NULL));
		int32_t L_50 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_47, ((intptr_t)il2cpp_codegen_multiply(L_49, 4)))));
		intptr_t L_51 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_50,NULL));
		int32_t L_52 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_46, ((intptr_t)il2cpp_codegen_multiply(L_51, 4)))));
		intptr_t L_53 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)768), ((int32_t)(((int32_t)(L_52>>((int32_t)24)))&((int32_t)255))))),NULL));
		int32_t L_54 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(L_53, 4)))));
		int32_t* L_55 = V_1;
		int32_t L_56 = *(L_55);
		*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(L_19, 4))))) = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_26^L_34))^L_44))^L_54))^L_56));
		int32_t* L_57 = V_0;
		V_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_57, 4));
		int32_t* L_58 = V_1;
		V_1 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_58, 4));
		int32_t L_59 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_00e2:
	{
		int32_t L_60 = V_4;
		int32_t L_61 = __this->___m_Nb;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_0041;
		}
	}
	{
		V_5 = 0;
		goto IL_010c;
	}

IL_00f4:
	{
		int32_t* L_62 = ___4_work;
		int32_t L_63 = V_5;
		intptr_t L_64 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_63,NULL));
		int32_t* L_65 = ___5_temp;
		int32_t L_66 = V_5;
		intptr_t L_67 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_66,NULL));
		int32_t L_68 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_65, ((intptr_t)il2cpp_codegen_multiply(L_67, 4)))));
		*(((int32_t*)il2cpp_codegen_add((intptr_t)L_62, ((intptr_t)il2cpp_codegen_multiply(L_64, 4))))) = L_68;
		int32_t L_69 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_010c:
	{
		int32_t L_70 = V_5;
		int32_t L_71 = __this->___m_Nb;
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_72 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_011a:
	{
		int32_t L_73 = V_3;
		int32_t L_74 = __this->___m_Nr;
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t* L_75 = ___0_encryptindex;
		V_0 = L_75;
		V_6 = 0;
		goto IL_01d5;
	}

IL_0130:
	{
		int32_t* L_76 = ___5_temp;
		int32_t L_77 = V_6;
		intptr_t L_78 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_77,NULL));
		int32_t* L_79 = ___3_TF;
		int32_t* L_80 = ___4_work;
		int32_t L_81 = V_6;
		intptr_t L_82 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_81,NULL));
		int32_t L_83 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_80, ((intptr_t)il2cpp_codegen_multiply(L_82, 4)))));
		intptr_t L_84 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)(L_83&((int32_t)255))),NULL));
		int32_t L_85 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_79, ((intptr_t)il2cpp_codegen_multiply(L_84, 4)))));
		int32_t* L_86 = ___3_TF;
		int32_t* L_87 = ___4_work;
		int32_t* L_88 = V_0;
		int32_t L_89 = *(L_88);
		intptr_t L_90 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_89,NULL));
		int32_t L_91 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_87, ((intptr_t)il2cpp_codegen_multiply(L_90, 4)))));
		intptr_t L_92 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)256), ((int32_t)(((int32_t)(L_91>>8))&((int32_t)255))))),NULL));
		int32_t L_93 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_92, 4)))));
		int32_t* L_94 = ___3_TF;
		int32_t* L_95 = ___4_work;
		int32_t* L_96 = V_0;
		int32_t L_97 = __this->___m_Nb;
		intptr_t L_98 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_97,NULL));
		int32_t L_99 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(L_98, 4)))));
		intptr_t L_100 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_99,NULL));
		int32_t L_101 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_95, ((intptr_t)il2cpp_codegen_multiply(L_100, 4)))));
		intptr_t L_102 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)(((int32_t)(L_101>>((int32_t)16)))&((int32_t)255))))),NULL));
		int32_t L_103 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_94, ((intptr_t)il2cpp_codegen_multiply(L_102, 4)))));
		int32_t* L_104 = ___3_TF;
		int32_t* L_105 = ___4_work;
		int32_t* L_106 = V_0;
		int32_t L_107 = __this->___m_Nb;
		intptr_t L_108 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_107, 2)),NULL));
		int32_t L_109 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_106, ((intptr_t)il2cpp_codegen_multiply(L_108, 4)))));
		intptr_t L_110 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_109,NULL));
		int32_t L_111 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_105, ((intptr_t)il2cpp_codegen_multiply(L_110, 4)))));
		intptr_t L_112 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)768), ((int32_t)(((int32_t)(L_111>>((int32_t)24)))&((int32_t)255))))),NULL));
		int32_t L_113 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_104, ((intptr_t)il2cpp_codegen_multiply(L_112, 4)))));
		int32_t* L_114 = V_1;
		int32_t L_115 = *(L_114);
		*(((int32_t*)il2cpp_codegen_add((intptr_t)L_76, ((intptr_t)il2cpp_codegen_multiply(L_78, 4))))) = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_85^L_93))^L_103))^L_113))^L_115));
		int32_t* L_116 = V_0;
		V_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_116, 4));
		int32_t* L_117 = V_1;
		V_1 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_117, 4));
		int32_t L_118 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_118, 1));
	}

IL_01d5:
	{
		int32_t L_119 = V_6;
		int32_t L_120 = __this->___m_Nb;
		if ((((int32_t)L_119) < ((int32_t)L_120)))
		{
			goto IL_0130;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform_Dec_m1B1D3DA43A43958141E72C6E58D3EE694D033C20 (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, int32_t* ___0_decryptindex, int32_t* ___1_decryptKeyExpansion, int32_t* ___2_iT, int32_t* ___3_iTF, int32_t* ___4_work, int32_t* ___5_temp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->___m_Nb;
		int32_t L_1 = __this->___m_Nr;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		V_3 = 0;
		goto IL_002c;
	}

IL_0012:
	{
		int32_t* L_2 = ___4_work;
		int32_t L_3 = V_3;
		intptr_t L_4 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t* L_5 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(L_4, 4))));
		int32_t L_6 = *(L_5);
		int32_t* L_7 = ___1_decryptKeyExpansion;
		int32_t L_8 = V_0;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		int32_t L_10 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, 4)))));
		*(L_5) = ((int32_t)(L_6^L_10));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002c:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->___m_Nb;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0012;
		}
	}
	{
		V_4 = 1;
		goto IL_0139;
	}

IL_003d:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = __this->___m_Nb;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)il2cpp_codegen_multiply(2, L_16))));
		int32_t* L_17 = ___0_decryptindex;
		V_1 = L_17;
		int32_t* L_18 = ___1_decryptKeyExpansion;
		int32_t L_19 = V_0;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		uintptr_t L_21 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))),NULL));
		V_2 = (int32_t*)L_21;
		V_5 = 0;
		goto IL_00ff;
	}

IL_005a:
	{
		int32_t* L_22 = ___5_temp;
		int32_t L_23 = V_5;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t* L_25 = ___2_iT;
		int32_t* L_26 = ___4_work;
		int32_t L_27 = V_5;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)(L_29&((int32_t)255))),NULL));
		int32_t L_31 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		int32_t* L_32 = ___2_iT;
		int32_t* L_33 = ___4_work;
		int32_t* L_34 = V_1;
		int32_t L_35 = *(L_34);
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t L_37 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))));
		intptr_t L_38 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)256), ((int32_t)(((int32_t)(L_37>>8))&((int32_t)255))))),NULL));
		int32_t L_39 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_38, 4)))));
		int32_t* L_40 = ___2_iT;
		int32_t* L_41 = ___4_work;
		int32_t* L_42 = V_1;
		int32_t L_43 = __this->___m_Nb;
		intptr_t L_44 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_43,NULL));
		int32_t L_45 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_44, 4)))));
		intptr_t L_46 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_45,NULL));
		int32_t L_47 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(L_46, 4)))));
		intptr_t L_48 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)(((int32_t)(L_47>>((int32_t)16)))&((int32_t)255))))),NULL));
		int32_t L_49 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_48, 4)))));
		int32_t* L_50 = ___2_iT;
		int32_t* L_51 = ___4_work;
		int32_t* L_52 = V_1;
		int32_t L_53 = __this->___m_Nb;
		intptr_t L_54 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_53, 2)),NULL));
		int32_t L_55 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(L_54, 4)))));
		intptr_t L_56 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_55,NULL));
		int32_t L_57 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(L_56, 4)))));
		intptr_t L_58 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)768), ((int32_t)(((int32_t)(L_57>>((int32_t)24)))&((int32_t)255))))),NULL));
		int32_t L_59 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_58, 4)))));
		int32_t* L_60 = V_2;
		int32_t L_61 = *(L_60);
		*(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4))))) = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_31^L_39))^L_49))^L_59))^L_61));
		int32_t L_62 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		int32_t* L_63 = V_1;
		V_1 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_63, 4));
		int32_t* L_64 = V_2;
		V_2 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_64, 4));
		int32_t L_65 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_00ff:
	{
		int32_t L_66 = V_5;
		int32_t L_67 = __this->___m_Nb;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_005a;
		}
	}
	{
		V_6 = 0;
		goto IL_0129;
	}

IL_0111:
	{
		int32_t* L_68 = ___4_work;
		int32_t L_69 = V_6;
		intptr_t L_70 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_69,NULL));
		int32_t* L_71 = ___5_temp;
		int32_t L_72 = V_6;
		intptr_t L_73 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_72,NULL));
		int32_t L_74 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(L_73, 4)))));
		*(((int32_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(L_70, 4))))) = L_74;
		int32_t L_75 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_0129:
	{
		int32_t L_76 = V_6;
		int32_t L_77 = __this->___m_Nb;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0139:
	{
		int32_t L_79 = V_4;
		int32_t L_80 = __this->___m_Nr;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_003d;
		}
	}
	{
		V_0 = 0;
		int32_t* L_81 = ___0_decryptindex;
		V_1 = L_81;
		int32_t* L_82 = ___1_decryptKeyExpansion;
		int32_t L_83 = V_0;
		intptr_t L_84 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_83,NULL));
		uintptr_t L_85 = (il2cpp_codegen_conv<uintptr_t,int32_t*,intptr_t,false,false>(((int32_t*)il2cpp_codegen_add((intptr_t)L_82, ((intptr_t)il2cpp_codegen_multiply(L_84, 4)))),NULL));
		V_2 = (int32_t*)L_85;
		V_7 = 0;
		goto IL_01ff;
	}

IL_015a:
	{
		int32_t* L_86 = ___5_temp;
		int32_t L_87 = V_7;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t* L_89 = ___3_iTF;
		int32_t* L_90 = ___4_work;
		int32_t L_91 = V_7;
		intptr_t L_92 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_91,NULL));
		int32_t L_93 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(L_92, 4)))));
		intptr_t L_94 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)(L_93&((int32_t)255))),NULL));
		int32_t L_95 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_94, 4)))));
		int32_t* L_96 = ___3_iTF;
		int32_t* L_97 = ___4_work;
		int32_t* L_98 = V_1;
		int32_t L_99 = *(L_98);
		intptr_t L_100 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_99,NULL));
		int32_t L_101 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(L_100, 4)))));
		intptr_t L_102 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)256), ((int32_t)(((int32_t)(L_101>>8))&((int32_t)255))))),NULL));
		int32_t L_103 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(L_102, 4)))));
		int32_t* L_104 = ___3_iTF;
		int32_t* L_105 = ___4_work;
		int32_t* L_106 = V_1;
		int32_t L_107 = __this->___m_Nb;
		intptr_t L_108 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_107,NULL));
		int32_t L_109 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_106, ((intptr_t)il2cpp_codegen_multiply(L_108, 4)))));
		intptr_t L_110 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_109,NULL));
		int32_t L_111 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_105, ((intptr_t)il2cpp_codegen_multiply(L_110, 4)))));
		intptr_t L_112 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)(((int32_t)(L_111>>((int32_t)16)))&((int32_t)255))))),NULL));
		int32_t L_113 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_104, ((intptr_t)il2cpp_codegen_multiply(L_112, 4)))));
		int32_t* L_114 = ___3_iTF;
		int32_t* L_115 = ___4_work;
		int32_t* L_116 = V_1;
		int32_t L_117 = __this->___m_Nb;
		intptr_t L_118 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_117, 2)),NULL));
		int32_t L_119 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(L_118, 4)))));
		intptr_t L_120 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_119,NULL));
		int32_t L_121 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_115, ((intptr_t)il2cpp_codegen_multiply(L_120, 4)))));
		intptr_t L_122 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)768), ((int32_t)(((int32_t)(L_121>>((int32_t)24)))&((int32_t)255))))),NULL));
		int32_t L_123 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(L_122, 4)))));
		int32_t* L_124 = V_2;
		int32_t L_125 = *(L_124);
		*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4))))) = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_95^L_103))^L_113))^L_123))^L_125));
		int32_t* L_126 = V_1;
		V_1 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_126, 4));
		int32_t* L_127 = V_2;
		V_2 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_127, 4));
		int32_t L_128 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_128, 1));
	}

IL_01ff:
	{
		int32_t L_129 = V_7;
		int32_t L_130 = __this->___m_Nb;
		if ((((int32_t)L_129) < ((int32_t)L_130)))
		{
			goto IL_015a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform_GenerateKeyExpansion_mAAEEC20C8B3AE40E5F2701BAF651CF7EF317266D (RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___m_blockSizeBits;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_rgbKey;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((((int32_t)L_0) > ((int32_t)((int32_t)il2cpp_codegen_multiply(L_2, 8)))))
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_rgbKey;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(L_4, 8));
		goto IL_001a;
	}

IL_0014:
	{
		int32_t L_5 = __this->___m_blockSizeBits;
		G_B3_0 = L_5;
	}

IL_001a:
	{
		V_2 = G_B3_0;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)128))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)192))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)256))))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0053;
	}

IL_0035:
	{
		__this->___m_Nr = ((int32_t)10);
		goto IL_0063;
	}

IL_003f:
	{
		__this->___m_Nr = ((int32_t)12);
		goto IL_0063;
	}

IL_0049:
	{
		__this->___m_Nr = ((int32_t)14);
		goto IL_0063;
	}

IL_0053:
	{
		String_t* L_9;
		L_9 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral167E6E6EB13F42BCA02A2CAA251B92A9CCA2C7E4)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_10 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RijndaelManagedTransform_GenerateKeyExpansion_mAAEEC20C8B3AE40E5F2701BAF651CF7EF317266D_RuntimeMethod_var)));
	}

IL_0063:
	{
		int32_t L_11 = __this->___m_Nb;
		int32_t L_12 = __this->___m_Nr;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)))));
		__this->___m_encryptKeyExpansion = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_encryptKeyExpansion), (void*)L_13);
		int32_t L_14 = __this->___m_Nb;
		int32_t L_15 = __this->___m_Nr;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)))));
		__this->___m_decryptKeyExpansion = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_decryptKeyExpansion), (void*)L_16);
		V_1 = 0;
		V_3 = 0;
		goto IL_00e0;
	}

IL_009d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_rgbKey;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		NullCheck(L_17);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = (int32_t)L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_rgbKey;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_5 = (int32_t)L_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___0_rgbKey;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_6 = (int32_t)L_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_rgbKey;
		int32_t L_33 = V_1;
		int32_t L_34 = L_33;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		NullCheck(L_32);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_7 = (int32_t)L_36;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->___m_encryptKeyExpansion;
		int32_t L_38 = V_3;
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		int32_t L_41 = V_5;
		int32_t L_42 = V_4;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_39<<((int32_t)24)))|((int32_t)(L_40<<((int32_t)16)))))|((int32_t)(L_41<<8))))|L_42)));
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00e0:
	{
		int32_t L_44 = V_3;
		int32_t L_45 = __this->___m_Nk;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_46 = __this->___m_Nk;
		if ((((int32_t)L_46) > ((int32_t)6)))
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_47 = __this->___m_Nk;
		V_8 = L_47;
		goto IL_0154;
	}

IL_00fc:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = __this->___m_encryptKeyExpansion;
		int32_t L_49 = V_8;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
		int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_0 = L_51;
		int32_t L_52 = V_8;
		int32_t L_53 = __this->___m_Nk;
		if (((int32_t)(L_52%L_53)))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_54 = V_0;
		CHECKED_LOCAL_INIT(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit,(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_55;
		L_55 = RijndaelManagedTransform_rot3_mC256E018A1372D35D21A4786C68EDEAE99D7328E(L_54, NULL);
		int32_t L_56;
		L_56 = RijndaelManagedTransform_SubWord_m0C9E2276F0B1B3DC886E776C35B6A2A258392C15(L_55, NULL);
		V_0 = L_56;
		int32_t L_57 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_Rcon;
		int32_t L_59 = V_8;
		int32_t L_60 = __this->___m_Nk;
		NullCheck(L_58);
		int32_t L_61 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_59/L_60)), 1));
		int32_t L_62 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_0 = ((int32_t)(L_57^L_62));
	}

IL_0133:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = __this->___m_encryptKeyExpansion;
		int32_t L_64 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___m_encryptKeyExpansion;
		int32_t L_66 = V_8;
		int32_t L_67 = __this->___m_Nk;
		NullCheck(L_65);
		int32_t L_68 = ((int32_t)il2cpp_codegen_subtract(L_66, L_67));
		int32_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		int32_t L_70 = V_0;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (int32_t)((int32_t)(L_69^L_70)));
		int32_t L_71 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_0154:
	{
		int32_t L_72 = V_8;
		int32_t L_73 = __this->___m_Nb;
		int32_t L_74 = __this->___m_Nr;
		if ((((int32_t)L_72) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_73, ((int32_t)il2cpp_codegen_add(L_74, 1)))))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_01f6;
	}

IL_016c:
	{
		int32_t L_75 = __this->___m_Nk;
		V_9 = L_75;
		goto IL_01e3;
	}

IL_0176:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = __this->___m_encryptKeyExpansion;
		int32_t L_77 = V_9;
		NullCheck(L_76);
		int32_t L_78 = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		int32_t L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_0 = L_79;
		int32_t L_80 = V_9;
		int32_t L_81 = __this->___m_Nk;
		if (((int32_t)(L_80%L_81)))
		{
			goto IL_01af;
		}
	}
	{
		int32_t L_82 = V_0;
		CHECKED_LOCAL_INIT(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit,(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_83;
		L_83 = RijndaelManagedTransform_rot3_mC256E018A1372D35D21A4786C68EDEAE99D7328E(L_82, NULL);
		int32_t L_84;
		L_84 = RijndaelManagedTransform_SubWord_m0C9E2276F0B1B3DC886E776C35B6A2A258392C15(L_83, NULL);
		V_0 = L_84;
		int32_t L_85 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_Rcon;
		int32_t L_87 = V_9;
		int32_t L_88 = __this->___m_Nk;
		NullCheck(L_86);
		int32_t L_89 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_87/L_88)), 1));
		int32_t L_90 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_0 = ((int32_t)(L_85^L_90));
		goto IL_01c2;
	}

IL_01af:
	{
		int32_t L_91 = V_9;
		int32_t L_92 = __this->___m_Nk;
		if ((!(((uint32_t)((int32_t)(L_91%L_92))) == ((uint32_t)4))))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_93 = V_0;
		CHECKED_LOCAL_INIT(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit,(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_94;
		L_94 = RijndaelManagedTransform_SubWord_m0C9E2276F0B1B3DC886E776C35B6A2A258392C15(L_93, NULL);
		V_0 = L_94;
	}

IL_01c2:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = __this->___m_encryptKeyExpansion;
		int32_t L_96 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = __this->___m_encryptKeyExpansion;
		int32_t L_98 = V_9;
		int32_t L_99 = __this->___m_Nk;
		NullCheck(L_97);
		int32_t L_100 = ((int32_t)il2cpp_codegen_subtract(L_98, L_99));
		int32_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		int32_t L_102 = V_0;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (int32_t)((int32_t)(L_101^L_102)));
		int32_t L_103 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_01e3:
	{
		int32_t L_104 = V_9;
		int32_t L_105 = __this->___m_Nb;
		int32_t L_106 = __this->___m_Nr;
		if ((((int32_t)L_104) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_105, ((int32_t)il2cpp_codegen_add(L_106, 1)))))))
		{
			goto IL_0176;
		}
	}

IL_01f6:
	{
		V_10 = 0;
		goto IL_0241;
	}

IL_01fb:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = __this->___m_decryptKeyExpansion;
		int32_t L_108 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = __this->___m_encryptKeyExpansion;
		int32_t L_110 = V_10;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(L_108), (int32_t)L_112);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = __this->___m_decryptKeyExpansion;
		int32_t L_114 = __this->___m_Nb;
		int32_t L_115 = __this->___m_Nr;
		int32_t L_116 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___m_encryptKeyExpansion;
		int32_t L_118 = __this->___m_Nb;
		int32_t L_119 = __this->___m_Nr;
		int32_t L_120 = V_10;
		NullCheck(L_117);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_118, L_119)), L_120));
		int32_t L_122 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_114, L_115)), L_116))), (int32_t)L_122);
		int32_t L_123 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_0241:
	{
		int32_t L_124 = V_10;
		int32_t L_125 = __this->___m_Nb;
		if ((((int32_t)L_124) < ((int32_t)L_125)))
		{
			goto IL_01fb;
		}
	}
	{
		int32_t L_126 = __this->___m_Nb;
		V_11 = L_126;
		goto IL_02b2;
	}

IL_0255:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = __this->___m_encryptKeyExpansion;
		int32_t L_128 = V_11;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		int32_t L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		int32_t L_131 = L_130;
		CHECKED_LOCAL_INIT(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit,(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_132;
		L_132 = RijndaelManagedTransform_MulX_m4D29B34854F83AF9A803DA63F2EE632F8F21076E(L_131, NULL);
		V_12 = L_132;
		int32_t L_133 = V_12;
		int32_t L_134;
		L_134 = RijndaelManagedTransform_MulX_m4D29B34854F83AF9A803DA63F2EE632F8F21076E(L_133, NULL);
		V_13 = L_134;
		int32_t L_135 = V_13;
		int32_t L_136;
		L_136 = RijndaelManagedTransform_MulX_m4D29B34854F83AF9A803DA63F2EE632F8F21076E(L_135, NULL);
		V_14 = L_136;
		int32_t L_137 = V_14;
		V_15 = ((int32_t)(L_131^L_137));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = __this->___m_decryptKeyExpansion;
		int32_t L_139 = V_11;
		int32_t L_140 = V_12;
		int32_t L_141 = V_13;
		int32_t L_142 = V_14;
		int32_t L_143 = V_12;
		int32_t L_144 = V_15;
		int32_t L_145;
		L_145 = RijndaelManagedTransform_rot3_mC256E018A1372D35D21A4786C68EDEAE99D7328E(((int32_t)(L_143^L_144)), NULL);
		int32_t L_146 = V_13;
		int32_t L_147 = V_15;
		int32_t L_148;
		L_148 = RijndaelManagedTransform_rot2_mE287C14754453D18776FF20479E8E689DAD8E812(((int32_t)(L_146^L_147)), NULL);
		int32_t L_149 = V_15;
		int32_t L_150;
		L_150 = RijndaelManagedTransform_rot1_m5C9B7277D9CB12B69889B13AEAC78AA48197A518(L_149, NULL);
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(L_139), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_140^L_141))^L_142))^L_145))^L_148))^L_150)));
		int32_t L_151 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_151, 1));
	}

IL_02b2:
	{
		int32_t L_152 = V_11;
		int32_t L_153 = __this->___m_Nb;
		int32_t L_154 = __this->___m_Nr;
		if ((((int32_t)L_152) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_153, L_154)))))
		{
			goto IL_0255;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_rot1_m5C9B7277D9CB12B69889B13AEAC78AA48197A518 (int32_t ___0_val, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_val;
		int32_t L_1 = ___0_val;
		return ((int32_t)(((int32_t)(((int32_t)(L_0<<8))&((int32_t)-256)))|((int32_t)(((int32_t)(L_1>>((int32_t)24)))&((int32_t)255)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_rot2_mE287C14754453D18776FF20479E8E689DAD8E812 (int32_t ___0_val, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_val;
		int32_t L_1 = ___0_val;
		return ((int32_t)(((int32_t)(((int32_t)(L_0<<((int32_t)16)))&((int32_t)-65536)))|((int32_t)(((int32_t)(L_1>>((int32_t)16)))&((int32_t)65535)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_rot3_mC256E018A1372D35D21A4786C68EDEAE99D7328E (int32_t ___0_val, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_val;
		int32_t L_1 = ___0_val;
		return ((int32_t)(((int32_t)(((int32_t)(L_0<<((int32_t)24)))&((int32_t)-16777216)))|((int32_t)(((int32_t)(L_1>>8))&((int32_t)16777215)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_SubWord_m0C9E2276F0B1B3DC886E776C35B6A2A258392C15 (int32_t ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit);
	{
		CHECKED_LOCAL_INIT(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticInit,(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_Sbox;
		int32_t L_1 = ___0_a;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1&((int32_t)255)));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_Sbox;
		int32_t L_5 = ___0_a;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)(((int32_t)(L_5>>8))&((int32_t)255)));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_Sbox;
		int32_t L_9 = ___0_a;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)(((int32_t)(L_9>>((int32_t)16)))&((int32_t)255)));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_Sbox;
		int32_t L_13 = ___0_a;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)(((int32_t)(L_13>>((int32_t)24)))&((int32_t)255)));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_7<<8))))|((int32_t)((int32_t)L_11<<((int32_t)16)))))|((int32_t)((int32_t)L_15<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RijndaelManagedTransform_MulX_m4D29B34854F83AF9A803DA63F2EE632F8F21076E (int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_x;
		V_0 = ((int32_t)(L_0&((int32_t)-2139062144)));
		int32_t L_1 = ___0_x;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		return ((int32_t)(((int32_t)(((int32_t)(L_1&((int32_t)2139062143)))<<1))^((int32_t)(((int32_t)il2cpp_codegen_subtract(L_2, ((int32_t)(((int32_t)(L_3>>7))&((int32_t)33554431)))))&((int32_t)454761243)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RijndaelManagedTransform__cctor_m963CBFD61166A50AA9311EB250C2FB3778E85873 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____78AD7906208AA1E531D0C1100062DE3D252210B1E4214061294A0BB7C94762B8_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____B215DD70A77190680641703C6DF73729B4583E285AF8B51ACF9086655FB2D0F3_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____CE11D6DEAFFC6D6EF6030E30E7444C933E6261F32AA737064EF0446C219ECE22_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____E148B2057CF0C1595155635E761FB66AAE634C40D8FABC4CE79A2DB8886525D4_RVAStorage);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		Il2CppFieldRvaData L_2 = {U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_1, L_2);
		((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_Sbox = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_Sbox), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		Il2CppFieldRvaData L_5 = {U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____78AD7906208AA1E531D0C1100062DE3D252210B1E4214061294A0BB7C94762B8_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_4, L_5);
		((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_Rcon = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_Rcon), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		Il2CppFieldRvaData L_8 = {U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_7, L_8);
		((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_T = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_T), (void*)L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		Il2CppFieldRvaData L_11 = {U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____E148B2057CF0C1595155635E761FB66AAE634C40D8FABC4CE79A2DB8886525D4_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_10, L_11);
		((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_TF = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_TF), (void*)L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		Il2CppFieldRvaData L_14 = {U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____CE11D6DEAFFC6D6EF6030E30E7444C933E6261F32AA737064EF0446C219ECE22_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_13, L_14);
		((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_iT = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_iT), (void*)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15;
		Il2CppFieldRvaData L_17 = {U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____B215DD70A77190680641703C6DF73729B4583E285AF8B51ACF9086655FB2D0F3_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_16, L_17);
		((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_iTF = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields*)il2cpp_codegen_static_fields_for(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_il2cpp_TypeInfo_var))->___s_iTF), (void*)L_16);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160__ctor_m607085A4057F40B3D531017C4D25298CACD393F0 (RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0* __this, const RuntimeMethod* method) 
{
	{
		HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708(__this, NULL);
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue = ((int32_t)160);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RIPEMD160_t367AC1CC6F4CB51EDA39EB0AA696470F47ED98F0* RIPEMD160_Create_mA9232B56D00B3D47600967745A6C1588CEA29FDD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* L_0 = (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017*)il2cpp_codegen_object_new(RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017_il2cpp_TypeInfo_var);
		RIPEMD160Managed__ctor_m7A61ACB69319E21CDB19248D67B2E068F0A90F9B(L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160Managed__ctor_m7A61ACB69319E21CDB19248D67B2E068F0A90F9B (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit);
	{
		RIPEMD160__ctor_m607085A4057F40B3D531017C4D25298CACD393F0(__this, NULL);
		CHECKED_LOCAL_INIT(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit,(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = CryptoConfig_get_AllowOnlyFipsAlgorithms_mA16FE662AA39F2F95122B1DF80564FD3C3EECF6B(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17BA770D472146F14CBDE2CFF7752F076430BCBE)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RIPEMD160Managed__ctor_m7A61ACB69319E21CDB19248D67B2E068F0A90F9B_RuntimeMethod_var)));
	}

IL_001d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->____stateMD160 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stateMD160), (void*)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->____blockDWords = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____blockDWords), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->____buffer = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer), (void*)L_5);
		RIPEMD160Managed_InitializeState_m1CF5C2E6896C5F05FA04DCABE83BE7A22580C2A0(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160Managed_Initialize_mDA8C6191F0BF1332A6D8208AFB4C19CCF702D77E (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* __this, const RuntimeMethod* method) 
{
	{
		RIPEMD160Managed_InitializeState_m1CF5C2E6896C5F05FA04DCABE83BE7A22580C2A0(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____blockDWords;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____blockDWords;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____buffer;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160Managed_HashCore_m47ECE2DDD8A6900732FA8ECEAE20DE7A698CAF2A (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgb, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgb;
		int32_t L_1 = ___1_ibStart;
		int32_t L_2 = ___2_cbSize;
		RIPEMD160Managed__HashData_m609CCFFA119605035B3812D13E2052210B0FEDFD(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RIPEMD160Managed_HashFinal_mCD7BEFB9321C7A3FDC43B411D8E6459A5E7E0AB2 (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = RIPEMD160Managed__EndHash_m78FAA89B5187A8F7D8F49CDA1EB1EC490BD0B1E8(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160Managed_InitializeState_m1CF5C2E6896C5F05FA04DCABE83BE7A22580C2A0 (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		__this->____count = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____stateMD160;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)1732584193));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____stateMD160;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)-271733879));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____stateMD160;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)-1732584194));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____stateMD160;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)271733878));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____stateMD160;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)-1009589776));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160Managed__HashData_m609CCFFA119605035B3812D13E2052210B0FEDFD (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_partIn, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	uint8_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	uint32_t* V_7 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	{
		int32_t L_0 = ___2_cbSize;
		V_1 = L_0;
		int32_t L_1 = ___1_ibStart;
		V_2 = L_1;
		int64_t L_2 = __this->____count;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)63),NULL));
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(L_2&L_3)),NULL));
		V_0 = L_4;
		int64_t L_5 = __this->____count;
		int32_t L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		__this->____count = ((int64_t)il2cpp_codegen_add(L_5, L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->____stateMD160;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8;
		V_4 = L_9;
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if (L_11)
		{
			goto IL_0035;
		}
	}

IL_0030:
	{
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (uint32_t*)L_12;
		goto IL_003f;
	}

IL_0035:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_4;
		NullCheck(L_13);
		uintptr_t L_14 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_3 = (uint32_t*)L_14;
	}

IL_003f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
		V_6 = L_16;
		if (!L_16)
		{
			goto IL_0050;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_6;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if (L_18)
		{
			goto IL_0056;
		}
	}

IL_0050:
	{
		uintptr_t L_19 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_5 = (uint8_t*)L_19;
		goto IL_0061;
	}

IL_0056:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_6;
		NullCheck(L_20);
		uintptr_t L_21 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_5 = (uint8_t*)L_21;
	}

IL_0061:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->____blockDWords;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22;
		V_8 = L_23;
		if (!L_23)
		{
			goto IL_0072;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_8;
		NullCheck(L_24);
		int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
		if (L_25)
		{
			goto IL_0078;
		}
	}

IL_0072:
	{
		uintptr_t L_26 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_7 = (uint32_t*)L_26;
		goto IL_0083;
	}

IL_0078:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_8;
		NullCheck(L_27);
		uintptr_t L_28 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_7 = (uint32_t*)L_28;
	}

IL_0083:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_30, L_31))) < ((int32_t)((int32_t)64))))
		{
			goto IL_00e2;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_partIn;
		int32_t L_33 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->____buffer;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		bool L_37;
		L_37 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_32, L_33, (RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_36)), NULL);
		int32_t L_38 = V_2;
		int32_t L_39 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_39))));
		int32_t L_40 = V_1;
		int32_t L_41 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_41))));
		uint32_t* L_42 = V_7;
		uint32_t* L_43 = V_3;
		uint8_t* L_44 = V_5;
		RIPEMD160Managed_MDTransform_mFA6339C9D5B302EC71DA09C882E729D50C108B27(L_42, L_43, L_44, NULL);
		V_0 = 0;
		goto IL_00e2;
	}

IL_00bd:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___0_partIn;
		int32_t L_46 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->____buffer;
		bool L_48;
		L_48 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_45, L_46, (RuntimeArray*)L_47, 0, ((int32_t)64), NULL);
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, ((int32_t)64)));
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_50, ((int32_t)64)));
		uint32_t* L_51 = V_7;
		uint32_t* L_52 = V_3;
		uint8_t* L_53 = V_5;
		RIPEMD160Managed_MDTransform_mFA6339C9D5B302EC71DA09C882E729D50C108B27(L_51, L_52, L_53, NULL);
	}

IL_00e2:
	{
		int32_t L_54 = V_1;
		if ((((int32_t)L_54) >= ((int32_t)((int32_t)64))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_partIn;
		int32_t L_57 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->____buffer;
		int32_t L_59 = V_0;
		int32_t L_60 = V_1;
		bool L_61;
		L_61 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_56, L_57, (RuntimeArray*)L_58, L_59, L_60, NULL);
	}

IL_00fb:
	{
		V_8 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RIPEMD160Managed__EndHash_m78FAA89B5187A8F7D8F49CDA1EB1EC490BD0B1E8 (RIPEMD160Managed_tA3C168825A89226BAB8585359AB324B49DC7B017* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		V_3 = L_0;
		int64_t L_1 = __this->____count;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)63),NULL));
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(L_1&L_2)),NULL));
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_3));
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)8)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)64)));
	}

IL_0020:
	{
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		int64_t L_9 = __this->____count;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_9, L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		int32_t L_12 = V_1;
		int64_t L_13 = V_2;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_15 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_13>>((int32_t)56)))&L_14)),NULL));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_12, 1))), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		int32_t L_17 = V_1;
		int64_t L_18 = V_2;
		int64_t L_19 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_20 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_18>>((int32_t)48)))&L_19)),NULL));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_17, 2))), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		int64_t L_23 = V_2;
		int64_t L_24 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_25 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_23>>((int32_t)40)))&L_24)),NULL));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_22, 3))), (uint8_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		int32_t L_27 = V_1;
		int64_t L_28 = V_2;
		int64_t L_29 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_30 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_28>>((int32_t)32)))&L_29)),NULL));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_27, 4))), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_0;
		int32_t L_32 = V_1;
		int64_t L_33 = V_2;
		int64_t L_34 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_35 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_33>>((int32_t)24)))&L_34)),NULL));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_32, 5))), (uint8_t)L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		int32_t L_37 = V_1;
		int64_t L_38 = V_2;
		int64_t L_39 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_40 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_38>>((int32_t)16)))&L_39)),NULL));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_37, 6))), (uint8_t)L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_0;
		int32_t L_42 = V_1;
		int64_t L_43 = V_2;
		int64_t L_44 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_45 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_43>>8))&L_44)),NULL));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_42, 7))), (uint8_t)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = V_1;
		int64_t L_48 = V_2;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_50 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(L_48&L_49)),NULL));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_47, 8))), (uint8_t)L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		RIPEMD160Managed__HashData_m609CCFFA119605035B3812D13E2052210B0FEDFD(__this, L_51, 0, L_53, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = __this->____stateMD160;
		Utils_DWORDToLittleEndian_mCE59B477B258C78B5C18225FFCC443B5D3268EA8(L_54, L_55, 5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_3;
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue), (void*)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_3;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RIPEMD160Managed_MDTransform_mFA6339C9D5B302EC71DA09C882E729D50C108B27 (uint32_t* ___0_blockDWords, uint32_t* ___1_state, uint8_t* ___2_block, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	{
		uint32_t* L_0 = ___1_state;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = L_1;
		uint32_t* L_2 = ___1_state;
		int32_t L_3 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, 4))));
		V_1 = L_3;
		uint32_t* L_4 = ___1_state;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_6 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(L_5, 4))))));
		V_2 = L_6;
		uint32_t* L_7 = ___1_state;
		intptr_t L_8 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_9 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_8, 4))))));
		V_3 = L_9;
		uint32_t* L_10 = ___1_state;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_12 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(L_11, 4))))));
		V_4 = L_12;
		uint32_t L_13 = V_0;
		V_5 = L_13;
		uint32_t L_14 = V_1;
		V_6 = L_14;
		uint32_t L_15 = V_2;
		V_7 = L_15;
		uint32_t L_16 = V_3;
		V_8 = L_16;
		uint32_t L_17 = V_4;
		V_9 = L_17;
		uint32_t* L_18 = ___0_blockDWords;
		uint8_t* L_19 = ___2_block;
		Utils_DWORDFromLittleEndian_m5D4F77444B1A8EF6FD408C7A8899010BF2957B1E(L_18, ((int32_t)16), L_19, NULL);
		uint32_t L_20 = V_0;
		uint32_t* L_21 = ___0_blockDWords;
		int32_t L_22 = ((int32_t)*(L_21));
		uint32_t L_23 = V_1;
		uint32_t L_24 = V_2;
		uint32_t L_25 = V_3;
		uint32_t L_26;
		L_26 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_23, L_24, L_25, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, ((int32_t)il2cpp_codegen_add(L_22, (int32_t)L_26))));
		uint32_t L_27 = V_0;
		uint32_t L_28 = V_0;
		uint32_t L_29 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_27<<((int32_t)11)))|((int32_t)((uint32_t)L_28>>((int32_t)21))))), (int32_t)L_29));
		uint32_t L_30 = V_2;
		uint32_t L_31 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_30<<((int32_t)10)))|((int32_t)((uint32_t)L_31>>((int32_t)22)))));
		uint32_t L_32 = V_4;
		uint32_t* L_33 = ___0_blockDWords;
		int32_t L_34 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_33, 4))));
		uint32_t L_35 = V_0;
		uint32_t L_36 = V_1;
		uint32_t L_37 = V_2;
		uint32_t L_38;
		L_38 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_35, L_36, L_37, NULL);
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, ((int32_t)il2cpp_codegen_add(L_34, (int32_t)L_38))));
		uint32_t L_39 = V_4;
		uint32_t L_40 = V_4;
		uint32_t L_41 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_39<<((int32_t)14)))|((int32_t)((uint32_t)L_40>>((int32_t)18))))), (int32_t)L_41));
		uint32_t L_42 = V_1;
		uint32_t L_43 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_42<<((int32_t)10)))|((int32_t)((uint32_t)L_43>>((int32_t)22)))));
		uint32_t L_44 = V_3;
		uint32_t* L_45 = ___0_blockDWords;
		intptr_t L_46 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_47 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(L_46, 4))))));
		uint32_t L_48 = V_4;
		uint32_t L_49 = V_0;
		uint32_t L_50 = V_1;
		uint32_t L_51;
		L_51 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_48, L_49, L_50, NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, ((int32_t)il2cpp_codegen_add(L_47, (int32_t)L_51))));
		uint32_t L_52 = V_3;
		uint32_t L_53 = V_3;
		uint32_t L_54 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_52<<((int32_t)15)))|((int32_t)((uint32_t)L_53>>((int32_t)17))))), (int32_t)L_54));
		uint32_t L_55 = V_0;
		uint32_t L_56 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_55<<((int32_t)10)))|((int32_t)((uint32_t)L_56>>((int32_t)22)))));
		uint32_t L_57 = V_2;
		uint32_t* L_58 = ___0_blockDWords;
		intptr_t L_59 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_60 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_58, ((intptr_t)il2cpp_codegen_multiply(L_59, 4))))));
		uint32_t L_61 = V_3;
		uint32_t L_62 = V_4;
		uint32_t L_63 = V_0;
		uint32_t L_64;
		L_64 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_61, L_62, L_63, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, ((int32_t)il2cpp_codegen_add(L_60, (int32_t)L_64))));
		uint32_t L_65 = V_2;
		uint32_t L_66 = V_2;
		uint32_t L_67 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_65<<((int32_t)12)))|((int32_t)((uint32_t)L_66>>((int32_t)20))))), (int32_t)L_67));
		uint32_t L_68 = V_4;
		uint32_t L_69 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_68<<((int32_t)10)))|((int32_t)((uint32_t)L_69>>((int32_t)22)))));
		uint32_t L_70 = V_1;
		uint32_t* L_71 = ___0_blockDWords;
		intptr_t L_72 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_73 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(L_72, 4))))));
		uint32_t L_74 = V_2;
		uint32_t L_75 = V_3;
		uint32_t L_76 = V_4;
		uint32_t L_77;
		L_77 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_74, L_75, L_76, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, ((int32_t)il2cpp_codegen_add(L_73, (int32_t)L_77))));
		uint32_t L_78 = V_1;
		uint32_t L_79 = V_1;
		uint32_t L_80 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_78<<5))|((int32_t)((uint32_t)L_79>>((int32_t)27))))), (int32_t)L_80));
		uint32_t L_81 = V_3;
		uint32_t L_82 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_81<<((int32_t)10)))|((int32_t)((uint32_t)L_82>>((int32_t)22)))));
		uint32_t L_83 = V_0;
		uint32_t* L_84 = ___0_blockDWords;
		intptr_t L_85 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int32_t L_86 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(L_85, 4))))));
		uint32_t L_87 = V_1;
		uint32_t L_88 = V_2;
		uint32_t L_89 = V_3;
		uint32_t L_90;
		L_90 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_87, L_88, L_89, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, ((int32_t)il2cpp_codegen_add(L_86, (int32_t)L_90))));
		uint32_t L_91 = V_0;
		uint32_t L_92 = V_0;
		uint32_t L_93 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_91<<8))|((int32_t)((uint32_t)L_92>>((int32_t)24))))), (int32_t)L_93));
		uint32_t L_94 = V_2;
		uint32_t L_95 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_94<<((int32_t)10)))|((int32_t)((uint32_t)L_95>>((int32_t)22)))));
		uint32_t L_96 = V_4;
		uint32_t* L_97 = ___0_blockDWords;
		intptr_t L_98 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int32_t L_99 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(L_98, 4))))));
		uint32_t L_100 = V_0;
		uint32_t L_101 = V_1;
		uint32_t L_102 = V_2;
		uint32_t L_103;
		L_103 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_100, L_101, L_102, NULL);
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, ((int32_t)il2cpp_codegen_add(L_99, (int32_t)L_103))));
		uint32_t L_104 = V_4;
		uint32_t L_105 = V_4;
		uint32_t L_106 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_104<<7))|((int32_t)((uint32_t)L_105>>((int32_t)25))))), (int32_t)L_106));
		uint32_t L_107 = V_1;
		uint32_t L_108 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_107<<((int32_t)10)))|((int32_t)((uint32_t)L_108>>((int32_t)22)))));
		uint32_t L_109 = V_3;
		uint32_t* L_110 = ___0_blockDWords;
		intptr_t L_111 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int32_t L_112 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(L_111, 4))))));
		uint32_t L_113 = V_4;
		uint32_t L_114 = V_0;
		uint32_t L_115 = V_1;
		uint32_t L_116;
		L_116 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_113, L_114, L_115, NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, ((int32_t)il2cpp_codegen_add(L_112, (int32_t)L_116))));
		uint32_t L_117 = V_3;
		uint32_t L_118 = V_3;
		uint32_t L_119 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_117<<((int32_t)9)))|((int32_t)((uint32_t)L_118>>((int32_t)23))))), (int32_t)L_119));
		uint32_t L_120 = V_0;
		uint32_t L_121 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_120<<((int32_t)10)))|((int32_t)((uint32_t)L_121>>((int32_t)22)))));
		uint32_t L_122 = V_2;
		uint32_t* L_123 = ___0_blockDWords;
		intptr_t L_124 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		int32_t L_125 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_123, ((intptr_t)il2cpp_codegen_multiply(L_124, 4))))));
		uint32_t L_126 = V_3;
		uint32_t L_127 = V_4;
		uint32_t L_128 = V_0;
		uint32_t L_129;
		L_129 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_126, L_127, L_128, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, ((int32_t)il2cpp_codegen_add(L_125, (int32_t)L_129))));
		uint32_t L_130 = V_2;
		uint32_t L_131 = V_2;
		uint32_t L_132 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_130<<((int32_t)11)))|((int32_t)((uint32_t)L_131>>((int32_t)21))))), (int32_t)L_132));
		uint32_t L_133 = V_4;
		uint32_t L_134 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_133<<((int32_t)10)))|((int32_t)((uint32_t)L_134>>((int32_t)22)))));
		uint32_t L_135 = V_1;
		uint32_t* L_136 = ___0_blockDWords;
		intptr_t L_137 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		int32_t L_138 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_136, ((intptr_t)il2cpp_codegen_multiply(L_137, 4))))));
		uint32_t L_139 = V_2;
		uint32_t L_140 = V_3;
		uint32_t L_141 = V_4;
		uint32_t L_142;
		L_142 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_139, L_140, L_141, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, ((int32_t)il2cpp_codegen_add(L_138, (int32_t)L_142))));
		uint32_t L_143 = V_1;
		uint32_t L_144 = V_1;
		uint32_t L_145 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_143<<((int32_t)13)))|((int32_t)((uint32_t)L_144>>((int32_t)19))))), (int32_t)L_145));
		uint32_t L_146 = V_3;
		uint32_t L_147 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_146<<((int32_t)10)))|((int32_t)((uint32_t)L_147>>((int32_t)22)))));
		uint32_t L_148 = V_0;
		uint32_t* L_149 = ___0_blockDWords;
		intptr_t L_150 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		int32_t L_151 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_149, ((intptr_t)il2cpp_codegen_multiply(L_150, 4))))));
		uint32_t L_152 = V_1;
		uint32_t L_153 = V_2;
		uint32_t L_154 = V_3;
		uint32_t L_155;
		L_155 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_152, L_153, L_154, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_148, ((int32_t)il2cpp_codegen_add(L_151, (int32_t)L_155))));
		uint32_t L_156 = V_0;
		uint32_t L_157 = V_0;
		uint32_t L_158 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_156<<((int32_t)14)))|((int32_t)((uint32_t)L_157>>((int32_t)18))))), (int32_t)L_158));
		uint32_t L_159 = V_2;
		uint32_t L_160 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_159<<((int32_t)10)))|((int32_t)((uint32_t)L_160>>((int32_t)22)))));
		uint32_t L_161 = V_4;
		uint32_t* L_162 = ___0_blockDWords;
		intptr_t L_163 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		int32_t L_164 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_162, ((intptr_t)il2cpp_codegen_multiply(L_163, 4))))));
		uint32_t L_165 = V_0;
		uint32_t L_166 = V_1;
		uint32_t L_167 = V_2;
		uint32_t L_168;
		L_168 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_165, L_166, L_167, NULL);
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, ((int32_t)il2cpp_codegen_add(L_164, (int32_t)L_168))));
		uint32_t L_169 = V_4;
		uint32_t L_170 = V_4;
		uint32_t L_171 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_169<<((int32_t)15)))|((int32_t)((uint32_t)L_170>>((int32_t)17))))), (int32_t)L_171));
		uint32_t L_172 = V_1;
		uint32_t L_173 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_172<<((int32_t)10)))|((int32_t)((uint32_t)L_173>>((int32_t)22)))));
		uint32_t L_174 = V_3;
		uint32_t* L_175 = ___0_blockDWords;
		intptr_t L_176 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		int32_t L_177 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_175, ((intptr_t)il2cpp_codegen_multiply(L_176, 4))))));
		uint32_t L_178 = V_4;
		uint32_t L_179 = V_0;
		uint32_t L_180 = V_1;
		uint32_t L_181;
		L_181 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_178, L_179, L_180, NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, ((int32_t)il2cpp_codegen_add(L_177, (int32_t)L_181))));
		uint32_t L_182 = V_3;
		uint32_t L_183 = V_3;
		uint32_t L_184 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_182<<6))|((int32_t)((uint32_t)L_183>>((int32_t)26))))), (int32_t)L_184));
		uint32_t L_185 = V_0;
		uint32_t L_186 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_185<<((int32_t)10)))|((int32_t)((uint32_t)L_186>>((int32_t)22)))));
		uint32_t L_187 = V_2;
		uint32_t* L_188 = ___0_blockDWords;
		intptr_t L_189 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		int32_t L_190 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_188, ((intptr_t)il2cpp_codegen_multiply(L_189, 4))))));
		uint32_t L_191 = V_3;
		uint32_t L_192 = V_4;
		uint32_t L_193 = V_0;
		uint32_t L_194;
		L_194 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_191, L_192, L_193, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_187, ((int32_t)il2cpp_codegen_add(L_190, (int32_t)L_194))));
		uint32_t L_195 = V_2;
		uint32_t L_196 = V_2;
		uint32_t L_197 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_195<<7))|((int32_t)((uint32_t)L_196>>((int32_t)25))))), (int32_t)L_197));
		uint32_t L_198 = V_4;
		uint32_t L_199 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_198<<((int32_t)10)))|((int32_t)((uint32_t)L_199>>((int32_t)22)))));
		uint32_t L_200 = V_1;
		uint32_t* L_201 = ___0_blockDWords;
		intptr_t L_202 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)14),NULL));
		int32_t L_203 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_201, ((intptr_t)il2cpp_codegen_multiply(L_202, 4))))));
		uint32_t L_204 = V_2;
		uint32_t L_205 = V_3;
		uint32_t L_206 = V_4;
		uint32_t L_207;
		L_207 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_204, L_205, L_206, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_200, ((int32_t)il2cpp_codegen_add(L_203, (int32_t)L_207))));
		uint32_t L_208 = V_1;
		uint32_t L_209 = V_1;
		uint32_t L_210 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_208<<((int32_t)9)))|((int32_t)((uint32_t)L_209>>((int32_t)23))))), (int32_t)L_210));
		uint32_t L_211 = V_3;
		uint32_t L_212 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_211<<((int32_t)10)))|((int32_t)((uint32_t)L_212>>((int32_t)22)))));
		uint32_t L_213 = V_0;
		uint32_t* L_214 = ___0_blockDWords;
		intptr_t L_215 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)15),NULL));
		int32_t L_216 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_214, ((intptr_t)il2cpp_codegen_multiply(L_215, 4))))));
		uint32_t L_217 = V_1;
		uint32_t L_218 = V_2;
		uint32_t L_219 = V_3;
		uint32_t L_220;
		L_220 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_217, L_218, L_219, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_213, ((int32_t)il2cpp_codegen_add(L_216, (int32_t)L_220))));
		uint32_t L_221 = V_0;
		uint32_t L_222 = V_0;
		uint32_t L_223 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_221<<8))|((int32_t)((uint32_t)L_222>>((int32_t)24))))), (int32_t)L_223));
		uint32_t L_224 = V_2;
		uint32_t L_225 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_224<<((int32_t)10)))|((int32_t)((uint32_t)L_225>>((int32_t)22)))));
		uint32_t L_226 = V_4;
		uint32_t L_227 = V_0;
		uint32_t L_228 = V_1;
		uint32_t L_229 = V_2;
		uint32_t L_230;
		L_230 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_227, L_228, L_229, NULL);
		uint32_t* L_231 = ___0_blockDWords;
		intptr_t L_232 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int32_t L_233 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_231, ((intptr_t)il2cpp_codegen_multiply(L_232, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_226, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_230, L_233)), ((int32_t)1518500249)))));
		uint32_t L_234 = V_4;
		uint32_t L_235 = V_4;
		uint32_t L_236 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_234<<7))|((int32_t)((uint32_t)L_235>>((int32_t)25))))), (int32_t)L_236));
		uint32_t L_237 = V_1;
		uint32_t L_238 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_237<<((int32_t)10)))|((int32_t)((uint32_t)L_238>>((int32_t)22)))));
		uint32_t L_239 = V_3;
		uint32_t L_240 = V_4;
		uint32_t L_241 = V_0;
		uint32_t L_242 = V_1;
		uint32_t L_243;
		L_243 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_240, L_241, L_242, NULL);
		uint32_t* L_244 = ___0_blockDWords;
		intptr_t L_245 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_246 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_244, ((intptr_t)il2cpp_codegen_multiply(L_245, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_239, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_243, L_246)), ((int32_t)1518500249)))));
		uint32_t L_247 = V_3;
		uint32_t L_248 = V_3;
		uint32_t L_249 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_247<<6))|((int32_t)((uint32_t)L_248>>((int32_t)26))))), (int32_t)L_249));
		uint32_t L_250 = V_0;
		uint32_t L_251 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_250<<((int32_t)10)))|((int32_t)((uint32_t)L_251>>((int32_t)22)))));
		uint32_t L_252 = V_2;
		uint32_t L_253 = V_3;
		uint32_t L_254 = V_4;
		uint32_t L_255 = V_0;
		uint32_t L_256;
		L_256 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_253, L_254, L_255, NULL);
		uint32_t* L_257 = ___0_blockDWords;
		intptr_t L_258 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		int32_t L_259 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_257, ((intptr_t)il2cpp_codegen_multiply(L_258, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_252, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_256, L_259)), ((int32_t)1518500249)))));
		uint32_t L_260 = V_2;
		uint32_t L_261 = V_2;
		uint32_t L_262 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_260<<8))|((int32_t)((uint32_t)L_261>>((int32_t)24))))), (int32_t)L_262));
		uint32_t L_263 = V_4;
		uint32_t L_264 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_263<<((int32_t)10)))|((int32_t)((uint32_t)L_264>>((int32_t)22)))));
		uint32_t L_265 = V_1;
		uint32_t L_266 = V_2;
		uint32_t L_267 = V_3;
		uint32_t L_268 = V_4;
		uint32_t L_269;
		L_269 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_266, L_267, L_268, NULL);
		uint32_t* L_270 = ___0_blockDWords;
		int32_t L_271 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_270, 4))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_265, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_269, L_271)), ((int32_t)1518500249)))));
		uint32_t L_272 = V_1;
		uint32_t L_273 = V_1;
		uint32_t L_274 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_272<<((int32_t)13)))|((int32_t)((uint32_t)L_273>>((int32_t)19))))), (int32_t)L_274));
		uint32_t L_275 = V_3;
		uint32_t L_276 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_275<<((int32_t)10)))|((int32_t)((uint32_t)L_276>>((int32_t)22)))));
		uint32_t L_277 = V_0;
		uint32_t L_278 = V_1;
		uint32_t L_279 = V_2;
		uint32_t L_280 = V_3;
		uint32_t L_281;
		L_281 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_278, L_279, L_280, NULL);
		uint32_t* L_282 = ___0_blockDWords;
		intptr_t L_283 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		int32_t L_284 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_282, ((intptr_t)il2cpp_codegen_multiply(L_283, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_277, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_281, L_284)), ((int32_t)1518500249)))));
		uint32_t L_285 = V_0;
		uint32_t L_286 = V_0;
		uint32_t L_287 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_285<<((int32_t)11)))|((int32_t)((uint32_t)L_286>>((int32_t)21))))), (int32_t)L_287));
		uint32_t L_288 = V_2;
		uint32_t L_289 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_288<<((int32_t)10)))|((int32_t)((uint32_t)L_289>>((int32_t)22)))));
		uint32_t L_290 = V_4;
		uint32_t L_291 = V_0;
		uint32_t L_292 = V_1;
		uint32_t L_293 = V_2;
		uint32_t L_294;
		L_294 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_291, L_292, L_293, NULL);
		uint32_t* L_295 = ___0_blockDWords;
		intptr_t L_296 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int32_t L_297 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_295, ((intptr_t)il2cpp_codegen_multiply(L_296, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_290, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_294, L_297)), ((int32_t)1518500249)))));
		uint32_t L_298 = V_4;
		uint32_t L_299 = V_4;
		uint32_t L_300 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_298<<((int32_t)9)))|((int32_t)((uint32_t)L_299>>((int32_t)23))))), (int32_t)L_300));
		uint32_t L_301 = V_1;
		uint32_t L_302 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_301<<((int32_t)10)))|((int32_t)((uint32_t)L_302>>((int32_t)22)))));
		uint32_t L_303 = V_3;
		uint32_t L_304 = V_4;
		uint32_t L_305 = V_0;
		uint32_t L_306 = V_1;
		uint32_t L_307;
		L_307 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_304, L_305, L_306, NULL);
		uint32_t* L_308 = ___0_blockDWords;
		intptr_t L_309 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)15),NULL));
		int32_t L_310 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_308, ((intptr_t)il2cpp_codegen_multiply(L_309, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_303, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_307, L_310)), ((int32_t)1518500249)))));
		uint32_t L_311 = V_3;
		uint32_t L_312 = V_3;
		uint32_t L_313 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_311<<7))|((int32_t)((uint32_t)L_312>>((int32_t)25))))), (int32_t)L_313));
		uint32_t L_314 = V_0;
		uint32_t L_315 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_314<<((int32_t)10)))|((int32_t)((uint32_t)L_315>>((int32_t)22)))));
		uint32_t L_316 = V_2;
		uint32_t L_317 = V_3;
		uint32_t L_318 = V_4;
		uint32_t L_319 = V_0;
		uint32_t L_320;
		L_320 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_317, L_318, L_319, NULL);
		uint32_t* L_321 = ___0_blockDWords;
		intptr_t L_322 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_323 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_321, ((intptr_t)il2cpp_codegen_multiply(L_322, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_316, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_320, L_323)), ((int32_t)1518500249)))));
		uint32_t L_324 = V_2;
		uint32_t L_325 = V_2;
		uint32_t L_326 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_324<<((int32_t)15)))|((int32_t)((uint32_t)L_325>>((int32_t)17))))), (int32_t)L_326));
		uint32_t L_327 = V_4;
		uint32_t L_328 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_327<<((int32_t)10)))|((int32_t)((uint32_t)L_328>>((int32_t)22)))));
		uint32_t L_329 = V_1;
		uint32_t L_330 = V_2;
		uint32_t L_331 = V_3;
		uint32_t L_332 = V_4;
		uint32_t L_333;
		L_333 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_330, L_331, L_332, NULL);
		uint32_t* L_334 = ___0_blockDWords;
		intptr_t L_335 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		int32_t L_336 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_334, ((intptr_t)il2cpp_codegen_multiply(L_335, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_329, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_333, L_336)), ((int32_t)1518500249)))));
		uint32_t L_337 = V_1;
		uint32_t L_338 = V_1;
		uint32_t L_339 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_337<<7))|((int32_t)((uint32_t)L_338>>((int32_t)25))))), (int32_t)L_339));
		uint32_t L_340 = V_3;
		uint32_t L_341 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_340<<((int32_t)10)))|((int32_t)((uint32_t)L_341>>((int32_t)22)))));
		uint32_t L_342 = V_0;
		uint32_t L_343 = V_1;
		uint32_t L_344 = V_2;
		uint32_t L_345 = V_3;
		uint32_t L_346;
		L_346 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_343, L_344, L_345, NULL);
		uint32_t* L_347 = ___0_blockDWords;
		int32_t L_348 = ((int32_t)*(L_347));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_342, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_346, L_348)), ((int32_t)1518500249)))));
		uint32_t L_349 = V_0;
		uint32_t L_350 = V_0;
		uint32_t L_351 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_349<<((int32_t)12)))|((int32_t)((uint32_t)L_350>>((int32_t)20))))), (int32_t)L_351));
		uint32_t L_352 = V_2;
		uint32_t L_353 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_352<<((int32_t)10)))|((int32_t)((uint32_t)L_353>>((int32_t)22)))));
		uint32_t L_354 = V_4;
		uint32_t L_355 = V_0;
		uint32_t L_356 = V_1;
		uint32_t L_357 = V_2;
		uint32_t L_358;
		L_358 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_355, L_356, L_357, NULL);
		uint32_t* L_359 = ___0_blockDWords;
		intptr_t L_360 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		int32_t L_361 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_359, ((intptr_t)il2cpp_codegen_multiply(L_360, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_354, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_358, L_361)), ((int32_t)1518500249)))));
		uint32_t L_362 = V_4;
		uint32_t L_363 = V_4;
		uint32_t L_364 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_362<<((int32_t)15)))|((int32_t)((uint32_t)L_363>>((int32_t)17))))), (int32_t)L_364));
		uint32_t L_365 = V_1;
		uint32_t L_366 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_365<<((int32_t)10)))|((int32_t)((uint32_t)L_366>>((int32_t)22)))));
		uint32_t L_367 = V_3;
		uint32_t L_368 = V_4;
		uint32_t L_369 = V_0;
		uint32_t L_370 = V_1;
		uint32_t L_371;
		L_371 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_368, L_369, L_370, NULL);
		uint32_t* L_372 = ___0_blockDWords;
		intptr_t L_373 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int32_t L_374 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_372, ((intptr_t)il2cpp_codegen_multiply(L_373, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_367, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_371, L_374)), ((int32_t)1518500249)))));
		uint32_t L_375 = V_3;
		uint32_t L_376 = V_3;
		uint32_t L_377 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_375<<((int32_t)9)))|((int32_t)((uint32_t)L_376>>((int32_t)23))))), (int32_t)L_377));
		uint32_t L_378 = V_0;
		uint32_t L_379 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_378<<((int32_t)10)))|((int32_t)((uint32_t)L_379>>((int32_t)22)))));
		uint32_t L_380 = V_2;
		uint32_t L_381 = V_3;
		uint32_t L_382 = V_4;
		uint32_t L_383 = V_0;
		uint32_t L_384;
		L_384 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_381, L_382, L_383, NULL);
		uint32_t* L_385 = ___0_blockDWords;
		intptr_t L_386 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_387 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_385, ((intptr_t)il2cpp_codegen_multiply(L_386, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_380, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_384, L_387)), ((int32_t)1518500249)))));
		uint32_t L_388 = V_2;
		uint32_t L_389 = V_2;
		uint32_t L_390 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_388<<((int32_t)11)))|((int32_t)((uint32_t)L_389>>((int32_t)21))))), (int32_t)L_390));
		uint32_t L_391 = V_4;
		uint32_t L_392 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_391<<((int32_t)10)))|((int32_t)((uint32_t)L_392>>((int32_t)22)))));
		uint32_t L_393 = V_1;
		uint32_t L_394 = V_2;
		uint32_t L_395 = V_3;
		uint32_t L_396 = V_4;
		uint32_t L_397;
		L_397 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_394, L_395, L_396, NULL);
		uint32_t* L_398 = ___0_blockDWords;
		intptr_t L_399 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)14),NULL));
		int32_t L_400 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_398, ((intptr_t)il2cpp_codegen_multiply(L_399, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_393, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_397, L_400)), ((int32_t)1518500249)))));
		uint32_t L_401 = V_1;
		uint32_t L_402 = V_1;
		uint32_t L_403 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_401<<7))|((int32_t)((uint32_t)L_402>>((int32_t)25))))), (int32_t)L_403));
		uint32_t L_404 = V_3;
		uint32_t L_405 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_404<<((int32_t)10)))|((int32_t)((uint32_t)L_405>>((int32_t)22)))));
		uint32_t L_406 = V_0;
		uint32_t L_407 = V_1;
		uint32_t L_408 = V_2;
		uint32_t L_409 = V_3;
		uint32_t L_410;
		L_410 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_407, L_408, L_409, NULL);
		uint32_t* L_411 = ___0_blockDWords;
		intptr_t L_412 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		int32_t L_413 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_411, ((intptr_t)il2cpp_codegen_multiply(L_412, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_406, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_410, L_413)), ((int32_t)1518500249)))));
		uint32_t L_414 = V_0;
		uint32_t L_415 = V_0;
		uint32_t L_416 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_414<<((int32_t)13)))|((int32_t)((uint32_t)L_415>>((int32_t)19))))), (int32_t)L_416));
		uint32_t L_417 = V_2;
		uint32_t L_418 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_417<<((int32_t)10)))|((int32_t)((uint32_t)L_418>>((int32_t)22)))));
		uint32_t L_419 = V_4;
		uint32_t L_420 = V_0;
		uint32_t L_421 = V_1;
		uint32_t L_422 = V_2;
		uint32_t L_423;
		L_423 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_420, L_421, L_422, NULL);
		uint32_t* L_424 = ___0_blockDWords;
		intptr_t L_425 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		int32_t L_426 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_424, ((intptr_t)il2cpp_codegen_multiply(L_425, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_419, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_423, L_426)), ((int32_t)1518500249)))));
		uint32_t L_427 = V_4;
		uint32_t L_428 = V_4;
		uint32_t L_429 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_427<<((int32_t)12)))|((int32_t)((uint32_t)L_428>>((int32_t)20))))), (int32_t)L_429));
		uint32_t L_430 = V_1;
		uint32_t L_431 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_430<<((int32_t)10)))|((int32_t)((uint32_t)L_431>>((int32_t)22)))));
		uint32_t L_432 = V_3;
		uint32_t L_433 = V_4;
		uint32_t L_434 = V_0;
		uint32_t L_435 = V_1;
		uint32_t L_436;
		L_436 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_433, L_434, L_435, NULL);
		uint32_t* L_437 = ___0_blockDWords;
		intptr_t L_438 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_439 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_437, ((intptr_t)il2cpp_codegen_multiply(L_438, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_432, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_436, L_439)), ((int32_t)1859775393)))));
		uint32_t L_440 = V_3;
		uint32_t L_441 = V_3;
		uint32_t L_442 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_440<<((int32_t)11)))|((int32_t)((uint32_t)L_441>>((int32_t)21))))), (int32_t)L_442));
		uint32_t L_443 = V_0;
		uint32_t L_444 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_443<<((int32_t)10)))|((int32_t)((uint32_t)L_444>>((int32_t)22)))));
		uint32_t L_445 = V_2;
		uint32_t L_446 = V_3;
		uint32_t L_447 = V_4;
		uint32_t L_448 = V_0;
		uint32_t L_449;
		L_449 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_446, L_447, L_448, NULL);
		uint32_t* L_450 = ___0_blockDWords;
		intptr_t L_451 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		int32_t L_452 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_450, ((intptr_t)il2cpp_codegen_multiply(L_451, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_445, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_449, L_452)), ((int32_t)1859775393)))));
		uint32_t L_453 = V_2;
		uint32_t L_454 = V_2;
		uint32_t L_455 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_453<<((int32_t)13)))|((int32_t)((uint32_t)L_454>>((int32_t)19))))), (int32_t)L_455));
		uint32_t L_456 = V_4;
		uint32_t L_457 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_456<<((int32_t)10)))|((int32_t)((uint32_t)L_457>>((int32_t)22)))));
		uint32_t L_458 = V_1;
		uint32_t L_459 = V_2;
		uint32_t L_460 = V_3;
		uint32_t L_461 = V_4;
		uint32_t L_462;
		L_462 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_459, L_460, L_461, NULL);
		uint32_t* L_463 = ___0_blockDWords;
		intptr_t L_464 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)14),NULL));
		int32_t L_465 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_463, ((intptr_t)il2cpp_codegen_multiply(L_464, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_458, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_462, L_465)), ((int32_t)1859775393)))));
		uint32_t L_466 = V_1;
		uint32_t L_467 = V_1;
		uint32_t L_468 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_466<<6))|((int32_t)((uint32_t)L_467>>((int32_t)26))))), (int32_t)L_468));
		uint32_t L_469 = V_3;
		uint32_t L_470 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_469<<((int32_t)10)))|((int32_t)((uint32_t)L_470>>((int32_t)22)))));
		uint32_t L_471 = V_0;
		uint32_t L_472 = V_1;
		uint32_t L_473 = V_2;
		uint32_t L_474 = V_3;
		uint32_t L_475;
		L_475 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_472, L_473, L_474, NULL);
		uint32_t* L_476 = ___0_blockDWords;
		intptr_t L_477 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_478 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_476, ((intptr_t)il2cpp_codegen_multiply(L_477, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_471, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_475, L_478)), ((int32_t)1859775393)))));
		uint32_t L_479 = V_0;
		uint32_t L_480 = V_0;
		uint32_t L_481 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_479<<7))|((int32_t)((uint32_t)L_480>>((int32_t)25))))), (int32_t)L_481));
		uint32_t L_482 = V_2;
		uint32_t L_483 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_482<<((int32_t)10)))|((int32_t)((uint32_t)L_483>>((int32_t)22)))));
		uint32_t L_484 = V_4;
		uint32_t L_485 = V_0;
		uint32_t L_486 = V_1;
		uint32_t L_487 = V_2;
		uint32_t L_488;
		L_488 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_485, L_486, L_487, NULL);
		uint32_t* L_489 = ___0_blockDWords;
		intptr_t L_490 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		int32_t L_491 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_489, ((intptr_t)il2cpp_codegen_multiply(L_490, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_484, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_488, L_491)), ((int32_t)1859775393)))));
		uint32_t L_492 = V_4;
		uint32_t L_493 = V_4;
		uint32_t L_494 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_492<<((int32_t)14)))|((int32_t)((uint32_t)L_493>>((int32_t)18))))), (int32_t)L_494));
		uint32_t L_495 = V_1;
		uint32_t L_496 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_495<<((int32_t)10)))|((int32_t)((uint32_t)L_496>>((int32_t)22)))));
		uint32_t L_497 = V_3;
		uint32_t L_498 = V_4;
		uint32_t L_499 = V_0;
		uint32_t L_500 = V_1;
		uint32_t L_501;
		L_501 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_498, L_499, L_500, NULL);
		uint32_t* L_502 = ___0_blockDWords;
		intptr_t L_503 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)15),NULL));
		int32_t L_504 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_502, ((intptr_t)il2cpp_codegen_multiply(L_503, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_497, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_501, L_504)), ((int32_t)1859775393)))));
		uint32_t L_505 = V_3;
		uint32_t L_506 = V_3;
		uint32_t L_507 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_505<<((int32_t)9)))|((int32_t)((uint32_t)L_506>>((int32_t)23))))), (int32_t)L_507));
		uint32_t L_508 = V_0;
		uint32_t L_509 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_508<<((int32_t)10)))|((int32_t)((uint32_t)L_509>>((int32_t)22)))));
		uint32_t L_510 = V_2;
		uint32_t L_511 = V_3;
		uint32_t L_512 = V_4;
		uint32_t L_513 = V_0;
		uint32_t L_514;
		L_514 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_511, L_512, L_513, NULL);
		uint32_t* L_515 = ___0_blockDWords;
		intptr_t L_516 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		int32_t L_517 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_515, ((intptr_t)il2cpp_codegen_multiply(L_516, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_510, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_514, L_517)), ((int32_t)1859775393)))));
		uint32_t L_518 = V_2;
		uint32_t L_519 = V_2;
		uint32_t L_520 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_518<<((int32_t)13)))|((int32_t)((uint32_t)L_519>>((int32_t)19))))), (int32_t)L_520));
		uint32_t L_521 = V_4;
		uint32_t L_522 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_521<<((int32_t)10)))|((int32_t)((uint32_t)L_522>>((int32_t)22)))));
		uint32_t L_523 = V_1;
		uint32_t L_524 = V_2;
		uint32_t L_525 = V_3;
		uint32_t L_526 = V_4;
		uint32_t L_527;
		L_527 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_524, L_525, L_526, NULL);
		uint32_t* L_528 = ___0_blockDWords;
		int32_t L_529 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_528, 4))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_523, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_527, L_529)), ((int32_t)1859775393)))));
		uint32_t L_530 = V_1;
		uint32_t L_531 = V_1;
		uint32_t L_532 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_530<<((int32_t)15)))|((int32_t)((uint32_t)L_531>>((int32_t)17))))), (int32_t)L_532));
		uint32_t L_533 = V_3;
		uint32_t L_534 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_533<<((int32_t)10)))|((int32_t)((uint32_t)L_534>>((int32_t)22)))));
		uint32_t L_535 = V_0;
		uint32_t L_536 = V_1;
		uint32_t L_537 = V_2;
		uint32_t L_538 = V_3;
		uint32_t L_539;
		L_539 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_536, L_537, L_538, NULL);
		uint32_t* L_540 = ___0_blockDWords;
		intptr_t L_541 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_542 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_540, ((intptr_t)il2cpp_codegen_multiply(L_541, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_535, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_539, L_542)), ((int32_t)1859775393)))));
		uint32_t L_543 = V_0;
		uint32_t L_544 = V_0;
		uint32_t L_545 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_543<<((int32_t)14)))|((int32_t)((uint32_t)L_544>>((int32_t)18))))), (int32_t)L_545));
		uint32_t L_546 = V_2;
		uint32_t L_547 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_546<<((int32_t)10)))|((int32_t)((uint32_t)L_547>>((int32_t)22)))));
		uint32_t L_548 = V_4;
		uint32_t L_549 = V_0;
		uint32_t L_550 = V_1;
		uint32_t L_551 = V_2;
		uint32_t L_552;
		L_552 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_549, L_550, L_551, NULL);
		uint32_t* L_553 = ___0_blockDWords;
		intptr_t L_554 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int32_t L_555 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_553, ((intptr_t)il2cpp_codegen_multiply(L_554, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_548, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_552, L_555)), ((int32_t)1859775393)))));
		uint32_t L_556 = V_4;
		uint32_t L_557 = V_4;
		uint32_t L_558 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_556<<8))|((int32_t)((uint32_t)L_557>>((int32_t)24))))), (int32_t)L_558));
		uint32_t L_559 = V_1;
		uint32_t L_560 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_559<<((int32_t)10)))|((int32_t)((uint32_t)L_560>>((int32_t)22)))));
		uint32_t L_561 = V_3;
		uint32_t L_562 = V_4;
		uint32_t L_563 = V_0;
		uint32_t L_564 = V_1;
		uint32_t L_565;
		L_565 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_562, L_563, L_564, NULL);
		uint32_t* L_566 = ___0_blockDWords;
		int32_t L_567 = ((int32_t)*(L_566));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_561, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_565, L_567)), ((int32_t)1859775393)))));
		uint32_t L_568 = V_3;
		uint32_t L_569 = V_3;
		uint32_t L_570 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_568<<((int32_t)13)))|((int32_t)((uint32_t)L_569>>((int32_t)19))))), (int32_t)L_570));
		uint32_t L_571 = V_0;
		uint32_t L_572 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_571<<((int32_t)10)))|((int32_t)((uint32_t)L_572>>((int32_t)22)))));
		uint32_t L_573 = V_2;
		uint32_t L_574 = V_3;
		uint32_t L_575 = V_4;
		uint32_t L_576 = V_0;
		uint32_t L_577;
		L_577 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_574, L_575, L_576, NULL);
		uint32_t* L_578 = ___0_blockDWords;
		intptr_t L_579 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int32_t L_580 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_578, ((intptr_t)il2cpp_codegen_multiply(L_579, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_573, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_577, L_580)), ((int32_t)1859775393)))));
		uint32_t L_581 = V_2;
		uint32_t L_582 = V_2;
		uint32_t L_583 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_581<<6))|((int32_t)((uint32_t)L_582>>((int32_t)26))))), (int32_t)L_583));
		uint32_t L_584 = V_4;
		uint32_t L_585 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_584<<((int32_t)10)))|((int32_t)((uint32_t)L_585>>((int32_t)22)))));
		uint32_t L_586 = V_1;
		uint32_t L_587 = V_2;
		uint32_t L_588 = V_3;
		uint32_t L_589 = V_4;
		uint32_t L_590;
		L_590 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_587, L_588, L_589, NULL);
		uint32_t* L_591 = ___0_blockDWords;
		intptr_t L_592 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		int32_t L_593 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_591, ((intptr_t)il2cpp_codegen_multiply(L_592, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_586, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_590, L_593)), ((int32_t)1859775393)))));
		uint32_t L_594 = V_1;
		uint32_t L_595 = V_1;
		uint32_t L_596 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_594<<5))|((int32_t)((uint32_t)L_595>>((int32_t)27))))), (int32_t)L_596));
		uint32_t L_597 = V_3;
		uint32_t L_598 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_597<<((int32_t)10)))|((int32_t)((uint32_t)L_598>>((int32_t)22)))));
		uint32_t L_599 = V_0;
		uint32_t L_600 = V_1;
		uint32_t L_601 = V_2;
		uint32_t L_602 = V_3;
		uint32_t L_603;
		L_603 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_600, L_601, L_602, NULL);
		uint32_t* L_604 = ___0_blockDWords;
		intptr_t L_605 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		int32_t L_606 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_604, ((intptr_t)il2cpp_codegen_multiply(L_605, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_599, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_603, L_606)), ((int32_t)1859775393)))));
		uint32_t L_607 = V_0;
		uint32_t L_608 = V_0;
		uint32_t L_609 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_607<<((int32_t)12)))|((int32_t)((uint32_t)L_608>>((int32_t)20))))), (int32_t)L_609));
		uint32_t L_610 = V_2;
		uint32_t L_611 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_610<<((int32_t)10)))|((int32_t)((uint32_t)L_611>>((int32_t)22)))));
		uint32_t L_612 = V_4;
		uint32_t L_613 = V_0;
		uint32_t L_614 = V_1;
		uint32_t L_615 = V_2;
		uint32_t L_616;
		L_616 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_613, L_614, L_615, NULL);
		uint32_t* L_617 = ___0_blockDWords;
		intptr_t L_618 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int32_t L_619 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_617, ((intptr_t)il2cpp_codegen_multiply(L_618, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_612, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_616, L_619)), ((int32_t)1859775393)))));
		uint32_t L_620 = V_4;
		uint32_t L_621 = V_4;
		uint32_t L_622 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_620<<7))|((int32_t)((uint32_t)L_621>>((int32_t)25))))), (int32_t)L_622));
		uint32_t L_623 = V_1;
		uint32_t L_624 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_623<<((int32_t)10)))|((int32_t)((uint32_t)L_624>>((int32_t)22)))));
		uint32_t L_625 = V_3;
		uint32_t L_626 = V_4;
		uint32_t L_627 = V_0;
		uint32_t L_628 = V_1;
		uint32_t L_629;
		L_629 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_626, L_627, L_628, NULL);
		uint32_t* L_630 = ___0_blockDWords;
		intptr_t L_631 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		int32_t L_632 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_630, ((intptr_t)il2cpp_codegen_multiply(L_631, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_625, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_629, L_632)), ((int32_t)1859775393)))));
		uint32_t L_633 = V_3;
		uint32_t L_634 = V_3;
		uint32_t L_635 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_633<<5))|((int32_t)((uint32_t)L_634>>((int32_t)27))))), (int32_t)L_635));
		uint32_t L_636 = V_0;
		uint32_t L_637 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_636<<((int32_t)10)))|((int32_t)((uint32_t)L_637>>((int32_t)22)))));
		uint32_t L_638 = V_2;
		uint32_t L_639 = V_3;
		uint32_t L_640 = V_4;
		uint32_t L_641 = V_0;
		uint32_t L_642;
		L_642 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_639, L_640, L_641, NULL);
		uint32_t* L_643 = ___0_blockDWords;
		int32_t L_644 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_643, 4))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_638, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_642, L_644)), ((int32_t)-1894007588)))));
		uint32_t L_645 = V_2;
		uint32_t L_646 = V_2;
		uint32_t L_647 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_645<<((int32_t)11)))|((int32_t)((uint32_t)L_646>>((int32_t)21))))), (int32_t)L_647));
		uint32_t L_648 = V_4;
		uint32_t L_649 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_648<<((int32_t)10)))|((int32_t)((uint32_t)L_649>>((int32_t)22)))));
		uint32_t L_650 = V_1;
		uint32_t L_651 = V_2;
		uint32_t L_652 = V_3;
		uint32_t L_653 = V_4;
		uint32_t L_654;
		L_654 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_651, L_652, L_653, NULL);
		uint32_t* L_655 = ___0_blockDWords;
		intptr_t L_656 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		int32_t L_657 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_655, ((intptr_t)il2cpp_codegen_multiply(L_656, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_650, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_654, L_657)), ((int32_t)-1894007588)))));
		uint32_t L_658 = V_1;
		uint32_t L_659 = V_1;
		uint32_t L_660 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_658<<((int32_t)12)))|((int32_t)((uint32_t)L_659>>((int32_t)20))))), (int32_t)L_660));
		uint32_t L_661 = V_3;
		uint32_t L_662 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_661<<((int32_t)10)))|((int32_t)((uint32_t)L_662>>((int32_t)22)))));
		uint32_t L_663 = V_0;
		uint32_t L_664 = V_1;
		uint32_t L_665 = V_2;
		uint32_t L_666 = V_3;
		uint32_t L_667;
		L_667 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_664, L_665, L_666, NULL);
		uint32_t* L_668 = ___0_blockDWords;
		intptr_t L_669 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		int32_t L_670 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_668, ((intptr_t)il2cpp_codegen_multiply(L_669, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_663, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_667, L_670)), ((int32_t)-1894007588)))));
		uint32_t L_671 = V_0;
		uint32_t L_672 = V_0;
		uint32_t L_673 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_671<<((int32_t)14)))|((int32_t)((uint32_t)L_672>>((int32_t)18))))), (int32_t)L_673));
		uint32_t L_674 = V_2;
		uint32_t L_675 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_674<<((int32_t)10)))|((int32_t)((uint32_t)L_675>>((int32_t)22)))));
		uint32_t L_676 = V_4;
		uint32_t L_677 = V_0;
		uint32_t L_678 = V_1;
		uint32_t L_679 = V_2;
		uint32_t L_680;
		L_680 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_677, L_678, L_679, NULL);
		uint32_t* L_681 = ___0_blockDWords;
		intptr_t L_682 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		int32_t L_683 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_681, ((intptr_t)il2cpp_codegen_multiply(L_682, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_676, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_680, L_683)), ((int32_t)-1894007588)))));
		uint32_t L_684 = V_4;
		uint32_t L_685 = V_4;
		uint32_t L_686 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_684<<((int32_t)15)))|((int32_t)((uint32_t)L_685>>((int32_t)17))))), (int32_t)L_686));
		uint32_t L_687 = V_1;
		uint32_t L_688 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_687<<((int32_t)10)))|((int32_t)((uint32_t)L_688>>((int32_t)22)))));
		uint32_t L_689 = V_3;
		uint32_t L_690 = V_4;
		uint32_t L_691 = V_0;
		uint32_t L_692 = V_1;
		uint32_t L_693;
		L_693 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_690, L_691, L_692, NULL);
		uint32_t* L_694 = ___0_blockDWords;
		int32_t L_695 = ((int32_t)*(L_694));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_689, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_693, L_695)), ((int32_t)-1894007588)))));
		uint32_t L_696 = V_3;
		uint32_t L_697 = V_3;
		uint32_t L_698 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_696<<((int32_t)14)))|((int32_t)((uint32_t)L_697>>((int32_t)18))))), (int32_t)L_698));
		uint32_t L_699 = V_0;
		uint32_t L_700 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_699<<((int32_t)10)))|((int32_t)((uint32_t)L_700>>((int32_t)22)))));
		uint32_t L_701 = V_2;
		uint32_t L_702 = V_3;
		uint32_t L_703 = V_4;
		uint32_t L_704 = V_0;
		uint32_t L_705;
		L_705 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_702, L_703, L_704, NULL);
		uint32_t* L_706 = ___0_blockDWords;
		intptr_t L_707 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		int32_t L_708 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_706, ((intptr_t)il2cpp_codegen_multiply(L_707, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_701, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_705, L_708)), ((int32_t)-1894007588)))));
		uint32_t L_709 = V_2;
		uint32_t L_710 = V_2;
		uint32_t L_711 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_709<<((int32_t)15)))|((int32_t)((uint32_t)L_710>>((int32_t)17))))), (int32_t)L_711));
		uint32_t L_712 = V_4;
		uint32_t L_713 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_712<<((int32_t)10)))|((int32_t)((uint32_t)L_713>>((int32_t)22)))));
		uint32_t L_714 = V_1;
		uint32_t L_715 = V_2;
		uint32_t L_716 = V_3;
		uint32_t L_717 = V_4;
		uint32_t L_718;
		L_718 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_715, L_716, L_717, NULL);
		uint32_t* L_719 = ___0_blockDWords;
		intptr_t L_720 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		int32_t L_721 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_719, ((intptr_t)il2cpp_codegen_multiply(L_720, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_714, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_718, L_721)), ((int32_t)-1894007588)))));
		uint32_t L_722 = V_1;
		uint32_t L_723 = V_1;
		uint32_t L_724 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_722<<((int32_t)9)))|((int32_t)((uint32_t)L_723>>((int32_t)23))))), (int32_t)L_724));
		uint32_t L_725 = V_3;
		uint32_t L_726 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_725<<((int32_t)10)))|((int32_t)((uint32_t)L_726>>((int32_t)22)))));
		uint32_t L_727 = V_0;
		uint32_t L_728 = V_1;
		uint32_t L_729 = V_2;
		uint32_t L_730 = V_3;
		uint32_t L_731;
		L_731 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_728, L_729, L_730, NULL);
		uint32_t* L_732 = ___0_blockDWords;
		intptr_t L_733 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_734 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_732, ((intptr_t)il2cpp_codegen_multiply(L_733, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_727, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_731, L_734)), ((int32_t)-1894007588)))));
		uint32_t L_735 = V_0;
		uint32_t L_736 = V_0;
		uint32_t L_737 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_735<<8))|((int32_t)((uint32_t)L_736>>((int32_t)24))))), (int32_t)L_737));
		uint32_t L_738 = V_2;
		uint32_t L_739 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_738<<((int32_t)10)))|((int32_t)((uint32_t)L_739>>((int32_t)22)))));
		uint32_t L_740 = V_4;
		uint32_t L_741 = V_0;
		uint32_t L_742 = V_1;
		uint32_t L_743 = V_2;
		uint32_t L_744;
		L_744 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_741, L_742, L_743, NULL);
		uint32_t* L_745 = ___0_blockDWords;
		intptr_t L_746 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		int32_t L_747 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_745, ((intptr_t)il2cpp_codegen_multiply(L_746, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_740, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_744, L_747)), ((int32_t)-1894007588)))));
		uint32_t L_748 = V_4;
		uint32_t L_749 = V_4;
		uint32_t L_750 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_748<<((int32_t)9)))|((int32_t)((uint32_t)L_749>>((int32_t)23))))), (int32_t)L_750));
		uint32_t L_751 = V_1;
		uint32_t L_752 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_751<<((int32_t)10)))|((int32_t)((uint32_t)L_752>>((int32_t)22)))));
		uint32_t L_753 = V_3;
		uint32_t L_754 = V_4;
		uint32_t L_755 = V_0;
		uint32_t L_756 = V_1;
		uint32_t L_757;
		L_757 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_754, L_755, L_756, NULL);
		uint32_t* L_758 = ___0_blockDWords;
		intptr_t L_759 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_760 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_758, ((intptr_t)il2cpp_codegen_multiply(L_759, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_753, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_757, L_760)), ((int32_t)-1894007588)))));
		uint32_t L_761 = V_3;
		uint32_t L_762 = V_3;
		uint32_t L_763 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_761<<((int32_t)14)))|((int32_t)((uint32_t)L_762>>((int32_t)18))))), (int32_t)L_763));
		uint32_t L_764 = V_0;
		uint32_t L_765 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_764<<((int32_t)10)))|((int32_t)((uint32_t)L_765>>((int32_t)22)))));
		uint32_t L_766 = V_2;
		uint32_t L_767 = V_3;
		uint32_t L_768 = V_4;
		uint32_t L_769 = V_0;
		uint32_t L_770;
		L_770 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_767, L_768, L_769, NULL);
		uint32_t* L_771 = ___0_blockDWords;
		intptr_t L_772 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int32_t L_773 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_771, ((intptr_t)il2cpp_codegen_multiply(L_772, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_766, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_770, L_773)), ((int32_t)-1894007588)))));
		uint32_t L_774 = V_2;
		uint32_t L_775 = V_2;
		uint32_t L_776 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_774<<5))|((int32_t)((uint32_t)L_775>>((int32_t)27))))), (int32_t)L_776));
		uint32_t L_777 = V_4;
		uint32_t L_778 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_777<<((int32_t)10)))|((int32_t)((uint32_t)L_778>>((int32_t)22)))));
		uint32_t L_779 = V_1;
		uint32_t L_780 = V_2;
		uint32_t L_781 = V_3;
		uint32_t L_782 = V_4;
		uint32_t L_783;
		L_783 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_780, L_781, L_782, NULL);
		uint32_t* L_784 = ___0_blockDWords;
		intptr_t L_785 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)15),NULL));
		int32_t L_786 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_784, ((intptr_t)il2cpp_codegen_multiply(L_785, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_779, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_783, L_786)), ((int32_t)-1894007588)))));
		uint32_t L_787 = V_1;
		uint32_t L_788 = V_1;
		uint32_t L_789 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_787<<6))|((int32_t)((uint32_t)L_788>>((int32_t)26))))), (int32_t)L_789));
		uint32_t L_790 = V_3;
		uint32_t L_791 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_790<<((int32_t)10)))|((int32_t)((uint32_t)L_791>>((int32_t)22)))));
		uint32_t L_792 = V_0;
		uint32_t L_793 = V_1;
		uint32_t L_794 = V_2;
		uint32_t L_795 = V_3;
		uint32_t L_796;
		L_796 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_793, L_794, L_795, NULL);
		uint32_t* L_797 = ___0_blockDWords;
		intptr_t L_798 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)14),NULL));
		int32_t L_799 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_797, ((intptr_t)il2cpp_codegen_multiply(L_798, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_792, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_796, L_799)), ((int32_t)-1894007588)))));
		uint32_t L_800 = V_0;
		uint32_t L_801 = V_0;
		uint32_t L_802 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_800<<8))|((int32_t)((uint32_t)L_801>>((int32_t)24))))), (int32_t)L_802));
		uint32_t L_803 = V_2;
		uint32_t L_804 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_803<<((int32_t)10)))|((int32_t)((uint32_t)L_804>>((int32_t)22)))));
		uint32_t L_805 = V_4;
		uint32_t L_806 = V_0;
		uint32_t L_807 = V_1;
		uint32_t L_808 = V_2;
		uint32_t L_809;
		L_809 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_806, L_807, L_808, NULL);
		uint32_t* L_810 = ___0_blockDWords;
		intptr_t L_811 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int32_t L_812 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_810, ((intptr_t)il2cpp_codegen_multiply(L_811, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_805, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_809, L_812)), ((int32_t)-1894007588)))));
		uint32_t L_813 = V_4;
		uint32_t L_814 = V_4;
		uint32_t L_815 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_813<<6))|((int32_t)((uint32_t)L_814>>((int32_t)26))))), (int32_t)L_815));
		uint32_t L_816 = V_1;
		uint32_t L_817 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_816<<((int32_t)10)))|((int32_t)((uint32_t)L_817>>((int32_t)22)))));
		uint32_t L_818 = V_3;
		uint32_t L_819 = V_4;
		uint32_t L_820 = V_0;
		uint32_t L_821 = V_1;
		uint32_t L_822;
		L_822 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_819, L_820, L_821, NULL);
		uint32_t* L_823 = ___0_blockDWords;
		intptr_t L_824 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int32_t L_825 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_823, ((intptr_t)il2cpp_codegen_multiply(L_824, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_818, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_822, L_825)), ((int32_t)-1894007588)))));
		uint32_t L_826 = V_3;
		uint32_t L_827 = V_3;
		uint32_t L_828 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_826<<5))|((int32_t)((uint32_t)L_827>>((int32_t)27))))), (int32_t)L_828));
		uint32_t L_829 = V_0;
		uint32_t L_830 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_829<<((int32_t)10)))|((int32_t)((uint32_t)L_830>>((int32_t)22)))));
		uint32_t L_831 = V_2;
		uint32_t L_832 = V_3;
		uint32_t L_833 = V_4;
		uint32_t L_834 = V_0;
		uint32_t L_835;
		L_835 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_832, L_833, L_834, NULL);
		uint32_t* L_836 = ___0_blockDWords;
		intptr_t L_837 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_838 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_836, ((intptr_t)il2cpp_codegen_multiply(L_837, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_831, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_835, L_838)), ((int32_t)-1894007588)))));
		uint32_t L_839 = V_2;
		uint32_t L_840 = V_2;
		uint32_t L_841 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_839<<((int32_t)12)))|((int32_t)((uint32_t)L_840>>((int32_t)20))))), (int32_t)L_841));
		uint32_t L_842 = V_4;
		uint32_t L_843 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_842<<((int32_t)10)))|((int32_t)((uint32_t)L_843>>((int32_t)22)))));
		uint32_t L_844 = V_1;
		uint32_t L_845 = V_2;
		uint32_t L_846 = V_3;
		uint32_t L_847 = V_4;
		uint32_t L_848;
		L_848 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_845, L_846, L_847, NULL);
		uint32_t* L_849 = ___0_blockDWords;
		intptr_t L_850 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_851 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_849, ((intptr_t)il2cpp_codegen_multiply(L_850, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_844, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_848, L_851)), ((int32_t)-1454113458)))));
		uint32_t L_852 = V_1;
		uint32_t L_853 = V_1;
		uint32_t L_854 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_852<<((int32_t)9)))|((int32_t)((uint32_t)L_853>>((int32_t)23))))), (int32_t)L_854));
		uint32_t L_855 = V_3;
		uint32_t L_856 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_855<<((int32_t)10)))|((int32_t)((uint32_t)L_856>>((int32_t)22)))));
		uint32_t L_857 = V_0;
		uint32_t L_858 = V_1;
		uint32_t L_859 = V_2;
		uint32_t L_860 = V_3;
		uint32_t L_861;
		L_861 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_858, L_859, L_860, NULL);
		uint32_t* L_862 = ___0_blockDWords;
		int32_t L_863 = ((int32_t)*(L_862));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_857, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_861, L_863)), ((int32_t)-1454113458)))));
		uint32_t L_864 = V_0;
		uint32_t L_865 = V_0;
		uint32_t L_866 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_864<<((int32_t)15)))|((int32_t)((uint32_t)L_865>>((int32_t)17))))), (int32_t)L_866));
		uint32_t L_867 = V_2;
		uint32_t L_868 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_867<<((int32_t)10)))|((int32_t)((uint32_t)L_868>>((int32_t)22)))));
		uint32_t L_869 = V_4;
		uint32_t L_870 = V_0;
		uint32_t L_871 = V_1;
		uint32_t L_872 = V_2;
		uint32_t L_873;
		L_873 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_870, L_871, L_872, NULL);
		uint32_t* L_874 = ___0_blockDWords;
		intptr_t L_875 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int32_t L_876 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_874, ((intptr_t)il2cpp_codegen_multiply(L_875, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_869, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_873, L_876)), ((int32_t)-1454113458)))));
		uint32_t L_877 = V_4;
		uint32_t L_878 = V_4;
		uint32_t L_879 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_877<<5))|((int32_t)((uint32_t)L_878>>((int32_t)27))))), (int32_t)L_879));
		uint32_t L_880 = V_1;
		uint32_t L_881 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_880<<((int32_t)10)))|((int32_t)((uint32_t)L_881>>((int32_t)22)))));
		uint32_t L_882 = V_3;
		uint32_t L_883 = V_4;
		uint32_t L_884 = V_0;
		uint32_t L_885 = V_1;
		uint32_t L_886;
		L_886 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_883, L_884, L_885, NULL);
		uint32_t* L_887 = ___0_blockDWords;
		intptr_t L_888 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		int32_t L_889 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_887, ((intptr_t)il2cpp_codegen_multiply(L_888, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_882, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_886, L_889)), ((int32_t)-1454113458)))));
		uint32_t L_890 = V_3;
		uint32_t L_891 = V_3;
		uint32_t L_892 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_890<<((int32_t)11)))|((int32_t)((uint32_t)L_891>>((int32_t)21))))), (int32_t)L_892));
		uint32_t L_893 = V_0;
		uint32_t L_894 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_893<<((int32_t)10)))|((int32_t)((uint32_t)L_894>>((int32_t)22)))));
		uint32_t L_895 = V_2;
		uint32_t L_896 = V_3;
		uint32_t L_897 = V_4;
		uint32_t L_898 = V_0;
		uint32_t L_899;
		L_899 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_896, L_897, L_898, NULL);
		uint32_t* L_900 = ___0_blockDWords;
		intptr_t L_901 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int32_t L_902 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_900, ((intptr_t)il2cpp_codegen_multiply(L_901, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_895, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_899, L_902)), ((int32_t)-1454113458)))));
		uint32_t L_903 = V_2;
		uint32_t L_904 = V_2;
		uint32_t L_905 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_903<<6))|((int32_t)((uint32_t)L_904>>((int32_t)26))))), (int32_t)L_905));
		uint32_t L_906 = V_4;
		uint32_t L_907 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_906<<((int32_t)10)))|((int32_t)((uint32_t)L_907>>((int32_t)22)))));
		uint32_t L_908 = V_1;
		uint32_t L_909 = V_2;
		uint32_t L_910 = V_3;
		uint32_t L_911 = V_4;
		uint32_t L_912;
		L_912 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_909, L_910, L_911, NULL);
		uint32_t* L_913 = ___0_blockDWords;
		intptr_t L_914 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		int32_t L_915 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_913, ((intptr_t)il2cpp_codegen_multiply(L_914, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_908, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_912, L_915)), ((int32_t)-1454113458)))));
		uint32_t L_916 = V_1;
		uint32_t L_917 = V_1;
		uint32_t L_918 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_916<<8))|((int32_t)((uint32_t)L_917>>((int32_t)24))))), (int32_t)L_918));
		uint32_t L_919 = V_3;
		uint32_t L_920 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_919<<((int32_t)10)))|((int32_t)((uint32_t)L_920>>((int32_t)22)))));
		uint32_t L_921 = V_0;
		uint32_t L_922 = V_1;
		uint32_t L_923 = V_2;
		uint32_t L_924 = V_3;
		uint32_t L_925;
		L_925 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_922, L_923, L_924, NULL);
		uint32_t* L_926 = ___0_blockDWords;
		intptr_t L_927 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_928 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_926, ((intptr_t)il2cpp_codegen_multiply(L_927, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_921, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_925, L_928)), ((int32_t)-1454113458)))));
		uint32_t L_929 = V_0;
		uint32_t L_930 = V_0;
		uint32_t L_931 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_929<<((int32_t)13)))|((int32_t)((uint32_t)L_930>>((int32_t)19))))), (int32_t)L_931));
		uint32_t L_932 = V_2;
		uint32_t L_933 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_932<<((int32_t)10)))|((int32_t)((uint32_t)L_933>>((int32_t)22)))));
		uint32_t L_934 = V_4;
		uint32_t L_935 = V_0;
		uint32_t L_936 = V_1;
		uint32_t L_937 = V_2;
		uint32_t L_938;
		L_938 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_935, L_936, L_937, NULL);
		uint32_t* L_939 = ___0_blockDWords;
		intptr_t L_940 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		int32_t L_941 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_939, ((intptr_t)il2cpp_codegen_multiply(L_940, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_934, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_938, L_941)), ((int32_t)-1454113458)))));
		uint32_t L_942 = V_4;
		uint32_t L_943 = V_4;
		uint32_t L_944 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_942<<((int32_t)12)))|((int32_t)((uint32_t)L_943>>((int32_t)20))))), (int32_t)L_944));
		uint32_t L_945 = V_1;
		uint32_t L_946 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_945<<((int32_t)10)))|((int32_t)((uint32_t)L_946>>((int32_t)22)))));
		uint32_t L_947 = V_3;
		uint32_t L_948 = V_4;
		uint32_t L_949 = V_0;
		uint32_t L_950 = V_1;
		uint32_t L_951;
		L_951 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_948, L_949, L_950, NULL);
		uint32_t* L_952 = ___0_blockDWords;
		intptr_t L_953 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)14),NULL));
		int32_t L_954 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_952, ((intptr_t)il2cpp_codegen_multiply(L_953, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_947, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_951, L_954)), ((int32_t)-1454113458)))));
		uint32_t L_955 = V_3;
		uint32_t L_956 = V_3;
		uint32_t L_957 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_955<<5))|((int32_t)((uint32_t)L_956>>((int32_t)27))))), (int32_t)L_957));
		uint32_t L_958 = V_0;
		uint32_t L_959 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_958<<((int32_t)10)))|((int32_t)((uint32_t)L_959>>((int32_t)22)))));
		uint32_t L_960 = V_2;
		uint32_t L_961 = V_3;
		uint32_t L_962 = V_4;
		uint32_t L_963 = V_0;
		uint32_t L_964;
		L_964 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_961, L_962, L_963, NULL);
		uint32_t* L_965 = ___0_blockDWords;
		int32_t L_966 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_965, 4))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_960, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_964, L_966)), ((int32_t)-1454113458)))));
		uint32_t L_967 = V_2;
		uint32_t L_968 = V_2;
		uint32_t L_969 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_967<<((int32_t)12)))|((int32_t)((uint32_t)L_968>>((int32_t)20))))), (int32_t)L_969));
		uint32_t L_970 = V_4;
		uint32_t L_971 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_970<<((int32_t)10)))|((int32_t)((uint32_t)L_971>>((int32_t)22)))));
		uint32_t L_972 = V_1;
		uint32_t L_973 = V_2;
		uint32_t L_974 = V_3;
		uint32_t L_975 = V_4;
		uint32_t L_976;
		L_976 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_973, L_974, L_975, NULL);
		uint32_t* L_977 = ___0_blockDWords;
		intptr_t L_978 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_979 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_977, ((intptr_t)il2cpp_codegen_multiply(L_978, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_972, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_976, L_979)), ((int32_t)-1454113458)))));
		uint32_t L_980 = V_1;
		uint32_t L_981 = V_1;
		uint32_t L_982 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_980<<((int32_t)13)))|((int32_t)((uint32_t)L_981>>((int32_t)19))))), (int32_t)L_982));
		uint32_t L_983 = V_3;
		uint32_t L_984 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_983<<((int32_t)10)))|((int32_t)((uint32_t)L_984>>((int32_t)22)))));
		uint32_t L_985 = V_0;
		uint32_t L_986 = V_1;
		uint32_t L_987 = V_2;
		uint32_t L_988 = V_3;
		uint32_t L_989;
		L_989 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_986, L_987, L_988, NULL);
		uint32_t* L_990 = ___0_blockDWords;
		intptr_t L_991 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		int32_t L_992 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_990, ((intptr_t)il2cpp_codegen_multiply(L_991, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_985, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_989, L_992)), ((int32_t)-1454113458)))));
		uint32_t L_993 = V_0;
		uint32_t L_994 = V_0;
		uint32_t L_995 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_993<<((int32_t)14)))|((int32_t)((uint32_t)L_994>>((int32_t)18))))), (int32_t)L_995));
		uint32_t L_996 = V_2;
		uint32_t L_997 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_996<<((int32_t)10)))|((int32_t)((uint32_t)L_997>>((int32_t)22)))));
		uint32_t L_998 = V_4;
		uint32_t L_999 = V_0;
		uint32_t L_1000 = V_1;
		uint32_t L_1001 = V_2;
		uint32_t L_1002;
		L_1002 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_999, L_1000, L_1001, NULL);
		uint32_t* L_1003 = ___0_blockDWords;
		intptr_t L_1004 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		int32_t L_1005 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1003, ((intptr_t)il2cpp_codegen_multiply(L_1004, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_998, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1002, L_1005)), ((int32_t)-1454113458)))));
		uint32_t L_1006 = V_4;
		uint32_t L_1007 = V_4;
		uint32_t L_1008 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1006<<((int32_t)11)))|((int32_t)((uint32_t)L_1007>>((int32_t)21))))), (int32_t)L_1008));
		uint32_t L_1009 = V_1;
		uint32_t L_1010 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_1009<<((int32_t)10)))|((int32_t)((uint32_t)L_1010>>((int32_t)22)))));
		uint32_t L_1011 = V_3;
		uint32_t L_1012 = V_4;
		uint32_t L_1013 = V_0;
		uint32_t L_1014 = V_1;
		uint32_t L_1015;
		L_1015 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1012, L_1013, L_1014, NULL);
		uint32_t* L_1016 = ___0_blockDWords;
		intptr_t L_1017 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int32_t L_1018 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1016, ((intptr_t)il2cpp_codegen_multiply(L_1017, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1011, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1015, L_1018)), ((int32_t)-1454113458)))));
		uint32_t L_1019 = V_3;
		uint32_t L_1020 = V_3;
		uint32_t L_1021 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1019<<8))|((int32_t)((uint32_t)L_1020>>((int32_t)24))))), (int32_t)L_1021));
		uint32_t L_1022 = V_0;
		uint32_t L_1023 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_1022<<((int32_t)10)))|((int32_t)((uint32_t)L_1023>>((int32_t)22)))));
		uint32_t L_1024 = V_2;
		uint32_t L_1025 = V_3;
		uint32_t L_1026 = V_4;
		uint32_t L_1027 = V_0;
		uint32_t L_1028;
		L_1028 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1025, L_1026, L_1027, NULL);
		uint32_t* L_1029 = ___0_blockDWords;
		intptr_t L_1030 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)15),NULL));
		int32_t L_1031 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1029, ((intptr_t)il2cpp_codegen_multiply(L_1030, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_1024, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1028, L_1031)), ((int32_t)-1454113458)))));
		uint32_t L_1032 = V_2;
		uint32_t L_1033 = V_2;
		uint32_t L_1034 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1032<<5))|((int32_t)((uint32_t)L_1033>>((int32_t)27))))), (int32_t)L_1034));
		uint32_t L_1035 = V_4;
		uint32_t L_1036 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_1035<<((int32_t)10)))|((int32_t)((uint32_t)L_1036>>((int32_t)22)))));
		uint32_t L_1037 = V_1;
		uint32_t L_1038 = V_2;
		uint32_t L_1039 = V_3;
		uint32_t L_1040 = V_4;
		uint32_t L_1041;
		L_1041 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1038, L_1039, L_1040, NULL);
		uint32_t* L_1042 = ___0_blockDWords;
		intptr_t L_1043 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		int32_t L_1044 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1042, ((intptr_t)il2cpp_codegen_multiply(L_1043, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1037, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1041, L_1044)), ((int32_t)-1454113458)))));
		uint32_t L_1045 = V_1;
		uint32_t L_1046 = V_1;
		uint32_t L_1047 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1045<<6))|((int32_t)((uint32_t)L_1046>>((int32_t)26))))), (int32_t)L_1047));
		uint32_t L_1048 = V_3;
		uint32_t L_1049 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_1048<<((int32_t)10)))|((int32_t)((uint32_t)L_1049>>((int32_t)22)))));
		uint32_t L_1050 = V_5;
		uint32_t L_1051 = V_6;
		uint32_t L_1052 = V_7;
		uint32_t L_1053 = V_8;
		uint32_t L_1054;
		L_1054 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1051, L_1052, L_1053, NULL);
		uint32_t* L_1055 = ___0_blockDWords;
		intptr_t L_1056 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int32_t L_1057 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1055, ((intptr_t)il2cpp_codegen_multiply(L_1056, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1050, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1054, L_1057)), ((int32_t)1352829926)))));
		uint32_t L_1058 = V_5;
		uint32_t L_1059 = V_5;
		uint32_t L_1060 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1058<<8))|((int32_t)((uint32_t)L_1059>>((int32_t)24))))), (int32_t)L_1060));
		uint32_t L_1061 = V_7;
		uint32_t L_1062 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1061<<((int32_t)10)))|((int32_t)((uint32_t)L_1062>>((int32_t)22)))));
		uint32_t L_1063 = V_9;
		uint32_t L_1064 = V_5;
		uint32_t L_1065 = V_6;
		uint32_t L_1066 = V_7;
		uint32_t L_1067;
		L_1067 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1064, L_1065, L_1066, NULL);
		uint32_t* L_1068 = ___0_blockDWords;
		intptr_t L_1069 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)14),NULL));
		int32_t L_1070 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1068, ((intptr_t)il2cpp_codegen_multiply(L_1069, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1063, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1067, L_1070)), ((int32_t)1352829926)))));
		uint32_t L_1071 = V_9;
		uint32_t L_1072 = V_9;
		uint32_t L_1073 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1071<<((int32_t)9)))|((int32_t)((uint32_t)L_1072>>((int32_t)23))))), (int32_t)L_1073));
		uint32_t L_1074 = V_6;
		uint32_t L_1075 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1074<<((int32_t)10)))|((int32_t)((uint32_t)L_1075>>((int32_t)22)))));
		uint32_t L_1076 = V_8;
		uint32_t L_1077 = V_9;
		uint32_t L_1078 = V_5;
		uint32_t L_1079 = V_6;
		uint32_t L_1080;
		L_1080 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1077, L_1078, L_1079, NULL);
		uint32_t* L_1081 = ___0_blockDWords;
		intptr_t L_1082 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int32_t L_1083 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1081, ((intptr_t)il2cpp_codegen_multiply(L_1082, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1076, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1080, L_1083)), ((int32_t)1352829926)))));
		uint32_t L_1084 = V_8;
		uint32_t L_1085 = V_8;
		uint32_t L_1086 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1084<<((int32_t)9)))|((int32_t)((uint32_t)L_1085>>((int32_t)23))))), (int32_t)L_1086));
		uint32_t L_1087 = V_5;
		uint32_t L_1088 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1087<<((int32_t)10)))|((int32_t)((uint32_t)L_1088>>((int32_t)22)))));
		uint32_t L_1089 = V_7;
		uint32_t L_1090 = V_8;
		uint32_t L_1091 = V_9;
		uint32_t L_1092 = V_5;
		uint32_t L_1093;
		L_1093 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1090, L_1091, L_1092, NULL);
		uint32_t* L_1094 = ___0_blockDWords;
		int32_t L_1095 = ((int32_t)*(L_1094));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1089, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1093, L_1095)), ((int32_t)1352829926)))));
		uint32_t L_1096 = V_7;
		uint32_t L_1097 = V_7;
		uint32_t L_1098 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1096<<((int32_t)11)))|((int32_t)((uint32_t)L_1097>>((int32_t)21))))), (int32_t)L_1098));
		uint32_t L_1099 = V_9;
		uint32_t L_1100 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1099<<((int32_t)10)))|((int32_t)((uint32_t)L_1100>>((int32_t)22)))));
		uint32_t L_1101 = V_6;
		uint32_t L_1102 = V_7;
		uint32_t L_1103 = V_8;
		uint32_t L_1104 = V_9;
		uint32_t L_1105;
		L_1105 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1102, L_1103, L_1104, NULL);
		uint32_t* L_1106 = ___0_blockDWords;
		intptr_t L_1107 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		int32_t L_1108 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1106, ((intptr_t)il2cpp_codegen_multiply(L_1107, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1101, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1105, L_1108)), ((int32_t)1352829926)))));
		uint32_t L_1109 = V_6;
		uint32_t L_1110 = V_6;
		uint32_t L_1111 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1109<<((int32_t)13)))|((int32_t)((uint32_t)L_1110>>((int32_t)19))))), (int32_t)L_1111));
		uint32_t L_1112 = V_8;
		uint32_t L_1113 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1112<<((int32_t)10)))|((int32_t)((uint32_t)L_1113>>((int32_t)22)))));
		uint32_t L_1114 = V_5;
		uint32_t L_1115 = V_6;
		uint32_t L_1116 = V_7;
		uint32_t L_1117 = V_8;
		uint32_t L_1118;
		L_1118 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1115, L_1116, L_1117, NULL);
		uint32_t* L_1119 = ___0_blockDWords;
		intptr_t L_1120 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_1121 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1119, ((intptr_t)il2cpp_codegen_multiply(L_1120, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1114, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1118, L_1121)), ((int32_t)1352829926)))));
		uint32_t L_1122 = V_5;
		uint32_t L_1123 = V_5;
		uint32_t L_1124 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1122<<((int32_t)15)))|((int32_t)((uint32_t)L_1123>>((int32_t)17))))), (int32_t)L_1124));
		uint32_t L_1125 = V_7;
		uint32_t L_1126 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1125<<((int32_t)10)))|((int32_t)((uint32_t)L_1126>>((int32_t)22)))));
		uint32_t L_1127 = V_9;
		uint32_t L_1128 = V_5;
		uint32_t L_1129 = V_6;
		uint32_t L_1130 = V_7;
		uint32_t L_1131;
		L_1131 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1128, L_1129, L_1130, NULL);
		uint32_t* L_1132 = ___0_blockDWords;
		intptr_t L_1133 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		int32_t L_1134 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1132, ((intptr_t)il2cpp_codegen_multiply(L_1133, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1127, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1131, L_1134)), ((int32_t)1352829926)))));
		uint32_t L_1135 = V_9;
		uint32_t L_1136 = V_9;
		uint32_t L_1137 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1135<<((int32_t)15)))|((int32_t)((uint32_t)L_1136>>((int32_t)17))))), (int32_t)L_1137));
		uint32_t L_1138 = V_6;
		uint32_t L_1139 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1138<<((int32_t)10)))|((int32_t)((uint32_t)L_1139>>((int32_t)22)))));
		uint32_t L_1140 = V_8;
		uint32_t L_1141 = V_9;
		uint32_t L_1142 = V_5;
		uint32_t L_1143 = V_6;
		uint32_t L_1144;
		L_1144 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1141, L_1142, L_1143, NULL);
		uint32_t* L_1145 = ___0_blockDWords;
		intptr_t L_1146 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_1147 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1145, ((intptr_t)il2cpp_codegen_multiply(L_1146, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1140, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1144, L_1147)), ((int32_t)1352829926)))));
		uint32_t L_1148 = V_8;
		uint32_t L_1149 = V_8;
		uint32_t L_1150 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1148<<5))|((int32_t)((uint32_t)L_1149>>((int32_t)27))))), (int32_t)L_1150));
		uint32_t L_1151 = V_5;
		uint32_t L_1152 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1151<<((int32_t)10)))|((int32_t)((uint32_t)L_1152>>((int32_t)22)))));
		uint32_t L_1153 = V_7;
		uint32_t L_1154 = V_8;
		uint32_t L_1155 = V_9;
		uint32_t L_1156 = V_5;
		uint32_t L_1157;
		L_1157 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1154, L_1155, L_1156, NULL);
		uint32_t* L_1158 = ___0_blockDWords;
		intptr_t L_1159 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		int32_t L_1160 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1158, ((intptr_t)il2cpp_codegen_multiply(L_1159, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1153, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1157, L_1160)), ((int32_t)1352829926)))));
		uint32_t L_1161 = V_7;
		uint32_t L_1162 = V_7;
		uint32_t L_1163 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1161<<7))|((int32_t)((uint32_t)L_1162>>((int32_t)25))))), (int32_t)L_1163));
		uint32_t L_1164 = V_9;
		uint32_t L_1165 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1164<<((int32_t)10)))|((int32_t)((uint32_t)L_1165>>((int32_t)22)))));
		uint32_t L_1166 = V_6;
		uint32_t L_1167 = V_7;
		uint32_t L_1168 = V_8;
		uint32_t L_1169 = V_9;
		uint32_t L_1170;
		L_1170 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1167, L_1168, L_1169, NULL);
		uint32_t* L_1171 = ___0_blockDWords;
		intptr_t L_1172 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int32_t L_1173 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1171, ((intptr_t)il2cpp_codegen_multiply(L_1172, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1166, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1170, L_1173)), ((int32_t)1352829926)))));
		uint32_t L_1174 = V_6;
		uint32_t L_1175 = V_6;
		uint32_t L_1176 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1174<<7))|((int32_t)((uint32_t)L_1175>>((int32_t)25))))), (int32_t)L_1176));
		uint32_t L_1177 = V_8;
		uint32_t L_1178 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1177<<((int32_t)10)))|((int32_t)((uint32_t)L_1178>>((int32_t)22)))));
		uint32_t L_1179 = V_5;
		uint32_t L_1180 = V_6;
		uint32_t L_1181 = V_7;
		uint32_t L_1182 = V_8;
		uint32_t L_1183;
		L_1183 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1180, L_1181, L_1182, NULL);
		uint32_t* L_1184 = ___0_blockDWords;
		intptr_t L_1185 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)15),NULL));
		int32_t L_1186 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1184, ((intptr_t)il2cpp_codegen_multiply(L_1185, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1179, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1183, L_1186)), ((int32_t)1352829926)))));
		uint32_t L_1187 = V_5;
		uint32_t L_1188 = V_5;
		uint32_t L_1189 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1187<<8))|((int32_t)((uint32_t)L_1188>>((int32_t)24))))), (int32_t)L_1189));
		uint32_t L_1190 = V_7;
		uint32_t L_1191 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1190<<((int32_t)10)))|((int32_t)((uint32_t)L_1191>>((int32_t)22)))));
		uint32_t L_1192 = V_9;
		uint32_t L_1193 = V_5;
		uint32_t L_1194 = V_6;
		uint32_t L_1195 = V_7;
		uint32_t L_1196;
		L_1196 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1193, L_1194, L_1195, NULL);
		uint32_t* L_1197 = ___0_blockDWords;
		intptr_t L_1198 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		int32_t L_1199 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1197, ((intptr_t)il2cpp_codegen_multiply(L_1198, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1192, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1196, L_1199)), ((int32_t)1352829926)))));
		uint32_t L_1200 = V_9;
		uint32_t L_1201 = V_9;
		uint32_t L_1202 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1200<<((int32_t)11)))|((int32_t)((uint32_t)L_1201>>((int32_t)21))))), (int32_t)L_1202));
		uint32_t L_1203 = V_6;
		uint32_t L_1204 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1203<<((int32_t)10)))|((int32_t)((uint32_t)L_1204>>((int32_t)22)))));
		uint32_t L_1205 = V_8;
		uint32_t L_1206 = V_9;
		uint32_t L_1207 = V_5;
		uint32_t L_1208 = V_6;
		uint32_t L_1209;
		L_1209 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1206, L_1207, L_1208, NULL);
		uint32_t* L_1210 = ___0_blockDWords;
		int32_t L_1211 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1210, 4))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1205, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1209, L_1211)), ((int32_t)1352829926)))));
		uint32_t L_1212 = V_8;
		uint32_t L_1213 = V_8;
		uint32_t L_1214 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1212<<((int32_t)14)))|((int32_t)((uint32_t)L_1213>>((int32_t)18))))), (int32_t)L_1214));
		uint32_t L_1215 = V_5;
		uint32_t L_1216 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1215<<((int32_t)10)))|((int32_t)((uint32_t)L_1216>>((int32_t)22)))));
		uint32_t L_1217 = V_7;
		uint32_t L_1218 = V_8;
		uint32_t L_1219 = V_9;
		uint32_t L_1220 = V_5;
		uint32_t L_1221;
		L_1221 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1218, L_1219, L_1220, NULL);
		uint32_t* L_1222 = ___0_blockDWords;
		intptr_t L_1223 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		int32_t L_1224 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1222, ((intptr_t)il2cpp_codegen_multiply(L_1223, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1217, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1221, L_1224)), ((int32_t)1352829926)))));
		uint32_t L_1225 = V_7;
		uint32_t L_1226 = V_7;
		uint32_t L_1227 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1225<<((int32_t)14)))|((int32_t)((uint32_t)L_1226>>((int32_t)18))))), (int32_t)L_1227));
		uint32_t L_1228 = V_9;
		uint32_t L_1229 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1228<<((int32_t)10)))|((int32_t)((uint32_t)L_1229>>((int32_t)22)))));
		uint32_t L_1230 = V_6;
		uint32_t L_1231 = V_7;
		uint32_t L_1232 = V_8;
		uint32_t L_1233 = V_9;
		uint32_t L_1234;
		L_1234 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1231, L_1232, L_1233, NULL);
		uint32_t* L_1235 = ___0_blockDWords;
		intptr_t L_1236 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_1237 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1235, ((intptr_t)il2cpp_codegen_multiply(L_1236, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1230, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1234, L_1237)), ((int32_t)1352829926)))));
		uint32_t L_1238 = V_6;
		uint32_t L_1239 = V_6;
		uint32_t L_1240 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1238<<((int32_t)12)))|((int32_t)((uint32_t)L_1239>>((int32_t)20))))), (int32_t)L_1240));
		uint32_t L_1241 = V_8;
		uint32_t L_1242 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1241<<((int32_t)10)))|((int32_t)((uint32_t)L_1242>>((int32_t)22)))));
		uint32_t L_1243 = V_5;
		uint32_t L_1244 = V_6;
		uint32_t L_1245 = V_7;
		uint32_t L_1246 = V_8;
		uint32_t L_1247;
		L_1247 = RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924(L_1244, L_1245, L_1246, NULL);
		uint32_t* L_1248 = ___0_blockDWords;
		intptr_t L_1249 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		int32_t L_1250 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1248, ((intptr_t)il2cpp_codegen_multiply(L_1249, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1243, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1247, L_1250)), ((int32_t)1352829926)))));
		uint32_t L_1251 = V_5;
		uint32_t L_1252 = V_5;
		uint32_t L_1253 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1251<<6))|((int32_t)((uint32_t)L_1252>>((int32_t)26))))), (int32_t)L_1253));
		uint32_t L_1254 = V_7;
		uint32_t L_1255 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1254<<((int32_t)10)))|((int32_t)((uint32_t)L_1255>>((int32_t)22)))));
		uint32_t L_1256 = V_9;
		uint32_t L_1257 = V_5;
		uint32_t L_1258 = V_6;
		uint32_t L_1259 = V_7;
		uint32_t L_1260;
		L_1260 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1257, L_1258, L_1259, NULL);
		uint32_t* L_1261 = ___0_blockDWords;
		intptr_t L_1262 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int32_t L_1263 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1261, ((intptr_t)il2cpp_codegen_multiply(L_1262, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1256, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1260, L_1263)), ((int32_t)1548603684)))));
		uint32_t L_1264 = V_9;
		uint32_t L_1265 = V_9;
		uint32_t L_1266 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1264<<((int32_t)9)))|((int32_t)((uint32_t)L_1265>>((int32_t)23))))), (int32_t)L_1266));
		uint32_t L_1267 = V_6;
		uint32_t L_1268 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1267<<((int32_t)10)))|((int32_t)((uint32_t)L_1268>>((int32_t)22)))));
		uint32_t L_1269 = V_8;
		uint32_t L_1270 = V_9;
		uint32_t L_1271 = V_5;
		uint32_t L_1272 = V_6;
		uint32_t L_1273;
		L_1273 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1270, L_1271, L_1272, NULL);
		uint32_t* L_1274 = ___0_blockDWords;
		intptr_t L_1275 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		int32_t L_1276 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1274, ((intptr_t)il2cpp_codegen_multiply(L_1275, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1269, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1273, L_1276)), ((int32_t)1548603684)))));
		uint32_t L_1277 = V_8;
		uint32_t L_1278 = V_8;
		uint32_t L_1279 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1277<<((int32_t)13)))|((int32_t)((uint32_t)L_1278>>((int32_t)19))))), (int32_t)L_1279));
		uint32_t L_1280 = V_5;
		uint32_t L_1281 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1280<<((int32_t)10)))|((int32_t)((uint32_t)L_1281>>((int32_t)22)))));
		uint32_t L_1282 = V_7;
		uint32_t L_1283 = V_8;
		uint32_t L_1284 = V_9;
		uint32_t L_1285 = V_5;
		uint32_t L_1286;
		L_1286 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1283, L_1284, L_1285, NULL);
		uint32_t* L_1287 = ___0_blockDWords;
		intptr_t L_1288 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_1289 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1287, ((intptr_t)il2cpp_codegen_multiply(L_1288, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1282, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1286, L_1289)), ((int32_t)1548603684)))));
		uint32_t L_1290 = V_7;
		uint32_t L_1291 = V_7;
		uint32_t L_1292 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1290<<((int32_t)15)))|((int32_t)((uint32_t)L_1291>>((int32_t)17))))), (int32_t)L_1292));
		uint32_t L_1293 = V_9;
		uint32_t L_1294 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1293<<((int32_t)10)))|((int32_t)((uint32_t)L_1294>>((int32_t)22)))));
		uint32_t L_1295 = V_6;
		uint32_t L_1296 = V_7;
		uint32_t L_1297 = V_8;
		uint32_t L_1298 = V_9;
		uint32_t L_1299;
		L_1299 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1296, L_1297, L_1298, NULL);
		uint32_t* L_1300 = ___0_blockDWords;
		intptr_t L_1301 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int32_t L_1302 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1300, ((intptr_t)il2cpp_codegen_multiply(L_1301, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1295, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1299, L_1302)), ((int32_t)1548603684)))));
		uint32_t L_1303 = V_6;
		uint32_t L_1304 = V_6;
		uint32_t L_1305 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1303<<7))|((int32_t)((uint32_t)L_1304>>((int32_t)25))))), (int32_t)L_1305));
		uint32_t L_1306 = V_8;
		uint32_t L_1307 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1306<<((int32_t)10)))|((int32_t)((uint32_t)L_1307>>((int32_t)22)))));
		uint32_t L_1308 = V_5;
		uint32_t L_1309 = V_6;
		uint32_t L_1310 = V_7;
		uint32_t L_1311 = V_8;
		uint32_t L_1312;
		L_1312 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1309, L_1310, L_1311, NULL);
		uint32_t* L_1313 = ___0_blockDWords;
		int32_t L_1314 = ((int32_t)*(L_1313));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1308, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1312, L_1314)), ((int32_t)1548603684)))));
		uint32_t L_1315 = V_5;
		uint32_t L_1316 = V_5;
		uint32_t L_1317 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1315<<((int32_t)12)))|((int32_t)((uint32_t)L_1316>>((int32_t)20))))), (int32_t)L_1317));
		uint32_t L_1318 = V_7;
		uint32_t L_1319 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1318<<((int32_t)10)))|((int32_t)((uint32_t)L_1319>>((int32_t)22)))));
		uint32_t L_1320 = V_9;
		uint32_t L_1321 = V_5;
		uint32_t L_1322 = V_6;
		uint32_t L_1323 = V_7;
		uint32_t L_1324;
		L_1324 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1321, L_1322, L_1323, NULL);
		uint32_t* L_1325 = ___0_blockDWords;
		intptr_t L_1326 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		int32_t L_1327 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1325, ((intptr_t)il2cpp_codegen_multiply(L_1326, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1320, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1324, L_1327)), ((int32_t)1548603684)))));
		uint32_t L_1328 = V_9;
		uint32_t L_1329 = V_9;
		uint32_t L_1330 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1328<<8))|((int32_t)((uint32_t)L_1329>>((int32_t)24))))), (int32_t)L_1330));
		uint32_t L_1331 = V_6;
		uint32_t L_1332 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1331<<((int32_t)10)))|((int32_t)((uint32_t)L_1332>>((int32_t)22)))));
		uint32_t L_1333 = V_8;
		uint32_t L_1334 = V_9;
		uint32_t L_1335 = V_5;
		uint32_t L_1336 = V_6;
		uint32_t L_1337;
		L_1337 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1334, L_1335, L_1336, NULL);
		uint32_t* L_1338 = ___0_blockDWords;
		intptr_t L_1339 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int32_t L_1340 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1338, ((intptr_t)il2cpp_codegen_multiply(L_1339, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1333, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1337, L_1340)), ((int32_t)1548603684)))));
		uint32_t L_1341 = V_8;
		uint32_t L_1342 = V_8;
		uint32_t L_1343 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1341<<((int32_t)9)))|((int32_t)((uint32_t)L_1342>>((int32_t)23))))), (int32_t)L_1343));
		uint32_t L_1344 = V_5;
		uint32_t L_1345 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1344<<((int32_t)10)))|((int32_t)((uint32_t)L_1345>>((int32_t)22)))));
		uint32_t L_1346 = V_7;
		uint32_t L_1347 = V_8;
		uint32_t L_1348 = V_9;
		uint32_t L_1349 = V_5;
		uint32_t L_1350;
		L_1350 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1347, L_1348, L_1349, NULL);
		uint32_t* L_1351 = ___0_blockDWords;
		intptr_t L_1352 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		int32_t L_1353 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1351, ((intptr_t)il2cpp_codegen_multiply(L_1352, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1346, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1350, L_1353)), ((int32_t)1548603684)))));
		uint32_t L_1354 = V_7;
		uint32_t L_1355 = V_7;
		uint32_t L_1356 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1354<<((int32_t)11)))|((int32_t)((uint32_t)L_1355>>((int32_t)21))))), (int32_t)L_1356));
		uint32_t L_1357 = V_9;
		uint32_t L_1358 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1357<<((int32_t)10)))|((int32_t)((uint32_t)L_1358>>((int32_t)22)))));
		uint32_t L_1359 = V_6;
		uint32_t L_1360 = V_7;
		uint32_t L_1361 = V_8;
		uint32_t L_1362 = V_9;
		uint32_t L_1363;
		L_1363 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1360, L_1361, L_1362, NULL);
		uint32_t* L_1364 = ___0_blockDWords;
		intptr_t L_1365 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)14),NULL));
		int32_t L_1366 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1364, ((intptr_t)il2cpp_codegen_multiply(L_1365, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1359, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1363, L_1366)), ((int32_t)1548603684)))));
		uint32_t L_1367 = V_6;
		uint32_t L_1368 = V_6;
		uint32_t L_1369 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1367<<7))|((int32_t)((uint32_t)L_1368>>((int32_t)25))))), (int32_t)L_1369));
		uint32_t L_1370 = V_8;
		uint32_t L_1371 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1370<<((int32_t)10)))|((int32_t)((uint32_t)L_1371>>((int32_t)22)))));
		uint32_t L_1372 = V_5;
		uint32_t L_1373 = V_6;
		uint32_t L_1374 = V_7;
		uint32_t L_1375 = V_8;
		uint32_t L_1376;
		L_1376 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1373, L_1374, L_1375, NULL);
		uint32_t* L_1377 = ___0_blockDWords;
		intptr_t L_1378 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)15),NULL));
		int32_t L_1379 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1377, ((intptr_t)il2cpp_codegen_multiply(L_1378, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1372, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1376, L_1379)), ((int32_t)1548603684)))));
		uint32_t L_1380 = V_5;
		uint32_t L_1381 = V_5;
		uint32_t L_1382 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1380<<7))|((int32_t)((uint32_t)L_1381>>((int32_t)25))))), (int32_t)L_1382));
		uint32_t L_1383 = V_7;
		uint32_t L_1384 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1383<<((int32_t)10)))|((int32_t)((uint32_t)L_1384>>((int32_t)22)))));
		uint32_t L_1385 = V_9;
		uint32_t L_1386 = V_5;
		uint32_t L_1387 = V_6;
		uint32_t L_1388 = V_7;
		uint32_t L_1389;
		L_1389 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1386, L_1387, L_1388, NULL);
		uint32_t* L_1390 = ___0_blockDWords;
		intptr_t L_1391 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		int32_t L_1392 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1390, ((intptr_t)il2cpp_codegen_multiply(L_1391, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1385, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1389, L_1392)), ((int32_t)1548603684)))));
		uint32_t L_1393 = V_9;
		uint32_t L_1394 = V_9;
		uint32_t L_1395 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1393<<((int32_t)12)))|((int32_t)((uint32_t)L_1394>>((int32_t)20))))), (int32_t)L_1395));
		uint32_t L_1396 = V_6;
		uint32_t L_1397 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1396<<((int32_t)10)))|((int32_t)((uint32_t)L_1397>>((int32_t)22)))));
		uint32_t L_1398 = V_8;
		uint32_t L_1399 = V_9;
		uint32_t L_1400 = V_5;
		uint32_t L_1401 = V_6;
		uint32_t L_1402;
		L_1402 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1399, L_1400, L_1401, NULL);
		uint32_t* L_1403 = ___0_blockDWords;
		intptr_t L_1404 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		int32_t L_1405 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1403, ((intptr_t)il2cpp_codegen_multiply(L_1404, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1398, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1402, L_1405)), ((int32_t)1548603684)))));
		uint32_t L_1406 = V_8;
		uint32_t L_1407 = V_8;
		uint32_t L_1408 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1406<<7))|((int32_t)((uint32_t)L_1407>>((int32_t)25))))), (int32_t)L_1408));
		uint32_t L_1409 = V_5;
		uint32_t L_1410 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1409<<((int32_t)10)))|((int32_t)((uint32_t)L_1410>>((int32_t)22)))));
		uint32_t L_1411 = V_7;
		uint32_t L_1412 = V_8;
		uint32_t L_1413 = V_9;
		uint32_t L_1414 = V_5;
		uint32_t L_1415;
		L_1415 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1412, L_1413, L_1414, NULL);
		uint32_t* L_1416 = ___0_blockDWords;
		intptr_t L_1417 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_1418 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1416, ((intptr_t)il2cpp_codegen_multiply(L_1417, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1411, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1415, L_1418)), ((int32_t)1548603684)))));
		uint32_t L_1419 = V_7;
		uint32_t L_1420 = V_7;
		uint32_t L_1421 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1419<<6))|((int32_t)((uint32_t)L_1420>>((int32_t)26))))), (int32_t)L_1421));
		uint32_t L_1422 = V_9;
		uint32_t L_1423 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1422<<((int32_t)10)))|((int32_t)((uint32_t)L_1423>>((int32_t)22)))));
		uint32_t L_1424 = V_6;
		uint32_t L_1425 = V_7;
		uint32_t L_1426 = V_8;
		uint32_t L_1427 = V_9;
		uint32_t L_1428;
		L_1428 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1425, L_1426, L_1427, NULL);
		uint32_t* L_1429 = ___0_blockDWords;
		intptr_t L_1430 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		int32_t L_1431 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1429, ((intptr_t)il2cpp_codegen_multiply(L_1430, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1424, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1428, L_1431)), ((int32_t)1548603684)))));
		uint32_t L_1432 = V_6;
		uint32_t L_1433 = V_6;
		uint32_t L_1434 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1432<<((int32_t)15)))|((int32_t)((uint32_t)L_1433>>((int32_t)17))))), (int32_t)L_1434));
		uint32_t L_1435 = V_8;
		uint32_t L_1436 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1435<<((int32_t)10)))|((int32_t)((uint32_t)L_1436>>((int32_t)22)))));
		uint32_t L_1437 = V_5;
		uint32_t L_1438 = V_6;
		uint32_t L_1439 = V_7;
		uint32_t L_1440 = V_8;
		uint32_t L_1441;
		L_1441 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1438, L_1439, L_1440, NULL);
		uint32_t* L_1442 = ___0_blockDWords;
		int32_t L_1443 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1442, 4))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1437, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1441, L_1443)), ((int32_t)1548603684)))));
		uint32_t L_1444 = V_5;
		uint32_t L_1445 = V_5;
		uint32_t L_1446 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1444<<((int32_t)13)))|((int32_t)((uint32_t)L_1445>>((int32_t)19))))), (int32_t)L_1446));
		uint32_t L_1447 = V_7;
		uint32_t L_1448 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1447<<((int32_t)10)))|((int32_t)((uint32_t)L_1448>>((int32_t)22)))));
		uint32_t L_1449 = V_9;
		uint32_t L_1450 = V_5;
		uint32_t L_1451 = V_6;
		uint32_t L_1452 = V_7;
		uint32_t L_1453;
		L_1453 = RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E(L_1450, L_1451, L_1452, NULL);
		uint32_t* L_1454 = ___0_blockDWords;
		intptr_t L_1455 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_1456 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1454, ((intptr_t)il2cpp_codegen_multiply(L_1455, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1449, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1453, L_1456)), ((int32_t)1548603684)))));
		uint32_t L_1457 = V_9;
		uint32_t L_1458 = V_9;
		uint32_t L_1459 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1457<<((int32_t)11)))|((int32_t)((uint32_t)L_1458>>((int32_t)21))))), (int32_t)L_1459));
		uint32_t L_1460 = V_6;
		uint32_t L_1461 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1460<<((int32_t)10)))|((int32_t)((uint32_t)L_1461>>((int32_t)22)))));
		uint32_t L_1462 = V_8;
		uint32_t L_1463 = V_9;
		uint32_t L_1464 = V_5;
		uint32_t L_1465 = V_6;
		uint32_t L_1466;
		L_1466 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1463, L_1464, L_1465, NULL);
		uint32_t* L_1467 = ___0_blockDWords;
		intptr_t L_1468 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)15),NULL));
		int32_t L_1469 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1467, ((intptr_t)il2cpp_codegen_multiply(L_1468, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1462, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1466, L_1469)), ((int32_t)1836072691)))));
		uint32_t L_1470 = V_8;
		uint32_t L_1471 = V_8;
		uint32_t L_1472 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1470<<((int32_t)9)))|((int32_t)((uint32_t)L_1471>>((int32_t)23))))), (int32_t)L_1472));
		uint32_t L_1473 = V_5;
		uint32_t L_1474 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1473<<((int32_t)10)))|((int32_t)((uint32_t)L_1474>>((int32_t)22)))));
		uint32_t L_1475 = V_7;
		uint32_t L_1476 = V_8;
		uint32_t L_1477 = V_9;
		uint32_t L_1478 = V_5;
		uint32_t L_1479;
		L_1479 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1476, L_1477, L_1478, NULL);
		uint32_t* L_1480 = ___0_blockDWords;
		intptr_t L_1481 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int32_t L_1482 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1480, ((intptr_t)il2cpp_codegen_multiply(L_1481, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1475, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1479, L_1482)), ((int32_t)1836072691)))));
		uint32_t L_1483 = V_7;
		uint32_t L_1484 = V_7;
		uint32_t L_1485 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1483<<7))|((int32_t)((uint32_t)L_1484>>((int32_t)25))))), (int32_t)L_1485));
		uint32_t L_1486 = V_9;
		uint32_t L_1487 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1486<<((int32_t)10)))|((int32_t)((uint32_t)L_1487>>((int32_t)22)))));
		uint32_t L_1488 = V_6;
		uint32_t L_1489 = V_7;
		uint32_t L_1490 = V_8;
		uint32_t L_1491 = V_9;
		uint32_t L_1492;
		L_1492 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1489, L_1490, L_1491, NULL);
		uint32_t* L_1493 = ___0_blockDWords;
		int32_t L_1494 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1493, 4))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1488, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1492, L_1494)), ((int32_t)1836072691)))));
		uint32_t L_1495 = V_6;
		uint32_t L_1496 = V_6;
		uint32_t L_1497 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1495<<((int32_t)15)))|((int32_t)((uint32_t)L_1496>>((int32_t)17))))), (int32_t)L_1497));
		uint32_t L_1498 = V_8;
		uint32_t L_1499 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1498<<((int32_t)10)))|((int32_t)((uint32_t)L_1499>>((int32_t)22)))));
		uint32_t L_1500 = V_5;
		uint32_t L_1501 = V_6;
		uint32_t L_1502 = V_7;
		uint32_t L_1503 = V_8;
		uint32_t L_1504;
		L_1504 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1501, L_1502, L_1503, NULL);
		uint32_t* L_1505 = ___0_blockDWords;
		intptr_t L_1506 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_1507 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1505, ((intptr_t)il2cpp_codegen_multiply(L_1506, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1500, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1504, L_1507)), ((int32_t)1836072691)))));
		uint32_t L_1508 = V_5;
		uint32_t L_1509 = V_5;
		uint32_t L_1510 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1508<<((int32_t)11)))|((int32_t)((uint32_t)L_1509>>((int32_t)21))))), (int32_t)L_1510));
		uint32_t L_1511 = V_7;
		uint32_t L_1512 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1511<<((int32_t)10)))|((int32_t)((uint32_t)L_1512>>((int32_t)22)))));
		uint32_t L_1513 = V_9;
		uint32_t L_1514 = V_5;
		uint32_t L_1515 = V_6;
		uint32_t L_1516 = V_7;
		uint32_t L_1517;
		L_1517 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1514, L_1515, L_1516, NULL);
		uint32_t* L_1518 = ___0_blockDWords;
		intptr_t L_1519 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int32_t L_1520 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1518, ((intptr_t)il2cpp_codegen_multiply(L_1519, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1513, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1517, L_1520)), ((int32_t)1836072691)))));
		uint32_t L_1521 = V_9;
		uint32_t L_1522 = V_9;
		uint32_t L_1523 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1521<<8))|((int32_t)((uint32_t)L_1522>>((int32_t)24))))), (int32_t)L_1523));
		uint32_t L_1524 = V_6;
		uint32_t L_1525 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1524<<((int32_t)10)))|((int32_t)((uint32_t)L_1525>>((int32_t)22)))));
		uint32_t L_1526 = V_8;
		uint32_t L_1527 = V_9;
		uint32_t L_1528 = V_5;
		uint32_t L_1529 = V_6;
		uint32_t L_1530;
		L_1530 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1527, L_1528, L_1529, NULL);
		uint32_t* L_1531 = ___0_blockDWords;
		intptr_t L_1532 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)14),NULL));
		int32_t L_1533 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1531, ((intptr_t)il2cpp_codegen_multiply(L_1532, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1526, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1530, L_1533)), ((int32_t)1836072691)))));
		uint32_t L_1534 = V_8;
		uint32_t L_1535 = V_8;
		uint32_t L_1536 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1534<<6))|((int32_t)((uint32_t)L_1535>>((int32_t)26))))), (int32_t)L_1536));
		uint32_t L_1537 = V_5;
		uint32_t L_1538 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1537<<((int32_t)10)))|((int32_t)((uint32_t)L_1538>>((int32_t)22)))));
		uint32_t L_1539 = V_7;
		uint32_t L_1540 = V_8;
		uint32_t L_1541 = V_9;
		uint32_t L_1542 = V_5;
		uint32_t L_1543;
		L_1543 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1540, L_1541, L_1542, NULL);
		uint32_t* L_1544 = ___0_blockDWords;
		intptr_t L_1545 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int32_t L_1546 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1544, ((intptr_t)il2cpp_codegen_multiply(L_1545, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1539, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1543, L_1546)), ((int32_t)1836072691)))));
		uint32_t L_1547 = V_7;
		uint32_t L_1548 = V_7;
		uint32_t L_1549 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1547<<6))|((int32_t)((uint32_t)L_1548>>((int32_t)26))))), (int32_t)L_1549));
		uint32_t L_1550 = V_9;
		uint32_t L_1551 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1550<<((int32_t)10)))|((int32_t)((uint32_t)L_1551>>((int32_t)22)))));
		uint32_t L_1552 = V_6;
		uint32_t L_1553 = V_7;
		uint32_t L_1554 = V_8;
		uint32_t L_1555 = V_9;
		uint32_t L_1556;
		L_1556 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1553, L_1554, L_1555, NULL);
		uint32_t* L_1557 = ___0_blockDWords;
		intptr_t L_1558 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		int32_t L_1559 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1557, ((intptr_t)il2cpp_codegen_multiply(L_1558, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1552, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1556, L_1559)), ((int32_t)1836072691)))));
		uint32_t L_1560 = V_6;
		uint32_t L_1561 = V_6;
		uint32_t L_1562 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1560<<((int32_t)14)))|((int32_t)((uint32_t)L_1561>>((int32_t)18))))), (int32_t)L_1562));
		uint32_t L_1563 = V_8;
		uint32_t L_1564 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1563<<((int32_t)10)))|((int32_t)((uint32_t)L_1564>>((int32_t)22)))));
		uint32_t L_1565 = V_5;
		uint32_t L_1566 = V_6;
		uint32_t L_1567 = V_7;
		uint32_t L_1568 = V_8;
		uint32_t L_1569;
		L_1569 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1566, L_1567, L_1568, NULL);
		uint32_t* L_1570 = ___0_blockDWords;
		intptr_t L_1571 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		int32_t L_1572 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1570, ((intptr_t)il2cpp_codegen_multiply(L_1571, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1565, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1569, L_1572)), ((int32_t)1836072691)))));
		uint32_t L_1573 = V_5;
		uint32_t L_1574 = V_5;
		uint32_t L_1575 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1573<<((int32_t)12)))|((int32_t)((uint32_t)L_1574>>((int32_t)20))))), (int32_t)L_1575));
		uint32_t L_1576 = V_7;
		uint32_t L_1577 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1576<<((int32_t)10)))|((int32_t)((uint32_t)L_1577>>((int32_t)22)))));
		uint32_t L_1578 = V_9;
		uint32_t L_1579 = V_5;
		uint32_t L_1580 = V_6;
		uint32_t L_1581 = V_7;
		uint32_t L_1582;
		L_1582 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1579, L_1580, L_1581, NULL);
		uint32_t* L_1583 = ___0_blockDWords;
		intptr_t L_1584 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		int32_t L_1585 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1583, ((intptr_t)il2cpp_codegen_multiply(L_1584, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1578, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1582, L_1585)), ((int32_t)1836072691)))));
		uint32_t L_1586 = V_9;
		uint32_t L_1587 = V_9;
		uint32_t L_1588 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1586<<((int32_t)13)))|((int32_t)((uint32_t)L_1587>>((int32_t)19))))), (int32_t)L_1588));
		uint32_t L_1589 = V_6;
		uint32_t L_1590 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1589<<((int32_t)10)))|((int32_t)((uint32_t)L_1590>>((int32_t)22)))));
		uint32_t L_1591 = V_8;
		uint32_t L_1592 = V_9;
		uint32_t L_1593 = V_5;
		uint32_t L_1594 = V_6;
		uint32_t L_1595;
		L_1595 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1592, L_1593, L_1594, NULL);
		uint32_t* L_1596 = ___0_blockDWords;
		intptr_t L_1597 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		int32_t L_1598 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1596, ((intptr_t)il2cpp_codegen_multiply(L_1597, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1591, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1595, L_1598)), ((int32_t)1836072691)))));
		uint32_t L_1599 = V_8;
		uint32_t L_1600 = V_8;
		uint32_t L_1601 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1599<<5))|((int32_t)((uint32_t)L_1600>>((int32_t)27))))), (int32_t)L_1601));
		uint32_t L_1602 = V_5;
		uint32_t L_1603 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1602<<((int32_t)10)))|((int32_t)((uint32_t)L_1603>>((int32_t)22)))));
		uint32_t L_1604 = V_7;
		uint32_t L_1605 = V_8;
		uint32_t L_1606 = V_9;
		uint32_t L_1607 = V_5;
		uint32_t L_1608;
		L_1608 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1605, L_1606, L_1607, NULL);
		uint32_t* L_1609 = ___0_blockDWords;
		intptr_t L_1610 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_1611 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1609, ((intptr_t)il2cpp_codegen_multiply(L_1610, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1604, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1608, L_1611)), ((int32_t)1836072691)))));
		uint32_t L_1612 = V_7;
		uint32_t L_1613 = V_7;
		uint32_t L_1614 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1612<<((int32_t)14)))|((int32_t)((uint32_t)L_1613>>((int32_t)18))))), (int32_t)L_1614));
		uint32_t L_1615 = V_9;
		uint32_t L_1616 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1615<<((int32_t)10)))|((int32_t)((uint32_t)L_1616>>((int32_t)22)))));
		uint32_t L_1617 = V_6;
		uint32_t L_1618 = V_7;
		uint32_t L_1619 = V_8;
		uint32_t L_1620 = V_9;
		uint32_t L_1621;
		L_1621 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1618, L_1619, L_1620, NULL);
		uint32_t* L_1622 = ___0_blockDWords;
		intptr_t L_1623 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		int32_t L_1624 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1622, ((intptr_t)il2cpp_codegen_multiply(L_1623, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1617, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1621, L_1624)), ((int32_t)1836072691)))));
		uint32_t L_1625 = V_6;
		uint32_t L_1626 = V_6;
		uint32_t L_1627 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1625<<((int32_t)13)))|((int32_t)((uint32_t)L_1626>>((int32_t)19))))), (int32_t)L_1627));
		uint32_t L_1628 = V_8;
		uint32_t L_1629 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1628<<((int32_t)10)))|((int32_t)((uint32_t)L_1629>>((int32_t)22)))));
		uint32_t L_1630 = V_5;
		uint32_t L_1631 = V_6;
		uint32_t L_1632 = V_7;
		uint32_t L_1633 = V_8;
		uint32_t L_1634;
		L_1634 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1631, L_1632, L_1633, NULL);
		uint32_t* L_1635 = ___0_blockDWords;
		int32_t L_1636 = ((int32_t)*(L_1635));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1630, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1634, L_1636)), ((int32_t)1836072691)))));
		uint32_t L_1637 = V_5;
		uint32_t L_1638 = V_5;
		uint32_t L_1639 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1637<<((int32_t)13)))|((int32_t)((uint32_t)L_1638>>((int32_t)19))))), (int32_t)L_1639));
		uint32_t L_1640 = V_7;
		uint32_t L_1641 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1640<<((int32_t)10)))|((int32_t)((uint32_t)L_1641>>((int32_t)22)))));
		uint32_t L_1642 = V_9;
		uint32_t L_1643 = V_5;
		uint32_t L_1644 = V_6;
		uint32_t L_1645 = V_7;
		uint32_t L_1646;
		L_1646 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1643, L_1644, L_1645, NULL);
		uint32_t* L_1647 = ___0_blockDWords;
		intptr_t L_1648 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_1649 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1647, ((intptr_t)il2cpp_codegen_multiply(L_1648, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1642, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1646, L_1649)), ((int32_t)1836072691)))));
		uint32_t L_1650 = V_9;
		uint32_t L_1651 = V_9;
		uint32_t L_1652 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1650<<7))|((int32_t)((uint32_t)L_1651>>((int32_t)25))))), (int32_t)L_1652));
		uint32_t L_1653 = V_6;
		uint32_t L_1654 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1653<<((int32_t)10)))|((int32_t)((uint32_t)L_1654>>((int32_t)22)))));
		uint32_t L_1655 = V_8;
		uint32_t L_1656 = V_9;
		uint32_t L_1657 = V_5;
		uint32_t L_1658 = V_6;
		uint32_t L_1659;
		L_1659 = RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB(L_1656, L_1657, L_1658, NULL);
		uint32_t* L_1660 = ___0_blockDWords;
		intptr_t L_1661 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		int32_t L_1662 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1660, ((intptr_t)il2cpp_codegen_multiply(L_1661, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1655, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1659, L_1662)), ((int32_t)1836072691)))));
		uint32_t L_1663 = V_8;
		uint32_t L_1664 = V_8;
		uint32_t L_1665 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1663<<5))|((int32_t)((uint32_t)L_1664>>((int32_t)27))))), (int32_t)L_1665));
		uint32_t L_1666 = V_5;
		uint32_t L_1667 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1666<<((int32_t)10)))|((int32_t)((uint32_t)L_1667>>((int32_t)22)))));
		uint32_t L_1668 = V_7;
		uint32_t L_1669 = V_8;
		uint32_t L_1670 = V_9;
		uint32_t L_1671 = V_5;
		uint32_t L_1672;
		L_1672 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1669, L_1670, L_1671, NULL);
		uint32_t* L_1673 = ___0_blockDWords;
		intptr_t L_1674 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		int32_t L_1675 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1673, ((intptr_t)il2cpp_codegen_multiply(L_1674, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1668, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1672, L_1675)), ((int32_t)2053994217)))));
		uint32_t L_1676 = V_7;
		uint32_t L_1677 = V_7;
		uint32_t L_1678 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1676<<((int32_t)15)))|((int32_t)((uint32_t)L_1677>>((int32_t)17))))), (int32_t)L_1678));
		uint32_t L_1679 = V_9;
		uint32_t L_1680 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1679<<((int32_t)10)))|((int32_t)((uint32_t)L_1680>>((int32_t)22)))));
		uint32_t L_1681 = V_6;
		uint32_t L_1682 = V_7;
		uint32_t L_1683 = V_8;
		uint32_t L_1684 = V_9;
		uint32_t L_1685;
		L_1685 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1682, L_1683, L_1684, NULL);
		uint32_t* L_1686 = ___0_blockDWords;
		intptr_t L_1687 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int32_t L_1688 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1686, ((intptr_t)il2cpp_codegen_multiply(L_1687, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1681, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1685, L_1688)), ((int32_t)2053994217)))));
		uint32_t L_1689 = V_6;
		uint32_t L_1690 = V_6;
		uint32_t L_1691 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1689<<5))|((int32_t)((uint32_t)L_1690>>((int32_t)27))))), (int32_t)L_1691));
		uint32_t L_1692 = V_8;
		uint32_t L_1693 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1692<<((int32_t)10)))|((int32_t)((uint32_t)L_1693>>((int32_t)22)))));
		uint32_t L_1694 = V_5;
		uint32_t L_1695 = V_6;
		uint32_t L_1696 = V_7;
		uint32_t L_1697 = V_8;
		uint32_t L_1698;
		L_1698 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1695, L_1696, L_1697, NULL);
		uint32_t* L_1699 = ___0_blockDWords;
		intptr_t L_1700 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_1701 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1699, ((intptr_t)il2cpp_codegen_multiply(L_1700, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1694, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1698, L_1701)), ((int32_t)2053994217)))));
		uint32_t L_1702 = V_5;
		uint32_t L_1703 = V_5;
		uint32_t L_1704 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1702<<8))|((int32_t)((uint32_t)L_1703>>((int32_t)24))))), (int32_t)L_1704));
		uint32_t L_1705 = V_7;
		uint32_t L_1706 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1705<<((int32_t)10)))|((int32_t)((uint32_t)L_1706>>((int32_t)22)))));
		uint32_t L_1707 = V_9;
		uint32_t L_1708 = V_5;
		uint32_t L_1709 = V_6;
		uint32_t L_1710 = V_7;
		uint32_t L_1711;
		L_1711 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1708, L_1709, L_1710, NULL);
		uint32_t* L_1712 = ___0_blockDWords;
		int32_t L_1713 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1712, 4))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1707, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1711, L_1713)), ((int32_t)2053994217)))));
		uint32_t L_1714 = V_9;
		uint32_t L_1715 = V_9;
		uint32_t L_1716 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1714<<((int32_t)11)))|((int32_t)((uint32_t)L_1715>>((int32_t)21))))), (int32_t)L_1716));
		uint32_t L_1717 = V_6;
		uint32_t L_1718 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1717<<((int32_t)10)))|((int32_t)((uint32_t)L_1718>>((int32_t)22)))));
		uint32_t L_1719 = V_8;
		uint32_t L_1720 = V_9;
		uint32_t L_1721 = V_5;
		uint32_t L_1722 = V_6;
		uint32_t L_1723;
		L_1723 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1720, L_1721, L_1722, NULL);
		uint32_t* L_1724 = ___0_blockDWords;
		intptr_t L_1725 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_1726 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1724, ((intptr_t)il2cpp_codegen_multiply(L_1725, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1719, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1723, L_1726)), ((int32_t)2053994217)))));
		uint32_t L_1727 = V_8;
		uint32_t L_1728 = V_8;
		uint32_t L_1729 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1727<<((int32_t)14)))|((int32_t)((uint32_t)L_1728>>((int32_t)18))))), (int32_t)L_1729));
		uint32_t L_1730 = V_5;
		uint32_t L_1731 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1730<<((int32_t)10)))|((int32_t)((uint32_t)L_1731>>((int32_t)22)))));
		uint32_t L_1732 = V_7;
		uint32_t L_1733 = V_8;
		uint32_t L_1734 = V_9;
		uint32_t L_1735 = V_5;
		uint32_t L_1736;
		L_1736 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1733, L_1734, L_1735, NULL);
		uint32_t* L_1737 = ___0_blockDWords;
		intptr_t L_1738 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		int32_t L_1739 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1737, ((intptr_t)il2cpp_codegen_multiply(L_1738, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1732, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1736, L_1739)), ((int32_t)2053994217)))));
		uint32_t L_1740 = V_7;
		uint32_t L_1741 = V_7;
		uint32_t L_1742 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1740<<((int32_t)14)))|((int32_t)((uint32_t)L_1741>>((int32_t)18))))), (int32_t)L_1742));
		uint32_t L_1743 = V_9;
		uint32_t L_1744 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1743<<((int32_t)10)))|((int32_t)((uint32_t)L_1744>>((int32_t)22)))));
		uint32_t L_1745 = V_6;
		uint32_t L_1746 = V_7;
		uint32_t L_1747 = V_8;
		uint32_t L_1748 = V_9;
		uint32_t L_1749;
		L_1749 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1746, L_1747, L_1748, NULL);
		uint32_t* L_1750 = ___0_blockDWords;
		intptr_t L_1751 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)15),NULL));
		int32_t L_1752 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1750, ((intptr_t)il2cpp_codegen_multiply(L_1751, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1745, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1749, L_1752)), ((int32_t)2053994217)))));
		uint32_t L_1753 = V_6;
		uint32_t L_1754 = V_6;
		uint32_t L_1755 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1753<<6))|((int32_t)((uint32_t)L_1754>>((int32_t)26))))), (int32_t)L_1755));
		uint32_t L_1756 = V_8;
		uint32_t L_1757 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1756<<((int32_t)10)))|((int32_t)((uint32_t)L_1757>>((int32_t)22)))));
		uint32_t L_1758 = V_5;
		uint32_t L_1759 = V_6;
		uint32_t L_1760 = V_7;
		uint32_t L_1761 = V_8;
		uint32_t L_1762;
		L_1762 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1759, L_1760, L_1761, NULL);
		uint32_t* L_1763 = ___0_blockDWords;
		int32_t L_1764 = ((int32_t)*(L_1763));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1758, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1762, L_1764)), ((int32_t)2053994217)))));
		uint32_t L_1765 = V_5;
		uint32_t L_1766 = V_5;
		uint32_t L_1767 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1765<<((int32_t)14)))|((int32_t)((uint32_t)L_1766>>((int32_t)18))))), (int32_t)L_1767));
		uint32_t L_1768 = V_7;
		uint32_t L_1769 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1768<<((int32_t)10)))|((int32_t)((uint32_t)L_1769>>((int32_t)22)))));
		uint32_t L_1770 = V_9;
		uint32_t L_1771 = V_5;
		uint32_t L_1772 = V_6;
		uint32_t L_1773 = V_7;
		uint32_t L_1774;
		L_1774 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1771, L_1772, L_1773, NULL);
		uint32_t* L_1775 = ___0_blockDWords;
		intptr_t L_1776 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int32_t L_1777 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1775, ((intptr_t)il2cpp_codegen_multiply(L_1776, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1770, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1774, L_1777)), ((int32_t)2053994217)))));
		uint32_t L_1778 = V_9;
		uint32_t L_1779 = V_9;
		uint32_t L_1780 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1778<<6))|((int32_t)((uint32_t)L_1779>>((int32_t)26))))), (int32_t)L_1780));
		uint32_t L_1781 = V_6;
		uint32_t L_1782 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1781<<((int32_t)10)))|((int32_t)((uint32_t)L_1782>>((int32_t)22)))));
		uint32_t L_1783 = V_8;
		uint32_t L_1784 = V_9;
		uint32_t L_1785 = V_5;
		uint32_t L_1786 = V_6;
		uint32_t L_1787;
		L_1787 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1784, L_1785, L_1786, NULL);
		uint32_t* L_1788 = ___0_blockDWords;
		intptr_t L_1789 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		int32_t L_1790 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1788, ((intptr_t)il2cpp_codegen_multiply(L_1789, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1783, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1787, L_1790)), ((int32_t)2053994217)))));
		uint32_t L_1791 = V_8;
		uint32_t L_1792 = V_8;
		uint32_t L_1793 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1791<<((int32_t)9)))|((int32_t)((uint32_t)L_1792>>((int32_t)23))))), (int32_t)L_1793));
		uint32_t L_1794 = V_5;
		uint32_t L_1795 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1794<<((int32_t)10)))|((int32_t)((uint32_t)L_1795>>((int32_t)22)))));
		uint32_t L_1796 = V_7;
		uint32_t L_1797 = V_8;
		uint32_t L_1798 = V_9;
		uint32_t L_1799 = V_5;
		uint32_t L_1800;
		L_1800 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1797, L_1798, L_1799, NULL);
		uint32_t* L_1801 = ___0_blockDWords;
		intptr_t L_1802 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_1803 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1801, ((intptr_t)il2cpp_codegen_multiply(L_1802, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1796, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1800, L_1803)), ((int32_t)2053994217)))));
		uint32_t L_1804 = V_7;
		uint32_t L_1805 = V_7;
		uint32_t L_1806 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1804<<((int32_t)12)))|((int32_t)((uint32_t)L_1805>>((int32_t)20))))), (int32_t)L_1806));
		uint32_t L_1807 = V_9;
		uint32_t L_1808 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1807<<((int32_t)10)))|((int32_t)((uint32_t)L_1808>>((int32_t)22)))));
		uint32_t L_1809 = V_6;
		uint32_t L_1810 = V_7;
		uint32_t L_1811 = V_8;
		uint32_t L_1812 = V_9;
		uint32_t L_1813;
		L_1813 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1810, L_1811, L_1812, NULL);
		uint32_t* L_1814 = ___0_blockDWords;
		intptr_t L_1815 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		int32_t L_1816 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1814, ((intptr_t)il2cpp_codegen_multiply(L_1815, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1809, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1813, L_1816)), ((int32_t)2053994217)))));
		uint32_t L_1817 = V_6;
		uint32_t L_1818 = V_6;
		uint32_t L_1819 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1817<<((int32_t)9)))|((int32_t)((uint32_t)L_1818>>((int32_t)23))))), (int32_t)L_1819));
		uint32_t L_1820 = V_8;
		uint32_t L_1821 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1820<<((int32_t)10)))|((int32_t)((uint32_t)L_1821>>((int32_t)22)))));
		uint32_t L_1822 = V_5;
		uint32_t L_1823 = V_6;
		uint32_t L_1824 = V_7;
		uint32_t L_1825 = V_8;
		uint32_t L_1826;
		L_1826 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1823, L_1824, L_1825, NULL);
		uint32_t* L_1827 = ___0_blockDWords;
		intptr_t L_1828 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		int32_t L_1829 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1827, ((intptr_t)il2cpp_codegen_multiply(L_1828, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1822, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1826, L_1829)), ((int32_t)2053994217)))));
		uint32_t L_1830 = V_5;
		uint32_t L_1831 = V_5;
		uint32_t L_1832 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1830<<((int32_t)12)))|((int32_t)((uint32_t)L_1831>>((int32_t)20))))), (int32_t)L_1832));
		uint32_t L_1833 = V_7;
		uint32_t L_1834 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1833<<((int32_t)10)))|((int32_t)((uint32_t)L_1834>>((int32_t)22)))));
		uint32_t L_1835 = V_9;
		uint32_t L_1836 = V_5;
		uint32_t L_1837 = V_6;
		uint32_t L_1838 = V_7;
		uint32_t L_1839;
		L_1839 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1836, L_1837, L_1838, NULL);
		uint32_t* L_1840 = ___0_blockDWords;
		intptr_t L_1841 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int32_t L_1842 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1840, ((intptr_t)il2cpp_codegen_multiply(L_1841, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1835, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1839, L_1842)), ((int32_t)2053994217)))));
		uint32_t L_1843 = V_9;
		uint32_t L_1844 = V_9;
		uint32_t L_1845 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1843<<5))|((int32_t)((uint32_t)L_1844>>((int32_t)27))))), (int32_t)L_1845));
		uint32_t L_1846 = V_6;
		uint32_t L_1847 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1846<<((int32_t)10)))|((int32_t)((uint32_t)L_1847>>((int32_t)22)))));
		uint32_t L_1848 = V_8;
		uint32_t L_1849 = V_9;
		uint32_t L_1850 = V_5;
		uint32_t L_1851 = V_6;
		uint32_t L_1852;
		L_1852 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1849, L_1850, L_1851, NULL);
		uint32_t* L_1853 = ___0_blockDWords;
		intptr_t L_1854 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		int32_t L_1855 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1853, ((intptr_t)il2cpp_codegen_multiply(L_1854, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1848, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1852, L_1855)), ((int32_t)2053994217)))));
		uint32_t L_1856 = V_8;
		uint32_t L_1857 = V_8;
		uint32_t L_1858 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1856<<((int32_t)15)))|((int32_t)((uint32_t)L_1857>>((int32_t)17))))), (int32_t)L_1858));
		uint32_t L_1859 = V_5;
		uint32_t L_1860 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1859<<((int32_t)10)))|((int32_t)((uint32_t)L_1860>>((int32_t)22)))));
		uint32_t L_1861 = V_7;
		uint32_t L_1862 = V_8;
		uint32_t L_1863 = V_9;
		uint32_t L_1864 = V_5;
		uint32_t L_1865;
		L_1865 = RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307(L_1862, L_1863, L_1864, NULL);
		uint32_t* L_1866 = ___0_blockDWords;
		intptr_t L_1867 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)14),NULL));
		int32_t L_1868 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1866, ((intptr_t)il2cpp_codegen_multiply(L_1867, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1861, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_1865, L_1868)), ((int32_t)2053994217)))));
		uint32_t L_1869 = V_7;
		uint32_t L_1870 = V_7;
		uint32_t L_1871 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1869<<8))|((int32_t)((uint32_t)L_1870>>((int32_t)24))))), (int32_t)L_1871));
		uint32_t L_1872 = V_9;
		uint32_t L_1873 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1872<<((int32_t)10)))|((int32_t)((uint32_t)L_1873>>((int32_t)22)))));
		uint32_t L_1874 = V_6;
		uint32_t L_1875 = V_7;
		uint32_t L_1876 = V_8;
		uint32_t L_1877 = V_9;
		uint32_t L_1878;
		L_1878 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_1875, L_1876, L_1877, NULL);
		uint32_t* L_1879 = ___0_blockDWords;
		intptr_t L_1880 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)12),NULL));
		int32_t L_1881 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1879, ((intptr_t)il2cpp_codegen_multiply(L_1880, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1874, ((int32_t)il2cpp_codegen_add((int32_t)L_1878, L_1881))));
		uint32_t L_1882 = V_6;
		uint32_t L_1883 = V_6;
		uint32_t L_1884 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1882<<8))|((int32_t)((uint32_t)L_1883>>((int32_t)24))))), (int32_t)L_1884));
		uint32_t L_1885 = V_8;
		uint32_t L_1886 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1885<<((int32_t)10)))|((int32_t)((uint32_t)L_1886>>((int32_t)22)))));
		uint32_t L_1887 = V_5;
		uint32_t L_1888 = V_6;
		uint32_t L_1889 = V_7;
		uint32_t L_1890 = V_8;
		uint32_t L_1891;
		L_1891 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_1888, L_1889, L_1890, NULL);
		uint32_t* L_1892 = ___0_blockDWords;
		intptr_t L_1893 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)15),NULL));
		int32_t L_1894 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1892, ((intptr_t)il2cpp_codegen_multiply(L_1893, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1887, ((int32_t)il2cpp_codegen_add((int32_t)L_1891, L_1894))));
		uint32_t L_1895 = V_5;
		uint32_t L_1896 = V_5;
		uint32_t L_1897 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1895<<5))|((int32_t)((uint32_t)L_1896>>((int32_t)27))))), (int32_t)L_1897));
		uint32_t L_1898 = V_7;
		uint32_t L_1899 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1898<<((int32_t)10)))|((int32_t)((uint32_t)L_1899>>((int32_t)22)))));
		uint32_t L_1900 = V_9;
		uint32_t L_1901 = V_5;
		uint32_t L_1902 = V_6;
		uint32_t L_1903 = V_7;
		uint32_t L_1904;
		L_1904 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_1901, L_1902, L_1903, NULL);
		uint32_t* L_1905 = ___0_blockDWords;
		intptr_t L_1906 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)10),NULL));
		int32_t L_1907 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1905, ((intptr_t)il2cpp_codegen_multiply(L_1906, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1900, ((int32_t)il2cpp_codegen_add((int32_t)L_1904, L_1907))));
		uint32_t L_1908 = V_9;
		uint32_t L_1909 = V_9;
		uint32_t L_1910 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1908<<((int32_t)12)))|((int32_t)((uint32_t)L_1909>>((int32_t)20))))), (int32_t)L_1910));
		uint32_t L_1911 = V_6;
		uint32_t L_1912 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1911<<((int32_t)10)))|((int32_t)((uint32_t)L_1912>>((int32_t)22)))));
		uint32_t L_1913 = V_8;
		uint32_t L_1914 = V_9;
		uint32_t L_1915 = V_5;
		uint32_t L_1916 = V_6;
		uint32_t L_1917;
		L_1917 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_1914, L_1915, L_1916, NULL);
		uint32_t* L_1918 = ___0_blockDWords;
		intptr_t L_1919 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_1920 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1918, ((intptr_t)il2cpp_codegen_multiply(L_1919, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1913, ((int32_t)il2cpp_codegen_add((int32_t)L_1917, L_1920))));
		uint32_t L_1921 = V_8;
		uint32_t L_1922 = V_8;
		uint32_t L_1923 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1921<<((int32_t)9)))|((int32_t)((uint32_t)L_1922>>((int32_t)23))))), (int32_t)L_1923));
		uint32_t L_1924 = V_5;
		uint32_t L_1925 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1924<<((int32_t)10)))|((int32_t)((uint32_t)L_1925>>((int32_t)22)))));
		uint32_t L_1926 = V_7;
		uint32_t L_1927 = V_8;
		uint32_t L_1928 = V_9;
		uint32_t L_1929 = V_5;
		uint32_t L_1930;
		L_1930 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_1927, L_1928, L_1929, NULL);
		uint32_t* L_1931 = ___0_blockDWords;
		int32_t L_1932 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1931, 4))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1926, ((int32_t)il2cpp_codegen_add((int32_t)L_1930, L_1932))));
		uint32_t L_1933 = V_7;
		uint32_t L_1934 = V_7;
		uint32_t L_1935 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1933<<((int32_t)12)))|((int32_t)((uint32_t)L_1934>>((int32_t)20))))), (int32_t)L_1935));
		uint32_t L_1936 = V_9;
		uint32_t L_1937 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_1936<<((int32_t)10)))|((int32_t)((uint32_t)L_1937>>((int32_t)22)))));
		uint32_t L_1938 = V_6;
		uint32_t L_1939 = V_7;
		uint32_t L_1940 = V_8;
		uint32_t L_1941 = V_9;
		uint32_t L_1942;
		L_1942 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_1939, L_1940, L_1941, NULL);
		uint32_t* L_1943 = ___0_blockDWords;
		intptr_t L_1944 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int32_t L_1945 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1943, ((intptr_t)il2cpp_codegen_multiply(L_1944, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1938, ((int32_t)il2cpp_codegen_add((int32_t)L_1942, L_1945))));
		uint32_t L_1946 = V_6;
		uint32_t L_1947 = V_6;
		uint32_t L_1948 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1946<<5))|((int32_t)((uint32_t)L_1947>>((int32_t)27))))), (int32_t)L_1948));
		uint32_t L_1949 = V_8;
		uint32_t L_1950 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_1949<<((int32_t)10)))|((int32_t)((uint32_t)L_1950>>((int32_t)22)))));
		uint32_t L_1951 = V_5;
		uint32_t L_1952 = V_6;
		uint32_t L_1953 = V_7;
		uint32_t L_1954 = V_8;
		uint32_t L_1955;
		L_1955 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_1952, L_1953, L_1954, NULL);
		uint32_t* L_1956 = ___0_blockDWords;
		intptr_t L_1957 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(8,NULL));
		int32_t L_1958 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1956, ((intptr_t)il2cpp_codegen_multiply(L_1957, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1951, ((int32_t)il2cpp_codegen_add((int32_t)L_1955, L_1958))));
		uint32_t L_1959 = V_5;
		uint32_t L_1960 = V_5;
		uint32_t L_1961 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1959<<((int32_t)14)))|((int32_t)((uint32_t)L_1960>>((int32_t)18))))), (int32_t)L_1961));
		uint32_t L_1962 = V_7;
		uint32_t L_1963 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_1962<<((int32_t)10)))|((int32_t)((uint32_t)L_1963>>((int32_t)22)))));
		uint32_t L_1964 = V_9;
		uint32_t L_1965 = V_5;
		uint32_t L_1966 = V_6;
		uint32_t L_1967 = V_7;
		uint32_t L_1968;
		L_1968 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_1965, L_1966, L_1967, NULL);
		uint32_t* L_1969 = ___0_blockDWords;
		intptr_t L_1970 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int32_t L_1971 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1969, ((intptr_t)il2cpp_codegen_multiply(L_1970, 4))))));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1964, ((int32_t)il2cpp_codegen_add((int32_t)L_1968, L_1971))));
		uint32_t L_1972 = V_9;
		uint32_t L_1973 = V_9;
		uint32_t L_1974 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1972<<6))|((int32_t)((uint32_t)L_1973>>((int32_t)26))))), (int32_t)L_1974));
		uint32_t L_1975 = V_6;
		uint32_t L_1976 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_1975<<((int32_t)10)))|((int32_t)((uint32_t)L_1976>>((int32_t)22)))));
		uint32_t L_1977 = V_8;
		uint32_t L_1978 = V_9;
		uint32_t L_1979 = V_5;
		uint32_t L_1980 = V_6;
		uint32_t L_1981;
		L_1981 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_1978, L_1979, L_1980, NULL);
		uint32_t* L_1982 = ___0_blockDWords;
		intptr_t L_1983 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int32_t L_1984 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1982, ((intptr_t)il2cpp_codegen_multiply(L_1983, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1977, ((int32_t)il2cpp_codegen_add((int32_t)L_1981, L_1984))));
		uint32_t L_1985 = V_8;
		uint32_t L_1986 = V_8;
		uint32_t L_1987 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1985<<8))|((int32_t)((uint32_t)L_1986>>((int32_t)24))))), (int32_t)L_1987));
		uint32_t L_1988 = V_5;
		uint32_t L_1989 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_1988<<((int32_t)10)))|((int32_t)((uint32_t)L_1989>>((int32_t)22)))));
		uint32_t L_1990 = V_7;
		uint32_t L_1991 = V_8;
		uint32_t L_1992 = V_9;
		uint32_t L_1993 = V_5;
		uint32_t L_1994;
		L_1994 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_1991, L_1992, L_1993, NULL);
		uint32_t* L_1995 = ___0_blockDWords;
		intptr_t L_1996 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_1997 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_1995, ((intptr_t)il2cpp_codegen_multiply(L_1996, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_1990, ((int32_t)il2cpp_codegen_add((int32_t)L_1994, L_1997))));
		uint32_t L_1998 = V_7;
		uint32_t L_1999 = V_7;
		uint32_t L_2000 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_1998<<((int32_t)13)))|((int32_t)((uint32_t)L_1999>>((int32_t)19))))), (int32_t)L_2000));
		uint32_t L_2001 = V_9;
		uint32_t L_2002 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_2001<<((int32_t)10)))|((int32_t)((uint32_t)L_2002>>((int32_t)22)))));
		uint32_t L_2003 = V_6;
		uint32_t L_2004 = V_7;
		uint32_t L_2005 = V_8;
		uint32_t L_2006 = V_9;
		uint32_t L_2007;
		L_2007 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_2004, L_2005, L_2006, NULL);
		uint32_t* L_2008 = ___0_blockDWords;
		intptr_t L_2009 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)13),NULL));
		int32_t L_2010 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2008, ((intptr_t)il2cpp_codegen_multiply(L_2009, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_2003, ((int32_t)il2cpp_codegen_add((int32_t)L_2007, L_2010))));
		uint32_t L_2011 = V_6;
		uint32_t L_2012 = V_6;
		uint32_t L_2013 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_2011<<6))|((int32_t)((uint32_t)L_2012>>((int32_t)26))))), (int32_t)L_2013));
		uint32_t L_2014 = V_8;
		uint32_t L_2015 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_2014<<((int32_t)10)))|((int32_t)((uint32_t)L_2015>>((int32_t)22)))));
		uint32_t L_2016 = V_5;
		uint32_t L_2017 = V_6;
		uint32_t L_2018 = V_7;
		uint32_t L_2019 = V_8;
		uint32_t L_2020;
		L_2020 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_2017, L_2018, L_2019, NULL);
		uint32_t* L_2021 = ___0_blockDWords;
		intptr_t L_2022 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)14),NULL));
		int32_t L_2023 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2021, ((intptr_t)il2cpp_codegen_multiply(L_2022, 4))))));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_2016, ((int32_t)il2cpp_codegen_add((int32_t)L_2020, L_2023))));
		uint32_t L_2024 = V_5;
		uint32_t L_2025 = V_5;
		uint32_t L_2026 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_2024<<5))|((int32_t)((uint32_t)L_2025>>((int32_t)27))))), (int32_t)L_2026));
		uint32_t L_2027 = V_7;
		uint32_t L_2028 = V_7;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_2027<<((int32_t)10)))|((int32_t)((uint32_t)L_2028>>((int32_t)22)))));
		uint32_t L_2029 = V_9;
		uint32_t L_2030 = V_5;
		uint32_t L_2031 = V_6;
		uint32_t L_2032 = V_7;
		uint32_t L_2033;
		L_2033 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_2030, L_2031, L_2032, NULL);
		uint32_t* L_2034 = ___0_blockDWords;
		int32_t L_2035 = ((int32_t)*(L_2034));
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_2029, ((int32_t)il2cpp_codegen_add((int32_t)L_2033, L_2035))));
		uint32_t L_2036 = V_9;
		uint32_t L_2037 = V_9;
		uint32_t L_2038 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_2036<<((int32_t)15)))|((int32_t)((uint32_t)L_2037>>((int32_t)17))))), (int32_t)L_2038));
		uint32_t L_2039 = V_6;
		uint32_t L_2040 = V_6;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_2039<<((int32_t)10)))|((int32_t)((uint32_t)L_2040>>((int32_t)22)))));
		uint32_t L_2041 = V_8;
		uint32_t L_2042 = V_9;
		uint32_t L_2043 = V_5;
		uint32_t L_2044 = V_6;
		uint32_t L_2045;
		L_2045 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_2042, L_2043, L_2044, NULL);
		uint32_t* L_2046 = ___0_blockDWords;
		intptr_t L_2047 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_2048 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2046, ((intptr_t)il2cpp_codegen_multiply(L_2047, 4))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_2041, ((int32_t)il2cpp_codegen_add((int32_t)L_2045, L_2048))));
		uint32_t L_2049 = V_8;
		uint32_t L_2050 = V_8;
		uint32_t L_2051 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_2049<<((int32_t)13)))|((int32_t)((uint32_t)L_2050>>((int32_t)19))))), (int32_t)L_2051));
		uint32_t L_2052 = V_5;
		uint32_t L_2053 = V_5;
		V_5 = ((int32_t)(((int32_t)((int32_t)L_2052<<((int32_t)10)))|((int32_t)((uint32_t)L_2053>>((int32_t)22)))));
		uint32_t L_2054 = V_7;
		uint32_t L_2055 = V_8;
		uint32_t L_2056 = V_9;
		uint32_t L_2057 = V_5;
		uint32_t L_2058;
		L_2058 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_2055, L_2056, L_2057, NULL);
		uint32_t* L_2059 = ___0_blockDWords;
		intptr_t L_2060 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)9),NULL));
		int32_t L_2061 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2059, ((intptr_t)il2cpp_codegen_multiply(L_2060, 4))))));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_2054, ((int32_t)il2cpp_codegen_add((int32_t)L_2058, L_2061))));
		uint32_t L_2062 = V_7;
		uint32_t L_2063 = V_7;
		uint32_t L_2064 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_2062<<((int32_t)11)))|((int32_t)((uint32_t)L_2063>>((int32_t)21))))), (int32_t)L_2064));
		uint32_t L_2065 = V_9;
		uint32_t L_2066 = V_9;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_2065<<((int32_t)10)))|((int32_t)((uint32_t)L_2066>>((int32_t)22)))));
		uint32_t L_2067 = V_6;
		uint32_t L_2068 = V_7;
		uint32_t L_2069 = V_8;
		uint32_t L_2070 = V_9;
		uint32_t L_2071;
		L_2071 = RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679(L_2068, L_2069, L_2070, NULL);
		uint32_t* L_2072 = ___0_blockDWords;
		intptr_t L_2073 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)11),NULL));
		int32_t L_2074 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2072, ((intptr_t)il2cpp_codegen_multiply(L_2073, 4))))));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_2067, ((int32_t)il2cpp_codegen_add((int32_t)L_2071, L_2074))));
		uint32_t L_2075 = V_6;
		uint32_t L_2076 = V_6;
		uint32_t L_2077 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_2075<<((int32_t)11)))|((int32_t)((uint32_t)L_2076>>((int32_t)21))))), (int32_t)L_2077));
		uint32_t L_2078 = V_8;
		uint32_t L_2079 = V_8;
		V_8 = ((int32_t)(((int32_t)((int32_t)L_2078<<((int32_t)10)))|((int32_t)((uint32_t)L_2079>>((int32_t)22)))));
		uint32_t L_2080 = V_8;
		uint32_t L_2081 = V_2;
		uint32_t* L_2082 = ___1_state;
		int32_t L_2083 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2082, 4))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_2080, ((int32_t)il2cpp_codegen_add((int32_t)L_2081, L_2083))));
		uint32_t* L_2084 = ___1_state;
		uint32_t* L_2085 = ___1_state;
		intptr_t L_2086 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_2087 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2085, ((intptr_t)il2cpp_codegen_multiply(L_2086, 4))))));
		uint32_t L_2088 = V_3;
		uint32_t L_2089 = V_9;
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2084, 4)))) = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_2087, (int32_t)L_2088)), (int32_t)L_2089));
		uint32_t* L_2090 = ___1_state;
		intptr_t L_2091 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		uint32_t* L_2092 = ___1_state;
		intptr_t L_2093 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_2094 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2092, ((intptr_t)il2cpp_codegen_multiply(L_2093, 4))))));
		uint32_t L_2095 = V_4;
		uint32_t L_2096 = V_5;
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2090, ((intptr_t)il2cpp_codegen_multiply(L_2091, 4)))))) = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_2094, (int32_t)L_2095)), (int32_t)L_2096));
		uint32_t* L_2097 = ___1_state;
		intptr_t L_2098 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		uint32_t* L_2099 = ___1_state;
		intptr_t L_2100 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_2101 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2099, ((intptr_t)il2cpp_codegen_multiply(L_2100, 4))))));
		uint32_t L_2102 = V_0;
		uint32_t L_2103 = V_6;
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2097, ((intptr_t)il2cpp_codegen_multiply(L_2098, 4)))))) = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_2101, (int32_t)L_2102)), (int32_t)L_2103));
		uint32_t* L_2104 = ___1_state;
		intptr_t L_2105 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		uint32_t* L_2106 = ___1_state;
		int32_t L_2107 = ((int32_t)*(L_2106));
		uint32_t L_2108 = V_1;
		uint32_t L_2109 = V_7;
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2104, ((intptr_t)il2cpp_codegen_multiply(L_2105, 4)))))) = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_2107, (int32_t)L_2108)), (int32_t)L_2109));
		uint32_t* L_2110 = ___1_state;
		uint32_t L_2111 = V_8;
		*(((int32_t*)L_2110)) = ((int32_t)L_2111);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RIPEMD160Managed_F_mDD20ED6C4BA658FD3EC3C178277E560A4BC99679 (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		uint32_t L_1 = ___1_y;
		uint32_t L_2 = ___2_z;
		return ((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_1))^(int32_t)L_2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RIPEMD160Managed_G_m29899502ABE7C9F66583D5BF7674D55BF5295307 (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		uint32_t L_1 = ___1_y;
		uint32_t L_2 = ___0_x;
		uint32_t L_3 = ___2_z;
		return ((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))|((int32_t)(((~((int32_t)L_2)))&(int32_t)L_3))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RIPEMD160Managed_H_m422F354E67D718FB2E43E5D74F3E2E449158E4CB (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		uint32_t L_1 = ___1_y;
		uint32_t L_2 = ___2_z;
		return ((int32_t)(((int32_t)((int32_t)L_0|((~((int32_t)L_1)))))^(int32_t)L_2));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RIPEMD160Managed_I_m7E3D4812FC9A003ADF92E275DC48ACD135D7B68E (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		uint32_t L_1 = ___2_z;
		uint32_t L_2 = ___1_y;
		uint32_t L_3 = ___2_z;
		return ((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))|((int32_t)((int32_t)L_2&((~((int32_t)L_3)))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t RIPEMD160Managed_J_m675965BE98C7BE99B4B229AAAEF52650671FD924 (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		uint32_t L_1 = ___1_y;
		uint32_t L_2 = ___2_z;
		return ((int32_t)((int32_t)L_0^((int32_t)((int32_t)L_1|((~((int32_t)L_2)))))));
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
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke(const RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF& unmarshaled, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_pinvoke& marshaled)
{
	marshaled.___Exponent = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Exponent);
	marshaled.___Modulus = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Modulus);
	marshaled.___P = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___P);
	marshaled.___Q = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Q);
	marshaled.___DP = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___DP);
	marshaled.___DQ = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___DQ);
	marshaled.___InverseQ = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___InverseQ);
	marshaled.___D = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___D);
}
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_back(const RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_pinvoke& marshaled, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF& unmarshaled)
{
	unmarshaled.___Exponent = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Exponent);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Exponent), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Exponent));
	unmarshaled.___Modulus = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Modulus);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Modulus), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Modulus));
	unmarshaled.___P = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___P);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___P), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___P));
	unmarshaled.___Q = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Q);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Q), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Q));
	unmarshaled.___DP = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___DP);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DP), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___DP));
	unmarshaled.___DQ = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___DQ);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DQ), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___DQ));
	unmarshaled.___InverseQ = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___InverseQ);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___InverseQ), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___InverseQ));
	unmarshaled.___D = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___D);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___D), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___D));
}
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_cleanup(RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Exponent);
	marshaled.___Exponent = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Modulus);
	marshaled.___Modulus = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___P);
	marshaled.___P = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Q);
	marshaled.___Q = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___DP);
	marshaled.___DP = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___DQ);
	marshaled.___DQ = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___InverseQ);
	marshaled.___InverseQ = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___D);
	marshaled.___D = NULL;
}
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_com(const RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF& unmarshaled, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_com& marshaled)
{
	marshaled.___Exponent = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Exponent);
	marshaled.___Modulus = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Modulus);
	marshaled.___P = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___P);
	marshaled.___Q = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Q);
	marshaled.___DP = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___DP);
	marshaled.___DQ = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___DQ);
	marshaled.___InverseQ = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___InverseQ);
	marshaled.___D = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___D);
}
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_com_back(const RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_com& marshaled, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF& unmarshaled)
{
	unmarshaled.___Exponent = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Exponent);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Exponent), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Exponent));
	unmarshaled.___Modulus = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Modulus);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Modulus), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Modulus));
	unmarshaled.___P = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___P);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___P), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___P));
	unmarshaled.___Q = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Q);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Q), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Q));
	unmarshaled.___DP = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___DP);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DP), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___DP));
	unmarshaled.___DQ = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___DQ);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___DQ), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___DQ));
	unmarshaled.___InverseQ = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___InverseQ);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___InverseQ), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___InverseQ));
	unmarshaled.___D = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___D);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___D), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___D));
}
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_com_cleanup(RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Exponent);
	marshaled.___Exponent = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Modulus);
	marshaled.___Modulus = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___P);
	marshaled.___P = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Q);
	marshaled.___Q = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___DP);
	marshaled.___DP = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___DQ);
	marshaled.___DQ = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___InverseQ);
	marshaled.___InverseQ = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___D);
	marshaled.___D = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSA__ctor_mBBB2BDB3545EC263517C4882739F3D79990F7630 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* __this, const RuntimeMethod* method) 
{
	{
		AsymmetricAlgorithm__ctor_m6B15CBCEA8C5C867059BBEE94EF8CACDE106A143(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* RSA_Create_m37E9CF2FC80F578AE254DA559D23596065D741C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_0 = (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)il2cpp_codegen_object_new(RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		RSACryptoServiceProvider__ctor_mE4BC404364B89F41C863EC3860ED4B9D7DD7A06F(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RSA_EncryptValue_m3FE5D9069FDBF156E443C2045216C1F98B9BCA03 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgb, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF2F225F8883699F8AB0D8A2E36E1F91F3C91320A)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSA_EncryptValue_m3FE5D9069FDBF156E443C2045216C1F98B9BCA03_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSA_FromXmlString_m2D91EC1FA91EFE3AB2E6A83CA6E7EA19E4AD0E3E (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* __this, String_t* ___0_xmlString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t6A7CE2538ABB8199316C04EA7019A63D2F863378_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral085EB94908CA7962D8666204E1774BC6C4DAFE93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3E7AAC4DACF245D01365DAFBFC4E7CC149D9D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C165AC935D6227499C3BBAAE617813538CCD53F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB09A7EB2043BD75CFD923CD1922392FD00DBA589);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB786F94A76805784693B800EE79057F12D559607);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	{
		String_t* L_0 = ___0_xmlString;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87254B87EFE7A82850E53C9703C3E9FAF7F20C3F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSA_FromXmlString_m2D91EC1FA91EFE3AB2E6A83CA6E7EA19E4AD0E3E_RuntimeMethod_var)));
	}

IL_000e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF));
		String_t* L_2 = ___0_xmlString;
		Parser_t6A7CE2538ABB8199316C04EA7019A63D2F863378* L_3 = (Parser_t6A7CE2538ABB8199316C04EA7019A63D2F863378*)il2cpp_codegen_object_new(Parser_t6A7CE2538ABB8199316C04EA7019A63D2F863378_il2cpp_TypeInfo_var);
		Parser__ctor_m6302B6B3CBD47EB25810F7DA50CAB0EDDAB2A039(L_3, L_2, NULL);
		NullCheck(L_3);
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_4;
		L_4 = Parser_GetTopElement_m59236914846FFF7D0EA00722392C9583FD74B479(L_3, NULL);
		V_1 = L_4;
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SecurityElement_SearchForTextOfLocalName_m74A19EC2C8BA0424B34EDC6E6D8CB765D81067B1(L_5, _stringLiteralB786F94A76805784693B800EE79057F12D559607, NULL);
		V_2 = L_6;
		String_t* L_7 = V_2;
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78)));
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB786F94A76805784693B800EE79057F12D559607)));
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB786F94A76805784693B800EE79057F12D559607)));
		String_t* L_11;
		L_11 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EDB96BC7FB13DCA5DD4D432246DFF4E4C2768AF)), L_10, NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_12 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSA_FromXmlString_m2D91EC1FA91EFE3AB2E6A83CA6E7EA19E4AD0E3E_RuntimeMethod_var)));
	}

IL_0057:
	{
		String_t* L_13 = V_2;
		String_t* L_14;
		L_14 = Utils_DiscardWhiteSpaces_m7943E6B191C018429583BADB995B6CBF8DDE3792(L_13, NULL);
		CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_14, NULL);
		(&V_0)->___Modulus = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Modulus), (void*)L_15);
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = SecurityElement_SearchForTextOfLocalName_m74A19EC2C8BA0424B34EDC6E6D8CB765D81067B1(L_16, _stringLiteral085EB94908CA7962D8666204E1774BC6C4DAFE93, NULL);
		V_3 = L_17;
		String_t* L_18 = V_3;
		if (L_18)
		{
			goto IL_009e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78)));
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A4E411F65E7CA15BA995630065445903EBE9E78)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral085EB94908CA7962D8666204E1774BC6C4DAFE93)));
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral085EB94908CA7962D8666204E1774BC6C4DAFE93)));
		String_t* L_22;
		L_22 = Environment_GetResourceString_m387DBA146605FD20F6627F5B90483D180616E259(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EDB96BC7FB13DCA5DD4D432246DFF4E4C2768AF)), L_21, NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_23 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_23, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSA_FromXmlString_m2D91EC1FA91EFE3AB2E6A83CA6E7EA19E4AD0E3E_RuntimeMethod_var)));
	}

IL_009e:
	{
		String_t* L_24 = V_3;
		String_t* L_25;
		L_25 = Utils_DiscardWhiteSpaces_m7943E6B191C018429583BADB995B6CBF8DDE3792(L_24, NULL);
		CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_25, NULL);
		(&V_0)->___Exponent = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Exponent), (void*)L_26);
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_27 = V_1;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = SecurityElement_SearchForTextOfLocalName_m74A19EC2C8BA0424B34EDC6E6D8CB765D81067B1(L_27, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34, NULL);
		V_4 = L_28;
		String_t* L_29 = V_4;
		if (!L_29)
		{
			goto IL_00d4;
		}
	}
	{
		String_t* L_30 = V_4;
		String_t* L_31;
		L_31 = Utils_DiscardWhiteSpaces_m7943E6B191C018429583BADB995B6CBF8DDE3792(L_30, NULL);
		CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_31, NULL);
		(&V_0)->___P = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___P), (void*)L_32);
	}

IL_00d4:
	{
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_33 = V_1;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = SecurityElement_SearchForTextOfLocalName_m74A19EC2C8BA0424B34EDC6E6D8CB765D81067B1(L_33, _stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90, NULL);
		V_5 = L_34;
		String_t* L_35 = V_5;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_36 = V_5;
		String_t* L_37;
		L_37 = Utils_DiscardWhiteSpaces_m7943E6B191C018429583BADB995B6CBF8DDE3792(L_36, NULL);
		CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_37, NULL);
		(&V_0)->___Q = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Q), (void*)L_38);
	}

IL_00f8:
	{
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_39 = V_1;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = SecurityElement_SearchForTextOfLocalName_m74A19EC2C8BA0424B34EDC6E6D8CB765D81067B1(L_39, _stringLiteralB09A7EB2043BD75CFD923CD1922392FD00DBA589, NULL);
		V_6 = L_40;
		String_t* L_41 = V_6;
		if (!L_41)
		{
			goto IL_011c;
		}
	}
	{
		String_t* L_42 = V_6;
		String_t* L_43;
		L_43 = Utils_DiscardWhiteSpaces_m7943E6B191C018429583BADB995B6CBF8DDE3792(L_42, NULL);
		CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
		L_44 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_43, NULL);
		(&V_0)->___DP = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___DP), (void*)L_44);
	}

IL_011c:
	{
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_45 = V_1;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = SecurityElement_SearchForTextOfLocalName_m74A19EC2C8BA0424B34EDC6E6D8CB765D81067B1(L_45, _stringLiteral4C165AC935D6227499C3BBAAE617813538CCD53F, NULL);
		V_7 = L_46;
		String_t* L_47 = V_7;
		if (!L_47)
		{
			goto IL_0140;
		}
	}
	{
		String_t* L_48 = V_7;
		String_t* L_49;
		L_49 = Utils_DiscardWhiteSpaces_m7943E6B191C018429583BADB995B6CBF8DDE3792(L_48, NULL);
		CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_49, NULL);
		(&V_0)->___DQ = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___DQ), (void*)L_50);
	}

IL_0140:
	{
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_51 = V_1;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = SecurityElement_SearchForTextOfLocalName_m74A19EC2C8BA0424B34EDC6E6D8CB765D81067B1(L_51, _stringLiteral1B3E7AAC4DACF245D01365DAFBFC4E7CC149D9D4, NULL);
		V_8 = L_52;
		String_t* L_53 = V_8;
		if (!L_53)
		{
			goto IL_0164;
		}
	}
	{
		String_t* L_54 = V_8;
		String_t* L_55;
		L_55 = Utils_DiscardWhiteSpaces_m7943E6B191C018429583BADB995B6CBF8DDE3792(L_54, NULL);
		CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56;
		L_56 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_55, NULL);
		(&V_0)->___InverseQ = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___InverseQ), (void*)L_56);
	}

IL_0164:
	{
		SecurityElement_tA7337C2977BEC2323B0A3EE95C1C6422013F4E55* L_57 = V_1;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = SecurityElement_SearchForTextOfLocalName_m74A19EC2C8BA0424B34EDC6E6D8CB765D81067B1(L_57, _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, NULL);
		V_9 = L_58;
		String_t* L_59 = V_9;
		if (!L_59)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_60 = V_9;
		String_t* L_61;
		L_61 = Utils_DiscardWhiteSpaces_m7943E6B191C018429583BADB995B6CBF8DDE3792(L_60, NULL);
		CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62;
		L_62 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_61, NULL);
		(&V_0)->___D = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___D), (void*)L_62);
	}

IL_0188:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_63 = V_0;
		VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(12, __this, L_63);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RSA_ToXmlString_m0B95E2C288592009B53F18C5F417979D84815444 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* __this, bool ___0_includePrivateParameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04F339E2067485077633DE2026F6468EC3550949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05C15450D2F0DDDB7162178E1DBFA769201F00D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09EF2FDC3FAE6054A3CB18177E629410B6F521BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BB255AEC7801EA23874053F71A4B27CAE62FA4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F527C4F0133D516BCA172E511F39D05622AF8D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral364C07934203B37A9BDE4465A48ACF11B03DBF88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA8506F2D4A43268C4972888A4AB14A363FFC93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral754E9D0DA5D0AA6E78CF7A6A990E76FC40CB2117);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral843721C7127A167D5AB501DA6E84766B8AA89A08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85F02773B30D7E03E02058A46638441028F4AD00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A82BAAC370D79146E0671264D84DF2EE0A910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral957AD0C0A464CD75ADA45D0ADE41A7DE8D134D5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC4897A73F30B50F7A20E6701A6556743DEC3465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6ECC951044973F59B3140CDD58CEABD8A4A8855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB87AD62156342FD78943479E2E2D70AA96017CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCE0872F5165E6C8FE1F549A5FF8610489DA81A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE156F349FFEB7E37AADF61D5759C8AD59E404A4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05661A5CE0E6BCE422902F2071C70CE8276C2CE);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	StringBuilder_t* V_1 = NULL;
	{
		bool L_0 = ___0_includePrivateParameters;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_1;
		L_1 = VirtualFuncInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF, bool >::Invoke(11, __this, L_0);
		V_0 = L_1;
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		V_1 = L_2;
		StringBuilder_t* L_3 = V_1;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralAC4897A73F30B50F7A20E6701A6556743DEC3465, NULL);
		StringBuilder_t* L_5 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6.___Modulus;
		CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_8;
		L_8 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralBB87AD62156342FD78943479E2E2D70AA96017CD, L_8, _stringLiteralE156F349FFEB7E37AADF61D5759C8AD59E404A4D, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, L_9, NULL);
		StringBuilder_t* L_11 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12.___Exponent;
		String_t* L_14;
		L_14 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral04F339E2067485077633DE2026F6468EC3550949, L_14, _stringLiteral912A82BAAC370D79146E0671264D84DF2EE0A910, NULL);
		NullCheck(L_11);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_15, NULL);
		bool L_17 = ___0_includePrivateParameters;
		if (!L_17)
		{
			goto IL_0128;
		}
	}
	{
		StringBuilder_t* L_18 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_19 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = L_19.___P;
		CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_21;
		L_21 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_20, NULL);
		String_t* L_22;
		L_22 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral843721C7127A167D5AB501DA6E84766B8AA89A08, L_21, _stringLiteral754E9D0DA5D0AA6E78CF7A6A990E76FC40CB2117, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, L_22, NULL);
		StringBuilder_t* L_24 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_25 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = L_25.___Q;
		String_t* L_27;
		L_27 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralBCE0872F5165E6C8FE1F549A5FF8610489DA81A0, L_27, _stringLiteral85F02773B30D7E03E02058A46638441028F4AD00, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_28, NULL);
		StringBuilder_t* L_30 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_31 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = L_31.___DP;
		String_t* L_33;
		L_33 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_32, NULL);
		String_t* L_34;
		L_34 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB6ECC951044973F59B3140CDD58CEABD8A4A8855, L_33, _stringLiteralF05661A5CE0E6BCE422902F2071C70CE8276C2CE, NULL);
		NullCheck(L_30);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, L_34, NULL);
		StringBuilder_t* L_36 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_37 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = L_37.___DQ;
		String_t* L_39;
		L_39 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_38, NULL);
		String_t* L_40;
		L_40 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral957AD0C0A464CD75ADA45D0ADE41A7DE8D134D5D, L_39, _stringLiteral09EF2FDC3FAE6054A3CB18177E629410B6F521BD, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, L_40, NULL);
		StringBuilder_t* L_42 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_43 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = L_43.___InverseQ;
		String_t* L_45;
		L_45 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_44, NULL);
		String_t* L_46;
		L_46 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral05C15450D2F0DDDB7162178E1DBFA769201F00D7, L_45, _stringLiteral364C07934203B37A9BDE4465A48ACF11B03DBF88, NULL);
		NullCheck(L_42);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_42, L_46, NULL);
		StringBuilder_t* L_48 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_49 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = L_49.___D;
		String_t* L_51;
		L_51 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_50, NULL);
		String_t* L_52;
		L_52 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral5DA8506F2D4A43268C4972888A4AB14A363FFC93, L_51, _stringLiteral1BB255AEC7801EA23874053F71A4B27CAE62FA4F, NULL);
		NullCheck(L_48);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_48, L_52, NULL);
	}

IL_0128:
	{
		StringBuilder_t* L_54 = V_1;
		NullCheck(L_54);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_54, _stringLiteral1F527C4F0133D516BCA172E511F39D05622AF8D5, NULL);
		StringBuilder_t* L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_56);
		return L_57;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RSACryptoServiceProvider_get_UseMachineKeyStore_m3C3D83294EA42CD6E3EA2C7DFE42E39F29895D04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_StaticFields*)il2cpp_codegen_static_fields_for(RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var))->___s_UseMachineKeyStore;
		il2cpp_codegen_memory_barrier();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_mE4BC404364B89F41C863EC3860ED4B9D7DD7A06F (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, const RuntimeMethod* method) 
{
	{
		RSACryptoServiceProvider__ctor_m74A4B904FEAADB8D68D54E0DD680AE532042FFE9(__this, ((int32_t)1024), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_mA3DCFA0547797710101AC5DE6A3A0396EADF45CF (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* ___0_parameters, const RuntimeMethod* method) 
{
	{
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_0 = ___0_parameters;
		RSACryptoServiceProvider__ctor_m95594DB8505C25F75C6D4E0672AB7919D50E8B1B(__this, ((int32_t)1024), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m74A4B904FEAADB8D68D54E0DD680AE532042FFE9 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, int32_t ___0_dwKeySize, const RuntimeMethod* method) 
{
	{
		__this->___privateKeyExportable = (bool)1;
		RSA__ctor_mBBB2BDB3545EC263517C4882739F3D79990F7630(__this, NULL);
		int32_t L_0 = ___0_dwKeySize;
		RSACryptoServiceProvider_Common_mB4886190942D48EED5F08EAA87516FA7BC7EE37B(__this, L_0, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m95594DB8505C25F75C6D4E0672AB7919D50E8B1B (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, int32_t ___0_dwKeySize, CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* ___1_parameters, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		__this->___privateKeyExportable = (bool)1;
		RSA__ctor_mBBB2BDB3545EC263517C4882739F3D79990F7630(__this, NULL);
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_0 = ___1_parameters;
		V_0 = (bool)((!(((RuntimeObject*)(CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		int32_t L_1 = ___0_dwKeySize;
		bool L_2 = V_0;
		RSACryptoServiceProvider_Common_mB4886190942D48EED5F08EAA87516FA7BC7EE37B(__this, L_1, L_2, NULL);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_4 = ___1_parameters;
		RSACryptoServiceProvider_Common_mFBF1A75D8845D897D1D7918FEDA9E43ED5C60037(__this, L_4, NULL);
	}

IL_0024:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider_Common_mB4886190942D48EED5F08EAA87516FA7BC7EE37B (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, int32_t ___0_dwKeySize, bool ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_OnKeyGenerated_mF4F409622B100A87075A653C416A882CAB51030F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSAManaged_t897B29EF76C459408E11A42680C942716D809001_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* V_0 = NULL;
	{
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_0 = (KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03*)SZArrayNew(KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03_il2cpp_TypeInfo_var, (uint32_t)1);
		((AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)__this)->___LegalKeySizesValue = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)__this)->___LegalKeySizesValue), (void*)L_0);
		KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* L_1 = ((AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)__this)->___LegalKeySizesValue;
		KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4* L_2 = (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)il2cpp_codegen_object_new(KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4_il2cpp_TypeInfo_var);
		KeySizes__ctor_m0488C1FC71E4A417E16EA1E06FC24F4D7DC80104(L_2, ((int32_t)384), ((int32_t)16384), 8, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeySizes_t4AE3EB919A5788F0545B70517859944B65712CB4*)L_2);
		int32_t L_3 = ___0_dwKeySize;
		AsymmetricAlgorithm_set_KeySize_mD1671D252CCA9F1E78F865817F4F13B157BDB5AD(__this, L_3, NULL);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6, __this);
		RSAManaged_t897B29EF76C459408E11A42680C942716D809001* L_5 = (RSAManaged_t897B29EF76C459408E11A42680C942716D809001*)il2cpp_codegen_object_new(RSAManaged_t897B29EF76C459408E11A42680C942716D809001_il2cpp_TypeInfo_var);
		RSAManaged__ctor_m4B552B282B99F6BC184D8CB99FF5A2ECE82714C3(L_5, L_4, NULL);
		__this->___rsa = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rsa), (void*)L_5);
		RSAManaged_t897B29EF76C459408E11A42680C942716D809001* L_6 = __this->___rsa;
		KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC* L_7 = (KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC*)il2cpp_codegen_object_new(KeyGeneratedEventHandler_tB6F6C235FC6C71F4B5F6D6C87A5E4A38BC3549FC_il2cpp_TypeInfo_var);
		KeyGeneratedEventHandler__ctor_m5175361C70B5DFE4CDDE90986969DCDF098DD58F(L_7, __this, (intptr_t)((void*)RSACryptoServiceProvider_OnKeyGenerated_mF4F409622B100A87075A653C416A882CAB51030F_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		RSAManaged_add_KeyGenerated_m7FA3B020FB6D782A60C45165A1B753D9EC4549A2(L_6, L_7, NULL);
		bool L_8 = ___1_parameters;
		__this->___persistKey = L_8;
		bool L_9 = ___1_parameters;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		return;
	}

IL_005e:
	{
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_10 = (CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3*)il2cpp_codegen_object_new(CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3_il2cpp_TypeInfo_var);
		CspParameters__ctor_m13501EC2E6431EAB226063DACD25AB408DD954C8(L_10, 1, NULL);
		V_0 = L_10;
		bool L_11;
		L_11 = RSACryptoServiceProvider_get_UseMachineKeyStore_m3C3D83294EA42CD6E3EA2C7DFE42E39F29895D04(NULL);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_12 = V_0;
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14 = L_13->___m_flags;
		NullCheck(L_13);
		CspParameters_set_Flags_m9C1F8339A1C321C6EDCB76E6038B7786D9EA7F6A(L_13, ((int32_t)(L_14|1)), NULL);
	}

IL_007a:
	{
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_15 = V_0;
		KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* L_16 = (KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6*)il2cpp_codegen_object_new(KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6_il2cpp_TypeInfo_var);
		KeyPairPersistence__ctor_mEDAD0CB8925F5188D527B6FF85B481D94DEDD5DC(L_16, L_15, NULL);
		__this->___store = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___store), (void*)L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider_Common_mFBF1A75D8845D897D1D7918FEDA9E43ED5C60037 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_0 = ___0_p;
		KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* L_1 = (KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6*)il2cpp_codegen_object_new(KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6_il2cpp_TypeInfo_var);
		KeyPairPersistence__ctor_mEDAD0CB8925F5188D527B6FF85B481D94DEDD5DC(L_1, L_0, NULL);
		__this->___store = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___store), (void*)L_1);
		KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* L_2 = __this->___store;
		NullCheck(L_2);
		bool L_3;
		L_3 = KeyPairPersistence_Load_m54CA39F726BE9A2A0E1F68C36ED67FA3A4C49A78(L_2, NULL);
		V_0 = L_3;
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_4 = ___0_p;
		NullCheck(L_4);
		int32_t L_5 = L_4->___m_flags;
		CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_6 = ___0_p;
		NullCheck(L_6);
		int32_t L_7 = L_6->___m_flags;
		__this->___privateKeyExportable = (bool)((((int32_t)((int32_t)(L_7&4))) == ((int32_t)0))? 1 : 0);
		if (!((!(((uint32_t)((int32_t)(L_5&8))) <= ((uint32_t)0)))? 1 : 0))
		{
			goto IL_0044;
		}
	}
	{
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_9 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral882AD41FD98E301986427165C0B4D87BA813F51E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSACryptoServiceProvider_Common_mFBF1A75D8845D897D1D7918FEDA9E43ED5C60037_RuntimeMethod_var)));
	}

IL_0044:
	{
		KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* L_10 = __this->___store;
		NullCheck(L_10);
		String_t* L_11 = L_10->____keyvalue;
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		__this->___persisted = (bool)1;
		KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* L_12 = __this->___store;
		NullCheck(L_12);
		String_t* L_13 = L_12->____keyvalue;
		VirtualActionInvoker1< String_t* >::Invoke(8, __this, L_13);
	}

IL_0069:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider_Finalize_m310FBA3F11B6E91D9760FF5062803D2EF5A7BA09 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RSACryptoServiceProvider_get_KeySize_mC7FB61738E1B657A1CBD1E238D43C242455E6040 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, const RuntimeMethod* method) 
{
	{
		RSAManaged_t897B29EF76C459408E11A42680C942716D809001* L_0 = __this->___rsa;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ((AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)__this)->___KeySizeValue;
		return L_1;
	}

IL_000f:
	{
		RSAManaged_t897B29EF76C459408E11A42680C942716D809001* L_2 = __this->___rsa;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RSACryptoServiceProvider_get_PublicOnly_mA9FB1ABFDF5D4E7355DC09980EF5C2EEF6236504 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, const RuntimeMethod* method) 
{
	{
		RSAManaged_t897B29EF76C459408E11A42680C942716D809001* L_0 = __this->___rsa;
		NullCheck(L_0);
		bool L_1;
		L_1 = RSAManaged_get_PublicOnly_m342FC195A5AADA4012C269D2F45486C5729EFE6F(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RSACryptoServiceProvider_EncryptValue_m9597A92349632F5A2F2C053300ECA00308AD7445 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgb, const RuntimeMethod* method) 
{
	{
		RSAManaged_t897B29EF76C459408E11A42680C942716D809001* L_0 = __this->___rsa;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_rgb;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10, L_0, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF RSACryptoServiceProvider_ExportParameters_m8980F0F7F7040DD1AE134A388DCDAD85200C4997 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, bool ___0_includePrivateParameters, const RuntimeMethod* method) 
{
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = ___0_includePrivateParameters;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = __this->___privateKeyExportable;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_2 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97B6B54C4BC93ACD2AE3E79C7D8301B9848A9ACA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSACryptoServiceProvider_ExportParameters_m8980F0F7F7040DD1AE134A388DCDAD85200C4997_RuntimeMethod_var)));
	}

IL_0016:
	{
		RSAManaged_t897B29EF76C459408E11A42680C942716D809001* L_3 = __this->___rsa;
		bool L_4 = ___0_includePrivateParameters;
		NullCheck(L_3);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_5;
		L_5 = VirtualFuncInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF, bool >::Invoke(11, L_3, L_4);
		V_0 = L_5;
		bool L_6 = ___0_includePrivateParameters;
		if (!L_6)
		{
			goto IL_006c;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7.___D;
		if (L_8)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD83E6451A66A42CA6C15A0E72F329277C30648E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSACryptoServiceProvider_ExportParameters_m8980F0F7F7040DD1AE134A388DCDAD85200C4997_RuntimeMethod_var)));
	}

IL_0039:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10.___P;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12.___Q;
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14.___DP;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16.___DQ;
		if (!L_17)
		{
			goto IL_0061;
		}
	}
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_18 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_18.___InverseQ;
		if (L_19)
		{
			goto IL_006c;
		}
	}

IL_0061:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_20 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1009529A874680F74C20466A4DC605BB5FBE0343)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSACryptoServiceProvider_ExportParameters_m8980F0F7F7040DD1AE134A388DCDAD85200C4997_RuntimeMethod_var)));
	}

IL_006c:
	{
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider_ImportParameters_m8C78A6FB239B313820DA1B4ABD177B1913BC157C (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF ___0_parameters, const RuntimeMethod* method) 
{
	{
		RSAManaged_t897B29EF76C459408E11A42680C942716D809001* L_0 = __this->___rsa;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_1 = ___0_parameters;
		NullCheck(L_0);
		VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(12, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RSACryptoServiceProvider_GetHashNameFromOID_m65191D5425D9DFB12648C9B96D29092863E6D5CF (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, String_t* ___0_oid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B31027F164515A1950B5D7471AE7856BE543763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42F629CC32087815BDEE088698E50CE910A82D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral683A95818280F9859694F418A2FD0A817678C9DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB16364632FFDA7CF8AB0EF198C603812CB7ECD94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDABBB9C036193D85D6C01708C64DD345BCE1FCC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_oid;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralB16364632FFDA7CF8AB0EF198C603812CB7ECD94, NULL);
		if (L_1)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_2 = ___0_oid;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral42F629CC32087815BDEE088698E50CE910A82D86, NULL);
		if (L_3)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_4 = ___0_oid;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral0B31027F164515A1950B5D7471AE7856BE543763, NULL);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_6 = ___0_oid;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralDABBB9C036193D85D6C01708C64DD345BCE1FCC4, NULL);
		if (L_7)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_8 = ___0_oid;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral683A95818280F9859694F418A2FD0A817678C9DB, NULL);
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0061;
	}

IL_0043:
	{
		return _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B;
	}

IL_0049:
	{
		return _stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17;
	}

IL_004f:
	{
		return _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
	}

IL_0055:
	{
		return _stringLiteral12C0D00507D5556F04E6640916CA4AAF502616A1;
	}

IL_005b:
	{
		return _stringLiteralDD9C7849851C546319ED5DCC821A7B730DE8FF73;
	}

IL_0061:
	{
		String_t* L_10 = ___0_oid;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral421D87CB39AEFB620F4500E914A7C45D02B4E8B1)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_12 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSACryptoServiceProvider_GetHashNameFromOID_m65191D5425D9DFB12648C9B96D29092863E6D5CF_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RSACryptoServiceProvider_VerifyHash_m8638C767565FA34974E2537EA44FBD30AE796ECE (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbHash, String_t* ___1_str, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_rgbSignature, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PKCS1_t452C52E34A25E358B56E2A83A3ABEC0FF36EBF35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PKCS1_t452C52E34A25E358B56E2A83A3ABEC0FF36EBF35_StaticInit);
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* V_0 = NULL;
	String_t* G_B7_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbHash;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C9F4D0749C191AA058D272D4A8D657770F4EC47)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSACryptoServiceProvider_VerifyHash_m8638C767565FA34974E2537EA44FBD30AE796ECE_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_rgbSignature;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral924AEFB6378CB06F66BFB22C0F29341E17E55FBA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSACryptoServiceProvider_VerifyHash_m8638C767565FA34974E2537EA44FBD30AE796ECE_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = ___1_str;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = ___1_str;
		String_t* L_6;
		L_6 = RSACryptoServiceProvider_GetHashNameFromOID_m65191D5425D9DFB12648C9B96D29092863E6D5CF(__this, L_5, NULL);
		G_B7_0 = L_6;
		goto IL_002d;
	}

IL_0028:
	{
		G_B7_0 = _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B;
	}

IL_002d:
	{
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_7;
		L_7 = HashAlgorithm_Create_mCCF58B59C5F93DE5220039DDDEE7486C8D104AFC(G_B7_0, NULL);
		V_0 = L_7;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_rgbHash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_rgbSignature;
		CHECKED_LOCAL_INIT(PKCS1_t452C52E34A25E358B56E2A83A3ABEC0FF36EBF35_StaticInit,(PKCS1_t452C52E34A25E358B56E2A83A3ABEC0FF36EBF35_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_11;
		L_11 = PKCS1_Verify_v15_mE4B2E0EC61E47745711DF0307C2096DE70768D2F(__this, L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider_Dispose_m4C2471DFA9B6E886B786BF6D7B33C4CA099CF002 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_disposed;
		if (L_0)
		{
			goto IL_003d;
		}
	}
	{
		bool L_1 = __this->___persisted;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		bool L_2 = __this->___persistKey;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* L_3 = __this->___store;
		NullCheck(L_3);
		KeyPairPersistence_Remove_mBF912685AFD920126AACBF2950893576F4308888(L_3, NULL);
	}

IL_0023:
	{
		RSAManaged_t897B29EF76C459408E11A42680C942716D809001* L_4 = __this->___rsa;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		RSAManaged_t897B29EF76C459408E11A42680C942716D809001* L_5 = __this->___rsa;
		NullCheck(L_5);
		AsymmetricAlgorithm_Clear_m786C408F7FFE6844D1C2A44F085D28055B61DEE6(L_5, NULL);
	}

IL_0036:
	{
		__this->___m_disposed = (bool)1;
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider_OnKeyGenerated_mF4F409622B100A87075A653C416A882CAB51030F (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___persistKey;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		bool L_1 = __this->___persisted;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* L_2 = __this->___store;
		RSAManaged_t897B29EF76C459408E11A42680C942716D809001* L_3 = __this->___rsa;
		NullCheck(L_3);
		bool L_4;
		L_4 = RSAManaged_get_PublicOnly_m342FC195A5AADA4012C269D2F45486C5729EFE6F(L_3, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker1< String_t*, bool >::Invoke(9, __this, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0));
		NullCheck(L_2);
		KeyPairPersistence_set_KeyValue_m4FFF2A6100E07BF33C1EB0D4C98E3ECDC536D6EB(L_2, L_5, NULL);
		KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* L_6 = __this->___store;
		NullCheck(L_6);
		KeyPairPersistence_Save_m19F91B457374C019AB4BDDECA7E02A30DBFBC801(L_6, NULL);
		__this->___persisted = (bool)1;
	}

IL_0041:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1__ctor_m7132D34515F4EE573D30BCE82420DFE376757299 (SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* __this, const RuntimeMethod* method) 
{
	{
		HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708(__this, NULL);
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue = ((int32_t)160);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA1CryptoServiceProvider_tB1E1EB97160D3366AB4FF858F56D2734C2A6675F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SHA1CryptoServiceProvider_tB1E1EB97160D3366AB4FF858F56D2734C2A6675F* L_0 = (SHA1CryptoServiceProvider_tB1E1EB97160D3366AB4FF858F56D2734C2A6675F*)il2cpp_codegen_object_new(SHA1CryptoServiceProvider_tB1E1EB97160D3366AB4FF858F56D2734C2A6675F_il2cpp_TypeInfo_var);
		SHA1CryptoServiceProvider__ctor_mD863AABD787970AB697A5013890F672428608C0C(L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed__ctor_m121A32E272AF588A533354D0D2558A1A6A0BBDEE (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit);
	{
		SHA1__ctor_m7132D34515F4EE573D30BCE82420DFE376757299(__this, NULL);
		CHECKED_LOCAL_INIT(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit,(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = CryptoConfig_get_AllowOnlyFipsAlgorithms_mA16FE662AA39F2F95122B1DF80564FD3C3EECF6B(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17BA770D472146F14CBDE2CFF7752F076430BCBE)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SHA1Managed__ctor_m121A32E272AF588A533354D0D2558A1A6A0BBDEE_RuntimeMethod_var)));
	}

IL_001d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->____stateSHA1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stateSHA1), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->____buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->____expandedBuffer = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____expandedBuffer), (void*)L_5);
		SHA1Managed_InitializeState_mC573FB9F933ADA6EAE2BCBBA972DF292CD7B5F96(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed_Initialize_mF3D63BD363C603ACD7D294E19298FBA977B2C4BA (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* __this, const RuntimeMethod* method) 
{
	{
		SHA1Managed_InitializeState_mC573FB9F933ADA6EAE2BCBBA972DF292CD7B5F96(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____expandedBuffer;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____expandedBuffer;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed_HashCore_m54659395A30B42980E99AF236B777332BEB9A23B (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgb, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgb;
		int32_t L_1 = ___1_ibStart;
		int32_t L_2 = ___2_cbSize;
		SHA1Managed__HashData_mD1D36C9A750B40701EFAC11EE9A71B376AB9D684(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA1Managed_HashFinal_mE90D66A29F6A84B8423711057B031EBE20231F3C (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = SHA1Managed__EndHash_m7A35BAB8DD676C3D36B6FF925CF5A714208E39B7(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed_InitializeState_mC573FB9F933ADA6EAE2BCBBA972DF292CD7B5F96 (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		__this->____count = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____stateSHA1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)1732584193));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____stateSHA1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)-271733879));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____stateSHA1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)-1732584194));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____stateSHA1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)271733878));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____stateSHA1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)-1009589776));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed__HashData_mD1D36C9A750B40701EFAC11EE9A71B376AB9D684 (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_partIn, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	uint8_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	uint32_t* V_7 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	{
		int32_t L_0 = ___2_cbSize;
		V_1 = L_0;
		int32_t L_1 = ___1_ibStart;
		V_2 = L_1;
		int64_t L_2 = __this->____count;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)63),NULL));
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(L_2&L_3)),NULL));
		V_0 = L_4;
		int64_t L_5 = __this->____count;
		int32_t L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		__this->____count = ((int64_t)il2cpp_codegen_add(L_5, L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->____stateSHA1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8;
		V_4 = L_9;
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if (L_11)
		{
			goto IL_0035;
		}
	}

IL_0030:
	{
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (uint32_t*)L_12;
		goto IL_003f;
	}

IL_0035:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_4;
		NullCheck(L_13);
		uintptr_t L_14 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_3 = (uint32_t*)L_14;
	}

IL_003f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
		V_6 = L_16;
		if (!L_16)
		{
			goto IL_0050;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_6;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if (L_18)
		{
			goto IL_0056;
		}
	}

IL_0050:
	{
		uintptr_t L_19 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_5 = (uint8_t*)L_19;
		goto IL_0061;
	}

IL_0056:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_6;
		NullCheck(L_20);
		uintptr_t L_21 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_5 = (uint8_t*)L_21;
	}

IL_0061:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->____expandedBuffer;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22;
		V_8 = L_23;
		if (!L_23)
		{
			goto IL_0072;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_8;
		NullCheck(L_24);
		int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
		if (L_25)
		{
			goto IL_0078;
		}
	}

IL_0072:
	{
		uintptr_t L_26 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_7 = (uint32_t*)L_26;
		goto IL_0083;
	}

IL_0078:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_8;
		NullCheck(L_27);
		uintptr_t L_28 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_7 = (uint32_t*)L_28;
	}

IL_0083:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_30, L_31))) < ((int32_t)((int32_t)64))))
		{
			goto IL_00e2;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_partIn;
		int32_t L_33 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->____buffer;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		bool L_37;
		L_37 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_32, L_33, (RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_36)), NULL);
		int32_t L_38 = V_2;
		int32_t L_39 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_39))));
		int32_t L_40 = V_1;
		int32_t L_41 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_41))));
		uint32_t* L_42 = V_7;
		uint32_t* L_43 = V_3;
		uint8_t* L_44 = V_5;
		SHA1Managed_SHATransform_m9DAE27BCA41E2FB5ECE1DFA3D5991C5699018F44(L_42, L_43, L_44, NULL);
		V_0 = 0;
		goto IL_00e2;
	}

IL_00bd:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___0_partIn;
		int32_t L_46 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->____buffer;
		bool L_48;
		L_48 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_45, L_46, (RuntimeArray*)L_47, 0, ((int32_t)64), NULL);
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, ((int32_t)64)));
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_50, ((int32_t)64)));
		uint32_t* L_51 = V_7;
		uint32_t* L_52 = V_3;
		uint8_t* L_53 = V_5;
		SHA1Managed_SHATransform_m9DAE27BCA41E2FB5ECE1DFA3D5991C5699018F44(L_51, L_52, L_53, NULL);
	}

IL_00e2:
	{
		int32_t L_54 = V_1;
		if ((((int32_t)L_54) >= ((int32_t)((int32_t)64))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_partIn;
		int32_t L_57 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->____buffer;
		int32_t L_59 = V_0;
		int32_t L_60 = V_1;
		bool L_61;
		L_61 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_56, L_57, (RuntimeArray*)L_58, L_59, L_60, NULL);
	}

IL_00fb:
	{
		V_8 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA1Managed__EndHash_m7A35BAB8DD676C3D36B6FF925CF5A714208E39B7 (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		V_3 = L_0;
		int64_t L_1 = __this->____count;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)63),NULL));
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(L_1&L_2)),NULL));
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_3));
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)8)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)64)));
	}

IL_0020:
	{
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		int64_t L_9 = __this->____count;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_9, L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		int32_t L_12 = V_1;
		int64_t L_13 = V_2;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_15 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_13>>((int32_t)56)))&L_14)),NULL));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_12, 8))), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		int32_t L_17 = V_1;
		int64_t L_18 = V_2;
		int64_t L_19 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_20 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_18>>((int32_t)48)))&L_19)),NULL));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_17, 7))), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		int64_t L_23 = V_2;
		int64_t L_24 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_25 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_23>>((int32_t)40)))&L_24)),NULL));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_22, 6))), (uint8_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		int32_t L_27 = V_1;
		int64_t L_28 = V_2;
		int64_t L_29 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_30 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_28>>((int32_t)32)))&L_29)),NULL));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_27, 5))), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_0;
		int32_t L_32 = V_1;
		int64_t L_33 = V_2;
		int64_t L_34 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_35 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_33>>((int32_t)24)))&L_34)),NULL));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_32, 4))), (uint8_t)L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		int32_t L_37 = V_1;
		int64_t L_38 = V_2;
		int64_t L_39 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_40 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_38>>((int32_t)16)))&L_39)),NULL));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_37, 3))), (uint8_t)L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_0;
		int32_t L_42 = V_1;
		int64_t L_43 = V_2;
		int64_t L_44 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_45 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_43>>8))&L_44)),NULL));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_42, 2))), (uint8_t)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = V_1;
		int64_t L_48 = V_2;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_50 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(L_48&L_49)),NULL));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_47, 1))), (uint8_t)L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		SHA1Managed__HashData_mD1D36C9A750B40701EFAC11EE9A71B376AB9D684(__this, L_51, 0, L_53, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = __this->____stateSHA1;
		Utils_DWORDToBigEndian_mA140AA639B5F71A633E7F45A8B790266C481850C(L_54, L_55, 5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_3;
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue), (void*)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_3;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed_SHATransform_m9DAE27BCA41E2FB5ECE1DFA3D5991C5699018F44 (uint32_t* ___0_expandedBuffer, uint32_t* ___1_state, uint8_t* ___2_block, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		uint32_t* L_0 = ___1_state;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = L_1;
		uint32_t* L_2 = ___1_state;
		int32_t L_3 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, 4))));
		V_1 = L_3;
		uint32_t* L_4 = ___1_state;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_6 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(L_5, 4))))));
		V_2 = L_6;
		uint32_t* L_7 = ___1_state;
		intptr_t L_8 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_9 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_8, 4))))));
		V_3 = L_9;
		uint32_t* L_10 = ___1_state;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_12 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(L_11, 4))))));
		V_4 = L_12;
		uint32_t* L_13 = ___0_expandedBuffer;
		uint8_t* L_14 = ___2_block;
		Utils_DWORDFromBigEndian_mE902303B984074D0A51DC96A79C9B698F91070B7(L_13, ((int32_t)16), L_14, NULL);
		uint32_t* L_15 = ___0_expandedBuffer;
		SHA1Managed_SHAExpand_m6A9B2E025F25FD489FD29B1A400051B975156519(L_15, NULL);
		V_5 = 0;
		goto IL_0128;
	}

IL_0038:
	{
		uint32_t L_16 = V_4;
		uint32_t L_17 = V_0;
		uint32_t L_18 = V_0;
		uint32_t L_19 = V_3;
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_2;
		uint32_t L_22 = V_3;
		uint32_t* L_23 = ___0_expandedBuffer;
		int32_t L_24 = V_5;
		intptr_t L_25 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_24,NULL));
		int32_t L_26 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(L_25, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_17<<5))|((int32_t)((uint32_t)L_18>>((int32_t)27))))), ((int32_t)((int32_t)L_19^((int32_t)((int32_t)L_20&((int32_t)((int32_t)L_21^(int32_t)L_22)))))))), L_26)), ((int32_t)1518500249)))));
		uint32_t L_27 = V_1;
		uint32_t L_28 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_27<<((int32_t)30)))|((int32_t)((uint32_t)L_28>>2))));
		uint32_t L_29 = V_3;
		uint32_t L_30 = V_4;
		uint32_t L_31 = V_4;
		uint32_t L_32 = V_2;
		uint32_t L_33 = V_0;
		uint32_t L_34 = V_1;
		uint32_t L_35 = V_2;
		uint32_t* L_36 = ___0_expandedBuffer;
		int32_t L_37 = V_5;
		intptr_t L_38 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_37, 1)),NULL));
		int32_t L_39 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(L_38, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_30<<5))|((int32_t)((uint32_t)L_31>>((int32_t)27))))), ((int32_t)((int32_t)L_32^((int32_t)((int32_t)L_33&((int32_t)((int32_t)L_34^(int32_t)L_35)))))))), L_39)), ((int32_t)1518500249)))));
		uint32_t L_40 = V_0;
		uint32_t L_41 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_40<<((int32_t)30)))|((int32_t)((uint32_t)L_41>>2))));
		uint32_t L_42 = V_2;
		uint32_t L_43 = V_3;
		uint32_t L_44 = V_3;
		uint32_t L_45 = V_1;
		uint32_t L_46 = V_4;
		uint32_t L_47 = V_0;
		uint32_t L_48 = V_1;
		uint32_t* L_49 = ___0_expandedBuffer;
		int32_t L_50 = V_5;
		intptr_t L_51 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_50, 2)),NULL));
		int32_t L_52 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(L_51, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_43<<5))|((int32_t)((uint32_t)L_44>>((int32_t)27))))), ((int32_t)((int32_t)L_45^((int32_t)((int32_t)L_46&((int32_t)((int32_t)L_47^(int32_t)L_48)))))))), L_52)), ((int32_t)1518500249)))));
		uint32_t L_53 = V_4;
		uint32_t L_54 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_53<<((int32_t)30)))|((int32_t)((uint32_t)L_54>>2))));
		uint32_t L_55 = V_1;
		uint32_t L_56 = V_2;
		uint32_t L_57 = V_2;
		uint32_t L_58 = V_0;
		uint32_t L_59 = V_3;
		uint32_t L_60 = V_4;
		uint32_t L_61 = V_0;
		uint32_t* L_62 = ___0_expandedBuffer;
		int32_t L_63 = V_5;
		intptr_t L_64 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_63, 3)),NULL));
		int32_t L_65 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_62, ((intptr_t)il2cpp_codegen_multiply(L_64, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_56<<5))|((int32_t)((uint32_t)L_57>>((int32_t)27))))), ((int32_t)((int32_t)L_58^((int32_t)((int32_t)L_59&((int32_t)((int32_t)L_60^(int32_t)L_61)))))))), L_65)), ((int32_t)1518500249)))));
		uint32_t L_66 = V_3;
		uint32_t L_67 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_66<<((int32_t)30)))|((int32_t)((uint32_t)L_67>>2))));
		uint32_t L_68 = V_0;
		uint32_t L_69 = V_1;
		uint32_t L_70 = V_1;
		uint32_t L_71 = V_4;
		uint32_t L_72 = V_2;
		uint32_t L_73 = V_3;
		uint32_t L_74 = V_4;
		uint32_t* L_75 = ___0_expandedBuffer;
		int32_t L_76 = V_5;
		intptr_t L_77 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_76, 4)),NULL));
		int32_t L_78 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(L_77, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_69<<5))|((int32_t)((uint32_t)L_70>>((int32_t)27))))), ((int32_t)((int32_t)L_71^((int32_t)((int32_t)L_72&((int32_t)((int32_t)L_73^(int32_t)L_74)))))))), L_78)), ((int32_t)1518500249)))));
		uint32_t L_79 = V_2;
		uint32_t L_80 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_79<<((int32_t)30)))|((int32_t)((uint32_t)L_80>>2))));
		int32_t L_81 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_81, 5));
	}

IL_0128:
	{
		int32_t L_82 = V_5;
		if ((((int32_t)L_82) < ((int32_t)((int32_t)20))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_021b;
	}

IL_0136:
	{
		uint32_t L_83 = V_4;
		uint32_t L_84 = V_0;
		uint32_t L_85 = V_0;
		uint32_t L_86 = V_1;
		uint32_t L_87 = V_2;
		uint32_t L_88 = V_3;
		uint32_t* L_89 = ___0_expandedBuffer;
		int32_t L_90 = V_5;
		intptr_t L_91 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		int32_t L_92 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_91, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_84<<5))|((int32_t)((uint32_t)L_85>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_86^(int32_t)L_87))^(int32_t)L_88)))), L_92)), ((int32_t)1859775393)))));
		uint32_t L_93 = V_1;
		uint32_t L_94 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_93<<((int32_t)30)))|((int32_t)((uint32_t)L_94>>2))));
		uint32_t L_95 = V_3;
		uint32_t L_96 = V_4;
		uint32_t L_97 = V_4;
		uint32_t L_98 = V_0;
		uint32_t L_99 = V_1;
		uint32_t L_100 = V_2;
		uint32_t* L_101 = ___0_expandedBuffer;
		int32_t L_102 = V_5;
		intptr_t L_103 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_102, 1)),NULL));
		int32_t L_104 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_101, ((intptr_t)il2cpp_codegen_multiply(L_103, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_96<<5))|((int32_t)((uint32_t)L_97>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_98^(int32_t)L_99))^(int32_t)L_100)))), L_104)), ((int32_t)1859775393)))));
		uint32_t L_105 = V_0;
		uint32_t L_106 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_105<<((int32_t)30)))|((int32_t)((uint32_t)L_106>>2))));
		uint32_t L_107 = V_2;
		uint32_t L_108 = V_3;
		uint32_t L_109 = V_3;
		uint32_t L_110 = V_4;
		uint32_t L_111 = V_0;
		uint32_t L_112 = V_1;
		uint32_t* L_113 = ___0_expandedBuffer;
		int32_t L_114 = V_5;
		intptr_t L_115 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_114, 2)),NULL));
		int32_t L_116 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_113, ((intptr_t)il2cpp_codegen_multiply(L_115, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_108<<5))|((int32_t)((uint32_t)L_109>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_110^(int32_t)L_111))^(int32_t)L_112)))), L_116)), ((int32_t)1859775393)))));
		uint32_t L_117 = V_4;
		uint32_t L_118 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_117<<((int32_t)30)))|((int32_t)((uint32_t)L_118>>2))));
		uint32_t L_119 = V_1;
		uint32_t L_120 = V_2;
		uint32_t L_121 = V_2;
		uint32_t L_122 = V_3;
		uint32_t L_123 = V_4;
		uint32_t L_124 = V_0;
		uint32_t* L_125 = ___0_expandedBuffer;
		int32_t L_126 = V_5;
		intptr_t L_127 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_126, 3)),NULL));
		int32_t L_128 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_125, ((intptr_t)il2cpp_codegen_multiply(L_127, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_120<<5))|((int32_t)((uint32_t)L_121>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_122^(int32_t)L_123))^(int32_t)L_124)))), L_128)), ((int32_t)1859775393)))));
		uint32_t L_129 = V_3;
		uint32_t L_130 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_129<<((int32_t)30)))|((int32_t)((uint32_t)L_130>>2))));
		uint32_t L_131 = V_0;
		uint32_t L_132 = V_1;
		uint32_t L_133 = V_1;
		uint32_t L_134 = V_2;
		uint32_t L_135 = V_3;
		uint32_t L_136 = V_4;
		uint32_t* L_137 = ___0_expandedBuffer;
		int32_t L_138 = V_5;
		intptr_t L_139 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_138, 4)),NULL));
		int32_t L_140 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_137, ((intptr_t)il2cpp_codegen_multiply(L_139, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_132<<5))|((int32_t)((uint32_t)L_133>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_134^(int32_t)L_135))^(int32_t)L_136)))), L_140)), ((int32_t)1859775393)))));
		uint32_t L_141 = V_2;
		uint32_t L_142 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_141<<((int32_t)30)))|((int32_t)((uint32_t)L_142>>2))));
		int32_t L_143 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_143, 5));
	}

IL_021b:
	{
		int32_t L_144 = V_5;
		if ((((int32_t)L_144) < ((int32_t)((int32_t)40))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_0324;
	}

IL_0229:
	{
		uint32_t L_145 = V_4;
		uint32_t L_146 = V_0;
		uint32_t L_147 = V_0;
		uint32_t L_148 = V_1;
		uint32_t L_149 = V_2;
		uint32_t L_150 = V_3;
		uint32_t L_151 = V_1;
		uint32_t L_152 = V_2;
		uint32_t* L_153 = ___0_expandedBuffer;
		int32_t L_154 = V_5;
		intptr_t L_155 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_154,NULL));
		int32_t L_156 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_153, ((intptr_t)il2cpp_codegen_multiply(L_155, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_146<<5))|((int32_t)((uint32_t)L_147>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_148&(int32_t)L_149))|((int32_t)((int32_t)L_150&((int32_t)((int32_t)L_151|(int32_t)L_152)))))))), L_156)), ((int32_t)-1894007588)))));
		uint32_t L_157 = V_1;
		uint32_t L_158 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_157<<((int32_t)30)))|((int32_t)((uint32_t)L_158>>2))));
		uint32_t L_159 = V_3;
		uint32_t L_160 = V_4;
		uint32_t L_161 = V_4;
		uint32_t L_162 = V_0;
		uint32_t L_163 = V_1;
		uint32_t L_164 = V_2;
		uint32_t L_165 = V_0;
		uint32_t L_166 = V_1;
		uint32_t* L_167 = ___0_expandedBuffer;
		int32_t L_168 = V_5;
		intptr_t L_169 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_168, 1)),NULL));
		int32_t L_170 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_167, ((intptr_t)il2cpp_codegen_multiply(L_169, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_160<<5))|((int32_t)((uint32_t)L_161>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_162&(int32_t)L_163))|((int32_t)((int32_t)L_164&((int32_t)((int32_t)L_165|(int32_t)L_166)))))))), L_170)), ((int32_t)-1894007588)))));
		uint32_t L_171 = V_0;
		uint32_t L_172 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_171<<((int32_t)30)))|((int32_t)((uint32_t)L_172>>2))));
		uint32_t L_173 = V_2;
		uint32_t L_174 = V_3;
		uint32_t L_175 = V_3;
		uint32_t L_176 = V_4;
		uint32_t L_177 = V_0;
		uint32_t L_178 = V_1;
		uint32_t L_179 = V_4;
		uint32_t L_180 = V_0;
		uint32_t* L_181 = ___0_expandedBuffer;
		int32_t L_182 = V_5;
		intptr_t L_183 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_182, 2)),NULL));
		int32_t L_184 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_181, ((intptr_t)il2cpp_codegen_multiply(L_183, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_173, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_174<<5))|((int32_t)((uint32_t)L_175>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_176&(int32_t)L_177))|((int32_t)((int32_t)L_178&((int32_t)((int32_t)L_179|(int32_t)L_180)))))))), L_184)), ((int32_t)-1894007588)))));
		uint32_t L_185 = V_4;
		uint32_t L_186 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_185<<((int32_t)30)))|((int32_t)((uint32_t)L_186>>2))));
		uint32_t L_187 = V_1;
		uint32_t L_188 = V_2;
		uint32_t L_189 = V_2;
		uint32_t L_190 = V_3;
		uint32_t L_191 = V_4;
		uint32_t L_192 = V_0;
		uint32_t L_193 = V_3;
		uint32_t L_194 = V_4;
		uint32_t* L_195 = ___0_expandedBuffer;
		int32_t L_196 = V_5;
		intptr_t L_197 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_196, 3)),NULL));
		int32_t L_198 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_195, ((intptr_t)il2cpp_codegen_multiply(L_197, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_187, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_188<<5))|((int32_t)((uint32_t)L_189>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_190&(int32_t)L_191))|((int32_t)((int32_t)L_192&((int32_t)((int32_t)L_193|(int32_t)L_194)))))))), L_198)), ((int32_t)-1894007588)))));
		uint32_t L_199 = V_3;
		uint32_t L_200 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_199<<((int32_t)30)))|((int32_t)((uint32_t)L_200>>2))));
		uint32_t L_201 = V_0;
		uint32_t L_202 = V_1;
		uint32_t L_203 = V_1;
		uint32_t L_204 = V_2;
		uint32_t L_205 = V_3;
		uint32_t L_206 = V_4;
		uint32_t L_207 = V_2;
		uint32_t L_208 = V_3;
		uint32_t* L_209 = ___0_expandedBuffer;
		int32_t L_210 = V_5;
		intptr_t L_211 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_210, 4)),NULL));
		int32_t L_212 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_209, ((intptr_t)il2cpp_codegen_multiply(L_211, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_201, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_202<<5))|((int32_t)((uint32_t)L_203>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_204&(int32_t)L_205))|((int32_t)((int32_t)L_206&((int32_t)((int32_t)L_207|(int32_t)L_208)))))))), L_212)), ((int32_t)-1894007588)))));
		uint32_t L_213 = V_2;
		uint32_t L_214 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_213<<((int32_t)30)))|((int32_t)((uint32_t)L_214>>2))));
		int32_t L_215 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_215, 5));
	}

IL_0324:
	{
		int32_t L_216 = V_5;
		if ((((int32_t)L_216) < ((int32_t)((int32_t)60))))
		{
			goto IL_0229;
		}
	}
	{
		goto IL_0417;
	}

IL_0332:
	{
		uint32_t L_217 = V_4;
		uint32_t L_218 = V_0;
		uint32_t L_219 = V_0;
		uint32_t L_220 = V_1;
		uint32_t L_221 = V_2;
		uint32_t L_222 = V_3;
		uint32_t* L_223 = ___0_expandedBuffer;
		int32_t L_224 = V_5;
		intptr_t L_225 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_224,NULL));
		int32_t L_226 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_223, ((intptr_t)il2cpp_codegen_multiply(L_225, 4))))));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_217, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_218<<5))|((int32_t)((uint32_t)L_219>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_220^(int32_t)L_221))^(int32_t)L_222)))), L_226)), ((int32_t)-899497514)))));
		uint32_t L_227 = V_1;
		uint32_t L_228 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_227<<((int32_t)30)))|((int32_t)((uint32_t)L_228>>2))));
		uint32_t L_229 = V_3;
		uint32_t L_230 = V_4;
		uint32_t L_231 = V_4;
		uint32_t L_232 = V_0;
		uint32_t L_233 = V_1;
		uint32_t L_234 = V_2;
		uint32_t* L_235 = ___0_expandedBuffer;
		int32_t L_236 = V_5;
		intptr_t L_237 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_236, 1)),NULL));
		int32_t L_238 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_235, ((intptr_t)il2cpp_codegen_multiply(L_237, 4))))));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_229, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_230<<5))|((int32_t)((uint32_t)L_231>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_232^(int32_t)L_233))^(int32_t)L_234)))), L_238)), ((int32_t)-899497514)))));
		uint32_t L_239 = V_0;
		uint32_t L_240 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_239<<((int32_t)30)))|((int32_t)((uint32_t)L_240>>2))));
		uint32_t L_241 = V_2;
		uint32_t L_242 = V_3;
		uint32_t L_243 = V_3;
		uint32_t L_244 = V_4;
		uint32_t L_245 = V_0;
		uint32_t L_246 = V_1;
		uint32_t* L_247 = ___0_expandedBuffer;
		int32_t L_248 = V_5;
		intptr_t L_249 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_248, 2)),NULL));
		int32_t L_250 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_247, ((intptr_t)il2cpp_codegen_multiply(L_249, 4))))));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_241, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_242<<5))|((int32_t)((uint32_t)L_243>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_244^(int32_t)L_245))^(int32_t)L_246)))), L_250)), ((int32_t)-899497514)))));
		uint32_t L_251 = V_4;
		uint32_t L_252 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_251<<((int32_t)30)))|((int32_t)((uint32_t)L_252>>2))));
		uint32_t L_253 = V_1;
		uint32_t L_254 = V_2;
		uint32_t L_255 = V_2;
		uint32_t L_256 = V_3;
		uint32_t L_257 = V_4;
		uint32_t L_258 = V_0;
		uint32_t* L_259 = ___0_expandedBuffer;
		int32_t L_260 = V_5;
		intptr_t L_261 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_260, 3)),NULL));
		int32_t L_262 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_259, ((intptr_t)il2cpp_codegen_multiply(L_261, 4))))));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_253, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_254<<5))|((int32_t)((uint32_t)L_255>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_256^(int32_t)L_257))^(int32_t)L_258)))), L_262)), ((int32_t)-899497514)))));
		uint32_t L_263 = V_3;
		uint32_t L_264 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_263<<((int32_t)30)))|((int32_t)((uint32_t)L_264>>2))));
		uint32_t L_265 = V_0;
		uint32_t L_266 = V_1;
		uint32_t L_267 = V_1;
		uint32_t L_268 = V_2;
		uint32_t L_269 = V_3;
		uint32_t L_270 = V_4;
		uint32_t* L_271 = ___0_expandedBuffer;
		int32_t L_272 = V_5;
		intptr_t L_273 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_272, 4)),NULL));
		int32_t L_274 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_271, ((intptr_t)il2cpp_codegen_multiply(L_273, 4))))));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_265, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_266<<5))|((int32_t)((uint32_t)L_267>>((int32_t)27))))), ((int32_t)(((int32_t)((int32_t)L_268^(int32_t)L_269))^(int32_t)L_270)))), L_274)), ((int32_t)-899497514)))));
		uint32_t L_275 = V_2;
		uint32_t L_276 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_275<<((int32_t)30)))|((int32_t)((uint32_t)L_276>>2))));
		int32_t L_277 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_277, 5));
	}

IL_0417:
	{
		int32_t L_278 = V_5;
		if ((((int32_t)L_278) < ((int32_t)((int32_t)80))))
		{
			goto IL_0332;
		}
	}
	{
		uint32_t* L_279 = ___1_state;
		uint32_t* L_280 = L_279;
		int32_t L_281 = ((int32_t)*(L_280));
		uint32_t L_282 = V_0;
		*(((int32_t*)L_280)) = ((int32_t)il2cpp_codegen_add(L_281, (int32_t)L_282));
		uint32_t* L_283 = ___1_state;
		uint32_t* L_284 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_283, 4));
		int32_t L_285 = ((int32_t)*(L_284));
		uint32_t L_286 = V_1;
		*(((int32_t*)L_284)) = ((int32_t)il2cpp_codegen_add(L_285, (int32_t)L_286));
		uint32_t* L_287 = ___1_state;
		intptr_t L_288 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		uint32_t* L_289 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_287, ((intptr_t)il2cpp_codegen_multiply(L_288, 4))));
		int32_t L_290 = ((int32_t)*(L_289));
		uint32_t L_291 = V_2;
		*(((int32_t*)L_289)) = ((int32_t)il2cpp_codegen_add(L_290, (int32_t)L_291));
		uint32_t* L_292 = ___1_state;
		intptr_t L_293 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		uint32_t* L_294 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_292, ((intptr_t)il2cpp_codegen_multiply(L_293, 4))));
		int32_t L_295 = ((int32_t)*(L_294));
		uint32_t L_296 = V_3;
		*(((int32_t*)L_294)) = ((int32_t)il2cpp_codegen_add(L_295, (int32_t)L_296));
		uint32_t* L_297 = ___1_state;
		intptr_t L_298 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		uint32_t* L_299 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_297, ((intptr_t)il2cpp_codegen_multiply(L_298, 4))));
		int32_t L_300 = ((int32_t)*(L_299));
		uint32_t L_301 = V_4;
		*(((int32_t*)L_299)) = ((int32_t)il2cpp_codegen_add(L_300, (int32_t)L_301));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed_SHAExpand_m6A9B2E025F25FD489FD29B1A400051B975156519 (uint32_t* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = ((int32_t)16);
		goto IL_0042;
	}

IL_0005:
	{
		uint32_t* L_0 = ___0_x;
		int32_t L_1 = V_0;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_1, 3)),NULL));
		int32_t L_3 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 4))))));
		uint32_t* L_4 = ___0_x;
		int32_t L_5 = V_0;
		intptr_t L_6 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_5, 8)),NULL));
		int32_t L_7 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(L_6, 4))))));
		uint32_t* L_8 = ___0_x;
		int32_t L_9 = V_0;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)14))),NULL));
		int32_t L_11 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4))))));
		uint32_t* L_12 = ___0_x;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)16))),NULL));
		int32_t L_15 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, 4))))));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_3^L_7))^L_11))^L_15));
		uint32_t* L_16 = ___0_x;
		int32_t L_17 = V_0;
		intptr_t L_18 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_17,NULL));
		uint32_t L_19 = V_1;
		uint32_t L_20 = V_1;
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_18, 4)))))) = ((int32_t)(((int32_t)((int32_t)L_19<<1))|((int32_t)((uint32_t)L_20>>((int32_t)31)))));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0042:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)80))))
		{
			goto IL_0005;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256__ctor_m354FC0752A5657B4F02AEE3D5C4E499895C9EBF4 (SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* __this, const RuntimeMethod* method) 
{
	{
		HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708(__this, NULL);
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue = ((int32_t)256);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* L_0 = (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C*)il2cpp_codegen_object_new(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F(L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit);
	{
		SHA256__ctor_m354FC0752A5657B4F02AEE3D5C4E499895C9EBF4(__this, NULL);
		CHECKED_LOCAL_INIT(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit,(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = CryptoConfig_get_AllowOnlyFipsAlgorithms_mA16FE662AA39F2F95122B1DF80564FD3C3EECF6B(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17BA770D472146F14CBDE2CFF7752F076430BCBE)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SHA256Managed__ctor_mB95C91954ECF9E74B133ABC3BC72FAE4D5BF9B4F_RuntimeMethod_var)));
	}

IL_001d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____stateSHA256 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stateSHA256), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->____buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->____W = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____W), (void*)L_5);
		SHA256Managed_InitializeState_m2EE9F457AF738E6215F0C55499030C9C9588B688(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed_Initialize_m07ACBE9DED070C54747420477FA695599E39991F (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) 
{
	{
		SHA256Managed_InitializeState_m2EE9F457AF738E6215F0C55499030C9C9588B688(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____W;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____W;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed_HashCore_mFC5520EFF1CD88EE1D5CCD533402229FBFFA0ABF (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgb, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgb;
		int32_t L_1 = ___1_ibStart;
		int32_t L_2 = ___2_cbSize;
		SHA256Managed__HashData_mBDBA48376D6C20D80FC4A3576E4A090D498C5B08(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA256Managed_HashFinal_mEE6416CC4657F6C999A22630FA5C0DE3E4F86448 (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = SHA256Managed__EndHash_mF544FE173BC1F97FFF5B74CAC8CBFC5D8DF5809D(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed_InitializeState_m2EE9F457AF738E6215F0C55499030C9C9588B688 (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		__this->____count = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____stateSHA256;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)1779033703));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____stateSHA256;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)-1150833019));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____stateSHA256;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)1013904242));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____stateSHA256;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)-1521486534));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____stateSHA256;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)1359893119));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____stateSHA256;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)-1694144372));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->____stateSHA256;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)528734635));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->____stateSHA256;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)1541459225));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed__HashData_mBDBA48376D6C20D80FC4A3576E4A090D498C5B08 (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_partIn, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	uint8_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	uint32_t* V_7 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	{
		int32_t L_0 = ___2_cbSize;
		V_1 = L_0;
		int32_t L_1 = ___1_ibStart;
		V_2 = L_1;
		int64_t L_2 = __this->____count;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)63),NULL));
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(L_2&L_3)),NULL));
		V_0 = L_4;
		int64_t L_5 = __this->____count;
		int32_t L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		__this->____count = ((int64_t)il2cpp_codegen_add(L_5, L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->____stateSHA256;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8;
		V_4 = L_9;
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if (L_11)
		{
			goto IL_0035;
		}
	}

IL_0030:
	{
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (uint32_t*)L_12;
		goto IL_003f;
	}

IL_0035:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_4;
		NullCheck(L_13);
		uintptr_t L_14 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_3 = (uint32_t*)L_14;
	}

IL_003f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
		V_6 = L_16;
		if (!L_16)
		{
			goto IL_0050;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_6;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if (L_18)
		{
			goto IL_0056;
		}
	}

IL_0050:
	{
		uintptr_t L_19 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_5 = (uint8_t*)L_19;
		goto IL_0061;
	}

IL_0056:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_6;
		NullCheck(L_20);
		uintptr_t L_21 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_5 = (uint8_t*)L_21;
	}

IL_0061:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->____W;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22;
		V_8 = L_23;
		if (!L_23)
		{
			goto IL_0072;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_8;
		NullCheck(L_24);
		int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
		if (L_25)
		{
			goto IL_0078;
		}
	}

IL_0072:
	{
		uintptr_t L_26 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_7 = (uint32_t*)L_26;
		goto IL_0083;
	}

IL_0078:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_8;
		NullCheck(L_27);
		uintptr_t L_28 = (il2cpp_codegen_conv<uintptr_t,uint32_t*,intptr_t,false,false>(((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_7 = (uint32_t*)L_28;
	}

IL_0083:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_30, L_31))) < ((int32_t)((int32_t)64))))
		{
			goto IL_00e2;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_partIn;
		int32_t L_33 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->____buffer;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		bool L_37;
		L_37 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_32, L_33, (RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_36)), NULL);
		int32_t L_38 = V_2;
		int32_t L_39 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_39))));
		int32_t L_40 = V_1;
		int32_t L_41 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_41))));
		uint32_t* L_42 = V_7;
		uint32_t* L_43 = V_3;
		uint8_t* L_44 = V_5;
		CHECKED_LOCAL_INIT(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit,(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SHA256Managed_SHATransform_m5A45221586B5752B10D40158CC9EAC0CF16B1A7F(L_42, L_43, L_44, NULL);
		V_0 = 0;
		goto IL_00e2;
	}

IL_00bd:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___0_partIn;
		int32_t L_46 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->____buffer;
		bool L_48;
		L_48 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_45, L_46, (RuntimeArray*)L_47, 0, ((int32_t)64), NULL);
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, ((int32_t)64)));
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_50, ((int32_t)64)));
		uint32_t* L_51 = V_7;
		uint32_t* L_52 = V_3;
		uint8_t* L_53 = V_5;
		CHECKED_LOCAL_INIT(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit,(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SHA256Managed_SHATransform_m5A45221586B5752B10D40158CC9EAC0CF16B1A7F(L_51, L_52, L_53, NULL);
	}

IL_00e2:
	{
		int32_t L_54 = V_1;
		if ((((int32_t)L_54) >= ((int32_t)((int32_t)64))))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_partIn;
		int32_t L_57 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->____buffer;
		int32_t L_59 = V_0;
		int32_t L_60 = V_1;
		bool L_61;
		L_61 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_56, L_57, (RuntimeArray*)L_58, L_59, L_60, NULL);
	}

IL_00fb:
	{
		V_8 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA256Managed__EndHash_mF544FE173BC1F97FFF5B74CAC8CBFC5D8DF5809D (SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_3 = L_0;
		int64_t L_1 = __this->____count;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)63),NULL));
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(L_1&L_2)),NULL));
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_3));
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)8)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)64)));
	}

IL_0020:
	{
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		int64_t L_9 = __this->____count;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_9, L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		int32_t L_12 = V_1;
		int64_t L_13 = V_2;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_15 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_13>>((int32_t)56)))&L_14)),NULL));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_12, 8))), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		int32_t L_17 = V_1;
		int64_t L_18 = V_2;
		int64_t L_19 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_20 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_18>>((int32_t)48)))&L_19)),NULL));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_17, 7))), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		int64_t L_23 = V_2;
		int64_t L_24 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_25 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_23>>((int32_t)40)))&L_24)),NULL));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_22, 6))), (uint8_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		int32_t L_27 = V_1;
		int64_t L_28 = V_2;
		int64_t L_29 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_30 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_28>>((int32_t)32)))&L_29)),NULL));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_27, 5))), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_0;
		int32_t L_32 = V_1;
		int64_t L_33 = V_2;
		int64_t L_34 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_35 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_33>>((int32_t)24)))&L_34)),NULL));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_32, 4))), (uint8_t)L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		int32_t L_37 = V_1;
		int64_t L_38 = V_2;
		int64_t L_39 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_40 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_38>>((int32_t)16)))&L_39)),NULL));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_37, 3))), (uint8_t)L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_0;
		int32_t L_42 = V_1;
		int64_t L_43 = V_2;
		int64_t L_44 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_45 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)(L_43>>8))&L_44)),NULL));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_42, 2))), (uint8_t)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = V_1;
		int64_t L_48 = V_2;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_50 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(L_48&L_49)),NULL));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_47, 1))), (uint8_t)L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		SHA256Managed__HashData_mBDBA48376D6C20D80FC4A3576E4A090D498C5B08(__this, L_51, 0, L_53, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = __this->____stateSHA256;
		Utils_DWORDToBigEndian_mA140AA639B5F71A633E7F45A8B790266C481850C(L_54, L_55, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_3;
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue), (void*)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_3;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed_SHATransform_m5A45221586B5752B10D40158CC9EAC0CF16B1A7F (uint32_t* ___0_expandedBuffer, uint32_t* ___1_state, uint8_t* ___2_block, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit);
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	int32_t V_17 = 0;
	{
		uint32_t* L_0 = ___1_state;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = L_1;
		uint32_t* L_2 = ___1_state;
		int32_t L_3 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, 4))));
		V_1 = L_3;
		uint32_t* L_4 = ___1_state;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int32_t L_6 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(L_5, 4))))));
		V_2 = L_6;
		uint32_t* L_7 = ___1_state;
		intptr_t L_8 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int32_t L_9 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_8, 4))))));
		V_3 = L_9;
		uint32_t* L_10 = ___1_state;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int32_t L_12 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(L_11, 4))))));
		V_4 = L_12;
		uint32_t* L_13 = ___1_state;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int32_t L_15 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_14, 4))))));
		V_5 = L_15;
		uint32_t* L_16 = ___1_state;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int32_t L_18 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_17, 4))))));
		V_7 = L_18;
		uint32_t* L_19 = ___1_state;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int32_t L_21 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_20, 4))))));
		V_6 = L_21;
		uint32_t* L_22 = ___0_expandedBuffer;
		uint8_t* L_23 = ___2_block;
		Utils_DWORDFromBigEndian_mE902303B984074D0A51DC96A79C9B698F91070B7(L_22, ((int32_t)16), L_23, NULL);
		uint32_t* L_24 = ___0_expandedBuffer;
		CHECKED_LOCAL_INIT(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit,(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SHA256Managed_SHA256Expand_mB01374BE8E2726FBE899199B2AA6B56C00067A91(L_24, NULL);
		V_17 = 0;
		goto IL_02b3;
	}

IL_0053:
	{
		uint32_t L_25 = V_6;
		uint32_t L_26 = V_4;
		CHECKED_LOCAL_INIT(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit,(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_27;
		L_27 = SHA256Managed_Sigma_1_mA321674AF9F374B645DA44FE4BC05139E63CB2EE(L_26, NULL);
		uint32_t L_28 = V_4;
		uint32_t L_29 = V_5;
		uint32_t L_30 = V_7;
		uint32_t L_31;
		L_31 = SHA256Managed_Ch_mA58A79EF9D9DA08F3B7FC1AE53EBD864E5D9733D(L_28, L_29, L_30, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ((SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields*)il2cpp_codegen_static_fields_for(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var))->____K;
		int32_t L_33 = V_17;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		uint32_t* L_36 = ___0_expandedBuffer;
		int32_t L_37 = V_17;
		intptr_t L_38 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_37,NULL));
		int32_t L_39 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(L_38, 4))))));
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_27)), (int32_t)L_31)), (int32_t)L_35)), L_39));
		uint32_t L_40 = V_3;
		uint32_t L_41 = V_16;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_41));
		uint32_t L_42 = V_16;
		uint32_t L_43 = V_0;
		uint32_t L_44;
		L_44 = SHA256Managed_Sigma_0_m3146C6035EC5A565348A6DDB47EA62666B0E19F3(L_43, NULL);
		uint32_t L_45 = V_0;
		uint32_t L_46 = V_1;
		uint32_t L_47 = V_2;
		uint32_t L_48;
		L_48 = SHA256Managed_Maj_m5AD8BD05D5FA1CBE527F72BA3738FB42EB4A3F11(L_45, L_46, L_47, NULL);
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_44)), (int32_t)L_48));
		int32_t L_49 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		uint32_t L_50 = V_7;
		uint32_t L_51 = V_12;
		uint32_t L_52;
		L_52 = SHA256Managed_Sigma_1_mA321674AF9F374B645DA44FE4BC05139E63CB2EE(L_51, NULL);
		uint32_t L_53 = V_12;
		uint32_t L_54 = V_4;
		uint32_t L_55 = V_5;
		uint32_t L_56;
		L_56 = SHA256Managed_Ch_mA58A79EF9D9DA08F3B7FC1AE53EBD864E5D9733D(L_53, L_54, L_55, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ((SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields*)il2cpp_codegen_static_fields_for(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var))->____K;
		int32_t L_58 = V_17;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		uint32_t* L_61 = ___0_expandedBuffer;
		int32_t L_62 = V_17;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)L_52)), (int32_t)L_56)), (int32_t)L_60)), L_64));
		uint32_t L_65 = V_2;
		uint32_t L_66 = V_16;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66));
		uint32_t L_67 = V_16;
		uint32_t L_68 = V_8;
		uint32_t L_69;
		L_69 = SHA256Managed_Sigma_0_m3146C6035EC5A565348A6DDB47EA62666B0E19F3(L_68, NULL);
		uint32_t L_70 = V_8;
		uint32_t L_71 = V_0;
		uint32_t L_72 = V_1;
		uint32_t L_73;
		L_73 = SHA256Managed_Maj_m5AD8BD05D5FA1CBE527F72BA3738FB42EB4A3F11(L_70, L_71, L_72, NULL);
		V_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)L_69)), (int32_t)L_73));
		int32_t L_74 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		uint32_t L_75 = V_5;
		uint32_t L_76 = V_13;
		uint32_t L_77;
		L_77 = SHA256Managed_Sigma_1_mA321674AF9F374B645DA44FE4BC05139E63CB2EE(L_76, NULL);
		uint32_t L_78 = V_13;
		uint32_t L_79 = V_12;
		uint32_t L_80 = V_4;
		uint32_t L_81;
		L_81 = SHA256Managed_Ch_mA58A79EF9D9DA08F3B7FC1AE53EBD864E5D9733D(L_78, L_79, L_80, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ((SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields*)il2cpp_codegen_static_fields_for(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var))->____K;
		int32_t L_83 = V_17;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		uint32_t* L_86 = ___0_expandedBuffer;
		int32_t L_87 = V_17;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t L_89 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4))))));
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)L_77)), (int32_t)L_81)), (int32_t)L_85)), L_89));
		uint32_t L_90 = V_1;
		uint32_t L_91 = V_16;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)L_91));
		uint32_t L_92 = V_16;
		uint32_t L_93 = V_9;
		uint32_t L_94;
		L_94 = SHA256Managed_Sigma_0_m3146C6035EC5A565348A6DDB47EA62666B0E19F3(L_93, NULL);
		uint32_t L_95 = V_9;
		uint32_t L_96 = V_8;
		uint32_t L_97 = V_0;
		uint32_t L_98;
		L_98 = SHA256Managed_Maj_m5AD8BD05D5FA1CBE527F72BA3738FB42EB4A3F11(L_95, L_96, L_97, NULL);
		V_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)L_94)), (int32_t)L_98));
		int32_t L_99 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		uint32_t L_100 = V_4;
		uint32_t L_101 = V_15;
		uint32_t L_102;
		L_102 = SHA256Managed_Sigma_1_mA321674AF9F374B645DA44FE4BC05139E63CB2EE(L_101, NULL);
		uint32_t L_103 = V_15;
		uint32_t L_104 = V_13;
		uint32_t L_105 = V_12;
		uint32_t L_106;
		L_106 = SHA256Managed_Ch_mA58A79EF9D9DA08F3B7FC1AE53EBD864E5D9733D(L_103, L_104, L_105, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = ((SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields*)il2cpp_codegen_static_fields_for(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var))->____K;
		int32_t L_108 = V_17;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		uint32_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		uint32_t* L_111 = ___0_expandedBuffer;
		int32_t L_112 = V_17;
		intptr_t L_113 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_112,NULL));
		int32_t L_114 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_111, ((intptr_t)il2cpp_codegen_multiply(L_113, 4))))));
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)L_102)), (int32_t)L_106)), (int32_t)L_110)), L_114));
		uint32_t L_115 = V_0;
		uint32_t L_116 = V_16;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)L_116));
		uint32_t L_117 = V_16;
		uint32_t L_118 = V_10;
		uint32_t L_119;
		L_119 = SHA256Managed_Sigma_0_m3146C6035EC5A565348A6DDB47EA62666B0E19F3(L_118, NULL);
		uint32_t L_120 = V_10;
		uint32_t L_121 = V_9;
		uint32_t L_122 = V_8;
		uint32_t L_123;
		L_123 = SHA256Managed_Maj_m5AD8BD05D5FA1CBE527F72BA3738FB42EB4A3F11(L_120, L_121, L_122, NULL);
		V_11 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)L_119)), (int32_t)L_123));
		int32_t L_124 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_124, 1));
		uint32_t L_125 = V_12;
		uint32_t L_126 = V_14;
		uint32_t L_127;
		L_127 = SHA256Managed_Sigma_1_mA321674AF9F374B645DA44FE4BC05139E63CB2EE(L_126, NULL);
		uint32_t L_128 = V_14;
		uint32_t L_129 = V_15;
		uint32_t L_130 = V_13;
		uint32_t L_131;
		L_131 = SHA256Managed_Ch_mA58A79EF9D9DA08F3B7FC1AE53EBD864E5D9733D(L_128, L_129, L_130, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = ((SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields*)il2cpp_codegen_static_fields_for(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var))->____K;
		int32_t L_133 = V_17;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		uint32_t L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		uint32_t* L_136 = ___0_expandedBuffer;
		int32_t L_137 = V_17;
		intptr_t L_138 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_137,NULL));
		int32_t L_139 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_136, ((intptr_t)il2cpp_codegen_multiply(L_138, 4))))));
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)L_127)), (int32_t)L_131)), (int32_t)L_135)), L_139));
		uint32_t L_140 = V_8;
		uint32_t L_141 = V_16;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)L_141));
		uint32_t L_142 = V_16;
		uint32_t L_143 = V_11;
		uint32_t L_144;
		L_144 = SHA256Managed_Sigma_0_m3146C6035EC5A565348A6DDB47EA62666B0E19F3(L_143, NULL);
		uint32_t L_145 = V_11;
		uint32_t L_146 = V_10;
		uint32_t L_147 = V_9;
		uint32_t L_148;
		L_148 = SHA256Managed_Maj_m5AD8BD05D5FA1CBE527F72BA3738FB42EB4A3F11(L_145, L_146, L_147, NULL);
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)L_144)), (int32_t)L_148));
		int32_t L_149 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_149, 1));
		uint32_t L_150 = V_13;
		uint32_t L_151 = V_6;
		uint32_t L_152;
		L_152 = SHA256Managed_Sigma_1_mA321674AF9F374B645DA44FE4BC05139E63CB2EE(L_151, NULL);
		uint32_t L_153 = V_6;
		uint32_t L_154 = V_14;
		uint32_t L_155 = V_15;
		uint32_t L_156;
		L_156 = SHA256Managed_Ch_mA58A79EF9D9DA08F3B7FC1AE53EBD864E5D9733D(L_153, L_154, L_155, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_157 = ((SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields*)il2cpp_codegen_static_fields_for(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var))->____K;
		int32_t L_158 = V_17;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		uint32_t L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		uint32_t* L_161 = ___0_expandedBuffer;
		int32_t L_162 = V_17;
		intptr_t L_163 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_162,NULL));
		int32_t L_164 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_161, ((intptr_t)il2cpp_codegen_multiply(L_163, 4))))));
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)L_152)), (int32_t)L_156)), (int32_t)L_160)), L_164));
		uint32_t L_165 = V_9;
		uint32_t L_166 = V_16;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_165, (int32_t)L_166));
		uint32_t L_167 = V_16;
		uint32_t L_168 = V_3;
		uint32_t L_169;
		L_169 = SHA256Managed_Sigma_0_m3146C6035EC5A565348A6DDB47EA62666B0E19F3(L_168, NULL);
		uint32_t L_170 = V_3;
		uint32_t L_171 = V_11;
		uint32_t L_172 = V_10;
		uint32_t L_173;
		L_173 = SHA256Managed_Maj_m5AD8BD05D5FA1CBE527F72BA3738FB42EB4A3F11(L_170, L_171, L_172, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_167, (int32_t)L_169)), (int32_t)L_173));
		int32_t L_174 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_174, 1));
		uint32_t L_175 = V_15;
		uint32_t L_176 = V_7;
		uint32_t L_177;
		L_177 = SHA256Managed_Sigma_1_mA321674AF9F374B645DA44FE4BC05139E63CB2EE(L_176, NULL);
		uint32_t L_178 = V_7;
		uint32_t L_179 = V_6;
		uint32_t L_180 = V_14;
		uint32_t L_181;
		L_181 = SHA256Managed_Ch_mA58A79EF9D9DA08F3B7FC1AE53EBD864E5D9733D(L_178, L_179, L_180, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_182 = ((SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields*)il2cpp_codegen_static_fields_for(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var))->____K;
		int32_t L_183 = V_17;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		uint32_t L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		uint32_t* L_186 = ___0_expandedBuffer;
		int32_t L_187 = V_17;
		intptr_t L_188 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_187,NULL));
		int32_t L_189 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_186, ((intptr_t)il2cpp_codegen_multiply(L_188, 4))))));
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_175, (int32_t)L_177)), (int32_t)L_181)), (int32_t)L_185)), L_189));
		uint32_t L_190 = V_10;
		uint32_t L_191 = V_16;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_190, (int32_t)L_191));
		uint32_t L_192 = V_16;
		uint32_t L_193 = V_2;
		uint32_t L_194;
		L_194 = SHA256Managed_Sigma_0_m3146C6035EC5A565348A6DDB47EA62666B0E19F3(L_193, NULL);
		uint32_t L_195 = V_2;
		uint32_t L_196 = V_3;
		uint32_t L_197 = V_11;
		uint32_t L_198;
		L_198 = SHA256Managed_Maj_m5AD8BD05D5FA1CBE527F72BA3738FB42EB4A3F11(L_195, L_196, L_197, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_192, (int32_t)L_194)), (int32_t)L_198));
		int32_t L_199 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_199, 1));
		uint32_t L_200 = V_14;
		uint32_t L_201 = V_5;
		uint32_t L_202;
		L_202 = SHA256Managed_Sigma_1_mA321674AF9F374B645DA44FE4BC05139E63CB2EE(L_201, NULL);
		uint32_t L_203 = V_5;
		uint32_t L_204 = V_7;
		uint32_t L_205 = V_6;
		uint32_t L_206;
		L_206 = SHA256Managed_Ch_mA58A79EF9D9DA08F3B7FC1AE53EBD864E5D9733D(L_203, L_204, L_205, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_207 = ((SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields*)il2cpp_codegen_static_fields_for(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var))->____K;
		int32_t L_208 = V_17;
		NullCheck(L_207);
		int32_t L_209 = L_208;
		uint32_t L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		uint32_t* L_211 = ___0_expandedBuffer;
		int32_t L_212 = V_17;
		intptr_t L_213 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_212,NULL));
		int32_t L_214 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_211, ((intptr_t)il2cpp_codegen_multiply(L_213, 4))))));
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_200, (int32_t)L_202)), (int32_t)L_206)), (int32_t)L_210)), L_214));
		uint32_t L_215 = V_11;
		uint32_t L_216 = V_16;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_215, (int32_t)L_216));
		uint32_t L_217 = V_16;
		uint32_t L_218 = V_1;
		uint32_t L_219;
		L_219 = SHA256Managed_Sigma_0_m3146C6035EC5A565348A6DDB47EA62666B0E19F3(L_218, NULL);
		uint32_t L_220 = V_1;
		uint32_t L_221 = V_2;
		uint32_t L_222 = V_3;
		uint32_t L_223;
		L_223 = SHA256Managed_Maj_m5AD8BD05D5FA1CBE527F72BA3738FB42EB4A3F11(L_220, L_221, L_222, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_217, (int32_t)L_219)), (int32_t)L_223));
		int32_t L_224 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_224, 1));
	}

IL_02b3:
	{
		int32_t L_225 = V_17;
		if ((((int32_t)L_225) < ((int32_t)((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t* L_226 = ___1_state;
		uint32_t* L_227 = L_226;
		int32_t L_228 = ((int32_t)*(L_227));
		uint32_t L_229 = V_0;
		*(((int32_t*)L_227)) = ((int32_t)il2cpp_codegen_add(L_228, (int32_t)L_229));
		uint32_t* L_230 = ___1_state;
		uint32_t* L_231 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_230, 4));
		int32_t L_232 = ((int32_t)*(L_231));
		uint32_t L_233 = V_1;
		*(((int32_t*)L_231)) = ((int32_t)il2cpp_codegen_add(L_232, (int32_t)L_233));
		uint32_t* L_234 = ___1_state;
		intptr_t L_235 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		uint32_t* L_236 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_234, ((intptr_t)il2cpp_codegen_multiply(L_235, 4))));
		int32_t L_237 = ((int32_t)*(L_236));
		uint32_t L_238 = V_2;
		*(((int32_t*)L_236)) = ((int32_t)il2cpp_codegen_add(L_237, (int32_t)L_238));
		uint32_t* L_239 = ___1_state;
		intptr_t L_240 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		uint32_t* L_241 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_239, ((intptr_t)il2cpp_codegen_multiply(L_240, 4))));
		int32_t L_242 = ((int32_t)*(L_241));
		uint32_t L_243 = V_3;
		*(((int32_t*)L_241)) = ((int32_t)il2cpp_codegen_add(L_242, (int32_t)L_243));
		uint32_t* L_244 = ___1_state;
		intptr_t L_245 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		uint32_t* L_246 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_244, ((intptr_t)il2cpp_codegen_multiply(L_245, 4))));
		int32_t L_247 = ((int32_t)*(L_246));
		uint32_t L_248 = V_4;
		*(((int32_t*)L_246)) = ((int32_t)il2cpp_codegen_add(L_247, (int32_t)L_248));
		uint32_t* L_249 = ___1_state;
		intptr_t L_250 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		uint32_t* L_251 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_249, ((intptr_t)il2cpp_codegen_multiply(L_250, 4))));
		int32_t L_252 = ((int32_t)*(L_251));
		uint32_t L_253 = V_5;
		*(((int32_t*)L_251)) = ((int32_t)il2cpp_codegen_add(L_252, (int32_t)L_253));
		uint32_t* L_254 = ___1_state;
		intptr_t L_255 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		uint32_t* L_256 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_254, ((intptr_t)il2cpp_codegen_multiply(L_255, 4))));
		int32_t L_257 = ((int32_t)*(L_256));
		uint32_t L_258 = V_7;
		*(((int32_t*)L_256)) = ((int32_t)il2cpp_codegen_add(L_257, (int32_t)L_258));
		uint32_t* L_259 = ___1_state;
		intptr_t L_260 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		uint32_t* L_261 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_259, ((intptr_t)il2cpp_codegen_multiply(L_260, 4))));
		int32_t L_262 = ((int32_t)*(L_261));
		uint32_t L_263 = V_6;
		*(((int32_t*)L_261)) = ((int32_t)il2cpp_codegen_add(L_262, (int32_t)L_263));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B (uint32_t ___0_x, int32_t ___1_n, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		int32_t L_1 = ___1_n;
		uint32_t L_2 = ___0_x;
		int32_t L_3 = ___1_n;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)(L_1&((int32_t)31)))))|((int32_t)((int32_t)L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_Ch_mA58A79EF9D9DA08F3B7FC1AE53EBD864E5D9733D (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		uint32_t L_1 = ___1_y;
		uint32_t L_2 = ___0_x;
		uint32_t L_3 = ___2_z;
		return ((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))^((int32_t)(((int32_t)((int32_t)L_2^(-1)))&(int32_t)L_3))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_Maj_m5AD8BD05D5FA1CBE527F72BA3738FB42EB4A3F11 (uint32_t ___0_x, uint32_t ___1_y, uint32_t ___2_z, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		uint32_t L_1 = ___1_y;
		uint32_t L_2 = ___0_x;
		uint32_t L_3 = ___2_z;
		uint32_t L_4 = ___1_y;
		uint32_t L_5 = ___2_z;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))^((int32_t)((int32_t)L_2&(int32_t)L_3))))^((int32_t)((int32_t)L_4&(int32_t)L_5))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_sigma_0_mDC3E4ED93A72E3F08397D2A78F360B1BBE005F88 (uint32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit);
	{
		uint32_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit,(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_1;
		L_1 = SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B(L_0, 7, NULL);
		uint32_t L_2 = ___0_x;
		uint32_t L_3;
		L_3 = SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B(L_2, ((int32_t)18), NULL);
		uint32_t L_4 = ___0_x;
		return ((int32_t)(((int32_t)((int32_t)L_1^(int32_t)L_3))^((int32_t)((uint32_t)L_4>>3))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_sigma_1_mB4128D82D412D98B7F32476C29120DF75DF5F27A (uint32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit);
	{
		uint32_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit,(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_1;
		L_1 = SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B(L_0, ((int32_t)17), NULL);
		uint32_t L_2 = ___0_x;
		uint32_t L_3;
		L_3 = SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B(L_2, ((int32_t)19), NULL);
		uint32_t L_4 = ___0_x;
		return ((int32_t)(((int32_t)((int32_t)L_1^(int32_t)L_3))^((int32_t)((uint32_t)L_4>>((int32_t)10)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_Sigma_0_m3146C6035EC5A565348A6DDB47EA62666B0E19F3 (uint32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit);
	{
		uint32_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit,(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_1;
		L_1 = SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B(L_0, 2, NULL);
		uint32_t L_2 = ___0_x;
		uint32_t L_3;
		L_3 = SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B(L_2, ((int32_t)13), NULL);
		uint32_t L_4 = ___0_x;
		uint32_t L_5;
		L_5 = SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B(L_4, ((int32_t)22), NULL);
		return ((int32_t)(((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SHA256Managed_Sigma_1_mA321674AF9F374B645DA44FE4BC05139E63CB2EE (uint32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit);
	{
		uint32_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit,(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_1;
		L_1 = SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B(L_0, 6, NULL);
		uint32_t L_2 = ___0_x;
		uint32_t L_3;
		L_3 = SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B(L_2, ((int32_t)11), NULL);
		uint32_t L_4 = ___0_x;
		uint32_t L_5;
		L_5 = SHA256Managed_RotateRight_mDACE3DA189C25603CA651D0A3BB9B1714347D25B(L_4, ((int32_t)25), NULL);
		return ((int32_t)(((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed_SHA256Expand_mB01374BE8E2726FBE899199B2AA6B56C00067A91 (uint32_t* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit);
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)16);
		goto IL_0043;
	}

IL_0005:
	{
		uint32_t* L_0 = ___0_x;
		int32_t L_1 = V_0;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t* L_3 = ___0_x;
		int32_t L_4 = V_0;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_4, 2)),NULL));
		int32_t L_6 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 4))))));
		CHECKED_LOCAL_INIT(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticInit,(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_7;
		L_7 = SHA256Managed_sigma_1_mB4128D82D412D98B7F32476C29120DF75DF5F27A(L_6, NULL);
		uint32_t* L_8 = ___0_x;
		int32_t L_9 = V_0;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_9, 7)),NULL));
		int32_t L_11 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4))))));
		uint32_t* L_12 = ___0_x;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)15))),NULL));
		int32_t L_15 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, 4))))));
		uint32_t L_16;
		L_16 = SHA256Managed_sigma_0_mDC3E4ED93A72E3F08397D2A78F360B1BBE005F88(L_15, NULL);
		uint32_t* L_17 = ___0_x;
		int32_t L_18 = V_0;
		intptr_t L_19 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16))),NULL));
		int32_t L_20 = ((int32_t)*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(L_19, 4))))));
		*(((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 4)))))) = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_7, L_11)), (int32_t)L_16)), L_20));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0043:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)64))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA256Managed__cctor_m07D52B1CBD704628AF70A9232977A56FEA354517 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		Il2CppFieldRvaData L_2 = {U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_1, L_2);
		((SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields*)il2cpp_codegen_static_fields_for(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var))->____K = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_StaticFields*)il2cpp_codegen_static_fields_for(SHA256Managed_tEAE28B435F58357D5C98CDA1AD29B2130C1EAD5C_il2cpp_TypeInfo_var))->____K), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384__ctor_m740B58543790E70202E16FED9828E57079491452 (SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631* __this, const RuntimeMethod* method) 
{
	{
		HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708(__this, NULL);
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue = ((int32_t)384);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA384_tF08F34C59E6C681882B9DEF2EF07C1A57C45E631* SHA384_Create_m9ACE4F589597C30B8BB648320B201C9DBCACDD4D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* L_0 = (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC*)il2cpp_codegen_object_new(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var);
		SHA384Managed__ctor_m74FB06DE60901FB22E145BFEFD3DB27EF0F2B4AB(L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed__ctor_m74FB06DE60901FB22E145BFEFD3DB27EF0F2B4AB (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit);
	{
		SHA384__ctor_m740B58543790E70202E16FED9828E57079491452(__this, NULL);
		CHECKED_LOCAL_INIT(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit,(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = CryptoConfig_get_AllowOnlyFipsAlgorithms_mA16FE662AA39F2F95122B1DF80564FD3C3EECF6B(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17BA770D472146F14CBDE2CFF7752F076430BCBE)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SHA384Managed__ctor_m74FB06DE60901FB22E145BFEFD3DB27EF0F2B4AB_RuntimeMethod_var)));
	}

IL_001d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____stateSHA384 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stateSHA384), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->____buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer), (void*)L_4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->____W = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____W), (void*)L_5);
		SHA384Managed_InitializeState_mE066CAD46BA745F2A32D304B9D6571C8FD0404DC(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed_Initialize_mD5DA8B022EC226D5B058D81DD69343AE4C02A7F3 (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* __this, const RuntimeMethod* method) 
{
	{
		SHA384Managed_InitializeState_mE066CAD46BA745F2A32D304B9D6571C8FD0404DC(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, L_2, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____W;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->____W;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed_HashCore_m7DECF246123878E410D9C32033A239B30862EF0C (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgb, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgb;
		int32_t L_1 = ___1_ibStart;
		int32_t L_2 = ___2_cbSize;
		SHA384Managed__HashData_m67836C08CD5748E149087A8E92A1C0402D2F384B(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA384Managed_HashFinal_m599E3AB5810ADD3341D7F67FC19C6DEE071DEBBD (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = SHA384Managed__EndHash_m94A87B2D16129D81A39225A280302DCE27CE5EDE(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed_InitializeState_mE066CAD46BA745F2A32D304B9D6571C8FD0404DC (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		__this->____count = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____stateSHA384;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)-3766243637369397544LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->____stateSHA384;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)7105036623409894663LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____stateSHA384;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)((int64_t)-7973340178411365097LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->____stateSHA384;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)((int64_t)1526699215303891257LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->____stateSHA384;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)((int64_t)7436329637833083697LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->____stateSHA384;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)((int64_t)-8163818279084223215LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->____stateSHA384;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)((int64_t)-2662702644619276377LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->____stateSHA384;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)((int64_t)5167115440072839076LL));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed__HashData_m67836C08CD5748E149087A8E92A1C0402D2F384B (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_partIn, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint64_t* V_3 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_4 = NULL;
	uint8_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	uint64_t* V_7 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_8 = NULL;
	{
		int32_t L_0 = ___2_cbSize;
		V_1 = L_0;
		int32_t L_1 = ___1_ibStart;
		V_2 = L_1;
		uint64_t L_2 = __this->____count;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)127),NULL));
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_2&L_3)),NULL));
		V_0 = L_4;
		uint64_t L_5 = __this->____count;
		int32_t L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		__this->____count = ((int64_t)il2cpp_codegen_add((int64_t)L_5, L_7));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->____stateSHA384;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = L_8;
		V_4 = L_9;
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if (L_11)
		{
			goto IL_0035;
		}
	}

IL_0030:
	{
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (uint64_t*)L_12;
		goto IL_003f;
	}

IL_0035:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = V_4;
		NullCheck(L_13);
		uintptr_t L_14 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_3 = (uint64_t*)L_14;
	}

IL_003f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
		V_6 = L_16;
		if (!L_16)
		{
			goto IL_0050;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_6;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if (L_18)
		{
			goto IL_0056;
		}
	}

IL_0050:
	{
		uintptr_t L_19 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_5 = (uint8_t*)L_19;
		goto IL_0061;
	}

IL_0056:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_6;
		NullCheck(L_20);
		uintptr_t L_21 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_5 = (uint8_t*)L_21;
	}

IL_0061:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = __this->____W;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = L_22;
		V_8 = L_23;
		if (!L_23)
		{
			goto IL_0072;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = V_8;
		NullCheck(L_24);
		int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
		if (L_25)
		{
			goto IL_0078;
		}
	}

IL_0072:
	{
		uintptr_t L_26 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_7 = (uint64_t*)L_26;
		goto IL_0083;
	}

IL_0078:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = V_8;
		NullCheck(L_27);
		uintptr_t L_28 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_7 = (uint64_t*)L_28;
	}

IL_0083:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_30, L_31))) < ((int32_t)((int32_t)128))))
		{
			goto IL_00f7;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_partIn;
		int32_t L_33 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->____buffer;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		bool L_37;
		L_37 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_32, L_33, (RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_36)), NULL);
		int32_t L_38 = V_2;
		int32_t L_39 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_39))));
		int32_t L_40 = V_1;
		int32_t L_41 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_41))));
		uint64_t* L_42 = V_7;
		uint64_t* L_43 = V_3;
		uint8_t* L_44 = V_5;
		CHECKED_LOCAL_INIT(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit,(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SHA384Managed_SHATransform_m0E466584B58EDD0BE8F1D859FED12B06A441849F(L_42, L_43, L_44, NULL);
		V_0 = 0;
		goto IL_00f7;
	}

IL_00c9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___0_partIn;
		int32_t L_46 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->____buffer;
		bool L_48;
		L_48 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_45, L_46, (RuntimeArray*)L_47, 0, ((int32_t)128), NULL);
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, ((int32_t)128)));
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_50, ((int32_t)128)));
		uint64_t* L_51 = V_7;
		uint64_t* L_52 = V_3;
		uint8_t* L_53 = V_5;
		CHECKED_LOCAL_INIT(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit,(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SHA384Managed_SHATransform_m0E466584B58EDD0BE8F1D859FED12B06A441849F(L_51, L_52, L_53, NULL);
	}

IL_00f7:
	{
		int32_t L_54 = V_1;
		if ((((int32_t)L_54) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_partIn;
		int32_t L_57 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->____buffer;
		int32_t L_59 = V_0;
		int32_t L_60 = V_1;
		bool L_61;
		L_61 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_56, L_57, (RuntimeArray*)L_58, L_59, L_60, NULL);
	}

IL_0113:
	{
		V_8 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
		V_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA384Managed__EndHash_m94A87B2D16129D81A39225A280302DCE27CE5EDE (SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		V_3 = L_0;
		uint64_t L_1 = __this->____count;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)127),NULL));
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_1&L_2)),NULL));
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_3));
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)16))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)128)));
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		uint64_t L_9 = __this->____count;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_9, L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		int32_t L_12 = V_1;
		uint64_t L_13 = V_2;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_15 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_13>>((int32_t)56)))&L_14)),NULL));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_12, 8))), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		int32_t L_17 = V_1;
		uint64_t L_18 = V_2;
		int64_t L_19 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_20 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_18>>((int32_t)48)))&L_19)),NULL));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_17, 7))), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		uint64_t L_23 = V_2;
		int64_t L_24 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_25 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_23>>((int32_t)40)))&L_24)),NULL));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_22, 6))), (uint8_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		int32_t L_27 = V_1;
		uint64_t L_28 = V_2;
		int64_t L_29 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_30 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_28>>((int32_t)32)))&L_29)),NULL));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_27, 5))), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_0;
		int32_t L_32 = V_1;
		uint64_t L_33 = V_2;
		int64_t L_34 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_35 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_33>>((int32_t)24)))&L_34)),NULL));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_32, 4))), (uint8_t)L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		int32_t L_37 = V_1;
		uint64_t L_38 = V_2;
		int64_t L_39 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_40 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_38>>((int32_t)16)))&L_39)),NULL));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_37, 3))), (uint8_t)L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_0;
		int32_t L_42 = V_1;
		uint64_t L_43 = V_2;
		int64_t L_44 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_45 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_43>>8))&L_44)),NULL));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_42, 2))), (uint8_t)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = V_1;
		uint64_t L_48 = V_2;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_50 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_48&L_49)),NULL));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_47, 1))), (uint8_t)L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		SHA384Managed__HashData_m67836C08CD5748E149087A8E92A1C0402D2F384B(__this, L_51, 0, L_53, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_55 = __this->____stateSHA384;
		Utils_QuadWordToBigEndian_m59FADC7929A070E26FE5D3529C5B714906361210(L_54, L_55, 6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_3;
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue), (void*)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_3;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed_SHATransform_m0E466584B58EDD0BE8F1D859FED12B06A441849F (uint64_t* ___0_expandedBuffer, uint64_t* ___1_state, uint8_t* ___2_block, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit);
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	int32_t V_17 = 0;
	{
		uint64_t* L_0 = ___1_state;
		int64_t L_1 = *(((int64_t*)L_0));
		V_0 = L_1;
		uint64_t* L_2 = ___1_state;
		int64_t L_3 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_2, 8))));
		V_1 = L_3;
		uint64_t* L_4 = ___1_state;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int64_t L_6 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(L_5, 8))))));
		V_2 = L_6;
		uint64_t* L_7 = ___1_state;
		intptr_t L_8 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int64_t L_9 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_8, 8))))));
		V_3 = L_9;
		uint64_t* L_10 = ___1_state;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int64_t L_12 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(L_11, 8))))));
		V_4 = L_12;
		uint64_t* L_13 = ___1_state;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int64_t L_15 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_14, 8))))));
		V_5 = L_15;
		uint64_t* L_16 = ___1_state;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int64_t L_18 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_17, 8))))));
		V_6 = L_18;
		uint64_t* L_19 = ___1_state;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int64_t L_21 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_20, 8))))));
		V_7 = L_21;
		uint64_t* L_22 = ___0_expandedBuffer;
		uint8_t* L_23 = ___2_block;
		Utils_QuadWordFromBigEndian_m89F610D4C743DFF4E9D4C12E00F6F9F4060C9B65(L_22, ((int32_t)16), L_23, NULL);
		uint64_t* L_24 = ___0_expandedBuffer;
		CHECKED_LOCAL_INIT(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit,(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SHA384Managed_SHA384Expand_mF4100DF582DC5954876CB1059BAA9E55497F8677(L_24, NULL);
		V_17 = 0;
		goto IL_02b3;
	}

IL_0053:
	{
		uint64_t L_25 = V_7;
		uint64_t L_26 = V_4;
		CHECKED_LOCAL_INIT(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit,(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_27;
		L_27 = SHA384Managed_Sigma_1_m8C1F4CD35998186DEC3118591BD2F522CD57EAA4(L_26, NULL);
		uint64_t L_28 = V_4;
		uint64_t L_29 = V_5;
		uint64_t L_30 = V_6;
		uint64_t L_31;
		L_31 = SHA384Managed_Ch_mCB44386434A98BEA39555D2191E589B44B223EE8(L_28, L_29, L_30, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ((SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticFields*)il2cpp_codegen_static_fields_for(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var))->____K;
		int32_t L_33 = V_17;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int64_t L_35 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		uint64_t* L_36 = ___0_expandedBuffer;
		int32_t L_37 = V_17;
		intptr_t L_38 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_37,NULL));
		int64_t L_39 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(L_38, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_25, (int64_t)L_27)), (int64_t)L_31)), L_35)), L_39));
		uint64_t L_40 = V_3;
		uint64_t L_41 = V_16;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, (int64_t)L_41));
		uint64_t L_42 = V_16;
		uint64_t L_43 = V_0;
		uint64_t L_44;
		L_44 = SHA384Managed_Sigma_0_mE815A3D33B61D725A3A183B58A17B81F618B60EF(L_43, NULL);
		uint64_t L_45 = V_0;
		uint64_t L_46 = V_1;
		uint64_t L_47 = V_2;
		uint64_t L_48;
		L_48 = SHA384Managed_Maj_m8A89CFA2F06F32A9DEB2274143462944FFFFA7DE(L_45, L_46, L_47, NULL);
		V_8 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_42, (int64_t)L_44)), (int64_t)L_48));
		int32_t L_49 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		uint64_t L_50 = V_6;
		uint64_t L_51 = V_12;
		uint64_t L_52;
		L_52 = SHA384Managed_Sigma_1_m8C1F4CD35998186DEC3118591BD2F522CD57EAA4(L_51, NULL);
		uint64_t L_53 = V_12;
		uint64_t L_54 = V_4;
		uint64_t L_55 = V_5;
		uint64_t L_56;
		L_56 = SHA384Managed_Ch_mCB44386434A98BEA39555D2191E589B44B223EE8(L_53, L_54, L_55, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_57 = ((SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticFields*)il2cpp_codegen_static_fields_for(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var))->____K;
		int32_t L_58 = V_17;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int64_t L_60 = (int64_t)(L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		uint64_t* L_61 = ___0_expandedBuffer;
		int32_t L_62 = V_17;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int64_t L_64 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_50, (int64_t)L_52)), (int64_t)L_56)), L_60)), L_64));
		uint64_t L_65 = V_2;
		uint64_t L_66 = V_16;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, (int64_t)L_66));
		uint64_t L_67 = V_16;
		uint64_t L_68 = V_8;
		uint64_t L_69;
		L_69 = SHA384Managed_Sigma_0_mE815A3D33B61D725A3A183B58A17B81F618B60EF(L_68, NULL);
		uint64_t L_70 = V_8;
		uint64_t L_71 = V_0;
		uint64_t L_72 = V_1;
		uint64_t L_73;
		L_73 = SHA384Managed_Maj_m8A89CFA2F06F32A9DEB2274143462944FFFFA7DE(L_70, L_71, L_72, NULL);
		V_9 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_67, (int64_t)L_69)), (int64_t)L_73));
		int32_t L_74 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		uint64_t L_75 = V_5;
		uint64_t L_76 = V_13;
		uint64_t L_77;
		L_77 = SHA384Managed_Sigma_1_m8C1F4CD35998186DEC3118591BD2F522CD57EAA4(L_76, NULL);
		uint64_t L_78 = V_13;
		uint64_t L_79 = V_12;
		uint64_t L_80 = V_4;
		uint64_t L_81;
		L_81 = SHA384Managed_Ch_mCB44386434A98BEA39555D2191E589B44B223EE8(L_78, L_79, L_80, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_82 = ((SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticFields*)il2cpp_codegen_static_fields_for(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var))->____K;
		int32_t L_83 = V_17;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int64_t L_85 = (int64_t)(L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		uint64_t* L_86 = ___0_expandedBuffer;
		int32_t L_87 = V_17;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int64_t L_89 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_75, (int64_t)L_77)), (int64_t)L_81)), L_85)), L_89));
		uint64_t L_90 = V_1;
		uint64_t L_91 = V_16;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_90, (int64_t)L_91));
		uint64_t L_92 = V_16;
		uint64_t L_93 = V_9;
		uint64_t L_94;
		L_94 = SHA384Managed_Sigma_0_mE815A3D33B61D725A3A183B58A17B81F618B60EF(L_93, NULL);
		uint64_t L_95 = V_9;
		uint64_t L_96 = V_8;
		uint64_t L_97 = V_0;
		uint64_t L_98;
		L_98 = SHA384Managed_Maj_m8A89CFA2F06F32A9DEB2274143462944FFFFA7DE(L_95, L_96, L_97, NULL);
		V_10 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_92, (int64_t)L_94)), (int64_t)L_98));
		int32_t L_99 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		uint64_t L_100 = V_4;
		uint64_t L_101 = V_15;
		uint64_t L_102;
		L_102 = SHA384Managed_Sigma_1_m8C1F4CD35998186DEC3118591BD2F522CD57EAA4(L_101, NULL);
		uint64_t L_103 = V_15;
		uint64_t L_104 = V_13;
		uint64_t L_105 = V_12;
		uint64_t L_106;
		L_106 = SHA384Managed_Ch_mCB44386434A98BEA39555D2191E589B44B223EE8(L_103, L_104, L_105, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_107 = ((SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticFields*)il2cpp_codegen_static_fields_for(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var))->____K;
		int32_t L_108 = V_17;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		int64_t L_110 = (int64_t)(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		uint64_t* L_111 = ___0_expandedBuffer;
		int32_t L_112 = V_17;
		intptr_t L_113 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_112,NULL));
		int64_t L_114 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_111, ((intptr_t)il2cpp_codegen_multiply(L_113, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_100, (int64_t)L_102)), (int64_t)L_106)), L_110)), L_114));
		uint64_t L_115 = V_0;
		uint64_t L_116 = V_16;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, (int64_t)L_116));
		uint64_t L_117 = V_16;
		uint64_t L_118 = V_10;
		uint64_t L_119;
		L_119 = SHA384Managed_Sigma_0_mE815A3D33B61D725A3A183B58A17B81F618B60EF(L_118, NULL);
		uint64_t L_120 = V_10;
		uint64_t L_121 = V_9;
		uint64_t L_122 = V_8;
		uint64_t L_123;
		L_123 = SHA384Managed_Maj_m8A89CFA2F06F32A9DEB2274143462944FFFFA7DE(L_120, L_121, L_122, NULL);
		V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_117, (int64_t)L_119)), (int64_t)L_123));
		int32_t L_124 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_124, 1));
		uint64_t L_125 = V_12;
		uint64_t L_126 = V_14;
		uint64_t L_127;
		L_127 = SHA384Managed_Sigma_1_m8C1F4CD35998186DEC3118591BD2F522CD57EAA4(L_126, NULL);
		uint64_t L_128 = V_14;
		uint64_t L_129 = V_15;
		uint64_t L_130 = V_13;
		uint64_t L_131;
		L_131 = SHA384Managed_Ch_mCB44386434A98BEA39555D2191E589B44B223EE8(L_128, L_129, L_130, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_132 = ((SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticFields*)il2cpp_codegen_static_fields_for(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var))->____K;
		int32_t L_133 = V_17;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		int64_t L_135 = (int64_t)(L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		uint64_t* L_136 = ___0_expandedBuffer;
		int32_t L_137 = V_17;
		intptr_t L_138 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_137,NULL));
		int64_t L_139 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_136, ((intptr_t)il2cpp_codegen_multiply(L_138, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_125, (int64_t)L_127)), (int64_t)L_131)), L_135)), L_139));
		uint64_t L_140 = V_8;
		uint64_t L_141 = V_16;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, (int64_t)L_141));
		uint64_t L_142 = V_16;
		uint64_t L_143 = V_11;
		uint64_t L_144;
		L_144 = SHA384Managed_Sigma_0_mE815A3D33B61D725A3A183B58A17B81F618B60EF(L_143, NULL);
		uint64_t L_145 = V_11;
		uint64_t L_146 = V_10;
		uint64_t L_147 = V_9;
		uint64_t L_148;
		L_148 = SHA384Managed_Maj_m8A89CFA2F06F32A9DEB2274143462944FFFFA7DE(L_145, L_146, L_147, NULL);
		V_3 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_142, (int64_t)L_144)), (int64_t)L_148));
		int32_t L_149 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_149, 1));
		uint64_t L_150 = V_13;
		uint64_t L_151 = V_7;
		uint64_t L_152;
		L_152 = SHA384Managed_Sigma_1_m8C1F4CD35998186DEC3118591BD2F522CD57EAA4(L_151, NULL);
		uint64_t L_153 = V_7;
		uint64_t L_154 = V_14;
		uint64_t L_155 = V_15;
		uint64_t L_156;
		L_156 = SHA384Managed_Ch_mCB44386434A98BEA39555D2191E589B44B223EE8(L_153, L_154, L_155, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_157 = ((SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticFields*)il2cpp_codegen_static_fields_for(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var))->____K;
		int32_t L_158 = V_17;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		int64_t L_160 = (int64_t)(L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		uint64_t* L_161 = ___0_expandedBuffer;
		int32_t L_162 = V_17;
		intptr_t L_163 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_162,NULL));
		int64_t L_164 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_161, ((intptr_t)il2cpp_codegen_multiply(L_163, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_150, (int64_t)L_152)), (int64_t)L_156)), L_160)), L_164));
		uint64_t L_165 = V_9;
		uint64_t L_166 = V_16;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_165, (int64_t)L_166));
		uint64_t L_167 = V_16;
		uint64_t L_168 = V_3;
		uint64_t L_169;
		L_169 = SHA384Managed_Sigma_0_mE815A3D33B61D725A3A183B58A17B81F618B60EF(L_168, NULL);
		uint64_t L_170 = V_3;
		uint64_t L_171 = V_11;
		uint64_t L_172 = V_10;
		uint64_t L_173;
		L_173 = SHA384Managed_Maj_m8A89CFA2F06F32A9DEB2274143462944FFFFA7DE(L_170, L_171, L_172, NULL);
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_167, (int64_t)L_169)), (int64_t)L_173));
		int32_t L_174 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_174, 1));
		uint64_t L_175 = V_15;
		uint64_t L_176 = V_6;
		uint64_t L_177;
		L_177 = SHA384Managed_Sigma_1_m8C1F4CD35998186DEC3118591BD2F522CD57EAA4(L_176, NULL);
		uint64_t L_178 = V_6;
		uint64_t L_179 = V_7;
		uint64_t L_180 = V_14;
		uint64_t L_181;
		L_181 = SHA384Managed_Ch_mCB44386434A98BEA39555D2191E589B44B223EE8(L_178, L_179, L_180, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_182 = ((SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticFields*)il2cpp_codegen_static_fields_for(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var))->____K;
		int32_t L_183 = V_17;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		int64_t L_185 = (int64_t)(L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		uint64_t* L_186 = ___0_expandedBuffer;
		int32_t L_187 = V_17;
		intptr_t L_188 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_187,NULL));
		int64_t L_189 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_186, ((intptr_t)il2cpp_codegen_multiply(L_188, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_175, (int64_t)L_177)), (int64_t)L_181)), L_185)), L_189));
		uint64_t L_190 = V_10;
		uint64_t L_191 = V_16;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, (int64_t)L_191));
		uint64_t L_192 = V_16;
		uint64_t L_193 = V_2;
		uint64_t L_194;
		L_194 = SHA384Managed_Sigma_0_mE815A3D33B61D725A3A183B58A17B81F618B60EF(L_193, NULL);
		uint64_t L_195 = V_2;
		uint64_t L_196 = V_3;
		uint64_t L_197 = V_11;
		uint64_t L_198;
		L_198 = SHA384Managed_Maj_m8A89CFA2F06F32A9DEB2274143462944FFFFA7DE(L_195, L_196, L_197, NULL);
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_192, (int64_t)L_194)), (int64_t)L_198));
		int32_t L_199 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_199, 1));
		uint64_t L_200 = V_14;
		uint64_t L_201 = V_5;
		uint64_t L_202;
		L_202 = SHA384Managed_Sigma_1_m8C1F4CD35998186DEC3118591BD2F522CD57EAA4(L_201, NULL);
		uint64_t L_203 = V_5;
		uint64_t L_204 = V_6;
		uint64_t L_205 = V_7;
		uint64_t L_206;
		L_206 = SHA384Managed_Ch_mCB44386434A98BEA39555D2191E589B44B223EE8(L_203, L_204, L_205, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_207 = ((SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticFields*)il2cpp_codegen_static_fields_for(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var))->____K;
		int32_t L_208 = V_17;
		NullCheck(L_207);
		int32_t L_209 = L_208;
		int64_t L_210 = (int64_t)(L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		uint64_t* L_211 = ___0_expandedBuffer;
		int32_t L_212 = V_17;
		intptr_t L_213 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_212,NULL));
		int64_t L_214 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_211, ((intptr_t)il2cpp_codegen_multiply(L_213, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_200, (int64_t)L_202)), (int64_t)L_206)), L_210)), L_214));
		uint64_t L_215 = V_11;
		uint64_t L_216 = V_16;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_215, (int64_t)L_216));
		uint64_t L_217 = V_16;
		uint64_t L_218 = V_1;
		uint64_t L_219;
		L_219 = SHA384Managed_Sigma_0_mE815A3D33B61D725A3A183B58A17B81F618B60EF(L_218, NULL);
		uint64_t L_220 = V_1;
		uint64_t L_221 = V_2;
		uint64_t L_222 = V_3;
		uint64_t L_223;
		L_223 = SHA384Managed_Maj_m8A89CFA2F06F32A9DEB2274143462944FFFFA7DE(L_220, L_221, L_222, NULL);
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_217, (int64_t)L_219)), (int64_t)L_223));
		int32_t L_224 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_224, 1));
	}

IL_02b3:
	{
		int32_t L_225 = V_17;
		if ((((int32_t)L_225) < ((int32_t)((int32_t)80))))
		{
			goto IL_0053;
		}
	}
	{
		uint64_t* L_226 = ___1_state;
		uint64_t* L_227 = L_226;
		int64_t L_228 = *(((int64_t*)L_227));
		uint64_t L_229 = V_0;
		*(((int64_t*)L_227)) = ((int64_t)il2cpp_codegen_add(L_228, (int64_t)L_229));
		uint64_t* L_230 = ___1_state;
		uint64_t* L_231 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_230, 8));
		int64_t L_232 = *(((int64_t*)L_231));
		uint64_t L_233 = V_1;
		*(((int64_t*)L_231)) = ((int64_t)il2cpp_codegen_add(L_232, (int64_t)L_233));
		uint64_t* L_234 = ___1_state;
		intptr_t L_235 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t* L_236 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_234, ((intptr_t)il2cpp_codegen_multiply(L_235, 8))));
		int64_t L_237 = *(((int64_t*)L_236));
		uint64_t L_238 = V_2;
		*(((int64_t*)L_236)) = ((int64_t)il2cpp_codegen_add(L_237, (int64_t)L_238));
		uint64_t* L_239 = ___1_state;
		intptr_t L_240 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t* L_241 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_239, ((intptr_t)il2cpp_codegen_multiply(L_240, 8))));
		int64_t L_242 = *(((int64_t*)L_241));
		uint64_t L_243 = V_3;
		*(((int64_t*)L_241)) = ((int64_t)il2cpp_codegen_add(L_242, (int64_t)L_243));
		uint64_t* L_244 = ___1_state;
		intptr_t L_245 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t* L_246 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_244, ((intptr_t)il2cpp_codegen_multiply(L_245, 8))));
		int64_t L_247 = *(((int64_t*)L_246));
		uint64_t L_248 = V_4;
		*(((int64_t*)L_246)) = ((int64_t)il2cpp_codegen_add(L_247, (int64_t)L_248));
		uint64_t* L_249 = ___1_state;
		intptr_t L_250 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t* L_251 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_249, ((intptr_t)il2cpp_codegen_multiply(L_250, 8))));
		int64_t L_252 = *(((int64_t*)L_251));
		uint64_t L_253 = V_5;
		*(((int64_t*)L_251)) = ((int64_t)il2cpp_codegen_add(L_252, (int64_t)L_253));
		uint64_t* L_254 = ___1_state;
		intptr_t L_255 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t* L_256 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_254, ((intptr_t)il2cpp_codegen_multiply(L_255, 8))));
		int64_t L_257 = *(((int64_t*)L_256));
		uint64_t L_258 = V_6;
		*(((int64_t*)L_256)) = ((int64_t)il2cpp_codegen_add(L_257, (int64_t)L_258));
		uint64_t* L_259 = ___1_state;
		intptr_t L_260 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t* L_261 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_259, ((intptr_t)il2cpp_codegen_multiply(L_260, 8))));
		int64_t L_262 = *(((int64_t*)L_261));
		uint64_t L_263 = V_7;
		*(((int64_t*)L_261)) = ((int64_t)il2cpp_codegen_add(L_262, (int64_t)L_263));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806 (uint64_t ___0_x, int32_t ___1_n, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		int32_t L_1 = ___1_n;
		uint64_t L_2 = ___0_x;
		int32_t L_3 = ___1_n;
		return ((int64_t)(((int64_t)((uint64_t)L_0>>((int32_t)(L_1&((int32_t)63)))))|((int64_t)((int64_t)L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_3))&((int32_t)63)))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_Ch_mCB44386434A98BEA39555D2191E589B44B223EE8 (uint64_t ___0_x, uint64_t ___1_y, uint64_t ___2_z, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		uint64_t L_1 = ___1_y;
		uint64_t L_2 = ___0_x;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint64_t L_4 = ___2_z;
		return ((int64_t)(((int64_t)((int64_t)L_0&(int64_t)L_1))^((int64_t)(((int64_t)((int64_t)L_2^L_3))&(int64_t)L_4))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_Maj_m8A89CFA2F06F32A9DEB2274143462944FFFFA7DE (uint64_t ___0_x, uint64_t ___1_y, uint64_t ___2_z, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		uint64_t L_1 = ___1_y;
		uint64_t L_2 = ___0_x;
		uint64_t L_3 = ___2_z;
		uint64_t L_4 = ___1_y;
		uint64_t L_5 = ___2_z;
		return ((int64_t)(((int64_t)(((int64_t)((int64_t)L_0&(int64_t)L_1))^((int64_t)((int64_t)L_2&(int64_t)L_3))))^((int64_t)((int64_t)L_4&(int64_t)L_5))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_Sigma_0_mE815A3D33B61D725A3A183B58A17B81F618B60EF (uint64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit);
	{
		uint64_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit,(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_1;
		L_1 = SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806(L_0, ((int32_t)28), NULL);
		uint64_t L_2 = ___0_x;
		uint64_t L_3;
		L_3 = SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806(L_2, ((int32_t)34), NULL);
		uint64_t L_4 = ___0_x;
		uint64_t L_5;
		L_5 = SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806(L_4, ((int32_t)39), NULL);
		return ((int64_t)(((int64_t)((int64_t)L_1^(int64_t)L_3))^(int64_t)L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_Sigma_1_m8C1F4CD35998186DEC3118591BD2F522CD57EAA4 (uint64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit);
	{
		uint64_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit,(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_1;
		L_1 = SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806(L_0, ((int32_t)14), NULL);
		uint64_t L_2 = ___0_x;
		uint64_t L_3;
		L_3 = SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806(L_2, ((int32_t)18), NULL);
		uint64_t L_4 = ___0_x;
		uint64_t L_5;
		L_5 = SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806(L_4, ((int32_t)41), NULL);
		return ((int64_t)(((int64_t)((int64_t)L_1^(int64_t)L_3))^(int64_t)L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_sigma_0_mE377477397E061A86C3E868F662B56160833F7B3 (uint64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit);
	{
		uint64_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit,(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_1;
		L_1 = SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806(L_0, 1, NULL);
		uint64_t L_2 = ___0_x;
		uint64_t L_3;
		L_3 = SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806(L_2, 8, NULL);
		uint64_t L_4 = ___0_x;
		return ((int64_t)(((int64_t)((int64_t)L_1^(int64_t)L_3))^((int64_t)((uint64_t)L_4>>7))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA384Managed_sigma_1_mBD2155423E2A5A07D972896C0D3951B2624E5937 (uint64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit);
	{
		uint64_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit,(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_1;
		L_1 = SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806(L_0, ((int32_t)19), NULL);
		uint64_t L_2 = ___0_x;
		uint64_t L_3;
		L_3 = SHA384Managed_RotateRight_mE506314E1478F1083184060059EFDB052FFBA806(L_2, ((int32_t)61), NULL);
		uint64_t L_4 = ___0_x;
		return ((int64_t)(((int64_t)((int64_t)L_1^(int64_t)L_3))^((int64_t)((uint64_t)L_4>>6))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed_SHA384Expand_mF4100DF582DC5954876CB1059BAA9E55497F8677 (uint64_t* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit);
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)16);
		goto IL_0043;
	}

IL_0005:
	{
		uint64_t* L_0 = ___0_x;
		int32_t L_1 = V_0;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint64_t* L_3 = ___0_x;
		int32_t L_4 = V_0;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_4, 2)),NULL));
		int64_t L_6 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 8))))));
		CHECKED_LOCAL_INIT(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticInit,(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_7;
		L_7 = SHA384Managed_sigma_1_mBD2155423E2A5A07D972896C0D3951B2624E5937(L_6, NULL);
		uint64_t* L_8 = ___0_x;
		int32_t L_9 = V_0;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_9, 7)),NULL));
		int64_t L_11 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 8))))));
		uint64_t* L_12 = ___0_x;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)15))),NULL));
		int64_t L_15 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, 8))))));
		uint64_t L_16;
		L_16 = SHA384Managed_sigma_0_mE377477397E061A86C3E868F662B56160833F7B3(L_15, NULL);
		uint64_t* L_17 = ___0_x;
		int32_t L_18 = V_0;
		intptr_t L_19 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16))),NULL));
		int64_t L_20 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(L_19, 8))))));
		*(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 8)))))) = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_7, L_11)), (int64_t)L_16)), L_20));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0043:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)80))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA384Managed__cctor_mCDBEA849F8AFF975B506DFAFFF5F8CE61C0F8495 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____125CF2084D7EEC18DC9795BE4BAA221655C0EABAB89E90A74FB0370378A60293_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = L_0;
		Il2CppFieldRvaData L_2 = {U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____125CF2084D7EEC18DC9795BE4BAA221655C0EABAB89E90A74FB0370378A60293_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D640_t910C17DFA2BEC9D837C794531BFFFE8A70E81109)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_1, L_2);
		((SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticFields*)il2cpp_codegen_static_fields_for(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var))->____K = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_StaticFields*)il2cpp_codegen_static_fields_for(SHA384Managed_t10907EEA0832F2385FAD9D46B00B3789D6C547AC_il2cpp_TypeInfo_var))->____K), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512__ctor_m587B0EC7EBBCB2B98577E5CDB5E7B03828AA6A62 (SHA512_t4D716D49F898611875B880291C726B1D1DE354C8* __this, const RuntimeMethod* method) 
{
	{
		HashAlgorithm__ctor_m5D3F91367024B0434655123D4999E10BB1291708(__this, NULL);
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue = ((int32_t)512);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA512_t4D716D49F898611875B880291C726B1D1DE354C8* SHA512_Create_m8BC1AD8C4B34A48F0730842A93C4885C9A4970F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* L_0 = (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B*)il2cpp_codegen_object_new(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var);
		SHA512Managed__ctor_m655EE905F876E121FA9C8D29C578F2C8230B1371(L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed__ctor_m655EE905F876E121FA9C8D29C578F2C8230B1371 (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit);
	{
		SHA512__ctor_m587B0EC7EBBCB2B98577E5CDB5E7B03828AA6A62(__this, NULL);
		CHECKED_LOCAL_INIT(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_StaticInit,(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = CryptoConfig_get_AllowOnlyFipsAlgorithms_mA16FE662AA39F2F95122B1DF80564FD3C3EECF6B(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1;
		L_1 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17BA770D472146F14CBDE2CFF7752F076430BCBE)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SHA512Managed__ctor_m655EE905F876E121FA9C8D29C578F2C8230B1371_RuntimeMethod_var)));
	}

IL_001d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____stateSHA512 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stateSHA512), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->____buffer = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer), (void*)L_4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->____W = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____W), (void*)L_5);
		SHA512Managed_InitializeState_m0ACA942F310A3CDADC240AD99D388EF325596ABC(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed_Initialize_m41AABCBCFA82D6946A9F38A081797C921E9142C7 (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* __this, const RuntimeMethod* method) 
{
	{
		SHA512Managed_InitializeState_m0ACA942F310A3CDADC240AD99D388EF325596ABC(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____buffer;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, L_2, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____W;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->____W;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed_HashCore_m7BDD30714F5534B7BFA47D1428569446A6170B25 (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgb, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgb;
		int32_t L_1 = ___1_ibStart;
		int32_t L_2 = ___2_cbSize;
		SHA512Managed__HashData_mBD32602B5ED68F9962AAFECF00544CFF19CD7920(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA512Managed_HashFinal_mE92A04F8B6845C96010C96E2DF0D7D6A01FF1DF3 (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = SHA512Managed__EndHash_m530F4A3967FA0F5E35289F838F681D86AC5B3BA5(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed_InitializeState_m0ACA942F310A3CDADC240AD99D388EF325596ABC (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		__this->____count = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->____stateSHA512;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)7640891576956012808LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->____stateSHA512;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)-4942790177534073029LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____stateSHA512;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)((int64_t)4354685564936845355LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->____stateSHA512;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)((int64_t)-6534734903238641935LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->____stateSHA512;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)((int64_t)5840696475078001361LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->____stateSHA512;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)((int64_t)-7276294671716946913LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->____stateSHA512;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)((int64_t)2270897969802886507LL));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->____stateSHA512;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)((int64_t)6620516959819538809LL));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed__HashData_mBD32602B5ED68F9962AAFECF00544CFF19CD7920 (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_partIn, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint64_t* V_3 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_4 = NULL;
	uint8_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	uint64_t* V_7 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_8 = NULL;
	{
		int32_t L_0 = ___2_cbSize;
		V_1 = L_0;
		int32_t L_1 = ___1_ibStart;
		V_2 = L_1;
		uint64_t L_2 = __this->____count;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)127),NULL));
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_2&L_3)),NULL));
		V_0 = L_4;
		uint64_t L_5 = __this->____count;
		int32_t L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		__this->____count = ((int64_t)il2cpp_codegen_add((int64_t)L_5, L_7));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->____stateSHA512;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = L_8;
		V_4 = L_9;
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if (L_11)
		{
			goto IL_0035;
		}
	}

IL_0030:
	{
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (uint64_t*)L_12;
		goto IL_003f;
	}

IL_0035:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = V_4;
		NullCheck(L_13);
		uintptr_t L_14 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_3 = (uint64_t*)L_14;
	}

IL_003f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_15;
		V_6 = L_16;
		if (!L_16)
		{
			goto IL_0050;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_6;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if (L_18)
		{
			goto IL_0056;
		}
	}

IL_0050:
	{
		uintptr_t L_19 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_5 = (uint8_t*)L_19;
		goto IL_0061;
	}

IL_0056:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_6;
		NullCheck(L_20);
		uintptr_t L_21 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_5 = (uint8_t*)L_21;
	}

IL_0061:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = __this->____W;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = L_22;
		V_8 = L_23;
		if (!L_23)
		{
			goto IL_0072;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = V_8;
		NullCheck(L_24);
		int32_t L_25 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_24)->max_length),NULL));
		if (L_25)
		{
			goto IL_0078;
		}
	}

IL_0072:
	{
		uintptr_t L_26 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_7 = (uint64_t*)L_26;
		goto IL_0083;
	}

IL_0078:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = V_8;
		NullCheck(L_27);
		uintptr_t L_28 = (il2cpp_codegen_conv<uintptr_t,uint64_t*,intptr_t,false,false>(((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))),NULL));
		V_7 = (uint64_t*)L_28;
	}

IL_0083:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_30, L_31))) < ((int32_t)((int32_t)128))))
		{
			goto IL_00f7;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_partIn;
		int32_t L_33 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->____buffer;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		bool L_37;
		L_37 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_32, L_33, (RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_36)), NULL);
		int32_t L_38 = V_2;
		int32_t L_39 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_39))));
		int32_t L_40 = V_1;
		int32_t L_41 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_41))));
		uint64_t* L_42 = V_7;
		uint64_t* L_43 = V_3;
		uint8_t* L_44 = V_5;
		CHECKED_LOCAL_INIT(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit,(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SHA512Managed_SHATransform_m2EB780F28F10348640662DB9708422CB2997CBA6(L_42, L_43, L_44, NULL);
		V_0 = 0;
		goto IL_00f7;
	}

IL_00c9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___0_partIn;
		int32_t L_46 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->____buffer;
		bool L_48;
		L_48 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_45, L_46, (RuntimeArray*)L_47, 0, ((int32_t)128), NULL);
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, ((int32_t)128)));
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_50, ((int32_t)128)));
		uint64_t* L_51 = V_7;
		uint64_t* L_52 = V_3;
		uint8_t* L_53 = V_5;
		CHECKED_LOCAL_INIT(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit,(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SHA512Managed_SHATransform_m2EB780F28F10348640662DB9708422CB2997CBA6(L_51, L_52, L_53, NULL);
	}

IL_00f7:
	{
		int32_t L_54 = V_1;
		if ((((int32_t)L_54) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_partIn;
		int32_t L_57 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->____buffer;
		int32_t L_59 = V_0;
		int32_t L_60 = V_1;
		bool L_61;
		L_61 = Buffer_InternalBlockCopy_m89CDD7EB43A555DA0ABB0D7A126FDABF2AB2C0F5((RuntimeArray*)L_56, L_57, (RuntimeArray*)L_58, L_59, L_60, NULL);
	}

IL_0113:
	{
		V_8 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
		V_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA512Managed__EndHash_m530F4A3967FA0F5E35289F838F681D86AC5B3BA5 (SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_3 = L_0;
		uint64_t L_1 = __this->____count;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)127),NULL));
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_1&L_2)),NULL));
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)128), L_3));
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)16))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)128)));
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		uint64_t L_9 = __this->____count;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_9, L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		int32_t L_12 = V_1;
		uint64_t L_13 = V_2;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_15 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_13>>((int32_t)56)))&L_14)),NULL));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_12, 8))), (uint8_t)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		int32_t L_17 = V_1;
		uint64_t L_18 = V_2;
		int64_t L_19 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_20 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_18>>((int32_t)48)))&L_19)),NULL));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_17, 7))), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		uint64_t L_23 = V_2;
		int64_t L_24 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_25 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_23>>((int32_t)40)))&L_24)),NULL));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_22, 6))), (uint8_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		int32_t L_27 = V_1;
		uint64_t L_28 = V_2;
		int64_t L_29 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_30 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_28>>((int32_t)32)))&L_29)),NULL));
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_27, 5))), (uint8_t)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_0;
		int32_t L_32 = V_1;
		uint64_t L_33 = V_2;
		int64_t L_34 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_35 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_33>>((int32_t)24)))&L_34)),NULL));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_32, 4))), (uint8_t)L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		int32_t L_37 = V_1;
		uint64_t L_38 = V_2;
		int64_t L_39 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_40 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_38>>((int32_t)16)))&L_39)),NULL));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_37, 3))), (uint8_t)L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_0;
		int32_t L_42 = V_1;
		uint64_t L_43 = V_2;
		int64_t L_44 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_45 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)((uint64_t)L_43>>8))&L_44)),NULL));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_42, 2))), (uint8_t)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = V_1;
		uint64_t L_48 = V_2;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)255),NULL));
		uint8_t L_50 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(((int64_t)((int64_t)L_48&L_49)),NULL));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_47, 1))), (uint8_t)L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		SHA512Managed__HashData_mBD32602B5ED68F9962AAFECF00544CFF19CD7920(__this, L_51, 0, L_53, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_55 = __this->____stateSHA512;
		Utils_QuadWordToBigEndian_m59FADC7929A070E26FE5D3529C5B714906361210(L_54, L_55, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_3;
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue), (void*)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_3;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed_SHATransform_m2EB780F28F10348640662DB9708422CB2997CBA6 (uint64_t* ___0_expandedBuffer, uint64_t* ___1_state, uint8_t* ___2_block, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit);
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	int32_t V_17 = 0;
	{
		uint64_t* L_0 = ___1_state;
		int64_t L_1 = *(((int64_t*)L_0));
		V_0 = L_1;
		uint64_t* L_2 = ___1_state;
		int64_t L_3 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_2, 8))));
		V_1 = L_3;
		uint64_t* L_4 = ___1_state;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		int64_t L_6 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(L_5, 8))))));
		V_2 = L_6;
		uint64_t* L_7 = ___1_state;
		intptr_t L_8 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		int64_t L_9 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_8, 8))))));
		V_3 = L_9;
		uint64_t* L_10 = ___1_state;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		int64_t L_12 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(L_11, 8))))));
		V_4 = L_12;
		uint64_t* L_13 = ___1_state;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		int64_t L_15 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_14, 8))))));
		V_5 = L_15;
		uint64_t* L_16 = ___1_state;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		int64_t L_18 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_17, 8))))));
		V_6 = L_18;
		uint64_t* L_19 = ___1_state;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		int64_t L_21 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_20, 8))))));
		V_7 = L_21;
		uint64_t* L_22 = ___0_expandedBuffer;
		uint8_t* L_23 = ___2_block;
		Utils_QuadWordFromBigEndian_m89F610D4C743DFF4E9D4C12E00F6F9F4060C9B65(L_22, ((int32_t)16), L_23, NULL);
		uint64_t* L_24 = ___0_expandedBuffer;
		CHECKED_LOCAL_INIT(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit,(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SHA512Managed_SHA512Expand_m3B11EDEE55CD27A41A54301AB3742FC2AA69A202(L_24, NULL);
		V_17 = 0;
		goto IL_02b3;
	}

IL_0053:
	{
		uint64_t L_25 = V_7;
		uint64_t L_26 = V_4;
		CHECKED_LOCAL_INIT(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit,(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_27;
		L_27 = SHA512Managed_Sigma_1_m5B6FFA362C7E06D30E63A9DA41742016571ABC23(L_26, NULL);
		uint64_t L_28 = V_4;
		uint64_t L_29 = V_5;
		uint64_t L_30 = V_6;
		uint64_t L_31;
		L_31 = SHA512Managed_Ch_mDCE7073385996C882C900E5A278B083F8918BD53(L_28, L_29, L_30, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ((SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticFields*)il2cpp_codegen_static_fields_for(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var))->____K;
		int32_t L_33 = V_17;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int64_t L_35 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		uint64_t* L_36 = ___0_expandedBuffer;
		int32_t L_37 = V_17;
		intptr_t L_38 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_37,NULL));
		int64_t L_39 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(L_38, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_25, (int64_t)L_27)), (int64_t)L_31)), L_35)), L_39));
		uint64_t L_40 = V_3;
		uint64_t L_41 = V_16;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, (int64_t)L_41));
		uint64_t L_42 = V_16;
		uint64_t L_43 = V_0;
		uint64_t L_44;
		L_44 = SHA512Managed_Sigma_0_mDF97D56328E7ECD0388BE82D4E3F322146A01AAB(L_43, NULL);
		uint64_t L_45 = V_0;
		uint64_t L_46 = V_1;
		uint64_t L_47 = V_2;
		uint64_t L_48;
		L_48 = SHA512Managed_Maj_m707D469B6407FD70C8F5332E4A6C72C132567D74(L_45, L_46, L_47, NULL);
		V_8 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_42, (int64_t)L_44)), (int64_t)L_48));
		int32_t L_49 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		uint64_t L_50 = V_6;
		uint64_t L_51 = V_12;
		uint64_t L_52;
		L_52 = SHA512Managed_Sigma_1_m5B6FFA362C7E06D30E63A9DA41742016571ABC23(L_51, NULL);
		uint64_t L_53 = V_12;
		uint64_t L_54 = V_4;
		uint64_t L_55 = V_5;
		uint64_t L_56;
		L_56 = SHA512Managed_Ch_mDCE7073385996C882C900E5A278B083F8918BD53(L_53, L_54, L_55, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_57 = ((SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticFields*)il2cpp_codegen_static_fields_for(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var))->____K;
		int32_t L_58 = V_17;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		int64_t L_60 = (int64_t)(L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		uint64_t* L_61 = ___0_expandedBuffer;
		int32_t L_62 = V_17;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int64_t L_64 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_50, (int64_t)L_52)), (int64_t)L_56)), L_60)), L_64));
		uint64_t L_65 = V_2;
		uint64_t L_66 = V_16;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, (int64_t)L_66));
		uint64_t L_67 = V_16;
		uint64_t L_68 = V_8;
		uint64_t L_69;
		L_69 = SHA512Managed_Sigma_0_mDF97D56328E7ECD0388BE82D4E3F322146A01AAB(L_68, NULL);
		uint64_t L_70 = V_8;
		uint64_t L_71 = V_0;
		uint64_t L_72 = V_1;
		uint64_t L_73;
		L_73 = SHA512Managed_Maj_m707D469B6407FD70C8F5332E4A6C72C132567D74(L_70, L_71, L_72, NULL);
		V_9 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_67, (int64_t)L_69)), (int64_t)L_73));
		int32_t L_74 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		uint64_t L_75 = V_5;
		uint64_t L_76 = V_13;
		uint64_t L_77;
		L_77 = SHA512Managed_Sigma_1_m5B6FFA362C7E06D30E63A9DA41742016571ABC23(L_76, NULL);
		uint64_t L_78 = V_13;
		uint64_t L_79 = V_12;
		uint64_t L_80 = V_4;
		uint64_t L_81;
		L_81 = SHA512Managed_Ch_mDCE7073385996C882C900E5A278B083F8918BD53(L_78, L_79, L_80, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_82 = ((SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticFields*)il2cpp_codegen_static_fields_for(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var))->____K;
		int32_t L_83 = V_17;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int64_t L_85 = (int64_t)(L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		uint64_t* L_86 = ___0_expandedBuffer;
		int32_t L_87 = V_17;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int64_t L_89 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_75, (int64_t)L_77)), (int64_t)L_81)), L_85)), L_89));
		uint64_t L_90 = V_1;
		uint64_t L_91 = V_16;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_90, (int64_t)L_91));
		uint64_t L_92 = V_16;
		uint64_t L_93 = V_9;
		uint64_t L_94;
		L_94 = SHA512Managed_Sigma_0_mDF97D56328E7ECD0388BE82D4E3F322146A01AAB(L_93, NULL);
		uint64_t L_95 = V_9;
		uint64_t L_96 = V_8;
		uint64_t L_97 = V_0;
		uint64_t L_98;
		L_98 = SHA512Managed_Maj_m707D469B6407FD70C8F5332E4A6C72C132567D74(L_95, L_96, L_97, NULL);
		V_10 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_92, (int64_t)L_94)), (int64_t)L_98));
		int32_t L_99 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		uint64_t L_100 = V_4;
		uint64_t L_101 = V_15;
		uint64_t L_102;
		L_102 = SHA512Managed_Sigma_1_m5B6FFA362C7E06D30E63A9DA41742016571ABC23(L_101, NULL);
		uint64_t L_103 = V_15;
		uint64_t L_104 = V_13;
		uint64_t L_105 = V_12;
		uint64_t L_106;
		L_106 = SHA512Managed_Ch_mDCE7073385996C882C900E5A278B083F8918BD53(L_103, L_104, L_105, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_107 = ((SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticFields*)il2cpp_codegen_static_fields_for(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var))->____K;
		int32_t L_108 = V_17;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		int64_t L_110 = (int64_t)(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		uint64_t* L_111 = ___0_expandedBuffer;
		int32_t L_112 = V_17;
		intptr_t L_113 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_112,NULL));
		int64_t L_114 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_111, ((intptr_t)il2cpp_codegen_multiply(L_113, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_100, (int64_t)L_102)), (int64_t)L_106)), L_110)), L_114));
		uint64_t L_115 = V_0;
		uint64_t L_116 = V_16;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, (int64_t)L_116));
		uint64_t L_117 = V_16;
		uint64_t L_118 = V_10;
		uint64_t L_119;
		L_119 = SHA512Managed_Sigma_0_mDF97D56328E7ECD0388BE82D4E3F322146A01AAB(L_118, NULL);
		uint64_t L_120 = V_10;
		uint64_t L_121 = V_9;
		uint64_t L_122 = V_8;
		uint64_t L_123;
		L_123 = SHA512Managed_Maj_m707D469B6407FD70C8F5332E4A6C72C132567D74(L_120, L_121, L_122, NULL);
		V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_117, (int64_t)L_119)), (int64_t)L_123));
		int32_t L_124 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_124, 1));
		uint64_t L_125 = V_12;
		uint64_t L_126 = V_14;
		uint64_t L_127;
		L_127 = SHA512Managed_Sigma_1_m5B6FFA362C7E06D30E63A9DA41742016571ABC23(L_126, NULL);
		uint64_t L_128 = V_14;
		uint64_t L_129 = V_15;
		uint64_t L_130 = V_13;
		uint64_t L_131;
		L_131 = SHA512Managed_Ch_mDCE7073385996C882C900E5A278B083F8918BD53(L_128, L_129, L_130, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_132 = ((SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticFields*)il2cpp_codegen_static_fields_for(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var))->____K;
		int32_t L_133 = V_17;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		int64_t L_135 = (int64_t)(L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		uint64_t* L_136 = ___0_expandedBuffer;
		int32_t L_137 = V_17;
		intptr_t L_138 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_137,NULL));
		int64_t L_139 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_136, ((intptr_t)il2cpp_codegen_multiply(L_138, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_125, (int64_t)L_127)), (int64_t)L_131)), L_135)), L_139));
		uint64_t L_140 = V_8;
		uint64_t L_141 = V_16;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, (int64_t)L_141));
		uint64_t L_142 = V_16;
		uint64_t L_143 = V_11;
		uint64_t L_144;
		L_144 = SHA512Managed_Sigma_0_mDF97D56328E7ECD0388BE82D4E3F322146A01AAB(L_143, NULL);
		uint64_t L_145 = V_11;
		uint64_t L_146 = V_10;
		uint64_t L_147 = V_9;
		uint64_t L_148;
		L_148 = SHA512Managed_Maj_m707D469B6407FD70C8F5332E4A6C72C132567D74(L_145, L_146, L_147, NULL);
		V_3 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_142, (int64_t)L_144)), (int64_t)L_148));
		int32_t L_149 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_149, 1));
		uint64_t L_150 = V_13;
		uint64_t L_151 = V_7;
		uint64_t L_152;
		L_152 = SHA512Managed_Sigma_1_m5B6FFA362C7E06D30E63A9DA41742016571ABC23(L_151, NULL);
		uint64_t L_153 = V_7;
		uint64_t L_154 = V_14;
		uint64_t L_155 = V_15;
		uint64_t L_156;
		L_156 = SHA512Managed_Ch_mDCE7073385996C882C900E5A278B083F8918BD53(L_153, L_154, L_155, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_157 = ((SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticFields*)il2cpp_codegen_static_fields_for(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var))->____K;
		int32_t L_158 = V_17;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		int64_t L_160 = (int64_t)(L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		uint64_t* L_161 = ___0_expandedBuffer;
		int32_t L_162 = V_17;
		intptr_t L_163 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_162,NULL));
		int64_t L_164 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_161, ((intptr_t)il2cpp_codegen_multiply(L_163, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_150, (int64_t)L_152)), (int64_t)L_156)), L_160)), L_164));
		uint64_t L_165 = V_9;
		uint64_t L_166 = V_16;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_165, (int64_t)L_166));
		uint64_t L_167 = V_16;
		uint64_t L_168 = V_3;
		uint64_t L_169;
		L_169 = SHA512Managed_Sigma_0_mDF97D56328E7ECD0388BE82D4E3F322146A01AAB(L_168, NULL);
		uint64_t L_170 = V_3;
		uint64_t L_171 = V_11;
		uint64_t L_172 = V_10;
		uint64_t L_173;
		L_173 = SHA512Managed_Maj_m707D469B6407FD70C8F5332E4A6C72C132567D74(L_170, L_171, L_172, NULL);
		V_2 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_167, (int64_t)L_169)), (int64_t)L_173));
		int32_t L_174 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_174, 1));
		uint64_t L_175 = V_15;
		uint64_t L_176 = V_6;
		uint64_t L_177;
		L_177 = SHA512Managed_Sigma_1_m5B6FFA362C7E06D30E63A9DA41742016571ABC23(L_176, NULL);
		uint64_t L_178 = V_6;
		uint64_t L_179 = V_7;
		uint64_t L_180 = V_14;
		uint64_t L_181;
		L_181 = SHA512Managed_Ch_mDCE7073385996C882C900E5A278B083F8918BD53(L_178, L_179, L_180, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_182 = ((SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticFields*)il2cpp_codegen_static_fields_for(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var))->____K;
		int32_t L_183 = V_17;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		int64_t L_185 = (int64_t)(L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		uint64_t* L_186 = ___0_expandedBuffer;
		int32_t L_187 = V_17;
		intptr_t L_188 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_187,NULL));
		int64_t L_189 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_186, ((intptr_t)il2cpp_codegen_multiply(L_188, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_175, (int64_t)L_177)), (int64_t)L_181)), L_185)), L_189));
		uint64_t L_190 = V_10;
		uint64_t L_191 = V_16;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, (int64_t)L_191));
		uint64_t L_192 = V_16;
		uint64_t L_193 = V_2;
		uint64_t L_194;
		L_194 = SHA512Managed_Sigma_0_mDF97D56328E7ECD0388BE82D4E3F322146A01AAB(L_193, NULL);
		uint64_t L_195 = V_2;
		uint64_t L_196 = V_3;
		uint64_t L_197 = V_11;
		uint64_t L_198;
		L_198 = SHA512Managed_Maj_m707D469B6407FD70C8F5332E4A6C72C132567D74(L_195, L_196, L_197, NULL);
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_192, (int64_t)L_194)), (int64_t)L_198));
		int32_t L_199 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_199, 1));
		uint64_t L_200 = V_14;
		uint64_t L_201 = V_5;
		uint64_t L_202;
		L_202 = SHA512Managed_Sigma_1_m5B6FFA362C7E06D30E63A9DA41742016571ABC23(L_201, NULL);
		uint64_t L_203 = V_5;
		uint64_t L_204 = V_6;
		uint64_t L_205 = V_7;
		uint64_t L_206;
		L_206 = SHA512Managed_Ch_mDCE7073385996C882C900E5A278B083F8918BD53(L_203, L_204, L_205, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_207 = ((SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticFields*)il2cpp_codegen_static_fields_for(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var))->____K;
		int32_t L_208 = V_17;
		NullCheck(L_207);
		int32_t L_209 = L_208;
		int64_t L_210 = (int64_t)(L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		uint64_t* L_211 = ___0_expandedBuffer;
		int32_t L_212 = V_17;
		intptr_t L_213 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_212,NULL));
		int64_t L_214 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_211, ((intptr_t)il2cpp_codegen_multiply(L_213, 8))))));
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_200, (int64_t)L_202)), (int64_t)L_206)), L_210)), L_214));
		uint64_t L_215 = V_11;
		uint64_t L_216 = V_16;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_215, (int64_t)L_216));
		uint64_t L_217 = V_16;
		uint64_t L_218 = V_1;
		uint64_t L_219;
		L_219 = SHA512Managed_Sigma_0_mDF97D56328E7ECD0388BE82D4E3F322146A01AAB(L_218, NULL);
		uint64_t L_220 = V_1;
		uint64_t L_221 = V_2;
		uint64_t L_222 = V_3;
		uint64_t L_223;
		L_223 = SHA512Managed_Maj_m707D469B6407FD70C8F5332E4A6C72C132567D74(L_220, L_221, L_222, NULL);
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_217, (int64_t)L_219)), (int64_t)L_223));
		int32_t L_224 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_224, 1));
	}

IL_02b3:
	{
		int32_t L_225 = V_17;
		if ((((int32_t)L_225) < ((int32_t)((int32_t)80))))
		{
			goto IL_0053;
		}
	}
	{
		uint64_t* L_226 = ___1_state;
		uint64_t* L_227 = L_226;
		int64_t L_228 = *(((int64_t*)L_227));
		uint64_t L_229 = V_0;
		*(((int64_t*)L_227)) = ((int64_t)il2cpp_codegen_add(L_228, (int64_t)L_229));
		uint64_t* L_230 = ___1_state;
		uint64_t* L_231 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_230, 8));
		int64_t L_232 = *(((int64_t*)L_231));
		uint64_t L_233 = V_1;
		*(((int64_t*)L_231)) = ((int64_t)il2cpp_codegen_add(L_232, (int64_t)L_233));
		uint64_t* L_234 = ___1_state;
		intptr_t L_235 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t* L_236 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_234, ((intptr_t)il2cpp_codegen_multiply(L_235, 8))));
		int64_t L_237 = *(((int64_t*)L_236));
		uint64_t L_238 = V_2;
		*(((int64_t*)L_236)) = ((int64_t)il2cpp_codegen_add(L_237, (int64_t)L_238));
		uint64_t* L_239 = ___1_state;
		intptr_t L_240 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t* L_241 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_239, ((intptr_t)il2cpp_codegen_multiply(L_240, 8))));
		int64_t L_242 = *(((int64_t*)L_241));
		uint64_t L_243 = V_3;
		*(((int64_t*)L_241)) = ((int64_t)il2cpp_codegen_add(L_242, (int64_t)L_243));
		uint64_t* L_244 = ___1_state;
		intptr_t L_245 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t* L_246 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_244, ((intptr_t)il2cpp_codegen_multiply(L_245, 8))));
		int64_t L_247 = *(((int64_t*)L_246));
		uint64_t L_248 = V_4;
		*(((int64_t*)L_246)) = ((int64_t)il2cpp_codegen_add(L_247, (int64_t)L_248));
		uint64_t* L_249 = ___1_state;
		intptr_t L_250 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t* L_251 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_249, ((intptr_t)il2cpp_codegen_multiply(L_250, 8))));
		int64_t L_252 = *(((int64_t*)L_251));
		uint64_t L_253 = V_5;
		*(((int64_t*)L_251)) = ((int64_t)il2cpp_codegen_add(L_252, (int64_t)L_253));
		uint64_t* L_254 = ___1_state;
		intptr_t L_255 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t* L_256 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_254, ((intptr_t)il2cpp_codegen_multiply(L_255, 8))));
		int64_t L_257 = *(((int64_t*)L_256));
		uint64_t L_258 = V_6;
		*(((int64_t*)L_256)) = ((int64_t)il2cpp_codegen_add(L_257, (int64_t)L_258));
		uint64_t* L_259 = ___1_state;
		intptr_t L_260 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t* L_261 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_259, ((intptr_t)il2cpp_codegen_multiply(L_260, 8))));
		int64_t L_262 = *(((int64_t*)L_261));
		uint64_t L_263 = V_7;
		*(((int64_t*)L_261)) = ((int64_t)il2cpp_codegen_add(L_262, (int64_t)L_263));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8 (uint64_t ___0_x, int32_t ___1_n, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		int32_t L_1 = ___1_n;
		uint64_t L_2 = ___0_x;
		int32_t L_3 = ___1_n;
		return ((int64_t)(((int64_t)((uint64_t)L_0>>((int32_t)(L_1&((int32_t)63)))))|((int64_t)((int64_t)L_2<<((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_3))&((int32_t)63)))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_Ch_mDCE7073385996C882C900E5A278B083F8918BD53 (uint64_t ___0_x, uint64_t ___1_y, uint64_t ___2_z, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		uint64_t L_1 = ___1_y;
		uint64_t L_2 = ___0_x;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>((-1),NULL));
		uint64_t L_4 = ___2_z;
		return ((int64_t)(((int64_t)((int64_t)L_0&(int64_t)L_1))^((int64_t)(((int64_t)((int64_t)L_2^L_3))&(int64_t)L_4))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_Maj_m707D469B6407FD70C8F5332E4A6C72C132567D74 (uint64_t ___0_x, uint64_t ___1_y, uint64_t ___2_z, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		uint64_t L_1 = ___1_y;
		uint64_t L_2 = ___0_x;
		uint64_t L_3 = ___2_z;
		uint64_t L_4 = ___1_y;
		uint64_t L_5 = ___2_z;
		return ((int64_t)(((int64_t)(((int64_t)((int64_t)L_0&(int64_t)L_1))^((int64_t)((int64_t)L_2&(int64_t)L_3))))^((int64_t)((int64_t)L_4&(int64_t)L_5))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_Sigma_0_mDF97D56328E7ECD0388BE82D4E3F322146A01AAB (uint64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit);
	{
		uint64_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit,(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_1;
		L_1 = SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8(L_0, ((int32_t)28), NULL);
		uint64_t L_2 = ___0_x;
		uint64_t L_3;
		L_3 = SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8(L_2, ((int32_t)34), NULL);
		uint64_t L_4 = ___0_x;
		uint64_t L_5;
		L_5 = SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8(L_4, ((int32_t)39), NULL);
		return ((int64_t)(((int64_t)((int64_t)L_1^(int64_t)L_3))^(int64_t)L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_Sigma_1_m5B6FFA362C7E06D30E63A9DA41742016571ABC23 (uint64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit);
	{
		uint64_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit,(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_1;
		L_1 = SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8(L_0, ((int32_t)14), NULL);
		uint64_t L_2 = ___0_x;
		uint64_t L_3;
		L_3 = SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8(L_2, ((int32_t)18), NULL);
		uint64_t L_4 = ___0_x;
		uint64_t L_5;
		L_5 = SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8(L_4, ((int32_t)41), NULL);
		return ((int64_t)(((int64_t)((int64_t)L_1^(int64_t)L_3))^(int64_t)L_5));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_sigma_0_mF2E63C577F9241ADCA334AA64A1D5EB16C0530B2 (uint64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit);
	{
		uint64_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit,(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_1;
		L_1 = SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8(L_0, 1, NULL);
		uint64_t L_2 = ___0_x;
		uint64_t L_3;
		L_3 = SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8(L_2, 8, NULL);
		uint64_t L_4 = ___0_x;
		return ((int64_t)(((int64_t)((int64_t)L_1^(int64_t)L_3))^((int64_t)((uint64_t)L_4>>7))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SHA512Managed_sigma_1_m84EEF0431B0B9EF244B68AB66D439569E1E97A8C (uint64_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit);
	{
		uint64_t L_0 = ___0_x;
		CHECKED_LOCAL_INIT(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit,(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_1;
		L_1 = SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8(L_0, ((int32_t)19), NULL);
		uint64_t L_2 = ___0_x;
		uint64_t L_3;
		L_3 = SHA512Managed_RotateRight_mCA4F65F77CA63D92B6FB14C824EF06B5318A4EE8(L_2, ((int32_t)61), NULL);
		uint64_t L_4 = ___0_x;
		return ((int64_t)(((int64_t)((int64_t)L_1^(int64_t)L_3))^((int64_t)((uint64_t)L_4>>6))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed_SHA512Expand_m3B11EDEE55CD27A41A54301AB3742FC2AA69A202 (uint64_t* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit);
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)16);
		goto IL_0043;
	}

IL_0005:
	{
		uint64_t* L_0 = ___0_x;
		int32_t L_1 = V_0;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint64_t* L_3 = ___0_x;
		int32_t L_4 = V_0;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_4, 2)),NULL));
		int64_t L_6 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 8))))));
		CHECKED_LOCAL_INIT(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticInit,(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_7;
		L_7 = SHA512Managed_sigma_1_m84EEF0431B0B9EF244B68AB66D439569E1E97A8C(L_6, NULL);
		uint64_t* L_8 = ___0_x;
		int32_t L_9 = V_0;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_9, 7)),NULL));
		int64_t L_11 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 8))))));
		uint64_t* L_12 = ___0_x;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)15))),NULL));
		int64_t L_15 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, 8))))));
		uint64_t L_16;
		L_16 = SHA512Managed_sigma_0_mF2E63C577F9241ADCA334AA64A1D5EB16C0530B2(L_15, NULL);
		uint64_t* L_17 = ___0_x;
		int32_t L_18 = V_0;
		intptr_t L_19 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)16))),NULL));
		int64_t L_20 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(L_19, 8))))));
		*(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, 8)))))) = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_7, L_11)), (int64_t)L_16)), L_20));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0043:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)80))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA512Managed__cctor_m8FA0C68A8D9DC41FA6E6733D1F4DD46BCA2FA1A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____125CF2084D7EEC18DC9795BE4BAA221655C0EABAB89E90A74FB0370378A60293_RVAStorage);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = L_0;
		Il2CppFieldRvaData L_2 = {U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields____125CF2084D7EEC18DC9795BE4BAA221655C0EABAB89E90A74FB0370378A60293_RVAStorage, sizeof(__StaticArrayInitTypeSizeU3D640_t910C17DFA2BEC9D837C794531BFFFE8A70E81109)};
		il2cpp_codegen_runtime_helpers_initialize_array(L_1, L_2);
		((SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticFields*)il2cpp_codegen_static_fields_for(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var))->____K = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_StaticFields*)il2cpp_codegen_static_fields_for(SHA512Managed_tB1AB3D2ABFCDE9EFB2A43D3FFC3008B4FE85A89B_il2cpp_TypeInfo_var))->____K), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
