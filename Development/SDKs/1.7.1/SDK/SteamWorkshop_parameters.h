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

// Function SteamWorkshop.CallbackProxyAddRemoveWorkshopItemFavorite.SteamWorkshop_AddRemoveItemFavorite
struct UCallbackProxyAddRemoveWorkshopItemFavorite_SteamWorkshop_AddRemoveItemFavorite_Params
{
	struct FSteamUGCItemId                             itemId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAddToFavourites;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCallbackProxyAddRemoveWorkshopItemFavorite* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.CallbackProxyCreateWorkshopItem.SteamWorkshop_CreateItem
struct UCallbackProxyCreateWorkshopItem_SteamWorkshop_CreateItem_Params
{
	struct FSteamWorkshopUpdateDetails                 itemDetails;                                               // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UCallbackProxyCreateWorkshopItem*            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.CallbackProxyGetUserVoteOnWorkshopItem.SteamWorkshop_GetUserVoteOnItem
struct UCallbackProxyGetUserVoteOnWorkshopItem_SteamWorkshop_GetUserVoteOnItem_Params
{
	struct FSteamUGCItemId                             itemId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UCallbackProxyGetUserVoteOnWorkshopItem*     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.CallbackProxyQueryWorkshopForAllItems.SteamWorkshop_QueryForAllItems
struct UCallbackProxyQueryWorkshopForAllItems_SteamWorkshop_QueryForAllItems_Params
{
	struct FSteamUGCQueryParameterAll                  Parameter;                                                 // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UCallbackProxyQueryWorkshopForAllItems*      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.CallbackProxyQueryWorkshopForItemDetails.SteamWorkshop_QueryForItemDetails
struct UCallbackProxyQueryWorkshopForItemDetails_SteamWorkshop_QueryForItemDetails_Params
{
	struct FSteamUGCQueryParameterDetails              Parameter;                                                 // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UCallbackProxyQueryWorkshopForItemDetails*   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.CallbackProxyQueryWorkshopForUserItems.SteamWorkshop_QueryForUserItems
struct UCallbackProxyQueryWorkshopForUserItems_SteamWorkshop_QueryForUserItems_Params
{
	struct FSteamUGCQueryParameterUser                 Parameter;                                                 // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UCallbackProxyQueryWorkshopForUserItems*     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.CallbackProxySetUserVoteOnWorkshopItem.SteamWorkshop_SetUserVoteOnItem
struct UCallbackProxySetUserVoteOnWorkshopItem_SteamWorkshop_SetUserVoteOnItem_Params
{
	struct FSteamUGCItemId                             itemId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bVoteUp;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCallbackProxySetUserVoteOnWorkshopItem*     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.CallbackProxyStartStopWorkshopItemsPlaytimeTracking.SteamWorkshop_StartStopItemsPlaytimeTracking
struct UCallbackProxyStartStopWorkshopItemsPlaytimeTracking_SteamWorkshop_StartStopItemsPlaytimeTracking_Params
{
	TArray<struct FSteamUGCItemId>                     itemIds;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bStartPlaytimeTracking;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.CallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems.SteamWorkshop_StopPlaytimeTrackingAllItems
struct UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems_SteamWorkshop_StopPlaytimeTrackingAllItems_Params
{
	class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.CallbackProxySubscribeUnsubscribeWorkshopItem.SteamWorkshop_SubscribeUnsubscribeItem
struct UCallbackProxySubscribeUnsubscribeWorkshopItem_SteamWorkshop_SubscribeUnsubscribeItem_Params
{
	struct FSteamUGCItemId                             itemId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSubscribe;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCallbackProxySubscribeUnsubscribeWorkshopItem* ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.CallbackProxyUpdateWorkshopItem.SteamWorkshop_UpdateItem
struct UCallbackProxyUpdateWorkshopItem_SteamWorkshop_UpdateItem_Params
{
	struct FSteamUGCItemId                             itemId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamWorkshopUpdateDetails                 updateDetails;                                             // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             onUpdateStarted;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UCallbackProxyUpdateWorkshopItem*            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_UpdateTitleLengthMin_FromConfig
struct USteamWorkshopLibrary_SteamWorkshop_UpdateTitleLengthMin_FromConfig_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_UpdateDescriptionLengthMin_FromConfig
struct USteamWorkshopLibrary_SteamWorkshop_UpdateDescriptionLengthMin_FromConfig_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_SuspendResumeDownloads
struct USteamWorkshopLibrary_SteamWorkshop_SuspendResumeDownloads_Params
{
	bool                                               bDoSuspend;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_SetServerDownloadDirectory
struct USteamWorkshopLibrary_SteamWorkshop_SetServerDownloadDirectory_Params
{
	struct FSteamDepotId                               serverDepotId;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Directory;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamGeneral_EResultBP                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetSubscribedItems
struct USteamWorkshopLibrary_SteamWorkshop_GetSubscribedItems_Params
{
	int                                                maxNumItemsToReturn;                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSteamUGCItemId>                     outItems;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetNumSubscribedItems
struct USteamWorkshopLibrary_SteamWorkshop_GetNumSubscribedItems_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemUpdateProgress
struct USteamWorkshopLibrary_SteamWorkshop_GetItemUpdateProgress_Params
{
	struct FSteamUGCUpdateHandle                       updateHandle;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FWorkshopItemUpdateInfo                     Info;                                                      // 0x0000(0x0028)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemStateFlag
struct USteamWorkshopLibrary_SteamWorkshop_GetItemStateFlag_Params
{
	struct FSteamUGCItemId                             itemId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	SteamWorkshop_EItemStateBP                         flagToQuery;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemState
struct USteamWorkshopLibrary_SteamWorkshop_GetItemState_Params
{
	struct FSteamUGCItemId                             itemId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<SteamWorkshop_EItemStateBP>                 ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemQueryStatistic
struct USteamWorkshopLibrary_SteamWorkshop_GetItemQueryStatistic_Params
{
	struct FSteamUGCQueryHandle                        queryHandle;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ItemIndex;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SteamWorkshop_EItemStatisticBP>        statToRetrieve;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUInt64                                     StatValue;                                                 // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemInstallInfo
struct USteamWorkshopLibrary_SteamWorkshop_GetItemInstallInfo_Params
{
	struct FSteamUGCItemId                             itemId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamWorkshopItemInstallInfo               Info;                                                      // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	SteamGeneral_EResultBP                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemDownloadInfo
struct USteamWorkshopLibrary_SteamWorkshop_GetItemDownloadInfo_Params
{
	struct FSteamUGCItemId                             itemId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FWorkshopItemDownloadInfo                   downloadInfo;                                              // 0x0000(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	SteamGeneral_EResultBP                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_DownloadItem
struct USteamWorkshopLibrary_SteamWorkshop_DownloadItem_Params
{
	struct FSteamUGCItemId                             itemId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHighPriority;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamGeneral_EResultBP                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_ActivateGameOverlayToWorkshopItem
struct USteamWorkshopLibrary_SteamWorkshop_ActivateGameOverlayToWorkshopItem_Params
{
	struct FSteamUGCItemId                             itemId;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamDelegate_OnWorkshopItemDownloaded_Unbind
struct USteamWorkshopLibrary_SteamDelegate_OnWorkshopItemDownloaded_Unbind_Params
{
	struct FScriptDelegate                             delegateToCall;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.SteamDelegate_OnWorkshopItemDownloaded_Bind
struct USteamWorkshopLibrary_SteamDelegate_OnWorkshopItemDownloaded_Bind_Params
{
	struct FScriptDelegate                             delegateToCall;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.PrintWorkshopItemDetails
struct USteamWorkshopLibrary_PrintWorkshopItemDetails_Params
{
	struct FSteamWorkshopItemDetails                   itemDetails;                                               // 0x0000(0x0110)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              DisplayTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPrintToScreen;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPrintToLog;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.MakeSteamWorkshopUpdateDetails
struct USteamWorkshopLibrary_MakeSteamWorkshopUpdateDetails_Params
{
	struct FString                                     title;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     updateNotice;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MetaData;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             tags;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSteamKeyValuePair>                  keyValueTags;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     contentDirectory;                                          // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     previewImage;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             additionalImages;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FString>                             youtubeVideoIDs;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FString>                             keysOfKeyValueTagsToRemove;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int>                                        indexOfPreviewToRemove;                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	SteamGeneral_ESteamSupportedLanguages              updateLanguage;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamWorkshop_ESteamItemVisibility                 Visibility;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamWorkshopUpdateDetails                 ReturnValue;                                               // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.MakeSteamUGCQueryParameterTagsAllUserDetails
struct USteamWorkshopLibrary_MakeSteamUGCQueryParameterTagsAllUserDetails_Params
{
	TArray<struct FSteamKeyValuePair>                  requiredKeyValueTags;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamUGCQueryParameterTagsAllUserDetails   ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SteamWorkshop.SteamWorkshopLibrary.MakeSteamUGCQueryParameterTagsAllUser
struct USteamWorkshopLibrary_MakeSteamUGCQueryParameterTagsAllUser_Params
{
	TArray<struct FString>                             requiredTags;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FString>                             excludedTags;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSteamKeyValuePair>                  requiredKeyValueTags;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamUGCQueryParameterTagsAllUser          ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
