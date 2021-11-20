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

// Class SteamGeneral.SteamGeneralLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamGeneralLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SteamGeneral.SteamGeneralLibrary");
		return ptr;
	}



	int STATIC_Uint64Array_Remove(TArray<struct FUInt64>* Values, const struct FUInt64& Value);
	int STATIC_Uint64Array_Find(TArray<struct FUInt64> Values, const struct FUInt64& Value);
	bool STATIC_Uint64Array_Contains(TArray<struct FUInt64> Values, const struct FUInt64& Value);
	int STATIC_Uint64Array_AddUnique(TArray<struct FUInt64>* Values, const struct FUInt64& Value);
	int STATIC_Uint32Array_Remove(TArray<struct FUInt32>* Values, const struct FUInt32& Value);
	int STATIC_Uint32Array_Find(TArray<struct FUInt32> Values, const struct FUInt32& Value);
	bool STATIC_Uint32Array_Contains(TArray<struct FUInt32> Values, const struct FUInt32& Value);
	int STATIC_Uint32Array_AddUnique(TArray<struct FUInt32>* Values, const struct FUInt32& Value);
	struct FString STATIC_ToString_UInt64(const struct FUInt64& Value);
	struct FString STATIC_ToString_UInt32(const struct FUInt32& Value);
	struct FString STATIC_ToString_SteamItemId(const struct FSteamUGCItemId& ID);
	struct FString STATIC_ToString_SteamDepotId(const struct FSteamDepotId& ID);
	struct FString STATIC_ToString_SteamAppId(const struct FSteamAppId& ID);
	bool STATIC_SteamUpdateHandle_IsValid(const struct FSteamUGCUpdateHandle& handle);
	int STATIC_SteamUGCItemIdArray_Remove(TArray<struct FSteamUGCItemId>* Values, const struct FSteamUGCItemId& Value);
	int STATIC_SteamUGCItemIdArray_Find(TArray<struct FSteamUGCItemId> Values, const struct FSteamUGCItemId& Value);
	bool STATIC_SteamUGCItemIdArray_Contains(TArray<struct FSteamUGCItemId> Values, const struct FSteamUGCItemId& Value);
	int STATIC_SteamUGCItemIdArray_AddUnique(TArray<struct FSteamUGCItemId>* Values, const struct FSteamUGCItemId& Value);
	bool STATIC_SteamUGCHandle_IsValid(const struct FSteamUGCHandle& handle);
	bool STATIC_SteamQueryHandle_IsValid(const struct FSteamUGCQueryHandle& handle);
	SteamGeneral_EPersonaStateBP STATIC_SteamGeneral_GetUserState();
	struct FString STATIC_SteamGeneral_GetUserName();
	SteamGeneral_EPersonaStateBP STATIC_SteamGeneral_GetFriendState(const struct FUInt64& steamUserId);
	struct FString STATIC_SteamGeneral_GetFriendName(const struct FUInt64& steamUserId);
	bool STATIC_SteamGeneral_ActivateGameOverlayToWebPage(const struct FString& webpage);
	int STATIC_SteamDepotIdArray_Remove(TArray<struct FSteamDepotId>* Values, const struct FSteamDepotId& Value);
	int STATIC_SteamDepotIdArray_Find(TArray<struct FSteamDepotId> Values, const struct FSteamDepotId& Value);
	bool STATIC_SteamDepotIdArray_Contains(TArray<struct FSteamDepotId> Values, const struct FSteamDepotId& Value);
	int STATIC_SteamDepotIdArray_AddUnique(TArray<struct FSteamDepotId>* Values, const struct FSteamDepotId& Value);
	bool STATIC_SteamDelegate_OnGameOverlayActivated_Unbind(const struct FScriptDelegate& delegateToCall);
	bool STATIC_SteamDelegate_OnGameOverlayActivated_Bind(const struct FScriptDelegate& delegateToCall);
	struct FString STATIC_SteamConvertLanguageToLanguageCode(SteamGeneral_ESteamSupportedLanguages Language);
	int STATIC_SteamAppIdArray_Remove(TArray<struct FSteamAppId>* Values, const struct FSteamAppId& Value);
	int STATIC_SteamAppIdArray_Find(TArray<struct FSteamAppId> Values, const struct FSteamAppId& Value);
	bool STATIC_SteamAppIdArray_Contains(TArray<struct FSteamAppId> Values, const struct FSteamAppId& Value);
	int STATIC_SteamAppIdArray_AddUnique(TArray<struct FSteamAppId>* Values, const struct FSteamAppId& Value);
	bool STATIC_NotEqual_UInt64(const struct FUInt64& A, const struct FUInt64& B);
	bool STATIC_NotEqual_UInt32(const struct FUInt32& A, const struct FUInt32& B);
	bool STATIC_NotEqual_SteamItemId(const struct FSteamUGCItemId& A, const struct FSteamUGCItemId& B);
	bool STATIC_NotEqual_SteamDepotId(const struct FSteamDepotId& A, const struct FSteamDepotId& B);
	bool STATIC_NotEqual_SteamAppId(const struct FSteamAppId& A, const struct FSteamAppId& B);
	bool STATIC_IsSteamInitialized();
	struct FSteamAppId STATIC_GetSteamAppId();
	struct FUInt64 STATIC_FromString_UInt64(const struct FString& Value);
	struct FUInt32 STATIC_FromString_UInt32(const struct FString& Value);
	bool STATIC_Equal_UInt64(const struct FUInt64& A, const struct FUInt64& B);
	bool STATIC_Equal_UInt32(const struct FUInt32& A, const struct FUInt32& B);
	bool STATIC_Equal_SteamItemId(const struct FSteamUGCItemId& A, const struct FSteamUGCItemId& B);
	bool STATIC_Equal_SteamDepotId(const struct FSteamDepotId& A, const struct FSteamDepotId& B);
	bool STATIC_Equal_SteamAppId(const struct FSteamAppId& A, const struct FSteamAppId& B);
	bool STATIC_BreakUInt64(const struct FUInt64& InVal, int* OutVal);
	bool STATIC_BreakUInt32(const struct FUInt32& InVal, int* OutVal);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
