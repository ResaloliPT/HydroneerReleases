#ifndef UE4SS_SDK_SteamCoreWeb_HPP
#define UE4SS_SDK_SteamCoreWeb_HPP

#include "SteamCoreWeb_enums.hpp"

class USteamCoreWeb : public UObject
{
};

class USteamCoreWebSubsystem : public UGameInstanceSubsystem
{
};

class USteamCoreWebAsyncAction : public UBlueprintAsyncActionBase
{
    FSteamCoreWebAsyncActionOnCallback OnCallback;
    void OnSteamCoreWebAsyncCallback(FString Data, bool bWasSuccessful);

    void HandleCallback(FString Data, bool bWasSuccessful);
};

class USteamCoreWebSettings : public UDeveloperSettings
{
    float AsyncTaskTimeout;
    int32 DisabledSubsystems;
    bool bDebugging;
    bool bDevMode;
    FString Key;
    int32 AppID;
    FString DevSteamID;
    bool bSandboxMode;

};

struct FSteamCoreJson
{
    FString Key;
    FString String;
    int32 Number;
    bool bool;
    ESteamValueType Type;

};

class USteamWebUtilities : public UBlueprintFunctionLibrary
{

    bool ParseJson(FString JsonString, TArray<FSteamCoreJson>& Data);
    FString GetProjectKey();
    int32 GetProjectAppID();
    FString GetDevSteamID();
    void FindJsonStrings(FString JsonString, FString Key, TArray<FString>& Values, ESteamJsonResult& Result);
    void FindJsonString(FString JsonString, FString Key, FString& Value, ESteamJsonResult& Result);
    void FindJsonNumbers(FString JsonString, FString Key, TArray<int32>& Values, ESteamJsonResult& Result);
    void FindJsonNumber(FString JsonString, FString Key, int32& Value, ESteamJsonResult& Result);
    void FindJsonBools(FString JsonString, FString Key, TArray<bool>& bValues, ESteamJsonResult& Result);
    void FindJsonBool(FString JsonString, FString Key, bool& bValue, ESteamJsonResult& Result);
};

class UWebApps : public USteamCoreWebSubsystem
{

    void UpToDateCheck(const FUpToDateCheckCallback& Callback, int32 AppID, int32 Version);
    void SetAppBuildLive(const FSetAppBuildLiveCallback& Callback, FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description);
    void GetServersAtAddress(const FGetServersAtAddressCallback& Callback, FString Addr);
    void GetServerList(const FGetServerListCallback& Callback, FString Key, FString Filter, int32 Limit);
    void GetPlayersBanned(const FGetPlayersBannedCallback& Callback, FString Key, int32 AppID);
    void GetCheatingReports(const FGetCheatingReportsCallback& Callback, FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin);
    void GetAppList(const FGetAppListCallback& Callback, FString Key);
    void GetAppDepotVersions(const FGetAppDepotVersionsCallback& Callback, FString Key, int32 AppID);
    void GetAppBuilds(const FGetAppBuildsCallback& Callback, FString Key, int32 AppID, int32 Count);
    void GetAppBetas(const FGetAppBetasCallback& Callback, FString Key, int32 AppID);
};

class USteamCoreAppsAsyncActionGetAppBetas : public USteamCoreWebAsyncAction
{

    class USteamCoreAppsAsyncActionGetAppBetas* GetAppBetasAsync(class UObject* WorldContextObject, FString Key, int32 AppID);
};

class USteamCoreAppsAsyncActionGetAppBuilds : public USteamCoreWebAsyncAction
{

    class USteamCoreAppsAsyncActionGetAppBuilds* GetAppBuildsAsync(class UObject* WorldContextObject, FString Key, int32 AppID, int32 Count);
};

class USteamCoreAppsAsyncActionGetAppDepotVersions : public USteamCoreWebAsyncAction
{

    class USteamCoreAppsAsyncActionGetAppDepotVersions* GetAppDepotVersionsAsync(class UObject* WorldContextObject, FString Key, int32 AppID);
};

class USteamCoreAppsAsyncActionGetAppList : public USteamCoreWebAsyncAction
{

    class USteamCoreAppsAsyncActionGetAppList* GetAppListAsync(class UObject* WorldContextObject, FString Key);
};

class USteamCoreAppsAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{

    class USteamCoreAppsAsyncActionGetCheatingReports* GetCheatingReportsAsync(class UObject* WorldContextObject, FString Key, int32 AppID, int32 TimeBegin, int32 TimeEnd, bool bIncludeReports, bool bIncludeBans, int32 ReportidMin);
};

class USteamCoreAppsAsyncActionGetPlayersBanned : public USteamCoreWebAsyncAction
{

    class USteamCoreAppsAsyncActionGetPlayersBanned* GetPlayersBannedAsync(class UObject* WorldContextObject, FString Key, int32 AppID);
};

class USteamCoreAppsAsyncActionGetServerList : public USteamCoreWebAsyncAction
{

    class USteamCoreAppsAsyncActionGetServerList* GetServerListAsync(class UObject* WorldContextObject, FString Key, FString Filter, int32 Limit);
};

class USteamCoreAppsAsyncActionGetServersAtAddress : public USteamCoreWebAsyncAction
{

    class USteamCoreAppsAsyncActionGetServersAtAddress* GetServersAtAddressAsync(class UObject* WorldContextObject, FString Addr);
};

class USteamCoreAppsAsyncActionSetAppBuildLive : public USteamCoreWebAsyncAction
{

    class USteamCoreAppsAsyncActionSetAppBuildLive* SetAppBuildLiveAsync(class UObject* WorldContextObject, FString Key, int32 AppID, int32 BuildID, FString BetaKey, FString Description);
};

class USteamCoreAppsAsyncActionUpToDateCheck : public USteamCoreWebAsyncAction
{

