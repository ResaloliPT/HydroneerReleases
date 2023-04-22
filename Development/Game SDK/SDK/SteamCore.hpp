#ifndef UE4SS_SDK_SteamCore_HPP
#define UE4SS_SDK_SteamCore_HPP

#include "SteamCore_enums.hpp"

class USteamCoreSubsystem : public UGameInstanceSubsystem
{
};

struct FSteamAppInstalled
{
    int32 AppID;

};

struct FSteamAppUninstalled
{
    int32 AppID;

};

class UAppList : public USteamCoreSubsystem
{
    FAppListSteamAppInstalled SteamAppInstalled;
    void OnSteamAppInstalled(const FSteamAppInstalled& Data);
    FAppListSteamAppUninstalled SteamAppUninstalled;
    void OnSteamAppUninstalled(const FSteamAppUninstalled& Data);

    int32 GetNumInstalledApps();
    int32 GetInstalledApps(TArray<int32>& AppIDs, int32 MaxAppIDs);
    int32 GetAppName(int32 AppID, FString& Name);
    int32 GetAppInstallDir(int32 AppID, FString& Directory);
    int32 GetAppBuildId(int32 AppID);
};

struct FSteamID
{
};

struct FDLCInstalled
{
    int32 AppID;

};

struct FFileDetailsResult
{
    ESteamResult Result;
    int32 FileSize;
    FString SHA;
    TArray<int32> Flags;

};

class UApps : public USteamCoreSubsystem
{
    FAppsDLCInstalled DLCInstalled;
    void OnDLCInstalled(const FDLCInstalled& Data);
    FAppsFileDetailsResultDelegate FileDetailsResultDelegate;
    void OnFileDetailsResultDelegate(const FFileDetailsResult& Data);

    void UninstallDLC(int32 AppID);
    bool MarkContentCorrupt(bool bMissingFilesOnly);
    void InstallDLC(int32 AppID);
    FString GetLaunchQueryParam(FString Key);
    int32 GetLaunchCommandLine(FString& CommandLine);
    int32 GetInstalledDepots(int32 AppID, int32 MaxDepots, TArray<int32>& Depots);
    void GetFileDetails(const FGetFileDetailsCallback& Callback, FString Filename);
    int32 GetEarliestPurchaseUnixTime(int32 AppID);
    bool GetDlcDownloadProgress(int32 AppID, int32& BytesDownloaded, int32& BytesTotal);
    int32 GetDLCCount();
    FString GetCurrentGameLanguage();
    bool GetCurrentBetaName(FString& Name);
    FString GetAvailableGameLanguages();
    FSteamID GetAppOwner();
    int32 GetAppInstallDir(int32 AppID, FString& Folder);
    int32 GetAppBuildId();
    bool BIsVACBanned();
    bool BIsTimedTrial(int32& SecondsAllowed, int32& SecondsPlayed);
    bool BIsSubscribedFromFreeWeekend();
    bool BIsSubscribedFromFamilySharing();
    bool BIsSubscribedApp(int32 AppID);
    bool BIsSubscribed();
    bool BIsLowViolence();
    bool BIsDlcInstalled(int32 AppID);
    bool BIsCybercafe();
    bool BIsAppInstalled(int32 AppID);
    bool BGetDLCDataByIndex(int32 DLC, int32& AppID, bool& bAvailable, FString& Name);
};

class USteamCoreAsyncAction : public UBlueprintAsyncActionBase
{
    TWeakObjectPtr<class UObject> m_WorldContextObject;

};

class USteamCoreAppsAsyncActionGetFileDetails : public USteamCoreAsyncAction
{
    FSteamCoreAppsAsyncActionGetFileDetailsOnCallback OnCallback;
    void OnFileDetailsResultAsyncDelegate(const FFileDetailsResult& Data, bool bWasSuccessful);

    void HandleCallback(const FFileDetailsResult& Data, bool bWasSuccessful);
    class USteamCoreAppsAsyncActionGetFileDetails* GetFileDetailsAsync(class UObject* WorldContextObject, FString Filename, float Timeout);
};

class ASteamCoreGameMode : public AGameMode
{
};

class USteamCore : public UObject
{
};

class USteamCoreSettings : public UDeveloperSettings
{
    int32 DisabledSubsystems;
    bool bEnabled;
    bool bRelaunchInSteam;
    bool bVACEnabled;
    bool bAllowP2PPacketRelay;
    int32 P2PConnectionTimeout;
    int32 SteamAppId;
    int32 SteamDevAppId;
    int32 Port;
    int32 GameServerQueryPort;
    FString GameVersion;

};

struct FSteamFriendsGroupID
{
};

struct FSteamGameID
{
};

struct FAvatarImageLoaded
{
    FSteamID SteamID;
    class UTexture2D* Image;

};

struct FFriendRichPresenceUpdate
{
    FSteamID SteamIDFriend;
    int32 AppID;

};

struct FGameConnectedChatJoin
{
    FSteamID SteamIDClanChat;
    FSteamID SteamIDUser;

};

struct FGameConnectedChatLeave
{
    FSteamID SteamIDClanChat;
    FSteamID SteamIDUser;
    bool bKicked;
    bool bDropped;

};

struct FGameConnectedClanChatMsg
{
    FSteamID SteamIDUser;
    FSteamID SteamIDClanChat;
    int32 MessageID;

};

struct FGameConnectedFriendChatMsg
{
    FSteamID SteamIDUser;
    int32 MessageID;

};

struct FGameLobbyJoinRequested
{
    FSteamID SteamIDLobby;
    FSteamID SteamIDFriend;

};

struct FGameOverlayActivated
{
    bool bActive;

};

struct FGameRichPresenceJoinRequested
{
    FSteamID SteamIDFriend;
    FString Connect;

};

struct FGameServerChangeRequested
{
    FString Server;
    FString Password;

};

struct FPersonaStateChange
{
    FSteamID SteamID;
    TArray<ESteamPersonaChange> Flags;

};

struct FSetPersonaNameResponse
{
    ESteamResult Result;
    bool bSuccess;
    bool bLocalSuccess;

};

struct FJoinClanChatRoomCompletionResult
{
    FSteamID SteamIDClanChat;
    ESteamChatRoomEnterResponse ChatRoomEnterResponse;

};

struct FClanOfficerListResponse
{
    FSteamID SteamIDClan;
    int32 Officers;
    bool bSuccess;

};

struct FDownloadClanActivityCountsResult
{
    bool bSuccess;

};

class UFriends : public USteamCoreSubsystem
{
    FFriendsAvatarImageLoaded AvatarImageLoaded;
    void OnAvatarImageLoaded(const FAvatarImageLoaded& Data);
    FFriendsFriendRichPresenceUpdate FriendRichPresenceUpdate;
    void OnFriendRichPresenceUpdate(const FFriendRichPresenceUpdate& Data);
    FFriendsGameConnectedChatJoin GameConnectedChatJoin;
    void OnGameConnectedChatJoin(const FGameConnectedChatJoin& Data);
    FFriendsGameConnectedChatLeave GameConnectedChatLeave;
    void OnGameConnectedChatLeave(const FGameConnectedChatLeave& Data);
    FFriendsGameConnectedClanChatMsg GameConnectedClanChatMsg;
    void OnGameConnectedClanChatMsg(const FGameConnectedClanChatMsg& Data);
    FFriendsGameConnectedFriendChatMsg GameConnectedFriendChatMsg;
    void OnGameConnectedFriendChatMsg(const FGameConnectedFriendChatMsg& Data);
    FFriendsGameLobbyJoinRequested GameLobbyJoinRequested;
    void OnGameLobbyJoinRequested(const FGameLobbyJoinRequested& Data);
    FFriendsGameOverlayActivated GameOverlayActivated;
    void OnGameOverlayActivated(const FGameOverlayActivated& Data);
    FFriendsGameRichPresenceJoinRequested GameRichPresenceJoinRequested;
    void OnGameRichPresenceJoinRequested(const FGameRichPresenceJoinRequested& Data);
    FFriendsGameServerChangeRequested GameServerChangeRequested;
    void OnGameServerChangeRequested(const FGameServerChangeRequested& Data);
    FFriendsPersonaStateChange PersonaStateChange;
    void OnPersonaStateChange(const FPersonaStateChange& Data);
    FFriendsSetPersonaNameResponse SetPersonaNameResponse;
    void OnSetPersonaNameResponse(const FSetPersonaNameResponse& Data);
    FFriendsJoinClanChatRoomCompletionResult JoinClanChatRoomCompletionResult;
    void OnJoinClanChatRoomCompletionResult(const FJoinClanChatRoomCompletionResult& Data);
    FFriendsClanOfficerListResponse ClanOfficerListResponse;
    void OnClanOfficerListResponse(const FClanOfficerListResponse& Data);
    FFriendsDownloadClanActivityCountsResult DownloadClanActivityCountsResult;
    void OnDownloadClanActivityCountsResult(const FDownloadClanActivityCountsResult& Data);

    bool SetRichPresence(FString Key, FString Value);
    void SetPlayedWith(FSteamID SteamIDUserPlayedWith);
    void SetPersonaName(const FSetPersonaNameCallback& Callback, FString Name);
    bool SetListenForFriendsMessages(bool bInterceptEnabled);
    void SetInGameVoiceSpeaking(FSteamID SteamIDUser, bool bSpeaking);
    bool SendClanChatMessage(FSteamID SteamIDClanChat, FString Text);
    bool RequestUserInformation(FSteamID SteamIDUser, bool bRequireNameOnly);
    void RequestFriendRichPresence(FSteamID SteamIDFriend);
    void RequestClanOfficerList(const FRequestClanOfficerListCallback& Callback, FSteamID SteamIDClan);
    bool ReplyToFriendMessage(FSteamID SteamIDFriend, FString MsgToSend);
    bool RegisterProtocolInOverlayBrowser(FString Protocol);
    bool OpenClanChatWindowInSteam(FSteamID SteamIDClanChat);
    bool LeaveClanChatRoom(FSteamID SteamIDClan);
    void JoinClanChatRoom(const FJoinClanChatRoomCallback& Callback, FSteamID SteamIDClan);
    bool IsUserInSource(FSteamID SteamIDUser, FSteamID SteamIDSource);
    void IsFollowing(const FIsFollowingCallback& Callback, FSteamID SteamID);
    bool IsClanPublic(FSteamID SteamIDClan);
    bool IsClanOfficialGameGroup(FSteamID SteamIDClan);
    bool IsClanChatWindowOpenInSteam(FSteamID SteamIDClanChat);
    bool IsClanChatAdmin(FSteamID SteamIDClanChat, FSteamID SteamIDUser);
    bool InviteUserToGame(FSteamID SteamIDFriend, FString ConnectString);
    bool HasFriend(FSteamID SteamIDFriend, TArray<ESteamFriendFlags> Flags);
    TArray<ESteamUserRestriction> GetUserRestrictions();
    class UTexture2D* GetSmallFriendAvatar(FSteamID SteamIDFriend);
    FString GetPlayerNickname_Pure(FSteamID SteamIDPlayer);
    FString GetPlayerNickname(FSteamID SteamIDPlayer);
    ESteamPersonaState GetPersonaState_Pure();
    ESteamPersonaState GetPersonaState();
    FString GetPersonaName_Pure();
    FString GetPersonaName();
    class UTexture2D* GetMediumFriendAvatar(FSteamID SteamIDFriend);
    class UTexture2D* GetLargeFriendAvatar(FSteamID SteamIDFriend);
    int32 GetFriendSteamLevel(FSteamID SteamIDFriend);
    FString GetFriendsGroupName(FSteamFriendsGroupID FriendsGroupID);
    void GetFriendsGroupMembersList(FSteamFriendsGroupID FriendsGroupID, TArray<FSteamID>& SteamIDMembers, int32 MembersCount);
    int32 GetFriendsGroupMembersCount(FSteamFriendsGroupID FriendsGroupID);
    FSteamFriendsGroupID GetFriendsGroupIDByIndex(int32 FriendGroup);
    int32 GetFriendsGroupCount();
    int32 GetFriendRichPresenceKeyCount(FSteamID SteamIDFriend);
    FString GetFriendRichPresenceKeyByIndex(FSteamID SteamIDFriend, int32 Key);
    FString GetFriendRichPresence(FSteamID SteamIDFriend, FString Key);
    ESteamFriendRelationship GetFriendRelationship(FSteamID SteamIDFriend);
    ESteamPersonaState GetFriendPersonaState(FSteamID SteamIDFriend);
    FString GetFriendPersonaNameHistory(FSteamID SteamIDFriend, int32 PersonaName);
    FString GetFriendPersonaName(FSteamID SteamIDFriend);
    int32 GetFriendMessage(FSteamID SteamIDFriend, int32 MessageID, FString& Text, ESteamChatEntryType& ChatEntryType);
    bool GetFriendGamePlayed(FSteamID SteamIDFriend, FSteamGameID& GameID, FString& GameIP, int32& ConnectionPort, int32& QueryPort, FSteamID& SteamIDLobby);
    FSteamID GetFriendFromSourceByIndex(FSteamID SteamIDSource, int32 Ifriend);
    int32 GetFriendCountFromSource(FSteamID SteamIDSource);
    int32 GetFriendCount(TArray<ESteamFriendFlags> Flags);
    int32 GetFriendCoplayTime(FSteamID SteamIDFriend);
    int32 GetFriendCoplayGame(FSteamID SteamIDFriend);
    FSteamID GetFriendByIndex(int32 Ifriend, TArray<ESteamFriendFlags> Flags);
    void GetFollowerCount(const FGetFollowerCountCallback& Callback, FSteamID SteamID);
    int32 GetCoplayFriendCount();
    FSteamID GetCoplayFriend(int32 CoplayFriend);
    FString GetClanTag(FSteamID SteamIDClan);
    FSteamID GetClanOwner(FSteamID SteamIDClan);
    int32 GetClanOfficerCount(FSteamID SteamIDClan);
    FSteamID GetClanOfficerByIndex(FSteamID SteamIDClan, int32 Officer);
    FString GetClanName(FSteamID SteamIDClan);
    int32 GetClanCount();
    int32 GetClanChatMessage(FSteamID SteamIDClanChat, int32 MessageID, FString& Text, ESteamChatEntryType& ChatEntryType, FSteamID& SteamIDChatter);
    int32 GetClanChatMemberCount(FSteamID SteamIDClan);
    FSteamID GetClanByIndex(int32 Clan);
    bool GetClanActivityCounts(FSteamID SteamIDClan, int32& Online, int32& InGame, int32& Chatting);
    FSteamID GetChatMemberByIndex(FSteamID SteamIDClan, int32 User);
    void EnumerateFollowingList(const FEnumerateFollowingListCallback& Callback, int32 StartIndex);
    void DownloadClanActivityCounts(const FDownloadClanActivityCountsCallback& Callback, TArray<FSteamID> SteamIDClans);
    bool CloseClanChatWindowInSteam(FSteamID SteamIDClanChat);
    void ClearRichPresence();
    void ActivateGameOverlayToWebPage(FString URL, ESteamActivateGameOverlayToWebPageMode Mode);
    void ActivateGameOverlayToUser(FString Dialog, FSteamID SteamID);
    void ActivateGameOverlayToStore(int32 AppID, ESteamOverlayToStoreFlag Flag);
    void ActivateGameOverlayInviteDialogConnectString(FString ConnectString);
    void ActivateGameOverlayInvitedialog(FSteamID SteamIDLobby);
    void ActivateGameOverlay(FString Dialog);
};

