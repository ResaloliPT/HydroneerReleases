﻿#pragma once

// Name: Hydroneer, Version: 1.7.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function DiscordRichPresence.DiscordInterface.TickDiscord
struct UDiscordInterface_TickDiscord_Params
{
};

// Function DiscordRichPresence.DiscordInterface.SetActivity
struct UDiscordInterface_SetActivity_Params
{
	struct FDiscordActivityInfo                        Activity;                                                  // 0x0000(0x00A8)  (Parm, NativeAccessSpecifierPublic)
};

// Function DiscordRichPresence.DiscordInterface.RegisterApplicationSteam
struct UDiscordInterface_RegisterApplicationSteam_Params
{
};

// Function DiscordRichPresence.DiscordInterface.RegisterApplication
struct UDiscordInterface_RegisterApplication_Params
{
	struct FString                                     Command;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DiscordRichPresence.DiscordInterface.InitializeDiscord
struct UDiscordInterface_InitializeDiscord_Params
{
	struct FString                                     ClientId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DiscordRichPresence.DiscordInterface.ClearActivity
struct UDiscordInterface_ClearActivity_Params
{
};

// Function DiscordRichPresence.DiscordInterface.BindOnUserSpectate
struct UDiscordInterface_BindOnUserSpectate_Params
{
	struct FScriptDelegate                             OnDiscordUserSpectate;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DiscordRichPresence.DiscordInterface.BindOnUserJoinRequest
struct UDiscordInterface_BindOnUserJoinRequest_Params
{
	struct FScriptDelegate                             OnDiscordUserJoinRequest;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DiscordRichPresence.DiscordInterface.BindOnUserJoin
struct UDiscordInterface_BindOnUserJoin_Params
{
	struct FScriptDelegate                             OnDiscordUserJoin;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DiscordRichPresence.DiscordInterface.BindOnUserInvite
struct UDiscordInterface_BindOnUserInvite_Params
{
	struct FScriptDelegate                             OnDiscordInvite;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DiscordRichPresence.DiscordInterface.BindEvents
struct UDiscordInterface_BindEvents_Params
{
	struct FScriptDelegate                             OnDiscordUserJoin;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnDiscordUserSpectate;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnDiscordUserJoinRequest;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnDiscordInvite;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