    class USteamCoreAppsAsyncActionUpToDateCheck* UpToDateCheckAsync(class UObject* WorldContextObject, int32 AppID, int32 Version);
};

class UWebBroadcastService : public USteamCoreWebSubsystem
{

    void PostGameDataFrame(const FPostGameDataFrameCallback& Callback, FString Key, int32 AppID, FString SteamID, FString BroadcastId, FString FrameData);
};

class USteamCoreWebAsyncActionPostGameDataFrame : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionPostGameDataFrame* PostGameDataFrameAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, FString BroadcastId, FString FrameData);
};

class UWebCheatReporting : public USteamCoreWebSubsystem
{

    void StartSecureMultiplayerSession(const FStartSecureMultiplayerSessionCallback& Callback, FString Key, FString SteamID, int32 AppID);
    void RequestVacStatusForUser(const FRequestVacStatusForUserCallback& Callback, FString Key, FString SteamID, int32 AppID, FString SessionID);
    void RequestPlayerGameBan(const FRequestPlayerGameBanCallback& Callback, FString Key, FString SteamID, int32 AppID, FString ReportID, FString CheatDescription, int32 Duration, bool bDelayBan);
    void ReportPlayerCheating(const FReportPlayerCheatingCallback& Callback, FString Key, int32 AppID, FString SteamID, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
    void ReportCheatData(const FReportCheatDataCallback& Callback, FString Key, FString SteamID, int32 AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessId, int32 CheatProcessId, FString CheatParam1, FString CheatParam2);
    void RemovePlayerGameBan(const FRemovePlayerGameBanCallback& Callback, FString Key, FString SteamID, int32 AppID);
    void GetCheatingReports(const FGetCheatingReportsCallback& Callback, FString Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, FString ReportidMin, bool bIncludeReports, bool bIncludeBans, FString SteamID);
    void EndSecureMultiplayerSession(const FEndSecureMultiplayerSessionCallback& Callback, FString Key, FString SteamID, int32 AppID, FString SessionID);
};

class USteamCoreWebAsyncActionReportPlayerCheating : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionReportPlayerCheating* ReportPlayerCheatingAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
};

class USteamCoreWebAsyncActionRequestPlayerGameBan : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionRequestPlayerGameBan* RequestPlayerGameBanAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, FString ReportID, FString CheatDescription, int32 Duration, bool bDelayBan);
};

class USteamCoreWebAsyncActionRemovePlayerGameBan : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionRemovePlayerGameBan* RemovePlayerGameBanAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID);
};

class USteamCoreWebAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetCheatingReports* GetCheatingReportsAsync(class UObject* WorldContextObject, FString Key, int32 AppID, int32 TimeEnd, int32 TimeBegin, FString ReportidMin, bool bIncludeReports, bool bIncludeBans, FString SteamID);
};

class USteamCoreWebAsyncActionReportCheatData : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionReportCheatData* ReportCheatDataAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32 GameProcessId, int32 CheatProcessId, FString CheatParam1, FString CheatParam2);
};

class USteamCoreWebAsyncActionRequestVacStatusForUser : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionRequestVacStatusForUser* RequestVacStatusForUserAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, FString SessionID);
};

class USteamCoreWebAsyncActionStartSecureMultiplayerSession : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionStartSecureMultiplayerSession* StartSecureMultiplayerSessionAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID);
};

class USteamCoreWebAsyncActionEndSecureMultiplayerSession : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionEndSecureMultiplayerSession* EndSecureMultiplayerSessionAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, FString SessionID);
};

class UWebEconMarketService : public USteamCoreWebSubsystem
{

    void GetPopular(const FGetPopularCallback& Callback, FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppId, int32 ECurrency);
    void GetMarketEligibility(const FGetMarketEligibilityCallback& Callback, FString Key, FString SteamID);
    void GetAssetID(const FGetAssetIDCallback& Callback, FString Key, int32 AppID, FString ListingId);
    void CancelAppListingsForUser(const FCancelAppListingsForUserCallback& Callback, FString Key, int32 AppID, FString SteamID, bool bSynchronous);
};

class USteamCoreWebAsyncActionGetMarketEligibility : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetMarketEligibility* GetMarketEligibilityAsync(class UObject* WorldContextObject, FString Key, FString SteamID);
};

class USteamCoreWebAsyncActionCancelAppListingsForUser : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionCancelAppListingsForUser* CancelAppListingsForUserAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, bool bSynchronous);
};

class USteamCoreWebAsyncActionGetAssetID : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetAssetID* GetAssetIDAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString ListingId);
};

class USteamCoreWebAsyncActionGetPopular : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetPopular* GetPopularAsync(class UObject* WorldContextObject, FString Key, FString Language, int32 Rows, int32 Start, int32 FilterAppId, int32 ECurrency);
};

class UWebEconService : public USteamCoreWebSubsystem
{

    void GetTradeOffersSummary(const FGetTradeOffersSummaryCallback& Callback, FString Key, int32 TimeLastVisit);
    void GetTradeOffers(const FGetTradeOffersCallback& Callback, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
    void GetTradeOffer(const FGetTradeOfferCallback& Callback, FString Key, FString TradeOfferId, FString Language);
    void GetTradeHistory(const FGetTradeHistoryCallback& Callback, FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal);
    void FlushInventoryCache(const FFlushInventoryCacheCallback& Callback, FString Key, FString SteamID, int32 AppID, FString ContextId);
    void FlushContextCache(const FFlushContextCacheCallback& Callback, FString Key, int32 AppID);
    void FlushAssetAppearanceCache(const FFlushAssetAppearanceCacheCallback& Callback, FString Key, int32 AppID);
    void DeclineTradeOffer(const FDeclineTradeOfferCallback& Callback, FString Key, FString TradeOfferId);
    void CancelTradeOffer(const FCancelTradeOfferCallback& Callback, FString Key, FString TradeOfferId);
};

class USteamCoreWebAsyncActionGetTradeHistory : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetTradeHistory* GetTradeHistoryAsync(class UObject* WorldContextObject, FString Key, int32 MaxTrades, int32 StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal);
};