class USteamCoreFriendsAsyncActionSetPersonaName : public USteamCoreAsyncAction
{
    FSteamCoreFriendsAsyncActionSetPersonaNameOnCallback OnCallback;
    void OnSetPersonaNameAsyncDelegate(const FSetPersonaNameResponse& Data, bool bWasSuccessful);

    class USteamCoreFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(class UObject* WorldContextObject, FString Name, float Timeout);
    void HandleCallback(const FSetPersonaNameResponse& Data, bool bWasSuccessful);
};

class USteamCoreFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreAsyncAction
{
    FSteamCoreFriendsAsyncActionDownloadClanActivityCountsOnCallback OnCallback;
    void OnDownloadClanActivityCountsAsyncDelegate(const FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);

    void HandleCallback(const FDownloadClanActivityCountsResult& Data, bool bWasSuccessful);
    class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(class UObject* WorldContextObject, TArray<FSteamID> SteamIDClans, float Timeout);
};

class USteamCoreFriendsAsyncActionRequestClanOfficerList : public USteamCoreAsyncAction
{
    FSteamCoreFriendsAsyncActionRequestClanOfficerListOnCallback OnCallback;
    void OnRequestClanOfficerListAsyncDelegate(const FClanOfficerListResponse& Data, bool bWasSuccessful);

    class USteamCoreFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(class UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout);
    void HandleCallback(const FClanOfficerListResponse& Data, bool bWasSuccessful);
};

class USteamCoreFriendsAsyncActionJoinClanChatRoom : public USteamCoreAsyncAction
{
    FSteamCoreFriendsAsyncActionJoinClanChatRoomOnCallback OnCallback;
    void OnJoinClanChatRoomAsyncDelegate(const FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful);

    class USteamCoreFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(class UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout);
    void HandleCallback(const FJoinClanChatRoomCompletionResult& Data, bool bWasSuccessful);
};

struct FFriendsEnumerateFollowingList
{
    ESteamResult Result;
    TArray<FSteamID> SteamIDs;
    int32 Results;
    int32 TotalResult;

};

class USteamCoreFriendsAsyncActionEnumerateFollowingList : public USteamCoreAsyncAction
{
    FSteamCoreFriendsAsyncActionEnumerateFollowingListOnCallback OnCallback;
    void OnEnumerateFollowingListAsyncDelegate(const FFriendsEnumerateFollowingList& Data, bool bWasSuccessful);

    void HandleCallback(const FFriendsEnumerateFollowingList& Data, bool bWasSuccessful);
    class USteamCoreFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(class UObject* WorldContextObject, int32 StartIndex, float Timeout);
};

struct FFriendsIsFollowing
{
    ESteamResult Result;
    FSteamID SteamID;
    bool bIsFollowing;

};

class USteamCoreFriendsAsyncActionIsFollowing : public USteamCoreAsyncAction
{
    FSteamCoreFriendsAsyncActionIsFollowingOnCallback OnCallback;
    void OnIsFollowingAsyncDelegate(const FFriendsIsFollowing& Data, bool bWasSuccessful);

    class USteamCoreFriendsAsyncActionIsFollowing* IsFollowingAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    void HandleCallback(const FFriendsIsFollowing& Data, bool bWasSuccessful);
};

struct FFriendsGetFollowerCount
{
    ESteamResult Result;
    FSteamID SteamID;
    int32 Count;

};

class USteamCoreFriendsAsyncActionGetFollowerCount : public USteamCoreAsyncAction
{
    FSteamCoreFriendsAsyncActionGetFollowerCountOnCallback OnCallback;
    void OnGetFollowerCountAsyncDelegate(const FFriendsGetFollowerCount& Data, bool bWasSuccessful);

    void HandleCallback(const FFriendsGetFollowerCount& Data, bool bWasSuccessful);
    class USteamCoreFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout);
};

class USteamCoreFriendsAsyncActionRequestUserInformation : public USteamCoreAsyncAction
{
    FSteamCoreFriendsAsyncActionRequestUserInformationOnCallback OnCallback;
    void OnRequestUserInformationAsyncDelegate();

    class USteamCoreFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(class UObject* WorldContextObject, FSteamID SteamIDUser, bool bRequireNameOnly, float Timeout);
    void HandleCallback();
};

struct FSearchForGameProgressCallback
{
    FString SearchID;
    ESteamResult Result;
    FSteamID LobbyID;
    FSteamID SteamIDEndedSearch;
    int32 SecondsRemainingEstimate;
    int32 PlayersSearching;

};

struct FSearchForGameResultCallback
{
    FString SearchID;
    ESteamResult Result;
    int32 CountPlayersInGame;
    int32 CountAcceptedGame;
    FSteamID SteamIDHost;
    bool bFinalCallback;

};

struct FRequestPlayersForGameProgressCallback
{
    ESteamResult Result;
    FString SearchID;

};

struct FRequestPlayersForGameResultCallback
{
    ESteamResult Result;
    FString SearchID;
    FSteamID SteamIDPlayerFound;
    FSteamID SteamIDLobby;
    ESteamPlayerAcceptState PlayerAcceptState;
    int32 PlayerIndex;
    int32 TotalPlayersFound;
    int32 TotalPlayersAcceptedGame;
    int32 SuggestedTeamIndex;
    FString UniqueGameID;

};

struct FRequestPlayersForGameFinalResultCallback
{
    ESteamResult Result;
    FString SearchID;
    FString UniqueGameID;

};

struct FSubmitPlayerResultResultCallback
{
    ESteamResult Result;
    FString UniqueGameID;
    FSteamID SteamIDPlayer;

};

struct FEndGameResultCallback
{
    ESteamResult Result;
    FString UniqueGameID;

};

class USteamGameSearch : public USteamCoreSubsystem
{
    FSteamGameSearchSearchForGameProgressDelegate SearchForGameProgressDelegate;
    void SearchForGameProgressDelegate(const FSearchForGameProgressCallback& Data);
    FSteamGameSearchSearchForGameResultDelegate SearchForGameResultDelegate;
    void SearchForGameResultDelegate(const FSearchForGameResultCallback& Data);
    FSteamGameSearchRequestPlayersForGameProgressDelegate RequestPlayersForGameProgressDelegate;
    void RequestPlayersForGameProgressDelegate(const FRequestPlayersForGameProgressCallback& Data);
    FSteamGameSearchRequestPlayersForGameResultDelegate RequestPlayersForGameResultDelegate;
    void RequestPlayersForGameResultDelegate(const FRequestPlayersForGameResultCallback& Data);
    FSteamGameSearchRequestPlayersForGameFinalResultDelegate RequestPlayersForGameFinalResultDelegate;
    void RequestPlayersForGameFinalResultDelegate(const FRequestPlayersForGameFinalResultCallback& Data);
    FSteamGameSearchSubmitPlayerResultResultDelegate SubmitPlayerResultResultDelegate;
    void SubmitPlayerResultResultDelegate(const FSubmitPlayerResultResultCallback& Data);
    FSteamGameSearchEndGameResultDelegate EndGameResultDelegate;
    void EndGameResultDelegate(const FEndGameResultCallback& Data);

    ESteamGameSearchErrorCode SubmitPlayerResult(FString UniqueGameID, FSteamID SteamIDPlayer, ESteamPlayerResult PlayerResult);
    ESteamGameSearchErrorCode SetGameHostParams(FString Key, TArray<FString> Values);
    ESteamGameSearchErrorCode SetConnectionDetails(FString ConnectionDetails);
    ESteamGameSearchErrorCode SearchForGameWithLobby(FSteamID SteamIDLobby, int32 PlayerMin, int32 PlayerMax);
    ESteamGameSearchErrorCode SearchForGameSolo(int32 PlayerMin, int32 PlayerMax);
    ESteamGameSearchErrorCode RetrieveConnectionDetails(FSteamID SteamIDHost, FString& ConnectionDetails, int32 NumConnectionDetails);
    ESteamGameSearchErrorCode RequestPlayersForGame(int32 PlayerMin, int32 PlayerMax, int32 MaxTeamSize);
    ESteamGameSearchErrorCode HostConfirmGameStart(FString UniqueGameID);
    ESteamGameSearchErrorCode EndGameSearch();
    ESteamGameSearchErrorCode EndGame(FString UniqueGameID);
    ESteamGameSearchErrorCode DeclineGame();
    ESteamGameSearchErrorCode CancelRequestPlayersForGame();
    ESteamGameSearchErrorCode AddGameSearchParams(FString KeyToFind, TArray<FString> ValuesToFind);
    ESteamGameSearchErrorCode AcceptGame();
};

struct FSteamTicketHandle
{
};

struct FGSPolicyResponse
{
    bool BSecure;

};

struct FGSClientGroupStatus
{
    FSteamID SteamIDUser;
    FSteamID SteamIDGroup;
    bool bMember;
    bool bOfficer;

};

struct FValidateAuthTicketResponse
{
    FSteamID SteamID;
    ESteamAuthSessionResponse AuthSessionResponse;
    FSteamID OwnerSteamID;

};

struct FGSClientApprove
{
    FSteamID SteamID;
    FSteamID OwnerSteamID;

};

struct FGSClientDeny
{
    FSteamID SteamID;
    ESteamDenyReason DenyReason;
    FString OptionalText;

};

class USteamGameServer : public USteamCoreSubsystem
{
    FSteamGameServerGSPolicyResponse GSPolicyResponse;
    void OnGSPolicyResponse(const FGSPolicyResponse& Data);
    FSteamGameServerGSClientGroupStatus GSClientGroupStatus;
    void OnGSClientGroupStatus(const FGSClientGroupStatus& Data);
    FSteamGameServerGSValidateAuthTicketResponse GSValidateAuthTicketResponse;
    void OnGSValidateAuthTicketResponse(const FValidateAuthTicketResponse& Data);
    FSteamGameServerGSClientApprove GSClientApprove;
    void OnGSClientApprove(const FGSClientApprove& Data);
    FSteamGameServerGSClientDeny GSClientDeny;
    void OnGSClientDeny(const FGSClientDeny& Data);

    bool WasRestartRequested();
    ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32 AppID);
    void SetSpectatorServerName(FString SpectatorServerName);
    void SetSpectatorPort(int32 SpectatorPort);
    void SetServerName(FString ServerName);
    void SetRegion(FString Region);
    void SetProduct(FString Product);
    void SetPasswordProtected(bool bPasswordProtected);
    void SetModDir(FString ModDir);
    void SetMaxPlayerCount(int32 PlayersMax);
    void SetMapName(FString MapName);
    void SetKeyValue(FString Key, FString Value);
    void SetHeartbeatInterval(int32 HeartbeatInterval);
    void SetGameTags(FString GameTags);
    void SetGameDescription(FString GameDescription);
    void SetGameData(FString GameData);
    void SetDedicatedServer(bool bDedicated);
    void SetBotPlayerCount(int32 BotPlayers);
    bool RequestUserGroupStatus(FSteamID SteamIDUser, FSteamID SteamIDGroup);
    void LogOnAnonymous();
    void LogOn(FString Token);
    void LogOff();
    FSteamID GetServerSteamID_PureCompact();
    FSteamID GetServerSteamID_Pure();
    FSteamID GetServerSteamID();
    FString GetServerPublicIP_PureCompact();
    FString GetServerPublicIP_Pure();
    FString GetServerPublicIP();
    FSteamTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);
    void ForceHeartbeat();
    void EndAuthSession(FSteamID SteamID);
    void EnableHeartbeats(bool bActive);
    FSteamID CreateUnauthenticatedUserConnection();
    void ComputeNewPlayerCompatibility(const FComputeNewPlayerCompatibilityCallback& Callback, FSteamID SteamIDNewPlayer);
    void ClearAllKeyValues();
    void CancelAuthTicket(FSteamTicketHandle TicketHandle);
    bool BUpdateUserData(FSteamID SteamIDUser, FString PlayerName, int32 Score);
    bool BSecure();
    bool BLoggedOn();
    ESteamBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID);
    void AssociateWithClan(const FAssociateWithClanCallback& Callback, FSteamID SteamIDClan);
};

struct FGSStatsUnloaded
{
    FSteamID SteamIDUser;

};

class UGameServerStats : public USteamCoreSubsystem
{
    FGameServerStatsGSStatsUnloaded GSStatsUnloaded;
    void OnGSStatsUnloaded(const FGSStatsUnloaded& Data);

    bool UpdateUserAvgRateStat(FSteamID SteamIDUser, FString Name, float CountThisSession, float SessionLength);
    bool SetUserStatInt(FSteamID SteamIDUser, FString Name, int32 Data);
    bool SetUserStatFloat(FSteamID SteamIDUser, FString Name, float Data);
    bool SetUserAchievement(FSteamID SteamIDUser, FString Name);
    void ServerStoreUserStats(const FServerStoreUserStatsCallback& Callback, FSteamID SteamIDUser);
    void ServerRequestUserStats(const FServerRequestUserStatsCallback& Callback, FSteamID SteamIDUser);
    bool GetUserStatInt(FSteamID SteamIDUser, FString Name, int32& Data);
    bool GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& Data);
    bool GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved);
    bool ClearUserAchievement(FSteamID SteamIDUser, FString Name);
};

struct FInputHandle
{
};

