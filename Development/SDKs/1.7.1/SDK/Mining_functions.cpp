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

// Function:
//		Offset -> 0x008D67E0
//		Name   -> Function Mining.CGameInstance.OnNetworkError
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNetDriver*                                  NetDriver                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_ENetworkFailure>                FailureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ErrorString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCGameInstance::OnNetworkError(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<Engine_ENetworkFailure> FailureType, const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CGameInstance.OnNetworkError");

	UCGameInstance_OnNetworkError_Params params {};
	params.World = World;
	params.NetDriver = NetDriver;
	params.FailureType = FailureType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008D67C0
//		Name   -> Function Mining.CGameInstance.DiscordRunCallbacks
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCGameInstance::DiscordRunCallbacks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CGameInstance.DiscordRunCallbacks");

	UCGameInstance_DiscordRunCallbacks_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCGameInstance::AfterRead()
{
	UGameInstance::AfterRead();

}

void UCGameInstance::BeforeDelete()
{
	UGameInstance::BeforeDelete();

}

// Function:
//		Offset -> 0x008D6CF0
//		Name   -> Function Mining.CHydroneerLibrary.StringToClassRef
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ClassStringName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      OutClass                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCHydroneerLibrary::STATIC_StringToClassRef(const struct FString& ClassStringName, class UClass** OutClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.StringToClassRef");

	UCHydroneerLibrary_StringToClassRef_Params params {};
	params.ClassStringName = ClassStringName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutClass != nullptr)
		*OutClass = params.OutClass;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008D6C70
//		Name   -> Function Mining.CHydroneerLibrary.GetAppdataLocalDir
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCHydroneerLibrary::STATIC_GetAppdataLocalDir()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.GetAppdataLocalDir");

	UCHydroneerLibrary_GetAppdataLocalDir_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008D6AF0
//		Name   -> Function Mining.CHydroneerLibrary.FindFolders
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UCHydroneerLibrary::STATIC_FindFolders(const struct FString& FilePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.FindFolders");

	UCHydroneerLibrary_FindFolders_Params params {};
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCHydroneerLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UCHydroneerLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void ULocalCableComponent::AfterRead()
{
	UCableComponent::AfterRead();

}

void ULocalCableComponent::BeforeDelete()
{
	UCableComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