class USteamCoreWebAsyncActionFlushInventoryCache : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionFlushInventoryCache* FlushInventoryCacheAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, FString ContextId);
};

class USteamCoreWebAsyncActionFlushAssetAppearanceCache : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionFlushAssetAppearanceCache* FlushAssetAppearanceCacheAsync(class UObject* WorldContextObject, FString Key, int32 AppID);
};

class USteamCoreWebAsyncActionFlushContextCache : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionFlushContextCache* FlushContextCacheAsync(class UObject* WorldContextObject, FString Key, int32 AppID);
};

class USteamCoreWebAsyncActionGetTradeOffers : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetTradeOffers* GetTradeOffersAsync(class UObject* WorldContextObject, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32 TimeHistoricalCutoff);
};

class USteamCoreWebAsyncActionGetTradeOffer : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetTradeOffer* GetTradeOfferAsync(class UObject* WorldContextObject, FString Key, FString TradeOfferId, FString Language);
};

class USteamCoreWebAsyncActionGetTradeOffersSummary : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetTradeOffersSummary* GetTradeOffersSummaryAsync(class UObject* WorldContextObject, FString Key, int32 TimeLastVisit);
};

class USteamCoreWebAsyncActionDeclineTradeOffer : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionDeclineTradeOffer* DeclineTradeOfferAsync(class UObject* WorldContextObject, FString Key, FString TradeOfferId);
};

class USteamCoreWebAsyncActionCancelTradeOffer : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionCancelTradeOffer* CancelTradeOfferAsync(class UObject* WorldContextObject, FString Key, FString TradeOfferId);
};

class UWebGameInventory : public USteamCoreWebSubsystem
{

    void UpdateItemDefs();
    void SupportGetAssetHistory(const FSupportGetAssetHistoryCallback& Callback, FString Key, int32 AppID, FString AssetId, FString ContextId);
    void HistoryExecuteCommands(const FHistoryExecuteCommandsCallback& Callback, FString Key, int32 AppID, FString SteamID, FString ContextId, int32 ActorId);
    void GetUserHistory(const FGetUserHistoryCallback& Callback, FString Key, int32 AppID, FString SteamID, FString ContextId, int32 StartTime, int32 EndTime);
    void GetHistoryCommandDetails(const FGetHistoryCommandDetailsCallback& Callback, FString Key, int32 AppID, FString SteamID, FString Command, FString ContextId, FString Arguments);
};

class USteamCoreWebAsyncActionGetHistoryCommandDetails : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetHistoryCommandDetails* GetHistoryCommandDetailsAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, FString Command, FString ContextId, FString Arguments);
};

class USteamCoreWebAsyncActionGetUserHistory : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetUserHistory* GetUserHistoryAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, FString ContextId, int32 StartTime, int32 EndTime);
};

class USteamCoreWebAsyncActionHistoryExecuteCommand : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionHistoryExecuteCommand* HistoryExecuteCommandAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, FString ContextId, int32 ActorId);
};

class USteamCoreWebAsyncActionSupportGetAssetHistory : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionSupportGetAssetHistory* SupportGetAssetHistoryAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString AssetId, FString ContextId);
};

class UWebGameNotificationsService : public USteamCoreWebSubsystem
{

    void UpdateSession(const FUpdateSessionCallback& Callback, FString Key, FString SessionID, int32 AppID, FString Title, FString Users, FString SteamID);
    void RequestNotifications(const FRequestNotificationsCallback& Callback, FString Key, FString SteamID, int32 AppID);
    void GetSessionDetailsForApp(const FGetSessionDetailsForAppCallback& Callback, FString Key, FString Sessions, int32 AppID, FString Language);
    void EnumerateSessionsForApp(const FEnumerateSessionsForAppCallback& Callback, FString Key, int32 AppID, FString SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language);
    void DeleteSessionBatch(const FDeleteSessionBatchCallback& Callback, FString Key, FString SessionID, int32 AppID);
    void DeleteSession(const FDeleteSessionCallback& Callback, FString Key, FString SessionID, int32 AppID, FString SteamID);
    void CreateSession(const FCreateSessionCallback& Callback, FString Key, int32 AppID, FString Context, FString Title, FString Users, FString SteamID);
};

class USteamCoreWebAsyncActionCreateSession : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionCreateSession* CreateSessionAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString Context, FString Title, FString Users, FString SteamID);
};

class USteamCoreWebAsyncActionUpdateSession : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionUpdateSession* UpdateSessionAsync(class UObject* WorldContextObject, FString Key, FString SessionID, int32 AppID, FString Title, FString Users, FString SteamID);
};

class USteamCoreWebAsyncActionEnumerateSessionsForApp : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionEnumerateSessionsForApp* EnumerateSessionsForAppAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language);
};

class USteamCoreWebAsyncActionGetSessionDetailsForApp : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetSessionDetailsForApp* GetSessionDetailsForAppAsync(class UObject* WorldContextObject, FString Key, FString Sessions, int32 AppID, FString Language);
};

class USteamCoreWebAsyncActionRequestNotifications : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionRequestNotifications* RequestNotificationsAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID);
};

class USteamCoreWebAsyncActionDeleteSession : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionDeleteSession* DeleteSessionAsync(class UObject* WorldContextObject, FString Key, FString SessionID, int32 AppID, FString SteamID);
};

class USteamCoreWebAsyncActionDeleteSessionBatch : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionDeleteSessionBatch* DeleteSessionBatchAsync(class UObject* WorldContextObject, FString Key, FString SessionID, int32 AppID);
};

class UWebGameServersService : public USteamCoreWebSubsystem
{