struct FInputAnalogActionHandle
{
};

struct FInputMotionData
{
    float RotQuatX;
    float RotQuatY;
    float RotQuatZ;
    float RotQuatW;
    float PosAccelX;
    float PosAccelY;
    float PosAccelZ;
    float RotVelX;
    float RotVelY;
    float RotVelZ;

};

struct FInputActionSetHandle
{
};

struct FInputDigitalActionHandle
{
};

struct FInputDigitalActionData
{
    bool bState;
    bool bActive;

};

struct FInputAnalogActionData
{
    ESteamCoreInputSourceMode Mode;
    float X;
    float Y;
    bool bActive;

};

class UInput : public USteamCoreSubsystem
{

    void TriggerVibration(FInputHandle Handle, uint8 LeftSpeed, uint8 RightSpeed);
    void TriggerRepeatedHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec, uint8 OffMicroSec, uint8 Repeat, uint8 Flags);
    void TriggerHapticPulse(FInputHandle Handle, ESteamCoreControllerPad TargetPad, uint8 DurationMicroSec);
    ESteamCoreInputActionOrigin TranslateActionOrigin(ESteamCoreInputType DestinationInputType, ESteamCoreInputActionOrigin SourceOrigin);
    void StopAnalogActionMomentum(FInputHandle Handle, FInputAnalogActionHandle EAction);
    bool Shutdown();
    bool ShowBindingPanel(FInputHandle Handle);
    void SetLEDColor(FInputHandle Handle, uint8 ColorR, uint8 ColorG, uint8 ColorB, ESteamCoreInputLEDFlag Flags);
    bool Init();
    FString GetStringForXboxOrigin(ESteamCoreXboxOrigin Origin);
    FString GetStringForActionOrigin(ESteamCoreInputActionOrigin Origin);
    int32 GetRemotePlaySessionID(FInputHandle Handle);
    FInputMotionData GetMotionData(FInputHandle Handle);
    ESteamCoreInputType GetInputTypeForHandle(FInputHandle Handle);
    FString GetGlyphForXboxOrigin(ESteamCoreXboxOrigin Origin);
    FString GetGlyphForActionOrigin(ESteamCoreInputActionOrigin Origin);
    int32 GetGamepadIndexForController(FInputHandle Handle);
    int32 GetDigitalActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputDigitalActionHandle DigitalActionHandle, TArray<ESteamCoreInputActionOrigin>& OriginsOut);
    FInputDigitalActionHandle GetDigitalActionHandle(FString PszActionName);
    FInputDigitalActionData GetDigitalActionData(FInputHandle Handle, FInputDigitalActionHandle DigitalActionHandle);
    bool GetDeviceBindingRevision(FInputHandle Handle, int32& Major, int32& Minor);
    FInputActionSetHandle GetCurrentActionSet(FInputHandle Handle);
    FInputHandle GetControllerForGamepadIndex(int32 Index);
    int32 GetConnectedControllers(TArray<FInputHandle>& OutHandles);
    int32 GetAnalogActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputAnalogActionHandle AnalogActionHandle, TArray<ESteamCoreInputActionOrigin>& OriginsOut);
    FInputAnalogActionHandle GetAnalogActionHandle(FString PszActionName);
    FInputAnalogActionData GetAnalogActionData(FInputHandle Handle, FInputAnalogActionHandle AnalogActionHandle);
    int32 GetActiveActionSetLayers(FInputHandle Handle, TArray<FInputActionSetHandle>& Data);
    FInputActionSetHandle GetActionSetHandle(FString ActionSetName);
    ESteamCoreInputActionOrigin GetActionOriginFromXboxOrigin(FInputHandle Handle, ESteamCoreXboxOrigin Origin);
    void DeactivateAllActionSetLayers(FInputHandle Handle);
    void DeactivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);
    void ActivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle);
    void ActivateActionSet(FInputHandle Handle, FInputActionSetHandle ActionSetHandle);
};

struct FSteamInventoryResult
{
    int32 Value;

};

struct FSteamItemDef
{
    int32 Value;

};

struct FSteamItemInstanceID
{
};

struct FSteamInventoryUpdateHandle
{
};

struct FSteamItemDetails
{
    FSteamItemInstanceID InstanceID;
    FSteamItemDef Definition;
    int32 Quantity;
    TArray<TEnumAsByte<ESteamCoreItemFlags>> Flags;

};

struct FSteamInventoryResultReady
{
    FSteamInventoryResult Handle;
    ESteamResult Result;

};

struct FSteamInventoryFullUpdate
{
    FSteamInventoryResult Handle;

};

struct FSteamInventoryStartPurchaseResult
{
    ESteamResult Result;
    FString OrderId;
    FString TransactionId;

};

struct FSteamInventoryRequestPricesResult
{
    ESteamResult Result;
    FString Currency;

};

struct FSteamInventoryEligiblePromoItemDefIDs
{
    ESteamResult Result;
    FSteamID SteamID;
    int32 NumEligiblePromoItemDefs;
    bool bCachedData;

};

class UInventory : public USteamCoreSubsystem
{
    FInventorySteamInventoryResultReady SteamInventoryResultReady;
    void OnSteamInventoryResultReady(const FSteamInventoryResultReady& Data);
    FInventorySteamInventoryDefinitionUpdate SteamInventoryDefinitionUpdate;
    void OnSteamInventoryDefinitionUpdate();
    FInventorySteamInventoryFullUpdate SteamInventoryFullUpdate;
    void OnSteamInventoryFullUpdate(const FSteamInventoryFullUpdate& Data);
    FInventorySteamInventoryStartPurchaseResult SteamInventoryStartPurchaseResult;
    void OnSteamInventoryStartPurchaseResultDelegate(const FSteamInventoryStartPurchaseResult& Data);
    FInventorySteamInventoryRequestPricesResultDelegate SteamInventoryRequestPricesResultDelegate;
    void OnSteamInventoryRequestPricesResultDelegate(const FSteamInventoryRequestPricesResult& Data);
    FInventorySteamInventoryEligiblePromoItemDefIDs SteamInventoryEligiblePromoItemDefIDs;
    void OnSteamInventoryEligiblePromoItemDefIDs(const FSteamInventoryEligiblePromoItemDefIDs& Data);

    bool TriggerItemDrop(FSteamInventoryResult& Result, FSteamItemDef ListDefinition);
    bool TransferItemQuantity(FSteamInventoryResult& Result, FSteamItemInstanceID ItemIDSource, int32 Quantity, FSteamItemInstanceID ItemIDDest);
    bool SubmitUpdateProperties(FSteamInventoryUpdateHandle Handle, FSteamInventoryResult& ResultHandle);
    FSteamInventoryUpdateHandle StartUpdateProperties();
    void StartPurchase(const FStartPurchaseCallback& Callback, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity);
    bool SetPropertyString(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, FString Value);
    bool SetPropertyInt(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, int32 Value);
    bool SetPropertyFloat(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, float Value);
    bool SetPropertyBool(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName, bool bValue);
    bool SerializeResult(FSteamInventoryResult Handle, TArray<uint8>& Buffer);
    void RequestPrices(const FRequestPricesCallback& Callback);
    void RequestEligiblePromoItemDefinitionsIDs(const FRequestEligiblePromoItemDefinitionsIDsCallback& Callback, FSteamID SteamID);
    bool RemoveProperty(FSteamInventoryUpdateHandle Handle, FSteamItemInstanceID ItemId, FString PropertyName);
    bool LoadItemDefinitions();
    bool GrantPromoItems(FSteamInventoryResult& Result);
    int32 GetResultTimestamp(FSteamInventoryResult Handle);
    ESteamResult GetResultStatus(FSteamInventoryResult Handle);
    bool GetResultItems(FSteamInventoryResult Handle, TArray<FSteamItemDetails>& Items);
    bool GetResultItemProperty(FSteamInventoryResult Handle, int32 ItemIndex, FString PropertyName, FString& Value);
    int32 GetNumItemsWithPrices();
    bool GetItemsWithPrices(TArray<FSteamItemDef>& ItemDefs, TArray<int32>& Prices, TArray<int32>& BasePrices);
    bool GetItemsByID(FSteamInventoryResult& InventoryResult, TArray<FSteamItemInstanceID> InstanceIDs);
    bool GetItemPrice(FSteamItemDef ItemDef, int32& Price, int32& BasePrice);
    bool GetItemDefinitionProperty(FSteamItemDef ItemDef, FString PropertyName, FString& Value);
    bool GetItemDefinitionIDs(TArray<FSteamItemDef>& ItemDefs);
    bool GetEligiblePromoItemDefinitionIDs(FSteamID SteamID, TArray<FSteamItemDef>& ItemDefs);
    bool GetAllItems(FSteamInventoryResult& Handle);
    bool GenerateItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ItemDefs, TArray<int32> Quantity);
    bool ExchangeItems(FSteamInventoryResult& Result, TArray<FSteamItemDef> ArrayGenerate, TArray<int32> ArrayGenerateQuantity, TArray<FSteamItemInstanceID> ArrayDestroy, TArray<int32> ArrayDestroyQuantity);
    void DestroyResult(FSteamInventoryResult Handle);
    bool DeserializeResult(FSteamInventoryResult& Result, TArray<uint8> Buffer, bool bReservedMustBeFalse);
    bool ConsumeItem(FSteamInventoryResult& Result, FSteamItemInstanceID ItemConsume, int32 Quantity);
    bool CheckResultSteamID(FSteamInventoryResult Handle, FSteamID SteamIDExpected);
    bool AddPromoItems(FSteamInventoryResult& OutResult, TArray<FSteamItemDef> ItemDefs);
    bool AddPromoItem(FSteamInventoryResult& Result, FSteamItemDef ItemDef);
};

class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : public USteamCoreAsyncAction
{
    FSteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDsOnCallback OnCallback;
    void OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate(const FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful);

    class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDsAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    void HandleCallback(const FSteamInventoryEligiblePromoItemDefIDs& Data, bool bWasSuccessful);
};

class USteamCoreInventoryAsyncActionRequestPricesResult : public USteamCoreAsyncAction
{
    FSteamCoreInventoryAsyncActionRequestPricesResultOnCallback OnCallback;
    void OnSteamInventoryRequestPricesResultAsyncDelegate(const FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful);

    class USteamCoreInventoryAsyncActionRequestPricesResult* RequestPricesAsync(class UObject* WorldContextObject, float Timeout);
    void HandleCallback(const FSteamInventoryRequestPricesResult& Data, bool bWasSuccessful);
};

class USteamCoreInventoryAsyncActionStartPurchaseResult : public USteamCoreAsyncAction
{
    FSteamCoreInventoryAsyncActionStartPurchaseResultOnCallback OnCallback;
    void OnSteamInventoryStartPurchaseResultAsyncDelegate(const FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful);

    class USteamCoreInventoryAsyncActionStartPurchaseResult* StartPurchaseAsync(class UObject* WorldContextObject, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity, float Timeout);
    void HandleCallback(const FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful);
};

struct FFavoritesListAccountsUpdated
{
    ESteamResult Result;

};

struct FFavoritesListChanged
{
    FString IP;
    int32 QueryPort;
    int32 ConnectionPort;
    int32 AppID;
    TArray<ESteamFavoriteFlags> Flags;
    bool bAdd;
    FSteamID SteamID;

};

struct FLobbyChatMsg
{
    FSteamID SteamIDLobby;
    FSteamID SteamIDUser;
    ESteamChatEntryType ChatEntryType;
    int32 ChatID;

};

struct FLobbyChatUpdate
{
    FSteamID SteamIDLobby;
    FSteamID SteamIDUserChanged;
    FSteamID SteamIDMakingChange;
    TArray<ESteamChatMemberStateChange> ChatMemberStateChange;

};

struct FLobbyDataUpdate
{
    FSteamID SteamIDLobby;
    FSteamID SteamIDMember;
    bool bSuccess;

};

struct FLobbyEnterData
{
    FSteamID SteamIDLobby;
    bool bLocked;
    ESteamChatRoomEnterResponse ChatRoomEnterResponse;

};

struct FLobbyGameCreated
{
    FSteamID SteamIDLobby;
    FSteamID SteamIDGameServer;
    FString IP;
    int32 Port;

};

struct FLobbyInviteData
{
    FSteamID SteamIDUser;
    FSteamID SteamIDLobby;
    FSteamGameID GameID;

};

struct FLobbyKickedData
{
    FSteamID SteamIDLobby;
    FSteamID SteamIDAdmin;
    bool bKickedDueToDisconnect;

};

class UMatchmaking : public USteamCoreSubsystem
{
    FMatchmakingFavoritesListAccountsUpdated FavoritesListAccountsUpdated;
    void OnFavoritesListAccountsUpdated(const FFavoritesListAccountsUpdated& Data);
    FMatchmakingFavoritesListChanged FavoritesListChanged;
    void OnFavoritesListChanged(const FFavoritesListChanged& Data);
    FMatchmakingLobbyChatMsg LobbyChatMsg;
    void OnLobbyChatMsg(const FLobbyChatMsg& Data);
    FMatchmakingLobbyChatUpdate LobbyChatUpdate;
    void OnLobbyChatUpdate(const FLobbyChatUpdate& Data);
    FMatchmakingLobbyDataUpdate LobbyDataUpdate;
    void OnLobbyDataUpdate(FLobbyDataUpdate Data);
    FMatchmakingLobbyEnter LobbyEnter;
    void OnLobbyEnter(const FLobbyEnterData& Data);
    FMatchmakingLobbyGameCreated LobbyGameCreated;
    void OnLobbyGameCreated(const FLobbyGameCreated& Data);
    FMatchmakingLobbyInvite LobbyInvite;
    void OnLobbyInvite(const FLobbyInviteData& Data);
    FMatchmakingLobbyKicked LobbyKicked;
    void OnLobbyKicked(const FLobbyKickedData& Data);

