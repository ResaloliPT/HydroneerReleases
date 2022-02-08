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
	 * Class UWorksUtilities.UWorksLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksLibrary : public UUWorks
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksUtilities.UWorksLibraryConversions
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksLibraryConversions : public UUWorksLibrary
	{
	public:
		class FString STATIC_GetCurrentProcessId();
		TArray<unsigned char> STATIC_ConvertStringToBytes(const class FString& Data);
		class FString STATIC_ConvertBytesToString(TArray<unsigned char> Data);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksUtilities.UWorksLibraryGameID
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksLibraryGameID : public UUWorksLibrary
	{
	public:
		void STATIC_SetIdentifier(struct FUWorksGameID* GameID, const class FString& Identifier);
		void STATIC_Reset(struct FUWorksGameID* GameID);
		bool STATIC_IsValid(const struct FUWorksGameID& GameID);
		bool STATIC_IsSteamApp(const struct FUWorksGameID& GameID);
		bool STATIC_IsShortcut(const struct FUWorksGameID& GameID);
		bool STATIC_IsP2PFile(const struct FUWorksGameID& GameID);
		bool STATIC_IsMod(const struct FUWorksGameID& GameID);
		bool STATIC_IsIdenticalWith(const struct FUWorksGameID& A, const struct FUWorksGameID& B);
		int32_t STATIC_GetModID(const struct FUWorksGameID& GameID);
		class FString STATIC_GetIdentifier(const struct FUWorksGameID& GameID);
		int32_t STATIC_GetAppID(const struct FUWorksGameID& GameID);
		struct FUWorksGameID STATIC_ConstructFromParametersC(int32_t AppID, int32_t ModID);
		struct FUWorksGameID STATIC_ConstructFromParametersB(int32_t AppID);
		struct FUWorksGameID STATIC_ConstructFromParametersA(const class FString& Identifier);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksUtilities.UWorksLibraryLex
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksLibraryLex : public UUWorksLibrary
	{
	public:
		struct FUWorksUGCUpdateHandle STATIC_WriteUGCUpdateHandle(const class FString& Value);
		struct FUWorksUGCQueryHandle STATIC_WriteUGCQueryHandle(const class FString& Value);
		struct FUWorksUGCHandle STATIC_WriteUGCHandle(const class FString& Value);
		struct FUWorksUGCFileWriteStreamHandle STATIC_WriteUGCFileWriteStreamHandle(const class FString& Value);
		struct FUWorksTicketHandle STATIC_WriteTicketHandle(const class FString& Value);
		struct FUWorksSteamUser STATIC_WriteSteamUser(const class FString& Value);
		struct FUWorksSteamPipe STATIC_WriteSteamPipe(const class FString& Value);
		struct FUWorksSteamLeaderboardEntries STATIC_WriteSteamLeaderboardEntries(const class FString& Value);
		struct FUWorksSteamLeaderboard STATIC_WriteSteamLeaderboard(const class FString& Value);
		struct FUWorksSteamInventoryResult STATIC_WriteSteamInventoryResult(const class FString& Value);
		struct FUWorksScreenshotHandle STATIC_WriteScreenshotHandle(const class FString& Value);
		struct FUWorksFriendsGroupID STATIC_WriteFriendsGroupID(const class FString& Value);
		struct FUWorksControllerHandle STATIC_WriteControllerHandle(const class FString& Value);
		struct FUWorksControllerDigitalActionHandle STATIC_WriteControllerDigitalActionHandle(const class FString& Value);
		struct FUWorksControllerAnalogActionHandle STATIC_WriteControllerAnalogActionHandle(const class FString& Value);
		struct FUWorksControllerActionSetHandle STATIC_WriteControllerActionSetHandle(const class FString& Value);
		class FString STATIC_ReadUGCUpdateHandle(const struct FUWorksUGCUpdateHandle& Value);
		class FString STATIC_ReadUGCQueryHandle(const struct FUWorksUGCQueryHandle& Value);
		class FString STATIC_ReadUGCHandle(const struct FUWorksUGCHandle& Value);
		class FString STATIC_ReadUGCFileWriteStreamHandle(const struct FUWorksUGCFileWriteStreamHandle& Value);
		class FString STATIC_ReadTicketHandle(const struct FUWorksTicketHandle& Value);
		class FString STATIC_ReadSteamUser(const struct FUWorksSteamUser& Value);
		class FString STATIC_ReadSteamPipe(const struct FUWorksSteamPipe& Value);
		class FString STATIC_ReadSteamLeaderboardEntries(const struct FUWorksSteamLeaderboardEntries& Value);
		class FString STATIC_ReadSteamLeaderboard(const struct FUWorksSteamLeaderboard& Value);
		class FString STATIC_ReadSteamInventoryResult(const struct FUWorksSteamInventoryResult& Value);
		class FString STATIC_ReadScreenshotHandle(const struct FUWorksScreenshotHandle& Value);
		class FString STATIC_ReadFriendsGroupID(const struct FUWorksFriendsGroupID& Value);
		class FString STATIC_ReadControllerHandle(const struct FUWorksControllerHandle& Value);
		class FString STATIC_ReadControllerDigitalActionHandle(const struct FUWorksControllerDigitalActionHandle& Value);
		class FString STATIC_ReadControllerAnalogActionHandle(const struct FUWorksControllerAnalogActionHandle& Value);
		class FString STATIC_ReadControllerActionSetHandle(const struct FUWorksControllerActionSetHandle& Value);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksUtilities.UWorksLibrarySteamID
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksLibrarySteamID : public UUWorksLibrary
	{
	public:
		void STATIC_SetUniverse(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe);
		void STATIC_SetParametersC(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const class FString& AccountID, const class FString& AccountInstance);
		void STATIC_SetParametersB(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const class FString& AccountID);
		void STATIC_SetParametersA(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const class FString& Identifier);
		void STATIC_SetIdentifier(struct FUWorksSteamID* SteamID, const class FString& Identifier);
		void STATIC_SetAccountInstance(struct FUWorksSteamID* SteamID, const class FString& AccountInstance);
		void STATIC_SetAccountID(struct FUWorksSteamID* SteamID, const class FString& AccountID);
		bool STATIC_IsValid(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsPersistentGameServerAccount(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsLobby(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsIndividualAccount(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsIdenticalWith(const struct FUWorksSteamID& A, const struct FUWorksSteamID& B);
		bool STATIC_IsGameServerAccount(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsContentServerAccount(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsConsoleUserAccount(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsClanAccount(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsChatAccount(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsBlankAnonAccount(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsAnonUserAccount(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsAnonGameServerAccount(const struct FUWorksSteamID& SteamID);
		bool STATIC_IsAnonAccount(const struct FUWorksSteamID& SteamID);
		bool STATIC_HasNoIndividualInstance(const struct FUWorksSteamID& SteamID);
		UWorksCore_EUWorksUniverse STATIC_GetUniverse(const struct FUWorksSteamID& SteamID);
		class FString STATIC_GetStaticAccountKey(const struct FUWorksSteamID& SteamID);
		class FString STATIC_GetIdentifier(const struct FUWorksSteamID& SteamID);
		UWorksCore_EUWorksAccountType STATIC_GetAccountType(const struct FUWorksSteamID& SteamID);
		class FString STATIC_GetAccountInstance(const struct FUWorksSteamID& SteamID);
		class FString STATIC_GetAccountID(const struct FUWorksSteamID& SteamID);
		void STATIC_CreateBlankAnonUserLogon(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe);
		void STATIC_CreateBlankAnonLogon(struct FUWorksSteamID* SteamID, UWorksCore_EUWorksUniverse Universe);
		struct FUWorksSteamID STATIC_ConstructFromParametersC(UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const class FString& AccountID, const class FString& AccountInstance);
		struct FUWorksSteamID STATIC_ConstructFromParametersB(UWorksCore_EUWorksUniverse Universe, UWorksCore_EUWorksAccountType AccountType, const class FString& AccountID);
		struct FUWorksSteamID STATIC_ConstructFromParametersA(const class FString& Identifier);
		void STATIC_ClearIndividualInstance(struct FUWorksSteamID* SteamID);
		void STATIC_Clear(struct FUWorksSteamID* SteamID);
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksUtilities.UWorksLibraryTickets
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksLibraryTickets : public UUWorksLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksUtilities.UWorksManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUWorksManager : public UUWorks
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UWorksUtilities.UWorksManagerNetwork
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UUWorksManagerNetwork : public UUWorksManager
	{
	public:
		unsigned char                                              UnknownData_47RZ[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             RefreshComplete;                                         // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Refresh();
		class FString GetNetDriverClassName();
		class UUWorksManagerNetwork* STATIC_GetManagerNetwork();
		void CreateSessionUWorks(const class FName& SessionName, int32_t NumPublicConnections, bool bIsLANMatch);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