    void SetMemo(const FSetMemoCallback& Callback, FString Key, FString SteamID, FString Memo);
    void SetBanStatus(const FSetBanStatusCallback& Callback, FString Key, FString SteamID, bool bBanned, int32 banSeconds);
    void ResetLoginToken(const FResetLoginTokenCallback& Callback, FString Key, FString SteamID);
    void QueryLoginToken(const FQueryLoginTokenCallback& Callback, FString Key, FString LoginToken);
    void GetServerSteamIDsByIP(const FGetServerSteamIDsByIPCallback& Callback, FString Key, FString ServerIP);
    void GetServerIPsBySteamID(const FGetServerIPsBySteamIDCallback& Callback, FString Key, FString ServerSteamId);
    void GetAccountPublicInfo(const FGetAccountPublicInfoCallback& Callback, FString Key, FString SteamID);
    void GetAccountList(const FGetAccountListCallback& Callback, FString Key);
    void DeleteAccount(const FDeleteAccountCallback& Callback, FString Key, FString SteamID);
    void CreateAccount(const FCreateAccountCallback& Callback, FString Key, int32 AppID, FString Memo);
};

class UWebInventoryService : public USteamCoreWebSubsystem
{

    void ModifyItems(const FModifyItemsCallback& Callback, FString Key, int32 AppID, FString InputJson, FString SteamID, int32 Timestamp, FString Updates);
    void GetQuantity(const FGetQuantityCallback& Callback, FString Key, int32 AppID, FString SteamID, TArray<int32> ItemdefIDs, bool bForce);
    void GetPriceSheet(const FGetPriceSheetCallback& Callback, FString Key, int32 Currency);
    void GetItemDefs(const FGetItemDefsCallback& Callback, FString Key, int32 AppID, FString ModifiedSince, TArray<int32> ItemdefIDs, TArray<int32> WorkshopIDs, int32 CacheMaxAgeSeconds);
    void GetInventory(const FGetInventoryCallback& Callback, FString Key, int32 AppID, FString SteamID);
    void ExchangeItem(const FExchangeItemCallback& Callback, FString Key, int32 AppID, FString SteamID, TArray<int32> MaterialsItemID, TArray<int32> MaterialsQuantity, FString OutputItemdefId);
    void ConsumeItem(const FConsumeItemCallback& Callback, FString Key, int32 AppID, FString ItemId, FString Quantity, FString SteamID, FString RequestID);
    void Consolidate(const FConsolidateCallback& Callback, FString Key, int32 AppID, FString SteamID, TArray<int32> ItemdefIDs, bool bForce);
    void AddPromoItem(const FAddPromoItemCallback& Callback, FString Key, int32 AppID, int32 ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID);
    void AddItem(const FAddItemCallback& Callback, FString Key, int32 AppID, TArray<int32> ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID, bool bTradeRestriction);
};

class USteamCoreWebAsyncActionAddItem : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionAddItem* AddItemAsync(class UObject* WorldContextObject, FString Key, int32 AppID, TArray<int32> ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID, bool bTradeRestriction);
};

class USteamCoreWebAsyncActionAddPromoItem : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionAddPromoItem* AddPromoItemAsync(class UObject* WorldContextObject, FString Key, int32 AppID, int32 ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestID);
};

class USteamCoreWebAsyncActionConsumeItem : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionConsumeItem* ConsumeItemAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString ItemId, FString Quantity, FString SteamID, FString RequestID);
};

class USteamCoreWebAsyncActionExchangeItem : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionExchangeItem* ExchangeItemAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, TArray<int32> MaterialsItemID, TArray<int32> MaterialsQuantity, FString OutputItemdefId);
};

class USteamCoreWebAsyncActionGetInventory : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetInventory* GetInventoryAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID);
};

class USteamCoreWebAsyncActionGetItemDefs : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetItemDefs* GetItemDefsAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString ModifiedSince, TArray<int32> ItemdefIDs, TArray<int32> WorkshopIDs, int32 CacheMaxAgeSeconds);
};

class USteamCoreWebAsyncActionGetPriceSheet : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetPriceSheet* GetPriceSheetAsync(class UObject* WorldContextObject, FString Key, int32 Currency);
};

class USteamCoreWebAsyncActionConsolidate : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionConsolidate* ConsolidateAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, TArray<int32> ItemdefIDs, bool bForce);
};

class USteamCoreWebAsyncActionGetQuantity : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetQuantity* GetQuantityAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, TArray<int32> ItemdefIDs, bool bForce);
};

class USteamCoreWebAsyncActionModifyItems : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionModifyItems* ModifyItemsAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString InputJson, FString SteamID, int32 Timestamp, FString Updates);
};

class UWebLeaderboards : public USteamCoreWebSubsystem
{

    void SetLeaderboardScore(const FSetLeaderboardScoreCallback& Callback, FString Key, int32 AppID, int32 LeaderbordId, FString SteamID, int32 Score, TArray<uint8> Details, FString ScoreMethod);
    void ResetLeaderboard(const FResetLeaderboardCallback& Callback, FString Key, int32 AppID, int32 LeaderboardId);
    void GetLeaderboardsForGame(const FGetLeaderboardsForGameCallback& Callback, FString Key, int32 AppID);
    void GetLeaderboardEntries(const FGetLeaderboardEntriesCallback& Callback, FString Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, FString SteamID);
    void FindOrCreateLeaderboard(const FFindOrCreateLeaderboardCallback& Callback, FString Key, int32 AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
    void DeleteLeaderboard(const FDeleteLeaderboardCallback& Callback, FString Key, int32 AppID, FString Name);
};

class USteamCoreWebAsyncActionDeleteLeaderboard : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionDeleteLeaderboard* DeleteLeaderboardAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString Name);
};

class USteamCoreWebAsyncActionFindOrCreateLeaderboard : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads);
};

