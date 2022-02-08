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
	 * 		Offset -> 0x00582CA0
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.TickDiscord
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UDiscordInterface::STATIC_TickDiscord()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.TickDiscord");
		
		UDiscordInterface_TickDiscord_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00582AA0
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.SetActivity
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDiscordActivityInfo                        Activity                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::STATIC_SetActivity(const struct FDiscordActivityInfo& Activity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.SetActivity");
		
		UDiscordInterface_SetActivity_Params params {};
		params.Activity = Activity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00582A80
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.RegisterApplicationSteam
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UDiscordInterface::STATIC_RegisterApplicationSteam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.RegisterApplicationSteam");
		
		UDiscordInterface_RegisterApplicationSteam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005829B0
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.RegisterApplication
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::STATIC_RegisterApplication(const class FString& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.RegisterApplication");
		
		UDiscordInterface_RegisterApplication_Params params {};
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005828D0
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.InitializeDiscord
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ClientId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDiscordInterface::STATIC_InitializeDiscord(const class FString& ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.InitializeDiscord");
		
		UDiscordInterface_InitializeDiscord_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005828B0
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.ClearActivity
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UDiscordInterface::STATIC_ClearActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.ClearActivity");
		
		UDiscordInterface_ClearActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00582810
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserSpectate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnDiscordUserSpectate                                      (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::STATIC_BindOnUserSpectate(const class FScriptDelegate& OnDiscordUserSpectate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserSpectate");
		
		UDiscordInterface_BindOnUserSpectate_Params params {};
		params.OnDiscordUserSpectate = OnDiscordUserSpectate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00582770
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserJoinRequest
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnDiscordUserJoinRequest                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::STATIC_BindOnUserJoinRequest(const class FScriptDelegate& OnDiscordUserJoinRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserJoinRequest");
		
		UDiscordInterface_BindOnUserJoinRequest_Params params {};
		params.OnDiscordUserJoinRequest = OnDiscordUserJoinRequest;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005826D0
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserJoin
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnDiscordUserJoin                                          (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::STATIC_BindOnUserJoin(const class FScriptDelegate& OnDiscordUserJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserJoin");
		
		UDiscordInterface_BindOnUserJoin_Params params {};
		params.OnDiscordUserJoin = OnDiscordUserJoin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00582630
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserInvite
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnDiscordInvite                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::STATIC_BindOnUserInvite(const class FScriptDelegate& OnDiscordInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserInvite");
		
		UDiscordInterface_BindOnUserInvite_Params params {};
		params.OnDiscordInvite = OnDiscordInvite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00582480
	 * 		Name   -> Function DiscordRichPresence.DiscordInterface.BindEvents
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnDiscordUserJoin                                          (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnDiscordUserSpectate                                      (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnDiscordUserJoinRequest                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnDiscordInvite                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDiscordInterface::STATIC_BindEvents(const class FScriptDelegate& OnDiscordUserJoin, const class FScriptDelegate& OnDiscordUserSpectate, const class FScriptDelegate& OnDiscordUserJoinRequest, const class FScriptDelegate& OnDiscordInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindEvents");
		
		UDiscordInterface_BindEvents_Params params {};
		params.OnDiscordUserJoin = OnDiscordUserJoin;
		params.OnDiscordUserSpectate = OnDiscordUserSpectate;
		params.OnDiscordUserJoinRequest = OnDiscordUserJoinRequest;
		params.OnDiscordInvite = OnDiscordInvite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDiscordInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscordInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DiscordRichPresence.DiscordInterface");
		return ptr;
	}

}


