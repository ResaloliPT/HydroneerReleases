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
	 * Class UWorksCore.UWorksInterfaceCore
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCore : public UUWorksInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCore
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UUWorksRequestCore : public UUWorksRequest
	{
	public:
		unsigned char                                              UnknownData_07I3[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreAppList
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreAppList : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             SteamAppInstalled;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamAppUninstalled;                                     // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		int32_t GetNumInstalledApps();
		int32_t GetInstalledApps(TArray<int32_t>* AppIDs, int32_t MaxAppIDs);
		int32_t GetAppName(int32_t AppID, class FString* Name, int32_t NameMaxLength);
		class UUWorksInterfaceCoreAppList* STATIC_GetAppList();
		int32_t GetAppInstallDir(int32_t AppID, class FString* Directory, int32_t DirectoryMaxLength);
		int32_t GetAppBuildId(int32_t AppID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreApps
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreApps : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             DlcInstalled;                                            // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NewLaunchQueryParameters;                                // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void UninstallDLC(int32_t AppID);
		bool MarkContentCorrupt(bool bMissingFilesOnly);
		void InstallDLC(int32_t AppID);
		class FString GetLaunchQueryParam(const class FString& Key);
		int32_t GetInstalledDepots(int32_t AppID, TArray<int32_t>* Depots, int32_t MaxDepots);
		void GetFileDetailsMinimal(const class FScriptDelegate& Completed, const class FString& Filename);
		class UUWorksRequestCoreGetFileDetails* GetFileDetails();
		int32_t GetEarliestPurchaseUnixTime(int32_t AppID);
		bool GetDlcDownloadProgress(int32_t AppID, int32_t* BytesDownloaded, int32_t* bytesTotal);
		int32_t GetDLCCount();
		class FString GetCurrentGameLanguage();
		bool GetCurrentBetaName(class FString* Name, int32_t NameMaxLength);
		class FString GetAvailableGameLanguages();
		class UUWorksInterfaceCoreApps* STATIC_GetApps();
		struct FUWorksSteamID GetAppOwner();
		int32_t GetAppInstallDir(int32_t AppID, class FString* Path, int32_t PathMaxLength);
		int32_t GetAppBuildId();
		bool BIsVACBanned();
		bool BIsSubscribedFromFreeWeekend();
		bool BIsSubscribedApp(int32_t AppID);
		bool BIsSubscribed();
		bool BIsLowViolence();
		bool BIsDlcInstalled(int32_t AppID);
		bool BIsCybercafe();
		bool BIsAppInstalled(int32_t AppID);
		bool BGetDLCDataByIndex(int32_t DLC, int32_t* AppID, bool* bAvailable, class FString* Name, int32_t NameMaxLength);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreController
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreController : public UUWorksInterfaceCore
	{
	public:
		void TriggerVibration(const struct FUWorksControllerHandle& ControllerHandle, int32_t LeftSpeed, int32_t RightSpeed);
		void TriggerRepeatedHapticPulse(const struct FUWorksControllerHandle& ControllerHandle, UWorksCore_EUWorksSteamControllerPad TargetPad, int32_t DurationMicroSec, int32_t OffMicroSec, int32_t Repeat, int32_t Flags);
		void TriggerHapticPulse(const struct FUWorksControllerHandle& ControllerHandle, UWorksCore_EUWorksSteamControllerPad TargetPad, int32_t DurationMicroSec);
		void StopAnalogActionMomentum(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerAnalogActionHandle& Action);
		bool Shutdown();
		bool ShowBindingPanel(const struct FUWorksControllerHandle& ControllerHandle);
		void SetLEDColor(const struct FUWorksControllerHandle& ControllerHandle, unsigned char ColorR, unsigned char ColorG, unsigned char ColorB, TArray<UWorksCore_EUWorksSteamControllerLEDFlag> Flags);
		void RunFrame();
		bool Init();
		class FString GetStringForActionOrigin(UWorksCore_EUWorksControllerActionOrigin Origin);
		struct FUWorksControllerMotionData GetMotionData(const struct FUWorksControllerHandle& ControllerHandle);
		class FString GetGlyphForActionOrigin(UWorksCore_EUWorksControllerActionOrigin Origin);
		int32_t GetGamepadIndexForController(const struct FUWorksControllerHandle& ControllerHandle);
		int32_t GetDigitalActionOrigins(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle, const struct FUWorksControllerDigitalActionHandle& DigitalActionHandle, TArray<UWorksCore_EUWorksControllerActionOrigin>* OriginsOut);
		struct FUWorksControllerDigitalActionHandle GetDigitalActionHandle(const class FString& ActionName);
		struct FUWorksControllerDigitalActionData GetDigitalActionData(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerDigitalActionHandle& DigitalActionHandle);
		struct FUWorksControllerActionSetHandle GetCurrentActionSet(const struct FUWorksControllerHandle& ControllerHandle);
		struct FUWorksControllerHandle GetControllerForGamepadIndex(int32_t Index);
		class UUWorksInterfaceCoreController* STATIC_GetController();
		int32_t GetConnectedControllers(TArray<struct FUWorksControllerHandle>* HandlesOut);
		int32_t GetAnalogActionOrigins(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle, const struct FUWorksControllerAnalogActionHandle& AnalogActionHandle, TArray<UWorksCore_EUWorksControllerActionOrigin>* OriginsOut);
		struct FUWorksControllerAnalogActionHandle GetAnalogActionHandle(const class FString& ActionName);
		struct FUWorksControllerAnalogActionData GetAnalogActionData(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerAnalogActionHandle& AnalogActionHandle);
		struct FUWorksControllerActionSetHandle GetActionSetHandle(const class FString& ActionSetName);
		void ActivateActionSet(const struct FUWorksControllerHandle& ControllerHandle, const struct FUWorksControllerActionSetHandle& ActionSetHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreFriends
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreFriends : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             PersonaStateChange;                                      // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameOverlayActivated;                                    // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameServerChangeRequested;                               // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameLobbyJoinRequested;                                  // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AvatarImageLoaded;                                       // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             FriendRichPresenceUpdate;                                // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameRichPresenceJoinRequested;                           // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameConnectedClanChatMsg;                                // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameConnectedChatJoin;                                   // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameConnectedChatLeave;                                  // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameConnectedFriendChatMsg;                              // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool SetRichPresence(const class FString& Key, const class FString& Value);
		void SetPlayedWith(const struct FUWorksSteamID& SteamIDUserPlayedWith);
		void SetPersonaNameMinimal(const class FScriptDelegate& Completed, const class FString& Name);
		class UUWorksRequestCoreSetPersonaName* SetPersonaName();
		bool SetListenForFriendsMessages(bool bInterceptEnabled);
		void SetInGameVoiceSpeaking(const struct FUWorksSteamID& SteamIDUser, bool bSpeaking);
		bool SendClanChatMessage(const struct FUWorksSteamID& SteamIDClanChat, const class FString& Text);
		bool RequestUserInformation(const struct FUWorksSteamID& SteamIDUser, bool bRequireNameOnly);
		void RequestFriendRichPresence(const struct FUWorksSteamID& SteamIDFriend);
		void RequestClanOfficerListMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID);
		class UUWorksRequestCoreRequestClanOfficerList* RequestClanOfficerList();
		bool ReplyToFriendMessage(const struct FUWorksSteamID& SteamIDFriend, const class FString& MessageToSend);
		bool OpenClanChatWindowInSteam(const struct FUWorksSteamID& SteamIDClanChat);
		bool LeaveClanChatRoom(const struct FUWorksSteamID& SteamIDClan);
		void JoinClanChatRoomMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDClan);
		class UUWorksRequestCoreJoinClanChatRoom* JoinClanChatRoom();
		bool IsUserInSource(const struct FUWorksSteamID& SteamIDUser, const struct FUWorksSteamID& SteamIDSource);
		void IsFollowingMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID);
		class UUWorksRequestCoreIsFollowing* IsFollowing();
		bool IsClanChatWindowOpenInSteam(const struct FUWorksSteamID& SteamIDClanChat);
		bool IsClanChatAdmin(const struct FUWorksSteamID& SteamIDClanChat, const struct FUWorksSteamID& SteamIDUser);
		bool InviteUserToGame(const struct FUWorksSteamID& SteamIDFriend, const class FString& ConnectString);
		bool HasFriend(const struct FUWorksSteamID& SteamIDFriend, TArray<UWorksCore_EUWorksFriendFlags> FriendFlags);
		TArray<UWorksCore_EUWorksUserRestriction> GetUserRestrictions();
		class UTexture2D* GetSmallFriendAvatar(const struct FUWorksSteamID& SteamIDFriend);
		class FString GetPlayerNickname(const struct FUWorksSteamID& SteamIDPlayer);
		UWorksCore_EUWorksPersonaState GetPersonaState();
		class FString GetPersonaName();
		class UTexture2D* GetMediumFriendAvatar(const struct FUWorksSteamID& SteamIDFriend);
		class UTexture2D* GetLargeFriendAvatar(const struct FUWorksSteamID& SteamIDFriend);
		int32_t GetFriendSteamLevel(const struct FUWorksSteamID& SteamIDFriend);
		class FString GetFriendsGroupName(const struct FUWorksFriendsGroupID& FriendsGroupID);
		void GetFriendsGroupMembersList(const struct FUWorksFriendsGroupID& FriendsGroupID, TArray<struct FUWorksSteamID>* SteamIDMembers, int32_t MembersCount);
		int32_t GetFriendsGroupMembersCount(const struct FUWorksFriendsGroupID& FriendsGroupID);
		struct FUWorksFriendsGroupID GetFriendsGroupIDByIndex(int32_t FriendGroup);
		int32_t GetFriendsGroupCount();
		class UUWorksInterfaceCoreFriends* STATIC_GetFriends();
		int32_t GetFriendRichPresenceKeyCount(const struct FUWorksSteamID& SteamIDFriend);
		class FString GetFriendRichPresenceKeyByIndex(const struct FUWorksSteamID& SteamIDFriend, int32_t Key);
		class FString GetFriendRichPresence(const struct FUWorksSteamID& SteamIDFriend, const class FString& Key);
		UWorksCore_EUWorksFriendRelationship GetFriendRelationship(const struct FUWorksSteamID& SteamIDFriend);
		UWorksCore_EUWorksPersonaState GetFriendPersonaState(const struct FUWorksSteamID& SteamIDFriend);
		class FString GetFriendPersonaNameHistory(const struct FUWorksSteamID& SteamIDFriend, int32_t PersonaName);
		class FString GetFriendPersonaName(const struct FUWorksSteamID& SteamIDFriend);
		int32_t GetFriendMessage(const struct FUWorksSteamID& SteamIDFriend, int32_t MessageID, class FString* Text, int32_t TextMaxLength, UWorksCore_EUWorksChatEntryType* ChatEntryType);
		bool GetFriendGamePlayed(const struct FUWorksSteamID& SteamIDFriend, struct FUWorksGameID* GameID, class FString* GameIP, int32_t* ConnectionPort, int32_t* QueryPort, struct FUWorksSteamID* SteamIDLobby);
		struct FUWorksSteamID GetFriendFromSourceByIndex(const struct FUWorksSteamID& SteamIDSource, int32_t Friend);
		int32_t GetFriendCountFromSource(const struct FUWorksSteamID& SteamIDSource);
		int32_t GetFriendCount(TArray<UWorksCore_EUWorksFriendFlags> FriendFlags);
		int32_t GetFriendCoplayTime(const struct FUWorksSteamID& SteamIDFriend);
		int32_t GetFriendCoplayGame(const struct FUWorksSteamID& SteamIDFriend);
		struct FUWorksSteamID GetFriendByIndex(int32_t Friend, TArray<UWorksCore_EUWorksFriendFlags> FriendFlags);
		void GetFollowerCountMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID);
		class UUWorksRequestCoreGetFollowerCount* GetFollowerCount();
		int32_t GetCoplayFriendCount();
		struct FUWorksSteamID GetCoplayFriend(int32_t CoplayFriend);
		class FString GetClanTag(const struct FUWorksSteamID& SteamIDClan);
		struct FUWorksSteamID GetClanOwner(const struct FUWorksSteamID& SteamIDClan);
		int32_t GetClanOfficerCount(const struct FUWorksSteamID& SteamIDClan);
		struct FUWorksSteamID GetClanOfficerByIndex(const struct FUWorksSteamID& SteamIDClan, int32_t Officer);
		class FString GetClanName(const struct FUWorksSteamID& SteamIDClan);
		int32_t GetClanCount();
		int32_t GetClanChatMessage(const struct FUWorksSteamID& SteamIDClanChat, int32_t MessageID, class FString* Text, int32_t TextMax, UWorksCore_EUWorksChatEntryType* ChatEntryType, struct FUWorksSteamID* SteamIDChatter);
		int32_t GetClanChatMemberCount(const struct FUWorksSteamID& SteamIDClan);
		struct FUWorksSteamID GetClanByIndex(int32_t Clan);
		bool GetClanActivityCounts(const struct FUWorksSteamID& SteamIDClan, int32_t* Online, int32_t* InGame, int32_t* Chatting);
		struct FUWorksSteamID GetChatMemberByIndex(const struct FUWorksSteamID& SteamIDClan, int32_t User);
		void EnumerateFollowingListMinimal(const class FScriptDelegate& Completed, int32_t StartIndex);
		class UUWorksRequestCoreEnumerateFollowingList* EnumerateFollowingList();
		void DownloadClanActivityCountsMinimal(const class FScriptDelegate& Completed, TArray<struct FUWorksSteamID> SteamIDClans);
		class UUWorksRequestCoreDownloadClanActivityCounts* DownloadClanActivityCounts();
		bool CloseClanChatWindowInSteam(const struct FUWorksSteamID& SteamIDClanChat);
		void ClearRichPresence();
		void ActivateGameOverlayToWebPage(const class FString& URL);
		void ActivateGameOverlayToUser(UWorksCore_EUWorksOverlaySpecific Dialog, const struct FUWorksSteamID& SteamID);
		void ActivateGameOverlayToStore(int32_t AppID, UWorksCore_EUWorksOverlayToStoreFlag Flag);
		void ActivateGameOverlayInviteDialog(const struct FUWorksSteamID& SteamIDLobby);
		void ActivateGameOverlay(UWorksCore_EUWorksOverlayGeneric Dialog);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreGameServer
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreGameServer : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             GSPolicyResponse;                                        // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GSClientGroupStatus;                                     // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GSValidateAuthTicketResponse;                            // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool WasRestartRequested();
		UWorksCore_EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(const struct FUWorksSteamID& SteamID, int32_t AppID);
		void SetServerName(const class FString& ServerName);
		void SetRegion(const class FString& Region);
		void SetPasswordProtected(bool bPasswordProtected);
		void SetMaxPlayerCount(int32_t PlayersMax);
		void SetMapName(const class FString& MapName);
		void SetKeyValue(const class FString& Key, const class FString& Value);
		void SetHeartbeatInterval(int32_t HeartbeatInterval);
		void SetGameTags(const class FString& GameTags);
		void SetGameData(const class FString& GameData);
		void SetBotPlayerCount(int32_t BotPlayers);
		bool RequestUserGroupStatus(const struct FUWorksSteamID& SteamIDUser, const struct FUWorksSteamID& SteamIDGroup);
		struct FUWorksSteamID GetSteamID();
		class UUWorksInterfaceCoreGameServer* STATIC_GetGameServer();
		struct FUWorksTicketHandle GetAuthSessionTicket(TArray<unsigned char>* Ticket);
		void ForceHeartbeat();
		void EndAuthSession(const struct FUWorksSteamID& SteamID);
		void EnableHeartbeats(bool bActive);
		void ComputeNewPlayerCompatibilityMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDNewPlayer);
		class UUWorksRequestCoreComputeNewPlayerCompatibility* ComputeNewPlayerCompatibility();
		void ClearAllKeyValues();
		void CancelAuthTicket(const struct FUWorksTicketHandle& TicketHandle);
		bool BSecure();
		bool BLoggedOn();
		UWorksCore_EUWorksBeginAuthSessionResult BeginAuthSession(TArray<unsigned char> Ticket, const struct FUWorksSteamID& SteamID);
		void AssociateWithClanMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDClan);
		class UUWorksRequestCoreAssociateWithClan* AssociateWithClan();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreGameServerStats
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreGameServerStats : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             GSStatsUnloaded;                                         // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool UpdateUserAvgRateStat(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, float CountThisSession, float SessionLength);
		void StoreUserStatsMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDUser);
		class UUWorksRequestCoreStoreUserStats* StoreUserStats();
		bool SetUserStatFromInteger(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, int32_t Data);
		bool SetUserStatFromFloat(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, float Data);
		bool SetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const class FString& Name);
		void RequestUserStatsMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDUser);
		class UUWorksRequestCoreRequestUserStatsGS* RequestUserStats();
		bool GetUserStatAsInteger(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, int32_t* Data);
		bool GetUserStatAsFloat(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, float* Data);
		bool GetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, bool* bAchieved);
		class UUWorksInterfaceCoreGameServerStats* STATIC_GetGameServerStats();
		bool ClearUserAchievement(const struct FUWorksSteamID& SteamIDUser, const class FString& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreInventory
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreInventory : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             SteamInventoryResultReady;                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamInventoryFullUpdate;                                // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamInventoryDefinitionUpdate;                          // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool TriggerItemDrop(struct FUWorksSteamInventoryResult* handle, const struct FUWorksSteamItemDef& ItemDefinition);
		bool TransferItemQuantity(struct FUWorksSteamInventoryResult* handle, const struct FUWorksSteamItemInstanceID& ItemSourceInstanceID, int32_t ItemSourceQuantity, const struct FUWorksSteamItemInstanceID& ItemDestinationInstanceID);
		bool TradeItems(struct FUWorksSteamInventoryResult* handle, const struct FUWorksSteamID& SteamIDTradePartner, TArray<struct FUWorksSteamItemInstanceID> ItemsGiven, TArray<int32_t> ItemsGivenQuantities, TArray<struct FUWorksSteamItemInstanceID> ItemsReceived, TArray<int32_t> ItemsReceivedQuantities);
		bool SerializeResult(const struct FUWorksSteamInventoryResult& handle, TArray<unsigned char>* Buffer);
		void RequestEligiblePromoItemDefinitionsIDsMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID);
		class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDs();
		bool LoadItemDefinitions();
		bool GrantPromoItems(struct FUWorksSteamInventoryResult* handle);
		int32_t GetResultTimestamp(const struct FUWorksSteamInventoryResult& handle);
		UWorksCore_EUWorksResult GetResultStatus(const struct FUWorksSteamInventoryResult& handle);
		bool GetResultItems(const struct FUWorksSteamInventoryResult& handle, TArray<struct FUWorksSteamItemDetails>* items);
		bool GetItemsByID(struct FUWorksSteamInventoryResult* handle, TArray<struct FUWorksSteamItemInstanceID> InstanceIDs);
		bool GetItemDefinitionPropertyValue(const struct FUWorksSteamItemDef& ItemDefinition, const class FString& PropertyName, class FString* PropertyValue);
		bool GetItemDefinitionPropertiesNames(const struct FUWorksSteamItemDef& ItemDefinition, TArray<class FString>* PropertiesNames);
		bool GetItemDefinitionIDs(TArray<struct FUWorksSteamItemDef>* ItemDefinitions);
		class UUWorksInterfaceCoreInventory* STATIC_GetInventory();
		bool GetEligiblePromoItemDefinitionIDs(const struct FUWorksSteamID& SteamID, TArray<struct FUWorksSteamItemDef>* ItemDefinitions);
		bool GetAllItems(struct FUWorksSteamInventoryResult* handle);
		bool GenerateItems(struct FUWorksSteamInventoryResult* handle, TArray<struct FUWorksSteamItemDef> ItemDefinitions, TArray<int32_t> ItemQuantities);
		bool ExchangeItems(struct FUWorksSteamInventoryResult* handle, TArray<struct FUWorksSteamItemDef> ItemsGenerated, TArray<int32_t> ItemsGeneratedQuantities, TArray<struct FUWorksSteamItemInstanceID> ItemsDestroyed, TArray<int32_t> ItemsDestroyedQuantities);
		void DestroyResult(const struct FUWorksSteamInventoryResult& handle);
		bool DeserializeResult(struct FUWorksSteamInventoryResult* handle, TArray<unsigned char> Buffer, bool bReservedMustBeFalse);
		bool ConsumeItem(struct FUWorksSteamInventoryResult* handle, const struct FUWorksSteamItemInstanceID& ItemInstanceID, int32_t ItemQuantity);
		bool CheckResultSteamID(const struct FUWorksSteamInventoryResult& handle, const struct FUWorksSteamID& SteamID);
		bool AddPromoItems(struct FUWorksSteamInventoryResult* handle, TArray<struct FUWorksSteamItemDef> ItemDefinitions);
		bool AddPromoItem(struct FUWorksSteamInventoryResult* handle, const struct FUWorksSteamItemDef& ItemDefinition);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreMatchmaking
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreMatchmaking : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             FavoritesListChanged;                                    // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyInvite;                                             // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyDataUpdate;                                         // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyEnter;                                              // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyChatUpdate;                                         // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyChatMsg;                                            // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyGameCreated;                                        // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LobbyKicked;                                             // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             FavoritesListAccountsUpdated;                            // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool SetLobbyType(const struct FUWorksSteamID& SteamIDLobby, UWorksCore_EUWorksLobbyType LobbyType);
		bool SetLobbyOwner(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDNewOwner);
		bool SetLobbyMemberLimit(const struct FUWorksSteamID& SteamIDLobby, int32_t MaxMembers);
		void SetLobbyMemberData(const struct FUWorksSteamID& SteamIDLobby, const class FString& Key, const class FString& Value);
		bool SetLobbyJoinable(const struct FUWorksSteamID& SteamIDLobby, bool bLobbyJoinable);
		void SetLobbyGameServer(const struct FUWorksSteamID& SteamIDLobby, const class FString& GameServerIP, int32_t GameServerPort, const struct FUWorksSteamID& SteamIDGameServer);
		bool SetLobbyData(const struct FUWorksSteamID& SteamIDLobby, const class FString& Key, const class FString& Value);
		bool SetLinkedLobby(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDLobbyDependent);
		bool SendLobbyChatMsg(const struct FUWorksSteamID& SteamIDLobby, const class FString& Message);
		void RequestLobbyListMinimal(const class FScriptDelegate& Completed);
		class UUWorksRequestCoreRequestLobbyList* RequestLobbyList();
		bool RequestLobbyData(const struct FUWorksSteamID& SteamIDLobby);
		bool RemoveFavoriteGame(int32_t AppID, const class FString& IP, int32_t ConnectionPort, int32_t QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags> Flags);
		void LeaveLobby(const struct FUWorksSteamID& SteamIDLobby);
		void JoinLobbyMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamIDLobby);
		class UUWorksRequestCoreJoinLobby* JoinLobby();
		bool InviteUserToLobby(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDInvitee);
		int32_t GetNumLobbyMembers(const struct FUWorksSteamID& SteamIDLobby);
		class UUWorksInterfaceCoreMatchmaking* STATIC_GetMatchmaking();
		struct FUWorksSteamID GetLobbyOwner(const struct FUWorksSteamID& SteamIDLobby);
		int32_t GetLobbyMemberLimit(const struct FUWorksSteamID& SteamIDLobby);
		class FString GetLobbyMemberData(const struct FUWorksSteamID& SteamIDLobby, const struct FUWorksSteamID& SteamIDUser, const class FString& Key);
		struct FUWorksSteamID GetLobbyMemberByIndex(const struct FUWorksSteamID& SteamIDLobby, int32_t Member);
		bool GetLobbyGameServer(const struct FUWorksSteamID& SteamIDLobby, class FString* GameServerIP, int32_t* GameServerPort, struct FUWorksSteamID* SteamIDGameServer);
		int32_t GetLobbyDataCount(const struct FUWorksSteamID& SteamIDLobby);
		bool GetLobbyDataByIndex(const struct FUWorksSteamID& SteamIDLobby, int32_t LobbyData, class FString* Key, int32_t KeyMaxLength, class FString* Value, int32_t ValueMaxLength);
		class FString GetLobbyData(const struct FUWorksSteamID& SteamIDLobby, const class FString& Key);
		int32_t GetLobbyChatEntry(const struct FUWorksSteamID& SteamIDLobby, int32_t MessageID, struct FUWorksSteamID* SteamIDUser, class FString* Message, int32_t MessageMaxLength, UWorksCore_EUWorksChatEntryType* ChatEntryType);
		struct FUWorksSteamID GetLobbyByIndex(int32_t Lobby);
		int32_t GetFavoriteGameCount();
		bool GetFavoriteGame(int32_t Game, int32_t* AppID, class FString* IP, int32_t* ConnectionPort, int32_t* QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags>* Flags, int32_t* TimeLastPlayedOnServer);
		bool DeleteLobbyData(const struct FUWorksSteamID& SteamIDLobby, const class FString& Key);
		void CreateLobbyMinimal(const class FScriptDelegate& Completed, UWorksCore_EUWorksLobbyType LobbyType, int32_t MaxMembers);
		class UUWorksRequestCoreCreateLobby* CreateLobby();
		void AddRequestLobbyListStringFilter(const class FString& KeyToMatch, const class FString& ValueToMatch, UWorksCore_EUWorksLobbyComparison ComparisonType);
		void AddRequestLobbyListResultCountFilter(int32_t MaxResults);
		void AddRequestLobbyListNumericalFilter(const class FString& KeyToMatch, int32_t ValueToMatch, UWorksCore_EUWorksLobbyComparison ComparisonType);
		void AddRequestLobbyListNearValueFilter(const class FString& KeyToMatch, int32_t ValueToBeCloseTo);
		void AddRequestLobbyListFilterSlotsAvailable(int32_t SlotsAvailable);
		void AddRequestLobbyListDistanceFilter(UWorksCore_EUWorksLobbyDistanceFilter LobbyDistanceFilter);
		void AddRequestLobbyListCompatibleMembersFilter(const struct FUWorksSteamID& SteamIDLobby);
		int32_t AddFavoriteGame(int32_t AppID, const class FString& IP, int32_t ConnectionPort, int32_t QueryPort, TArray<UWorksCore_EUWorksFavoriteFlags> Flags, int32_t TimeLastPlayedOnServer);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreMatchmakingServers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreMatchmakingServers : public UUWorksInterfaceCore
	{
	public:
		void ServerListMinimal(const class FScriptDelegate& Completed, const class FScriptDelegate& Updated, int32_t AppID, UWorksCore_EUWorksServerQueryType queryType);
		class UUWorksRequestCoreServerList* ServerList();
		void RulesMinimal(const class FScriptDelegate& Completed, const class FScriptDelegate& Updated, const class FString& IP, int32_t Port);
		class UUWorksRequestCoreRules* Rules();
		void PlayersMinimal(const class FScriptDelegate& Completed, const class FScriptDelegate& Updated, const class FString& IP, int32_t Port);
		class UUWorksRequestCorePlayers* Players();
		void PingMinimal(const class FScriptDelegate& Completed, const class FString& IP, int32_t Port);
		class UUWorksRequestCorePing* Ping();
		class UUWorksInterfaceCoreMatchmakingServers* STATIC_GetMatchmakingServers();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreMusic
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreMusic : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             PlaybackStatusHasChanged;                                // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             VolumeHasChanged;                                        // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetVolume(float Volume);
		void PlayPrevious();
		void PlayNext();
		void Play();
		void Pause();
		float GetVolume();
		UWorksCore_EUWorksAudioPlaybackStatus GetPlaybackStatus();
		class UUWorksInterfaceCoreMusic* STATIC_GetMusic();
		bool BIsPlaying();
		bool BIsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreNetworking
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreNetworking : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             P2PSessionRequest;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             P2PSessionConnectFail;                                   // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool SendP2PPacket(const struct FUWorksSteamID& SteamIDRemote, TArray<unsigned char> Data, UWorksCore_EUWorksP2PSend P2PSendType, int32_t Channel);
		bool SendP2PMessage(const struct FUWorksSteamID& SteamIDRemote, const class FString& Data, UWorksCore_EUWorksP2PSend P2PSendType, int32_t Channel);
		bool ReadP2PPacket(TArray<unsigned char>* Data, int32_t DataMax, struct FUWorksSteamID* SteamIDRemote, int32_t Channel);
		bool ReadP2PMessage(class FString* Data, int32_t DataMax, struct FUWorksSteamID* SteamIDRemote, int32_t Channel);
		bool IsP2PPacketAvailable(int32_t* DataSize, int32_t Channel);
		bool GetP2PSessionState(const struct FUWorksSteamID& SteamIDRemote, struct FUWorksP2PSessionState* ConnectionState);
		class UUWorksInterfaceCoreNetworking* STATIC_GetNetworking();
		bool CloseP2PSessionWithUser(const struct FUWorksSteamID& SteamIDRemote);
		bool CloseP2PChannelWithUser(const struct FUWorksSteamID& SteamIDRemote, int32_t Channel);
		bool AllowP2PPacketRelay(bool bAllow);
		bool AcceptP2PSessionWithUser(const struct FUWorksSteamID& SteamIDRemote);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreRemoteStorage
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreRemoteStorage : public UUWorksInterfaceCore
	{
	public:
		bool SetSyncPlatforms(const class FString& File, UWorksCore_EUWorksRemoteStoragePlatform RemoteStoragePlatform);
		void SetCloudEnabledForApp(bool bEnabled);
		bool IsCloudEnabledForApp();
		bool IsCloudEnabledForAccount();
		UWorksCore_EUWorksRemoteStoragePlatform GetSyncPlatforms(const class FString& File);
		class UUWorksInterfaceCoreRemoteStorage* STATIC_GetRemoteStorage();
		bool GetQuota(class FString* TotalBytes, class FString* AvailableBytes);
		int32_t GetFileTimestamp(const class FString& File);
		int32_t GetFileSize(const class FString& File);
		class FString GetFileNameAndSize(int32_t File, int32_t* FileSizeInBytes);
		int32_t GetFileCount();
		bool FileWriteStreamWriteChunk(const struct FUWorksUGCFileWriteStreamHandle& handle, TArray<unsigned char> Buffer);
		struct FUWorksUGCFileWriteStreamHandle FileWriteStreamOpen(const class FString& File);
		bool FileWriteStreamClose(const struct FUWorksUGCFileWriteStreamHandle& handle);
		bool FileWriteStreamCancel(const struct FUWorksUGCFileWriteStreamHandle& handle);
		void FileWriteAsyncMinimal(const class FScriptDelegate& Completed, const class FString& File, TArray<unsigned char> Buffer);
		class UUWorksRequestCoreFileWriteAsync* FileWriteAsync();
		bool FileWrite(const class FString& File, TArray<unsigned char> Buffer);
		void FileReadAsyncMinimal(const class FScriptDelegate& Completed, const class FString& File, int32_t Offset, int32_t BytesToRead);
		class UUWorksRequestCoreFileReadAsync* FileReadAsync();
		int32_t FileRead(const class FString& File, TArray<unsigned char>* Buffer, int32_t BufferSize);
		bool FilePersisted(const class FString& File);
		bool FileForget(const class FString& File);
		bool FileExists(const class FString& File);
		bool FileDelete(const class FString& File);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreScreenshots
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreScreenshots : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             ScreenshotReady;                                         // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ScreenshotRequested;                                     // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		struct FUWorksScreenshotHandle WriteScreenshot(class UTexture2D* Image);
		void TriggerScreenshot();
		bool TagUser(const struct FUWorksScreenshotHandle& Screenshot, const struct FUWorksSteamID& SteamID);
		bool TagPublishedFile(const struct FUWorksScreenshotHandle& Screenshot, const struct FUWorksPublishedFileID& PublishedFileID);
		bool SetLocation(const struct FUWorksScreenshotHandle& Screenshot, const class FString& Location);
		bool IsScreenshotsHooked();
		void HookScreenshots(bool bHook);
		class UUWorksInterfaceCoreScreenshots* STATIC_GetScreenshots();
		struct FUWorksScreenshotHandle AddVRScreenshotToLibrary(UWorksCore_EUWorksVRScreenshotType Type, const class FString& Filename, const class FString& VRFileName);
		struct FUWorksScreenshotHandle AddScreenshotToLibrary(const class FString& FileMame, const class FString& ThumbnailFileName, int32_t Width, int32_t Height);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreUGC
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreUGC : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             ItemInstalled;                                           // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             DownloadItemResult;                                      // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool UpdateItemPreviewVideo(const struct FUWorksUGCUpdateHandle& handle, int32_t Index, const class FString& PreviewVideo);
		bool UpdateItemPreviewFile(const struct FUWorksUGCUpdateHandle& handle, int32_t Index, const class FString& PreviewFile);
		void UnsubscribeItemMinimal(const class FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID);
		class UUWorksRequestCoreUnsubscribeItem* UnsubscribeItem();
		void SuspendDownloads(bool bSuspend);
		void SubscribeItemMinimal(const class FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID);
		class UUWorksRequestCoreSubscribeItem* SubscribeItem();
		void SubmitItemUpdateMinimal(const class FScriptDelegate& Completed, const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const class FString& ChangeNote);
		class UUWorksRequestCoreSubmitItemUpdate* SubmitItemUpdate();
		void StopPlaytimeTrackingMinimal(const class FScriptDelegate& Completed, TArray<struct FUWorksPublishedFileID> PublishedFileIDs);
		void StopPlaytimeTrackingForAllItemsMinimal(const class FScriptDelegate& Completed);
		class UUWorksRequestCoreStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItems();
		class UUWorksRequestCoreStopPlaytimeTracking* StopPlaytimeTracking();
		void StartPlaytimeTrackingMinimal(const class FScriptDelegate& Completed, TArray<struct FUWorksPublishedFileID> PublishedFileID);
		class UUWorksRequestCoreStartPlaytimeTracking* StartPlaytimeTracking();
		struct FUWorksUGCUpdateHandle StartItemUpdate(int32_t ConsumerAppID, const struct FUWorksPublishedFileID& PublishedFileID);
		void SetUserItemVoteMinimal(const class FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp);
		class UUWorksRequestCoreSetUserItemVote* SetUserItemVote();
		bool SetSearchText(const struct FUWorksUGCQueryHandle& handle, const class FString& searchText);
		bool SetReturnTotalOnly(const struct FUWorksUGCQueryHandle& handle, bool bReturnTotalOnly);
		bool SetReturnOnlyIDs(const struct FUWorksUGCQueryHandle& handle, bool bReturnOnlyIDs);
		bool SetReturnMetadata(const struct FUWorksUGCQueryHandle& handle, bool bReturnMetaData);
		bool SetReturnLongDescription(const struct FUWorksUGCQueryHandle& handle, bool bReturnLongDescription);
		bool SetReturnKeyValueTags(const struct FUWorksUGCQueryHandle& handle, bool bReturnKeyValueTags);
		bool SetReturnChildren(const struct FUWorksUGCQueryHandle& handle, bool bReturnChildren);
		bool SetReturnAdditionalPreviews(const struct FUWorksUGCQueryHandle& handle, bool bReturnAdditionalPreviews);
		bool SetRankedByTrendDays(const struct FUWorksUGCQueryHandle& handle, int32_t Days);
		bool SetMatchAnyTag(const struct FUWorksUGCQueryHandle& handle, bool bMatchAnyTag);
		bool SetLanguage(const struct FUWorksUGCQueryHandle& handle, const class FString& Language);
		bool SetItemVisibility(const struct FUWorksUGCUpdateHandle& handle, UWorksCore_EUWorksRemoteStoragePublishedFileVisibility Visibility);
		bool SetItemUpdateLanguage(const struct FUWorksUGCUpdateHandle& handle, const class FString& Language);
		bool SetItemTitle(const struct FUWorksUGCUpdateHandle& handle, const class FString& title);
		bool SetItemTags(const struct FUWorksUGCUpdateHandle& handle, TArray<class FString> tags);
		bool SetItemPreview(const struct FUWorksUGCUpdateHandle& handle, const class FString& PreviewFile);
		bool SetItemMetadata(const struct FUWorksUGCUpdateHandle& handle, const class FString& MetaData);
		bool SetItemDescription(const struct FUWorksUGCUpdateHandle& handle, const class FString& Description);
		bool SetItemContent(const struct FUWorksUGCUpdateHandle& handle, const class FString& ContentFolder);
		bool SetCloudFileNameFilter(const struct FUWorksUGCQueryHandle& handle, const class FString& MatchCloudFileName);
		bool SetAllowCachedResponse(const struct FUWorksUGCQueryHandle& handle, int32_t MaxAgeSeconds);
		void SendQueryUGCRequestMinimal(const class FScriptDelegate& Completed, const struct FUWorksUGCQueryHandle& UGCQueryHandle);
		class UUWorksRequestCoreSendQueryUGCRequest* SendQueryUGCRequest();
		bool RemoveItemPreview(const struct FUWorksUGCUpdateHandle& handle, int32_t Index);
		bool RemoveItemKeyValueTags(const struct FUWorksUGCUpdateHandle& handle, const class FString& Key);
		void RemoveItemFromFavoritesMinimal(const class FScriptDelegate& Completed, int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID);
		class UUWorksRequestCoreRemoveItemFromFavorites* RemoveItemFromFavorites();
		bool ReleaseQueryUGCRequest(const struct FUWorksUGCQueryHandle& handle);
		void GetUserItemVoteMinimal(const class FScriptDelegate& Completed, const struct FUWorksPublishedFileID& PublishedFileID);
		class UUWorksRequestCoreGetUserItemVote* GetUserItemVote();
		class UUWorksInterfaceCoreUGC* STATIC_GetUGC();
		int32_t GetSubscribedItems(TArray<struct FUWorksPublishedFileID>* PublishedFileIDs, int32_t MaxEntries);
		bool GetQueryUGCStatistic(const struct FUWorksUGCQueryHandle& handle, int32_t Index, UWorksCore_EUWorksItemStatistic StatType, class FString* StatValue);
		bool GetQueryUGCResult(const struct FUWorksUGCQueryHandle& handle, int32_t Index, struct FUWorksSteamUGCDetails* Details);
		bool GetQueryUGCPreviewURL(const struct FUWorksUGCQueryHandle& handle, int32_t Index, class FString* URL, int32_t URLMaxLength);
		int32_t GetQueryUGCNumKeyValueTags(const struct FUWorksUGCQueryHandle& handle, int32_t Index);
		int32_t GetQueryUGCNumAdditionalPreviews(const struct FUWorksUGCQueryHandle& handle, int32_t Index);
		bool GetQueryUGCMetadata(const struct FUWorksUGCQueryHandle& handle, int32_t Index, class FString* MetaData, int32_t MetadataMaxLength);
		bool GetQueryUGCKeyValueTag(const struct FUWorksUGCQueryHandle& handle, int32_t Index, int32_t KeyValueTagIndex, class FString* Key, int32_t KeyMaxLength, class FString* Value, int32_t ValueMaxLength);
		bool GetQueryUGCChildren(const struct FUWorksUGCQueryHandle& handle, int32_t Index, TArray<struct FUWorksPublishedFileID>* PublishedFileIDs, int32_t MaxEntries);
		bool GetQueryUGCAdditionalPreview(const struct FUWorksUGCQueryHandle& handle, int32_t Index, int32_t PreviewIndex, class FString* urlOrVideoId, int32_t URLOrVideoIDMaxLength, class FString* originalFileName, int32_t OriginalFileNameMaxLength, UWorksCore_EUWorksItemPreviewType* PreviewType);
		int32_t GetNumSubscribedItems();
		UWorksCore_EUWorksItemUpdateStatus GetItemUpdateProgress(const struct FUWorksUGCUpdateHandle& handle, class FString* BytesProcessed, class FString* bytesTotal);
		int32_t GetItemState(const struct FUWorksPublishedFileID& PublishedFileID);
		bool GetItemInstallInfo(const struct FUWorksPublishedFileID& PublishedFileID, class FString* SizeOnDisk, class FString* Path, int32_t PathMaxLength, int32_t* Timestamp);
		bool GetItemDownloadInfo(const struct FUWorksPublishedFileID& PublishedFileID, class FString* BytesDownloaded, class FString* bytesTotal);
		bool DownloadItem(const struct FUWorksPublishedFileID& PublishedFileID, bool bHighPriority);
		struct FUWorksUGCQueryHandle CreateQueryUserUGCRequest(const struct FUWorksSteamID& SteamID, UWorksCore_EUWorksUserUGCList ListType, UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCType, UWorksCore_EUWorksUserUGCListSortOrder sortOrder, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page);
		struct FUWorksUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<struct FUWorksPublishedFileID> PublishedFileIDs, int32_t NumPublishedFileIDs);
		struct FUWorksUGCQueryHandle CreateQueryAllUGCRequest(UWorksCore_EUWorksUGCQuery queryType, UWorksCore_EUWorksUGCMatchingUGCType MatchingUGCTypeFileType, int32_t CreatorAppID, int32_t ConsumerAppID, int32_t Page);
		void CreateItemMinimal(const class FScriptDelegate& Completed, int32_t ConsumerAppID, UWorksCore_EUWorksWorkshopFileType fileType);
		class UUWorksRequestCoreCreateItem* CreateItem();
		bool BInitWorkshopForGameServer(int32_t WorkshopDepotID, const class FString& Folder);
		bool AddRequiredTag(const struct FUWorksUGCQueryHandle& handle, const class FString& TagName);
		bool AddRequiredKeyValueTag(const struct FUWorksUGCQueryHandle& handle, const class FString& Key, const class FString& Value);
		void AddItemToFavoritesMinimal(const class FScriptDelegate& Completed, int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID);
		class UUWorksRequestCoreAddItemToFavorites* AddItemToFavorites();
		bool AddItemPreviewVideo(const struct FUWorksUGCUpdateHandle& handle, const class FString& VideoID);
		bool AddItemPreviewFile(const struct FUWorksUGCUpdateHandle& handle, const class FString& PreviewFile, UWorksCore_EUWorksItemPreviewType Type);
		bool AddItemKeyValueTag(const struct FUWorksUGCUpdateHandle& handle, const class FString& Key, const class FString& Value);
		bool AddExcludedTag(const struct FUWorksUGCQueryHandle& handle, const class FString& TagName);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreUser
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreUser : public UUWorksInterfaceCore
	{
	public:
		unsigned char                                              UnknownData_TPFZ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SteamServersConnected;                                   // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamServerConnectFailure;                               // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamServersDisconnected;                                // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ClientGameServerDeny;                                    // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             IPCFailure;                                              // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LicensesUpdated;                                         // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ValidateAuthTicketResponse;                              // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             MicroTxnAuthorizationResponse;                           // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GetAuthSessionTicketResponse;                            // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GameWebCallback;                                         // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		UWorksCore_EUWorksUserHasLicenseForAppResult UserHasLicenseForApp(const struct FUWorksSteamID& SteamID, int32_t AppID);
		void StopVoiceRecording();
		void StartVoiceRecording();
		void RequestStoreAuthURLMinimal(const class FScriptDelegate& Completed, const class FString& URL);
		class UUWorksRequestCoreRequestStoreAuthURL* RequestStoreAuthURL();
		void RequestEncryptedAppTicketMinimal(const class FScriptDelegate& Completed, TArray<unsigned char> Buffer);
		class UUWorksRequestCoreRequestEncryptedAppTicket* RequestEncryptedAppTicket();
		class UAudioComponent* GetVoiceChannel(int32_t Index);
		UWorksCore_EUWorksVoiceResult GetVoice(TArray<unsigned char>* Data);
		class UUWorksInterfaceCoreUser* STATIC_GetUser();
		struct FUWorksSteamID GetSteamID();
		int32_t GetPlayerSteamLevel();
		struct FUWorksSteamUser GetHSteamUser();
		int32_t GetGameBadgeLevel(int32_t Series, bool bFoil);
		bool GetEncryptedAppTicket(TArray<unsigned char>* Ticket);
		struct FUWorksTicketHandle GetAuthSessionTicket(TArray<unsigned char>* Ticket);
		void EndAuthSession(const struct FUWorksSteamID& SteamID);
		UWorksCore_EUWorksVoiceResult DecompressVoice(TArray<unsigned char> CompressedBuffer, TArray<unsigned char>* UncompressedBuffer);
		void CancelAuthTicket(const struct FUWorksTicketHandle& TicketHandle);
		bool BLoggedOn();
		bool BIsTwoFactorEnabled();
		bool BIsPhoneVerified();
		bool BIsPhoneRequiringVerification();
		bool BIsPhoneIdentifying();
		bool BIsBehindNAT();
		UWorksCore_EUWorksBeginAuthSessionResult BeginAuthSession(TArray<unsigned char> Ticket, const struct FUWorksSteamID& SteamID);
		void AdvertiseGame(const struct FUWorksSteamID& SteamIDGameServer, const class FString& ServerIP, int32_t ServerPort);
		class UAudioComponent* AddBufferToVoiceChannel(TArray<unsigned char> Buffer, int32_t Index);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreUserStats
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreUserStats : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             UserStatsReceived;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UserStatsStored;                                         // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UserAchievementStored;                                   // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UserStatsUnloaded;                                       // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UserAchievementIconFetched;                              // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void UploadLeaderboardScoreMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32_t score, TArray<int32_t> ScoreDetails);
		class UUWorksRequestCoreUploadLeaderboardScore* UploadLeaderboardScore();
		bool UpdateAvgRateStat(const class FString& Name, float CountThisSession, float SessionLength);
		bool StoreStats();
		bool SetStatAsInteger(const class FString& Name, int32_t Data);
		bool SetStatAsFloat(const class FString& Name, float Data);
		bool SetAchievement(const class FString& Name);
		bool ResetAllStats(bool bAchievementsToo);
		void RequestUserStatsMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamID& SteamID);
		class UUWorksRequestCoreRequestUserStats* RequestUserStats();
		void RequestGlobalStatsMinimal(const class FScriptDelegate& Completed, int32_t HistoryDays);
		class UUWorksRequestCoreRequestGlobalStats* RequestGlobalStats();
		void RequestGlobalAchievementPercentagesMinimal(const class FScriptDelegate& Completed);
		class UUWorksRequestCoreRequestGlobalAchievementPercentages* RequestGlobalAchievementPercentages();
		bool RequestCurrentStats();
		bool IndicateAchievementProgress(const class FString& Name, int32_t CurrentProgress, int32_t MaxProgress);
		class UUWorksInterfaceCoreUserStats* STATIC_GetUserStats();
		bool GetUserStatInteger(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, int32_t* Data);
		bool GetUserStatFloat(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, float* Data);
		bool GetUserAchievementAndUnlockTime(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, bool* bAchieved, int32_t* UnlockTime);
		bool GetUserAchievement(const struct FUWorksSteamID& SteamIDUser, const class FString& Name, bool* bAchieved);
		bool GetStatAsInteger(const class FString& Name, int32_t* Data);
		bool GetStatAsFloat(const class FString& Name, float* Data);
		void GetNumberOfCurrentPlayersMinimal(const class FScriptDelegate& Completed);
		class UUWorksRequestCoreGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayers();
		int32_t GetNumAchievements();
		int32_t GetNextMostAchievedAchievementInfo(int32_t IteratorPrevious, class FString* Name, int32_t NameBufferLength, float* Percent, bool* bAchieved);
		int32_t GetMostAchievedAchievementInfo(class FString* Name, int32_t NameBufferLength, float* Percent, bool* bAchieved);
		UWorksCore_EUWorksLeaderboardSortMethod GetLeaderboardSortMethod(const struct FUWorksSteamLeaderboard& SteamLeaderboard);
		class FString GetLeaderboardName(const struct FUWorksSteamLeaderboard& SteamLeaderboard);
		int32_t GetLeaderboardEntryCount(const struct FUWorksSteamLeaderboard& SteamLeaderboard);
		UWorksCore_EUWorksLeaderboardDisplayType GetLeaderboardDisplayType(const struct FUWorksSteamLeaderboard& SteamLeaderboard);
		int32_t GetGlobalStatHistoryFromIntegers(const class FString& StatName, TArray<class FString>* Data, int32_t HistoryDays);
		int32_t GetGlobalStatHistoryFromFloats(const class FString& StatName, TArray<class FString>* Data, int32_t HistoryDays);
		bool GetGlobalStatFromInteger(const class FString& StatName, class FString* Data);
		bool GetGlobalStatFromFloat(const class FString& StatName, class FString* Data);
		bool GetDownloadedLeaderboardEntry(const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32_t Index, struct FUWorksLeaderboardEntry* LeaderboardEntry, TArray<int32_t>* Details, int32_t DetailsMax);
		class FString GetAchievementName(int32_t Achievement);
		class UTexture2D* GetAchievementIcon(const class FString& Name);
		class FString GetAchievementDisplayAttribute(const class FString& Name, const class FString& Key);
		bool GetAchievementAndUnlockTime(const class FString& Name, bool* bAchieved, int32_t* UnlockTime);
		bool GetAchievementAchievedPercent(const class FString& Name, float* Percent);
		bool GetAchievement(const class FString& Name, bool* bAchieved);
		void FindOrCreateLeaderboardMinimal(const class FScriptDelegate& Completed, const class FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType);
		class UUWorksRequestCoreFindOrCreateLeaderboard* FindOrCreateLeaderboard();
		void FindLeaderboardMinimal(const class FScriptDelegate& Completed, const class FString& LeaderboardName);
		class UUWorksRequestCoreFindLeaderboard* FindLeaderboard();
		void DownloadLeaderboardEntriesMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32_t RangeStart, int32_t RangeEnd);
		void DownloadLeaderboardEntriesForUsersMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> Users);
		class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers* DownloadLeaderboardEntriesForUsers();
		class UUWorksRequestCoreDownloadLeaderboardEntries* DownloadLeaderboardEntries();
		bool ClearAchievement(const class FString& Name);
		void AttachLeaderboardUGCMinimal(const class FScriptDelegate& Completed, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle);
		class UUWorksRequestCoreAttachLeaderboardUGC* AttachLeaderboardUGC();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreUtils
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreUtils : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             IPCountry;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LowBatteryPower;                                         // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SteamShutdown;                                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GamepadTextInputDismissed;                               // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void StartVRDashboard();
		bool ShowGamepadTextInput(UWorksCore_EUWorksGamepadTextInputMode InputMode, UWorksCore_EUWorksGamepadTextInputLineMode LineInputMode, const class FString& Description, int32_t CharMax, const class FString& ExistingText);
		void SetOverlayNotificationPosition(UWorksCore_EUWorksNotificationPosition NotificationPosition);
		void SetOverlayNotificationInset(int32_t HorizontalInset, int32_t VerticalInset);
		bool IsSteamRunningInVR();
		bool IsSteamInBigPictureMode();
		bool IsOverlayEnabled();
		class UUWorksInterfaceCoreUtils* STATIC_GetUtils();
		class FString GetSteamUILanguage();
		int32_t GetServerRealTime();
		int32_t GetSecondsSinceComputerActive();
		int32_t GetSecondsSinceAppActive();
		class FString GetIPCountry();
		int32_t GetIPCCallCount();
		int32_t GetEnteredGamepadTextLength();
		bool GetEnteredGamepadTextInput(class FString* Text, int32_t TextMaxLength);
		unsigned char GetCurrentBatteryPower();
		UWorksCore_EUWorksUniverse GetConnectedUniverse();
		int32_t GetAppID();
		bool BOverlayNeedsPresent();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksInterfaceCoreVideo
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UUWorksInterfaceCoreVideo : public UUWorksInterfaceCore
	{
	public:
		class FScriptMulticastDelegate                             BroadcastUploadStart;                                    // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             BroadcastUploadStop;                                     // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GetVideoURLResult;                                       // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool IsBroadcasting(int32_t* NumViewers);
		void GetVideoURL(int32_t VideoAppID);
		class UUWorksInterfaceCoreVideo* STATIC_GetVideo();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreGetFileDetails
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreGetFileDetails : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_XZSG[0x38];                                  // 0x0038(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Filename);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, int32_t* FileSize, class FString* FileSHA, TArray<int32_t>* FileFlags);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreSetPersonaName
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreSetPersonaName : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_LIX4[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& Name);
		bool IsActive();
		void GetOutput(bool* bSuccess, bool* bLocalSuccess, UWorksCore_EUWorksResult* result);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreDownloadClanActivityCounts
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreDownloadClanActivityCounts : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_W0H3[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(TArray<struct FUWorksSteamID> SteamIDClans);
		bool IsActive();
		void GetOutput(bool* bSuccess);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreRequestClanOfficerList
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreRequestClanOfficerList : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_DZW0[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamID);
		bool IsActive();
		void GetOutput(struct FUWorksSteamID* SteamIDClan, int32_t* Officers, bool* bSuccess);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreJoinClanChatRoom
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreJoinClanChatRoom : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_NHXW[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamIDClan);
		bool IsActive();
		void GetOutput(struct FUWorksSteamID* SteamIDClanChat, UWorksCore_EUWorksChatRoomEnterResponse* ChatRoomEnterResponse);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreGetFollowerCount
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreGetFollowerCount : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_RT6A[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamID);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamID, int32_t* Count);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreIsFollowing
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreIsFollowing : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_FX6X[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamID);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamID, bool* bIsFollowing);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreEnumerateFollowingList
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreEnumerateFollowingList : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_1AXJ[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t StartIndex);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, TArray<struct FUWorksSteamID>* SteamIDs, int32_t* ResultsReturned, int32_t* TotalResultCount);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreAssociateWithClan
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreAssociateWithClan : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_3UWV[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0058(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamIDClan);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreComputeNewPlayerCompatibility
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreComputeNewPlayerCompatibility : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_F0YG[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamIDNewPlayer);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, int32_t* PlayersThatDontLikeCandidate, int32_t* PlayersThatCandidateDoesntLike, int32_t* ClanPlayersThatDontLikeCandidate, struct FUWorksSteamID* SteamIDCandidate);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreRequestUserStatsGS
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreRequestUserStatsGS : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_0PWX[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamIDUser);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamIDUser);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreStoreUserStats
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreStoreUserStats : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_5XM0[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamIDUser);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamIDUser);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreRequestEligiblePromoItemDefinitionsIDs : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_YY09[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamID);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamID, int32_t* NumEligiblePromoItemsDefinitionsIDs, bool* bCachedData);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreRequestLobbyList
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreRequestLobbyList : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_G7EQ[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		bool IsActive();
		void GetOutput(int32_t* LobbiesMatching);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreCreateLobby
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreCreateLobby : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_E92E[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(UWorksCore_EUWorksLobbyType LobbyType, int32_t MaxMembers);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamIDLobby);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreJoinLobby
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreJoinLobby : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_EGHG[0x28];                                  // 0x0038(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0070(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamIDLobby);
		bool IsActive();
		void GetOutput(struct FUWorksSteamID* SteamIDLobby, TArray<unsigned char>* ChatPermissions, bool* bLocked, UWorksCore_EUWorksChatRoomEnterResponse* ChatRoomEnterResponse);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreServerList
	 * Size -> 0x0118 (FullSize[0x0150] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreServerList : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_B1WM[0xD8];                                  // 0x0038(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRequestUpdated;                                        // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0130(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestUpdatedMinimal;                                 // 0x0140(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t AppID, UWorksCore_EUWorksServerQueryType queryType);
		bool IsActive();
		void GetOutput(struct FUWorksServerInfo* UpdatedServer, TArray<struct FUWorksServerInfo>* Servers);
		void Deactivate();
		void AddFilterSecure();
		void AddFilterOr(int32_t Value);
		void AddFilterNotFull();
		void AddFilterNor(int32_t Value);
		void AddFilterNoPlayers();
		void AddFilterNand(int32_t Value);
		void AddFilterMap(const class FString& Value);
		void AddFilterLinux();
		void AddFilterHasPlayers();
		void AddFilterGameTagsNor(const class FString& Value);
		void AddFilterGameTagsAnd(const class FString& Value);
		void AddFilterGameDataOr(const class FString& Value);
		void AddFilterGameDataNor(const class FString& Value);
		void AddFilterGameDataAnd(const class FString& Value);
		void AddFilterGameAddr(const class FString& Value);
		void AddFilterDedicated();
		void AddFilterAnd(int32_t Value);
		void AddFilterAddr(const class FString& Value);
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCorePing
	 * Size -> 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCorePing : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_8Z6G[0xA8];                                  // 0x0038(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x00F0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& IP, int32_t Port);
		bool IsActive();
		void GetOutput(struct FUWorksServerInfo* Server);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCorePlayers
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCorePlayers : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_LVTP[0x38];                                  // 0x0038(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRequestUpdated;                                        // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0090(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestUpdatedMinimal;                                 // 0x00A0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& IP, int32_t Port);
		bool IsActive();
		void GetOutput(struct FUWorksPlayerInfo* UpdatedPlayer, TArray<struct FUWorksPlayerInfo>* Players);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreRules
	 * Size -> 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreRules : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_P2O8[0x40];                                  // 0x0038(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRequestUpdated;                                        // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0098(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestUpdatedMinimal;                                 // 0x00A8(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& IP, int32_t Port);
		bool IsActive();
		void GetOutput(struct FUWorksRuleInfo* UpdatedRule, TArray<struct FUWorksRuleInfo>* Rules);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreFileWriteAsync
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreFileWriteAsync : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_FI9L[0x28];                                  // 0x0038(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0070(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& File, TArray<unsigned char> Buffer);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreFileReadAsync
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreFileReadAsync : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_XXQB[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0078(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& File, int32_t Offset, int32_t BytesToRead);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, int32_t* Offset, TArray<unsigned char>* Buffer);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreSendQueryUGCRequest
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreSendQueryUGCRequest : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_BEIK[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksUGCQueryHandle& UGCQueryHandle);
		bool IsActive();
		void GetOutput(struct FUWorksUGCQueryHandle* UGCQueryHandle, UWorksCore_EUWorksResult* result, int32_t* numResultsReturned, int32_t* TotalMatchingResults, bool* bCachedData);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreCreateItem
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreCreateItem : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_XG2M[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t ConsumerAppID, UWorksCore_EUWorksWorkshopFileType fileType);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksPublishedFileID* PublishedFileID, bool* bUserNeedsToAcceptWorkshopLegalAgreement);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreSubmitItemUpdate
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreSubmitItemUpdate : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_C4EI[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const class FString& ChangeNote);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, bool* bUserNeedsToAcceptWorkshopLegalAgreement);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreSetUserItemVote
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreSetUserItemVote : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_WQ6R[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp);
		bool IsActive();
		void GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* result, bool* bVoteUp);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreGetUserItemVote
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreGetUserItemVote : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_G8IU[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksPublishedFileID& PublishedFileID);
		bool IsActive();
		void GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* result, bool* bVotedUp, bool* bVotedDown, bool* bVoteSkipped);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreAddItemToFavorites
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreAddItemToFavorites : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_RKIZ[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID);
		bool IsActive();
		void GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* result, bool* bWasAddRequest);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreRemoveItemFromFavorites
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreRemoveItemFromFavorites : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_E5MD[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID);
		bool IsActive();
		void GetOutput(struct FUWorksPublishedFileID* PublishedFileID, UWorksCore_EUWorksResult* result, bool* bWasAddRequest);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreSubscribeItem
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreSubscribeItem : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_V8PW[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksPublishedFileID& PublishedFileID);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksPublishedFileID* PublishedFileID);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreUnsubscribeItem
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreUnsubscribeItem : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_ZBUX[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksPublishedFileID& PublishedFileID);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksPublishedFileID* PublishedFileID);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreStartPlaytimeTracking
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreStartPlaytimeTracking : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_FTXF[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(TArray<struct FUWorksPublishedFileID> PublishedFileID);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreStopPlaytimeTracking
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreStopPlaytimeTracking : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_LD4H[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(TArray<struct FUWorksPublishedFileID> PublishedFileIDs);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreStopPlaytimeTrackingForAllItems
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreStopPlaytimeTrackingForAllItems : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_H8WF[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreRequestEncryptedAppTicket
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreRequestEncryptedAppTicket : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_EDXM[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(TArray<unsigned char> Buffer);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreRequestStoreAuthURL
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreRequestStoreAuthURL : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_EERR[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& URL);
		bool IsActive();
		void GetOutput(class FString* URL);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreRequestUserStats
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreRequestUserStats : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_9UH5[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamID& SteamID);
		bool IsActive();
		void GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* result, struct FUWorksSteamID* SteamID);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreFindOrCreateLeaderboard
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreFindOrCreateLeaderboard : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_AM5I[0x28];                                  // 0x0038(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0070(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType);
		bool IsActive();
		void GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, bool* bLeaderboardFound);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreFindLeaderboard
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreFindLeaderboard : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_RTWW[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const class FString& LeaderboardName);
		bool IsActive();
		void GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, bool* bLeaderboardFound);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreDownloadLeaderboardEntries
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreDownloadLeaderboardEntries : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_K2IF[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0078(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32_t RangeStart, int32_t RangeEnd);
		bool IsActive();
		void GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, struct FUWorksSteamLeaderboardEntries* SteamLeaderboardEntries, int32_t* EntryCount);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreDownloadLeaderboardEntriesForUsers
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreDownloadLeaderboardEntriesForUsers : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_QZVE[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0078(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> Users);
		bool IsActive();
		void GetOutput(struct FUWorksSteamLeaderboard* SteamLeaderboard, struct FUWorksSteamLeaderboardEntries* SteamLeaderboardEntries, int32_t* EntryCount);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreUploadLeaderboardScore
	 * Size -> 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreUploadLeaderboardScore : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_9CJR[0x40];                                  // 0x0038(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0088(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32_t score, TArray<int32_t> ScoreDetails);
		bool IsActive();
		void GetOutput(bool* bSuccess, struct FUWorksSteamLeaderboard* SteamLeaderboard, int32_t* score, bool* bScoreChanged, int32_t* GlobalRankNew, int32_t* GlobalRankPrevious);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreAttachLeaderboardUGC
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreAttachLeaderboardUGC : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_S3RM[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle);
		bool IsActive();
		void GetOutput(UWorksCore_EUWorksResult* result, struct FUWorksSteamLeaderboard* SteamLeaderboard);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreGetNumberOfCurrentPlayers
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreGetNumberOfCurrentPlayers : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_7ZW7[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		bool IsActive();
		void GetOutput(bool* bSuccess, int32_t* Players);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreRequestGlobalAchievementPercentages
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreRequestGlobalAchievementPercentages : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_P9EG[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0058(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		bool IsActive();
		void GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* result);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.UWorksRequestCoreRequestGlobalStats
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UUWorksRequestCoreRequestGlobalStats : public UUWorksRequestCore
	{
	public:
		unsigned char                                              UnknownData_OP3J[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestCompleted;                                      // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnRequestCompletedMinimal;                               // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetInput(int32_t HistoryDays);
		bool IsActive();
		void GetOutput(struct FUWorksGameID* GameID, UWorksCore_EUWorksResult* result);
		void Deactivate();
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreGetFileDetailsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreGetFileDetailsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, int32_t FileSize, const class FString& FileSHA, TArray<int32_t> FileFlags);
		class UCoreGetFileDetailsNode* STATIC_GetFileDetailsNode(const class FString& Filename);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreSetPersonaNameNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreSetPersonaNameNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreSetPersonaNameNode* STATIC_SetPersonaNameNode(const class FString& Name);
		void OnRequestCompleted(bool bSuccessful, bool bSuccess, bool bLocalSuccess, UWorksCore_EUWorksResult result);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreDownloadClanActivityCountsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreDownloadClanActivityCountsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, bool bSuccess);
		class UCoreDownloadClanActivityCountsNode* STATIC_DownloadClanActivityCountsNode(TArray<struct FUWorksSteamID> SteamIDClans);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreRequestClanOfficerListNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreRequestClanOfficerListNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreRequestClanOfficerListNode* STATIC_RequestClanOfficerListNode(const struct FUWorksSteamID& SteamID);
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDClan, int32_t Officers, bool bSuccess);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreJoinClanChatRoomNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreJoinClanChatRoomNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDClanChat, UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
		class UCoreJoinClanChatRoomNode* STATIC_JoinClanChatRoomNode(const struct FUWorksSteamID& SteamIDClan);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreGetFollowerCountNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreGetFollowerCountNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamID, int32_t Count);
		class UCoreGetFollowerCountNode* STATIC_GetFollowerCountNode(const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreIsFollowingNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreIsFollowingNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamID, bool bIsFollowing);
		class UCoreIsFollowingNode* STATIC_IsFollowingNode(const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreEnumerateFollowingListNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreEnumerateFollowingListNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, TArray<struct FUWorksSteamID> SteamIDs, int32_t ResultsReturned, int32_t TotalResultCount);
		class UCoreEnumerateFollowingListNode* STATIC_EnumerateFollowingListNode(int32_t StartIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreAssociateWithClanNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreAssociateWithClanNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result);
		class UCoreAssociateWithClanNode* STATIC_AssociateWithClanNode(const struct FUWorksSteamID& SteamIDClan);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreComputeNewPlayerCompatibilityNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreComputeNewPlayerCompatibilityNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, int32_t PlayersThatDontLikeCandidate, int32_t PlayersThatCandidateDoesntLike, int32_t ClanPlayersThatDontLikeCandidate, const struct FUWorksSteamID& SteamIDCandidate);
		class UCoreComputeNewPlayerCompatibilityNode* STATIC_ComputeNewPlayerCompatibilityNode(const struct FUWorksSteamID& SteamIDNewPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreRequestUserStatsGSNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreRequestUserStatsGSNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreRequestUserStatsGSNode* STATIC_RequestUserStatsGSNode(const struct FUWorksSteamID& SteamIDUser);
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamIDUser);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreStoreUserStatsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreStoreUserStatsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreStoreUserStatsNode* STATIC_StoreUserStatsNode(const struct FUWorksSteamID& SteamIDUser);
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamIDUser);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreRequestEligiblePromoItemDefinitionsIDsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreRequestEligiblePromoItemDefinitionsIDsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreRequestEligiblePromoItemDefinitionsIDsNode* STATIC_RequestEligiblePromoItemDefinitionsIDsNode(const struct FUWorksSteamID& SteamID);
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamID, int32_t NumEligiblePromoItemsDefinitionsIDs, bool bCachedData);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreRequestLobbyListNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreRequestLobbyListNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreRequestLobbyListNode* STATIC_RequestLobbyListNode();
		void OnRequestCompleted(bool bSuccessful, int32_t LobbiesMatching);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreCreateLobbyNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreCreateLobbyNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamIDLobby);
		class UCoreCreateLobbyNode* STATIC_CreateLobbyNode(UWorksCore_EUWorksLobbyType LobbyType, int32_t MaxMembers);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreJoinLobbyNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreJoinLobbyNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamID& SteamIDLobby, TArray<unsigned char> ChatPermissions, bool bLocked, UWorksCore_EUWorksChatRoomEnterResponse ChatRoomEnterResponse);
		class UCoreJoinLobbyNode* STATIC_JoinLobbyNode(const struct FUWorksSteamID& SteamIDLobby);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreServerListNode
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UCoreServerListNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Updated;                                                 // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TL03[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCoreServerListNode* STATIC_ServerListNode(int32_t AppID, UWorksCore_EUWorksServerQueryType queryType, int32_t MaxUpdates);
		void OnRequestUpdated(bool bSuccessful, const struct FUWorksServerInfo& Server);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CorePingNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCorePingNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCorePingNode* STATIC_PingNode(const class FString& IP, int32_t Port);
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksServerInfo& Server);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CorePlayersNode
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UCorePlayersNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Updated;                                                 // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1UT[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCorePlayersNode* STATIC_PlayersNode(const class FString& IP, int32_t Port, int32_t MaxUpdates);
		void OnRequestUpdated(bool bSuccessful, const struct FUWorksPlayerInfo& Player);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreRulesNode
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UCoreRulesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Updated;                                                 // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJ6V[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCoreRulesNode* STATIC_RulesNode(const class FString& IP, int32_t Port, int32_t MaxUpdates);
		void OnRequestUpdated(bool bSuccessful, const struct FUWorksRuleInfo& Rule);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreFileWriteAsyncNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreFileWriteAsyncNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result);
		class UCoreFileWriteAsyncNode* STATIC_FileWriteAsyncNode(const class FString& File, TArray<unsigned char> Buffer);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreFileReadAsyncNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreFileReadAsyncNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, int32_t Offset, TArray<unsigned char> Buffer);
		class UCoreFileReadAsyncNode* STATIC_FileReadAsyncNode(const class FString& File, int32_t Offset, int32_t BytesToRead);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreSendQueryUGCRequestNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreSendQueryUGCRequestNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreSendQueryUGCRequestNode* STATIC_SendQueryUGCRequestNode(const struct FUWorksUGCQueryHandle& UGCQueryHandle);
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksUGCQueryHandle& UGCQueryHandle, UWorksCore_EUWorksResult result, int32_t numResultsReturned, int32_t TotalMatchingResults, bool bCachedData);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreCreateItemNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreCreateItemNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksPublishedFileID& PublishedFileID, bool bUserNeedsToAcceptWorkshopLegalAgreement);
		class UCoreCreateItemNode* STATIC_CreateItemNode(int32_t ConsumerAppID, UWorksCore_EUWorksWorkshopFileType fileType);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreSubmitItemUpdateNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreSubmitItemUpdateNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreSubmitItemUpdateNode* STATIC_SubmitItemUpdateNode(const struct FUWorksUGCUpdateHandle& UGCUpdateHandle, const class FString& ChangeNote);
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, bool bUserNeedsToAcceptWorkshopLegalAgreement);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreSetUserItemVoteNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreSetUserItemVoteNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreSetUserItemVoteNode* STATIC_SetUserItemVoteNode(const struct FUWorksPublishedFileID& PublishedFileID, bool bVoteUp);
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult result, bool bVoteUp);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreGetUserItemVoteNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreGetUserItemVoteNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult result, bool bVotedUp, bool bVotedDown, bool bVoteSkipped);
		class UCoreGetUserItemVoteNode* STATIC_GetUserItemVoteNode(const struct FUWorksPublishedFileID& PublishedFileID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreAddItemToFavoritesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreAddItemToFavoritesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult result, bool bWasAddRequest);
		class UCoreAddItemToFavoritesNode* STATIC_AddItemToFavoritesNode(int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreRemoveItemFromFavoritesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreRemoveItemFromFavoritesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreRemoveItemFromFavoritesNode* STATIC_RemoveItemFromFavoritesNode(int32_t AppID, const struct FUWorksPublishedFileID& PublishedFileID);
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksPublishedFileID& PublishedFileID, UWorksCore_EUWorksResult result, bool bWasAddRequest);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreSubscribeItemNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreSubscribeItemNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreSubscribeItemNode* STATIC_SubscribeItemNode(const struct FUWorksPublishedFileID& PublishedFileID);
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksPublishedFileID& PublishedFileID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreUnsubscribeItemNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreUnsubscribeItemNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreUnsubscribeItemNode* STATIC_UnsubscribeItemNode(const struct FUWorksPublishedFileID& PublishedFileID);
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksPublishedFileID& PublishedFileID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreStartPlaytimeTrackingNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreStartPlaytimeTrackingNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreStartPlaytimeTrackingNode* STATIC_StartPlaytimeTrackingNode(TArray<struct FUWorksPublishedFileID> PublishedFileID);
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreStopPlaytimeTrackingNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreStopPlaytimeTrackingNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreStopPlaytimeTrackingNode* STATIC_StopPlaytimeTrackingNode(TArray<struct FUWorksPublishedFileID> PublishedFileID);
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreStopPlaytimeTrackingForAllItemsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreStopPlaytimeTrackingForAllItemsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreStopPlaytimeTrackingForAllItemsNode* STATIC_StopPlaytimeTrackingForAllItemsNode();
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreRequestEncryptedAppTicketNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreRequestEncryptedAppTicketNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreRequestEncryptedAppTicketNode* STATIC_RequestEncryptedAppTicketNode(TArray<unsigned char> Buffer);
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreRequestStoreAuthURLNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreRequestStoreAuthURLNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreRequestStoreAuthURLNode* STATIC_RequestStoreAuthURLNode(const class FString& URL);
		void OnRequestCompleted(bool bSuccessful, const class FString& URL);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreRequestUserStatsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreRequestUserStatsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreRequestUserStatsNode* STATIC_RequestUserStatsNode(const struct FUWorksSteamID& SteamID);
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult result, const struct FUWorksSteamID& SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreFindOrCreateLeaderboardNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreFindOrCreateLeaderboardNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, bool bLeaderboardFound);
		class UCoreFindOrCreateLeaderboardNode* STATIC_FindOrCreateLeaderboardNode(const class FString& LeaderboardName, UWorksCore_EUWorksLeaderboardSortMethod LeaderboardSortMethod, UWorksCore_EUWorksLeaderboardDisplayType LeaderboardDisplayType);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreFindLeaderboardNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreFindLeaderboardNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, bool bLeaderboardFound);
		class UCoreFindLeaderboardNode* STATIC_FindLeaderboardNode(const class FString& LeaderboardName);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreDownloadLeaderboardEntriesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreDownloadLeaderboardEntriesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32_t EntryCount);
		class UCoreDownloadLeaderboardEntriesNode* STATIC_DownloadLeaderboardEntriesNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardDataRequest LeaderboardDataRequest, int32_t RangeStart, int32_t RangeEnd);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreDownloadLeaderboardEntriesForUsersNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreDownloadLeaderboardEntriesForUsersNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksSteamLeaderboardEntries& SteamLeaderboardEntries, int32_t EntryCount);
		class UCoreDownloadLeaderboardEntriesForUsersNode* STATIC_DownloadLeaderboardEntriesForUsersNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, TArray<struct FUWorksSteamID> Users);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreUploadLeaderboardScoreNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreUploadLeaderboardScoreNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreUploadLeaderboardScoreNode* STATIC_UploadLeaderboardScoreNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, UWorksCore_EUWorksLeaderboardUploadScoreMethod LeaderboardUploadScoreMethod, int32_t score, TArray<int32_t> ScoreDetails);
		void OnRequestCompleted(bool bSuccessful, bool bSuccess, const struct FUWorksSteamLeaderboard& SteamLeaderboard, int32_t score, bool bScoreChanged, int32_t GlobalRankNew, int32_t GlobalRankPrevious);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreAttachLeaderboardUGCNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreAttachLeaderboardUGCNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, UWorksCore_EUWorksResult result, const struct FUWorksSteamLeaderboard& SteamLeaderboard);
		class UCoreAttachLeaderboardUGCNode* STATIC_AttachLeaderboardUGCNode(const struct FUWorksSteamLeaderboard& SteamLeaderboard, const struct FUWorksUGCHandle& UGCHandle);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreGetNumberOfCurrentPlayersNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreGetNumberOfCurrentPlayersNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnRequestCompleted(bool bSuccessful, bool bSuccess, int32_t Players);
		class UCoreGetNumberOfCurrentPlayersNode* STATIC_GetNumberOfCurrentPlayersNode();
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreRequestGlobalAchievementPercentagesNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreRequestGlobalAchievementPercentagesNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreRequestGlobalAchievementPercentagesNode* STATIC_RequestGlobalAchievementPercentagesNode();
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult result);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksCore.CoreRequestGlobalStatsNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UCoreRequestGlobalStatsNode : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UCoreRequestGlobalStatsNode* STATIC_RequestGlobalStatsNode(int32_t HistoryDays);
		void OnRequestCompleted(bool bSuccessful, const struct FUWorksGameID& GameID, UWorksCore_EUWorksResult result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