class USteamCoreWebAsyncActionGetLeaderboardEntries : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetLeaderboardEntries* GetLeaderboardEntriesAsync(class UObject* WorldContextObject, FString Key, int32 AppID, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, FString SteamID);
};

class USteamCoreWebAsyncActionGetLeaderboardsForGame : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetLeaderboardsForGame* GetLeaderboardsForGameAsync(class UObject* WorldContextObject, FString Key, int32 AppID);
};

class USteamCoreWebAsyncActionResetLeaderboard : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionResetLeaderboard* ResetLeaderboardAsync(class UObject* WorldContextObject, FString Key, int32 AppID, int32 LeaderboardId);
};

class USteamCoreWebAsyncActionSetLeaderboardScore : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionSetLeaderboardScore* SetLeaderboardScoreAsync(class UObject* WorldContextObject, FString Key, int32 AppID, int32 LeaderboardId, FString SteamID, int32 Score, TArray<uint8> Details, FString ScoreMethod);
};

class UWebLobbyMatchmakingService : public USteamCoreWebSubsystem
{

    void RemoveUserFromLobby(const FRemoveUserFromLobbyCallback& Callback, FString Key, int32 AppID, FString SteamIdToRemove, FString SteamIDLobby, FString InputJson);
    void CreateLobby(const FCreateLobbyCallback& Callback, FString Key, int32 AppID, int32 MaxMembers, ESteamCoreWebLobbyType LobbyType, FString LobbyName, FString InputJson, TArray<FString> SteamIdInvitedMembers, FString LobbyMetaData);
};

class UWebMicroTxn : public USteamCoreWebSubsystem
{

    void RefundTxn(const FRefundTxnCallback& Callback, FString Key, FString OrderId, int32 AppID);
    void QueryTxn(const FQueryTxnCallback& Callback, FString Key, int32 AppID, FString OrderId, FString TransId);
    void ProcessAgreement(const FProcessAgreementCallback& Callback, FString Key, FString OrderId, FString SteamID, FString AgreementId, int32 AppID, int32 Amount, FString Currency);
    FString MakeTransactionID();
    void InitTxn(const FInitTxnCallback& Callback, FString Key, FString OrderId, FString SteamID, int32 AppID, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32> ItemId, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> RecurringAmt, TArray<int32> BundleCount, TArray<int32> BundleId, TArray<int32> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory);
    void GetUserInfo(const FGetUserInfoCallback& Callback, FString Key, FString SteamID, int32 Ipaddress);
    void GetUserAgreementInfo(const FGetUserAgreementInfoCallback& Callback, FString Key, FString SteamID, int32 AppID);
    void GetReport(const FGetReportCallback& Callback, FString Key, int32 AppID, FString Time, FString Type, int32 MaxResults);
    void FinalizeTxn(const FFinalizeTxnCallback& Callback, FString Key, FString OrderId, int32 AppID);
    void CancelAgreement(const FCancelAgreementCallback& Callback, FString Key, FString SteamID, FString AgreementId, int32 AppID);
    void AdjustAgreement(const FAdjustAgreementCallback& Callback, FString Key, FString SteamID, FString AgreementId, int32 AppID, FString NextProcessDate);
};

class USteamCoreWebAsyncActionAdjustAgreement : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionAdjustAgreement* AdjustAgreementAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString AgreementId, int32 AppID, FString NextProcessDate);
};

class USteamCoreWebAsyncActionCancelAgreement : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionCancelAgreement* CancelAgreementAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString AgreementId, int32 AppID);
};

class USteamCoreWebAsyncActionFinalizeTxn : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionFinalizeTxn* FinalizeTxnAsync(class UObject* WorldContextObject, FString Key, FString OrderId, int32 AppID);
};

class USteamCoreWebAsyncActionGetReport : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetReport* GetReportAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString Time, FString Type, int32 MaxResults);
};

class USteamCoreWebAsyncActionGetUserAgreementInfo : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetUserAgreementInfo* GetUserAgreementInfoAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID);
};

class USteamCoreWebAsyncActionGetUserInfo : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetUserInfo* GetUserInfoAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 Ipaddress);
};

class USteamCoreWebAsyncActionInitTxn : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionInitTxn* InitTxnAsync(class UObject* WorldContextObject, FString Key, FString OrderId, FString SteamID, int32 AppID, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32> ItemId, TArray<int32> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32> Frequency, TArray<FString> RecurringAmt, TArray<int32> BundleCount, TArray<int32> BundleId, TArray<int32> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory);
};

class USteamCoreWebAsyncActionProcessAgreement : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionProcessAgreement* ProcessAgreementAsync(class UObject* WorldContextObject, FString Key, FString OrderId, FString SteamID, FString AgreementId, int32 AppID, int32 Amount, FString Currency);
};

class USteamCoreWebAsyncActionQueryTxn : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionQueryTxn* QueryTxnAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString OrderId, FString TransId);
};

class USteamCoreWebAsyncActionRefundTxn : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionRefundTxn* RefundTxnAsync(class UObject* WorldContextObject, FString Key, FString OrderId, int32 AppID);
};

class UWebPlayerService : public USteamCoreWebSubsystem
{

    void IsPlayingSharedGame(const FIsPlayingSharedGameCallback& Callback, FString Key, FString SteamID, int32 AppIdPlaying);
    void GetSteamLevel(const FGetSteamLevelCallback& Callback, FString Key, FString SteamID);
    void GetRecentlyPlayedGames(const FGetRecentlyPlayedGamesCallback& Callback, FString Key, FString SteamID, int32 Count);
    void GetOwnedGames(const FGetOwnedGamesCallback& Callback, FString Key, FString SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> Filter);
    void GetCommunityBadgeProgress(const FGetCommunityBadgeProgressCallback& Callback, FString Key, FString SteamID, int32 BadgeId);
    void GetBadges(const FGetBadgesCallback& Callback, FString Key, FString SteamID);
};

