#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

struct unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 ;
struct unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 ;
struct unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA ;
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D ;
struct unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Mono.Unity.UnityTls/unitytls_x509list_ref
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509verify_result
struct unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_x509verify_result::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m1B817101FEA9D3C28DF3C9192F70557465BDFB25(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_m531442C0133AA29BF262DFD21F81CCBE5EA7E086(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" void CDECL ReversePInvokeWrapper_EncryptorNative_OnNativeLog_mDBBBFFE65D1B23EE7E27F23DC17EE2C25E295ECA(intptr_t ___userData0, int32_t ___debugLevel1, char* ___message2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SocketNative_DebugReturn_m05A9D53C99A0A7304F12B971271B81981BE9B81F(intptr_t ___pUserData0, int32_t ___debugLevel1, char* ___str2);
extern "C" void CDECL ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C(void* ___userData0, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 * ___caList4, intptr_t ___caListLen5, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D * ___chain6, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 * ___key7, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState8);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245(void* ___userData0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3);
extern "C" uint32_t CDECL ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E(void* ___userData0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C(void* ___userData0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInput_OnBlur_mB2CF5ED94DF27CA18C76BE9E94513D75F9B4DB18(int32_t ___id0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInput_OnEditEnd_mBD3602F61AC1F5EDA05AFF12658615A64D89A49F(int32_t ___id0, char* ___value1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInput_OnFocus_m26ABACDEFB45E9C81054A27D78A863FD8BB55BAF(int32_t ___id0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInput_OnTab_mBC2521B52C021E7C8FE1A6C9E13A4F09EC81CC47(int32_t ___id0, int32_t ___value1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInput_OnValueChange_m472D61D3230BFA2C53FA78B2FFE35423B84408A3(int32_t ___id0, char* ___value1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInputMobile_OnFocusOut_mC86EEF882BE472EDC61CABCDF37C7E4581356E6C(int32_t ___id0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLInputMobile_OnTouchEnd_m90B19075535C3E185CFF1575F439126B413DC73F(int32_t ___id0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLWindow_OnWindowBlur_mECA4DD39F5875724D053BD2275DB53CD77057E26();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebGLWindow_OnWindowFocus_mDF3BCF57E58755668408E52641C23A3DE6223D01();


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[18] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m1B817101FEA9D3C28DF3C9192F70557465BDFB25),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_m531442C0133AA29BF262DFD21F81CCBE5EA7E086),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EncryptorNative_OnNativeLog_mDBBBFFE65D1B23EE7E27F23DC17EE2C25E295ECA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SocketNative_DebugReturn_m05A9D53C99A0A7304F12B971271B81981BE9B81F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebGLInput_OnBlur_mB2CF5ED94DF27CA18C76BE9E94513D75F9B4DB18),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebGLInput_OnEditEnd_mBD3602F61AC1F5EDA05AFF12658615A64D89A49F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebGLInput_OnFocus_m26ABACDEFB45E9C81054A27D78A863FD8BB55BAF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebGLInput_OnTab_mBC2521B52C021E7C8FE1A6C9E13A4F09EC81CC47),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebGLInput_OnValueChange_m472D61D3230BFA2C53FA78B2FFE35423B84408A3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebGLInputMobile_OnFocusOut_mC86EEF882BE472EDC61CABCDF37C7E4581356E6C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebGLInputMobile_OnTouchEnd_m90B19075535C3E185CFF1575F439126B413DC73F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebGLWindow_OnWindowBlur_mECA4DD39F5875724D053BD2275DB53CD77057E26),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebGLWindow_OnWindowFocus_mDF3BCF57E58755668408E52641C23A3DE6223D01),
};
