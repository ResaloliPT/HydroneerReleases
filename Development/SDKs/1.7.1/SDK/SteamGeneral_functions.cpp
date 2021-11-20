// Name: Hydroneer, Version: 1.7.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FUInt64::AfterRead()
{
}

void FUInt64::BeforeDelete()
{
}

void FUInt32::AfterRead()
{
}

void FUInt32::BeforeDelete()
{
}

void FSteamUGCItemId::AfterRead()
{
}

void FSteamUGCItemId::BeforeDelete()
{
}

void FSteamDepotId::AfterRead()
{
}

void FSteamDepotId::BeforeDelete()
{
}

void FSteamAppId::AfterRead()
{
}

void FSteamAppId::BeforeDelete()
{
}

void FSteamUGCUpdateHandle::AfterRead()
{
}

void FSteamUGCUpdateHandle::BeforeDelete()
{
}

void FSteamUGCQueryHandle::AfterRead()
{
}

void FSteamUGCQueryHandle::BeforeDelete()
{
}

void FSteamUGCHandle::AfterRead()
{
}

void FSteamUGCHandle::BeforeDelete()
{
}

void FSteamKeyValuePair::AfterRead()
{
}

void FSteamKeyValuePair::BeforeDelete()
{
}

// Function:
//		Offset -> 0x005B32B0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Uint64Array_Remove
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FUInt64>                             Values                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FUInt64                                     Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_Uint64Array_Remove(TArray<struct FUInt64>* Values, const struct FUInt64& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Uint64Array_Remove");

	USteamGeneralLibrary_Uint64Array_Remove_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B31C0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Uint64Array_Find
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FUInt64>                             Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FUInt64                                     Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_Uint64Array_Find(TArray<struct FUInt64> Values, const struct FUInt64& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Uint64Array_Find");

	USteamGeneralLibrary_Uint64Array_Find_Params params {};
	params.Values = Values;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B30D0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Uint64Array_Contains
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FUInt64>                             Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FUInt64                                     Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_Uint64Array_Contains(TArray<struct FUInt64> Values, const struct FUInt64& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Uint64Array_Contains");

	USteamGeneralLibrary_Uint64Array_Contains_Params params {};
	params.Values = Values;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B37D0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Uint64Array_AddUnique
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FUInt64>                             Values                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FUInt64                                     Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_Uint64Array_AddUnique(TArray<struct FUInt64>* Values, const struct FUInt64& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Uint64Array_AddUnique");

	USteamGeneralLibrary_Uint64Array_AddUnique_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2910
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Uint32Array_Remove
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FUInt32>                             Values                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FUInt32                                     Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_Uint32Array_Remove(TArray<struct FUInt32>* Values, const struct FUInt32& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Uint32Array_Remove");

	USteamGeneralLibrary_Uint32Array_Remove_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2820
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Uint32Array_Find
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FUInt32>                             Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FUInt32                                     Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_Uint32Array_Find(TArray<struct FUInt32> Values, const struct FUInt32& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Uint32Array_Find");

	USteamGeneralLibrary_Uint32Array_Find_Params params {};
	params.Values = Values;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2730
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Uint32Array_Contains
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FUInt32>                             Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FUInt32                                     Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_Uint32Array_Contains(TArray<struct FUInt32> Values, const struct FUInt32& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Uint32Array_Contains");

	USteamGeneralLibrary_Uint32Array_Contains_Params params {};
	params.Values = Values;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B36E0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Uint32Array_AddUnique
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FUInt32>                             Values                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FUInt32                                     Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_Uint32Array_AddUnique(TArray<struct FUInt32>* Values, const struct FUInt32& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Uint32Array_AddUnique");

	USteamGeneralLibrary_Uint32Array_AddUnique_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B3610
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.ToString_UInt64
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUInt64                                     Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamGeneralLibrary::STATIC_ToString_UInt64(const struct FUInt64& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.ToString_UInt64");

	USteamGeneralLibrary_ToString_UInt64_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B3540
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.ToString_UInt32
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUInt32                                     Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamGeneralLibrary::STATIC_ToString_UInt32(const struct FUInt32& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.ToString_UInt32");

	USteamGeneralLibrary_ToString_UInt32_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B3470
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.ToString_SteamItemId
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCItemId                             ID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamGeneralLibrary::STATIC_ToString_SteamItemId(const struct FSteamUGCItemId& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.ToString_SteamItemId");

	USteamGeneralLibrary_ToString_SteamItemId_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B33A0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.ToString_SteamDepotId
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamDepotId                               ID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamGeneralLibrary::STATIC_ToString_SteamDepotId(const struct FSteamDepotId& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.ToString_SteamDepotId");

	USteamGeneralLibrary_ToString_SteamDepotId_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B33A0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.ToString_SteamAppId
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamAppId                                 ID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamGeneralLibrary::STATIC_ToString_SteamAppId(const struct FSteamAppId& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.ToString_SteamAppId");

	USteamGeneralLibrary_ToString_SteamAppId_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2F50
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamUpdateHandle_IsValid
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCUpdateHandle                       handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_SteamUpdateHandle_IsValid(const struct FSteamUGCUpdateHandle& handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamUpdateHandle_IsValid");

	USteamGeneralLibrary_SteamUpdateHandle_IsValid_Params params {};
	params.handle = handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B32B0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_Remove
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FSteamUGCItemId>                     Values                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamUGCItemId                             Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_SteamUGCItemIdArray_Remove(TArray<struct FSteamUGCItemId>* Values, const struct FSteamUGCItemId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_Remove");

	USteamGeneralLibrary_SteamUGCItemIdArray_Remove_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B31C0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_Find
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FSteamUGCItemId>                     Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamUGCItemId                             Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_SteamUGCItemIdArray_Find(TArray<struct FSteamUGCItemId> Values, const struct FSteamUGCItemId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_Find");

	USteamGeneralLibrary_SteamUGCItemIdArray_Find_Params params {};
	params.Values = Values;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B30D0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_Contains
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FSteamUGCItemId>                     Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamUGCItemId                             Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_SteamUGCItemIdArray_Contains(TArray<struct FSteamUGCItemId> Values, const struct FSteamUGCItemId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_Contains");

	USteamGeneralLibrary_SteamUGCItemIdArray_Contains_Params params {};
	params.Values = Values;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2FE0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_AddUnique
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FSteamUGCItemId>                     Values                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamUGCItemId                             Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_SteamUGCItemIdArray_AddUnique(TArray<struct FSteamUGCItemId>* Values, const struct FSteamUGCItemId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_AddUnique");

	USteamGeneralLibrary_SteamUGCItemIdArray_AddUnique_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2F50
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamUGCHandle_IsValid
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCHandle                             handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_SteamUGCHandle_IsValid(const struct FSteamUGCHandle& handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamUGCHandle_IsValid");

	USteamGeneralLibrary_SteamUGCHandle_IsValid_Params params {};
	params.handle = handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2F50
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamQueryHandle_IsValid
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCQueryHandle                        handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_SteamQueryHandle_IsValid(const struct FSteamUGCQueryHandle& handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamQueryHandle_IsValid");

	USteamGeneralLibrary_SteamQueryHandle_IsValid_Params params {};
	params.handle = handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2F20
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetUserState
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		SteamGeneral_EPersonaStateBP                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamGeneral_EPersonaStateBP USteamGeneralLibrary::STATIC_SteamGeneral_GetUserState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetUserState");

	USteamGeneralLibrary_SteamGeneral_GetUserState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2EA0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetUserName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamGeneralLibrary::STATIC_SteamGeneral_GetUserName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetUserName");

	USteamGeneralLibrary_SteamGeneral_GetUserName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2E10
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetFriendState
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUInt64                                     steamUserId                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		SteamGeneral_EPersonaStateBP                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamGeneral_EPersonaStateBP USteamGeneralLibrary::STATIC_SteamGeneral_GetFriendState(const struct FUInt64& steamUserId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetFriendState");

	USteamGeneralLibrary_SteamGeneral_GetFriendState_Params params {};
	params.steamUserId = steamUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2D40
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetFriendName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUInt64                                     steamUserId                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamGeneralLibrary::STATIC_SteamGeneral_GetFriendName(const struct FUInt64& steamUserId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetFriendName");

	USteamGeneralLibrary_SteamGeneral_GetFriendName_Params params {};
	params.steamUserId = steamUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2CA0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_ActivateGameOverlayToWebPage
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     webpage                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_SteamGeneral_ActivateGameOverlayToWebPage(const struct FString& webpage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_ActivateGameOverlayToWebPage");

	USteamGeneralLibrary_SteamGeneral_ActivateGameOverlayToWebPage_Params params {};
	params.webpage = webpage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2910
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_Remove
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FSteamDepotId>                       Values                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamDepotId                               Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_SteamDepotIdArray_Remove(TArray<struct FSteamDepotId>* Values, const struct FSteamDepotId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_Remove");

	USteamGeneralLibrary_SteamDepotIdArray_Remove_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2820
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_Find
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FSteamDepotId>                       Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamDepotId                               Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_SteamDepotIdArray_Find(TArray<struct FSteamDepotId> Values, const struct FSteamDepotId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_Find");

	USteamGeneralLibrary_SteamDepotIdArray_Find_Params params {};
	params.Values = Values;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2730
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_Contains
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FSteamDepotId>                       Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamDepotId                               Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_SteamDepotIdArray_Contains(TArray<struct FSteamDepotId> Values, const struct FSteamDepotId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_Contains");

	USteamGeneralLibrary_SteamDepotIdArray_Contains_Params params {};
	params.Values = Values;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2640
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_AddUnique
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FSteamDepotId>                       Values                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamDepotId                               Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_SteamDepotIdArray_AddUnique(TArray<struct FSteamDepotId>* Values, const struct FSteamDepotId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_AddUnique");

	USteamGeneralLibrary_SteamDepotIdArray_AddUnique_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2BC0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamDelegate_OnGameOverlayActivated_Unbind
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             delegateToCall                                             (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_SteamDelegate_OnGameOverlayActivated_Unbind(const struct FScriptDelegate& delegateToCall)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamDelegate_OnGameOverlayActivated_Unbind");

	USteamGeneralLibrary_SteamDelegate_OnGameOverlayActivated_Unbind_Params params {};
	params.delegateToCall = delegateToCall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2AC0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamDelegate_OnGameOverlayActivated_Bind
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             delegateToCall                                             (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_SteamDelegate_OnGameOverlayActivated_Bind(const struct FScriptDelegate& delegateToCall)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamDelegate_OnGameOverlayActivated_Bind");

	USteamGeneralLibrary_SteamDelegate_OnGameOverlayActivated_Bind_Params params {};
	params.delegateToCall = delegateToCall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2A00
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamConvertLanguageToLanguageCode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		SteamGeneral_ESteamSupportedLanguages              Language                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamGeneralLibrary::STATIC_SteamConvertLanguageToLanguageCode(SteamGeneral_ESteamSupportedLanguages Language)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamConvertLanguageToLanguageCode");

	USteamGeneralLibrary_SteamConvertLanguageToLanguageCode_Params params {};
	params.Language = Language;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2910
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_Remove
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FSteamAppId>                         Values                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamAppId                                 Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_SteamAppIdArray_Remove(TArray<struct FSteamAppId>* Values, const struct FSteamAppId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_Remove");

	USteamGeneralLibrary_SteamAppIdArray_Remove_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2820
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_Find
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FSteamAppId>                         Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamAppId                                 Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_SteamAppIdArray_Find(TArray<struct FSteamAppId> Values, const struct FSteamAppId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_Find");

	USteamGeneralLibrary_SteamAppIdArray_Find_Params params {};
	params.Values = Values;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2730
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_Contains
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FSteamAppId>                         Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamAppId                                 Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_SteamAppIdArray_Contains(TArray<struct FSteamAppId> Values, const struct FSteamAppId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_Contains");

	USteamGeneralLibrary_SteamAppIdArray_Contains_Params params {};
	params.Values = Values;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2640
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_AddUnique
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FSteamAppId>                         Values                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamAppId                                 Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamGeneralLibrary::STATIC_SteamAppIdArray_AddUnique(TArray<struct FSteamAppId>* Values, const struct FSteamAppId& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_AddUnique");

	USteamGeneralLibrary_SteamAppIdArray_AddUnique_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2570
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.NotEqual_UInt64
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUInt64                                     A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUInt64                                     B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_NotEqual_UInt64(const struct FUInt64& A, const struct FUInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.NotEqual_UInt64");

	USteamGeneralLibrary_NotEqual_UInt64_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B24B0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.NotEqual_UInt32
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUInt32                                     A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUInt32                                     B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_NotEqual_UInt32(const struct FUInt32& A, const struct FUInt32& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.NotEqual_UInt32");

	USteamGeneralLibrary_NotEqual_UInt32_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2570
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.NotEqual_SteamItemId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCItemId                             A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FSteamUGCItemId                             B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_NotEqual_SteamItemId(const struct FSteamUGCItemId& A, const struct FSteamUGCItemId& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.NotEqual_SteamItemId");

	USteamGeneralLibrary_NotEqual_SteamItemId_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B24B0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.NotEqual_SteamDepotId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamDepotId                               A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FSteamDepotId                               B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_NotEqual_SteamDepotId(const struct FSteamDepotId& A, const struct FSteamDepotId& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.NotEqual_SteamDepotId");

	USteamGeneralLibrary_NotEqual_SteamDepotId_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B24B0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.NotEqual_SteamAppId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamAppId                                 A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FSteamAppId                                 B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_NotEqual_SteamAppId(const struct FSteamAppId& A, const struct FSteamAppId& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.NotEqual_SteamAppId");

	USteamGeneralLibrary_NotEqual_SteamAppId_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2480
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.IsSteamInitialized
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_IsSteamInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.IsSteamInitialized");

	USteamGeneralLibrary_IsSteamInitialized_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2450
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.GetSteamAppId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamAppId                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FSteamAppId USteamGeneralLibrary::STATIC_GetSteamAppId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.GetSteamAppId");

	USteamGeneralLibrary_GetSteamAppId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B23B0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.FromString_UInt64
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUInt64                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUInt64 USteamGeneralLibrary::STATIC_FromString_UInt64(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.FromString_UInt64");

	USteamGeneralLibrary_FromString_UInt64_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2310
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.FromString_UInt32
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUInt32                                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FUInt32 USteamGeneralLibrary::STATIC_FromString_UInt32(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.FromString_UInt32");

	USteamGeneralLibrary_FromString_UInt32_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2240
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Equal_UInt64
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUInt64                                     A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUInt64                                     B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_Equal_UInt64(const struct FUInt64& A, const struct FUInt64& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Equal_UInt64");

	USteamGeneralLibrary_Equal_UInt64_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2180
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Equal_UInt32
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FUInt32                                     A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FUInt32                                     B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_Equal_UInt32(const struct FUInt32& A, const struct FUInt32& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Equal_UInt32");

	USteamGeneralLibrary_Equal_UInt32_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2240
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Equal_SteamItemId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCItemId                             A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FSteamUGCItemId                             B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_Equal_SteamItemId(const struct FSteamUGCItemId& A, const struct FSteamUGCItemId& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Equal_SteamItemId");

	USteamGeneralLibrary_Equal_SteamItemId_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2180
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Equal_SteamDepotId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamDepotId                               A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FSteamDepotId                               B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_Equal_SteamDepotId(const struct FSteamDepotId& A, const struct FSteamDepotId& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Equal_SteamDepotId");

	USteamGeneralLibrary_Equal_SteamDepotId_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B2180
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.Equal_SteamAppId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamAppId                                 A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FSteamAppId                                 B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_Equal_SteamAppId(const struct FSteamAppId& A, const struct FSteamAppId& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.Equal_SteamAppId");

	USteamGeneralLibrary_Equal_SteamAppId_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B20A0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.BreakUInt64
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUInt64                                     InVal                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                OutVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_BreakUInt64(const struct FUInt64& InVal, int* OutVal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.BreakUInt64");

	USteamGeneralLibrary_BreakUInt64_Params params {};
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVal != nullptr)
		*OutVal = params.OutVal;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005B1FC0
//		Name   -> Function SteamGeneral.SteamGeneralLibrary.BreakUInt32
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FUInt32                                     InVal                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                OutVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamGeneralLibrary::STATIC_BreakUInt32(const struct FUInt32& InVal, int* OutVal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamGeneral.SteamGeneralLibrary.BreakUInt32");

	USteamGeneralLibrary_BreakUInt32_Params params {};
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutVal != nullptr)
		*OutVal = params.OutVal;


	return params.ReturnValue;
}


void USteamGeneralLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void USteamGeneralLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
