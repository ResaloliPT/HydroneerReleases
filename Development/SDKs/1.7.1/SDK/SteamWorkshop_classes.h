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
// Classes
//---------------------------------------------------------------------------

// Class SteamWorkshop.CallbackProxyAddRemoveWorkshopItemFavorite
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UCallbackProxyAddRemoveWorkshopItemFavorite : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSteamInitFailure;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LBPH[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.CallbackProxyAddRemoveWorkshopItemFavorite");
		return ptr;
	}



	class UCallbackProxyAddRemoveWorkshopItemFavorite* STATIC_SteamWorkshop_AddRemoveItemFavorite(const struct FSteamUGCItemId& itemId, bool bAddToFavourites);
	void AfterRead();
	void BeforeDelete();

};

// Class SteamWorkshop.CallbackProxyCreateWorkshopItem
// 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
class UCallbackProxyCreateWorkshopItem : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSteamInitFailure;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CGPU[0xD0];                                    // 0x0058(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.CallbackProxyCreateWorkshopItem");
		return ptr;
	}



	class UCallbackProxyCreateWorkshopItem* STATIC_SteamWorkshop_CreateItem(const struct FSteamWorkshopUpdateDetails& itemDetails);
	void AfterRead();
	void BeforeDelete();

};

// Class SteamWorkshop.CallbackProxyGetUserVoteOnWorkshopItem
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UCallbackProxyGetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSteamInitFailure;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VYRC[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.CallbackProxyGetUserVoteOnWorkshopItem");
		return ptr;
	}



	class UCallbackProxyGetUserVoteOnWorkshopItem* STATIC_SteamWorkshop_GetUserVoteOnItem(const struct FSteamUGCItemId& itemId);
	void AfterRead();
	void BeforeDelete();

};

// Class SteamWorkshop.CallbackProxyQueryWorkshopForAllItems
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UCallbackProxyQueryWorkshopForAllItems : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSteamInitFailure;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UQKN[0x68];                                    // 0x0058(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.CallbackProxyQueryWorkshopForAllItems");
		return ptr;
	}



	class UCallbackProxyQueryWorkshopForAllItems* STATIC_SteamWorkshop_QueryForAllItems(const struct FSteamUGCQueryParameterAll& Parameter);
	void AfterRead();
	void BeforeDelete();

};

// Class SteamWorkshop.CallbackProxyQueryWorkshopForItemDetails
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UCallbackProxyQueryWorkshopForItemDetails : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSteamInitFailure;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EY2D[0x38];                                    // 0x0058(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.CallbackProxyQueryWorkshopForItemDetails");
		return ptr;
	}



	class UCallbackProxyQueryWorkshopForItemDetails* STATIC_SteamWorkshop_QueryForItemDetails(const struct FSteamUGCQueryParameterDetails& Parameter);
	void AfterRead();
	void BeforeDelete();

};

// Class SteamWorkshop.CallbackProxyQueryWorkshopForUserItems
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UCallbackProxyQueryWorkshopForUserItems : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSteamInitFailure;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZCZ[0x68];                                    // 0x0058(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.CallbackProxyQueryWorkshopForUserItems");
		return ptr;
	}



	class UCallbackProxyQueryWorkshopForUserItems* STATIC_SteamWorkshop_QueryForUserItems(const struct FSteamUGCQueryParameterUser& Parameter);
	void AfterRead();
	void BeforeDelete();

};

// Class SteamWorkshop.CallbackProxySetUserVoteOnWorkshopItem
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UCallbackProxySetUserVoteOnWorkshopItem : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSteamInitFailure;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4HOA[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.CallbackProxySetUserVoteOnWorkshopItem");
		return ptr;
	}



	class UCallbackProxySetUserVoteOnWorkshopItem* STATIC_SteamWorkshop_SetUserVoteOnItem(const struct FSteamUGCItemId& itemId, bool bVoteUp);
	void AfterRead();
	void BeforeDelete();

};

// Class SteamWorkshop.CallbackProxyStartStopWorkshopItemsPlaytimeTracking
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSteamInitFailure;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SYIM[0x18];                                    // 0x0058(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.CallbackProxyStartStopWorkshopItemsPlaytimeTracking");
		return ptr;
	}



	class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking* STATIC_SteamWorkshop_StartStopItemsPlaytimeTracking(TArray<struct FSteamUGCItemId> itemIds, bool bStartPlaytimeTracking);
	void AfterRead();
	void BeforeDelete();

};

// Class SteamWorkshop.CallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSteamInitFailure;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.CallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems");
		return ptr;
	}



	class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems* STATIC_SteamWorkshop_StopPlaytimeTrackingAllItems();
	void AfterRead();
	void BeforeDelete();

};

