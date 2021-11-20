#pragma once

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

// Function SteamGeneral.SteamGeneralLibrary.Uint64Array_Remove
struct USteamGeneralLibrary_Uint64Array_Remove_Params
{
	TArray<struct FUInt64>                             Values;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUInt64                                     Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Uint64Array_Find
struct USteamGeneralLibrary_Uint64Array_Find_Params
{
	TArray<struct FUInt64>                             Values;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUInt64                                     Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Uint64Array_Contains
struct USteamGeneralLibrary_Uint64Array_Contains_Params
{
	TArray<struct FUInt64>                             Values;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUInt64                                     Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Uint64Array_AddUnique
struct USteamGeneralLibrary_Uint64Array_AddUnique_Params
{
	TArray<struct FUInt64>                             Values;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUInt64                                     Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Uint32Array_Remove
struct USteamGeneralLibrary_Uint32Array_Remove_Params
{
	TArray<struct FUInt32>                             Values;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUInt32                                     Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Uint32Array_Find
struct USteamGeneralLibrary_Uint32Array_Find_Params
{
	TArray<struct FUInt32>                             Values;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUInt32                                     Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Uint32Array_Contains
struct USteamGeneralLibrary_Uint32Array_Contains_Params
{
	TArray<struct FUInt32>                             Values;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUInt32                                     Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Uint32Array_AddUnique
struct USteamGeneralLibrary_Uint32Array_AddUnique_Params
{
	TArray<struct FUInt32>                             Values;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUInt32                                     Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.ToString_UInt64
struct USteamGeneralLibrary_ToString_UInt64_Params
{
	struct FUInt64                                     Value;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.ToString_UInt32
struct USteamGeneralLibrary_ToString_UInt32_Params
{
	struct FUInt32                                     Value;                                                     // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.ToString_SteamItemId
struct USteamGeneralLibrary_ToString_SteamItemId_Params
{
	struct FSteamUGCItemId                             ID;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.ToString_SteamDepotId
struct USteamGeneralLibrary_ToString_SteamDepotId_Params
{
	struct FSteamDepotId                               ID;                                                        // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.ToString_SteamAppId
struct USteamGeneralLibrary_ToString_SteamAppId_Params
{
	struct FSteamAppId                                 ID;                                                        // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamUpdateHandle_IsValid
struct USteamGeneralLibrary_SteamUpdateHandle_IsValid_Params
{
	struct FSteamUGCUpdateHandle                       handle;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_Remove
struct USteamGeneralLibrary_SteamUGCItemIdArray_Remove_Params
{
	TArray<struct FSteamUGCItemId>                     Values;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamUGCItemId                             Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_Find
struct USteamGeneralLibrary_SteamUGCItemIdArray_Find_Params
{
	TArray<struct FSteamUGCItemId>                     Values;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamUGCItemId                             Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_Contains
struct USteamGeneralLibrary_SteamUGCItemIdArray_Contains_Params
{
	TArray<struct FSteamUGCItemId>                     Values;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamUGCItemId                             Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamUGCItemIdArray_AddUnique
struct USteamGeneralLibrary_SteamUGCItemIdArray_AddUnique_Params
{
	TArray<struct FSteamUGCItemId>                     Values;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamUGCItemId                             Value;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamUGCHandle_IsValid
struct USteamGeneralLibrary_SteamUGCHandle_IsValid_Params
{
	struct FSteamUGCHandle                             handle;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamQueryHandle_IsValid
struct USteamGeneralLibrary_SteamQueryHandle_IsValid_Params
{
	struct FSteamUGCQueryHandle                        handle;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetUserState
struct USteamGeneralLibrary_SteamGeneral_GetUserState_Params
{
	SteamGeneral_EPersonaStateBP                       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetUserName
struct USteamGeneralLibrary_SteamGeneral_GetUserName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetFriendState
struct USteamGeneralLibrary_SteamGeneral_GetFriendState_Params
{
	struct FUInt64                                     steamUserId;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	SteamGeneral_EPersonaStateBP                       ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_GetFriendName
struct USteamGeneralLibrary_SteamGeneral_GetFriendName_Params
{
	struct FUInt64                                     steamUserId;                                               // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamGeneral_ActivateGameOverlayToWebPage
struct USteamGeneralLibrary_SteamGeneral_ActivateGameOverlayToWebPage_Params
{
	struct FString                                     webpage;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_Remove
struct USteamGeneralLibrary_SteamDepotIdArray_Remove_Params
{
	TArray<struct FSteamDepotId>                       Values;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamDepotId                               Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_Find
struct USteamGeneralLibrary_SteamDepotIdArray_Find_Params
{
	TArray<struct FSteamDepotId>                       Values;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamDepotId                               Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_Contains
struct USteamGeneralLibrary_SteamDepotIdArray_Contains_Params
{
	TArray<struct FSteamDepotId>                       Values;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamDepotId                               Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamDepotIdArray_AddUnique
struct USteamGeneralLibrary_SteamDepotIdArray_AddUnique_Params
{
	TArray<struct FSteamDepotId>                       Values;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamDepotId                               Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamDelegate_OnGameOverlayActivated_Unbind
struct USteamGeneralLibrary_SteamDelegate_OnGameOverlayActivated_Unbind_Params
{
	struct FScriptDelegate                             delegateToCall;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamDelegate_OnGameOverlayActivated_Bind
struct USteamGeneralLibrary_SteamDelegate_OnGameOverlayActivated_Bind_Params
{
	struct FScriptDelegate                             delegateToCall;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamConvertLanguageToLanguageCode
struct USteamGeneralLibrary_SteamConvertLanguageToLanguageCode_Params
{
	SteamGeneral_ESteamSupportedLanguages              Language;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_Remove
struct USteamGeneralLibrary_SteamAppIdArray_Remove_Params
{
	TArray<struct FSteamAppId>                         Values;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamAppId                                 Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_Find
struct USteamGeneralLibrary_SteamAppIdArray_Find_Params
{
	TArray<struct FSteamAppId>                         Values;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamAppId                                 Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_Contains
struct USteamGeneralLibrary_SteamAppIdArray_Contains_Params
{
	TArray<struct FSteamAppId>                         Values;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamAppId                                 Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.SteamAppIdArray_AddUnique
struct USteamGeneralLibrary_SteamAppIdArray_AddUnique_Params
{
	TArray<struct FSteamAppId>                         Values;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamAppId                                 Value;                                                     // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.NotEqual_UInt64
struct USteamGeneralLibrary_NotEqual_UInt64_Params
{
	struct FUInt64                                     A;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUInt64                                     B;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.NotEqual_UInt32
struct USteamGeneralLibrary_NotEqual_UInt32_Params
{
	struct FUInt32                                     A;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUInt32                                     B;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.NotEqual_SteamItemId
struct USteamGeneralLibrary_NotEqual_SteamItemId_Params
{
	struct FSteamUGCItemId                             A;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamUGCItemId                             B;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.NotEqual_SteamDepotId
struct USteamGeneralLibrary_NotEqual_SteamDepotId_Params
{
	struct FSteamDepotId                               A;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamDepotId                               B;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.NotEqual_SteamAppId
struct USteamGeneralLibrary_NotEqual_SteamAppId_Params
{
	struct FSteamAppId                                 A;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamAppId                                 B;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.IsSteamInitialized
struct USteamGeneralLibrary_IsSteamInitialized_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.GetSteamAppId
struct USteamGeneralLibrary_GetSteamAppId_Params
{
	struct FSteamAppId                                 ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.FromString_UInt64
struct USteamGeneralLibrary_FromString_UInt64_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUInt64                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.FromString_UInt32
struct USteamGeneralLibrary_FromString_UInt32_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUInt32                                     ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Equal_UInt64
struct USteamGeneralLibrary_Equal_UInt64_Params
{
	struct FUInt64                                     A;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUInt64                                     B;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Equal_UInt32
struct USteamGeneralLibrary_Equal_UInt32_Params
{
	struct FUInt32                                     A;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FUInt32                                     B;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Equal_SteamItemId
struct USteamGeneralLibrary_Equal_SteamItemId_Params
{
	struct FSteamUGCItemId                             A;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamUGCItemId                             B;                                                         // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Equal_SteamDepotId
struct USteamGeneralLibrary_Equal_SteamDepotId_Params
{
	struct FSteamDepotId                               A;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamDepotId                               B;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.Equal_SteamAppId
struct USteamGeneralLibrary_Equal_SteamAppId_Params
{
	struct FSteamAppId                                 A;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamAppId                                 B;                                                         // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.BreakUInt64
struct USteamGeneralLibrary_BreakUInt64_Params
{
	struct FUInt64                                     InVal;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                OutVal;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamGeneral.SteamGeneralLibrary.BreakUInt32
struct USteamGeneralLibrary_BreakUInt32_Params
{
	struct FUInt32                                     InVal;                                                     // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                OutVal;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
