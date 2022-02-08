#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SteamWorkshop.CallbackProxyAddRemoveWorkshopItemFavorite
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UCallbackProxyAddRemoveWorkshopItemFavorite : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamInitFailure;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQY0[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCallbackProxyAddRemoveWorkshopItemFavorite* STATIC_SteamWorkshop_AddRemoveItemFavorite(const struct FSteamUGCItemId& itemId, bool bAddToFavourites);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamWorkshop.CallbackProxyCreateWorkshopItem
	 * Size -> 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
	 */
	class UCallbackProxyCreateWorkshopItem : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamInitFailure;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GWET[0xD0];                                  // 0x0058(0x00D0) MISSED OFFSET (PADDING)

	public:
		class UCallbackProxyCreateWorkshopItem* STATIC_SteamWorkshop_CreateItem(const struct FSteamWorkshopUpdateDetails& itemDetails);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamWorkshop.CallbackProxyGetUserVoteOnWorkshopItem
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UCallbackProxyGetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamInitFailure;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0ZV[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		class UCallbackProxyGetUserVoteOnWorkshopItem* STATIC_SteamWorkshop_GetUserVoteOnItem(const struct FSteamUGCItemId& itemId);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamWorkshop.CallbackProxyQueryWorkshopForAllItems
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UCallbackProxyQueryWorkshopForAllItems : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamInitFailure;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_374D[0x68];                                  // 0x0058(0x0068) MISSED OFFSET (PADDING)

	public:
		class UCallbackProxyQueryWorkshopForAllItems* STATIC_SteamWorkshop_QueryForAllItems(const struct FSteamUGCQueryParameterAll& Parameter);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamWorkshop.CallbackProxyQueryWorkshopForItemDetails
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UCallbackProxyQueryWorkshopForItemDetails : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamInitFailure;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIWM[0x38];                                  // 0x0058(0x0038) MISSED OFFSET (PADDING)

	public:
		class UCallbackProxyQueryWorkshopForItemDetails* STATIC_SteamWorkshop_QueryForItemDetails(const struct FSteamUGCQueryParameterDetails& Parameter);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamWorkshop.CallbackProxyQueryWorkshopForUserItems
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UCallbackProxyQueryWorkshopForUserItems : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamInitFailure;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3146[0x68];                                  // 0x0058(0x0068) MISSED OFFSET (PADDING)

	public:
		class UCallbackProxyQueryWorkshopForUserItems* STATIC_SteamWorkshop_QueryForUserItems(const struct FSteamUGCQueryParameterUser& Parameter);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamWorkshop.CallbackProxySetUserVoteOnWorkshopItem
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UCallbackProxySetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamInitFailure;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJOA[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCallbackProxySetUserVoteOnWorkshopItem* STATIC_SteamWorkshop_SetUserVoteOnItem(const struct FSteamUGCItemId& itemId, bool bVoteUp);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamWorkshop.CallbackProxyStartStopWorkshopItemsPlaytimeTracking
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamInitFailure;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R0Z1[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (PADDING)

	public:
		class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking* STATIC_SteamWorkshop_StartStopItemsPlaytimeTracking(TArray<struct FSteamUGCItemId> itemIds, bool bStartPlaytimeTracking);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamWorkshop.CallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamInitFailure;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems* STATIC_SteamWorkshop_StopPlaytimeTrackingAllItems();
		static UClass* StaticClass();
	};

	/**
	 * Class SteamWorkshop.CallbackProxySubscribeUnsubscribeWorkshopItem
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UCallbackProxySubscribeUnsubscribeWorkshopItem : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamInitFailure;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BC0P[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCallbackProxySubscribeUnsubscribeWorkshopItem* STATIC_SteamWorkshop_SubscribeUnsubscribeItem(const struct FSteamUGCItemId& itemId, bool bSubscribe);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamWorkshop.CallbackProxyUpdateWorkshopItem
	 * Size -> 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
	 */
	class UCallbackProxyUpdateWorkshopItem : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnUpdateComplete;                                        // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamInitFailure;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GDJO[0xE8];                                  // 0x0058(0x00E8) MISSED OFFSET (PADDING)

	public:
		class UCallbackProxyUpdateWorkshopItem* STATIC_SteamWorkshop_UpdateItem(const struct FSteamUGCItemId& itemId, const struct FSteamWorkshopUpdateDetails& updateDetails, const class FScriptDelegate& onUpdateStarted);
		static UClass* StaticClass();
	};

	/**
	 * Class SteamWorkshop.SteamWorkshopLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamWorkshopLibrary : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_SteamWorkshop_UpdateTitleLengthMin_FromConfig();
		int32_t STATIC_SteamWorkshop_UpdateDescriptionLengthMin_FromConfig();
		void STATIC_SteamWorkshop_SuspendResumeDownloads(bool bDoSuspend);
		SteamGeneral_EResultBP STATIC_SteamWorkshop_SetServerDownloadDirectory(const struct FSteamDepotId& serverDepotId, const class FString& Directory);
		void STATIC_SteamWorkshop_GetSubscribedItems(int32_t maxNumItemsToReturn, TArray<struct FSteamUGCItemId>* outItems);
		int32_t STATIC_SteamWorkshop_GetNumSubscribedItems();
		void STATIC_SteamWorkshop_GetItemUpdateProgress(const struct FSteamUGCUpdateHandle& updateHandle, struct FWorkshopItemUpdateInfo* Info);
		bool STATIC_SteamWorkshop_GetItemStateFlag(const struct FSteamUGCItemId& itemId, SteamWorkshop_EItemStateBP flagToQuery);
		TArray<SteamWorkshop_EItemStateBP> STATIC_SteamWorkshop_GetItemState(const struct FSteamUGCItemId& itemId);
		bool STATIC_SteamWorkshop_GetItemQueryStatistic(const struct FSteamUGCQueryHandle& queryHandle, int32_t ItemIndex, SteamWorkshop_EItemStatisticBP statToRetrieve, struct FUInt64* StatValue);
		SteamGeneral_EResultBP STATIC_SteamWorkshop_GetItemInstallInfo(const struct FSteamUGCItemId& itemId, struct FSteamWorkshopItemInstallInfo* Info);
		SteamGeneral_EResultBP STATIC_SteamWorkshop_GetItemDownloadInfo(const struct FSteamUGCItemId& itemId, struct FWorkshopItemDownloadInfo* downloadInfo);
		SteamGeneral_EResultBP STATIC_SteamWorkshop_DownloadItem(const struct FSteamUGCItemId& itemId, bool bHighPriority);
		void STATIC_SteamWorkshop_ActivateGameOverlayToWorkshopItem(const struct FSteamUGCItemId& itemId);
		bool STATIC_SteamDelegate_OnWorkshopItemDownloaded_Unbind(const class FScriptDelegate& delegateToCall);
		bool STATIC_SteamDelegate_OnWorkshopItemDownloaded_Bind(const class FScriptDelegate& delegateToCall);
		void STATIC_PrintWorkshopItemDetails(const struct FSteamWorkshopItemDetails& itemDetails, float DisplayTime, const struct FLinearColor& Color, bool bPrintToScreen, bool bPrintToLog);
		struct FSteamWorkshopUpdateDetails STATIC_MakeSteamWorkshopUpdateDetails(const class FString& title, const class FString& Description, const class FString& updateNotice, const class FString& MetaData, TArray<class FString> tags, TArray<struct FSteamKeyValuePair> keyValueTags, const class FString& contentDirectory, const class FString& previewImage, TArray<class FString> additionalImages, TArray<class FString> youtubeVideoIDs, TArray<class FString> keysOfKeyValueTagsToRemove, TArray<int32_t> indexOfPreviewToRemove, SteamGeneral_ESteamSupportedLanguages updateLanguage, SteamWorkshop_ESteamItemVisibility Visibility);
		struct FSteamUGCQueryParameterTagsAllUserDetails STATIC_MakeSteamUGCQueryParameterTagsAllUserDetails(TArray<struct FSteamKeyValuePair> requiredKeyValueTags);
		struct FSteamUGCQueryParameterTagsAllUser STATIC_MakeSteamUGCQueryParameterTagsAllUser(TArray<class FString> requiredTags, TArray<class FString> excludedTags, TArray<struct FSteamKeyValuePair> requiredKeyValueTags);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
