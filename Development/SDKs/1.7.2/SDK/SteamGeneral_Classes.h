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
	 * Class SteamGeneral.SteamGeneralLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamGeneralLibrary : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_Uint64Array_Remove(TArray<struct FUInt64>* Values, const struct FUInt64& Value);
		int32_t STATIC_Uint64Array_Find(TArray<struct FUInt64> Values, const struct FUInt64& Value);
		bool STATIC_Uint64Array_Contains(TArray<struct FUInt64> Values, const struct FUInt64& Value);
		int32_t STATIC_Uint64Array_AddUnique(TArray<struct FUInt64>* Values, const struct FUInt64& Value);
		int32_t STATIC_Uint32Array_Remove(TArray<struct FUInt32>* Values, const struct FUInt32& Value);
		int32_t STATIC_Uint32Array_Find(TArray<struct FUInt32> Values, const struct FUInt32& Value);
		bool STATIC_Uint32Array_Contains(TArray<struct FUInt32> Values, const struct FUInt32& Value);
		int32_t STATIC_Uint32Array_AddUnique(TArray<struct FUInt32>* Values, const struct FUInt32& Value);
		class FString STATIC_ToString_UInt64(const struct FUInt64& Value);
		class FString STATIC_ToString_UInt32(const struct FUInt32& Value);
		class FString STATIC_ToString_SteamItemId(const struct FSteamUGCItemId& ID);
		class FString STATIC_ToString_SteamDepotId(const struct FSteamDepotId& ID);
		class FString STATIC_ToString_SteamAppId(const struct FSteamAppId& ID);
		bool STATIC_SteamUpdateHandle_IsValid(const struct FSteamUGCUpdateHandle& handle);
		int32_t STATIC_SteamUGCItemIdArray_Remove(TArray<struct FSteamUGCItemId>* Values, const struct FSteamUGCItemId& Value);
		int32_t STATIC_SteamUGCItemIdArray_Find(TArray<struct FSteamUGCItemId> Values, const struct FSteamUGCItemId& Value);
		bool STATIC_SteamUGCItemIdArray_Contains(TArray<struct FSteamUGCItemId> Values, const struct FSteamUGCItemId& Value);
		int32_t STATIC_SteamUGCItemIdArray_AddUnique(TArray<struct FSteamUGCItemId>* Values, const struct FSteamUGCItemId& Value);
		bool STATIC_SteamUGCHandle_IsValid(const struct FSteamUGCHandle& handle);
		bool STATIC_SteamQueryHandle_IsValid(const struct FSteamUGCQueryHandle& handle);
		SteamGeneral_EPersonaStateBP STATIC_SteamGeneral_GetUserState();
		class FString STATIC_SteamGeneral_GetUserName();
		SteamGeneral_EPersonaStateBP STATIC_SteamGeneral_GetFriendState(const struct FUInt64& steamUserId);
		class FString STATIC_SteamGeneral_GetFriendName(const struct FUInt64& steamUserId);
		bool STATIC_SteamGeneral_ActivateGameOverlayToWebPage(const class FString& webpage);
		int32_t STATIC_SteamDepotIdArray_Remove(TArray<struct FSteamDepotId>* Values, const struct FSteamDepotId& Value);
		int32_t STATIC_SteamDepotIdArray_Find(TArray<struct FSteamDepotId> Values, const struct FSteamDepotId& Value);
		bool STATIC_SteamDepotIdArray_Contains(TArray<struct FSteamDepotId> Values, const struct FSteamDepotId& Value);
		int32_t STATIC_SteamDepotIdArray_AddUnique(TArray<struct FSteamDepotId>* Values, const struct FSteamDepotId& Value);
		bool STATIC_SteamDelegate_OnGameOverlayActivated_Unbind(const class FScriptDelegate& delegateToCall);
		bool STATIC_SteamDelegate_OnGameOverlayActivated_Bind(const class FScriptDelegate& delegateToCall);
		class FString STATIC_SteamConvertLanguageToLanguageCode(SteamGeneral_ESteamSupportedLanguages Language);
		int32_t STATIC_SteamAppIdArray_Remove(TArray<struct FSteamAppId>* Values, const struct FSteamAppId& Value);
		int32_t STATIC_SteamAppIdArray_Find(TArray<struct FSteamAppId> Values, const struct FSteamAppId& Value);
		bool STATIC_SteamAppIdArray_Contains(TArray<struct FSteamAppId> Values, const struct FSteamAppId& Value);
		int32_t STATIC_SteamAppIdArray_AddUnique(TArray<struct FSteamAppId>* Values, const struct FSteamAppId& Value);
		bool STATIC_NotEqual_UInt64(const struct FUInt64& A, const struct FUInt64& B);
		bool STATIC_NotEqual_UInt32(const struct FUInt32& A, const struct FUInt32& B);
		bool STATIC_NotEqual_SteamItemId(const struct FSteamUGCItemId& A, const struct FSteamUGCItemId& B);
		bool STATIC_NotEqual_SteamDepotId(const struct FSteamDepotId& A, const struct FSteamDepotId& B);
		bool STATIC_NotEqual_SteamAppId(const struct FSteamAppId& A, const struct FSteamAppId& B);
		bool STATIC_IsSteamInitialized();
		struct FSteamAppId STATIC_GetSteamAppId();
		struct FUInt64 STATIC_FromString_UInt64(const class FString& Value);
		struct FUInt32 STATIC_FromString_UInt32(const class FString& Value);
		bool STATIC_Equal_UInt64(const struct FUInt64& A, const struct FUInt64& B);
		bool STATIC_Equal_UInt32(const struct FUInt32& A, const struct FUInt32& B);
		bool STATIC_Equal_SteamItemId(const struct FSteamUGCItemId& A, const struct FSteamUGCItemId& B);
		bool STATIC_Equal_SteamDepotId(const struct FSteamDepotId& A, const struct FSteamDepotId& B);
		bool STATIC_Equal_SteamAppId(const struct FSteamAppId& A, const struct FSteamAppId& B);
		bool STATIC_BreakUInt64(const struct FUInt64& InVal, int32_t* OutVal);
		bool STATIC_BreakUInt32(const struct FUInt32& InVal, int32_t* OutVal);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
