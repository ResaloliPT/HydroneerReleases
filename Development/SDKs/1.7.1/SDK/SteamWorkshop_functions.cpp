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

void FSteamWorkshopUpdateDetails::AfterRead()
{
}

void FSteamWorkshopUpdateDetails::BeforeDelete()
{
}

void FSteamUGCQueryParameterAllUserDetails::AfterRead()
{
}

void FSteamUGCQueryParameterAllUserDetails::BeforeDelete()
{
}

void FSteamUGCQueryParameterTagsAllUserDetails::AfterRead()
{
}

void FSteamUGCQueryParameterTagsAllUserDetails::BeforeDelete()
{
}

void FSteamUGCQueryParameterTagsAllUser::AfterRead()
{
	FSteamUGCQueryParameterTagsAllUserDetails::AfterRead();

}

void FSteamUGCQueryParameterTagsAllUser::BeforeDelete()
{
	FSteamUGCQueryParameterTagsAllUserDetails::BeforeDelete();

}

void FSteamUGCQueryParameterAllUser::AfterRead()
{
	FSteamUGCQueryParameterAllUserDetails::AfterRead();

}

void FSteamUGCQueryParameterAllUser::BeforeDelete()
{
	FSteamUGCQueryParameterAllUserDetails::BeforeDelete();

}

void FSteamUGCQueryParameterAll::AfterRead()
{
	FSteamUGCQueryParameterAllUser::AfterRead();

}

void FSteamUGCQueryParameterAll::BeforeDelete()
{
	FSteamUGCQueryParameterAllUser::BeforeDelete();

}

void FSteamUGCQueryParameterDetails::AfterRead()
{
	FSteamUGCQueryParameterAllUserDetails::AfterRead();

}

void FSteamUGCQueryParameterDetails::BeforeDelete()
{
	FSteamUGCQueryParameterAllUserDetails::BeforeDelete();

}

void FSteamUGCQueryParameterUser::AfterRead()
{
	FSteamUGCQueryParameterAllUser::AfterRead();

}

void FSteamUGCQueryParameterUser::BeforeDelete()
{
	FSteamUGCQueryParameterAllUser::BeforeDelete();

}

void FWorkshopItemDownloadInfo::AfterRead()
{
}

void FWorkshopItemDownloadInfo::BeforeDelete()
{
}

void FWorkshopItemUpdateInfo::AfterRead()
{
	FWorkshopItemDownloadInfo::AfterRead();

}

void FWorkshopItemUpdateInfo::BeforeDelete()
{
	FWorkshopItemDownloadInfo::BeforeDelete();

}

void FItemPreviewDetails::AfterRead()
{
}

void FItemPreviewDetails::BeforeDelete()
{
}

void FSteamWorkshopItemDetails::AfterRead()
{
}

void FSteamWorkshopItemDetails::BeforeDelete()
{
}

void FSteamWorkshopItemInstallInfo::AfterRead()
{
}

void FSteamWorkshopItemInstallInfo::BeforeDelete()
{
}

void FSteamResult::AfterRead()
{
}

void FSteamResult::BeforeDelete()
{
}

void FGeneralWorkshopItemResult::AfterRead()
{
	FSteamResult::AfterRead();

}

void FGeneralWorkshopItemResult::BeforeDelete()
{
	FSteamResult::BeforeDelete();

}

void FDownloadItemResult::AfterRead()
{
	FGeneralWorkshopItemResult::AfterRead();

}

void FDownloadItemResult::BeforeDelete()
{
	FGeneralWorkshopItemResult::BeforeDelete();

}

void FUserFavoriteItemChangedResult::AfterRead()
{
	FGeneralWorkshopItemResult::AfterRead();

}

void FUserFavoriteItemChangedResult::BeforeDelete()
{
	FGeneralWorkshopItemResult::BeforeDelete();

}

void FUpdateWorkshopItemResult::AfterRead()
{
	FGeneralWorkshopItemResult::AfterRead();

}

void FUpdateWorkshopItemResult::BeforeDelete()
{
	FGeneralWorkshopItemResult::BeforeDelete();

}

void FQueryWorkshopForItemsResult::AfterRead()
{
	FSteamResult::AfterRead();

}