    bool SetLobbyType(FSteamID SteamIDLobby, ESteamLobbyType LobbyType);
    bool SetLobbyOwner(FSteamID SteamIDLobby, FSteamID SteamIDNewOwner);
    bool SetLobbyMemberLimit(FSteamID SteamIDLobby, int32 MaxMembers);
    void SetLobbyMemberData(FSteamID SteamIDLobby, FString Key, FString Value);
    bool SetLobbyJoinable(FSteamID SteamIDLobby, bool bLobbyJoinable);
    void SetLobbyGameServer(FSteamID SteamIDLobby, FString GameServerIP, int32 GameServerPort, FSteamID SteamIDGameServer);
    bool SetLobbyData(FSteamID SteamIDLobby, FString Key, FString Value);
    bool SetLinkedLobby(FSteamID SteamIDLobby, FSteamID SteamIDLobbyDependent);
    bool SendLobbyChatMsg(FSteamID SteamIDLobby, FString Message);
    void RequestLobbyList(const FRequestLobbyListCallback& Callback);
    bool RequestLobbyData(FSteamID SteamIDLobby);
    bool RemoveFavoriteGame(int32 AppID, FString IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags);
    void LeaveLobby(FSteamID SteamIDLobby);
    void JoinLobby(const FJoinLobbyCallback& Callback, FSteamID SteamIDLobby);
    bool InviteUserToLobby(FSteamID SteamIDLobby, FSteamID SteamIDInvitee);
    int32 GetNumLobbyMembers(FSteamID SteamIDLobby);
    FSteamID GetLobbyOwner(FSteamID SteamIDLobby);
    int32 GetLobbyMemberLimit(FSteamID SteamIDLobby);
    FString GetLobbyMemberData(FSteamID SteamIDLobby, FSteamID SteamIDUser, FString Key);
    FSteamID GetLobbyMemberByIndex(FSteamID SteamIDLobby, int32 Member);
    bool GetLobbyGameServer(FSteamID SteamIDLobby, FString& GameServerIP, int32& GameServerPort, FSteamID& SteamIDGameServer);
    int32 GetLobbyDataCount(FSteamID SteamIDLobby);
    bool GetLobbyDataByIndex(FSteamID SteamIDLobby, int32 LobbyData, FString& Key, FString& Value);
    FString GetLobbyData(FSteamID SteamIDLobby, FString Key);
    int32 GetLobbyChatEntry(FSteamID SteamIDLobby, int32 MessageID, FSteamID& SteamIDUser, FString& Message, ESteamChatEntryType& ChatEntryType);
    FSteamID GetLobbyByIndex(int32 Lobby);
    int32 GetFavoriteGameCount();
    bool GetFavoriteGame(int32 Game, int32& AppID, FString& IP, int32& ConnectionPort, int32& QueryPort, TArray<ESteamFavoriteFlags>& Flags, int32& TimeLastPlayedOnServer);
    bool DeleteLobbyData(FSteamID SteamIDLobby, FString Key);
    void CreateLobby(const FCreateLobbyCallback& Callback, ESteamLobbyType LobbyType, int32 MaxMembers);
    void AddRequestLobbyListStringFilter(FString KeyToMatch, FString ValueToMatch, ESteamLobbyComparison ComparisonType);
    void AddRequestLobbyListResultCountFilter(int32 MaxResults);
    void AddRequestLobbyListNumericalFilter(FString KeyToMatch, int32 ValueToMatch, ESteamLobbyComparison ComparisonType);
    void AddRequestLobbyListNearValueFilter(FString KeyToMatch, int32 ValueToBeCloseTo);
    void AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable);
    void AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter);
    void AddRequestLobbyListCompatibleMembersFilter(FSteamID SteamIDLobby);
    int32 AddFavoriteGame(int32 AppID, FString IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags, int32 TimeLastPlayedOnServer);
};

struct FCreateLobbyData
{
    ESteamResult Result;
    FSteamID SteamIDLobby;

};

class USteamCoreMatchmakingAsyncActionCreateLobby : public USteamCoreAsyncAction
{
    FSteamCoreMatchmakingAsyncActionCreateLobbyOnCallback OnCallback;
    void OnCreateLobbyAsyncDelegate(const FCreateLobbyData& Data, bool bWasSuccessful);

    void HandleCallback(const FCreateLobbyData& Data, bool bWasSuccessful);
    class USteamCoreMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(class UObject* WorldContextObject, ESteamLobbyType LobbyType, int32 MaxMembers, float Timeout);
};

struct FLobbyMatchList
{
    int32 LobbiesMatching;

};

class USteamCoreMatchmakingAsyncActionRequestLobbyList : public USteamCoreAsyncAction
{
    FSteamCoreMatchmakingAsyncActionRequestLobbyListOnCallback OnCallback;
    void OnRequestLobbyListAsyncDelegate(const FLobbyMatchList& Data, bool bWasSuccessful);

    class USteamCoreMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(class UObject* WorldContextObject, float Timeout);
    void HandleCallback(const FLobbyMatchList& Data, bool bWasSuccessful);
};

struct FJoinLobbyData
{
    FSteamID SteamIDLobby;
    bool bLocked;
    ESteamChatRoomEnterResponse ChatRoomEnterResponse;

};

class USteamCoreMatchmakingAsyncActionJoinLobby : public USteamCoreAsyncAction
{
    FSteamCoreMatchmakingAsyncActionJoinLobbyOnCallback OnCallback;
    void OnJoinLobbyAsyncDelegate(const FJoinLobbyData& Data, bool bWasSuccessful);

    class USteamCoreMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(class UObject* WorldContextObject, FSteamID SteamIDLobby, float Timeout);
    void HandleCallback(const FJoinLobbyData& Data, bool bWasSuccessful);
};

struct FSteamSessionSetting
{
};

class USteamCoreCreateSession : public USteamCoreAsyncAction
{
    FSteamCoreCreateSessionOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FSteamCoreCreateSessionOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class USteamCoreCreateSession* CreateSteamCoreSession(class UObject* WorldContextObject, TMap<class FString, class FSteamSessionSetting> SessionSettings, FString SessionName, int32 MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, float Timeout);
};

struct FSteamSessionSearchSetting
{
};

struct FSteamSessionResult
{
    FBlueprintSessionResult Result;
    TArray<FSteamSessionSetting> SessionSettings;

};

class USteamCoreFindSession : public USteamCoreAsyncAction
{
    FSteamCoreFindSessionOnCallback OnCallback;
    void FindSteamSessionsResultDelegate(const TArray<FSteamSessionResult>& Results);

    void OnCompleted(bool bSuccessful);
    class USteamCoreFindSession* FindSteamCoreSessions(class UObject* WorldContextObject, TMap<class FString, class FSteamSessionSearchSetting> SearchSettings, int32 MaxResults, bool bUseLAN, ESteamSessionFindType ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout);
};

class USteamCoreDestroySession : public USteamCoreAsyncAction
{
    FSteamCoreDestroySessionOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FSteamCoreDestroySessionOnFailure OnFailure;
    void EmptyOnlineDelegate();

    void OnCompleted(FName SessionName, bool bWasSuccessful);
    class USteamCoreDestroySession* DestroySteamCoreSession(class UObject* WorldContextObject, float Timeout);
};

class USteamCoreUpdateSession : public USteamCoreAsyncAction
{
    FSteamCoreUpdateSessionOnCallback OnCallback;
    void EmptyOnlineDelegate();

    class USteamCoreUpdateSession* UpdateSteamCoreSession(class UObject* WorldContextObject, TMap<class FString, class FSteamSessionSearchSetting> Settings, FString SessionName, int32 MaxPlayers);
    void OnCompleted(FName SessionName, bool bWasSuccessful);
};

class UMatchmakingServers : public USteamCoreSubsystem
{

