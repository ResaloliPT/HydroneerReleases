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

void FDiscordActivityInfo::AfterRead()
{
}

void FDiscordActivityInfo::BeforeDelete()
{
}

void FDiscordUser::AfterRead()
{
}

void FDiscordUser::BeforeDelete()
{
}

// Function:
//		Offset -> 0x00582CA0
//		Name   -> Function DiscordRichPresence.DiscordInterface.TickDiscord
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UDiscordInterface::STATIC_TickDiscord()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.TickDiscord");

	UDiscordInterface_TickDiscord_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00582AA0
//		Name   -> Function DiscordRichPresence.DiscordInterface.SetActivity
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FDiscordActivityInfo                        Activity                                                   (Parm, NativeAccessSpecifierPublic)
void UDiscordInterface::STATIC_SetActivity(const struct FDiscordActivityInfo& Activity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.SetActivity");

	UDiscordInterface_SetActivity_Params params {};
	params.Activity = Activity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00582A80
//		Name   -> Function DiscordRichPresence.DiscordInterface.RegisterApplicationSteam
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UDiscordInterface::STATIC_RegisterApplicationSteam()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.RegisterApplicationSteam");

	UDiscordInterface_RegisterApplicationSteam_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005829B0
//		Name   -> Function DiscordRichPresence.DiscordInterface.RegisterApplication
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDiscordInterface::STATIC_RegisterApplication(const struct FString& Command)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.RegisterApplication");

	UDiscordInterface_RegisterApplication_Params params {};
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005828D0
//		Name   -> Function DiscordRichPresence.DiscordInterface.InitializeDiscord
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ClientId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDiscordInterface::STATIC_InitializeDiscord(const struct FString& ClientId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.InitializeDiscord");

	UDiscordInterface_InitializeDiscord_Params params {};
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005828B0
//		Name   -> Function DiscordRichPresence.DiscordInterface.ClearActivity
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UDiscordInterface::STATIC_ClearActivity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.ClearActivity");

	UDiscordInterface_ClearActivity_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00582810
//		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserSpectate
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             OnDiscordUserSpectate                                      (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UDiscordInterface::STATIC_BindOnUserSpectate(const struct FScriptDelegate& OnDiscordUserSpectate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserSpectate");

	UDiscordInterface_BindOnUserSpectate_Params params {};
	params.OnDiscordUserSpectate = OnDiscordUserSpectate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00582770
//		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserJoinRequest
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             OnDiscordUserJoinRequest                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UDiscordInterface::STATIC_BindOnUserJoinRequest(const struct FScriptDelegate& OnDiscordUserJoinRequest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserJoinRequest");

	UDiscordInterface_BindOnUserJoinRequest_Params params {};
	params.OnDiscordUserJoinRequest = OnDiscordUserJoinRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005826D0
//		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserJoin
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             OnDiscordUserJoin                                          (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UDiscordInterface::STATIC_BindOnUserJoin(const struct FScriptDelegate& OnDiscordUserJoin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserJoin");

	UDiscordInterface_BindOnUserJoin_Params params {};
	params.OnDiscordUserJoin = OnDiscordUserJoin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00582630
//		Name   -> Function DiscordRichPresence.DiscordInterface.BindOnUserInvite
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             OnDiscordInvite                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UDiscordInterface::STATIC_BindOnUserInvite(const struct FScriptDelegate& OnDiscordInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindOnUserInvite");

	UDiscordInterface_BindOnUserInvite_Params params {};
	params.OnDiscordInvite = OnDiscordInvite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00582480
//		Name   -> Function DiscordRichPresence.DiscordInterface.BindEvents
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             OnDiscordUserJoin                                          (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             OnDiscordUserSpectate                                      (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             OnDiscordUserJoinRequest                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             OnDiscordInvite                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UDiscordInterface::STATIC_BindEvents(const struct FScriptDelegate& OnDiscordUserJoin, const struct FScriptDelegate& OnDiscordUserSpectate, const struct FScriptDelegate& OnDiscordUserJoinRequest, const struct FScriptDelegate& OnDiscordInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordRichPresence.DiscordInterface.BindEvents");

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


void UDiscordInterface::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UDiscordInterface::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
