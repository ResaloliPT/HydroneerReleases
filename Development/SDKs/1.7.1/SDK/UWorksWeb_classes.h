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

// Class UWorksWeb.UWorksInterfaceWeb
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWeb : public UUWorksInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWeb");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebApps
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebApps : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebApps");
		return ptr;
	}



	void STATIC_UpToDateCheckMinimal(int AppID, int Version, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebUpToDateCheck* STATIC_UpToDateCheck();
	void STATIC_SetAppBuildLiveMinimal(const struct FString& Key, int AppID, int BuildID, const struct FString& BetaKey, const struct FString& Description, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebSetAppBuildLive* STATIC_SetAppBuildLive();
	void STATIC_GetServersAtAddressMinimal(const struct FString& Addr, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetServersAtAddress* STATIC_GetServersAtAddress();
	void STATIC_GetServerListMinimal(const struct FString& Key, const struct FString& Filter, int Limit, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetServerList* STATIC_GetServerList();
	void STATIC_GetPlayersBannedMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetPlayersBanned* STATIC_GetPlayersBanned();
	void STATIC_GetCheatingReportsListMinimal(const struct FString& Key, int AppID, int TimeBegin, int TimeEnd, bool bIncludeReports, bool bIncludeBans, const struct FString& ReportIDMin, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetCheatingReportsList* STATIC_GetCheatingReportsList();
	void STATIC_GetAppListMinimal(const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetAppList* STATIC_GetAppList();
	void STATIC_GetAppDepotVersionsMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetAppDepotVersions* STATIC_GetAppDepotVersions();
	void STATIC_GetAppBuildsMinimal(const struct FString& Key, int AppID, int Count, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetAppBuilds* STATIC_GetAppBuilds();
	void STATIC_GetAppBetasMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetAppBetas* STATIC_GetAppBetas();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebBroadcast
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebBroadcast : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebBroadcast");
		return ptr;
	}



	void STATIC_PostGameDataFrameMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& BroadcastID, const struct FString& FrameData, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebPostGameDataFrame* STATIC_PostGameDataFrame();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebCheatReporting
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebCheatReporting : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebCheatReporting");
		return ptr;
	}



	void STATIC_StartSecureMultiplayerSessionMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebStartSecureMultiplayerSession* STATIC_StartSecureMultiplayerSession();
	void STATIC_RequestVacStatusForUserMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebRequestVacStatusForUser* STATIC_RequestVacStatusForUser();
	void STATIC_RequestPlayerGameBanMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& ReportID, const struct FString& CheatDescription, int Duration, bool bDelayBan, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebRequestPlayerGameBan* STATIC_RequestPlayerGameBan();
	void STATIC_ReportPlayerCheatingMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& SteamIDReporter, int AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int GameMode, int SuspicionStartTime, int Severity, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebReportPlayerCheating* STATIC_ReportPlayerCheating();
	void STATIC_ReportCheatDataMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& PathAndFileName, const struct FString& WebCheatURL, const struct FString& TimeNow, const struct FString& TimeStarted, const struct FString& TimeStopped, const struct FString& CheatName, int GameProcessID, int CheatProcessID, const struct FString& CheatParamA, const struct FString& CheatParamB, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebReportCheatData* STATIC_ReportCheatData();
	void STATIC_RemovePlayerGameBanMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebRemovePlayerGameBan* STATIC_RemovePlayerGameBan();
	void STATIC_GetCheatingReportsMinimal(const struct FString& Key, int AppID, int TimeEnd, int TimeBegin, const struct FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetCheatingReports* STATIC_GetCheatingReports();
	void STATIC_EndSecureMultiplayerSessionMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebEndSecureMultiplayerSession* STATIC_EndSecureMultiplayerSession();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebCommunity
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebCommunity : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebCommunity");
		return ptr;
	}



	void STATIC_ReportAbuseMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamIDActor, const struct FUWorksSteamID& SteamIDTarget, int AppID, unsigned char AbuseType, unsigned char ContentType, const struct FString& Description, const struct FString& GID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebReportAbuse* STATIC_ReportAbuse();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebEcon
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebEcon : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebEcon");
		return ptr;
	}



	void STATIC_GetTradeOffersSummaryMinimal(const struct FString& Key, int TimeLastVisit, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetTradeOffersSummary* STATIC_GetTradeOffersSummary();
	void STATIC_GetTradeOffersMinimal(const struct FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const struct FString& Language, bool bActiveOnly, bool bHistoricalOnly, int TimeHistoricalCutoff, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetTradeOffers* STATIC_GetTradeOffers();
	void STATIC_GetTradeOfferMinimal(const struct FString& Key, const struct FString& TradeOfferID, const struct FString& Language, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetTradeOffer* STATIC_GetTradeOffer();
	void STATIC_GetTradeHistoryMinimal(const struct FString& Key, int MaxTrades, int StartAfterTime, const struct FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const struct FString& Language, bool bIncludeFailed, bool bIncludeTotal, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetTradeHistory* STATIC_GetTradeHistory();
	void STATIC_FlushInventoryCacheMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebFlushInventoryCache* STATIC_FlushInventoryCache();
	void STATIC_FlushContextCacheMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebFlushContextCache* STATIC_FlushContextCache();
	void STATIC_FlushAssetAppearanceCacheMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebFlushAssetAppearanceCache* STATIC_FlushAssetAppearanceCache();
	void STATIC_DeclineTradeOfferMinimal(const struct FString& Key, const struct FString& TradeOfferID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebDeclineTradeOffer* STATIC_DeclineTradeOffer();
	void STATIC_CancelTradeOfferMinimal(const struct FString& Key, const struct FString& TradeOfferID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebCancelTradeOffer* STATIC_CancelTradeOffer();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebEconMarket
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebEconMarket : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebEconMarket");
		return ptr;
	}



	void STATIC_GetPopularMinimal(const struct FString& Key, const struct FString& Language, int Rows, int Start, int FilterAppID, int ECurrency, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetPopular* STATIC_GetPopular();
	void STATIC_GetMarketEligibilityMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetMarketEligibility* STATIC_GetMarketEligibility();
	void STATIC_GetAssetIDMinimal(const struct FString& Key, int AppID, const struct FString& ListingID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetAssetID* STATIC_GetAssetID();
	void STATIC_CancelAppListingsForUserMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bSynchronous, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebCancelAppListingsForUser* STATIC_CancelAppListingsForUser();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebEconomy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebEconomy : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebEconomy");
		return ptr;
	}



	void STATIC_StartTradeMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& PartyA, const struct FUWorksSteamID& PartyB, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebStartTrade* STATIC_StartTrade();
	void STATIC_StartAssetTransactionMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& AssetID0, int AssetQuantity0, const struct FString& Currency, const struct FString& Language, const struct FString& IPAddress, const struct FString& Referrer, bool bClientAuth, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebStartAssetTransaction* STATIC_StartAssetTransaction();
	void STATIC_GetMarketPricesMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetMarketPrices* STATIC_GetMarketPrices();
	void STATIC_GetExportedAssetsForUserMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetExportedAssetsForUser* STATIC_GetExportedAssetsForUser();
	void STATIC_GetAssetPricesMinimal(const struct FString& Key, int AppID, const struct FString& Currency, const struct FString& Language, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetAssetPrices* STATIC_GetAssetPrices();
	void STATIC_GetAssetClassInfoMinimal(const struct FString& Key, int AppID, int ClassCount, const struct FString& ClassID0, const struct FString& Language, const struct FString& InstanceID0, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetAssetClassInfo* STATIC_GetAssetClassInfo();
	void STATIC_FinalizeAssetTransactionMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& TxnID, const struct FString& Language, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebFinalizeAssetTransaction* STATIC_FinalizeAssetTransaction();
	void STATIC_CanTradeMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamID& TargetID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebCanTrade* STATIC_CanTrade();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebGameInventory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebGameInventory : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebGameInventory");
		return ptr;
	}



	void STATIC_SupportGetAssetHistoryMinimal(const struct FString& Key, int AppID, const struct FString& AssetID, const struct FString& ContextID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebSupportGetAssetHistory* STATIC_SupportGetAssetHistory();
	void STATIC_HistoryExecuteCommandsMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, const struct FString& ActorId, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebHistoryExecuteCommands* STATIC_HistoryExecuteCommands();
	void STATIC_GetUserHistoryMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, int StartTime, int EndTime, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetUserHistory* STATIC_GetUserHistory();
	void STATIC_GetHistoryCommandDetailsMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& Command, const struct FString& ContextID, const struct FString& Arguments, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetHistoryCommandDetails* STATIC_GetHistoryCommandDetails();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebGameNotifications
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebGameNotifications : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebGameNotifications");
		return ptr;
	}



	void STATIC_UpdateSessionMinimal(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebUpdateSession* STATIC_UpdateSession();
	void STATIC_RequestNotificationsMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebRequestNotifications* STATIC_RequestNotifications();
	void STATIC_GetSessionDetailsForAppMinimal(const struct FString& Key, const struct FUWorksSessions& Sessions, int AppID, const struct FString& Language, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetSessionDetailsForApp* STATIC_GetSessionDetailsForApp();
	void STATIC_EnumerateSessionsForAppMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const struct FString& Language, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebEnumerateSessionsForApp* STATIC_EnumerateSessionsForApp();
	void STATIC_DeleteSessionMinimal(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	void STATIC_DeleteSessionBatchMinimal(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebDeleteSessionBatch* STATIC_DeleteSessionBatch();
	class UUWorksRequestWebDeleteSession* STATIC_DeleteSession();
	void STATIC_CreateSessionMinimal(const struct FString& Key, int AppID, const struct FString& Context, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebCreateSession* STATIC_CreateSession();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebGameServers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebGameServers : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebGameServers");
		return ptr;
	}



	void STATIC_SetMemoMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Memo, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebSetMemo* STATIC_SetMemo();
	void STATIC_SetBanStatusMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bBanned, int BanSeconds, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebSetBanStatus* STATIC_SetBanStatus();
	void STATIC_ResetLoginTokenMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebResetLoginToken* STATIC_ResetLoginToken();
	void STATIC_QueryLoginTokenMinimal(const struct FString& Key, const struct FString& LoginToken, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebQueryLoginToken* STATIC_QueryLoginToken();
	void STATIC_GetServerSteamIDsByIPMinimal(const struct FString& Key, const struct FString& ServerIPs, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetServerSteamIDsByIP* STATIC_GetServerSteamIDsByIP();
	void STATIC_GetServerIPsBySteamIDMinimal(const struct FString& Key, const struct FUWorksSteamID& ServerSteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetServerIPsBySteamID* STATIC_GetServerIPsBySteamID();
	void STATIC_GetAccountPublicInfoMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetAccountPublicInfo* STATIC_GetAccountPublicInfo();
	void STATIC_GetAccountListMinimal(const struct FString& Key, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetAccountList* STATIC_GetAccountList();
	void STATIC_DeleteAccountMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebDeleteAccount* STATIC_DeleteAccount();
	void STATIC_CreateAccountMinimal(const struct FString& Key, int AppID, const struct FString& Memo, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebCreateAccount* STATIC_CreateAccount();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebGameServerStats
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebGameServerStats : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebGameServerStats");
		return ptr;
	}



	void STATIC_GetGameServerPlayerStatsForGameMinimal(const struct FString& Key, const struct FUWorksGameID& GameID, int AppID, const struct FString& RangeStart, const struct FString& RangeEnd, int MaxResults, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetGameServerPlayerStatsForGame* STATIC_GetGameServerPlayerStatsForGame();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebInventory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebInventory : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebInventory");
		return ptr;
	}



	void STATIC_GetQuantityMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamItemDef& ItemDefID, bool bForce, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetQuantity* STATIC_GetQuantity();
	void STATIC_GetPriceSheetMinimal(const struct FString& Key, int ECurrency, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetPriceSheet* STATIC_GetPriceSheet();
	void STATIC_GetItemDefsMinimal(const struct FString& Key, int AppID, const struct FString& ModifiedSince, TArray<struct FUWorksSteamItemDef> ItemDefIDs, TArray<struct FUWorksSteamItemDef> WorkshopIDs, int CacheMaxAgeSeconds, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetItemDefs* STATIC_GetItemDefs();
	void STATIC_GetInventoryMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetInventory* STATIC_GetInventory();
	void STATIC_ExchangeItemMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int> MaterialsQuantity, const struct FUWorksSteamItemDef& OutputItemDefID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebExchangeItem* STATIC_ExchangeItem();
	void STATIC_ConsumeItemMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamItemInstanceID& itemId, int Quantity, const struct FUWorksSteamID& SteamID, const struct FString& RequestID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebConsumeItem* STATIC_ConsumeItem();
	void STATIC_ConsolidateMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef> ItemDefID, bool bForce, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebConsolidate* STATIC_Consolidate();
	void STATIC_AddPromoItemMinimal(const struct FString& Key, int AppID, const struct FUWorksSteamItemDef& ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebAddPromoItem* STATIC_AddPromoItem();
	void STATIC_AddItemMinimal(const struct FString& Key, int AppID, TArray<struct FUWorksSteamItemDef> ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebAddItem* STATIC_AddItem();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebLeaderboards
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebLeaderboards : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebLeaderboards");
		return ptr;
	}



	void STATIC_SetLeaderboardScoreMinimal(const struct FString& Key, int AppID, int LeaderboardID, const struct FUWorksSteamID& SteamID, int score, const struct FString& ScoreMethod, TArray<unsigned char> Details, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebSetLeaderboardScore* STATIC_SetLeaderboardScore();
	void STATIC_ResetLeaderboardMinimal(const struct FString& Key, int AppID, int LeaderboardID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebResetLeaderboard* STATIC_ResetLeaderboard();
	void STATIC_GetLeaderboardsForGameMinimal(const struct FString& Key, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetLeaderboardsForGame* STATIC_GetLeaderboardsForGame();
	void STATIC_GetLeaderboardEntriesMinimal(const struct FString& Key, int AppID, int RangeStart, int RangeEnd, int LeaderboardID, int DataRequest, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetLeaderboardEntries* STATIC_GetLeaderboardEntries();
	void STATIC_FindOrCreateLeaderboardMinimal(const struct FString& Key, int AppID, const struct FString& Name, const struct FString& SortMethod, const struct FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebFindOrCreateLeaderboard* STATIC_FindOrCreateLeaderboard();
	void STATIC_DeleteLeaderboardMinimal(const struct FString& Key, int AppID, const struct FString& Name, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebDeleteLeaderboard* STATIC_DeleteLeaderboard();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebMicroTxn
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebMicroTxn : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebMicroTxn");
		return ptr;
	}



	void STATIC_RefundTxnMinimal(const struct FString& Key, const struct FString& OrderID, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebRefundTxn* STATIC_RefundTxn();
	void STATIC_QueryTxnMinimal(const struct FString& Key, int AppID, const struct FString& OrderID, const struct FString& TransID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebQueryTxn* STATIC_QueryTxn();
	void STATIC_ProcessAgreementMinimal(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, int Amount, const struct FString& Currency, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebProcessAgreement* STATIC_ProcessAgreement();
	void STATIC_InitTxnMinimal(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, int AppID, int ItemCount, const struct FString& Language, const struct FString& Currency, TArray<struct FUWorksSteamItemDef> itemIds, TArray<int> Quantities, TArray<int> Amounts, TArray<struct FString> Descriptions, TArray<struct FString> Categories, TArray<int> AssociatedBundles, TArray<struct FString> BillingTypes, TArray<struct FString> StartDates, TArray<struct FString> EndDates, TArray<struct FString> Periods, TArray<int> Frequencies, TArray<struct FString> RecurringAmounts, int BundleCount, TArray<int> BundleIDs, TArray<int> BundleQuantities, TArray<struct FString> BundleDescriptions, TArray<struct FString> BundleCategories, UWorksWeb_EUWorksUserSession UserSession, const struct FString& IPAddress, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebInitTxn* STATIC_InitTxn();
	void STATIC_GetUserInfoMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& IPAddress, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetUserInfo* STATIC_GetUserInfo();
	void STATIC_GetUserAgreementInfoMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetUserAgreementInfo* STATIC_GetUserAgreementInfo();
	void STATIC_GetReportMinimal(const struct FString& Key, int AppID, const struct FString& Time, UWorksWeb_EUWorksReportType Type, int MaxResults, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetReport* STATIC_GetReport();
	void STATIC_FinalizeTxnMinimal(const struct FString& Key, const struct FString& OrderID, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebFinalizeTxn* STATIC_FinalizeTxn();
	void STATIC_CancelAgreementMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebCancelAgreement* STATIC_CancelAgreement();
	void STATIC_AdjustAgreementMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, const struct FString& NextProcessDate, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebAdjustAgreement* STATIC_AdjustAgreement();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebNews
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebNews : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebNews");
		return ptr;
	}



	void STATIC_GetNewsForAppMinimal(int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds, const struct FScriptDelegate& Delegate);
	void STATIC_GetNewsForAppAuthedMinimal(const struct FString& Key, int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetNewsForAppAuthed* STATIC_GetNewsForAppAuthed();
	class UUWorksRequestWebGetNewsForApp* STATIC_GetNewsForApp();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebPlayer
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebPlayer : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebPlayer");
		return ptr;
	}



	void STATIC_RecordOfflinePlaytimeMinimal(const struct FUWorksSteamID& SteamID, const struct FString& Ticket, const struct FUWorksPlaySessions& PlaySessions, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebRecordOfflinePlaytime* STATIC_RecordOfflinePlaytime();
	void STATIC_IsPlayingSharedGameMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppIDPlaying, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebIsPlayingSharedGame* STATIC_IsPlayingSharedGame();
	void STATIC_GetSteamLevelMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetSteamLevel* STATIC_GetSteamLevel();
	void STATIC_GetRecentlyPlayedGamesMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int Count, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetRecentlyPlayedGames* STATIC_GetRecentlyPlayedGames();
	void STATIC_GetOwnedGamesMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int> AppIDsFilter, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetOwnedGames* STATIC_GetOwnedGames();
	void STATIC_GetCommunityBadgeProgressMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int BadgeID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetCommunityBadgeProgress* STATIC_GetCommunityBadgeProgress();
	void STATIC_GetBadgesMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetBadges* STATIC_GetBadges();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebPublishedFile
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebPublishedFile : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebPublishedFile");
		return ptr;
	}



	void STATIC_UpdateTagsMinimal(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, TArray<struct FString> AddTags, TArray<struct FString> RemoveTags, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebUpdateTags* STATIC_UpdateTags();
	void STATIC_SetDeveloperMetadataMinimal(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, const struct FString& MetaData, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebSetDeveloperMetadata* STATIC_SetDeveloperMetadata();
	void STATIC_QueryFilesMinimal(const struct FString& Key, unsigned char queryType, int Page, int CreatorAppID, int AppID, TArray<struct FString> requiredTags, TArray<struct FString> excludedTags, TArray<struct FString> RequiredFlags, TArray<struct FString> OmittedFlags, const struct FString& searchText, unsigned char fileType, const struct FUWorksPublishedFileID& ChildPublishedFileID, int Days, bool bIncludeRecentVotesOnly, const struct FUWorksRequiredKVTags& RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int ReturnPlaytimeStats, int NumPerPage, bool bMatchAllTags, int CacheMaxAgeSeconds, int Language, bool bReturnMetaData, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebQueryFiles* STATIC_QueryFiles();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebPublishedItemSearch
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebPublishedItemSearch : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebPublishedItemSearch");
		return ptr;
	}



	void STATIC_ResultSetSummaryMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, TArray<struct FString> tags, TArray<struct FString> UserTags, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebResultSetSummary* STATIC_ResultSetSummary();
	void STATIC_RankedByVoteMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, TArray<struct FString> tags, TArray<struct FString> UserTags, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebRankedByVote* STATIC_RankedByVote();
	void STATIC_RankedByTrendMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, int Days, TArray<struct FString> tags, TArray<struct FString> UserTags, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebRankedByTrend* STATIC_RankedByTrend();
	void STATIC_RankedByPublicationOrderMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, TArray<struct FString> tags, TArray<struct FString> UserTags, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebRankedByPublicationOrder* STATIC_RankedByPublicationOrder();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebPublishedItemVoting
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebPublishedItemVoting : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebPublishedItemVoting");
		return ptr;
	}



	void STATIC_UserVoteSummaryMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebUserVoteSummary* STATIC_UserVoteSummary();
	void STATIC_ItemVoteSummaryMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebItemVoteSummary* STATIC_ItemVoteSummary();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebRemoteStorage
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebRemoteStorage : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebRemoteStorage");
		return ptr;
	}



	void STATIC_UnsubscribePublishedFileMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebUnsubscribePublishedFile* STATIC_UnsubscribePublishedFile();
	void STATIC_SubscribePublishedFileMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebSubscribePublishedFile* STATIC_SubscribePublishedFile();
	void STATIC_SetUGCUsedByGCMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID, bool bUsed, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebSetUGCUsedByGC* STATIC_SetUGCUsedByGC();
	void STATIC_GetUGCFileDetailsMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetUGCFileDetails* STATIC_GetUGCFileDetails();
	void STATIC_GetPublishedFileDetailsMinimal(int ItemCount, TArray<int> PublishedFileIDs, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetPublishedFileDetails* STATIC_GetPublishedFileDetails();
	void STATIC_GetCollectionDetailsMinimal(int CollectionCount, TArray<int> PublishedFileIDs, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetCollectionDetails* STATIC_GetCollectionDetails();
	void STATIC_EnumerateUserSubscribedFilesMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int ListType, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebEnumerateUserSubscribedFiles* STATIC_EnumerateUserSubscribedFiles();
	void STATIC_EnumerateUserPublishedFilesMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebEnumerateUserPublishedFiles* STATIC_EnumerateUserPublishedFiles();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebUser
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebUser : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebUser");
		return ptr;
	}



	void STATIC_ResolveVanityURLMinimal(const struct FString& Key, const struct FString& VanityURL, unsigned char URLType, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebResolveVanityURL* STATIC_ResolveVanityURL();
	void STATIC_GrantPackageMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int PackageID, const struct FString& IPAddress, const struct FString& ThirdPartyKey, int ThirdPartyAppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGrantPackage* STATIC_GrantPackage();
	void STATIC_GetUserGroupListMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetUserGroupList* STATIC_GetUserGroupList();
	void STATIC_GetPublisherAppOwnershipMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FScriptDelegate& Delegate);
	void STATIC_GetPublisherAppOwnershipChangesMinimal(const struct FString& Key, const struct FString& PackageRowVersion, const struct FString& CDKeyRowVersion, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetPublisherAppOwnershipChanges* STATIC_GetPublisherAppOwnershipChanges();
	class UUWorksRequestWebGetPublisherAppOwnership* STATIC_GetPublisherAppOwnership();
	void STATIC_GetPlayerSummariesMinimal(const struct FString& Key, const struct FString& SteamIDs, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetPlayerSummaries* STATIC_GetPlayerSummaries();
	void STATIC_GetPlayerBansMinimal(const struct FString& Key, const struct FString& SteamIDs, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetPlayerBans* STATIC_GetPlayerBans();
	void STATIC_GetFriendListMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Relationship, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetFriendList* STATIC_GetFriendList();
	void STATIC_GetAppPriceInfoMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AppIDs, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetAppPriceInfo* STATIC_GetAppPriceInfo();
	void STATIC_CheckAppOwnershipMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebCheckAppOwnership* STATIC_CheckAppOwnership();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebUserAuth
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebUserAuth : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebUserAuth");
		return ptr;
	}



	void STATIC_AuthenticateUserTicketMinimal(const struct FString& Key, int AppID, const struct FString& Ticket, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebAuthenticateUserTicket* STATIC_AuthenticateUserTicket();
	void STATIC_AuthenticateUserMinimal(const struct FUWorksSteamID& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebAuthenticateUser* STATIC_AuthenticateUser();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebUserStats
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebUserStats : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebUserStats");
		return ptr;
	}



	void STATIC_SetUserStatsForGameMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<struct FString> Name, TArray<int> Value, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebSetUserStatsForGame* STATIC_SetUserStatsForGame();
	void STATIC_GetUserStatsForGameMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetUserStatsForGame* STATIC_GetUserStatsForGame();
	void STATIC_GetSchemaForGameMinimal(const struct FString& Key, int AppID, const struct FString& Language, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetSchemaForGame* STATIC_GetSchemaForGame();
	void STATIC_GetPlayerAchievementsMinimal(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& Language, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetPlayerAchievements* STATIC_GetPlayerAchievements();
	void STATIC_GetNumberOfCurrentPlayersMinimal(int AppID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetNumberOfCurrentPlayers* STATIC_GetNumberOfCurrentPlayers();
	void STATIC_GetGlobalStatsForGameMinimal(int AppID, int Count, TArray<struct FString> Name, int StartDate, int EndDate, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetGlobalStatsForGame* STATIC_GetGlobalStatsForGame();
	void STATIC_GetGlobalAchievementPercentagesForAppMinimal(const struct FUWorksGameID& GameID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetGlobalAchievementPercentagesForApp* STATIC_GetGlobalAchievementPercentagesForApp();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksInterfaceWebWorkshop
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUWorksInterfaceWebWorkshop : public UUWorksInterfaceWeb
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksInterfaceWebWorkshop");
		return ptr;
	}



	void STATIC_SetItemPaymentRulesMinimal(const struct FString& Key, int AppID, int GameItemID, const struct FUWorksAssociatedWorkshopFiles& AssociatedWorkshopFiles, const struct FUWorksPartnerAccounts& PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebSetItemPaymentRules* STATIC_SetItemPaymentRules();
	void STATIC_PopulateItemDescriptionsMinimal(const struct FString& Key, int AppID, const struct FUWorksLanguages& Languages, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebPopulateItemDescriptions* STATIC_PopulateItemDescriptions();
	void STATIC_GetItemDailyRevenueMinimal(const struct FString& Key, int AppID, const struct FString& itemId, int DateStart, int DateEnd, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetItemDailyRevenue* STATIC_GetItemDailyRevenue();
	void STATIC_GetFinalizedContributorsMinimal(const struct FString& Key, int AppID, int GameItemID, const struct FScriptDelegate& Delegate);
	class UUWorksRequestWebGetFinalizedContributors* STATIC_GetFinalizedContributors();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWeb
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UUWorksRequestWeb : public UUWorksRequest
{
public:
	unsigned char                                      UnknownData_KNLU[0x78];                                    // 0x0028(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWeb");
		return ptr;
	}



	bool IsActive();
	struct FString GetStatus();
	void Deactivate();
	void Activate();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetAppBetas
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetAppBetas : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetAppBetas");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetAppBuilds
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetAppBuilds : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetAppBuilds");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, int Count);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetAppDepotVersions
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetAppDepotVersions : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetAppDepotVersions");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetAppList
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetAppList : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetAppList");
		return ptr;
	}



	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetCheatingReportsList
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetCheatingReportsList : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetCheatingReportsList");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, int TimeBegin, int TimeEnd, bool bIncludeReports, bool bIncludeBans, const struct FString& ReportIDMin);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetPlayersBanned
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetPlayersBanned : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetPlayersBanned");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetServerList
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetServerList : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetServerList");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& Filter, int Limit);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetServersAtAddress
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetServersAtAddress : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetServersAtAddress");
		return ptr;
	}



	void SetInput(const struct FString& Addr);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebSetAppBuildLive
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebSetAppBuildLive : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebSetAppBuildLive");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, int BuildID, const struct FString& BetaKey, const struct FString& Description);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebUpToDateCheck
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebUpToDateCheck : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebUpToDateCheck");
		return ptr;
	}



	void SetInput(int AppID, int VersionToCheck);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebPostGameDataFrame
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebPostGameDataFrame : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebPostGameDataFrame");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& BroadcastID, const struct FString& FrameData);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebReportPlayerCheating
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebReportPlayerCheating : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebReportPlayerCheating");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& SteamIDReporter, int AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int GameMode, int SuspicionStartTime, int Severity);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebRequestPlayerGameBan
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebRequestPlayerGameBan : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebRequestPlayerGameBan");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& ReportID, const struct FString& CheatDescription, int Duration, bool bDelayBan);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebRemovePlayerGameBan
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebRemovePlayerGameBan : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebRemovePlayerGameBan");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetCheatingReports
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetCheatingReports : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetCheatingReports");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, int TimeEnd, int TimeBegin, const struct FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebRequestVacStatusForUser
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebRequestVacStatusForUser : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebRequestVacStatusForUser");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebStartSecureMultiplayerSession : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebEndSecureMultiplayerSession : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebReportCheatData
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebReportCheatData : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebReportCheatData");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& PathAndFileName, const struct FString& WebCheatURL, const struct FString& TimeNow, const struct FString& TimeStarted, const struct FString& TimeStopped, const struct FString& CheatName, int GameProcessID, int CheatProcessID, const struct FString& CheatParamA, const struct FString& CheatParamB);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebReportAbuse
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebReportAbuse : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebReportAbuse");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamIDActor, const struct FUWorksSteamID& SteamIDTarget, int AppID, unsigned char AbuseType, unsigned char ContentType, const struct FString& Description, const struct FString& GID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetTradeHistory
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetTradeHistory : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetTradeHistory");
		return ptr;
	}



	void SetInput(const struct FString& Key, int MaxTrades, int StartAfterTime, const struct FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const struct FString& Language, bool bIncludeFailed, bool bIncludeTotal);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebFlushInventoryCache
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebFlushInventoryCache : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebFlushInventoryCache");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebFlushAssetAppearanceCache : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebFlushContextCache
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebFlushContextCache : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebFlushContextCache");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetTradeOffers
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetTradeOffers : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetTradeOffers");
		return ptr;
	}



	void SetInput(const struct FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const struct FString& Language, bool bActiveOnly, bool bHistoricalOnly, int TimeHistoricalCutoff);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetTradeOffer
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetTradeOffer : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetTradeOffer");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& TradeOfferID, const struct FString& Language);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetTradeOffersSummary
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetTradeOffersSummary : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetTradeOffersSummary");
		return ptr;
	}



	void SetInput(const struct FString& Key, int TimeLastVisit);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebDeclineTradeOffer
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebDeclineTradeOffer : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebDeclineTradeOffer");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& TradeOfferID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebCancelTradeOffer
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebCancelTradeOffer : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebCancelTradeOffer");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& TradeOfferID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetMarketEligibility
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetMarketEligibility : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetMarketEligibility");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebCancelAppListingsForUser
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebCancelAppListingsForUser : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebCancelAppListingsForUser");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bSynchronous);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetAssetID
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetAssetID : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetAssetID");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& ListingID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetPopular
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetPopular : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetPopular");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& Language, int Rows, int Start, int FilterAppID, int ECurrency);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebCanTrade
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebCanTrade : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebCanTrade");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamID& TargetID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebFinalizeAssetTransaction
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebFinalizeAssetTransaction : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebFinalizeAssetTransaction");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& TxnID, const struct FString& Language);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetAssetClassInfo
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetAssetClassInfo : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetAssetClassInfo");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, int ClassCount, const struct FString& ClassID, const struct FString& Language, const struct FString& InstanceID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetAssetPrices
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetAssetPrices : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetAssetPrices");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& Currency, const struct FString& Language);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetExportedAssetsForUser
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetExportedAssetsForUser : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetExportedAssetsForUser");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetMarketPrices
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetMarketPrices : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetMarketPrices");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebStartAssetTransaction
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebStartAssetTransaction : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebStartAssetTransaction");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& AssetID, int AssetQuantity, const struct FString& Currency, const struct FString& Language, const struct FString& IPAddress, const struct FString& Referrer, bool bClientAuth);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebStartTrade
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebStartTrade : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebStartTrade");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& PartyA, const struct FUWorksSteamID& PartyB);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetHistoryCommandDetails
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetHistoryCommandDetails : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetHistoryCommandDetails");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& Command, const struct FString& ContextID, const struct FString& Arguments);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetUserHistory
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetUserHistory : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetUserHistory");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, int StartTime, int EndTime);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebHistoryExecuteCommands
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebHistoryExecuteCommands : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebHistoryExecuteCommands");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, const struct FString& ActorId);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebSupportGetAssetHistory
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebSupportGetAssetHistory : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebSupportGetAssetHistory");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& AssetID, const struct FString& ContextID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebCreateSession
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebCreateSession : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebCreateSession");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& Context, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebUpdateSession
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebUpdateSession : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebUpdateSession");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebEnumerateSessionsForApp
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebEnumerateSessionsForApp : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebEnumerateSessionsForApp");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const struct FString& Language);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetSessionDetailsForApp
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetSessionDetailsForApp : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetSessionDetailsForApp");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSessions& Sessions, int AppID, const struct FString& Language);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebRequestNotifications
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebRequestNotifications : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebRequestNotifications");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebDeleteSession
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebDeleteSession : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebDeleteSession");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebDeleteSessionBatch
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebDeleteSessionBatch : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebDeleteSessionBatch");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& SessionId, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetAccountList
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetAccountList : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetAccountList");
		return ptr;
	}



	void SetInput(const struct FString& Key);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebCreateAccount
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebCreateAccount : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebCreateAccount");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& Memo);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebSetMemo
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebSetMemo : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebSetMemo");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Memo);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebResetLoginToken
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebResetLoginToken : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebResetLoginToken");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebDeleteAccount
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebDeleteAccount : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebDeleteAccount");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetAccountPublicInfo
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetAccountPublicInfo : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetAccountPublicInfo");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebQueryLoginToken
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebQueryLoginToken : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebQueryLoginToken");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& LoginToken);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebSetBanStatus
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebSetBanStatus : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebSetBanStatus");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bBanned, int BanSeconds);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetServerSteamIDsByIP : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& ServerIPs);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetServerIPsBySteamID
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetServerIPsBySteamID : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetServerIPsBySteamID");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& ServerSteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetGameServerPlayerStatsForGame : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksGameID& GameID, int AppID, const struct FString& RangeStart, const struct FString& RangeEnd, int MaxResults);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebAddItem
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebAddItem : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebAddItem");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, TArray<struct FUWorksSteamItemDef> ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebAddPromoItem
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebAddPromoItem : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebAddPromoItem");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamItemDef& ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebConsumeItem
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebConsumeItem : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebConsumeItem");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamItemInstanceID& itemId, int Quantity, const struct FUWorksSteamID& SteamID, const struct FString& RequestID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebExchangeItem
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebExchangeItem : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebExchangeItem");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int> MaterialsQuantity, const struct FUWorksSteamItemDef& OutputItemDefID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetInventory
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetInventory : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetInventory");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetItemDefs
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetItemDefs : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetItemDefs");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& ModifiedSince, TArray<struct FUWorksSteamItemDef> ItemDefIDs, TArray<struct FUWorksSteamItemDef> WorkshopIDs, int CacheMaxAgeSeconds);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetPriceSheet
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetPriceSheet : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetPriceSheet");
		return ptr;
	}



	void SetInput(const struct FString& Key, int ECurrency);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebConsolidate
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebConsolidate : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebConsolidate");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef> ItemDefID, bool bForce);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetQuantity
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetQuantity : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetQuantity");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamItemDef& ItemDefID, bool bForce);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebDeleteLeaderboard
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebDeleteLeaderboard : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebDeleteLeaderboard");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& Name);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebFindOrCreateLeaderboard : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& Name, const struct FString& SortMethod, const struct FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetLeaderboardEntries
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetLeaderboardEntries : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetLeaderboardEntries");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, int RangeStart, int RangeEnd, int LeaderboardID, int DataRequest, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetLeaderboardsForGame
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetLeaderboardsForGame : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetLeaderboardsForGame");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebResetLeaderboard
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebResetLeaderboard : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebResetLeaderboard");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, int LeaderboardID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebSetLeaderboardScore
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebSetLeaderboardScore : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebSetLeaderboardScore");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, int LeaderboardID, const struct FUWorksSteamID& SteamID, int score, const struct FString& ScoreMethod, TArray<unsigned char> Details);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebAdjustAgreement
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebAdjustAgreement : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebAdjustAgreement");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, const struct FString& NextProcessDate);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebCancelAgreement
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebCancelAgreement : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebCancelAgreement");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebFinalizeTxn
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebFinalizeTxn : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebFinalizeTxn");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& OrderID, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetReport
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetReport : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetReport");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& Time, UWorksWeb_EUWorksReportType Type, int MaxResults);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetUserAgreementInfo
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetUserAgreementInfo : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetUserAgreementInfo");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetUserInfo
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetUserInfo : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetUserInfo");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& IPAddress);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebInitTxn
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebInitTxn : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebInitTxn");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, int AppID, int ItemCount, const struct FString& Language, const struct FString& Currency, TArray<struct FUWorksSteamItemDef> itemIds, TArray<int> Quantities, TArray<int> Amounts, TArray<struct FString> Descriptions, TArray<struct FString> Categories, TArray<int> AssociatedBundles, TArray<struct FString> BillingTypes, TArray<struct FString> StartDates, TArray<struct FString> EndDates, TArray<struct FString> Periods, TArray<int> Frequencies, TArray<struct FString> RecurringAmounts, int BundleCount, TArray<int> BundleIDs, TArray<int> BundleQuantities, TArray<struct FString> BundleDescriptions, TArray<struct FString> BundleCategories, UWorksWeb_EUWorksUserSession UserSession, const struct FString& IPAddress);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebProcessAgreement
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebProcessAgreement : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebProcessAgreement");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, int Amount, const struct FString& Currency);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebQueryTxn
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebQueryTxn : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebQueryTxn");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& OrderID, const struct FString& TransID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebRefundTxn
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebRefundTxn : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebRefundTxn");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& OrderID, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetNewsForApp
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetNewsForApp : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetNewsForApp");
		return ptr;
	}



	void SetInput(int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetNewsForAppAuthed
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetNewsForAppAuthed : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetNewsForAppAuthed");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebRecordOfflinePlaytime
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebRecordOfflinePlaytime : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebRecordOfflinePlaytime");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamID, const struct FString& Ticket, const struct FUWorksPlaySessions& PlaySessions);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetRecentlyPlayedGames : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int Count);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetOwnedGames
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetOwnedGames : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetOwnedGames");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int> AppIDsFilter);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetSteamLevel
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetSteamLevel : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetSteamLevel");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetBadges
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetBadges : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetBadges");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetCommunityBadgeProgress : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int BadgeID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebIsPlayingSharedGame
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebIsPlayingSharedGame : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebIsPlayingSharedGame");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppIDPlaying);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebQueryFiles
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebQueryFiles : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebQueryFiles");
		return ptr;
	}



	void SetInput(const struct FString& Key, unsigned char queryType, int Page, int CreatorAppID, int AppID, TArray<struct FString> requiredTags, TArray<struct FString> excludedTags, TArray<struct FString> RequiredFlags, TArray<struct FString> OmittedFlags, const struct FString& searchText, unsigned char fileType, const struct FUWorksPublishedFileID& ChildPublishedFileID, int Days, bool bIncludeRecentVotesOnly, const struct FUWorksRequiredKVTags& RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int ReturnPlaytimeStats, int NumPerPage, bool bMatchAllTags, int CacheMaxAgeSeconds, int Language, bool bReturnMetaData);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebSetDeveloperMetadata
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebSetDeveloperMetadata : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebSetDeveloperMetadata");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, const struct FString& MetaData);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebUpdateTags
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebUpdateTags : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebUpdateTags");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, TArray<struct FString> AddTags, TArray<struct FString> RemoveTags);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebRankedByPublicationOrder
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebRankedByPublicationOrder : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebRankedByPublicationOrder");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, TArray<struct FString> tags, TArray<struct FString> UserTags);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebRankedByTrend
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebRankedByTrend : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebRankedByTrend");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, int Days, TArray<struct FString> tags, TArray<struct FString> UserTags);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebRankedByVote
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebRankedByVote : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebRankedByVote");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, TArray<struct FString> tags, TArray<struct FString> UserTags);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebResultSetSummary
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebResultSetSummary : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebResultSetSummary");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, TArray<struct FString> tags, TArray<struct FString> UserTags);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebItemVoteSummary
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebItemVoteSummary : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebItemVoteSummary");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebUserVoteSummary
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebUserVoteSummary : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebUserVoteSummary");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebEnumerateUserPublishedFiles : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebEnumerateUserSubscribedFiles : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int ListType);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetCollectionDetails
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetCollectionDetails : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetCollectionDetails");
		return ptr;
	}



	void SetInput(int CollectionCount, TArray<int> PublishedFileIDs);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetPublishedFileDetails
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetPublishedFileDetails : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetPublishedFileDetails");
		return ptr;
	}



	void SetInput(int ItemCount, TArray<int> PublishedFileIDs);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetUGCFileDetails
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetUGCFileDetails : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetUGCFileDetails");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebSetUGCUsedByGC
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebSetUGCUsedByGC : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebSetUGCUsedByGC");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID, bool bUsed);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebSubscribePublishedFile
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebSubscribePublishedFile : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebSubscribePublishedFile");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebUnsubscribePublishedFile
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebUnsubscribePublishedFile : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebUnsubscribePublishedFile");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebCheckAppOwnership
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebCheckAppOwnership : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebCheckAppOwnership");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetAppPriceInfo
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetAppPriceInfo : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetAppPriceInfo");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AppIDs);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetFriendList
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetFriendList : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetFriendList");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Relationship);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetPlayerBans
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetPlayerBans : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetPlayerBans");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& SteamIDs);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetPlayerSummaries
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetPlayerSummaries : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetPlayerSummaries");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& SteamIDs);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetPublisherAppOwnership
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetPublisherAppOwnership : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetPublisherAppOwnership");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetPublisherAppOwnershipChanges : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& PackageRowVersion, const struct FString& CDKeyRowVersion);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetUserGroupList
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetUserGroupList : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetUserGroupList");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGrantPackage
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGrantPackage : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGrantPackage");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int PackageID, const struct FString& IPAddress, const struct FString& ThirdPartyKey, int ThirdPartyAppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebResolveVanityURL
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebResolveVanityURL : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebResolveVanityURL");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FString& VanityURL, unsigned char URLType);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebAuthenticateUser
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebAuthenticateUser : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebAuthenticateUser");
		return ptr;
	}



	void SetInput(const struct FUWorksSteamID& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebAuthenticateUserTicket
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebAuthenticateUserTicket : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebAuthenticateUserTicket");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& Ticket);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetGlobalAchievementPercentagesForApp : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp");
		return ptr;
	}



	void SetInput(const struct FUWorksGameID& GameID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetGlobalStatsForGame
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetGlobalStatsForGame : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetGlobalStatsForGame");
		return ptr;
	}



	void SetInput(int AppID, int Count, TArray<struct FString> Name, int StartDate, int EndDate);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetNumberOfCurrentPlayers : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers");
		return ptr;
	}



	void SetInput(int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetPlayerAchievements
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetPlayerAchievements : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetPlayerAchievements");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& Language);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetSchemaForGame
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetSchemaForGame : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetSchemaForGame");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& Language);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetUserStatsForGame
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetUserStatsForGame : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetUserStatsForGame");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebSetUserStatsForGame
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebSetUserStatsForGame : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebSetUserStatsForGame");
		return ptr;
	}



	void SetInput(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<struct FString> Name, TArray<int> Value);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebSetItemPaymentRules
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebSetItemPaymentRules : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebSetItemPaymentRules");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, int GameItemID, const struct FUWorksAssociatedWorkshopFiles& AssociatedWorkshopFiles, const struct FUWorksPartnerAccounts& PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetFinalizedContributors
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetFinalizedContributors : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetFinalizedContributors");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, int GameItemID);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebGetItemDailyRevenue
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebGetItemDailyRevenue : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebGetItemDailyRevenue");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FString& itemId, int DateStart, int DateEnd);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UWorksRequestWebPopulateItemDescriptions
// 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
class UUWorksRequestWebPopulateItemDescriptions : public UUWorksRequestWeb
{
public:
	struct FScriptMulticastDelegate                    OnRequestCompleted;                                        // 0x00A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnRequestCompletedMinimal;                                 // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UWorksRequestWebPopulateItemDescriptions");
		return ptr;
	}



	void SetInput(const struct FString& Key, int AppID, const struct FUWorksLanguages& Languages);
	void GetOutput(struct FString* Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetAppBetasNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetAppBetasNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetAppBetasNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetAppBetasNode* STATIC_GetAppBetasNode(const struct FString& Key, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetAppBuildsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetAppBuildsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetAppBuildsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetAppBuildsNode* STATIC_GetAppBuildsNode(const struct FString& Key, int AppID, int Count);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetAppDepotVersionsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetAppDepotVersionsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetAppDepotVersionsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetAppDepotVersionsNode* STATIC_GetAppDepotVersionsNode(const struct FString& Key, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetAppListNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetAppListNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetAppListNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetAppListNode* STATIC_GetAppListNode();
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetCheatingReportsListNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetCheatingReportsListNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetCheatingReportsListNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetCheatingReportsListNode* STATIC_GetCheatingReportsListNode(const struct FString& Key, int AppID, int TimeBegin, int TimeEnd, bool bIncludeReports, bool bIncludeBans, const struct FString& ReportIDMin);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetPlayersBannedNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetPlayersBannedNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetPlayersBannedNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetPlayersBannedNode* STATIC_GetPlayersBannedNode(const struct FString& Key, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetServerListNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetServerListNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetServerListNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetServerListNode* STATIC_GetServerListNode(const struct FString& Key, const struct FString& Filter, int Limit);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetServersAtAddressNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetServersAtAddressNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetServersAtAddressNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetServersAtAddressNode* STATIC_GetServersAtAddressNode(const struct FString& Addr);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.SetAppBuildLiveNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USetAppBuildLiveNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.SetAppBuildLiveNode");
		return ptr;
	}



	class USetAppBuildLiveNode* STATIC_SetAppBuildLiveNode(const struct FString& Key, int AppID, int BuildID, const struct FString& BetaKey, const struct FString& Description);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UpToDateCheckNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UUpToDateCheckNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UpToDateCheckNode");
		return ptr;
	}



	class UUpToDateCheckNode* STATIC_UpToDateCheckNode(int AppID, int Version);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.PostGameDataFrameNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UPostGameDataFrameNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.PostGameDataFrameNode");
		return ptr;
	}



	class UPostGameDataFrameNode* STATIC_PostGameDataFrameNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& BroadcastID, const struct FString& FrameData);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ReportPlayerCheatingNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UReportPlayerCheatingNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ReportPlayerCheatingNode");
		return ptr;
	}



	class UReportPlayerCheatingNode* STATIC_ReportPlayerCheatingNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& SteamIDReporter, int AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int GameMode, int SuspicionStartTime, int Severity);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.RequestPlayerGameBanNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class URequestPlayerGameBanNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.RequestPlayerGameBanNode");
		return ptr;
	}



	class URequestPlayerGameBanNode* STATIC_RequestPlayerGameBanNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FUWorksSteamID& ReportID, const struct FString& CheatDescription, int Duration, bool bDelayBan);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.RemovePlayerGameBanNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class URemovePlayerGameBanNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.RemovePlayerGameBanNode");
		return ptr;
	}



	class URemovePlayerGameBanNode* STATIC_RemovePlayerGameBanNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetCheatingReportsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetCheatingReportsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetCheatingReportsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetCheatingReportsNode* STATIC_GetCheatingReportsNode(const struct FString& Key, int AppID, int TimeEnd, int TimeBegin, const struct FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.RequestVacStatusForUserNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class URequestVacStatusForUserNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.RequestVacStatusForUserNode");
		return ptr;
	}



	class URequestVacStatusForUserNode* STATIC_RequestVacStatusForUserNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.StartSecureMultiplayerSessionNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UStartSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.StartSecureMultiplayerSessionNode");
		return ptr;
	}



	class UStartSecureMultiplayerSessionNode* STATIC_StartSecureMultiplayerSessionNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.EndSecureMultiplayerSessionNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UEndSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.EndSecureMultiplayerSessionNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UEndSecureMultiplayerSessionNode* STATIC_EndSecureMultiplayerSessionNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& SessionId);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ReportCheatDataNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UReportCheatDataNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ReportCheatDataNode");
		return ptr;
	}



	class UReportCheatDataNode* STATIC_ReportCheatDataNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& PathAndFileName, const struct FString& WebCheatURL, const struct FString& TimeNow, const struct FString& TimeStarted, const struct FString& TimeStopped, const struct FString& CheatName, int GameProcessID, int CheatProcessID, const struct FString& CheatParamA, const struct FString& CheatParamB);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ReportAbuseNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UReportAbuseNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ReportAbuseNode");
		return ptr;
	}



	class UReportAbuseNode* STATIC_ReportAbuseNode(const struct FString& Key, const struct FUWorksSteamID& SteamIDActor, const struct FUWorksSteamID& SteamIDTarget, int AppID, unsigned char AbuseType, unsigned char ContentType, const struct FString& Description, const struct FString& GID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetTradeHistoryNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetTradeHistoryNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetTradeHistoryNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetTradeHistoryNode* STATIC_GetTradeHistoryNode(const struct FString& Key, int MaxTrades, int StartAfterTime, const struct FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const struct FString& Language, bool bIncludeFailed, bool bIncludeTotal);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.FlushInventoryCacheNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UFlushInventoryCacheNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.FlushInventoryCacheNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UFlushInventoryCacheNode* STATIC_FlushInventoryCacheNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.FlushAssetAppearanceCacheNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UFlushAssetAppearanceCacheNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.FlushAssetAppearanceCacheNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UFlushAssetAppearanceCacheNode* STATIC_FlushAssetAppearanceCacheNode(const struct FString& Key, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.FlushContextCacheNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UFlushContextCacheNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.FlushContextCacheNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UFlushContextCacheNode* STATIC_FlushContextCacheNode(const struct FString& Key, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetTradeOffersNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetTradeOffersNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetTradeOffersNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetTradeOffersNode* STATIC_GetTradeOffersNode(const struct FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const struct FString& Language, bool bActiveOnly, bool bHistoricalOnly, int TimeHistoricalCutoff);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetTradeOfferNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetTradeOfferNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetTradeOfferNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetTradeOfferNode* STATIC_GetTradeOfferNode(const struct FString& Key, const struct FString& TradeOfferID, const struct FString& Language);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetTradeOffersSummaryNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetTradeOffersSummaryNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetTradeOffersSummaryNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetTradeOffersSummaryNode* STATIC_GetTradeOffersSummaryNode(const struct FString& Key, int TimeLastVisit);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.DeclineTradeOfferNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDeclineTradeOfferNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.DeclineTradeOfferNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UDeclineTradeOfferNode* STATIC_DeclineTradeOfferNode(const struct FString& Key, const struct FString& TradeOfferID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.CancelTradeOfferNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCancelTradeOfferNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.CancelTradeOfferNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UCancelTradeOfferNode* STATIC_CancelTradeOfferNode(const struct FString& Key, const struct FString& TradeOfferID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetMarketEligibilityNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetMarketEligibilityNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetMarketEligibilityNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetMarketEligibilityNode* STATIC_GetMarketEligibilityNode(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.CancelAppListingsForUserNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCancelAppListingsForUserNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.CancelAppListingsForUserNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UCancelAppListingsForUserNode* STATIC_CancelAppListingsForUserNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bSynchronous);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetAssetIDNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetAssetIDNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetAssetIDNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetAssetIDNode* STATIC_GetAssetIDNode(const struct FString& Key, int AppID, const struct FString& ListingID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetPopularNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetPopularNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetPopularNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetPopularNode* STATIC_GetPopularNode(const struct FString& Key, const struct FString& Language, int Rows, int Start, int FilterAppID, int ECurrency);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.CanTradeNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCanTradeNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.CanTradeNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UCanTradeNode* STATIC_CanTradeNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamID& TargetID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.FinalizeAssetTransactionNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UFinalizeAssetTransactionNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.FinalizeAssetTransactionNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UFinalizeAssetTransactionNode* STATIC_FinalizeAssetTransactionNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& TxnID, const struct FString& Language);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetAssetClassInfoNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetAssetClassInfoNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetAssetClassInfoNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetAssetClassInfoNode* STATIC_GetAssetClassInfoNode(const struct FString& Key, int AppID, int ClassCount, const struct FString& ClassID0, const struct FString& Language, const struct FString& InstanceID0);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetAssetPricesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetAssetPricesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetAssetPricesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetAssetPricesNode* STATIC_GetAssetPricesNode(const struct FString& Key, int AppID, const struct FString& Currency, const struct FString& Language);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetExportedAssetsForUserNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetExportedAssetsForUserNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetExportedAssetsForUserNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetExportedAssetsForUserNode* STATIC_GetExportedAssetsForUserNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& ContextID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetMarketPricesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetMarketPricesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetMarketPricesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetMarketPricesNode* STATIC_GetMarketPricesNode(const struct FString& Key, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.StartAssetTransactionNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UStartAssetTransactionNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.StartAssetTransactionNode");
		return ptr;
	}



	class UStartAssetTransactionNode* STATIC_StartAssetTransactionNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& AssetID0, int AssetQuantity0, const struct FString& Currency, const struct FString& Language, const struct FString& IPAddress, const struct FString& Referrer, bool bClientAuth);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.StartTradeNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UStartTradeNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.StartTradeNode");
		return ptr;
	}



	class UStartTradeNode* STATIC_StartTradeNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& PartyA, const struct FUWorksSteamID& PartyB);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetHistoryCommandDetailsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetHistoryCommandDetailsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetHistoryCommandDetailsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetHistoryCommandDetailsNode* STATIC_GetHistoryCommandDetailsNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& Command, const struct FString& ContextID, const struct FString& Arguments);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetUserHistoryNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetUserHistoryNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetUserHistoryNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetUserHistoryNode* STATIC_GetUserHistoryNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, int StartTime, int EndTime);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.HistoryExecuteCommandsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UHistoryExecuteCommandsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.HistoryExecuteCommandsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UHistoryExecuteCommandsNode* STATIC_HistoryExecuteCommandsNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FString& ContextID, const struct FString& ActorId);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.SupportGetAssetHistoryNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USupportGetAssetHistoryNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.SupportGetAssetHistoryNode");
		return ptr;
	}



	class USupportGetAssetHistoryNode* STATIC_SupportGetAssetHistoryNode(const struct FString& Key, int AppID, const struct FString& AssetID, const struct FString& ContextID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.CreateSessionNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCreateSessionNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.CreateSessionNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UCreateSessionNode* STATIC_CreateSessionNode(const struct FString& Key, int AppID, const struct FString& Context, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UpdateSessionNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UUpdateSessionNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UpdateSessionNode");
		return ptr;
	}



	class UUpdateSessionNode* STATIC_UpdateSessionNode(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.EnumerateSessionsForAppNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UEnumerateSessionsForAppNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.EnumerateSessionsForAppNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UEnumerateSessionsForAppNode* STATIC_EnumerateSessionsForAppNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const struct FString& Language);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetSessionDetailsForAppNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetSessionDetailsForAppNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetSessionDetailsForAppNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetSessionDetailsForAppNode* STATIC_GetSessionDetailsForAppNode(const struct FString& Key, const struct FUWorksSessions& Sessions, int AppID, const struct FString& Language);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.RequestNotificationsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class URequestNotificationsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.RequestNotificationsNode");
		return ptr;
	}



	class URequestNotificationsNode* STATIC_RequestNotificationsNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.DeleteSessionNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDeleteSessionNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.DeleteSessionNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UDeleteSessionNode* STATIC_DeleteSessionNode(const struct FString& Key, const struct FString& SessionId, int AppID, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.DeleteSessionBatchNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDeleteSessionBatchNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.DeleteSessionBatchNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UDeleteSessionBatchNode* STATIC_DeleteSessionBatchNode(const struct FString& Key, const struct FString& SessionId, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetAccountListNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetAccountListNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetAccountListNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetAccountListNode* STATIC_GetAccountListNode(const struct FString& Key);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.CreateAccountNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCreateAccountNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.CreateAccountNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UCreateAccountNode* STATIC_CreateAccountNode(const struct FString& Key, int AppID, const struct FString& Memo);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.SetMemoNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USetMemoNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.SetMemoNode");
		return ptr;
	}



	class USetMemoNode* STATIC_SetMemoNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Memo);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ResetLoginTokenNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UResetLoginTokenNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ResetLoginTokenNode");
		return ptr;
	}



	class UResetLoginTokenNode* STATIC_ResetLoginTokenNode(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.DeleteAccountNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDeleteAccountNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.DeleteAccountNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UDeleteAccountNode* STATIC_DeleteAccountNode(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetAccountPublicInfoNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetAccountPublicInfoNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetAccountPublicInfoNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetAccountPublicInfoNode* STATIC_GetAccountPublicInfoNode(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.QueryLoginTokenNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UQueryLoginTokenNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.QueryLoginTokenNode");
		return ptr;
	}



	class UQueryLoginTokenNode* STATIC_QueryLoginTokenNode(const struct FString& Key, const struct FString& LoginToken);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.SetBanStatusNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USetBanStatusNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.SetBanStatusNode");
		return ptr;
	}



	class USetBanStatusNode* STATIC_SetBanStatusNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bBanned, int BanSeconds);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetServerSteamIDsByIPNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetServerSteamIDsByIPNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetServerSteamIDsByIPNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetServerSteamIDsByIPNode* STATIC_GetServerSteamIDsByIPNode(const struct FString& Key, const struct FString& ServerIPs);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetServerIPsBySteamIDNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetServerIPsBySteamIDNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetServerIPsBySteamIDNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetServerIPsBySteamIDNode* STATIC_GetServerIPsBySteamIDNode(const struct FString& Key, const struct FUWorksSteamID& ServerSteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetGameServerPlayerStatsForGameNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetGameServerPlayerStatsForGameNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetGameServerPlayerStatsForGameNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetGameServerPlayerStatsForGameNode* STATIC_GetGameServerPlayerStatsForGameNode(const struct FString& Key, const struct FUWorksGameID& GameID, int AppID, const struct FString& RangeStart, const struct FString& RangeEnd, int MaxResults);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.AddItemNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAddItemNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.AddItemNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UAddItemNode* STATIC_AddItemNode(const struct FString& Key, int AppID, TArray<struct FUWorksSteamItemDef> ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.AddPromoItemNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAddPromoItemNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.AddPromoItemNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UAddPromoItemNode* STATIC_AddPromoItemNode(const struct FString& Key, int AppID, const struct FUWorksSteamItemDef& ItemDefID, const struct FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const struct FString& RequestID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ConsumeItemNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UConsumeItemNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ConsumeItemNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UConsumeItemNode* STATIC_ConsumeItemNode(const struct FString& Key, int AppID, const struct FUWorksSteamItemInstanceID& itemId, int Quantity, const struct FUWorksSteamID& SteamID, const struct FString& RequestID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ExchangeItemNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UExchangeItemNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ExchangeItemNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UExchangeItemNode* STATIC_ExchangeItemNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int> MaterialsQuantity, const struct FUWorksSteamItemDef& OutputItemDefID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetInventoryNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetInventoryNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetInventoryNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetInventoryNode* STATIC_GetInventoryNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetItemDefsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetItemDefsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetItemDefsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetItemDefsNode* STATIC_GetItemDefsNode(const struct FString& Key, int AppID, const struct FString& ModifiedSince, TArray<struct FUWorksSteamItemDef> ItemDefIDs, TArray<struct FUWorksSteamItemDef> WorkshopIDs, int CacheMaxAgeSeconds);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetPriceSheetNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetPriceSheetNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetPriceSheetNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetPriceSheetNode* STATIC_GetPriceSheetNode(const struct FString& Key, int ECurrency);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ConsolidateNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UConsolidateNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ConsolidateNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UConsolidateNode* STATIC_ConsolidateNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef> ItemDefID, bool bForce);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetQuantityNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetQuantityNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetQuantityNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetQuantityNode* STATIC_GetQuantityNode(const struct FString& Key, int AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamItemDef& ItemDefID, bool bForce);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.DeleteLeaderboardNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDeleteLeaderboardNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.DeleteLeaderboardNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UDeleteLeaderboardNode* STATIC_DeleteLeaderboardNode(const struct FString& Key, int AppID, const struct FString& Name);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.FindOrCreateLeaderboardNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.FindOrCreateLeaderboardNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UFindOrCreateLeaderboardNode* STATIC_FindOrCreateLeaderboardNode(const struct FString& Key, int AppID, const struct FString& Name, const struct FString& SortMethod, const struct FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetLeaderboardEntriesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetLeaderboardEntriesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetLeaderboardEntriesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetLeaderboardEntriesNode* STATIC_GetLeaderboardEntriesNode(const struct FString& Key, int AppID, int RangeStart, int RangeEnd, int LeaderboardID, int DataRequest, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetLeaderboardsForGameNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetLeaderboardsForGameNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetLeaderboardsForGameNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetLeaderboardsForGameNode* STATIC_GetLeaderboardsForGameNode(const struct FString& Key, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ResetLeaderboardNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UResetLeaderboardNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ResetLeaderboardNode");
		return ptr;
	}



	class UResetLeaderboardNode* STATIC_ResetLeaderboardNode(const struct FString& Key, int AppID, int LeaderboardID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.SetLeaderboardScoreNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USetLeaderboardScoreNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.SetLeaderboardScoreNode");
		return ptr;
	}



	class USetLeaderboardScoreNode* STATIC_SetLeaderboardScoreNode(const struct FString& Key, int AppID, int LeaderboardID, const struct FUWorksSteamID& SteamID, int score, const struct FString& ScoreMethod, TArray<unsigned char> Details);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.AdjustAgreementNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAdjustAgreementNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.AdjustAgreementNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UAdjustAgreementNode* STATIC_AdjustAgreementNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, const struct FString& NextProcessDate);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.CancelAgreementNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCancelAgreementNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.CancelAgreementNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UCancelAgreementNode* STATIC_CancelAgreementNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.FinalizeTxnNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UFinalizeTxnNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.FinalizeTxnNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UFinalizeTxnNode* STATIC_FinalizeTxnNode(const struct FString& Key, const struct FString& OrderID, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetReportNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetReportNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetReportNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetReportNode* STATIC_GetReportNode(const struct FString& Key, int AppID, const struct FString& Time, UWorksWeb_EUWorksReportType Type, int MaxResults);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetUserAgreementInfoNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetUserAgreementInfoNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetUserAgreementInfoNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetUserAgreementInfoNode* STATIC_GetUserAgreementInfoNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetUserInfoNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetUserInfoNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetUserInfoNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetUserInfoNode* STATIC_GetUserInfoNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& IPAddress);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.InitTxnNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UInitTxnNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.InitTxnNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UInitTxnNode* STATIC_InitTxnNode(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, int AppID, int ItemCount, const struct FString& Language, const struct FString& Currency, TArray<struct FUWorksSteamItemDef> itemIds, TArray<int> Quantities, TArray<int> Amounts, TArray<struct FString> Descriptions, TArray<struct FString> Categories, TArray<int> AssociatedBundles, TArray<struct FString> BillingTypes, TArray<struct FString> StartDates, TArray<struct FString> EndDates, TArray<struct FString> Periods, TArray<int> Frequencies, TArray<struct FString> RecurringAmounts, int BundleCount, TArray<int> BundleIDs, TArray<int> BundleQuantities, TArray<struct FString> BundleDescriptions, TArray<struct FString> BundleCategories, UWorksWeb_EUWorksUserSession UserSession, const struct FString& IPAddress);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ProcessAgreementNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UProcessAgreementNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ProcessAgreementNode");
		return ptr;
	}



	class UProcessAgreementNode* STATIC_ProcessAgreementNode(const struct FString& Key, const struct FString& OrderID, const struct FUWorksSteamID& SteamID, const struct FString& AgreementID, int AppID, int Amount, const struct FString& Currency);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.QueryTxnNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UQueryTxnNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.QueryTxnNode");
		return ptr;
	}



	class UQueryTxnNode* STATIC_QueryTxnNode(const struct FString& Key, int AppID, const struct FString& OrderID, const struct FString& TransID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.RefundTxnNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class URefundTxnNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.RefundTxnNode");
		return ptr;
	}



	class URefundTxnNode* STATIC_RefundTxnNode(const struct FString& Key, const struct FString& OrderID, int AppID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetNewsForAppNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetNewsForAppNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetNewsForAppNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetNewsForAppNode* STATIC_GetNewsForAppNode(int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetNewsForAppAuthedNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetNewsForAppAuthedNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetNewsForAppAuthedNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetNewsForAppAuthedNode* STATIC_GetNewsForAppAuthedNode(const struct FString& Key, int AppID, int MaxLength, int EndDate, int Count, const struct FString& Feeds);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.RecordOfflinePlaytimeNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class URecordOfflinePlaytimeNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.RecordOfflinePlaytimeNode");
		return ptr;
	}



	class URecordOfflinePlaytimeNode* STATIC_RecordOfflinePlaytimeNode(const struct FUWorksSteamID& SteamID, const struct FString& Ticket, const struct FUWorksPlaySessions& PlaySessions);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetRecentlyPlayedGamesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetRecentlyPlayedGamesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetRecentlyPlayedGamesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetRecentlyPlayedGamesNode* STATIC_GetRecentlyPlayedGamesNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int Count);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetOwnedGamesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetOwnedGamesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetOwnedGamesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetOwnedGamesNode* STATIC_GetOwnedGamesNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int> AppIDsFilter);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetSteamLevelNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetSteamLevelNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetSteamLevelNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetSteamLevelNode* STATIC_GetSteamLevelNode(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetBadgesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetBadgesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetBadgesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetBadgesNode* STATIC_GetBadgesNode(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetCommunityBadgeProgressNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetCommunityBadgeProgressNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetCommunityBadgeProgressNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetCommunityBadgeProgressNode* STATIC_GetCommunityBadgeProgressNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int BadgeID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.IsPlayingSharedGameNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UIsPlayingSharedGameNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.IsPlayingSharedGameNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UIsPlayingSharedGameNode* STATIC_IsPlayingSharedGameNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppIDPlaying);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.QueryFilesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UQueryFilesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.QueryFilesNode");
		return ptr;
	}



	class UQueryFilesNode* STATIC_QueryFilesNode(const struct FString& Key, unsigned char queryType, int Page, int CreatorAppID, int AppID, TArray<struct FString> requiredTags, TArray<struct FString> excludedTags, TArray<struct FString> RequiredFlags, TArray<struct FString> OmittedFlags, const struct FString& searchText, unsigned char fileType, const struct FUWorksPublishedFileID& ChildPublishedFileID, int Days, bool bIncludeRecentVotesOnly, const struct FUWorksRequiredKVTags& RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int ReturnPlaytimeStats, int NumPerPage, bool bMatchAllTags, int CacheMaxAgeSeconds, int Language, bool bReturnMetaData);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.SetDeveloperMetadataNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USetDeveloperMetadataNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.SetDeveloperMetadataNode");
		return ptr;
	}



	class USetDeveloperMetadataNode* STATIC_SetDeveloperMetadataNode(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, const struct FString& MetaData);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UpdateTagsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UUpdateTagsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UpdateTagsNode");
		return ptr;
	}



	class UUpdateTagsNode* STATIC_UpdateTagsNode(const struct FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int AppID, TArray<struct FString> AddTags, TArray<struct FString> RemoveTags);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.RankedByPublicationOrderNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class URankedByPublicationOrderNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.RankedByPublicationOrderNode");
		return ptr;
	}



	class URankedByPublicationOrderNode* STATIC_RankedByPublicationOrderNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, TArray<struct FString> tags, TArray<struct FString> UserTags);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.RankedByTrendNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class URankedByTrendNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.RankedByTrendNode");
		return ptr;
	}



	class URankedByTrendNode* STATIC_RankedByTrendNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, int Days, TArray<struct FString> tags, TArray<struct FString> UserTags);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.RankedByVoteNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class URankedByVoteNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.RankedByVoteNode");
		return ptr;
	}



	class URankedByVoteNode* STATIC_RankedByVoteNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int StartIndex, int Count, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, TArray<struct FString> tags, TArray<struct FString> UserTags);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ResultSetSummaryNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UResultSetSummaryNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ResultSetSummaryNode");
		return ptr;
	}



	class UResultSetSummaryNode* STATIC_ResultSetSummaryNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int TagCount, int UserTagCount, bool bHasAppAdminAccess, int fileType, TArray<struct FString> tags, TArray<struct FString> UserTags);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ItemVoteSummaryNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UItemVoteSummaryNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ItemVoteSummaryNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UItemVoteSummaryNode* STATIC_ItemVoteSummaryNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UserVoteSummaryNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UUserVoteSummaryNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UserVoteSummaryNode");
		return ptr;
	}



	class UUserVoteSummaryNode* STATIC_UserVoteSummaryNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<int> PublishedFileIDs);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.EnumerateUserPublishedFilesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UEnumerateUserPublishedFilesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.EnumerateUserPublishedFilesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UEnumerateUserPublishedFilesNode* STATIC_EnumerateUserPublishedFilesNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.EnumerateUserSubscribedFilesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UEnumerateUserSubscribedFilesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.EnumerateUserSubscribedFilesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UEnumerateUserSubscribedFilesNode* STATIC_EnumerateUserSubscribedFilesNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int ListType);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetCollectionDetailsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetCollectionDetailsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetCollectionDetailsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetCollectionDetailsNode* STATIC_GetCollectionDetailsNode(int CollectionCount, TArray<int> PublishedFileIDs);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetPublishedFileDetailsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetPublishedFileDetailsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetPublishedFileDetailsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetPublishedFileDetailsNode* STATIC_GetPublishedFileDetailsNode(int ItemCount, TArray<int> PublishedFileIDs);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetUGCFileDetailsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetUGCFileDetailsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetUGCFileDetailsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetUGCFileDetailsNode* STATIC_GetUGCFileDetailsNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.SetUGCUsedByGCNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USetUGCUsedByGCNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.SetUGCUsedByGCNode");
		return ptr;
	}



	class USetUGCUsedByGCNode* STATIC_SetUGCUsedByGCNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int UGCID, int AppID, bool bUsed);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.SubscribePublishedFileNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USubscribePublishedFileNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.SubscribePublishedFileNode");
		return ptr;
	}



	class USubscribePublishedFileNode* STATIC_SubscribePublishedFileNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.UnsubscribePublishedFileNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UUnsubscribePublishedFileNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.UnsubscribePublishedFileNode");
		return ptr;
	}



	class UUnsubscribePublishedFileNode* STATIC_UnsubscribePublishedFileNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int PublishedFileID);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.CheckAppOwnershipNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UCheckAppOwnershipNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.CheckAppOwnershipNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UCheckAppOwnershipNode* STATIC_CheckAppOwnershipNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetAppPriceInfoNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetAppPriceInfoNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetAppPriceInfoNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetAppPriceInfoNode* STATIC_GetAppPriceInfoNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& AppIDs);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetFriendListNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetFriendListNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetFriendListNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetFriendListNode* STATIC_GetFriendListNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, const struct FString& Relationship);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetPlayerBansNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetPlayerBansNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetPlayerBansNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetPlayerBansNode* STATIC_GetPlayerBansNode(const struct FString& Key, const struct FString& SteamIDs);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetPlayerSummariesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetPlayerSummariesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetPlayerSummariesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetPlayerSummariesNode* STATIC_GetPlayerSummariesNode(const struct FString& Key, const struct FString& SteamIDs);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetPublisherAppOwnershipNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetPublisherAppOwnershipNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetPublisherAppOwnershipNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetPublisherAppOwnershipNode* STATIC_GetPublisherAppOwnershipNode(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetPublisherAppOwnershipChangesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetPublisherAppOwnershipChangesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetPublisherAppOwnershipChangesNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetPublisherAppOwnershipChangesNode* STATIC_GetPublisherAppOwnershipChangesNode(const struct FString& Key, const struct FString& PackageRowVersion, const struct FString& CDKeyRowVersion);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetUserGroupListNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetUserGroupListNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetUserGroupListNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetUserGroupListNode* STATIC_GetUserGroupListNode(const struct FString& Key, const struct FUWorksSteamID& SteamID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GrantPackageNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGrantPackageNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GrantPackageNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGrantPackageNode* STATIC_GrantPackageNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int PackageID, const struct FString& IPAddress, const struct FString& ThirdPartyKey, int ThirdPartyAppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.ResolveVanityURLNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UResolveVanityURLNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.ResolveVanityURLNode");
		return ptr;
	}



	class UResolveVanityURLNode* STATIC_ResolveVanityURLNode(const struct FString& Key, const struct FString& VanityURL, unsigned char URLType);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.AuthenticateUserNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAuthenticateUserNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.AuthenticateUserNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UAuthenticateUserNode* STATIC_AuthenticateUserNode(const struct FUWorksSteamID& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.AuthenticateUserTicketNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAuthenticateUserTicketNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.AuthenticateUserTicketNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UAuthenticateUserTicketNode* STATIC_AuthenticateUserTicketNode(const struct FString& Key, int AppID, const struct FString& Ticket);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetGlobalAchievementPercentagesForAppNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetGlobalAchievementPercentagesForAppNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetGlobalAchievementPercentagesForAppNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetGlobalAchievementPercentagesForAppNode* STATIC_GetGlobalAchievementPercentagesForAppNode(const struct FUWorksGameID& GameID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetGlobalStatsForGameNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetGlobalStatsForGameNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetGlobalStatsForGameNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetGlobalStatsForGameNode* STATIC_GetGlobalStatsForGameNode(int AppID, int Count, TArray<struct FString> Name, int StartDate, int EndDate);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetNumberOfCurrentPlayersNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetNumberOfCurrentPlayersNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetNumberOfCurrentPlayersNode* STATIC_GetNumberOfCurrentPlayersNode(int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetPlayerAchievementsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetPlayerAchievementsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetPlayerAchievementsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetPlayerAchievementsNode* STATIC_GetPlayerAchievementsNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, const struct FString& Language);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetSchemaForGameNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetSchemaForGameNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetSchemaForGameNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetSchemaForGameNode* STATIC_GetSchemaForGameNode(const struct FString& Key, int AppID, const struct FString& Language);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetUserStatsForGameNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetUserStatsForGameNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetUserStatsForGameNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetUserStatsForGameNode* STATIC_GetUserStatsForGameNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.SetUserStatsForGameNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USetUserStatsForGameNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.SetUserStatsForGameNode");
		return ptr;
	}



	class USetUserStatsForGameNode* STATIC_SetUserStatsForGameNode(const struct FString& Key, const struct FUWorksSteamID& SteamID, int AppID, int Count, TArray<struct FString> Name, TArray<int> Value);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.SetItemPaymentRulesNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class USetItemPaymentRulesNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.SetItemPaymentRulesNode");
		return ptr;
	}



	class USetItemPaymentRulesNode* STATIC_SetItemPaymentRulesNode(const struct FString& Key, int AppID, int GameItemID, const struct FUWorksAssociatedWorkshopFiles& AssociatedWorkshopFiles, const struct FUWorksPartnerAccounts& PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetFinalizedContributorsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetFinalizedContributorsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetFinalizedContributorsNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetFinalizedContributorsNode* STATIC_GetFinalizedContributorsNode(const struct FString& Key, int AppID, int GameItemID);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.GetItemDailyRevenueNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGetItemDailyRevenueNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.GetItemDailyRevenueNode");
		return ptr;
	}



	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	class UGetItemDailyRevenueNode* STATIC_GetItemDailyRevenueNode(const struct FString& Key, int AppID, const struct FString& itemId, int DateStart, int DateEnd);
	void AfterRead();
	void BeforeDelete();

};

// Class UWorksWeb.PopulateItemDescriptionsNode
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UPopulateItemDescriptionsNode : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Completed;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UWorksWeb.PopulateItemDescriptionsNode");
		return ptr;
	}



	class UPopulateItemDescriptionsNode* STATIC_PopulateItemDescriptionsNode(const struct FString& Key, int AppID, const struct FUWorksLanguages& Languages);
	void OnRequestCompleted(bool bSuccessful, const struct FString& Content);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