class USteamCoreWebAsyncActionGetRecentlyPlayedGames : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetRecentlyPlayedGames* GetRecentlyPlayedGamesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 Count);
};

class USteamCoreWebAsyncActionGetOwnedGames : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetOwnedGames* GetOwnedGamesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> Filter);
};

class USteamCoreWebAsyncActionGetSteamLevel : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetSteamLevel* GetSteamLevelAsync(class UObject* WorldContextObject, FString Key, FString SteamID);
};

class USteamCoreWebAsyncActionGetBadges : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetBadges* GetBadgesAsync(class UObject* WorldContextObject, FString Key, FString SteamID);
};

class USteamCoreWebAsyncActionGetCommunityBadgeProgress : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetCommunityBadgeProgress* GetCommunityBadgeProgressAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 BadgeId);
};

class USteamCoreWebAsyncActionIsPlayingSharedGame : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionIsPlayingSharedGame* IsPlayingSharedGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppIdPlaying);
};

class UWebPublishedFileService : public USteamCoreWebSubsystem
{

    void UpdateTags(const FUpdateTagsCallback& Callback, FString Key, FString PublishedFileID, int32 AppID, FString AddTags, FString RemoveTags);
    void UpdateIncompatibleStatus(const FUpdateIncompatibleStatusCallback& Callback, FString Key, FString PublishedFileID, int32 AppID, bool bIncompatible);
    void UpdateBanStatus(const FUpdateBanStatusCallback& Callback, FString Key, FString PublishedFileID, int32 AppID, bool bBanned, FString Reason);
    void SetDeveloperMetadata(const FSetDeveloperMetadataCallback& Callback, FString Key, FString PublishedFileID, int32 AppID, FString MetaData);
    void QueryFiles(const FQueryFilesCallback& Callback, FString Key, int32 QueryType, int32 Page, FString Cursor, int32 NumPerPage, int32 CreatorAppID, int32 AppID, FString RequiredTags, FString ExcludedTags, bool bMatchAllTags, FString RequiredFlags, FString OmittedFlags, FString SearchText, int32 FileType, FString ChildPublishedFileId, int32 Days, bool bIncludeRecentVotesOnly, int32 CacheMaxAgeSeconds, int32 Language, FString RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32 ReturnPlaytimeStats);
};

class UWebSteamPublishedItemSearch : public USteamCoreWebSubsystem
{

    void ResultSetSummary(const FResultSetSummaryCallback& Callback, FString Key, FString SteamID, int32 AppID, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
    void RankedByVote(const FRankedByVoteCallback& Callback, FString Key, FString SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
    void RankedByTrend(const FRankedByTrendCallback& Callback, FString Key, FString SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 Days, TArray<FString> Tag, TArray<FString> UserTag);
    void RankedByPublicationOrder(const FRankedByPublicationOrderCallback& Callback, FString Key, FString SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
};

class USteamCoreWebAsyncActionRankedByPublicationOrder : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionRankedByPublicationOrder* RankedByPublicationOrderAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
};

class USteamCoreWebAsyncActionRankedByTrend : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionRankedByTrend* RankedByTrendAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 Days, TArray<FString> Tag, TArray<FString> UserTag);
};

class USteamCoreWebAsyncActionRankedByVote : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionRankedByVote* RankedByVoteAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
};

class USteamCoreWebAsyncActionResultSetSummary : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionResultSetSummary* ResultSetSummaryAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
};

class UWebPublishedItemVoting : public USteamCoreWebSubsystem
{

    void UserVoteSummary(const FUserVoteSummaryCallback& Callback, FString Key, FString SteamID, TArray<FString> PublishedFileIDs);
    void ItemVoteSummary(const FItemVoteSummaryCallback& Callback, FString Key, FString SteamID, int32 AppID, TArray<FString> PublishedFileIDs);
};

class USteamCoreWebAsyncActionItemVoteSummary : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionItemVoteSummary* ItemVoteSummaryAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, TArray<FString> PublishedFileIDs);
};

class USteamCoreWebAsyncActionUserVoteSummary : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionUserVoteSummary* UserVoteSummaryAsync(class UObject* WorldContextObject, FString Key, FString SteamID, TArray<FString> PublishedFileIDs);
};

class UWebRemoteStorage : public USteamCoreWebSubsystem
{

    void UnsubscribePublishedFile(const FUnsubscribePublishedFileCallback& Callback, FString Key, FString SteamID, int32 AppID, FString PublishedFileIDs);
    void SubscribePublishedFile(const FSubscribePublishedFileCallback& Callback, FString Key, FString SteamID, int32 AppID, FString PublishedFileIDs);
    void SetUGCUsedByGC(const FSetUGCUsedByGCCallback& Callback, FString Key, FString SteamID, FString UGCID, int32 AppID, bool bUsed);
    void GetUGCFileDetails(const FGetUGCFileDetailsCallback& Callback, FString Key, FString SteamID, FString UGCID, int32 AppID);
    void GetPublishedFileDetails(const FGetPublishedFileDetailsCallback& Callback, FString PublishedFileIDs);
    void GetCollectionDetails(const FGetCollectionDetailsCallback& Callback, TArray<FString> PublishedFileIDs);
    void EnumerateUserSubscribedFiles(const FEnumerateUserSubscribedFilesCallback& Callback, FString Key, FString SteamID, int32 AppID, int32 ListType);
    void EnumerateUserPublishedFiles(const FEnumerateUserPublishedFilesCallback& Callback, FString Key, FString SteamID, int32 AppID);
};

class USteamCoreWebAsyncActionEnumerateUserPublishedFiles : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* EnumerateUserPublishedFilesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID);
};

class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* EnumerateUserSubscribedFilesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, int32 ListType);
};

class USteamCoreWebAsyncActionGetCollectionDetails : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetCollectionDetails* GetCollectionDetailsAsync(class UObject* WorldContextObject, TArray<FString> PublishedFileIDs);
};