void FQueryWorkshopForItemsResult::BeforeDelete()
{
	FSteamResult::BeforeDelete();

}

void FQueryWorkshopForItemDetailsResult::AfterRead()
{
	FQueryWorkshopForItemsResult::AfterRead();

}

void FQueryWorkshopForItemDetailsResult::BeforeDelete()
{
	FQueryWorkshopForItemsResult::BeforeDelete();

}

void FCreateWorkshopItemResult::AfterRead()
{
	FUpdateWorkshopItemResult::AfterRead();

}

void FCreateWorkshopItemResult::BeforeDelete()
{
	FUpdateWorkshopItemResult::BeforeDelete();

}

void FGetUserVoteOnWorkshopItemResult::AfterRead()
{
	FGeneralWorkshopItemResult::AfterRead();

}

void FGetUserVoteOnWorkshopItemResult::BeforeDelete()
{
	FGeneralWorkshopItemResult::BeforeDelete();

}

void FQueryWorkshopForAllItemsResult::AfterRead()
{
	FQueryWorkshopForItemsResult::AfterRead();

}

void FQueryWorkshopForAllItemsResult::BeforeDelete()
{
	FQueryWorkshopForItemsResult::BeforeDelete();

}

void FQueryWorkshopForUserItemsResult::AfterRead()
{
	FQueryWorkshopForItemsResult::AfterRead();

}

void FQueryWorkshopForUserItemsResult::BeforeDelete()
{
	FQueryWorkshopForItemsResult::BeforeDelete();

}

void FSetUserVoteOnWorkshopItemResult::AfterRead()
{
	FGeneralWorkshopItemResult::AfterRead();

}

void FSetUserVoteOnWorkshopItemResult::BeforeDelete()
{
	FGeneralWorkshopItemResult::BeforeDelete();

}

void FGetAppdependencyResult::AfterRead()
{
	FGeneralWorkshopItemResult::AfterRead();

}

void FGetAppdependencyResult::BeforeDelete()
{
	FGeneralWorkshopItemResult::BeforeDelete();

}

void FAddRemoveItemDependencyResult::AfterRead()
{
	FGeneralWorkshopItemResult::AfterRead();

}

void FAddRemoveItemDependencyResult::BeforeDelete()
{
	FGeneralWorkshopItemResult::BeforeDelete();

}

void FAddRemoveAppDependencyResult::AfterRead()
{
	FDownloadItemResult::AfterRead();

}

void FAddRemoveAppDependencyResult::BeforeDelete()
{
	FDownloadItemResult::BeforeDelete();

}

// Function:
//		Offset -> 0x005AE1A0
//		Name   -> Function SteamWorkshop.CallbackProxyAddRemoveWorkshopItemFavorite.SteamWorkshop_AddRemoveItemFavorite
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamUGCItemId                             itemId                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bAddToFavourites                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxyAddRemoveWorkshopItemFavorite* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxyAddRemoveWorkshopItemFavorite* UCallbackProxyAddRemoveWorkshopItemFavorite::STATIC_SteamWorkshop_AddRemoveItemFavorite(const struct FSteamUGCItemId& itemId, bool bAddToFavourites)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.CallbackProxyAddRemoveWorkshopItemFavorite.SteamWorkshop_AddRemoveItemFavorite");

	UCallbackProxyAddRemoveWorkshopItemFavorite_SteamWorkshop_AddRemoveItemFavorite_Params params {};
	params.itemId = itemId;
	params.bAddToFavourites = bAddToFavourites;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCallbackProxyAddRemoveWorkshopItemFavorite::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCallbackProxyAddRemoveWorkshopItemFavorite::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function:
//		Offset -> 0x005AE2D0
//		Name   -> Function SteamWorkshop.CallbackProxyCreateWorkshopItem.SteamWorkshop_CreateItem
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamWorkshopUpdateDetails                 itemDetails                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UCallbackProxyCreateWorkshopItem*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxyCreateWorkshopItem* UCallbackProxyCreateWorkshopItem::STATIC_SteamWorkshop_CreateItem(const struct FSteamWorkshopUpdateDetails& itemDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.CallbackProxyCreateWorkshopItem.SteamWorkshop_CreateItem");

	UCallbackProxyCreateWorkshopItem_SteamWorkshop_CreateItem_Params params {};
	params.itemDetails = itemDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCallbackProxyCreateWorkshopItem::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCallbackProxyCreateWorkshopItem::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function:
//		Offset -> 0x005AEC00
//		Name   -> Function SteamWorkshop.CallbackProxyGetUserVoteOnWorkshopItem.SteamWorkshop_GetUserVoteOnItem
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamUGCItemId                             itemId                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCallbackProxyGetUserVoteOnWorkshopItem*     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxyGetUserVoteOnWorkshopItem* UCallbackProxyGetUserVoteOnWorkshopItem::STATIC_SteamWorkshop_GetUserVoteOnItem(const struct FSteamUGCItemId& itemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.CallbackProxyGetUserVoteOnWorkshopItem.SteamWorkshop_GetUserVoteOnItem");

	UCallbackProxyGetUserVoteOnWorkshopItem_SteamWorkshop_GetUserVoteOnItem_Params params {};
	params.itemId = itemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCallbackProxyGetUserVoteOnWorkshopItem::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCallbackProxyGetUserVoteOnWorkshopItem::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function:
//		Offset -> 0x005AECE0
//		Name   -> Function SteamWorkshop.CallbackProxyQueryWorkshopForAllItems.SteamWorkshop_QueryForAllItems
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamUGCQueryParameterAll                  Parameter                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UCallbackProxyQueryWorkshopForAllItems*      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxyQueryWorkshopForAllItems* UCallbackProxyQueryWorkshopForAllItems::STATIC_SteamWorkshop_QueryForAllItems(const struct FSteamUGCQueryParameterAll& Parameter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.CallbackProxyQueryWorkshopForAllItems.SteamWorkshop_QueryForAllItems");

	UCallbackProxyQueryWorkshopForAllItems_SteamWorkshop_QueryForAllItems_Params params {};
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCallbackProxyQueryWorkshopForAllItems::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCallbackProxyQueryWorkshopForAllItems::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function:
//		Offset -> 0x005AEE60
//		Name   -> Function SteamWorkshop.CallbackProxyQueryWorkshopForItemDetails.SteamWorkshop_QueryForItemDetails
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamUGCQueryParameterDetails              Parameter                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UCallbackProxyQueryWorkshopForItemDetails*   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxyQueryWorkshopForItemDetails* UCallbackProxyQueryWorkshopForItemDetails::STATIC_SteamWorkshop_QueryForItemDetails(const struct FSteamUGCQueryParameterDetails& Parameter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.CallbackProxyQueryWorkshopForItemDetails.SteamWorkshop_QueryForItemDetails");

	UCallbackProxyQueryWorkshopForItemDetails_SteamWorkshop_QueryForItemDetails_Params params {};
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCallbackProxyQueryWorkshopForItemDetails::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCallbackProxyQueryWorkshopForItemDetails::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function:
//		Offset -> 0x005AEFB0
//		Name   -> Function SteamWorkshop.CallbackProxyQueryWorkshopForUserItems.SteamWorkshop_QueryForUserItems
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamUGCQueryParameterUser                 Parameter                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UCallbackProxyQueryWorkshopForUserItems*     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxyQueryWorkshopForUserItems* UCallbackProxyQueryWorkshopForUserItems::STATIC_SteamWorkshop_QueryForUserItems(const struct FSteamUGCQueryParameterUser& Parameter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.CallbackProxyQueryWorkshopForUserItems.SteamWorkshop_QueryForUserItems");

	UCallbackProxyQueryWorkshopForUserItems_SteamWorkshop_QueryForUserItems_Params params {};
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCallbackProxyQueryWorkshopForUserItems::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCallbackProxyQueryWorkshopForUserItems::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function:
//		Offset -> 0x005AF210
//		Name   -> Function SteamWorkshop.CallbackProxySetUserVoteOnWorkshopItem.SteamWorkshop_SetUserVoteOnItem
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamUGCItemId                             itemId                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bVoteUp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxySetUserVoteOnWorkshopItem*     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxySetUserVoteOnWorkshopItem* UCallbackProxySetUserVoteOnWorkshopItem::STATIC_SteamWorkshop_SetUserVoteOnItem(const struct FSteamUGCItemId& itemId, bool bVoteUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.CallbackProxySetUserVoteOnWorkshopItem.SteamWorkshop_SetUserVoteOnItem");

	UCallbackProxySetUserVoteOnWorkshopItem_SteamWorkshop_SetUserVoteOnItem_Params params {};
	params.itemId = itemId;
	params.bVoteUp = bVoteUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCallbackProxySetUserVoteOnWorkshopItem::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCallbackProxySetUserVoteOnWorkshopItem::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function:
//		Offset -> 0x005AF340
//		Name   -> Function SteamWorkshop.CallbackProxyStartStopWorkshopItemsPlaytimeTracking.SteamWorkshop_StartStopItemsPlaytimeTracking
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FSteamUGCItemId>                     itemIds                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bStartPlaytimeTracking                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxyStartStopWorkshopItemsPlaytimeTracking* UCallbackProxyStartStopWorkshopItemsPlaytimeTracking::STATIC_SteamWorkshop_StartStopItemsPlaytimeTracking(TArray<struct FSteamUGCItemId> itemIds, bool bStartPlaytimeTracking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.CallbackProxyStartStopWorkshopItemsPlaytimeTracking.SteamWorkshop_StartStopItemsPlaytimeTracking");

	UCallbackProxyStartStopWorkshopItemsPlaytimeTracking_SteamWorkshop_StartStopItemsPlaytimeTracking_Params params {};
	params.itemIds = itemIds;
	params.bStartPlaytimeTracking = bStartPlaytimeTracking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCallbackProxyStartStopWorkshopItemsPlaytimeTracking::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCallbackProxyStartStopWorkshopItemsPlaytimeTracking::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function:
//		Offset -> 0x005AF4A0
//		Name   -> Function SteamWorkshop.CallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems.SteamWorkshop_StopPlaytimeTrackingAllItems
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems* UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems::STATIC_SteamWorkshop_StopPlaytimeTrackingAllItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.CallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems.SteamWorkshop_StopPlaytimeTrackingAllItems");

	UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems_SteamWorkshop_StopPlaytimeTrackingAllItems_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCallbackProxyStopWorkshopItemsPlaytimeTrackingAllItems::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function:
//		Offset -> 0x005AF530
//		Name   -> Function SteamWorkshop.CallbackProxySubscribeUnsubscribeWorkshopItem.SteamWorkshop_SubscribeUnsubscribeItem
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamUGCItemId                             itemId                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bSubscribe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCallbackProxySubscribeUnsubscribeWorkshopItem* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxySubscribeUnsubscribeWorkshopItem* UCallbackProxySubscribeUnsubscribeWorkshopItem::STATIC_SteamWorkshop_SubscribeUnsubscribeItem(const struct FSteamUGCItemId& itemId, bool bSubscribe)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.CallbackProxySubscribeUnsubscribeWorkshopItem.SteamWorkshop_SubscribeUnsubscribeItem");

	UCallbackProxySubscribeUnsubscribeWorkshopItem_SteamWorkshop_SubscribeUnsubscribeItem_Params params {};
	params.itemId = itemId;
	params.bSubscribe = bSubscribe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCallbackProxySubscribeUnsubscribeWorkshopItem::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCallbackProxySubscribeUnsubscribeWorkshopItem::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function:
//		Offset -> 0x005AF710
//		Name   -> Function SteamWorkshop.CallbackProxyUpdateWorkshopItem.SteamWorkshop_UpdateItem
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamUGCItemId                             itemId                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FSteamWorkshopUpdateDetails                 updateDetails                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             onUpdateStarted                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		class UCallbackProxyUpdateWorkshopItem*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCallbackProxyUpdateWorkshopItem* UCallbackProxyUpdateWorkshopItem::STATIC_SteamWorkshop_UpdateItem(const struct FSteamUGCItemId& itemId, const struct FSteamWorkshopUpdateDetails& updateDetails, const struct FScriptDelegate& onUpdateStarted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.CallbackProxyUpdateWorkshopItem.SteamWorkshop_UpdateItem");

	UCallbackProxyUpdateWorkshopItem_SteamWorkshop_UpdateItem_Params params {};
	params.itemId = itemId;
	params.updateDetails = updateDetails;
	params.onUpdateStarted = onUpdateStarted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCallbackProxyUpdateWorkshopItem::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCallbackProxyUpdateWorkshopItem::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function:
//		Offset -> 0x005AF950
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_UpdateTitleLengthMin_FromConfig
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamWorkshopLibrary::STATIC_SteamWorkshop_UpdateTitleLengthMin_FromConfig()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_UpdateTitleLengthMin_FromConfig");

	USteamWorkshopLibrary_SteamWorkshop_UpdateTitleLengthMin_FromConfig_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AF6E0
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_UpdateDescriptionLengthMin_FromConfig
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamWorkshopLibrary::STATIC_SteamWorkshop_UpdateDescriptionLengthMin_FromConfig()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_UpdateDescriptionLengthMin_FromConfig");

	USteamWorkshopLibrary_SteamWorkshop_UpdateDescriptionLengthMin_FromConfig_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AF660
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_SuspendResumeDownloads
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               bDoSuspend                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamWorkshopLibrary::STATIC_SteamWorkshop_SuspendResumeDownloads(bool bDoSuspend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_SuspendResumeDownloads");

	USteamWorkshopLibrary_SteamWorkshop_SuspendResumeDownloads_Params params {};
	params.bDoSuspend = bDoSuspend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005AF120
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_SetServerDownloadDirectory
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamDepotId                               serverDepotId                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     Directory                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		SteamGeneral_EResultBP                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamGeneral_EResultBP USteamWorkshopLibrary::STATIC_SteamWorkshop_SetServerDownloadDirectory(const struct FSteamDepotId& serverDepotId, const struct FString& Directory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_SetServerDownloadDirectory");

	USteamWorkshopLibrary_SteamWorkshop_SetServerDownloadDirectory_Params params {};
	params.serverDepotId = serverDepotId;
	params.Directory = Directory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AEB30
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetSubscribedItems
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                maxNumItemsToReturn                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FSteamUGCItemId>                     outItems                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USteamWorkshopLibrary::STATIC_SteamWorkshop_GetSubscribedItems(int maxNumItemsToReturn, TArray<struct FSteamUGCItemId>* outItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetSubscribedItems");

	USteamWorkshopLibrary_SteamWorkshop_GetSubscribedItems_Params params {};
	params.maxNumItemsToReturn = maxNumItemsToReturn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outItems != nullptr)
		*outItems = params.outItems;

}


// Function:
//		Offset -> 0x005AEB00
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetNumSubscribedItems
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamWorkshopLibrary::STATIC_SteamWorkshop_GetNumSubscribedItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetNumSubscribedItems");

	USteamWorkshopLibrary_SteamWorkshop_GetNumSubscribedItems_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AEA20
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemUpdateProgress
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCUpdateHandle                       updateHandle                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FWorkshopItemUpdateInfo                     Info                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void USteamWorkshopLibrary::STATIC_SteamWorkshop_GetItemUpdateProgress(const struct FSteamUGCUpdateHandle& updateHandle, struct FWorkshopItemUpdateInfo* Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemUpdateProgress");

	USteamWorkshopLibrary_SteamWorkshop_GetItemUpdateProgress_Params params {};
	params.updateHandle = updateHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

}


// Function:
//		Offset -> 0x005AE950
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemStateFlag
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCItemId                             itemId                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		SteamWorkshop_EItemStateBP                         flagToQuery                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamWorkshopLibrary::STATIC_SteamWorkshop_GetItemStateFlag(const struct FSteamUGCItemId& itemId, SteamWorkshop_EItemStateBP flagToQuery)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemStateFlag");

	USteamWorkshopLibrary_SteamWorkshop_GetItemStateFlag_Params params {};
	params.itemId = itemId;
	params.flagToQuery = flagToQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AE880
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemState
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCItemId                             itemId                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<SteamWorkshop_EItemStateBP>                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<SteamWorkshop_EItemStateBP> USteamWorkshopLibrary::STATIC_SteamWorkshop_GetItemState(const struct FSteamUGCItemId& itemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemState");

	USteamWorkshopLibrary_SteamWorkshop_GetItemState_Params params {};
	params.itemId = itemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AE720
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemQueryStatistic
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCQueryHandle                        queryHandle                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ItemIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<SteamWorkshop_EItemStatisticBP>        statToRetrieve                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUInt64                                     StatValue                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamWorkshopLibrary::STATIC_SteamWorkshop_GetItemQueryStatistic(const struct FSteamUGCQueryHandle& queryHandle, int ItemIndex, TEnumAsByte<SteamWorkshop_EItemStatisticBP> statToRetrieve, struct FUInt64* StatValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemQueryStatistic");

	USteamWorkshopLibrary_SteamWorkshop_GetItemQueryStatistic_Params params {};
	params.queryHandle = queryHandle;
	params.ItemIndex = ItemIndex;
	params.statToRetrieve = statToRetrieve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatValue != nullptr)
		*StatValue = params.StatValue;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AE610
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemInstallInfo
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCItemId                             itemId                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FSteamWorkshopItemInstallInfo               Info                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
//		SteamGeneral_EResultBP                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamGeneral_EResultBP USteamWorkshopLibrary::STATIC_SteamWorkshop_GetItemInstallInfo(const struct FSteamUGCItemId& itemId, struct FSteamWorkshopItemInstallInfo* Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemInstallInfo");

	USteamWorkshopLibrary_SteamWorkshop_GetItemInstallInfo_Params params {};
	params.itemId = itemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AE510
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemDownloadInfo
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSteamUGCItemId                             itemId                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FWorkshopItemDownloadInfo                   downloadInfo                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		SteamGeneral_EResultBP                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamGeneral_EResultBP USteamWorkshopLibrary::STATIC_SteamWorkshop_GetItemDownloadInfo(const struct FSteamUGCItemId& itemId, struct FWorkshopItemDownloadInfo* downloadInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_GetItemDownloadInfo");

	USteamWorkshopLibrary_SteamWorkshop_GetItemDownloadInfo_Params params {};
	params.itemId = itemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (downloadInfo != nullptr)
		*downloadInfo = params.downloadInfo;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AE440
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_DownloadItem
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamUGCItemId                             itemId                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bHighPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		SteamGeneral_EResultBP                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SteamGeneral_EResultBP USteamWorkshopLibrary::STATIC_SteamWorkshop_DownloadItem(const struct FSteamUGCItemId& itemId, bool bHighPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_DownloadItem");

	USteamWorkshopLibrary_SteamWorkshop_DownloadItem_Params params {};
	params.itemId = itemId;
	params.bHighPriority = bHighPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AE120
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_ActivateGameOverlayToWorkshopItem
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FSteamUGCItemId                             itemId                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USteamWorkshopLibrary::STATIC_SteamWorkshop_ActivateGameOverlayToWorkshopItem(const struct FSteamUGCItemId& itemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamWorkshop_ActivateGameOverlayToWorkshopItem");

	USteamWorkshopLibrary_SteamWorkshop_ActivateGameOverlayToWorkshopItem_Params params {};
	params.itemId = itemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005AE070
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamDelegate_OnWorkshopItemDownloaded_Unbind
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             delegateToCall                                             (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamWorkshopLibrary::STATIC_SteamDelegate_OnWorkshopItemDownloaded_Unbind(const struct FScriptDelegate& delegateToCall)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamDelegate_OnWorkshopItemDownloaded_Unbind");

	USteamWorkshopLibrary_SteamDelegate_OnWorkshopItemDownloaded_Unbind_Params params {};
	params.delegateToCall = delegateToCall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005ADFC0
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.SteamDelegate_OnWorkshopItemDownloaded_Bind
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             delegateToCall                                             (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamWorkshopLibrary::STATIC_SteamDelegate_OnWorkshopItemDownloaded_Bind(const struct FScriptDelegate& delegateToCall)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.SteamDelegate_OnWorkshopItemDownloaded_Bind");

	USteamWorkshopLibrary_SteamDelegate_OnWorkshopItemDownloaded_Bind_Params params {};
	params.delegateToCall = delegateToCall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005ADD70
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.PrintWorkshopItemDetails
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FSteamWorkshopItemDetails                   itemDetails                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		float                                              DisplayTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPrintToScreen                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPrintToLog                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamWorkshopLibrary::STATIC_PrintWorkshopItemDetails(const struct FSteamWorkshopItemDetails& itemDetails, float DisplayTime, const struct FLinearColor& Color, bool bPrintToScreen, bool bPrintToLog)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.PrintWorkshopItemDetails");

	USteamWorkshopLibrary_PrintWorkshopItemDetails_Params params {};
	params.itemDetails = itemDetails;
	params.DisplayTime = DisplayTime;
	params.Color = Color;
	params.bPrintToScreen = bPrintToScreen;
	params.bPrintToLog = bPrintToLog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005AD5E0
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.MakeSteamWorkshopUpdateDetails
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     title                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Description                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     updateNotice                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     MetaData                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             tags                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FSteamKeyValuePair>                  keyValueTags                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     contentDirectory                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     previewImage                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             additionalImages                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             youtubeVideoIDs                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             keysOfKeyValueTagsToRemove                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<int>                                        indexOfPreviewToRemove                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		SteamGeneral_ESteamSupportedLanguages              updateLanguage                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		SteamWorkshop_ESteamItemVisibility                 Visibility                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSteamWorkshopUpdateDetails                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSteamWorkshopUpdateDetails USteamWorkshopLibrary::STATIC_MakeSteamWorkshopUpdateDetails(const struct FString& title, const struct FString& Description, const struct FString& updateNotice, const struct FString& MetaData, TArray<struct FString> tags, TArray<struct FSteamKeyValuePair> keyValueTags, const struct FString& contentDirectory, const struct FString& previewImage, TArray<struct FString> additionalImages, TArray<struct FString> youtubeVideoIDs, TArray<struct FString> keysOfKeyValueTagsToRemove, TArray<int> indexOfPreviewToRemove, SteamGeneral_ESteamSupportedLanguages updateLanguage, SteamWorkshop_ESteamItemVisibility Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.MakeSteamWorkshopUpdateDetails");

	USteamWorkshopLibrary_MakeSteamWorkshopUpdateDetails_Params params {};
	params.title = title;
	params.Description = Description;
	params.updateNotice = updateNotice;
	params.MetaData = MetaData;
	params.tags = tags;
	params.keyValueTags = keyValueTags;
	params.contentDirectory = contentDirectory;
	params.previewImage = previewImage;
	params.additionalImages = additionalImages;
	params.youtubeVideoIDs = youtubeVideoIDs;
	params.keysOfKeyValueTagsToRemove = keysOfKeyValueTagsToRemove;
	params.indexOfPreviewToRemove = indexOfPreviewToRemove;
	params.updateLanguage = updateLanguage;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AD4E0
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.MakeSteamUGCQueryParameterTagsAllUserDetails
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FSteamKeyValuePair>                  requiredKeyValueTags                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamUGCQueryParameterTagsAllUserDetails   ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSteamUGCQueryParameterTagsAllUserDetails USteamWorkshopLibrary::STATIC_MakeSteamUGCQueryParameterTagsAllUserDetails(TArray<struct FSteamKeyValuePair> requiredKeyValueTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.MakeSteamUGCQueryParameterTagsAllUserDetails");

	USteamWorkshopLibrary_MakeSteamUGCQueryParameterTagsAllUserDetails_Params params {};
	params.requiredKeyValueTags = requiredKeyValueTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005AD250
//		Name   -> Function SteamWorkshop.SteamWorkshopLibrary.MakeSteamUGCQueryParameterTagsAllUser
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             requiredTags                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             excludedTags                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FSteamKeyValuePair>                  requiredKeyValueTags                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSteamUGCQueryParameterTagsAllUser          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSteamUGCQueryParameterTagsAllUser USteamWorkshopLibrary::STATIC_MakeSteamUGCQueryParameterTagsAllUser(TArray<struct FString> requiredTags, TArray<struct FString> excludedTags, TArray<struct FSteamKeyValuePair> requiredKeyValueTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SteamWorkshop.SteamWorkshopLibrary.MakeSteamUGCQueryParameterTagsAllUser");

	USteamWorkshopLibrary_MakeSteamUGCQueryParameterTagsAllUser_Params params {};
	params.requiredTags = requiredTags;
	params.excludedTags = excludedTags;
	params.requiredKeyValueTags = requiredKeyValueTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USteamWorkshopLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void USteamWorkshopLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
