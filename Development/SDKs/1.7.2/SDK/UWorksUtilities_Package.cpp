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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F040
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryConversions.GetCurrentProcessId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UUWorksLibraryConversions::STATIC_GetCurrentProcessId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryConversions.GetCurrentProcessId");
		
		UUWorksLibraryConversions_GetCurrentProcessId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071EF20
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryConversions.ConvertStringToBytes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> UUWorksLibraryConversions::STATIC_ConvertStringToBytes(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryConversions.ConvertStringToBytes");
		
		UUWorksLibraryConversions_ConvertStringToBytes_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071EE00
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryConversions.ConvertBytesToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryConversions::STATIC_ConvertBytesToString(TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryConversions.ConvertBytesToString");
		
		UUWorksLibraryConversions_ConvertBytesToString_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksLibraryConversions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksLibraryConversions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibraryConversions");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071FC50
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.SetIdentifier
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibraryGameID::STATIC_SetIdentifier(struct FUWorksGameID* GameID, const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.SetIdentifier");
		
		UUWorksLibraryGameID_SetIdentifier_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameID != nullptr)
			*GameID = params.GameID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071FBD0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.Reset
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibraryGameID::STATIC_Reset(struct FUWorksGameID* GameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.Reset");
		
		UUWorksLibraryGameID_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameID != nullptr)
			*GameID = params.GameID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071FB50
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.IsValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibraryGameID::STATIC_IsValid(const struct FUWorksGameID& GameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsValid");
		
		UUWorksLibraryGameID_IsValid_Params params {};
		params.GameID = GameID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071FAD0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.IsSteamApp
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibraryGameID::STATIC_IsSteamApp(const struct FUWorksGameID& GameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsSteamApp");
		
		UUWorksLibraryGameID_IsSteamApp_Params params {};
		params.GameID = GameID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071FA50
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.IsShortcut
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibraryGameID::STATIC_IsShortcut(const struct FUWorksGameID& GameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsShortcut");
		
		UUWorksLibraryGameID_IsShortcut_Params params {};
		params.GameID = GameID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F9D0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.IsP2PFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibraryGameID::STATIC_IsP2PFile(const struct FUWorksGameID& GameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsP2PFile");
		
		UUWorksLibraryGameID_IsP2PFile_Params params {};
		params.GameID = GameID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F950
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.IsMod
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibraryGameID::STATIC_IsMod(const struct FUWorksGameID& GameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsMod");
		
		UUWorksLibraryGameID_IsMod_Params params {};
		params.GameID = GameID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F890
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.IsIdenticalWith
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksGameID                               B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibraryGameID::STATIC_IsIdenticalWith(const struct FUWorksGameID& A, const struct FUWorksGameID& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.IsIdenticalWith");
		
		UUWorksLibraryGameID_IsIdenticalWith_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F810
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.GetModID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksLibraryGameID::STATIC_GetModID(const struct FUWorksGameID& GameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.GetModID");
		
		UUWorksLibraryGameID_GetModID_Params params {};
		params.GameID = GameID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F740
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.GetIdentifier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryGameID::STATIC_GetIdentifier(const struct FUWorksGameID& GameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.GetIdentifier");
		
		UUWorksLibraryGameID_GetIdentifier_Params params {};
		params.GameID = GameID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F6C0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.GetAppID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksGameID                               GameID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UUWorksLibraryGameID::STATIC_GetAppID(const struct FUWorksGameID& GameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.GetAppID");
		
		UUWorksLibraryGameID_GetAppID_Params params {};
		params.GameID = GameID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F600
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersC
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ModID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksGameID UUWorksLibraryGameID::STATIC_ConstructFromParametersC(int32_t AppID, int32_t ModID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersC");
		
		UUWorksLibraryGameID_ConstructFromParametersC_Params params {};
		params.AppID = AppID;
		params.ModID = ModID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F570
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersB
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            AppID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksGameID UUWorksLibraryGameID::STATIC_ConstructFromParametersB(int32_t AppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersB");
		
		UUWorksLibraryGameID_ConstructFromParametersB_Params params {};
		params.AppID = AppID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F480
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersA
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksGameID UUWorksLibraryGameID::STATIC_ConstructFromParametersA(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryGameID.ConstructFromParametersA");
		
		UUWorksLibraryGameID_ConstructFromParametersA_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksLibraryGameID.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksLibraryGameID::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibraryGameID");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720980
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteUGCUpdateHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksUGCUpdateHandle UUWorksLibraryLex::STATIC_WriteUGCUpdateHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteUGCUpdateHandle");
		
		UUWorksLibraryLex_WriteUGCUpdateHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720980
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteUGCQueryHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksUGCQueryHandle UUWorksLibraryLex::STATIC_WriteUGCQueryHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteUGCQueryHandle");
		
		UUWorksLibraryLex_WriteUGCQueryHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720980
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteUGCHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksUGCHandle UUWorksLibraryLex::STATIC_WriteUGCHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteUGCHandle");
		
		UUWorksLibraryLex_WriteUGCHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720980
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteUGCFileWriteStreamHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksUGCFileWriteStreamHandle UUWorksLibraryLex::STATIC_WriteUGCFileWriteStreamHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteUGCFileWriteStreamHandle");
		
		UUWorksLibraryLex_WriteUGCFileWriteStreamHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720B60
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteTicketHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksTicketHandle UUWorksLibraryLex::STATIC_WriteTicketHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteTicketHandle");
		
		UUWorksLibraryLex_WriteTicketHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720C50
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteSteamUser
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamUser UUWorksLibraryLex::STATIC_WriteSteamUser(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteSteamUser");
		
		UUWorksLibraryLex_WriteSteamUser_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720C50
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteSteamPipe
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamPipe UUWorksLibraryLex::STATIC_WriteSteamPipe(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteSteamPipe");
		
		UUWorksLibraryLex_WriteSteamPipe_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720980
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboardEntries
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamLeaderboardEntries UUWorksLibraryLex::STATIC_WriteSteamLeaderboardEntries(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboardEntries");
		
		UUWorksLibraryLex_WriteSteamLeaderboardEntries_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720980
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamLeaderboard UUWorksLibraryLex::STATIC_WriteSteamLeaderboard(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteSteamLeaderboard");
		
		UUWorksLibraryLex_WriteSteamLeaderboard_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720C50
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteSteamInventoryResult
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamInventoryResult UUWorksLibraryLex::STATIC_WriteSteamInventoryResult(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteSteamInventoryResult");
		
		UUWorksLibraryLex_WriteSteamInventoryResult_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720B60
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteScreenshotHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksScreenshotHandle UUWorksLibraryLex::STATIC_WriteScreenshotHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteScreenshotHandle");
		
		UUWorksLibraryLex_WriteScreenshotHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720A70
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteFriendsGroupID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksFriendsGroupID UUWorksLibraryLex::STATIC_WriteFriendsGroupID(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteFriendsGroupID");
		
		UUWorksLibraryLex_WriteFriendsGroupID_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720980
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteControllerHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerHandle UUWorksLibraryLex::STATIC_WriteControllerHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteControllerHandle");
		
		UUWorksLibraryLex_WriteControllerHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720980
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteControllerDigitalActionHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerDigitalActionHandle UUWorksLibraryLex::STATIC_WriteControllerDigitalActionHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteControllerDigitalActionHandle");
		
		UUWorksLibraryLex_WriteControllerDigitalActionHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720980
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteControllerAnalogActionHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerAnalogActionHandle UUWorksLibraryLex::STATIC_WriteControllerAnalogActionHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteControllerAnalogActionHandle");
		
		UUWorksLibraryLex_WriteControllerAnalogActionHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720980
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.WriteControllerActionSetHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksControllerActionSetHandle UUWorksLibraryLex::STATIC_WriteControllerActionSetHandle(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.WriteControllerActionSetHandle");
		
		UUWorksLibraryLex_WriteControllerActionSetHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007204A0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadUGCUpdateHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksUGCUpdateHandle                      Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadUGCUpdateHandle(const struct FUWorksUGCUpdateHandle& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadUGCUpdateHandle");
		
		UUWorksLibraryLex_ReadUGCUpdateHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007204A0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadUGCQueryHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksUGCQueryHandle                       Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadUGCQueryHandle(const struct FUWorksUGCQueryHandle& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadUGCQueryHandle");
		
		UUWorksLibraryLex_ReadUGCQueryHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007208B0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadUGCHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksUGCHandle                            Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadUGCHandle(const struct FUWorksUGCHandle& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadUGCHandle");
		
		UUWorksLibraryLex_ReadUGCHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007204A0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadUGCFileWriteStreamHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksUGCFileWriteStreamHandle             Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadUGCFileWriteStreamHandle(const struct FUWorksUGCFileWriteStreamHandle& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadUGCFileWriteStreamHandle");
		
		UUWorksLibraryLex_ReadUGCFileWriteStreamHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720640
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadTicketHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksTicketHandle                         Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadTicketHandle(const struct FUWorksTicketHandle& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadTicketHandle");
		
		UUWorksLibraryLex_ReadTicketHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007207E0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadSteamUser
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamUser                            Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadSteamUser(const struct FUWorksSteamUser& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadSteamUser");
		
		UUWorksLibraryLex_ReadSteamUser_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007207E0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadSteamPipe
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamPipe                            Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadSteamPipe(const struct FUWorksSteamPipe& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadSteamPipe");
		
		UUWorksLibraryLex_ReadSteamPipe_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007204A0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboardEntries
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboardEntries              Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadSteamLeaderboardEntries(const struct FUWorksSteamLeaderboardEntries& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboardEntries");
		
		UUWorksLibraryLex_ReadSteamLeaderboardEntries_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007204A0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamLeaderboard                     Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadSteamLeaderboard(const struct FUWorksSteamLeaderboard& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadSteamLeaderboard");
		
		UUWorksLibraryLex_ReadSteamLeaderboard_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720710
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadSteamInventoryResult
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamInventoryResult                 Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadSteamInventoryResult(const struct FUWorksSteamInventoryResult& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadSteamInventoryResult");
		
		UUWorksLibraryLex_ReadSteamInventoryResult_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720640
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadScreenshotHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksScreenshotHandle                     Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadScreenshotHandle(const struct FUWorksScreenshotHandle& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadScreenshotHandle");
		
		UUWorksLibraryLex_ReadScreenshotHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00720570
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadFriendsGroupID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksFriendsGroupID                       Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadFriendsGroupID(const struct FUWorksFriendsGroupID& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadFriendsGroupID");
		
		UUWorksLibraryLex_ReadFriendsGroupID_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007204A0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadControllerHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksControllerHandle                     Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadControllerHandle(const struct FUWorksControllerHandle& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadControllerHandle");
		
		UUWorksLibraryLex_ReadControllerHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007204A0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadControllerDigitalActionHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksControllerDigitalActionHandle        Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadControllerDigitalActionHandle(const struct FUWorksControllerDigitalActionHandle& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadControllerDigitalActionHandle");
		
		UUWorksLibraryLex_ReadControllerDigitalActionHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007204A0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadControllerAnalogActionHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksControllerAnalogActionHandle         Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadControllerAnalogActionHandle(const struct FUWorksControllerAnalogActionHandle& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadControllerAnalogActionHandle");
		
		UUWorksLibraryLex_ReadControllerAnalogActionHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007204A0
	 * 		Name   -> Function UWorksUtilities.UWorksLibraryLex.ReadControllerActionSetHandle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksControllerActionSetHandle            Value                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibraryLex::STATIC_ReadControllerActionSetHandle(const struct FUWorksControllerActionSetHandle& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibraryLex.ReadControllerActionSetHandle");
		
		UUWorksLibraryLex_ReadControllerActionSetHandle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksLibraryLex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksLibraryLex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibraryLex");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00722E30
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.SetUniverse
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksUniverse                         Universe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibrarySteamID::STATIC_SetUniverse(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetUniverse");
		
		UUWorksLibrarySteamID_SetUniverse_Params params {};
		params.Universe = Universe;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00722C00
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.SetParametersC
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksUniverse                         Universe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksAccountType                      AccountType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AccountID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AccountInstance                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibrarySteamID::STATIC_SetParametersC(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const class FString& AccountID, const class FString& AccountInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetParametersC");
		
		UUWorksLibrarySteamID_SetParametersC_Params params {};
		params.Universe = Universe;
		params.AccountType = AccountType;
		params.AccountID = AccountID;
		params.AccountInstance = AccountInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00722A60
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.SetParametersB
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksUniverse                         Universe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksAccountType                      AccountType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AccountID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibrarySteamID::STATIC_SetParametersB(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const class FString& AccountID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetParametersB");
		
		UUWorksLibrarySteamID_SetParametersB_Params params {};
		params.Universe = Universe;
		params.AccountType = AccountType;
		params.AccountID = AccountID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007228C0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.SetParametersA
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksUniverse                         Universe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksAccountType                      AccountType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibrarySteamID::STATIC_SetParametersA(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetParametersA");
		
		UUWorksLibrarySteamID_SetParametersA_Params params {};
		params.Universe = Universe;
		params.AccountType = AccountType;
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00722790
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.SetIdentifier
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibrarySteamID::STATIC_SetIdentifier(struct FUWorksSteamID* SteamID, const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetIdentifier");
		
		UUWorksLibrarySteamID_SetIdentifier_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00722660
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.SetAccountInstance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      AccountInstance                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibrarySteamID::STATIC_SetAccountInstance(struct FUWorksSteamID* SteamID, const class FString& AccountInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetAccountInstance");
		
		UUWorksLibrarySteamID_SetAccountInstance_Params params {};
		params.AccountInstance = AccountInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00722530
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.SetAccountID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      AccountID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibrarySteamID::STATIC_SetAccountID(struct FUWorksSteamID* SteamID, const class FString& AccountID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.SetAccountID");
		
		UUWorksLibrarySteamID_SetAccountID_Params params {};
		params.AccountID = AccountID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007224B0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsValid
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsValid(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsValid");
		
		UUWorksLibrarySteamID_IsValid_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00722430
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsPersistentGameServerAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsPersistentGameServerAccount(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsPersistentGameServerAccount");
		
		UUWorksLibrarySteamID_IsPersistentGameServerAccount_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007223B0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsLobby
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsLobby(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsLobby");
		
		UUWorksLibrarySteamID_IsLobby_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00722330
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsIndividualAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsIndividualAccount(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsIndividualAccount");
		
		UUWorksLibrarySteamID_IsIndividualAccount_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F890
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsIdenticalWith
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              A                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FUWorksSteamID                              B                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsIdenticalWith(const struct FUWorksSteamID& A, const struct FUWorksSteamID& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsIdenticalWith");
		
		UUWorksLibrarySteamID_IsIdenticalWith_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007222B0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsGameServerAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsGameServerAccount(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsGameServerAccount");
		
		UUWorksLibrarySteamID_IsGameServerAccount_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00722230
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsContentServerAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsContentServerAccount(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsContentServerAccount");
		
		UUWorksLibrarySteamID_IsContentServerAccount_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007221B0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsConsoleUserAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsConsoleUserAccount(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsConsoleUserAccount");
		
		UUWorksLibrarySteamID_IsConsoleUserAccount_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00722130
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsClanAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsClanAccount(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsClanAccount");
		
		UUWorksLibrarySteamID_IsClanAccount_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007220B0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsChatAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsChatAccount(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsChatAccount");
		
		UUWorksLibrarySteamID_IsChatAccount_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00722030
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsBlankAnonAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsBlankAnonAccount(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsBlankAnonAccount");
		
		UUWorksLibrarySteamID_IsBlankAnonAccount_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721FB0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsAnonUserAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsAnonUserAccount(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsAnonUserAccount");
		
		UUWorksLibrarySteamID_IsAnonUserAccount_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721F30
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsAnonGameServerAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsAnonGameServerAccount(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsAnonGameServerAccount");
		
		UUWorksLibrarySteamID_IsAnonGameServerAccount_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721EB0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.IsAnonAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_IsAnonAccount(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.IsAnonAccount");
		
		UUWorksLibrarySteamID_IsAnonAccount_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721E30
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.HasNoIndividualInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UUWorksLibrarySteamID::STATIC_HasNoIndividualInstance(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.HasNoIndividualInstance");
		
		UUWorksLibrarySteamID_HasNoIndividualInstance_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721DB0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.GetUniverse
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksUniverse UUWorksLibrarySteamID::STATIC_GetUniverse(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetUniverse");
		
		UUWorksLibrarySteamID_GetUniverse_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721CE0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.GetStaticAccountKey
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibrarySteamID::STATIC_GetStaticAccountKey(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetStaticAccountKey");
		
		UUWorksLibrarySteamID_GetStaticAccountKey_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F740
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.GetIdentifier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibrarySteamID::STATIC_GetIdentifier(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetIdentifier");
		
		UUWorksLibrarySteamID_GetIdentifier_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721C60
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.GetAccountType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	UWorksCore_EUWorksAccountType UUWorksLibrarySteamID::STATIC_GetAccountType(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetAccountType");
		
		UUWorksLibrarySteamID_GetAccountType_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721B90
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.GetAccountInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibrarySteamID::STATIC_GetAccountInstance(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetAccountInstance");
		
		UUWorksLibrarySteamID_GetAccountInstance_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721AC0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.GetAccountID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UUWorksLibrarySteamID::STATIC_GetAccountID(const struct FUWorksSteamID& SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.GetAccountID");
		
		UUWorksLibrarySteamID_GetAccountID_Params params {};
		params.SteamID = SteamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007219F0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonUserLogon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksUniverse                         Universe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibrarySteamID::STATIC_CreateBlankAnonUserLogon(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonUserLogon");
		
		UUWorksLibrarySteamID_CreateBlankAnonUserLogon_Params params {};
		params.Universe = Universe;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721920
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonLogon
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksUniverse                         Universe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibrarySteamID::STATIC_CreateBlankAnonLogon(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.CreateBlankAnonLogon");
		
		UUWorksLibrarySteamID_CreateBlankAnonLogon_Params params {};
		params.Universe = Universe;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721750
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersC
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksUniverse                         Universe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksAccountType                      AccountType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AccountID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AccountInstance                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksLibrarySteamID::STATIC_ConstructFromParametersC(UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const class FString& AccountID, const class FString& AccountInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersC");
		
		UUWorksLibrarySteamID_ConstructFromParametersC_Params params {};
		params.Universe = Universe;
		params.AccountType = AccountType;
		params.AccountID = AccountID;
		params.AccountInstance = AccountInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007215F0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersB
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		UWorksCore_EUWorksUniverse                         Universe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		UWorksCore_EUWorksAccountType                      AccountType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AccountID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksLibrarySteamID::STATIC_ConstructFromParametersB(UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const class FString& AccountID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersB");
		
		UUWorksLibrarySteamID_ConstructFromParametersB_Params params {};
		params.Universe = Universe;
		params.AccountType = AccountType;
		params.AccountID = AccountID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0071F480
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersA
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUWorksSteamID UUWorksLibrarySteamID::STATIC_ConstructFromParametersA(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.ConstructFromParametersA");
		
		UUWorksLibrarySteamID_ConstructFromParametersA_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00721570
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.ClearIndividualInstance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibrarySteamID::STATIC_ClearIndividualInstance(struct FUWorksSteamID* SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.ClearIndividualInstance");
		
		UUWorksLibrarySteamID_ClearIndividualInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007214F0
	 * 		Name   -> Function UWorksUtilities.UWorksLibrarySteamID.Clear
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUWorksSteamID                              SteamID                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UUWorksLibrarySteamID::STATIC_Clear(struct FUWorksSteamID* SteamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksLibrarySteamID.Clear");
		
		UUWorksLibrarySteamID_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamID != nullptr)
			*SteamID = params.SteamID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksLibrarySteamID.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksLibrarySteamID::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibrarySteamID");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksLibraryTickets.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksLibraryTickets::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksUtilities.UWorksLibraryTickets");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksUtilities.UWorksManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x007233D0
	 * 		Name   -> Function UWorksUtilities.UWorksManagerNetwork.Refresh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUWorksManagerNetwork::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksManagerNetwork.Refresh");
		
		UUWorksManagerNetwork_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00723350
	 * 		Name   -> Function UWorksUtilities.UWorksManagerNetwork.GetNetDriverClassName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UUWorksManagerNetwork::GetNetDriverClassName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksManagerNetwork.GetNetDriverClassName");
		
		UUWorksManagerNetwork_GetNetDriverClassName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00723320
	 * 		Name   -> Function UWorksUtilities.UWorksManagerNetwork.GetManagerNetwork
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UUWorksManagerNetwork* UUWorksManagerNetwork::STATIC_GetManagerNetwork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksManagerNetwork.GetManagerNetwork");
		
		UUWorksManagerNetwork_GetManagerNetwork_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00723220
	 * 		Name   -> Function UWorksUtilities.UWorksManagerNetwork.CreateSessionUWorks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SessionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPublicConnections                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsLANMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUWorksManagerNetwork::CreateSessionUWorks(const class FName& SessionName, int32_t NumPublicConnections, bool bIsLANMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UWorksUtilities.UWorksManagerNetwork.CreateSessionUWorks");
		
		UUWorksManagerNetwork_CreateSessionUWorks_Params params {};
		params.SessionName = SessionName;
		params.NumPublicConnections = NumPublicConnections;
		params.bIsLANMatch = bIsLANMatch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUWorksManagerNetwork.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUWorksManagerNetwork::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UWorksUtilities.UWorksManagerNetwork");
		return ptr;
	}

}


