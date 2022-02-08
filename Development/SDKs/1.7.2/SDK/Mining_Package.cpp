/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x008D67E0
	 * 		Name   -> Function Mining.CGameInstance.OnNetworkError
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UNetDriver*                                  NetDriver                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		Engine_ENetworkFailure                             FailureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCGameInstance::OnNetworkError(class UWorld* World, class UNetDriver* NetDriver, Engine_ENetworkFailure FailureType, const class FString& ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CGameInstance.OnNetworkError");
		
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

	/**
	 * Function:
	 * 		Offset -> 0x008D67C0
	 * 		Name   -> Function Mining.CGameInstance.DiscordRunCallbacks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCGameInstance::DiscordRunCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CGameInstance.DiscordRunCallbacks");
		
		UCGameInstance_DiscordRunCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mining.CGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x008D6CF0
	 * 		Name   -> Function Mining.CHydroneerLibrary.StringToClassRef
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      ClassStringName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      OutClass                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCHydroneerLibrary::STATIC_StringToClassRef(const class FString& ClassStringName, class UClass** OutClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.StringToClassRef");
		
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

	/**
	 * Function:
	 * 		Offset -> 0x008D6C70
	 * 		Name   -> Function Mining.CHydroneerLibrary.GetAppdataLocalDir
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UCHydroneerLibrary::STATIC_GetAppdataLocalDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.GetAppdataLocalDir");
		
		UCHydroneerLibrary_GetAppdataLocalDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x008D6AF0
	 * 		Name   -> Function Mining.CHydroneerLibrary.FindFolders
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UCHydroneerLibrary::STATIC_FindFolders(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mining.CHydroneerLibrary.FindFolders");
		
		UCHydroneerLibrary_FindFolders_Params params {};
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCHydroneerLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCHydroneerLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mining.CHydroneerLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULocalCableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalCableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Mining.LocalCableComponent");
		return ptr;
	}

}