// Class SteamWorkshop.CallbackProxySubscribeUnsubscribeWorkshopItem
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UCallbackProxySubscribeUnsubscribeWorkshopItem : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSteamInitFailure;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9US5[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.CallbackProxySubscribeUnsubscribeWorkshopItem");
		return ptr;
	}



	class UCallbackProxySubscribeUnsubscribeWorkshopItem* STATIC_SteamWorkshop_SubscribeUnsubscribeItem(const struct FSteamUGCItemId& itemId, bool bSubscribe);
	void AfterRead();
	void BeforeDelete();

};

// Class SteamWorkshop.CallbackProxyUpdateWorkshopItem
// 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
class UCallbackProxyUpdateWorkshopItem : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnUpdateComplete;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSteamInitFailure;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W7SL[0xE8];                                    // 0x0058(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.CallbackProxyUpdateWorkshopItem");
		return ptr;
	}



	class UCallbackProxyUpdateWorkshopItem* STATIC_SteamWorkshop_UpdateItem(const struct FSteamUGCItemId& itemId, const struct FSteamWorkshopUpdateDetails& updateDetails, const struct FScriptDelegate& onUpdateStarted);
	void AfterRead();
	void BeforeDelete();

};

// Class SteamWorkshop.SteamWorkshopLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamWorkshopLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamWorkshop.SteamWorkshopLibrary");
		return ptr;
	}



	int STATIC_SteamWorkshop_UpdateTitleLengthMin_FromConfig();
	int STATIC_SteamWorkshop_UpdateDescriptionLengthMin_FromConfig();
	void STATIC_SteamWorkshop_SuspendResumeDownloads(bool bDoSuspend);
	SteamGeneral_EResultBP STATIC_SteamWorkshop_SetServerDownloadDirectory(const struct FSteamDepotId& serverDepotId, const struct FString& Directory);
	void STATIC_SteamWorkshop_GetSubscribedItems(int maxNumItemsToReturn, TArray<struct FSteamUGCItemId>* outItems);
	int STATIC_SteamWorkshop_GetNumSubscribedItems();
	void STATIC_SteamWorkshop_GetItemUpdateProgress(const struct FSteamUGCUpdateHandle& updateHandle, struct FWorkshopItemUpdateInfo* Info);
	bool STATIC_SteamWorkshop_GetItemStateFlag(const struct FSteamUGCItemId& itemId, SteamWorkshop_EItemStateBP flagToQuery);
	TArray<SteamWorkshop_EItemStateBP> STATIC_SteamWorkshop_GetItemState(const struct FSteamUGCItemId& itemId);
	bool STATIC_SteamWorkshop_GetItemQueryStatistic(const struct FSteamUGCQueryHandle& queryHandle, int ItemIndex, TEnumAsByte<SteamWorkshop_EItemStatisticBP> statToRetrieve, struct FUInt64* StatValue);
	SteamGeneral_EResultBP STATIC_SteamWorkshop_GetItemInstallInfo(const struct FSteamUGCItemId& itemId, struct FSteamWorkshopItemInstallInfo* Info);
	SteamGeneral_EResultBP STATIC_SteamWorkshop_GetItemDownloadInfo(const struct FSteamUGCItemId& itemId, struct FWorkshopItemDownloadInfo* downloadInfo);
	SteamGeneral_EResultBP STATIC_SteamWorkshop_DownloadItem(const struct FSteamUGCItemId& itemId, bool bHighPriority);
	void STATIC_SteamWorkshop_ActivateGameOverlayToWorkshopItem(const struct FSteamUGCItemId& itemId);
	bool STATIC_SteamDelegate_OnWorkshopItemDownloaded_Unbind(const struct FScriptDelegate& delegateToCall);
	bool STATIC_SteamDelegate_OnWorkshopItemDownloaded_Bind(const struct FScriptDelegate& delegateToCall);
	void STATIC_PrintWorkshopItemDetails(const struct FSteamWorkshopItemDetails& itemDetails, float DisplayTime, const struct FLinearColor& Color, bool bPrintToScreen, bool bPrintToLog);
	struct FSteamWorkshopUpdateDetails STATIC_MakeSteamWorkshopUpdateDetails(const struct FString& title, const struct FString& Description, const struct FString& updateNotice, const struct FString& MetaData, TArray<struct FString> tags, TArray<struct FSteamKeyValuePair> keyValueTags, const struct FString& contentDirectory, const struct FString& previewImage, TArray<struct FString> additionalImages, TArray<struct FString> youtubeVideoIDs, TArray<struct FString> keysOfKeyValueTagsToRemove, TArray<int> indexOfPreviewToRemove, SteamGeneral_ESteamSupportedLanguages updateLanguage, SteamWorkshop_ESteamItemVisibility Visibility);
	struct FSteamUGCQueryParameterTagsAllUserDetails STATIC_MakeSteamUGCQueryParameterTagsAllUserDetails(TArray<struct FSteamKeyValuePair> requiredKeyValueTags);
	struct FSteamUGCQueryParameterTagsAllUser STATIC_MakeSteamUGCQueryParameterTagsAllUser(TArray<struct FString> requiredTags, TArray<struct FString> excludedTags, TArray<struct FSteamKeyValuePair> requiredKeyValueTags);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