    void ServerRules(const FServerRulesCallback& Callback, FString IP, int32 QueryPort);
    void RequestSpectatorServerList(const FRequestSpectatorServerListServerCallback& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    void RequestLANServerList(const FRequestLANServerListServerCallback& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    void RequestInternetServerList(const FRequestInternetServerListServerCallback& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    void RequestHistoryServerList(const FRequestHistoryServerListServerCallback& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    void RequestFriendsServerList(const FRequestFriendsServerListServerCallback& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    void RequestFavoritesServerList(const FRequestFavoritesServerListServerCallback& ServerCallback, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    void PingServer(const FPingServerCallback& Callback, FString IP, int32 QueryPort);
};

struct FSteamServerAddr
{
    FString IP;
    int32 Port;
    int32 QueryPort;
    FString ConnectionAddressString;
    FString SteamP2PAddr;

};

struct FGameServerItem
{
    FString ServerName;
    FString MapName;
    FString GameDescription;
    FString GameTags;
    FSteamServerAddr SteamServerAddr;
    int32 Ping;
    int32 Players;
    int32 MaxPlayers;
    int32 BotPlayers;
    int32 ServerVersion;
    bool bPassword;
    bool BSecure;

};

class USteamCoreMatchmakingServersAsyncActionPingServer : public USteamCoreAsyncAction
{
    FSteamCoreMatchmakingServersAsyncActionPingServerOnCallback OnCallback;
    void OnPingServerAsyncDelegate(const FGameServerItem& Data, bool bWasSuccessful);

    class USteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(class UObject* WorldContextObject, FString IP, int32 Port, float Timeout);
    void HandleCallback(const FGameServerItem& Data, bool bWasSuccessful);
};

class USteamCoreMatchmakingServersAsyncActionRequestServerList : public USteamCoreAsyncAction
{
    FSteamCoreMatchmakingServersAsyncActionRequestServerListOnCallback OnCallback;
    void OnServerUpdatedAsyncDelegate(const FGameServerItem& Data);
    FSteamCoreMatchmakingServersAsyncActionRequestServerListOnRefreshCompleted OnRefreshCompleted;
    void OnServerRefreshCompleteDelegate();

    class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    class USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(class UObject* WorldContextObject, int32 AppID, float Timeout, int32 MaxResults, bool bIgnoreNonResponsive, class UServerFilter* ServerFilter);
    void HandleServerListFinished();
    void HandleCallback(const FGameServerItem& Data);
};

struct FGameServerRule
{
    FString Name;
    FString Value;

};

class USteamCoreMatchmakingServersAsyncActionServerRules : public USteamCoreAsyncAction
{
    FSteamCoreMatchmakingServersAsyncActionServerRulesOnCallback OnCallback;
    void OnServerRuleAsyncDelegate(const TArray<FGameServerRule>& Data, bool bWasSuccessful);

    class USteamCoreMatchmakingServersAsyncActionServerRules* ServerRulesAsync(class UObject* WorldContextObject, FString IP, int32 QueryPort, float Timeout);
    void HandleCallback(const TArray<FGameServerRule>& Data, bool bWasSuccessful);
};

class UServerFilter : public UObject
{

    TMap<class FString, class FString> GetFilters();
    void AddFilterWhitelisted();
    void AddFilterVersion(FString Value);
    void AddFilterSecure();
    void AddFilterProxy();
    void AddFilterPassword();
    void AddFilterOr(FString Value);
    void AddFilterNotFull();
    void AddFilterNotAppId(FString Value);
    void AddFilterNor(FString Value);
    void AddFilterNoPlayers();
    void AddFilterNand(FString Value);
    void AddFilterName(FString Value);
    void AddFilterMap(FString Value);
    void AddFilterLinux();
    void AddFilterHasPlayers();
    void AddFilterGameTagsNor(FString Value);
    void AddFilterGameTagsAnd(FString Value);
    void AddFilterGameDataOr(FString Value);
    void AddFilterGameDataNor(FString Value);
    void AddFilterGameDataAnd(FString Value);
    void AddFilterGameAddr(FString Value);
    void AddFilterDedicated();
    void AddFilterAnd(FString Value);
};

struct FPlaybackStatusHasChanged
{
};

struct FVolumeHasChanged
{
    float Volume;

};

class UMusic : public USteamCoreSubsystem
{
    FMusicPlaybackStatusHasChanged PlaybackStatusHasChanged;
    void OnPlaybackStatusHasChanged(const FPlaybackStatusHasChanged& Data);
    FMusicVolumeHasChanged VolumeHasChanged;
    void OnVolumeHasChanged(const FVolumeHasChanged& Data);

    void SetVolume(float flVolume);
    void PlayPrevious();
    void PlayNext();
    void Play();
    void Pause();
    float GetVolume();
    ESteamAudioPlaybackStatus GetPlaybackStatus();
    bool BIsPlaying();
    bool BIsEnabled();
};

struct FSteamP2PSessionState
{
    bool bConnectionActive;
    bool bConnecting;
    ESteamP2PSessionError P2PSessionError;
    bool bUsingRelay;
    int32 BytesQueuedForSend;
    int32 PacketsQueuedForSend;
    FString RemoteIP;
    int32 RemotePort;

};

struct FP2PSessionRequest
{
    FSteamID SteamIDRemote;

};

struct FP2PSessionConnectFail
{
    FSteamID SteamIDRemote;
    ESteamP2PSessionError P2PSessionError;

};

class UNetworking : public USteamCoreSubsystem
{
    FNetworkingOnP2PSessionRequestDelegate OnP2PSessionRequestDelegate;
    void OnP2PSessionRequest(const FP2PSessionRequest& Data);
    FNetworkingOnP2PSessionConnectFailDelegate OnP2PSessionConnectFailDelegate;
    void OnP2PSessionConnectFail(const FP2PSessionConnectFail& Data);

    bool SendP2PPacket(FSteamID SteamIDRemote, TArray<uint8> Data, ESteamP2PSend P2PSendType, int32 Channel);
    bool ReadP2PPacket(TArray<uint8>& Data, FSteamID& OutSteamIdRemote, int32 MessageSize, int32 Channel);
    bool IsP2PPacketAvailable(int32& MessageSize, int32 Channel);
    bool GetP2PSessionState(FSteamID SteamIDRemote, FSteamP2PSessionState& ConnectionState);
    bool CloseP2PSessionWithUser(FSteamID SteamIDRemote);
    bool CloseP2PChannelWithUser(FSteamID SteamIDRemote, int32 Channel);
    bool AllowP2PPacketRelay(bool bAllow);
    bool AcceptP2PSessionWithUser(FSteamID SteamIDRemote);
};

struct FSteamNetworkPingLocation
{
    FString Location;

};

class UNetworkingUtils : public USteamCoreSubsystem
{

    bool ParsePingLocationString(FString String, FSteamNetworkPingLocation& Result);
    void InitRelayNetworkAccess();
    float GetLocalPingLocation(FSteamNetworkPingLocation& Result);
    int32 EstimatePingTimeFromLocalHost(const FSteamNetworkPingLocation& RemoteLocation);
    int32 EstimatePingTimeBetweenTwoLocations(const FSteamNetworkPingLocation& Location1, const FSteamNetworkPingLocation& Location2);
    void ConvertPingLocationToString(const FSteamNetworkPingLocation& Location, FString& String);
    bool CheckPingDataUpToDate(float MaxAgeSeconds);
};

class UParentalSettings : public USteamCoreSubsystem
{

    bool BIsParentalLockLocked();
    bool BIsParentalLockEnabled();
    bool BIsFeatureInBlockList(ESteamParentalFeature Feature);
    bool BIsFeatureBlocked(ESteamParentalFeature Feature);
    bool BIsAppInBlockList(int32 AppID);
    bool BIsAppBlocked(int32 AppID);
};

struct FPartyBeaconID
{
};

struct FSteamPartyBeaconLocation
{
    ESteamPartiesBeaconLocationType Type;
    FString LocationId;

};

struct FJoinPartyData
{
    ESteamResult Result;
    FPartyBeaconID BeaconID;
    FSteamID SteamIDBeaconOwner;
    FString ConnectString;

};

struct FCreateBeaconData
{
    ESteamResult Result;
    FPartyBeaconID BeaconID;

};

struct FReservationNotificationData
{
    FPartyBeaconID BeaconID;
    FSteamID SteamIDJoiner;

};

struct FChangeNumOpenSlotsData
{
    ESteamResult Result;

};

class USteamParties : public USteamCoreSubsystem
{
    FSteamPartiesJoinPartyDelegate JoinPartyDelegate;
    void OnJoinPartyDelegate(const FJoinPartyData& Data);
    FSteamPartiesCreateBeaconDelegate CreateBeaconDelegate;
    void OnCreateBeaconDelegate(const FCreateBeaconData& Data);
    FSteamPartiesReservationNotificationDelegate ReservationNotificationDelegate;
    void OnReservationNotificationDelegate(const FReservationNotificationData& Data);
    FSteamPartiesChangeNumOpenSlotsDelegate ChangeNumOpenSlotsDelegate;
    void OnChangeNumOpenSlotsDelegate(const FChangeNumOpenSlotsData& Data);
    FSteamPartiesAvailableBeaconLocationsDelegate AvailableBeaconLocationsDelegate;
    void OnAvailableBeaconLocationsDelegate();
    FSteamPartiesActiveBeaconsDelegate ActiveBeaconsDelegate;
    void OnActiveBeaconsDelegate();

    void OnReservationCompleted(FPartyBeaconID BeaconID, FSteamID SteamIDUser);
    void JoinParty(const FJoinPartyCallback& Callback, FPartyBeaconID BeaconID);
    bool GetNumAvailableBeaconLocations(int32& NumLocations);
    int32 GetNumActiveBeacons();
    bool GetBeaconLocationData(FSteamPartyBeaconLocation BeaconLocation, ESteamPartiesBeaconLocationData EData, FString& PCHDataStringOut);
    bool GetBeaconDetails(FPartyBeaconID BeaconID, FSteamID& SteamIDBeaconOwner, FSteamPartyBeaconLocation& Location, FString& OutMetadata);
    FPartyBeaconID GetBeaconByIndex(int32 Index);
    bool GetAvailableBeaconLocations(TArray<FSteamPartyBeaconLocation>& LocationList, int32 MaxNumLocations);
    bool DestroyBeacon(FPartyBeaconID BeaconID);
    void CreateBeacon(const FCreateBeaconCallback& Callback, int32 OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString MetaData);
    void ChangeNumOpenSlots(const FChangeNumOpenSlotsCallback& Callback, FPartyBeaconID BeaconID, int32 OpenSlots);
    void CancelReservation(FPartyBeaconID BeaconID, FSteamID SteamIDUser);
};

class USteamCoreSteamPartiesAsyncActionJoinParty : public USteamCoreAsyncAction
{
    FSteamCoreSteamPartiesAsyncActionJoinPartyOnCallback OnCallback;
    void OnJoinPartyCallback(const FJoinPartyData& Data, bool bWasSuccessful);

    class USteamCoreSteamPartiesAsyncActionJoinParty* JoinPartyAsync(class UObject* WorldContextObject, FPartyBeaconID BeaconID, float Timeout);
    void HandleCallback(const FJoinPartyData& Data, bool bWasSuccessful);
};

class USteamCoreSteamPartiesAsyncActionCreateBeacon : public USteamCoreAsyncAction
{
    FSteamCoreSteamPartiesAsyncActionCreateBeaconOnCallback OnCallback;
    void OnCreateBeaconCallback(const FCreateBeaconData& Data, bool bWasSuccessful);

    void HandleCallback(const FCreateBeaconData& Data, bool bWasSuccessful);
    class USteamCoreSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(class UObject* WorldContextObject, int32 OpenSlots, FSteamPartyBeaconLocation BeaconLocation, FString ConnectString, FString MetaData, float Timeout);
};

class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots : public USteamCoreAsyncAction
{
    FSteamCoreSteamPartiesAsyncActionChangeNumOpenSlotsOnCallback OnCallback;
    void OnChangeNumOpenSlotsCallback(const FChangeNumOpenSlotsData& Data, bool bWasSuccessful);

    void HandleCallback(const FChangeNumOpenSlotsData& Data, bool bWasSuccessful);
    class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ChangeNumOpenSlotsAsync(class UObject* WorldContextObject, FPartyBeaconID BeaconID, int32 OpenSlots, float Timeout);
};

struct FSteamRemotePlaySessionConnected
{
    int32 SessionID;

};

struct FSteamRemotePlaySessionDisconnected
{
    int32 SessionID;

};

class URemotePlay : public USteamCoreSubsystem
{
    FRemotePlaySteamRemotePlaySessionConnected SteamRemotePlaySessionConnected;
    void OnSteamRemotePlaySessionConnected(const FSteamRemotePlaySessionConnected& Data);
    FRemotePlaySteamRemotePlaySessionDisconnected SteamRemotePlaySessionDisconnected;
    void OnSteamRemotePlaySessionDisconnected(const FSteamRemotePlaySessionDisconnected& Data);

    FSteamID GetSessionSteamID(int32 SessionID);
    int32 GetSessionID(int32 SessionIndex);
    int32 GetSessionCount();
    FString GetSessionClientName(int32 SessionID);
    ESteamCoreDeviceFormFactor GetSessionClientFormFactor(int32 SessionID);
    bool BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend);
    bool BGetSessionClientResolution(int32 SessionID, int32& ResolutionX, int32& ResolutionY);
};

struct FSteamUGCHandle
{
};

struct FUGCFileWriteStreamHandle
{
};

struct FRemoteStorageFileReadAsyncComplete
{
    ESteamResult Result;
    int32 Offset;
    int32 Read;

};

struct FPublishedFileID
{
};

struct FRemoteStorageUnsubscribePublishedFileResult
{
    ESteamResult Result;
    FPublishedFileID PublishedFileID;

};

struct FRemoteStorageSubscribePublishedFileResult
{
    ESteamResult Result;
    FPublishedFileID PublishedFileID;

};

struct FRemoteStoragePublishedFileUnsubscribed
{
    FPublishedFileID PublishedFileID;
    int32 AppID;

};

struct FRemoteStoragePublishedFileSubscribed
{
    FPublishedFileID PublishedFileID;
    int32 AppID;

};

class URemoteStorage : public USteamCoreSubsystem
{
    FRemoteStorageRemoteStorageUnsubscribePublishedFileResult RemoteStorageUnsubscribePublishedFileResult;
    void OnRemoteStorageUnsubscribePublishedFileResult(const FRemoteStorageUnsubscribePublishedFileResult& Data);
    FRemoteStorageRemoteStorageSubscribePublishedFileResult RemoteStorageSubscribePublishedFileResult;
    void OnRemoteStorageSubscribePublishedFileResult(const FRemoteStorageSubscribePublishedFileResult& Data);
    FRemoteStorageRemoteStoragePublishedFileUnsubscribed RemoteStoragePublishedFileUnsubscribed;
    void OnRemoteStoragePublishedFileUnsubscribed(const FRemoteStoragePublishedFileUnsubscribed& Data);
    FRemoteStorageRemoteStoragePublishedFileSubscribed RemoteStoragePublishedFileSubscribed;
    void OnRemoteStoragePublishedFileSubscribed(const FRemoteStoragePublishedFileSubscribed& Data);

    int32 UGCRead(FSteamUGCHandle Content, TArray<uint8>& OutData, int32 DataToRead, int32 Offset, ESteamUGCReadAction Action);
    void UGCDownloadToLocation(const FUGCDownloadToLocationCallback& Callback, FSteamUGCHandle Content, FString Location, int32 Priority);
    void UGCDownload(const FUGCDownloadCallback& Callback, FSteamUGCHandle Content, int32 Priority);
    bool SetSyncPlatforms(FString File, ESteamRemoteStoragePlatform RemoteStoragePlatform);
    void SetCloudEnabledForApp(bool bEnabled);
    bool IsCloudEnabledForApp();
    bool IsCloudEnabledForAccount();
    bool GetUGCDownloadProgress(FSteamUGCHandle Handle, int32& BytesDownloaded, int32& BytesExpected);
    bool GetUGCDetails(FSteamUGCHandle Handle, int32& AppID, FString& Name, int32& FileSizeInBytes, FSteamID& SteamIDOwner);
    ESteamRemoteStoragePlatform GetSyncPlatforms(FString File);
    bool GetQuota(int32& TotalBytes, int32& AvailableBytes);
    int32 GetFileTimestamp(FString File);
    int32 GetFileSize(FString File);
    FString GetFileNameAndSize(int32 File, int32& FileSizeInBytes);
    int32 GetFileCount();
    FSteamUGCHandle GetCachedUGCHandle(int32 ICachedContent);
    int32 GetCachedUGCCount();
    bool FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle Handle, TArray<uint8> Data);
    FUGCFileWriteStreamHandle FileWriteStreamOpen(FString File);
    bool FileWriteStreamClose(FUGCFileWriteStreamHandle Handle);
    bool FileWriteStreamCancel(FUGCFileWriteStreamHandle Handle);
    void FileWriteAsync(const FFileWriteAsyncCallback& Callback, FString File, TArray<uint8> Data);
    bool FileWrite(FString File, TArray<uint8> Data);
    void FileShare(const FFileShareCallback& Callback, FString File);
    bool FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete ReadCall, TArray<uint8>& Buffer, int32 BytesToRead);
    void FileReadAsync(const FFileReadAsyncCallback& Callback, FString File, int32 Offset, int32 BytesToRead);
    int32 FileRead(FString File, TArray<uint8>& Buffer, int32 DataToRead);
    bool FilePersisted(FString File);
    bool FileForget(FString File);
    bool FileExists(FString File);
    bool FileDelete(FString File);
};

struct FScreenshotHandle
{
};

struct FScreenshotReady
{
    FScreenshotHandle Handle;
    ESteamResult Result;

};

struct FScreenshotRequested
{
};

class UScreenshots : public USteamCoreSubsystem
{
    FScreenshotsScreenshotReady ScreenshotReady;
    void OnScreenshotReady(const FScreenshotReady& Data);
    FScreenshotsScreenshotRequested ScreenshotRequested;
    void OnScreenshotRequested(const FScreenshotRequested& Data);

    FScreenshotHandle WriteScreenshot(TArray<uint8> PubRGB, int32 Width, int32 Height);
    void TriggerScreenshot();
    bool TagUser(FScreenshotHandle Handle, FSteamID SteamID);
    bool TagPublishedFile(FScreenshotHandle Handle, FPublishedFileID PublishedFileID);
    bool SetLocation(FScreenshotHandle Handle, FString Location);
    bool IsScreenshotsHooked();
    void HookScreenshots(bool bHook);
    FScreenshotHandle AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, FString Filename, FString VRFileName);
    FScreenshotHandle AddScreenshotToLibrary(FString Filename, FString ThumbnailFilename, int32 Width, int32 Height);
};

struct FUGCUpdateHandle
{
};

struct FUGCQueryHandle
{
};

struct FSteamUGCDetails
{
    FPublishedFileID PublishedFileID;
    ESteamResult Result;
    ESteamWorkshopFileType FileType;
    int32 CreatorAppID;
    int32 ConsumerAppID;
    FString Title;
    FString Description;
    FSteamID SteamIDOwner;
    int32 TimeCreated;
    int32 TimeUpdated;
    int32 TimeAddedToUserList;
    ESteamRemoteStoragePublishedFileVisibility Visibility;
    bool bBanned;
    bool bAcceptedForUse;
    bool bTagsTruncated;
    TArray<FString> Tags;
    FSteamUGCHandle File;
    FSteamUGCHandle PreviewFile;
    FString Filename;
    int32 FileSize;
    int32 PreviewFileSize;
    FString URL;
    int32 VotesUp;
    int32 VotesDown;
    float Score;
    int32 NumChildren;

};

struct FItemInstalled
{
    int32 AppID;
    FPublishedFileID PublishedFileID;

};

struct FDownloadItemResult
{
    int32 AppID;
    FPublishedFileID PublishedFileID;
    ESteamResult Result;

};

class UUGC : public USteamCoreSubsystem
{
    FUGCItemInstalled ItemInstalled;
    void OnItemInstalled(const FItemInstalled& Data);
    FUGCDownloadItemResult DownloadItemResult;
    void OnDownloadItemResult(const FDownloadItemResult& Data);

    bool UpdateItemPreviewVideo(FUGCUpdateHandle Handle, int32 Index, FString PreviewVideo);
    bool UpdateItemPreviewFile(FUGCUpdateHandle Handle, int32 Index, FString PreviewFile);
    void UnsubscribeItem(const FUnsubscribeItemCallback& Callback, FPublishedFileID PublishedFileID);
    void SuspendDownloads(bool bSuspend);
    void SubscribeItem(const FSubscribeItemCallback& Callback, FPublishedFileID PublishedFileID);
    void SubmitItemUpdate(const FSubmitItemUpdateCallback& Callback, FUGCUpdateHandle Handle, FString ChangeNote);
    void StopPlaytimeTrackingForAllItems(const FStopPlaytimeTrackingForAllItemsCallback& Callback);
    void StopPlaytimeTracking(const FStopPlaytimeTrackingCallback& Callback, TArray<FPublishedFileID> PublishedFileIDs);
    void StartPlaytimeTracking(const FStartPlaytimeTrackingCallback& Callback, TArray<FPublishedFileID> PublishedFileID);
    FUGCUpdateHandle StartItemUpdate(int32 ConsumerAppID, FPublishedFileID PublishedFileID);
    void SetUserItemVote(const FSetUserItemVoteCallback& Callback, FPublishedFileID PublishedFileID, bool bVoteUp);
    bool SetSearchText(FUGCQueryHandle Handle, FString SearchText);
    bool SetReturnTotalOnly(FUGCQueryHandle Handle, bool bReturnTotalOnly);
    bool SetReturnPlaytimeStats(FUGCQueryHandle Handle, int32 Days);
    bool SetReturnOnlyIDs(FUGCQueryHandle Handle, bool bReturnOnlyIDs);
    bool SetReturnMetadata(FUGCQueryHandle Handle, bool bReturnMetadata);
    bool SetReturnLongDescription(FUGCQueryHandle Handle, bool bReturnLongDescription);
    bool SetReturnKeyValueTags(FUGCQueryHandle Handle, bool bReturnKeyValueTags);
    bool SetReturnChildren(FUGCQueryHandle Handle, bool bReturnChildren);
    bool SetReturnAdditionalPreviews(FUGCQueryHandle Handle, bool bReturnAdditionalPreviews);
    bool SetRankedByTrendDays(FUGCQueryHandle Handle, int32 Days);
    bool SetMatchAnyTag(FUGCQueryHandle Handle, bool bMatchAnyTag);
    bool SetLanguage(FUGCQueryHandle Handle, FString Language);
    bool SetItemVisibility(FUGCUpdateHandle Handle, ESteamRemoteStoragePublishedFileVisibility Visibility);
    bool SetItemUpdateLanguage(FUGCUpdateHandle Handle, FString Language);
    bool SetItemTitle(FUGCUpdateHandle Handle, FString Title);
    bool SetItemTags(FUGCUpdateHandle Handle, TArray<FString> Tags);
    bool SetItemPreview(FUGCUpdateHandle Handle, FString PreviewFile);
    bool SetItemMetadata(FUGCUpdateHandle Handle, FString MetaData);
    bool SetItemDescription(FUGCUpdateHandle Handle, FString Description);
    bool SetItemContent(FUGCUpdateHandle Handle, FString ContentFolder);
    bool SetCloudFileNameFilter(FUGCQueryHandle Handle, FString MatchCloudFileName);
    bool SetAllowLegacyUpload(FUGCUpdateHandle Handle, bool bAllowLegacyUpload);
    bool SetAllowCachedResponse(FUGCQueryHandle Handle, int32 MaxAgeSeconds);
    void SendQueryUGCRequest(const FSendQueryUGCRequestCallback& Callback, FUGCQueryHandle Handle);
    bool RemoveItemPreview(FUGCUpdateHandle Handle, int32 Index);
    bool RemoveItemKeyValueTags(FUGCUpdateHandle Handle, FString Key);
    void RemoveItemFromFavorites(const FRemoveItemFromFavoritesCallback& Callback, int32 AppID, FPublishedFileID PublishedFileID);
    void RemoveDependency(const FRemoveDependencyCallback& Callback, FPublishedFileID ParentPublishedFileID, FPublishedFileID ChildPublishedFileId);
    void RemoveAppDependency(const FRemoveAppDependencyCallback& Callback, FPublishedFileID PublishedFileID, int32 AppID);
    bool ReleaseQueryUGCRequest(FUGCQueryHandle Handle);
    void GetUserItemVote(const FGetUserItemVoteCallback& Callback, FPublishedFileID PublishedFileID);
    int32 GetSubscribedItems(TArray<FPublishedFileID>& PublishedFileIDs, int32 MaxEntries);
    bool GetQueryUGCTagDisplayName(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value);
    bool GetQueryUGCTag(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value);
    bool GetQueryUGCStatistic(FUGCQueryHandle Handle, int32 Index, ESteamItemStatistic StatType, FString& StatValue);
    bool GetQueryUGCResult(FUGCQueryHandle Handle, int32 Index, FSteamUGCDetails& Details);
    bool GetQueryUGCPreviewURL(FUGCQueryHandle Handle, int32 Index, FString& URL);
    int32 GetQueryUGCNumTags(FUGCQueryHandle Handle, int32 Index);
    int32 GetQueryUGCNumKeyValueTags(FUGCQueryHandle Handle, int32 Index);
    int32 GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle Handle, int32 Index);
    bool GetQueryUGCMetadata(FUGCQueryHandle Handle, int32 Index, FString& MetaData, int32 MetadataSize);
    bool GetQueryUGCKeyValueTag(FUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& Key, FString& Value);
    bool GetQueryUGCChildren(FUGCQueryHandle Handle, int32 Index, TArray<FPublishedFileID>& PublishedFileIDs, int32 MaxEntries);
    bool GetQueryUGCAdditionalPreview(FUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& URLOrVideoID, FString& OriginalFileName, ESteamItemPreviewType& PreviewType);
    int32 GetNumSubscribedItems();
    ESteamItemUpdateStatus GetItemUpdateProgress(FUGCUpdateHandle Handle, int32& BytesProcessed, int32& BytesTotal);
    int32 GetItemState(FPublishedFileID PublishedFileID, TArray<ESteamItemState>& States);
    bool GetItemInstallInfo(FPublishedFileID PublishedFileID, int32& SizeOnDisk, FString& Folder, int32& Timestamp);
    bool GetItemDownloadInfo(FPublishedFileID PublishedFileID, int32& BytesDownloaded, int32& BytesTotal);
    void GetAppDependencies(const FGetAppDependenciesCallback& Callback, FPublishedFileID PublishedFileID);
    bool DownloadItem(FPublishedFileID PublishedFileID, bool bHighPriority);
    void DeleteItem(const FDeleteItemCallback& Callback, FPublishedFileID PublishedFileID);
    FUGCQueryHandle CreateQueryUserUGCRequest(FSteamID SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
    FUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> PublishedFileIDs);
    FUGCQueryHandle CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page);
    void CreateItem(const FCreateItemCallback& Callback, int32 ConsumerAppID, ESteamWorkshopFileType FileType);
    bool BInitWorkshopForGameServer(int32 WorkshopDepotID, FString Folder);
    bool AddRequiredTagGroup(FUGCQueryHandle Handle, TArray<FString> TagGroups);
    bool AddRequiredTag(FUGCQueryHandle Handle, FString TagName);
    bool AddRequiredKeyValueTag(FUGCQueryHandle Handle, FString Key, FString Value);
    void AddItemToFavorites(const FAddItemToFavoritesCallback& Callback, int32 AppID, FPublishedFileID PublishedFileID);
    bool AddItemPreviewVideo(FUGCUpdateHandle Handle, FString VideoID);
    bool AddItemPreviewFile(FUGCUpdateHandle Handle, FString PreviewFile, ESteamItemPreviewType Type);
    bool AddItemKeyValueTag(FUGCUpdateHandle Handle, FString Key, FString Value);
    bool AddExcludedTag(FUGCQueryHandle Handle, FString TagName);
    void AddDependency(const FAddDependencyCallback& Callback, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId);
    void AddAppDependency(const FAddAppDependencyCallback& Callback, FPublishedFileID PublishedFileID, int32 AppID);
};