class USteamCoreWebAsyncActionGetPublishedFileDetails : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetPublishedFileDetails* GetPublishedFileDetailsAsync(class UObject* WorldContextObject, FString PublishedFileIDs);
};

class USteamCoreWebAsyncActionGetUGCFileDetails : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetUGCFileDetails* GetUGCFileDetailsAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString UGCID, int32 AppID);
};

class USteamCoreWebAsyncActionSetUGCUsedByGC : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionSetUGCUsedByGC* SetUGCUsedByGCAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString UGCID, int32 AppID, bool bUsed);
};

class USteamCoreWebAsyncActionSubscribePublishedFile : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionSubscribePublishedFile* SubscribePublishedFileAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, FString PublishedFileIDs);
};

class USteamCoreWebAsyncActionUnsubscribePublishedFile : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionUnsubscribePublishedFile* UnsubscribePublishedFileAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, FString PublishedFileIDs);
};

class UWebSteamCommunity : public USteamCoreWebSubsystem
{

    void ReportAbuse(const FReportAbuseCallback& Callback, FString Key, FString SteamIdActor, FString SteamIdTarget, int32 AppID, int32 AbuseType, int32 ContentType, FString Description, FString Gid);
};

class USteamCoreWebAsyncActionReportAbuse : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionReportAbuse* ReportAbuseAsync(class UObject* WorldContextObject, FString Key, FString SteamIdActor, FString SteamIdTarget, int32 AppID, int32 AbuseType, int32 ContentType, FString Description, FString Gid);
};

class UWebSteamEconomy : public USteamCoreWebSubsystem
{

    void StartTrade(const FStartTradeCallback& Callback, FString Key, int32 AppID, FString SteamIDd, FString SteamId2);
    void StartAssetTransaction(const FStartAssetTransactionCallback& Callback, FString Key, int32 AppID, FString SteamID, FString AssetId, int32 AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth);
    void GetMarketPrices(const FGetMarketPricesCallback& Callback, FString Key, int32 AppID);
    void GetExportedAssetsForUser(const FGetExportedAssetsForUserCallback& Callback, FString Key, FString SteamID, int32 AppID, FString ContextId);
    void GetAssetPrices(const FGetAssetPricesCallback& Callback, FString Key, int32 AppID, FString Currency, FString Language);
    void GetAssetClassInfo(const FGetAssetClassInfoCallback& Callback, FString Key, int32 AppID, FString Language, int32 ClassCount, FString ClassId, FString InstanceID);
    void FinalizeAssetTransaction(const FFinalizeAssetTransactionCallback& Callback, FString Key, int32 AppID, FString SteamID, FString TxnId, FString Language);
    void CanTrade(const FCanTradeCallback& Callback, FString Key, int32 AppID, FString SteamID, FString TargetId);
};

class USteamCoreWebAsyncActionCanTrade : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionCanTrade* CanTradeAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, FString TargetId);
};

class USteamCoreWebAsyncActionFinalizeAssetTransaction : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionFinalizeAssetTransaction* FinalizeAssetTransactionAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, FString TxnId, FString Language);
};

class USteamCoreWebAsyncActionGetAssetClassInfo : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetAssetClassInfo* GetAssetClassInfoAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString Language, int32 ClassCount, FString ClassId, FString InstanceID);
};

class USteamCoreWebAsyncActionGetAssetPrices : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetAssetPrices* GetAssetPricesAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString Currency, FString Language);
};

class USteamCoreWebAsyncActionGetExportedAssetsForUser : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetExportedAssetsForUser* GetExportedAssetsForUserAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, FString ContextId);
};

class USteamCoreWebAsyncActionGetMarketPrices : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetMarketPrices* GetMarketPricesAsync(class UObject* WorldContextObject, FString Key, int32 AppID);
};

class USteamCoreWebAsyncActionStartAssetTransaction : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionStartAssetTransaction* StartAssetTransactionAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, FString AssetId, int32 AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth);
};

class USteamCoreWebAsyncActionStartTrade : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionStartTrade* StartTradeAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString SteamId1, FString SteamId2);
};

class UWebSteamGameServerStats : public USteamCoreWebSubsystem
{

    void GetGameServerPlayerStatsForGame(const FGetGameServerPlayerStatsForGameCallback& Callback, FString Key, FString GameID, int32 AppID, FString RangeStart, FString RangeEnd, int32 MaxResults);
};

class UWebSteamNews : public USteamCoreWebSubsystem
{

    void GetNewsForAppAuthed(const FGetNewsForAppAuthedCallback& Callback, FString Key, int32 AppID, int32 MaxLength, TArray<FString> Feeds, int32 EndDate, int32 Count);
    void GetNewsForApp(const FGetNewsForAppCallback& Callback, int32 AppID, int32 MaxLength, TArray<FString> Feeds, int32 EndDate, int32 Count);
};

class USteamCoreWebAsyncActionGetNewsForApp : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetNewsForApp* GetNewsForAppAsync(class UObject* WorldContextObject, int32 AppID, int32 MaxLength, TArray<FString> Feeds, int32 EndDate, int32 Count);
};

class USteamCoreWebAsyncActionGetNewsForAppAuthed : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetNewsForAppAuthed* GetNewsForAppAuthedAsync(class UObject* WorldContextObject, FString Key, int32 AppID, int32 MaxLength, TArray<FString> Feeds, int32 EndDate, int32 Count);
};

class UWebSteamUser : public USteamCoreWebSubsystem
{

