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
	 * Class UWorksWeb.UWorksInterfaceWeb
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWeb : public UUWorksInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebApps
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebApps : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_UpToDateCheckMinimal(int32_t AppID, int32_t Version, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebUpToDateCheck* STATIC_UpToDateCheck();
		void STATIC_SetAppBuildLiveMinimal(const class FString& Key, int32_t AppID, int32_t BuildID, const class FString& BetaKey, const class FString& Description, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebSetAppBuildLive* STATIC_SetAppBuildLive();
		void STATIC_GetServersAtAddressMinimal(const class FString& Addr, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetServersAtAddress* STATIC_GetServersAtAddress();
		void STATIC_GetServerListMinimal(const class FString& Key, const class FString& Filter, int32_t Limit, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetServerList* STATIC_GetServerList();
		void STATIC_GetPlayersBannedMinimal(const class FString& Key, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetPlayersBanned* STATIC_GetPlayersBanned();
		void STATIC_GetCheatingReportsListMinimal(const class FString& Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, const class FString& ReportIDMin, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetCheatingReportsList* STATIC_GetCheatingReportsList();
		void STATIC_GetAppListMinimal(const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetAppList* STATIC_GetAppList();
		void STATIC_GetAppDepotVersionsMinimal(const class FString& Key, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetAppDepotVersions* STATIC_GetAppDepotVersions();
		void STATIC_GetAppBuildsMinimal(const class FString& Key, int32_t AppID, int32_t Count, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetAppBuilds* STATIC_GetAppBuilds();
		void STATIC_GetAppBetasMinimal(const class FString& Key, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetAppBetas* STATIC_GetAppBetas();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebBroadcast
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebBroadcast : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_PostGameDataFrameMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& BroadcastID, const class FString& FrameData, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebPostGameDataFrame* STATIC_PostGameDataFrame();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebCheatReporting
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebCheatReporting : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_StartSecureMultiplayerSessionMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebStartSecureMultiplayerSession* STATIC_StartSecureMultiplayerSession();
		void STATIC_RequestVacStatusForUserMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& SessionId, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebRequestVacStatusForUser* STATIC_RequestVacStatusForUser();
		void STATIC_RequestPlayerGameBanMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const struct FUWorksSteamID& ReportID, const class FString& CheatDescription, int32_t Duration, bool bDelayBan, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebRequestPlayerGameBan* STATIC_RequestPlayerGameBan();
		void STATIC_ReportPlayerCheatingMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const struct FUWorksSteamID& SteamIDReporter, int32_t AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebReportPlayerCheating* STATIC_ReportPlayerCheating();
		void STATIC_ReportCheatDataMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& PathAndFileName, const class FString& WebCheatURL, const class FString& TimeNow, const class FString& TimeStarted, const class FString& TimeStopped, const class FString& CheatName, int32_t GameProcessID, int32_t CheatProcessID, const class FString& CheatParamA, const class FString& CheatParamB, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebReportCheatData* STATIC_ReportCheatData();
		void STATIC_RemovePlayerGameBanMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebRemovePlayerGameBan* STATIC_RemovePlayerGameBan();
		void STATIC_GetCheatingReportsMinimal(const class FString& Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, const class FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetCheatingReports* STATIC_GetCheatingReports();
		void STATIC_EndSecureMultiplayerSessionMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& SessionId, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebEndSecureMultiplayerSession* STATIC_EndSecureMultiplayerSession();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebCommunity
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebCommunity : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_ReportAbuseMinimal(const class FString& Key, const struct FUWorksSteamID& SteamIDActor, const struct FUWorksSteamID& SteamIDTarget, int32_t AppID, unsigned char AbuseType, unsigned char ContentType, const class FString& Description, const class FString& GID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebReportAbuse* STATIC_ReportAbuse();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebEcon
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebEcon : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_GetTradeOffersSummaryMinimal(const class FString& Key, int32_t TimeLastVisit, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetTradeOffersSummary* STATIC_GetTradeOffersSummary();
		void STATIC_GetTradeOffersMinimal(const class FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const class FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetTradeOffers* STATIC_GetTradeOffers();
		void STATIC_GetTradeOfferMinimal(const class FString& Key, const class FString& TradeOfferID, const class FString& Language, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetTradeOffer* STATIC_GetTradeOffer();
		void STATIC_GetTradeHistoryMinimal(const class FString& Key, int32_t MaxTrades, int32_t StartAfterTime, const class FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const class FString& Language, bool bIncludeFailed, bool bIncludeTotal, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetTradeHistory* STATIC_GetTradeHistory();
		void STATIC_FlushInventoryCacheMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& ContextID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebFlushInventoryCache* STATIC_FlushInventoryCache();
		void STATIC_FlushContextCacheMinimal(const class FString& Key, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebFlushContextCache* STATIC_FlushContextCache();
		void STATIC_FlushAssetAppearanceCacheMinimal(const class FString& Key, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebFlushAssetAppearanceCache* STATIC_FlushAssetAppearanceCache();
		void STATIC_DeclineTradeOfferMinimal(const class FString& Key, const class FString& TradeOfferID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebDeclineTradeOffer* STATIC_DeclineTradeOffer();
		void STATIC_CancelTradeOfferMinimal(const class FString& Key, const class FString& TradeOfferID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebCancelTradeOffer* STATIC_CancelTradeOffer();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebEconMarket
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebEconMarket : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_GetPopularMinimal(const class FString& Key, const class FString& Language, int32_t Rows, int32_t Start, int32_t FilterAppID, int32_t ECurrency, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetPopular* STATIC_GetPopular();
		void STATIC_GetMarketEligibilityMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetMarketEligibility* STATIC_GetMarketEligibility();
		void STATIC_GetAssetIDMinimal(const class FString& Key, int32_t AppID, const class FString& ListingID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetAssetID* STATIC_GetAssetID();
		void STATIC_CancelAppListingsForUserMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, bool bSynchronous, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebCancelAppListingsForUser* STATIC_CancelAppListingsForUser();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebEconomy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebEconomy : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_StartTradeMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& PartyA, const struct FUWorksSteamID& PartyB, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebStartTrade* STATIC_StartTrade();
		void STATIC_StartAssetTransactionMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& AssetID0, int32_t AssetQuantity0, const class FString& Currency, const class FString& Language, const class FString& IPAddress, const class FString& Referrer, bool bClientAuth, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebStartAssetTransaction* STATIC_StartAssetTransaction();
		void STATIC_GetMarketPricesMinimal(const class FString& Key, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetMarketPrices* STATIC_GetMarketPrices();
		void STATIC_GetExportedAssetsForUserMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& ContextID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetExportedAssetsForUser* STATIC_GetExportedAssetsForUser();
		void STATIC_GetAssetPricesMinimal(const class FString& Key, int32_t AppID, const class FString& Currency, const class FString& Language, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetAssetPrices* STATIC_GetAssetPrices();
		void STATIC_GetAssetClassInfoMinimal(const class FString& Key, int32_t AppID, int32_t ClassCount, const class FString& ClassID0, const class FString& Language, const class FString& InstanceID0, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetAssetClassInfo* STATIC_GetAssetClassInfo();
		void STATIC_FinalizeAssetTransactionMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& TxnID, const class FString& Language, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebFinalizeAssetTransaction* STATIC_FinalizeAssetTransaction();
		void STATIC_CanTradeMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamID& TargetID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebCanTrade* STATIC_CanTrade();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebGameInventory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebGameInventory : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_SupportGetAssetHistoryMinimal(const class FString& Key, int32_t AppID, const class FString& AssetID, const class FString& ContextID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebSupportGetAssetHistory* STATIC_SupportGetAssetHistory();
		void STATIC_HistoryExecuteCommandsMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& ContextID, const class FString& ActorId, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebHistoryExecuteCommands* STATIC_HistoryExecuteCommands();
		void STATIC_GetUserHistoryMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& ContextID, int32_t StartTime, int32_t EndTime, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetUserHistory* STATIC_GetUserHistory();
		void STATIC_GetHistoryCommandDetailsMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& Command, const class FString& ContextID, const class FString& Arguments, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetHistoryCommandDetails* STATIC_GetHistoryCommandDetails();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebGameNotifications
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebGameNotifications : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_UpdateSessionMinimal(const class FString& Key, const class FString& SessionId, int32_t AppID, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebUpdateSession* STATIC_UpdateSession();
		void STATIC_RequestNotificationsMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebRequestNotifications* STATIC_RequestNotifications();
		void STATIC_GetSessionDetailsForAppMinimal(const class FString& Key, const struct FUWorksSessions& Sessions, int32_t AppID, const class FString& Language, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetSessionDetailsForApp* STATIC_GetSessionDetailsForApp();
		void STATIC_EnumerateSessionsForAppMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const class FString& Language, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebEnumerateSessionsForApp* STATIC_EnumerateSessionsForApp();
		void STATIC_DeleteSessionMinimal(const class FString& Key, const class FString& SessionId, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		void STATIC_DeleteSessionBatchMinimal(const class FString& Key, const class FString& SessionId, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebDeleteSessionBatch* STATIC_DeleteSessionBatch();
		class UUWorksRequestWebDeleteSession* STATIC_DeleteSession();
		void STATIC_CreateSessionMinimal(const class FString& Key, int32_t AppID, const class FString& Context, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebCreateSession* STATIC_CreateSession();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebGameServers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebGameServers : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_SetMemoMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& Memo, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebSetMemo* STATIC_SetMemo();
		void STATIC_SetBanStatusMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, bool bBanned, int32_t BanSeconds, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebSetBanStatus* STATIC_SetBanStatus();
		void STATIC_ResetLoginTokenMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebResetLoginToken* STATIC_ResetLoginToken();
		void STATIC_QueryLoginTokenMinimal(const class FString& Key, const class FString& LoginToken, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebQueryLoginToken* STATIC_QueryLoginToken();
		void STATIC_GetServerSteamIDsByIPMinimal(const class FString& Key, const class FString& ServerIPs, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetServerSteamIDsByIP* STATIC_GetServerSteamIDsByIP();
		void STATIC_GetServerIPsBySteamIDMinimal(const class FString& Key, const struct FUWorksSteamID& ServerSteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetServerIPsBySteamID* STATIC_GetServerIPsBySteamID();
		void STATIC_GetAccountPublicInfoMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetAccountPublicInfo* STATIC_GetAccountPublicInfo();
		void STATIC_GetAccountListMinimal(const class FString& Key, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetAccountList* STATIC_GetAccountList();
		void STATIC_DeleteAccountMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebDeleteAccount* STATIC_DeleteAccount();
		void STATIC_CreateAccountMinimal(const class FString& Key, int32_t AppID, const class FString& Memo, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebCreateAccount* STATIC_CreateAccount();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebGameServerStats
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebGameServerStats : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_GetGameServerPlayerStatsForGameMinimal(const class FString& Key, const struct FUWorksGameID& GameID, int32_t AppID, const class FString& RangeStart, const class FString& RangeEnd, int32_t MaxResults, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetGameServerPlayerStatsForGame* STATIC_GetGameServerPlayerStatsForGame();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebInventory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebInventory : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_GetQuantityMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamItemDef& ItemDefID, bool bForce, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetQuantity* STATIC_GetQuantity();
		void STATIC_GetPriceSheetMinimal(const class FString& Key, int32_t ECurrency, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetPriceSheet* STATIC_GetPriceSheet();
		void STATIC_GetItemDefsMinimal(const class FString& Key, int32_t AppID, const class FString& ModifiedSince, TArray<struct FUWorksSteamItemDef> ItemDefIDs, TArray<struct FUWorksSteamItemDef> WorkshopIDs, int32_t CacheMaxAgeSeconds, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetItemDefs* STATIC_GetItemDefs();
		void STATIC_GetInventoryMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetInventory* STATIC_GetInventory();
		void STATIC_ExchangeItemMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32_t> MaterialsQuantity, const struct FUWorksSteamItemDef& OutputItemDefID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebExchangeItem* STATIC_ExchangeItem();
		void STATIC_ConsumeItemMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamItemInstanceID& itemId, int32_t Quantity, const struct FUWorksSteamID& SteamID, const class FString& RequestID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebConsumeItem* STATIC_ConsumeItem();
		void STATIC_ConsolidateMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef> ItemDefID, bool bForce, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebConsolidate* STATIC_Consolidate();
		void STATIC_AddPromoItemMinimal(const class FString& Key, int32_t AppID, const struct FUWorksSteamItemDef& ItemDefID, const class FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const class FString& RequestID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebAddPromoItem* STATIC_AddPromoItem();
		void STATIC_AddItemMinimal(const class FString& Key, int32_t AppID, TArray<struct FUWorksSteamItemDef> ItemDefID, const class FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const class FString& RequestID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebAddItem* STATIC_AddItem();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebLeaderboards
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebLeaderboards : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_SetLeaderboardScoreMinimal(const class FString& Key, int32_t AppID, int32_t LeaderboardID, const struct FUWorksSteamID& SteamID, int32_t score, const class FString& ScoreMethod, TArray<unsigned char> Details, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebSetLeaderboardScore* STATIC_SetLeaderboardScore();
		void STATIC_ResetLeaderboardMinimal(const class FString& Key, int32_t AppID, int32_t LeaderboardID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebResetLeaderboard* STATIC_ResetLeaderboard();
		void STATIC_GetLeaderboardsForGameMinimal(const class FString& Key, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetLeaderboardsForGame* STATIC_GetLeaderboardsForGame();
		void STATIC_GetLeaderboardEntriesMinimal(const class FString& Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardID, int32_t DataRequest, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetLeaderboardEntries* STATIC_GetLeaderboardEntries();
		void STATIC_FindOrCreateLeaderboardMinimal(const class FString& Key, int32_t AppID, const class FString& Name, const class FString& SortMethod, const class FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebFindOrCreateLeaderboard* STATIC_FindOrCreateLeaderboard();
		void STATIC_DeleteLeaderboardMinimal(const class FString& Key, int32_t AppID, const class FString& Name, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebDeleteLeaderboard* STATIC_DeleteLeaderboard();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebMicroTxn
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebMicroTxn : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_RefundTxnMinimal(const class FString& Key, const class FString& OrderID, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebRefundTxn* STATIC_RefundTxn();
		void STATIC_QueryTxnMinimal(const class FString& Key, int32_t AppID, const class FString& OrderID, const class FString& TransID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebQueryTxn* STATIC_QueryTxn();
		void STATIC_ProcessAgreementMinimal(const class FString& Key, const class FString& OrderID, const struct FUWorksSteamID& SteamID, const class FString& AgreementID, int32_t AppID, int32_t Amount, const class FString& Currency, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebProcessAgreement* STATIC_ProcessAgreement();
		void STATIC_InitTxnMinimal(const class FString& Key, const class FString& OrderID, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t ItemCount, const class FString& Language, const class FString& Currency, TArray<struct FUWorksSteamItemDef> itemIds, TArray<int32_t> Quantities, TArray<int32_t> Amounts, TArray<class FString> Descriptions, TArray<class FString> Categories, TArray<int32_t> AssociatedBundles, TArray<class FString> BillingTypes, TArray<class FString> StartDates, TArray<class FString> EndDates, TArray<class FString> Periods, TArray<int32_t> Frequencies, TArray<class FString> RecurringAmounts, int32_t BundleCount, TArray<int32_t> BundleIDs, TArray<int32_t> BundleQuantities, TArray<class FString> BundleDescriptions, TArray<class FString> BundleCategories, UWorksWeb_EUWorksUserSession UserSession, const class FString& IPAddress, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebInitTxn* STATIC_InitTxn();
		void STATIC_GetUserInfoMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& IPAddress, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetUserInfo* STATIC_GetUserInfo();
		void STATIC_GetUserAgreementInfoMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetUserAgreementInfo* STATIC_GetUserAgreementInfo();
		void STATIC_GetReportMinimal(const class FString& Key, int32_t AppID, const class FString& Time, UWorksWeb_EUWorksReportType Type, int32_t MaxResults, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetReport* STATIC_GetReport();
		void STATIC_FinalizeTxnMinimal(const class FString& Key, const class FString& OrderID, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebFinalizeTxn* STATIC_FinalizeTxn();
		void STATIC_CancelAgreementMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& AgreementID, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebCancelAgreement* STATIC_CancelAgreement();
		void STATIC_AdjustAgreementMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& AgreementID, int32_t AppID, const class FString& NextProcessDate, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebAdjustAgreement* STATIC_AdjustAgreement();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebNews
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebNews : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_GetNewsForAppMinimal(int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, const class FString& Feeds, const class FScriptDelegate& Delegate);
		void STATIC_GetNewsForAppAuthedMinimal(const class FString& Key, int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, const class FString& Feeds, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetNewsForAppAuthed* STATIC_GetNewsForAppAuthed();
		class UUWorksRequestWebGetNewsForApp* STATIC_GetNewsForApp();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebPlayer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebPlayer : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_RecordOfflinePlaytimeMinimal(const struct FUWorksSteamID& SteamID, const class FString& Ticket, const struct FUWorksPlaySessions& PlaySessions, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebRecordOfflinePlaytime* STATIC_RecordOfflinePlaytime();
		void STATIC_IsPlayingSharedGameMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppIDPlaying, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebIsPlayingSharedGame* STATIC_IsPlayingSharedGame();
		void STATIC_GetSteamLevelMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetSteamLevel* STATIC_GetSteamLevel();
		void STATIC_GetRecentlyPlayedGamesMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t Count, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetRecentlyPlayedGames* STATIC_GetRecentlyPlayedGames();
		void STATIC_GetOwnedGamesMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> AppIDsFilter, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetOwnedGames* STATIC_GetOwnedGames();
		void STATIC_GetCommunityBadgeProgressMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t BadgeID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetCommunityBadgeProgress* STATIC_GetCommunityBadgeProgress();
		void STATIC_GetBadgesMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetBadges* STATIC_GetBadges();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebPublishedFile
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebPublishedFile : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_UpdateTagsMinimal(const class FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int32_t AppID, TArray<class FString> AddTags, TArray<class FString> RemoveTags, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebUpdateTags* STATIC_UpdateTags();
		void STATIC_SetDeveloperMetadataMinimal(const class FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int32_t AppID, const class FString& MetaData, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebSetDeveloperMetadata* STATIC_SetDeveloperMetadata();
		void STATIC_QueryFilesMinimal(const class FString& Key, unsigned char queryType, int32_t Page, int32_t CreatorAppID, int32_t AppID, TArray<class FString> requiredTags, TArray<class FString> excludedTags, TArray<class FString> RequiredFlags, TArray<class FString> OmittedFlags, const class FString& searchText, unsigned char fileType, const struct FUWorksPublishedFileID& ChildPublishedFileID, int32_t Days, bool bIncludeRecentVotesOnly, const struct FUWorksRequiredKVTags& RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32_t ReturnPlaytimeStats, int32_t NumPerPage, bool bMatchAllTags, int32_t CacheMaxAgeSeconds, int32_t Language, bool bReturnMetaData, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebQueryFiles* STATIC_QueryFiles();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebPublishedItemSearch
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebPublishedItemSearch : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_ResultSetSummaryMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, TArray<class FString> tags, TArray<class FString> UserTags, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebResultSetSummary* STATIC_ResultSetSummary();
		void STATIC_RankedByVoteMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, TArray<class FString> tags, TArray<class FString> UserTags, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebRankedByVote* STATIC_RankedByVote();
		void STATIC_RankedByTrendMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, int32_t Days, TArray<class FString> tags, TArray<class FString> UserTags, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebRankedByTrend* STATIC_RankedByTrend();
		void STATIC_RankedByPublicationOrderMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, TArray<class FString> tags, TArray<class FString> UserTags, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebRankedByPublicationOrder* STATIC_RankedByPublicationOrder();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebPublishedItemVoting
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebPublishedItemVoting : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_UserVoteSummaryMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebUserVoteSummary* STATIC_UserVoteSummary();
		void STATIC_ItemVoteSummaryMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebItemVoteSummary* STATIC_ItemVoteSummary();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebRemoteStorage
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebRemoteStorage : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_UnsubscribePublishedFileMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t PublishedFileID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebUnsubscribePublishedFile* STATIC_UnsubscribePublishedFile();
		void STATIC_SubscribePublishedFileMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t PublishedFileID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebSubscribePublishedFile* STATIC_SubscribePublishedFile();
		void STATIC_SetUGCUsedByGCMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t UGCID, int32_t AppID, bool bUsed, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebSetUGCUsedByGC* STATIC_SetUGCUsedByGC();
		void STATIC_GetUGCFileDetailsMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t UGCID, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetUGCFileDetails* STATIC_GetUGCFileDetails();
		void STATIC_GetPublishedFileDetailsMinimal(int32_t ItemCount, TArray<int32_t> PublishedFileIDs, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetPublishedFileDetails* STATIC_GetPublishedFileDetails();
		void STATIC_GetCollectionDetailsMinimal(int32_t CollectionCount, TArray<int32_t> PublishedFileIDs, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetCollectionDetails* STATIC_GetCollectionDetails();
		void STATIC_EnumerateUserSubscribedFilesMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t ListType, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebEnumerateUserSubscribedFiles* STATIC_EnumerateUserSubscribedFiles();
		void STATIC_EnumerateUserPublishedFilesMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebEnumerateUserPublishedFiles* STATIC_EnumerateUserPublishedFiles();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebUser
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebUser : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_ResolveVanityURLMinimal(const class FString& Key, const class FString& VanityURL, unsigned char URLType, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebResolveVanityURL* STATIC_ResolveVanityURL();
		void STATIC_GrantPackageMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t PackageID, const class FString& IPAddress, const class FString& ThirdPartyKey, int32_t ThirdPartyAppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGrantPackage* STATIC_GrantPackage();
		void STATIC_GetUserGroupListMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetUserGroupList* STATIC_GetUserGroupList();
		void STATIC_GetPublisherAppOwnershipMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FScriptDelegate& Delegate);
		void STATIC_GetPublisherAppOwnershipChangesMinimal(const class FString& Key, const class FString& PackageRowVersion, const class FString& CDKeyRowVersion, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetPublisherAppOwnershipChanges* STATIC_GetPublisherAppOwnershipChanges();
		class UUWorksRequestWebGetPublisherAppOwnership* STATIC_GetPublisherAppOwnership();
		void STATIC_GetPlayerSummariesMinimal(const class FString& Key, const class FString& SteamIDs, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetPlayerSummaries* STATIC_GetPlayerSummaries();
		void STATIC_GetPlayerBansMinimal(const class FString& Key, const class FString& SteamIDs, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetPlayerBans* STATIC_GetPlayerBans();
		void STATIC_GetFriendListMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& Relationship, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetFriendList* STATIC_GetFriendList();
		void STATIC_GetAppPriceInfoMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& AppIDs, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetAppPriceInfo* STATIC_GetAppPriceInfo();
		void STATIC_CheckAppOwnershipMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebCheckAppOwnership* STATIC_CheckAppOwnership();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebUserAuth
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebUserAuth : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_AuthenticateUserTicketMinimal(const class FString& Key, int32_t AppID, const class FString& Ticket, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebAuthenticateUserTicket* STATIC_AuthenticateUserTicket();
		void STATIC_AuthenticateUserMinimal(const struct FUWorksSteamID& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebAuthenticateUser* STATIC_AuthenticateUser();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebUserStats
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebUserStats : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_SetUserStatsForGameMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t Count, TArray<class FString> Name, TArray<int32_t> Value, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebSetUserStatsForGame* STATIC_SetUserStatsForGame();
		void STATIC_GetUserStatsForGameMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetUserStatsForGame* STATIC_GetUserStatsForGame();
		void STATIC_GetSchemaForGameMinimal(const class FString& Key, int32_t AppID, const class FString& Language, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetSchemaForGame* STATIC_GetSchemaForGame();
		void STATIC_GetPlayerAchievementsMinimal(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& Language, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetPlayerAchievements* STATIC_GetPlayerAchievements();
		void STATIC_GetNumberOfCurrentPlayersMinimal(int32_t AppID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetNumberOfCurrentPlayers* STATIC_GetNumberOfCurrentPlayers();
		void STATIC_GetGlobalStatsForGameMinimal(int32_t AppID, int32_t Count, TArray<class FString> Name, int32_t StartDate, int32_t EndDate, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetGlobalStatsForGame* STATIC_GetGlobalStatsForGame();
		void STATIC_GetGlobalAchievementPercentagesForAppMinimal(const struct FUWorksGameID& GameID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetGlobalAchievementPercentagesForApp* STATIC_GetGlobalAchievementPercentagesForApp();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksInterfaceWebWorkshop
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceWebWorkshop : public UUWorksInterfaceWeb
	{
	public:
		void STATIC_SetItemPaymentRulesMinimal(const class FString& Key, int32_t AppID, int32_t GameItemID, const struct FUWorksAssociatedWorkshopFiles& AssociatedWorkshopFiles, const struct FUWorksPartnerAccounts& PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebSetItemPaymentRules* STATIC_SetItemPaymentRules();
		void STATIC_PopulateItemDescriptionsMinimal(const class FString& Key, int32_t AppID, const struct FUWorksLanguages& Languages, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebPopulateItemDescriptions* STATIC_PopulateItemDescriptions();
		void STATIC_GetItemDailyRevenueMinimal(const class FString& Key, int32_t AppID, const class FString& itemId, int32_t DateStart, int32_t DateEnd, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetItemDailyRevenue* STATIC_GetItemDailyRevenue();
		void STATIC_GetFinalizedContributorsMinimal(const class FString& Key, int32_t AppID, int32_t GameItemID, const class FScriptDelegate& Delegate);
		class UUWorksRequestWebGetFinalizedContributors* STATIC_GetFinalizedContributors();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWeb
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UUWorksRequestWeb : public UUWorksRequest
	{
	public:
		unsigned char                                              UnknownData_334U[0x78];                                  // 0x0028(0x0078) MISSED OFFSET (PADDING)

	public:
		bool IsActive();
		class FString GetStatus();
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetAppBetas
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetAppBetas : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetAppBuilds
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetAppBuilds : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, int32_t Count);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetAppDepotVersions
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetAppDepotVersions : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetAppList
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetAppList : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetCheatingReportsList
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetCheatingReportsList : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, const class FString& ReportIDMin);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetPlayersBanned
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetPlayersBanned : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetServerList
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetServerList : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& Filter, int32_t Limit);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetServersAtAddress
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetServersAtAddress : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Addr);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebSetAppBuildLive
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebSetAppBuildLive : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, int32_t BuildID, const class FString& BetaKey, const class FString& Description);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebUpToDateCheck
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebUpToDateCheck : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t AppID, int32_t VersionToCheck);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebPostGameDataFrame
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebPostGameDataFrame : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& BroadcastID, const class FString& FrameData);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebReportPlayerCheating
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebReportPlayerCheating : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const struct FUWorksSteamID& SteamIDReporter, int32_t AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebRequestPlayerGameBan
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebRequestPlayerGameBan : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const struct FUWorksSteamID& ReportID, const class FString& CheatDescription, int32_t Duration, bool bDelayBan);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebRemovePlayerGameBan
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebRemovePlayerGameBan : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetCheatingReports
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetCheatingReports : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, const class FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebRequestVacStatusForUser
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebRequestVacStatusForUser : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& SessionId);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebStartSecureMultiplayerSession
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebStartSecureMultiplayerSession : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebEndSecureMultiplayerSession
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebEndSecureMultiplayerSession : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& SessionId);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebReportCheatData
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebReportCheatData : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& PathAndFileName, const class FString& WebCheatURL, const class FString& TimeNow, const class FString& TimeStarted, const class FString& TimeStopped, const class FString& CheatName, int32_t GameProcessID, int32_t CheatProcessID, const class FString& CheatParamA, const class FString& CheatParamB);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebReportAbuse
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebReportAbuse : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamIDActor, const struct FUWorksSteamID& SteamIDTarget, int32_t AppID, unsigned char AbuseType, unsigned char ContentType, const class FString& Description, const class FString& GID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetTradeHistory
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetTradeHistory : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t MaxTrades, int32_t StartAfterTime, const class FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const class FString& Language, bool bIncludeFailed, bool bIncludeTotal);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebFlushInventoryCache
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebFlushInventoryCache : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& ContextID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebFlushAssetAppearanceCache
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebFlushAssetAppearanceCache : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebFlushContextCache
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebFlushContextCache : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetTradeOffers
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetTradeOffers : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const class FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetTradeOffer
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetTradeOffer : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& TradeOfferID, const class FString& Language);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetTradeOffersSummary
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetTradeOffersSummary : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t TimeLastVisit);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebDeclineTradeOffer
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebDeclineTradeOffer : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& TradeOfferID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebCancelTradeOffer
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebCancelTradeOffer : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& TradeOfferID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetMarketEligibility
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetMarketEligibility : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebCancelAppListingsForUser
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebCancelAppListingsForUser : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, bool bSynchronous);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetAssetID
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetAssetID : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& ListingID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetPopular
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetPopular : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& Language, int32_t Rows, int32_t Start, int32_t FilterAppID, int32_t ECurrency);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebCanTrade
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebCanTrade : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamID& TargetID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebFinalizeAssetTransaction
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebFinalizeAssetTransaction : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& TxnID, const class FString& Language);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetAssetClassInfo
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetAssetClassInfo : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, int32_t ClassCount, const class FString& ClassID, const class FString& Language, const class FString& InstanceID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetAssetPrices
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetAssetPrices : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& Currency, const class FString& Language);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetExportedAssetsForUser
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetExportedAssetsForUser : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& ContextID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetMarketPrices
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetMarketPrices : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebStartAssetTransaction
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebStartAssetTransaction : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& AssetID, int32_t AssetQuantity, const class FString& Currency, const class FString& Language, const class FString& IPAddress, const class FString& Referrer, bool bClientAuth);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebStartTrade
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebStartTrade : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& PartyA, const struct FUWorksSteamID& PartyB);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetHistoryCommandDetails
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetHistoryCommandDetails : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& Command, const class FString& ContextID, const class FString& Arguments);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetUserHistory
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetUserHistory : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& ContextID, int32_t StartTime, int32_t EndTime);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebHistoryExecuteCommands
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebHistoryExecuteCommands : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& ContextID, const class FString& ActorId);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebSupportGetAssetHistory
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebSupportGetAssetHistory : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& AssetID, const class FString& ContextID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebCreateSession
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebCreateSession : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& Context, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebUpdateSession
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebUpdateSession : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& SessionId, int32_t AppID, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebEnumerateSessionsForApp
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebEnumerateSessionsForApp : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const class FString& Language);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetSessionDetailsForApp
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetSessionDetailsForApp : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSessions& Sessions, int32_t AppID, const class FString& Language);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebRequestNotifications
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebRequestNotifications : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebDeleteSession
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebDeleteSession : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& SessionId, int32_t AppID, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebDeleteSessionBatch
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebDeleteSessionBatch : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& SessionId, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetAccountList
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetAccountList : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebCreateAccount
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebCreateAccount : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& Memo);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebSetMemo
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebSetMemo : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& Memo);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebResetLoginToken
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebResetLoginToken : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebDeleteAccount
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebDeleteAccount : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetAccountPublicInfo
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetAccountPublicInfo : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebQueryLoginToken
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebQueryLoginToken : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& LoginToken);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebSetBanStatus
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebSetBanStatus : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, bool bBanned, int32_t BanSeconds);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetServerSteamIDsByIP
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetServerSteamIDsByIP : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& ServerIPs);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetServerIPsBySteamID
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetServerIPsBySteamID : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& ServerSteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetGameServerPlayerStatsForGame
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetGameServerPlayerStatsForGame : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksGameID& GameID, int32_t AppID, const class FString& RangeStart, const class FString& RangeEnd, int32_t MaxResults);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebAddItem
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebAddItem : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, TArray<struct FUWorksSteamItemDef> ItemDefID, const class FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const class FString& RequestID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebAddPromoItem
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebAddPromoItem : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamItemDef& ItemDefID, const class FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const class FString& RequestID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebConsumeItem
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebConsumeItem : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamItemInstanceID& itemId, int32_t Quantity, const struct FUWorksSteamID& SteamID, const class FString& RequestID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebExchangeItem
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebExchangeItem : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32_t> MaterialsQuantity, const struct FUWorksSteamItemDef& OutputItemDefID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetInventory
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetInventory : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetItemDefs
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetItemDefs : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& ModifiedSince, TArray<struct FUWorksSteamItemDef> ItemDefIDs, TArray<struct FUWorksSteamItemDef> WorkshopIDs, int32_t CacheMaxAgeSeconds);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetPriceSheet
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetPriceSheet : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t ECurrency);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebConsolidate
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebConsolidate : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef> ItemDefID, bool bForce);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetQuantity
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetQuantity : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamItemDef& ItemDefID, bool bForce);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebDeleteLeaderboard
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebDeleteLeaderboard : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& Name);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebFindOrCreateLeaderboard
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebFindOrCreateLeaderboard : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& Name, const class FString& SortMethod, const class FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetLeaderboardEntries
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetLeaderboardEntries : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardID, int32_t DataRequest, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetLeaderboardsForGame
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetLeaderboardsForGame : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebResetLeaderboard
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebResetLeaderboard : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, int32_t LeaderboardID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebSetLeaderboardScore
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebSetLeaderboardScore : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, int32_t LeaderboardID, const struct FUWorksSteamID& SteamID, int32_t score, const class FString& ScoreMethod, TArray<unsigned char> Details);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebAdjustAgreement
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebAdjustAgreement : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& AgreementID, int32_t AppID, const class FString& NextProcessDate);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebCancelAgreement
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebCancelAgreement : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& AgreementID, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebFinalizeTxn
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebFinalizeTxn : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& OrderID, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetReport
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetReport : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& Time, UWorksWeb_EUWorksReportType Type, int32_t MaxResults);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetUserAgreementInfo
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetUserAgreementInfo : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetUserInfo
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetUserInfo : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& IPAddress);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebInitTxn
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebInitTxn : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& OrderID, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t ItemCount, const class FString& Language, const class FString& Currency, TArray<struct FUWorksSteamItemDef> itemIds, TArray<int32_t> Quantities, TArray<int32_t> Amounts, TArray<class FString> Descriptions, TArray<class FString> Categories, TArray<int32_t> AssociatedBundles, TArray<class FString> BillingTypes, TArray<class FString> StartDates, TArray<class FString> EndDates, TArray<class FString> Periods, TArray<int32_t> Frequencies, TArray<class FString> RecurringAmounts, int32_t BundleCount, TArray<int32_t> BundleIDs, TArray<int32_t> BundleQuantities, TArray<class FString> BundleDescriptions, TArray<class FString> BundleCategories, UWorksWeb_EUWorksUserSession UserSession, const class FString& IPAddress);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebProcessAgreement
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebProcessAgreement : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& OrderID, const struct FUWorksSteamID& SteamID, const class FString& AgreementID, int32_t AppID, int32_t Amount, const class FString& Currency);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebQueryTxn
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebQueryTxn : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& OrderID, const class FString& TransID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebRefundTxn
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebRefundTxn : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& OrderID, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetNewsForApp
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetNewsForApp : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, const class FString& Feeds);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetNewsForAppAuthed
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetNewsForAppAuthed : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, const class FString& Feeds);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebRecordOfflinePlaytime
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebRecordOfflinePlaytime : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamID, const class FString& Ticket, const struct FUWorksPlaySessions& PlaySessions);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetRecentlyPlayedGames
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetRecentlyPlayedGames : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t Count);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetOwnedGames
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetOwnedGames : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> AppIDsFilter);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetSteamLevel
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetSteamLevel : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetBadges
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetBadges : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetCommunityBadgeProgress
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetCommunityBadgeProgress : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t BadgeID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebIsPlayingSharedGame
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebIsPlayingSharedGame : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppIDPlaying);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebQueryFiles
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebQueryFiles : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, unsigned char queryType, int32_t Page, int32_t CreatorAppID, int32_t AppID, TArray<class FString> requiredTags, TArray<class FString> excludedTags, TArray<class FString> RequiredFlags, TArray<class FString> OmittedFlags, const class FString& searchText, unsigned char fileType, const struct FUWorksPublishedFileID& ChildPublishedFileID, int32_t Days, bool bIncludeRecentVotesOnly, const struct FUWorksRequiredKVTags& RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32_t ReturnPlaytimeStats, int32_t NumPerPage, bool bMatchAllTags, int32_t CacheMaxAgeSeconds, int32_t Language, bool bReturnMetaData);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebSetDeveloperMetadata
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebSetDeveloperMetadata : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int32_t AppID, const class FString& MetaData);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebUpdateTags
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebUpdateTags : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int32_t AppID, TArray<class FString> AddTags, TArray<class FString> RemoveTags);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebRankedByPublicationOrder
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebRankedByPublicationOrder : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, TArray<class FString> tags, TArray<class FString> UserTags);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebRankedByTrend
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebRankedByTrend : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, int32_t Days, TArray<class FString> tags, TArray<class FString> UserTags);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebRankedByVote
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebRankedByVote : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, TArray<class FString> tags, TArray<class FString> UserTags);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebResultSetSummary
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebResultSetSummary : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, TArray<class FString> tags, TArray<class FString> UserTags);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebItemVoteSummary
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebItemVoteSummary : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebUserVoteSummary
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebUserVoteSummary : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebEnumerateUserPublishedFiles
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebEnumerateUserPublishedFiles : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebEnumerateUserSubscribedFiles
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebEnumerateUserSubscribedFiles : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t ListType);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetCollectionDetails
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetCollectionDetails : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t CollectionCount, TArray<int32_t> PublishedFileIDs);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetPublishedFileDetails
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetPublishedFileDetails : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t ItemCount, TArray<int32_t> PublishedFileIDs);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetUGCFileDetails
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetUGCFileDetails : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t UGCID, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebSetUGCUsedByGC
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebSetUGCUsedByGC : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t UGCID, int32_t AppID, bool bUsed);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebSubscribePublishedFile
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebSubscribePublishedFile : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t PublishedFileID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebUnsubscribePublishedFile
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebUnsubscribePublishedFile : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t PublishedFileID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebCheckAppOwnership
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebCheckAppOwnership : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetAppPriceInfo
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetAppPriceInfo : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& AppIDs);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetFriendList
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetFriendList : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& Relationship);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetPlayerBans
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetPlayerBans : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& SteamIDs);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetPlayerSummaries
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetPlayerSummaries : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& SteamIDs);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetPublisherAppOwnership
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetPublisherAppOwnership : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetPublisherAppOwnershipChanges
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetPublisherAppOwnershipChanges : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& PackageRowVersion, const class FString& CDKeyRowVersion);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetUserGroupList
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetUserGroupList : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGrantPackage
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGrantPackage : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t PackageID, const class FString& IPAddress, const class FString& ThirdPartyKey, int32_t ThirdPartyAppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebResolveVanityURL
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebResolveVanityURL : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const class FString& VanityURL, unsigned char URLType);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebAuthenticateUser
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebAuthenticateUser : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebAuthenticateUserTicket
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebAuthenticateUserTicket : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& Ticket);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetGlobalAchievementPercentagesForApp
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetGlobalAchievementPercentagesForApp : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksGameID& GameID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetGlobalStatsForGame
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetGlobalStatsForGame : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t AppID, int32_t Count, TArray<class FString> Name, int32_t StartDate, int32_t EndDate);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetNumberOfCurrentPlayers
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetNumberOfCurrentPlayers : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetPlayerAchievements
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetPlayerAchievements : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& Language);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetSchemaForGame
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetSchemaForGame : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& Language);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetUserStatsForGame
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetUserStatsForGame : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebSetUserStatsForGame
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebSetUserStatsForGame : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t Count, TArray<class FString> Name, TArray<int32_t> Value);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebSetItemPaymentRules
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebSetItemPaymentRules : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, int32_t GameItemID, const struct FUWorksAssociatedWorkshopFiles& AssociatedWorkshopFiles, const struct FUWorksPartnerAccounts& PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetFinalizedContributors
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetFinalizedContributors : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, int32_t GameItemID);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebGetItemDailyRevenue
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebGetItemDailyRevenue : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const class FString& itemId, int32_t DateStart, int32_t DateEnd);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UWorksRequestWebPopulateItemDescriptions
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UUWorksRequestWebPopulateItemDescriptions : public UUWorksRequestWeb
	{
	public:
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00B0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Key, int32_t AppID, const struct FUWorksLanguages& Languages);
		void GetOutput(class FString* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetAppBetasNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetAppBetasNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetAppBetasNode* STATIC_GetAppBetasNode(const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetAppBuildsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetAppBuildsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetAppBuildsNode* STATIC_GetAppBuildsNode(const class FString& Key, int32_t AppID, int32_t Count);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetAppDepotVersionsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetAppDepotVersionsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetAppDepotVersionsNode* STATIC_GetAppDepotVersionsNode(const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetAppListNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetAppListNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetAppListNode* STATIC_GetAppListNode();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetCheatingReportsListNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetCheatingReportsListNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetCheatingReportsListNode* STATIC_GetCheatingReportsListNode(const class FString& Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, const class FString& ReportIDMin);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetPlayersBannedNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetPlayersBannedNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetPlayersBannedNode* STATIC_GetPlayersBannedNode(const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetServerListNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetServerListNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetServerListNode* STATIC_GetServerListNode(const class FString& Key, const class FString& Filter, int32_t Limit);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetServersAtAddressNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetServersAtAddressNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetServersAtAddressNode* STATIC_GetServersAtAddressNode(const class FString& Addr);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.SetAppBuildLiveNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USetAppBuildLiveNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USetAppBuildLiveNode* STATIC_SetAppBuildLiveNode(const class FString& Key, int32_t AppID, int32_t BuildID, const class FString& BetaKey, const class FString& Description);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UpToDateCheckNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UUpToDateCheckNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UUpToDateCheckNode* STATIC_UpToDateCheckNode(int32_t AppID, int32_t Version);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.PostGameDataFrameNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UPostGameDataFrameNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UPostGameDataFrameNode* STATIC_PostGameDataFrameNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& BroadcastID, const class FString& FrameData);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ReportPlayerCheatingNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UReportPlayerCheatingNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UReportPlayerCheatingNode* STATIC_ReportPlayerCheatingNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const struct FUWorksSteamID& SteamIDReporter, int32_t AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.RequestPlayerGameBanNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URequestPlayerGameBanNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URequestPlayerGameBanNode* STATIC_RequestPlayerGameBanNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const struct FUWorksSteamID& ReportID, const class FString& CheatDescription, int32_t Duration, bool bDelayBan);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.RemovePlayerGameBanNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URemovePlayerGameBanNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URemovePlayerGameBanNode* STATIC_RemovePlayerGameBanNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetCheatingReportsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetCheatingReportsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetCheatingReportsNode* STATIC_GetCheatingReportsNode(const class FString& Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, const class FString& ReportIDMin, bool bIncludeReports, bool bIncludeBans, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.RequestVacStatusForUserNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URequestVacStatusForUserNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URequestVacStatusForUserNode* STATIC_RequestVacStatusForUserNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& SessionId);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.StartSecureMultiplayerSessionNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UStartSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UStartSecureMultiplayerSessionNode* STATIC_StartSecureMultiplayerSessionNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.EndSecureMultiplayerSessionNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UEndSecureMultiplayerSessionNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UEndSecureMultiplayerSessionNode* STATIC_EndSecureMultiplayerSessionNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& SessionId);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ReportCheatDataNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UReportCheatDataNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UReportCheatDataNode* STATIC_ReportCheatDataNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& PathAndFileName, const class FString& WebCheatURL, const class FString& TimeNow, const class FString& TimeStarted, const class FString& TimeStopped, const class FString& CheatName, int32_t GameProcessID, int32_t CheatProcessID, const class FString& CheatParamA, const class FString& CheatParamB);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ReportAbuseNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UReportAbuseNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UReportAbuseNode* STATIC_ReportAbuseNode(const class FString& Key, const struct FUWorksSteamID& SteamIDActor, const struct FUWorksSteamID& SteamIDTarget, int32_t AppID, unsigned char AbuseType, unsigned char ContentType, const class FString& Description, const class FString& GID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetTradeHistoryNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetTradeHistoryNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetTradeHistoryNode* STATIC_GetTradeHistoryNode(const class FString& Key, int32_t MaxTrades, int32_t StartAfterTime, const class FString& StartAfterTradeID, bool bNavigatingBack, bool bGetDescription, const class FString& Language, bool bIncludeFailed, bool bIncludeTotal);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.FlushInventoryCacheNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFlushInventoryCacheNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UFlushInventoryCacheNode* STATIC_FlushInventoryCacheNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& ContextID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.FlushAssetAppearanceCacheNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFlushAssetAppearanceCacheNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UFlushAssetAppearanceCacheNode* STATIC_FlushAssetAppearanceCacheNode(const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.FlushContextCacheNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFlushContextCacheNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UFlushContextCacheNode* STATIC_FlushContextCacheNode(const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetTradeOffersNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetTradeOffersNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetTradeOffersNode* STATIC_GetTradeOffersNode(const class FString& Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescription, const class FString& Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetTradeOfferNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetTradeOfferNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetTradeOfferNode* STATIC_GetTradeOfferNode(const class FString& Key, const class FString& TradeOfferID, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetTradeOffersSummaryNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetTradeOffersSummaryNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetTradeOffersSummaryNode* STATIC_GetTradeOffersSummaryNode(const class FString& Key, int32_t TimeLastVisit);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.DeclineTradeOfferNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDeclineTradeOfferNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UDeclineTradeOfferNode* STATIC_DeclineTradeOfferNode(const class FString& Key, const class FString& TradeOfferID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.CancelTradeOfferNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCancelTradeOfferNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UCancelTradeOfferNode* STATIC_CancelTradeOfferNode(const class FString& Key, const class FString& TradeOfferID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetMarketEligibilityNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetMarketEligibilityNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetMarketEligibilityNode* STATIC_GetMarketEligibilityNode(const class FString& Key, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.CancelAppListingsForUserNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCancelAppListingsForUserNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UCancelAppListingsForUserNode* STATIC_CancelAppListingsForUserNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, bool bSynchronous);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetAssetIDNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetAssetIDNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetAssetIDNode* STATIC_GetAssetIDNode(const class FString& Key, int32_t AppID, const class FString& ListingID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetPopularNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetPopularNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetPopularNode* STATIC_GetPopularNode(const class FString& Key, const class FString& Language, int32_t Rows, int32_t Start, int32_t FilterAppID, int32_t ECurrency);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.CanTradeNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCanTradeNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UCanTradeNode* STATIC_CanTradeNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamID& TargetID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.FinalizeAssetTransactionNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFinalizeAssetTransactionNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UFinalizeAssetTransactionNode* STATIC_FinalizeAssetTransactionNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& TxnID, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetAssetClassInfoNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetAssetClassInfoNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetAssetClassInfoNode* STATIC_GetAssetClassInfoNode(const class FString& Key, int32_t AppID, int32_t ClassCount, const class FString& ClassID0, const class FString& Language, const class FString& InstanceID0);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetAssetPricesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetAssetPricesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetAssetPricesNode* STATIC_GetAssetPricesNode(const class FString& Key, int32_t AppID, const class FString& Currency, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetExportedAssetsForUserNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetExportedAssetsForUserNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetExportedAssetsForUserNode* STATIC_GetExportedAssetsForUserNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& ContextID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetMarketPricesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetMarketPricesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetMarketPricesNode* STATIC_GetMarketPricesNode(const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.StartAssetTransactionNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UStartAssetTransactionNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UStartAssetTransactionNode* STATIC_StartAssetTransactionNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& AssetID0, int32_t AssetQuantity0, const class FString& Currency, const class FString& Language, const class FString& IPAddress, const class FString& Referrer, bool bClientAuth);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.StartTradeNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UStartTradeNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UStartTradeNode* STATIC_StartTradeNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& PartyA, const struct FUWorksSteamID& PartyB);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetHistoryCommandDetailsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetHistoryCommandDetailsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetHistoryCommandDetailsNode* STATIC_GetHistoryCommandDetailsNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& Command, const class FString& ContextID, const class FString& Arguments);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetUserHistoryNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetUserHistoryNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetUserHistoryNode* STATIC_GetUserHistoryNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& ContextID, int32_t StartTime, int32_t EndTime);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.HistoryExecuteCommandsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UHistoryExecuteCommandsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UHistoryExecuteCommandsNode* STATIC_HistoryExecuteCommandsNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const class FString& ContextID, const class FString& ActorId);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.SupportGetAssetHistoryNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USupportGetAssetHistoryNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USupportGetAssetHistoryNode* STATIC_SupportGetAssetHistoryNode(const class FString& Key, int32_t AppID, const class FString& AssetID, const class FString& ContextID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.CreateSessionNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCreateSessionNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UCreateSessionNode* STATIC_CreateSessionNode(const class FString& Key, int32_t AppID, const class FString& Context, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UpdateSessionNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UUpdateSessionNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UUpdateSessionNode* STATIC_UpdateSessionNode(const class FString& Key, const class FString& SessionId, int32_t AppID, const struct FUWorksTitle& title, const struct FUWorksUsers& Users, const struct FUWorksSteamID& SteamID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.EnumerateSessionsForAppNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UEnumerateSessionsForAppNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UEnumerateSessionsForAppNode* STATIC_EnumerateSessionsForAppNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetSessionDetailsForAppNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetSessionDetailsForAppNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetSessionDetailsForAppNode* STATIC_GetSessionDetailsForAppNode(const class FString& Key, const struct FUWorksSessions& Sessions, int32_t AppID, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.RequestNotificationsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URequestNotificationsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URequestNotificationsNode* STATIC_RequestNotificationsNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.DeleteSessionNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDeleteSessionNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UDeleteSessionNode* STATIC_DeleteSessionNode(const class FString& Key, const class FString& SessionId, int32_t AppID, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.DeleteSessionBatchNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDeleteSessionBatchNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UDeleteSessionBatchNode* STATIC_DeleteSessionBatchNode(const class FString& Key, const class FString& SessionId, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetAccountListNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetAccountListNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetAccountListNode* STATIC_GetAccountListNode(const class FString& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.CreateAccountNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCreateAccountNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UCreateAccountNode* STATIC_CreateAccountNode(const class FString& Key, int32_t AppID, const class FString& Memo);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.SetMemoNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USetMemoNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USetMemoNode* STATIC_SetMemoNode(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& Memo);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ResetLoginTokenNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UResetLoginTokenNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UResetLoginTokenNode* STATIC_ResetLoginTokenNode(const class FString& Key, const struct FUWorksSteamID& SteamID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.DeleteAccountNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDeleteAccountNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UDeleteAccountNode* STATIC_DeleteAccountNode(const class FString& Key, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetAccountPublicInfoNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetAccountPublicInfoNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetAccountPublicInfoNode* STATIC_GetAccountPublicInfoNode(const class FString& Key, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.QueryLoginTokenNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UQueryLoginTokenNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UQueryLoginTokenNode* STATIC_QueryLoginTokenNode(const class FString& Key, const class FString& LoginToken);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.SetBanStatusNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USetBanStatusNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USetBanStatusNode* STATIC_SetBanStatusNode(const class FString& Key, const struct FUWorksSteamID& SteamID, bool bBanned, int32_t BanSeconds);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetServerSteamIDsByIPNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetServerSteamIDsByIPNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetServerSteamIDsByIPNode* STATIC_GetServerSteamIDsByIPNode(const class FString& Key, const class FString& ServerIPs);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetServerIPsBySteamIDNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetServerIPsBySteamIDNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetServerIPsBySteamIDNode* STATIC_GetServerIPsBySteamIDNode(const class FString& Key, const struct FUWorksSteamID& ServerSteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetGameServerPlayerStatsForGameNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetGameServerPlayerStatsForGameNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetGameServerPlayerStatsForGameNode* STATIC_GetGameServerPlayerStatsForGameNode(const class FString& Key, const struct FUWorksGameID& GameID, int32_t AppID, const class FString& RangeStart, const class FString& RangeEnd, int32_t MaxResults);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.AddItemNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAddItemNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UAddItemNode* STATIC_AddItemNode(const class FString& Key, int32_t AppID, TArray<struct FUWorksSteamItemDef> ItemDefID, const class FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const class FString& RequestID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.AddPromoItemNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAddPromoItemNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UAddPromoItemNode* STATIC_AddPromoItemNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamItemDef& ItemDefID, const class FString& ItemPropsJSON, const struct FUWorksSteamID& SteamID, bool bNotify, const class FString& RequestID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ConsumeItemNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UConsumeItemNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UConsumeItemNode* STATIC_ConsumeItemNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamItemInstanceID& itemId, int32_t Quantity, const struct FUWorksSteamID& SteamID, const class FString& RequestID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ExchangeItemNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UExchangeItemNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UExchangeItemNode* STATIC_ExchangeItemNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemInstanceID> MaterialsItemID, TArray<int32_t> MaterialsQuantity, const struct FUWorksSteamItemDef& OutputItemDefID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetInventoryNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetInventoryNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetInventoryNode* STATIC_GetInventoryNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetItemDefsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetItemDefsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetItemDefsNode* STATIC_GetItemDefsNode(const class FString& Key, int32_t AppID, const class FString& ModifiedSince, TArray<struct FUWorksSteamItemDef> ItemDefIDs, TArray<struct FUWorksSteamItemDef> WorkshopIDs, int32_t CacheMaxAgeSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetPriceSheetNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetPriceSheetNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetPriceSheetNode* STATIC_GetPriceSheetNode(const class FString& Key, int32_t ECurrency);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ConsolidateNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UConsolidateNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UConsolidateNode* STATIC_ConsolidateNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef> ItemDefID, bool bForce);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetQuantityNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetQuantityNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetQuantityNode* STATIC_GetQuantityNode(const class FString& Key, int32_t AppID, const struct FUWorksSteamID& SteamID, const struct FUWorksSteamItemDef& ItemDefID, bool bForce);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.DeleteLeaderboardNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UDeleteLeaderboardNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UDeleteLeaderboardNode* STATIC_DeleteLeaderboardNode(const class FString& Key, int32_t AppID, const class FString& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.FindOrCreateLeaderboardNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UFindOrCreateLeaderboardNode* STATIC_FindOrCreateLeaderboardNode(const class FString& Key, int32_t AppID, const class FString& Name, const class FString& SortMethod, const class FString& DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetLeaderboardEntriesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetLeaderboardEntriesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetLeaderboardEntriesNode* STATIC_GetLeaderboardEntriesNode(const class FString& Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardID, int32_t DataRequest, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetLeaderboardsForGameNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetLeaderboardsForGameNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetLeaderboardsForGameNode* STATIC_GetLeaderboardsForGameNode(const class FString& Key, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ResetLeaderboardNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UResetLeaderboardNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UResetLeaderboardNode* STATIC_ResetLeaderboardNode(const class FString& Key, int32_t AppID, int32_t LeaderboardID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.SetLeaderboardScoreNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USetLeaderboardScoreNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USetLeaderboardScoreNode* STATIC_SetLeaderboardScoreNode(const class FString& Key, int32_t AppID, int32_t LeaderboardID, const struct FUWorksSteamID& SteamID, int32_t score, const class FString& ScoreMethod, TArray<unsigned char> Details);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.AdjustAgreementNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAdjustAgreementNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UAdjustAgreementNode* STATIC_AdjustAgreementNode(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& AgreementID, int32_t AppID, const class FString& NextProcessDate);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.CancelAgreementNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCancelAgreementNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UCancelAgreementNode* STATIC_CancelAgreementNode(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& AgreementID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.FinalizeTxnNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFinalizeTxnNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UFinalizeTxnNode* STATIC_FinalizeTxnNode(const class FString& Key, const class FString& OrderID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetReportNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetReportNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetReportNode* STATIC_GetReportNode(const class FString& Key, int32_t AppID, const class FString& Time, UWorksWeb_EUWorksReportType Type, int32_t MaxResults);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetUserAgreementInfoNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetUserAgreementInfoNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetUserAgreementInfoNode* STATIC_GetUserAgreementInfoNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetUserInfoNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetUserInfoNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetUserInfoNode* STATIC_GetUserInfoNode(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& IPAddress);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.InitTxnNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UInitTxnNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UInitTxnNode* STATIC_InitTxnNode(const class FString& Key, const class FString& OrderID, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t ItemCount, const class FString& Language, const class FString& Currency, TArray<struct FUWorksSteamItemDef> itemIds, TArray<int32_t> Quantities, TArray<int32_t> Amounts, TArray<class FString> Descriptions, TArray<class FString> Categories, TArray<int32_t> AssociatedBundles, TArray<class FString> BillingTypes, TArray<class FString> StartDates, TArray<class FString> EndDates, TArray<class FString> Periods, TArray<int32_t> Frequencies, TArray<class FString> RecurringAmounts, int32_t BundleCount, TArray<int32_t> BundleIDs, TArray<int32_t> BundleQuantities, TArray<class FString> BundleDescriptions, TArray<class FString> BundleCategories, UWorksWeb_EUWorksUserSession UserSession, const class FString& IPAddress);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ProcessAgreementNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UProcessAgreementNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UProcessAgreementNode* STATIC_ProcessAgreementNode(const class FString& Key, const class FString& OrderID, const struct FUWorksSteamID& SteamID, const class FString& AgreementID, int32_t AppID, int32_t Amount, const class FString& Currency);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.QueryTxnNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UQueryTxnNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UQueryTxnNode* STATIC_QueryTxnNode(const class FString& Key, int32_t AppID, const class FString& OrderID, const class FString& TransID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.RefundTxnNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URefundTxnNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URefundTxnNode* STATIC_RefundTxnNode(const class FString& Key, const class FString& OrderID, int32_t AppID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetNewsForAppNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetNewsForAppNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetNewsForAppNode* STATIC_GetNewsForAppNode(int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, const class FString& Feeds);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetNewsForAppAuthedNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetNewsForAppAuthedNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetNewsForAppAuthedNode* STATIC_GetNewsForAppAuthedNode(const class FString& Key, int32_t AppID, int32_t MaxLength, int32_t EndDate, int32_t Count, const class FString& Feeds);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.RecordOfflinePlaytimeNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URecordOfflinePlaytimeNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URecordOfflinePlaytimeNode* STATIC_RecordOfflinePlaytimeNode(const struct FUWorksSteamID& SteamID, const class FString& Ticket, const struct FUWorksPlaySessions& PlaySessions);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetRecentlyPlayedGamesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetRecentlyPlayedGamesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetRecentlyPlayedGamesNode* STATIC_GetRecentlyPlayedGamesNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t Count);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetOwnedGamesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetOwnedGamesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetOwnedGamesNode* STATIC_GetOwnedGamesNode(const class FString& Key, const struct FUWorksSteamID& SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> AppIDsFilter);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetSteamLevelNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetSteamLevelNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetSteamLevelNode* STATIC_GetSteamLevelNode(const class FString& Key, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetBadgesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetBadgesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetBadgesNode* STATIC_GetBadgesNode(const class FString& Key, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetCommunityBadgeProgressNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetCommunityBadgeProgressNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetCommunityBadgeProgressNode* STATIC_GetCommunityBadgeProgressNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t BadgeID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.IsPlayingSharedGameNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UIsPlayingSharedGameNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UIsPlayingSharedGameNode* STATIC_IsPlayingSharedGameNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppIDPlaying);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.QueryFilesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UQueryFilesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UQueryFilesNode* STATIC_QueryFilesNode(const class FString& Key, unsigned char queryType, int32_t Page, int32_t CreatorAppID, int32_t AppID, TArray<class FString> requiredTags, TArray<class FString> excludedTags, TArray<class FString> RequiredFlags, TArray<class FString> OmittedFlags, const class FString& searchText, unsigned char fileType, const struct FUWorksPublishedFileID& ChildPublishedFileID, int32_t Days, bool bIncludeRecentVotesOnly, const struct FUWorksRequiredKVTags& RequiredKVTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKVTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, int32_t ReturnPlaytimeStats, int32_t NumPerPage, bool bMatchAllTags, int32_t CacheMaxAgeSeconds, int32_t Language, bool bReturnMetaData);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.SetDeveloperMetadataNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USetDeveloperMetadataNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USetDeveloperMetadataNode* STATIC_SetDeveloperMetadataNode(const class FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int32_t AppID, const class FString& MetaData);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UpdateTagsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UUpdateTagsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UUpdateTagsNode* STATIC_UpdateTagsNode(const class FString& Key, const struct FUWorksPublishedFileID& PublishedFileID, int32_t AppID, TArray<class FString> AddTags, TArray<class FString> RemoveTags);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.RankedByPublicationOrderNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URankedByPublicationOrderNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URankedByPublicationOrderNode* STATIC_RankedByPublicationOrderNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, TArray<class FString> tags, TArray<class FString> UserTags);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.RankedByTrendNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URankedByTrendNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URankedByTrendNode* STATIC_RankedByTrendNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, int32_t Days, TArray<class FString> tags, TArray<class FString> UserTags);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.RankedByVoteNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URankedByVoteNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class URankedByVoteNode* STATIC_RankedByVoteNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t StartIndex, int32_t Count, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, TArray<class FString> tags, TArray<class FString> UserTags);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ResultSetSummaryNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UResultSetSummaryNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UResultSetSummaryNode* STATIC_ResultSetSummaryNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t TagCount, int32_t UserTagCount, bool bHasAppAdminAccess, int32_t fileType, TArray<class FString> tags, TArray<class FString> UserTags);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ItemVoteSummaryNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UItemVoteSummaryNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UItemVoteSummaryNode* STATIC_ItemVoteSummaryNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UserVoteSummaryNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UUserVoteSummaryNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UUserVoteSummaryNode* STATIC_UserVoteSummaryNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t Count, TArray<int32_t> PublishedFileIDs);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.EnumerateUserPublishedFilesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UEnumerateUserPublishedFilesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UEnumerateUserPublishedFilesNode* STATIC_EnumerateUserPublishedFilesNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.EnumerateUserSubscribedFilesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UEnumerateUserSubscribedFilesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UEnumerateUserSubscribedFilesNode* STATIC_EnumerateUserSubscribedFilesNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t ListType);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetCollectionDetailsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetCollectionDetailsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetCollectionDetailsNode* STATIC_GetCollectionDetailsNode(int32_t CollectionCount, TArray<int32_t> PublishedFileIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetPublishedFileDetailsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetPublishedFileDetailsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetPublishedFileDetailsNode* STATIC_GetPublishedFileDetailsNode(int32_t ItemCount, TArray<int32_t> PublishedFileIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetUGCFileDetailsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetUGCFileDetailsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetUGCFileDetailsNode* STATIC_GetUGCFileDetailsNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t UGCID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.SetUGCUsedByGCNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USetUGCUsedByGCNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USetUGCUsedByGCNode* STATIC_SetUGCUsedByGCNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t UGCID, int32_t AppID, bool bUsed);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.SubscribePublishedFileNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USubscribePublishedFileNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USubscribePublishedFileNode* STATIC_SubscribePublishedFileNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t PublishedFileID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.UnsubscribePublishedFileNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UUnsubscribePublishedFileNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UUnsubscribePublishedFileNode* STATIC_UnsubscribePublishedFileNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t PublishedFileID);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.CheckAppOwnershipNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCheckAppOwnershipNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UCheckAppOwnershipNode* STATIC_CheckAppOwnershipNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetAppPriceInfoNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetAppPriceInfoNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetAppPriceInfoNode* STATIC_GetAppPriceInfoNode(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& AppIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetFriendListNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetFriendListNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetFriendListNode* STATIC_GetFriendListNode(const class FString& Key, const struct FUWorksSteamID& SteamID, const class FString& Relationship);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetPlayerBansNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetPlayerBansNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetPlayerBansNode* STATIC_GetPlayerBansNode(const class FString& Key, const class FString& SteamIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetPlayerSummariesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetPlayerSummariesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetPlayerSummariesNode* STATIC_GetPlayerSummariesNode(const class FString& Key, const class FString& SteamIDs);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetPublisherAppOwnershipNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetPublisherAppOwnershipNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetPublisherAppOwnershipNode* STATIC_GetPublisherAppOwnershipNode(const class FString& Key, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetPublisherAppOwnershipChangesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetPublisherAppOwnershipChangesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetPublisherAppOwnershipChangesNode* STATIC_GetPublisherAppOwnershipChangesNode(const class FString& Key, const class FString& PackageRowVersion, const class FString& CDKeyRowVersion);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetUserGroupListNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetUserGroupListNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetUserGroupListNode* STATIC_GetUserGroupListNode(const class FString& Key, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GrantPackageNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGrantPackageNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGrantPackageNode* STATIC_GrantPackageNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t PackageID, const class FString& IPAddress, const class FString& ThirdPartyKey, int32_t ThirdPartyAppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.ResolveVanityURLNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UResolveVanityURLNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UResolveVanityURLNode* STATIC_ResolveVanityURLNode(const class FString& Key, const class FString& VanityURL, unsigned char URLType);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.AuthenticateUserNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAuthenticateUserNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UAuthenticateUserNode* STATIC_AuthenticateUserNode(const struct FUWorksSteamID& SteamID, TArray<unsigned char> SessionKey, TArray<unsigned char> EncryptedLoginKey);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.AuthenticateUserTicketNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAuthenticateUserTicketNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UAuthenticateUserTicketNode* STATIC_AuthenticateUserTicketNode(const class FString& Key, int32_t AppID, const class FString& Ticket);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetGlobalAchievementPercentagesForAppNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetGlobalAchievementPercentagesForAppNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetGlobalAchievementPercentagesForAppNode* STATIC_GetGlobalAchievementPercentagesForAppNode(const struct FUWorksGameID& GameID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetGlobalStatsForGameNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetGlobalStatsForGameNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetGlobalStatsForGameNode* STATIC_GetGlobalStatsForGameNode(int32_t AppID, int32_t Count, TArray<class FString> Name, int32_t StartDate, int32_t EndDate);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetNumberOfCurrentPlayersNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetNumberOfCurrentPlayersNode* STATIC_GetNumberOfCurrentPlayersNode(int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetPlayerAchievementsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetPlayerAchievementsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetPlayerAchievementsNode* STATIC_GetPlayerAchievementsNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetSchemaForGameNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetSchemaForGameNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetSchemaForGameNode* STATIC_GetSchemaForGameNode(const class FString& Key, int32_t AppID, const class FString& Language);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetUserStatsForGameNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetUserStatsForGameNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetUserStatsForGameNode* STATIC_GetUserStatsForGameNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.SetUserStatsForGameNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USetUserStatsForGameNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USetUserStatsForGameNode* STATIC_SetUserStatsForGameNode(const class FString& Key, const struct FUWorksSteamID& SteamID, int32_t AppID, int32_t Count, TArray<class FString> Name, TArray<int32_t> Value);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.SetItemPaymentRulesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class USetItemPaymentRulesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class USetItemPaymentRulesNode* STATIC_SetItemPaymentRulesNode(const class FString& Key, int32_t AppID, int32_t GameItemID, const struct FUWorksAssociatedWorkshopFiles& AssociatedWorkshopFiles, const struct FUWorksPartnerAccounts& PartnerAccounts, bool bMakeWorkshopFilesSubscribable, bool bValidateOnly);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetFinalizedContributorsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetFinalizedContributorsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetFinalizedContributorsNode* STATIC_GetFinalizedContributorsNode(const class FString& Key, int32_t AppID, int32_t GameItemID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.GetItemDailyRevenueNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGetItemDailyRevenueNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		class UGetItemDailyRevenueNode* STATIC_GetItemDailyRevenueNode(const class FString& Key, int32_t AppID, const class FString& itemId, int32_t DateStart, int32_t DateEnd);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksWeb.PopulateItemDescriptionsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UPopulateItemDescriptionsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UPopulateItemDescriptionsNode* STATIC_PopulateItemDescriptionsNode(const class FString& Key, int32_t AppID, const struct FUWorksLanguages& Languages);
		void OnRequestCompleted(bool bSuccessful, const class FString& Content);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