struct FStopPlaytimeTrackingResult
{
    ESteamResult Result;

};

class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItemsOnCallback OnCallback;
    void OnStopPlaytimeTrackingForAllItemsAsyncDelegate(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);

    class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItemsAsync(class UObject* WorldContextObject, float Timeout);
    void HandleCallback(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

class USteamCoreUGCAsyncActionStopPlaytimeTracking : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionStopPlaytimeTrackingOnCallback OnCallback;
    void OnStopPlaytimeTrackingAsyncDelegate(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);

    class USteamCoreUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout);
    void HandleCallback(const FStopPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

struct FStartPlaytimeTrackingResult
{
    ESteamResult Result;

};

class USteamCoreUGCAsyncActionStartPlaytimeTracking : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionStartPlaytimeTrackingOnCallback OnCallback;
    void OnStartPlaytimeTrackingAsyncDelegate(const FStartPlaytimeTrackingResult& Data, bool bWasSuccessful);

    class USteamCoreUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(class UObject* WorldContextObject, TArray<FPublishedFileID> PublishedFileIDs, float Timeout);
    void HandleCallback(const FStartPlaytimeTrackingResult& Data, bool bWasSuccessful);
};

class USteamCoreUGCAsyncActionUnsubscribeItem : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionUnsubscribeItemOnCallback OnCallback;
    void OnUnsubscribeItemAsyncDelegate(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);

    class USteamCoreUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout);
    void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
};

class USteamCoreUGCAsyncActionSubscribeItem : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionSubscribeItemOnCallback OnCallback;
    void OnSubscribeItemAsyncDelegate(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);

    class USteamCoreUGCAsyncActionSubscribeItem* SubscribeItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileIDs, float Timeout);
    void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful);
};

struct FUserFavoriteItemsListChanged
{
    FPublishedFileID PublishedFileID;
    ESteamResult Result;
    bool bWasAddRequest;

};

class USteamCoreUGCAsyncActionRemoveItemFromFavorites : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionRemoveItemFromFavoritesOnCallback OnCallback;
    void OnRemoveItemFromFavoritesAsyncDelegate(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);

    class USteamCoreUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(class UObject* WorldContextObject, int32 AppID, FPublishedFileID PublishedFileID, float Timeout);
    void HandleCallback(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
};

class USteamCoreUGCAsyncActionAddItemToFavorites : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionAddItemToFavoritesOnCallback OnCallback;
    void OnAddItemToFavoritesAsyncDelegate(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);

    void HandleCallback(const FUserFavoriteItemsListChanged& Data, bool bWasSuccessful);
    class USteamCoreUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(class UObject* WorldContextObject, int32 AppID, FPublishedFileID PublishedFileID, float Timeout);
};

struct FGetUserItemVoteResult
{
    FPublishedFileID PublishedFileID;
    ESteamResult Result;
    bool bVotedUp;
    bool bVotedDown;
    bool bVoteSkipped;

};

class USteamCoreUGCAsyncActionGetUserItemVote : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionGetUserItemVoteOnCallback OnCallback;
    void OnGetUserItemVoteAsyncDelegate(const FGetUserItemVoteResult& Data, bool bWasSuccessful);

    void HandleCallback(const FGetUserItemVoteResult& Data, bool bWasSuccessful);
    class USteamCoreUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout);
};

struct FSetUserItemVoteResult
{
    FPublishedFileID PublishedFileID;
    ESteamResult Result;
    bool bVoteUp;

};

class USteamCoreUGCAsyncActionSetUserItemVote : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionSetUserItemVoteOnCallback OnCallback;
    void OnSetUserItemVoteAsyncDelegate(const FSetUserItemVoteResult& Data, bool bWasSuccessful);

    class USteamCoreUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bVoteUp, float Timeout);
    void HandleCallback(const FSetUserItemVoteResult& Data, bool bWasSuccessful);
};

struct FSubmitItemUpdateResult
{
    ESteamResult Result;
    bool bUserNeedsToAcceptWorkshopLegalAgreement;
    FPublishedFileID PublishedFileID;

};

class USteamCoreUGCAsyncActionSubmitItemUpdate : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionSubmitItemUpdateOnCallback OnCallback;
    void OnSubmitItemUpdateAsyncDelegate(const FSubmitItemUpdateResult& Data, bool bWasSuccessful);

    class USteamCoreUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(class UObject* WorldContextObject, FUGCUpdateHandle Handle, FString ChangeNote, float Timeout);
    void HandleCallback(const FSubmitItemUpdateResult& Data, bool bWasSuccessful);
};

struct FCreateItemResult
{
    ESteamResult Result;
    FPublishedFileID PublishedFileID;
    bool bUserNeedsToAcceptWorkshopLegalAgreement;

};

class USteamCoreUGCAsyncActionCreateItem : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionCreateItemOnCallback OnCallback;
    void OnCreateItemAsyncDelegate(const FCreateItemResult& Data, bool bWasSuccessful);

    void HandleCallback(const FCreateItemResult& Data, bool bWasSuccessful);
    class USteamCoreUGCAsyncActionCreateItem* CreateItemAsync(class UObject* WorldContextObject, int32 ConsumerAppID, ESteamWorkshopFileType FileType, float Timeout);
};

struct FSteamUGCQueryCompleted
{
    FUGCQueryHandle Handle;
    ESteamResult Result;
    int32 NumResultsReturned;
    int32 TotalMatchingResults;
    bool bCachedData;

};

class USteamCoreUGCAsyncActionSendQueryUGCRequest : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionSendQueryUGCRequestOnCallback OnCallback;
    void OnSendQueryUGCRequestAsyncDelegate(const FSteamUGCQueryCompleted& Data, bool bWasSuccessful);

    class USteamCoreUGCAsyncActionSendQueryUGCRequest* SendQueryUGCRequestAsync(class UObject* WorldContextObject, FUGCQueryHandle Handle, float Timeout);
    void HandleCallback(const FSteamUGCQueryCompleted& Data, bool bWasSuccessful);
};

struct FAddAppDependencyResult
{
    ESteamResult Result;
    FPublishedFileID PublishedFileID;
    int32 AppID;

};

class USteamCoreUGCAsyncActionAddAppDependency : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionAddAppDependencyOnCallback OnCallback;
    void OnAddAppDependencyResultAsyncDelegate(const FAddAppDependencyResult& Data, bool bWasSuccessful);

    void HandleCallback(const FAddAppDependencyResult& Data, bool bWasSuccessful);
    class USteamCoreUGCAsyncActionAddAppDependency* AddAppDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32 AppID, float Timeout);
};

struct FRemoveAppDependencyResult
{
    ESteamResult Result;
    FPublishedFileID PublishedFileID;
    int32 AppID;

};

class USteamCoreUGCAsyncActionRemoveAppDependency : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionRemoveAppDependencyOnCallback OnCallback;
    void OnRemoveAppDependencyResultAsyncDelegate(const FRemoveAppDependencyResult& Data, bool bWasSuccessful);

    class USteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, int32 AppID, float Timeout);
    void HandleCallback(const FRemoveAppDependencyResult& Data, bool bWasSuccessful);
};

struct FAddUGCDependencyResult
{
    ESteamResult Result;
    FPublishedFileID PublishedFileID;
    FPublishedFileID ChildPublishedFileId;

};