    void ResolveVanityURL(const FResolveVanityURLCallback& Callback, FString Key, FString VanityURL, EVanityUrlType URLType);
    void GrantPackage(const FGrantPackageCallback& Callback, FString Key, FString SteamID, int32 PackageId, FString Ipaddress, FString ThirdPartyKey, int32 ThirdPartyAppId);
    void GetUserGroupList(const FGetUserGroupListCallback& Callback, FString Key, FString SteamID);
    void GetPublisherAppOwnershipChanges(const FGetPublisherAppOwnershipChangesCallback& Callback, FString Key, FString PackageRowVersion, FString CDKeyRowVersion);
    void GetPublisherAppOwnership(const FGetPublisherAppOwnershipCallback& Callback, FString Key, FString SteamID);
    void GetPlayerSummaries(const FGetPlayerSummariesCallback& Callback, FString Key, TArray<FString> SteamIDs);
    void GetPlayerBans(const FGetPlayerBansCallback& Callback, FString Key, TArray<FString> SteamIDs);
    void GetFriendList(const FGetFriendListCallback& Callback, FString Key, FString SteamID, FString Relationship);
    void GetAppPriceInfo(const FGetAppPriceInfoCallback& Callback, FString Key, FString SteamID, TArray<int32> AppIDs);
    void CheckAppOwnership(const FCheckAppOwnershipCallback& Callback, FString Key, FString SteamID, int32 AppID);
};

class USteamCoreWebAsyncActionCheckAppOwnership : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionCheckAppOwnership* CheckAppOwnershipAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID);
};

class USteamCoreWebAsyncActionGetAppPriceInfo : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetAppPriceInfo* GetAppPriceInfoAsync(class UObject* WorldContextObject, FString Key, FString SteamID, TArray<int32> AppIDs);
};

class USteamCoreWebAsyncActionGetFriendList : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetFriendList* GetFriendListAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString Relationship);
};

class USteamCoreWebAsyncActionGetPlayerBans : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetPlayerBans* GetPlayerBansAsync(class UObject* WorldContextObject, FString Key, TArray<FString> SteamIDs);
};

class USteamCoreWebAsyncActionGetPlayerSummaries : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetPlayerSummaries* GetPlayerSummariesAsync(class UObject* WorldContextObject, FString Key, TArray<FString> SteamIDs);
};

class USteamCoreWebAsyncActionGetPublisherAppOwnership : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetPublisherAppOwnership* GetPublisherAppOwnershipAsync(class UObject* WorldContextObject, FString Key, FString SteamID);
};

class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChangesAsync(class UObject* WorldContextObject, FString Key, FString PackageRowVersion, FString CDKeyRowVersion);
};

class USteamCoreWebAsyncActionGetUserGroupList : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetUserGroupList* GetUserGroupListAsync(class UObject* WorldContextObject, FString Key, FString SteamID);
};

class USteamCoreWebAsyncActionGrantPackage : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGrantPackage* GrantPackageAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 PackageId, FString Ipaddress, FString ThirdPartyKey, int32 ThirdPartyAppId);
};

class USteamCoreWebAsyncActionResolveVanityURL : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionResolveVanityURL* ResolveVanityURLAsync(class UObject* WorldContextObject, FString Key, FString VanityURL, EVanityUrlType URLType);
};

class UWebUserAuth : public USteamCoreWebSubsystem
{

    void AuthenticateUserTicket(const FAuthenticateUserTicketCallback& Callback, FString Key, int32 AppID, FString Ticket);
    void AuthenticateUser(const FAuthenticateUserCallback& Callback, FString SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
};

class USteamCoreWebAsyncActionAuthenticateUser : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionAuthenticateUser* AuthenticateUserAsync(class UObject* WorldContextObject, FString SteamID, TArray<uint8> SessionKey, TArray<uint8> EncryptedLoginKey);
};

class USteamCoreWebAsyncActionAuthenticateUserTicket : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionAuthenticateUserTicket* AuthenticateUserTicketAsync(class UObject* WorldContextObject, FString Key, int32 AppID, FString Ticket);
};

class UWebUserStats : public USteamCoreWebSubsystem
{

    void SetUserStatsForGame(const FSetUserStatsForGameCallback& Callback, FString Key, FString SteamID, int32 AppID, TArray<FString> Names, TArray<int32> Values);
    void GetUserStatsForGame(const FGetUserStatsForGameCallback& Callback, FString Key, FString SteamID, int32 AppID);
    void GetSchemaForGame(const FGetSchemaForGameCallback& Callback, FString Key, FString SteamID, int32 AppID, FString Language);
    void GetPlayerAchievements(const FGetPlayerAchievementsCallback& Callback, FString Key, FString SteamID, int32 AppID, FString Language);
    void GetNumberOfCurrentPlayers(const FGetNumberOfCurrentPlayersCallback& Callback, int32 AppID);
    void GetGlobalStatsForGame(const FGetGlobalStatsForGameCallback& Callback, int32 AppID, TArray<FString> Names, int32 StartDate, int32 EndDate);
    void GetGlobalAchievementPercentagesForApp(const FGetGlobalAchievementPercentagesForAppCallback& Callback, FString GameID);
};

class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForAppAsync(class UObject* WorldContextObject, FString GameID);
};

class USteamCoreWebAsyncActionGetGlobalStatsForGame : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetGlobalStatsForGame* GetGlobalStatsForGameAsync(class UObject* WorldContextObject, int32 AppID, TArray<FString> Names, int32 StartDate, int32 EndDate);
};

class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, int32 AppID);
};

class USteamCoreWebAsyncActionGetPlayerAchievements : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetPlayerAchievements* GetPlayerAchievementsAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, FString Language);
};

class USteamCoreWebAsyncActionGetSchemaForGame : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetSchemaForGame* GetSchemaForGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, FString Language);
};

class USteamCoreWebAsyncActionGetUserStatsForGame : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionGetUserStatsForGame* GetUserStatsForGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID);
};

class USteamCoreWebAsyncActionSetUserStatsForGame : public USteamCoreWebAsyncAction
{

    class USteamCoreWebAsyncActionSetUserStatsForGame* SetUserStatsForGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32 AppID, TArray<FString> Names, TArray<int32> Values);
};

#endif