class USteamCoreUGCAsyncActionAddUGCDependency : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionAddUGCDependencyOnCallback OnCallback;
    void OnAddUGCDependencyResultAsyncDelegate(const FAddUGCDependencyResult& Data, bool bWasSuccessful);

    void HandleCallback(const FAddUGCDependencyResult& Data, bool bWasSuccessful);
    class USteamCoreUGCAsyncActionAddUGCDependency* AddDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout);
};

struct FRemoveUGCDependencyResult
{
    ESteamResult Result;
    FPublishedFileID PublishedFileID;
    FPublishedFileID ChildPublishedFileId;

};

class USteamCoreUGCAsyncActionRemoveUGCDependency : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionRemoveUGCDependencyOnCallback OnCallback;
    void OnRemoveUGCDependencyResultAsyncDelegate(const FRemoveUGCDependencyResult& Data, bool bWasSuccessful);

    class USteamCoreUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileId, float Timeout);
    void HandleCallback(const FRemoveUGCDependencyResult& Data, bool bWasSuccessful);
};

struct FUGCDeleteItemResult
{
    ESteamResult Result;
    FPublishedFileID PublishedFileID;

};

class USteamCoreUGCAsyncActionDeleteItem : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionDeleteItemOnCallback OnCallback;
    void OnDeleteItemResultAsyncDelegate(const FUGCDeleteItemResult& Data, bool bWasSuccessful);

    void HandleCallback(const FUGCDeleteItemResult& Data, bool bWasSuccessful);
    class USteamCoreUGCAsyncActionDeleteItem* DeleteItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout);
};

struct FGetAppDependenciesResult
{
    ESteamResult Result;
    FPublishedFileID PublishedFileID;
    TArray<int32> AppIDs;
    int32 NumAppDependencies;
    int32 TotalNumAppDependencies;

};

class USteamCoreUGCAsyncActionGetAppDependencies : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionGetAppDependenciesOnCallback OnCallback;
    void OnGetAppDependenciesResultAsyncDelegate(const FGetAppDependenciesResult& Data, bool bWasSuccessful);

    void HandleCallback(const FGetAppDependenciesResult& Data, bool bWasSuccessful);
    class USteamCoreUGCAsyncActionGetAppDependencies* GetAppDependenciesAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, float Timeout);
};

class USteamCoreUGCAsyncActionDownloadItem : public USteamCoreAsyncAction
{
    FSteamCoreUGCAsyncActionDownloadItemOnCallback OnCallback;
    void OnDownloadItemResultDelegate(const FDownloadItemResult& Data, bool bWasSuccessful);

    void HandleCallback(const FDownloadItemResult& Data, bool bWasSuccessful);
    class USteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(class UObject* WorldContextObject, FPublishedFileID PublishedFileID, bool bHighPriority, float Timeout);
};

struct FClientGameServerDeny
{
    int32 AppID;
    FString GameServerIP;
    int32 GameServerPort;
    bool BSecure;
    ESteamDenyReason Reason;

};

struct FGameWebCallback
{
    FString URL;

};

struct FGetAuthSessionTicketResponse
{
    FSteamTicketHandle AuthTicket;
    ESteamResult Result;

};

struct FIPCFailure
{
    ESteamFailureType FailureType;

};

struct FLicensesUpdated
{
};

struct FMicroTxnAuthorizationResponse
{
    int32 AppID;
    FString OrderId;
    bool bAuthorized;

};

struct FSteamServerConnectFailure
{
    ESteamResult Result;
    bool bStillRetrying;

};

struct FSteamServersConnected
{
};

struct FSteamServersDisconnected
{
    ESteamResult Result;

};

struct FEncryptedAppTicketResponse
{
    ESteamResult Result;

};

class UUser : public USteamCoreSubsystem
{
    FUserClientGameServerDeny ClientGameServerDeny;
    void OnClientGameServerDeny(const FClientGameServerDeny& Data);
    FUserGameWebCallback GameWebCallback;
    void OnGameWebCallback(const FGameWebCallback& Data);
    FUserGetAuthSessionTicketResponse GetAuthSessionTicketResponse;
    void OnGetAuthSessionTicketResponse(const FGetAuthSessionTicketResponse& Data);
    FUserIPCFailure IPCFailure;
    void OnIPCFailure(const FIPCFailure& Data);
    FUserLicensesUpdated LicensesUpdated;
    void OnLicensesUpdated(const FLicensesUpdated& Data);
    FUserMicroTxnAuthorizationResponse MicroTxnAuthorizationResponse;
    void OnMicroTxnAuthorizationResponse(const FMicroTxnAuthorizationResponse& Data);
    FUserSteamServerConnectFailure SteamServerConnectFailure;
    void OnSteamServerConnectFailure(const FSteamServerConnectFailure& Data);
    FUserSteamServersConnected SteamServersConnected;
    void OnSteamServersConnected(const FSteamServersConnected& Data);
    FUserSteamServersDisconnected SteamServersDisconnected;
    void OnSteamServersDisconnected(const FSteamServersDisconnected& Data);
    FUserValidateAuthTicketResponse ValidateAuthTicketResponse;
    void OnValidateAuthTicketResponse(const FValidateAuthTicketResponse& Data);
    FUserEncryptedAppTicketResponse EncryptedAppTicketResponse;
    void OnRequestEncryptedAppTicketResponse(const FEncryptedAppTicketResponse& Data);

    ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32 AppID);
    void StopVoiceRecording();
    void StartVoiceRecording();
    void RequestStoreAuthURL(const FRequestStoreAuthURLCallback& Callback, FString RedirectURL);
    void RequestEncryptedAppTicket(const FRequestEncryptedAppTicketCallback& Callback, TArray<uint8> DataToInclude);
    int32 GetVoiceOptimalSampleRate();
    ESteamVoiceResult GetVoice(TArray<uint8>& DestBuffer, int32& BytesWritten);
    FSteamID GetSteamID_Pure();
    FSteamID GetSteamID();
    int32 GetPlayerSteamLevel();
    int32 GetGameBadgeLevel(int32 Series, bool bFoil);
    bool GetEncryptedAppTicket(TArray<uint8>& Ticket);
    ESteamVoiceResult GetAvailableVoice(int32& CompressedBytes, int32& UncompressedBytes, int32 UncompressedVoiceDesiredSampleRate);
    FSteamTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);
    void EndAuthSession(FSteamID SteamID);
    ESteamVoiceResult DecompressVoice(const TArray<uint8>& CompressedBuffer, int32 DesiredSampleRate, TArray<uint8>& DestBuffer);
    void CancelAuthTicket(FSteamTicketHandle TicketHandle);
    bool BLoggedOn();
    bool BIsTwoFactorEnabled();
    bool BIsPhoneVerified();
    bool BIsPhoneRequiringVerification();
    bool BIsPhoneIdentifying();
    bool BIsBehindNAT();
    ESteamBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID);
    void AdvertiseGame(FSteamID SteamIDGameServer, FString ServerIP, int32 ServerPort);
};

class USteamCoreUserAsyncActionRequestEncryptedAppTicket : public USteamCoreAsyncAction
{
    FSteamCoreUserAsyncActionRequestEncryptedAppTicketOnCallback OnCallback;
    void RequestEncryptedAppTicketDelegate(const FEncryptedAppTicketResponse& Data, bool bWasSuccessful);

    class USteamCoreUserAsyncActionRequestEncryptedAppTicket* RequestEncryptedAppTicketAsync(class UObject* WorldContextObject, TArray<uint8> DataToInclude, float Timeout);
    void HandleCallback(const FEncryptedAppTicketResponse& Data, bool bWasSuccessful);
};

struct FStoreAuthURLResponse
{
    FString URL;

};

class USteamCoreUserAsyncActionRequestStoreAuthURL : public USteamCoreAsyncAction
{
    FSteamCoreUserAsyncActionRequestStoreAuthURLOnCallback OnCallback;
    void RequestStoreAuthURLDelegate(const FStoreAuthURLResponse& Data, bool bWasSuccessful);

    class USteamCoreUserAsyncActionRequestStoreAuthURL* RequestStoreAuthURLAsync(class UObject* WorldContextObject, FString RedirectURL, float Timeout);
    void HandleCallback(const FStoreAuthURLResponse& Data, bool bWasSuccessful);
};

struct FSteamLeaderboard
{
};

struct FSteamLeaderboardEntries
{
};

struct FSteamLeaderboardEntry
{
    FSteamID SteamID;
    int32 GlobalRank;
    int32 Score;
    int32 Details;
    FSteamUGCHandle UGCHandle;

};

struct FUserAchievementIconFetched
{
    FSteamGameID GameID;
    FString AchievementName;
    bool bAchieved;
    class UTexture2D* Icon;

};

struct FUserAchievementStored
{
    FSteamGameID GameID;
    bool bGroupAchievement;
    FString AchievementName;
    int32 CurrentProgress;
    int32 MaxProgress;

};

struct FUserStatsReceived
{
    FSteamID GameID;
    ESteamResult Result;
    FSteamID SteamID;

};

struct FUserStatsStored
{
    FSteamGameID GameID;
    ESteamResult Result;

};

struct FUserStatsUnloaded
{
    FSteamID SteamIDUser;

};

class UUserStats : public USteamCoreSubsystem
{
    FUserStatsUserAchievementIconFetched UserAchievementIconFetched;
    void OnUserAchievementIconFetched(const FUserAchievementIconFetched& Data);
    FUserStatsUserAchievementStored UserAchievementStored;
    void OnUserAchievementStored(const FUserAchievementStored& Data);
    FUserStatsUserStatsReceived UserStatsReceived;
    void OnUserStatsReceived(const FUserStatsReceived& Data);
    FUserStatsUserStatsStored UserStatsStored;
    void OnUserStatsStored(const FUserStatsStored& Data);
    FUserStatsUserStatsUnloaded UserStatsUnloaded;
    void OnUserStatsUnloaded(const FUserStatsUnloaded& Data);

    void UploadLeaderboardScore(const FUploadLeaderboardScoreCallback& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails);
    bool UpdateAvgRateStat(FString Name, float CountThisSession, float SessionLength);
    bool StoreStats();
    bool SetStatInt(FString Name, int32 Data);
    bool SetStatFloat(FString Name, float Data);
    bool SetAchievement(FString Name);
    bool ResetAllStats(bool bAchievementsToo);
    void RequestUserStats(const FRequestUserStatsCallback& Callback, FSteamID SteamID);
    void RequestGlobalStats(const FRequestGlobalStatsCallback& Callback, int32 HistoryDays);
    void RequestGlobalAchievementPercentages(const FRequestGlobalAchievementPercentagesCallback& Callback);
    bool RequestCurrentStats();
    bool IndicateAchievementProgress(FString Name, int32 CurrentProgress, int32 MaxProgress);
    bool GetUserStatInteger(FSteamID SteamIDUser, FString Name, int32& Data);
    bool GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& Data);
    bool GetUserAchievementAndUnlockTime(FSteamID SteamIDUser, FString Name, bool& bAchieved, int32& UnlockTime);
    bool GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved);
    bool GetStatInt(FString Name, int32& Data);
    bool GetStatFloat(FString Name, float& Data);
    void GetNumberOfCurrentPlayers(const FGetNumberOfCurrentPlayersCallback& Callback);
    int32 GetNumAchievements();
    int32 GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, float& Percent, bool& bAchieved);
    int32 GetMostAchievedAchievementInfo(FString& Name, float& Percent, bool& bAchieved);
    ESteamLeaderboardSortMethod GetLeaderboardSortMethod(FSteamLeaderboard SteamLeaderboard);
    FString GetLeaderboardName(FSteamLeaderboard SteamLeaderboard);
    int32 GetLeaderboardEntryCount(FSteamLeaderboard SteamLeaderboard);
    ESteamLeaderboardDisplayType GetLeaderboardDisplayType(FSteamLeaderboard SteamLeaderboard);
    bool GetGlobalStatInt(FString StatName, int32& Data);
    int32 GetGlobalStatHistoryInt(FString StatName, int32 HistoryDays, TArray<int32>& Data);
    int32 GetGlobalStatHistoryFloat(FString StatName, int32 HistoryDays, TArray<float>& Data);
    bool GetGlobalStatFloat(FString StatName, float& Data);
    bool GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries LeaderboardEntries, int32 Index, FSteamLeaderboardEntry& LeaderboardEntry, TArray<int32> Details, TArray<int32>& outDetails);
    bool GetAchievementProgressLimitsFloat(FString Name, float& MinProgress, float& MaxProgress);
    bool GetAchievementProgressLimits(FString Name, int32& MinProgress, int32& MaxProgress);
    FString GetAchievementName(int32 Achievement);
    class UTexture2D* GetAchievementIcon(FString Name);
    FString GetAchievementDisplayAttribute(FString Name, FString Key);
    bool GetAchievementAndUnlockTime(FString Name, bool& bAchieved, int32& UnlockTime);
    bool GetAchievementAchievedPercent(FString Name, float& Percent);
    bool GetAchievement(FString Name, bool& bAchieved);
    void FindOrCreateLeaderboard(const FFindOrCreateLeaderboardCallback& Callback, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType);
    void FindLeaderboard(const FFindLeaderboardCallback& Callback, FString LeaderboardName);
    void DownloadLeaderboardEntriesForUsers(const FDownloadLeaderboardEntriesForUsersCallback& Callback, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users);
    void DownloadLeaderboardEntries(const FDownloadLeaderboardEntriesCallback& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32 RangeStart, int32 RangeEnd);
    bool ClearAchievement(FString Name);
    void AttachLeaderboardUGC(const FAttachLeaderboardUGCCallback& Callback, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle);
};

struct FLeaderboardFindResult
{
    FSteamLeaderboard SteamLeaderboard;
    bool bLeaderboardFound;

};

class USteamCoreUserStatsAsyncActionFindLeaderboard : public USteamCoreAsyncAction
{
    FSteamCoreUserStatsAsyncActionFindLeaderboardOnCallback OnCallback;
    void OnFindLeaderboardAsyncDelegate(const FLeaderboardFindResult& Data, bool bWasSuccessful);

    void HandleCallback(const FLeaderboardFindResult& Data, bool bWasSuccessful);
    class USteamCoreUserStatsAsyncActionFindLeaderboard* FindLeaderboardAsync(class UObject* WorldContextObject, FString LeaderboardName, float Timeout);
};

struct FLeaderboardScoresDownloaded
{
    FSteamLeaderboard SteamLeaderboard;
    FSteamLeaderboardEntries SteamLeaderboardEntries;
    int32 EntryCount;

};

class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries : public USteamCoreAsyncAction
{
    FSteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesOnCallback OnCallback;
    void OnDownloadLeaderboardEntriesAsyncDelegate(const FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);

    void HandleCallback(const FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
    class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* DownloadLeaderboardEntriesAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest Request, int32 RangeStart, int32 RangeEnd, float Timeout);
};

struct FGlobalStatsReceived
{
    FSteamGameID GameID;
    ESteamResult Result;

};

class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats : public USteamCoreAsyncAction
{
    FSteamCoreUserStatsAsyncActionDownloadRequestGlobalStatsOnCallback OnCallback;
    void OnRequestGlobalStatsAsyncDelegate(const FGlobalStatsReceived& Data, bool bWasSuccessful);

    class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* RequestGlobalStatsAsync(class UObject* WorldContextObject, int32 HistoryDays, float Timeout);
    void HandleCallback(const FGlobalStatsReceived& Data, bool bWasSuccessful);
};

struct FGlobalAchievementPercentagesReady
{
    FSteamGameID GameID;
    ESteamResult Result;

};

class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages : public USteamCoreAsyncAction
{
    FSteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentagesOnCallback OnCallback;
    void OnRequestGlobalAchievementPercentagesAsyncDelegate(const FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful);

    class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentagesAsync(class UObject* WorldContextObject, float Timeout);
    void HandleCallback(const FGlobalAchievementPercentagesReady& Data, bool bWasSuccessful);
};

struct FNumberOfCurrentPlayers
{
    bool bSuccess;
    int32 Players;

};

class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers : public USteamCoreAsyncAction
{
    FSteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayersOnCallback OnCallback;
    void OnGetNumberOfCurrentPlayersAsyncDelegate(const FNumberOfCurrentPlayers& Data, bool bWasSuccessful);

    void HandleCallback(const FNumberOfCurrentPlayers& Data, bool bWasSuccessful);
    class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, float Timeout);
};

struct FLeaderboardScoreUploaded
{
    bool bSuccess;
    FSteamLeaderboard SteamLeaderboard;
    int32 Score;
    bool bScoreChanged;
    int32 GlobalRankNew;
    int32 GlobalRankPrevious;

};

class USteamCoreUserStatsAsyncActionUploadLeaderboardScore : public USteamCoreAsyncAction
{
    FSteamCoreUserStatsAsyncActionUploadLeaderboardScoreOnCallback OnCallback;
    void OnUploadLeaderboardScoreAsyncDelegate(const FLeaderboardScoreUploaded& Data, bool bWasSuccessful);

    class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* UploadLeaderboardScoreAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails, float Timeout);
    void HandleCallback(const FLeaderboardScoreUploaded& Data, bool bWasSuccessful);
};

struct FFindOrCreateLeaderboardData
{
    FSteamLeaderboard SteamLeaderboard;
    bool bLeaderboardFound;

};

class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard : public USteamCoreAsyncAction
{
    FSteamCoreUserStatsAsyncActionFindOrCreateLeaderboardOnCallback OnCallback;
    void OnFindOrCreateLeaderboardAsyncDelegate(const FFindOrCreateLeaderboardData& Data, bool bWasSuccessful);

    void HandleCallback(const FFindOrCreateLeaderboardData& Data, bool bWasSuccessful);
    class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType, float Timeout);
};

struct FRequestUserStatsData
{
    FSteamGameID GameID;
    ESteamResult Result;
    FSteamID SteamIDUser;

};

class USteamCoreUserStatsAsyncActionRequestUserStats : public USteamCoreAsyncAction
{
    FSteamCoreUserStatsAsyncActionRequestUserStatsOnCallback OnCallback;
    void OnRequestUserStatsAsyncDelegate(const FRequestUserStatsData& Data, bool bWasSuccessful);

    class USteamCoreUserStatsAsyncActionRequestUserStats* RequestUserStatsAsync(class UObject* WorldContextObject, FSteamID SteamID, float Timeout);
    void HandleCallback(const FRequestUserStatsData& Data, bool bWasSuccessful);
};

struct FLeaderboardScoresDownloadedForUsers
{
    FSteamLeaderboard SteamLeaderboard;
    FSteamLeaderboardEntries SteamLeaderboardEntries;
    int32 EntryCount;

};

class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers : public USteamCoreAsyncAction
{
    FSteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsersOnCallback OnCallback;
    void OnDownloadLeaderboardEntriesForUsersAsyncDelegate(const FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);

    void HandleCallback(const FLeaderboardScoresDownloadedForUsers& Data, bool bWasSuccessful);
    class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsersAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users, float Timeout);
};

struct FAttachLeaderboardUGCData
{
    FSteamLeaderboard SteamLeaderboard;
    ESteamResult Result;

};

class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC : public USteamCoreAsyncAction
{
    FSteamCoreUserStatsAsyncActionAttachLeaderboardUGCOnCallback OnCallback;
    void OnAttachLeaderboardUGCAsyncDelegate(const FAttachLeaderboardUGCData& Data, bool bWasSuccessful);

    void HandleCallback(const FAttachLeaderboardUGCData& Data, bool bWasSuccessful);
    class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* AttachLeaderboardUGCAsync(class UObject* WorldContextObject, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle, float Timeout);
};

class USteamCoreVoice : public USoundWaveProcedural
{

    void DestroySteamCoreVoice(class USteamCoreVoice* Obj);
    class USteamCoreVoice* ConstructSteamCoreVoice(int32 AudioSampleRate);
    void AddAudioBuffer(const TArray<uint8>& Buffer);
};

struct FHostPingData
{
    FString HostString;

};

class USteamUtilities : public UBlueprintFunctionLibrary
{

    bool WriteBytesToFile(bool bOverwriteIfExists, FString AbsoluteFilePath, const TArray<uint8>& DataBuffer);
    void SteamItemInstanceID_Equals_Exec(FSteamItemInstanceID A, FSteamItemInstanceID B, ESteamCoreIdentical& Result);
    bool SteamItemInstanceID_Equals(FSteamItemInstanceID A, FSteamItemInstanceID B);
    void ReleaseRequest();
    TArray<uint8> ReadFileToBytes(FString AbsoluteFilePath);
    bool PublishedFileID_NotEquals(FPublishedFileID A, FPublishedFileID B);
    void PublishedFileID_Equals_Exec(FPublishedFileID A, FPublishedFileID B, ESteamCoreIdentical& Result);
    bool PublishedFileID_Equals(FPublishedFileID A, FPublishedFileID B);
    bool NotEqual(FSteamID A, FSteamID B);
    FSteamUGCHandle MakeUGCHandle(FString Value);
    FSteamTicketHandle MakeTicketHandle(FString Value);
    FSteamSessionSetting MakeString(const FString Value);
    FSteamID MakeSteamID(FString Value);
    FSteamGameID MakeSteamGameID(FString Value);
    FSteamSessionSearchSetting MakeSearchString(const FString Value);
    FSteamSessionSearchSetting MakeSearchInteger(const ESteamComparisonOp ComparisonOperator, const int32 Value);
    FSteamSessionSearchSetting MakeSearchBool(const bool bValue);
    FPublishedFileID MakePublishedFileID(FString Value);
    FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(FString Value);
    FSteamSessionSetting MakeInteger(const int32 Value);
    FSteamSessionSetting MakeBool(const bool bValue);
    void ListenForSteamMessages(const FListenForSteamMessagesCallback& Callback);
    bool IsValid(FSteamID SteamID);
    bool IsUsingP2PRelays();
    void IsUGCHandleValid_Exec(const FSteamUGCHandle Handle, ESteamCoreValid& Result);
    bool IsUGCHandleValid(const FSteamUGCHandle Handle);
    void IsSteamTicketHandleValid_Exec(const FSteamTicketHandle Handle, ESteamCoreValid& Result);
    bool IsSteamTicketHandleValid(const FSteamTicketHandle Handle);
    bool IsSteamServerInitialized();
    void IsSteamInventoryUpdateHandleValid_Exec(const FSteamInventoryUpdateHandle Handle, ESteamCoreValid& Result);
    bool IsSteamInventoryUpdateHandleValid(const FSteamInventoryUpdateHandle Handle);
    void IsSteamIDValid_Exec(const FSteamID SteamID, ESteamCoreValid& Result);
    bool IsSteamAvailable();
    bool IsRecalculatingPing();
    void IsPublishedFileIDValid_Exec(const FPublishedFileID Handle, ESteamCoreValid& Result);
    bool IsPublishedFileIDValid(FPublishedFileID PublishedFileID);
    bool IsLobby(FSteamID SteamID);
    void IsGameIDValid_Exec(const FSteamGameID GameID, ESteamCoreValid& Result);
    bool IsGameIDValid(const FSteamGameID GameID);
    FString GetString(FSteamSessionSetting Settings, FString& Key);
    FSteamID GetSteamIdFromPlayerState(class APlayerState* PlayerState);
    void GetPublicIp(const FGetPublicIpCallback& Callback);
    int32 GetPingFromHostData(const FHostPingData& Data);
    int32 GetInteger(FSteamSessionSetting Settings, FString& Key);
    FHostPingData GetHostPingData();
    bool GetBool(FSteamSessionSetting Settings, FString& Key);
    ESteamAccountType GetAccountType(FSteamID SteamID);
    FDateTime FromUnixTimestamp(const FString Timestamp);
    void Equal_Exec(FSteamID A, const FSteamID B, ESteamCoreIdentical& Result);
    bool Equal(FSteamID A, FSteamID B);
    FString EncryptString(FString String);
    class UServerFilter* ConstructServerFilter(class UObject* WorldContextObject);
    void CancelQuery();
    FString BreakUGCHandle(FSteamUGCHandle Handle);
    FString BreakTicketHandle(FSteamTicketHandle Handle);
    FString BreakSteamID(FSteamID SteamID);
    FString BreakSteamGameID(FSteamGameID SteamID);
    FString BreakPublishedFileID(FPublishedFileID FileID);
    FString BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle Handle);
    TArray<uint8> BP_StringToBytes(FString String);
    FString BP_BytesToString(TArray<uint8> Array);
};

struct FCheckFileSignature
{
    ESteamCheckFileSignature CheckFileSignature;

};

struct FGamepadTextInputDismissed
{
    bool bSubmitted;
    int32 SubmittedText;

};

struct FIPCountry
{
};

struct FLowBatteryPower
{
    int32 MinutesBatteryLeft;

};

struct FSteamShutdown
{
};

class UUtils : public USteamCoreSubsystem
{
    FUtilsCheckFileSignature CheckFileSignature;
    void OnCheckFileSignature(const FCheckFileSignature& Data);
    FUtilsGamepadTextInputDismissed GamepadTextInputDismissed;
    void OnGamepadTextInputDismissed(const FGamepadTextInputDismissed& Data);
    FUtilsIPCountry IPCountry;
    void OnIPCountry(const FIPCountry& Data);
    FUtilsLowBatteryPower LowBatteryPower;
    void OnLowBatteryPower(const FLowBatteryPower& Data);
    FUtilsSteamShutdown SteamShutdown;
    void OnSteamShutdown(const FSteamShutdown& Data);

    void StartVRDashboard();
    bool ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, FString Description, int32 CharMax, FString ExistingText);
    void SetVRHeadsetStreamingEnabled(bool bEnabled);
    void SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition);
    void SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset);
    bool IsVRHeadsetStreamingEnabled();
    bool IsSteamRunningInVR();
    bool IsSteamInBigPictureMode();
    bool IsSteamChinaLauncher();
    bool IsOverlayEnabled();
    bool InitFilterText();
    FString GetSteamUILanguage();
    int32 GetServerRealTime();
    int32 GetSecondsSinceComputerActive();
    int32 GetSecondsSinceAppActive();
    FString GetIPCountry();
    int32 GetIPCCallCount();
    bool GetImageSize(int32 iImage, int32& Width, int32& Height);
    bool GetImageRGBA(int32 iImage, TArray<uint8>& OutBuffer);
    int32 GetEnteredGamepadTextLength();
    bool GetEnteredGamepadTextInput(FString& Text);
    int32 GetCurrentBatteryPower();
    ESteamUniverse GetConnectedUniverse();
    int32 GetAppID_Pure();
    int32 GetAppID();
    bool BOverlayNeedsPresent();
};

struct FGetOPFSettingsResult
{
    ESteamResult Result;
    int32 AppID;

};

struct FGetVideoURLResult
{
    ESteamResult Result;
    int32 AppID;
    FString URL;

};

class UVideo : public USteamCoreSubsystem
{
    FVideoGetOPFSettingsResult GetOPFSettingsResult;
    void OnGetOPFSettingsResult(const FGetOPFSettingsResult& Data);
    FVideoGetVideoURLResult GetVideoURLResult;
    void OnGetVideoURLResult(const FGetVideoURLResult& Data);

    bool IsBroadcasting(int32& NumViewers);
    void GetVideoURL(int32 VideoAppID);
    bool GetOPFStringForApp(int32 VideoAppID, FString& OutBuffer);
    void GetOPFSettings(int32 VideoAppID);
};

struct FAssociateWithClanResult
{
    ESteamResult Result;

};

struct FComputeNewPlayerCompatibilityResult
{
    ESteamResult Result;
    int32 PlayersThatDontLikeCandidate;
    int32 PlayersThatCandidateDoesntLike;
    int32 ClanPlayersThatDontLikeCandidate;
    FSteamID SteamIDCandidate;

};

struct FGSStatsReceived
{
    ESteamResult Result;
    FSteamID SteamIDUser;

};

struct FGSStatsStored
{
    ESteamResult Result;
    FSteamID SteamIDUser;

};

struct FRemoteStorageFileWriteAsyncComplete
{
    ESteamResult Result;

};

struct FRemoteStorageDownloadUGCResult
{
    ESteamResult Result;
    FSteamUGCHandle FileHandle;
    int32 AppID;
    int32 SizeInBytes;
    FString Filename;
    FSteamID SteamIDOwner;

};

struct FRemoteStorageFileShareResult
{
    ESteamResult Result;
    FSteamUGCHandle File;
    FString Filename;

};

struct FSteamParentalSettingsChanged
{
};

#endif
