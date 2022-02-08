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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum UWorksWeb.EUWorksUserSession
	 */
	enum class UWorksWeb_EUWorksUserSession : uint8_t
	{
		EUWorksUserSession__None                   = 0,
		EUWorksUserSession__Client                 = 1,
		EUWorksUserSession__Web                    = 2,
		EUWorksUserSession__EUWorksUserSession_MAX = 3
	};

	/**
	 * Enum UWorksWeb.EUWorksReportType
	 */
	enum class UWorksWeb_EUWorksReportType : uint8_t
	{
		EUWorksReportType__None                  = 0,
		EUWorksReportType__GameSales             = 1,
		EUWorksReportType__SteamStore            = 2,
		EUWorksReportType__Settlement            = 3,
		EUWorksReportType__EUWorksReportType_MAX = 4
	};

	/**
	 * Enum UWorksWeb.FUWorksHTTPResponse
	 */
	enum class UWorksWeb_EFUWorksHTTPResponse : uint8_t
	{
		FUWorksHTTPResponse__Unknown                 = 0,
		FUWorksHTTPResponse__Continue                = 1,
		FUWorksHTTPResponse__SwitchProtocol          = 2,
		FUWorksHTTPResponse__Ok                      = 3,
		FUWorksHTTPResponse__Created                 = 4,
		FUWorksHTTPResponse__Accepted                = 5,
		FUWorksHTTPResponse__Partial                 = 6,
		FUWorksHTTPResponse__NoContent               = 7,
		FUWorksHTTPResponse__ResetContent            = 8,
		FUWorksHTTPResponse__PartialContent          = 9,
		FUWorksHTTPResponse__Ambiguous               = 10,
		FUWorksHTTPResponse__Moved                   = 11,
		FUWorksHTTPResponse__Redirect                = 12,
		FUWorksHTTPResponse__RedirectMethod          = 13,
		FUWorksHTTPResponse__NotModified             = 14,
		FUWorksHTTPResponse__UseProxy                = 15,
		FUWorksHTTPResponse__RedirectKeepVerb        = 16,
		FUWorksHTTPResponse__BadRequest              = 17,
		FUWorksHTTPResponse__Denied                  = 18,
		FUWorksHTTPResponse__PaymentReq              = 19,
		FUWorksHTTPResponse__Forbidden               = 20,
		FUWorksHTTPResponse__NotFound                = 21,
		FUWorksHTTPResponse__BadMethod               = 22,
		FUWorksHTTPResponse__NoneAcceptable          = 23,
		FUWorksHTTPResponse__ProxyAuthReq            = 24,
		FUWorksHTTPResponse__RequestTimeout          = 25,
		FUWorksHTTPResponse__Conflict                = 26,
		FUWorksHTTPResponse__Gone                    = 27,
		FUWorksHTTPResponse__LengthRequired          = 28,
		FUWorksHTTPResponse__PrecondFailed           = 29,
		FUWorksHTTPResponse__RequestTooLarge         = 30,
		FUWorksHTTPResponse__UriTooLong              = 31,
		FUWorksHTTPResponse__UnsupportedMedia        = 32,
		FUWorksHTTPResponse__TooManyRequests         = 33,
		FUWorksHTTPResponse__RetryWith               = 34,
		FUWorksHTTPResponse__ServerError             = 35,
		FUWorksHTTPResponse__NotSupported            = 36,
		FUWorksHTTPResponse__BadGateway              = 37,
		FUWorksHTTPResponse__ServiceUnavail          = 38,
		FUWorksHTTPResponse__GatewayTimeout          = 39,
		FUWorksHTTPResponse__VersionNotSup           = 40,
		FUWorksHTTPResponse__FUWorksHTTPResponse_MAX = 41
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UWorksWeb.UWorksTitle
	 * Size -> 0x0001
	 */
	struct FUWorksTitle
	{
	public:
		unsigned char                                              UnknownData_DOBN[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksUsers
	 * Size -> 0x0001
	 */
	struct FUWorksUsers
	{
	public:
		unsigned char                                              UnknownData_RTXU[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksSessions
	 * Size -> 0x0001
	 */
	struct FUWorksSessions
	{
	public:
		unsigned char                                              UnknownData_PGNY[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksPlaySessions
	 * Size -> 0x0001
	 */
	struct FUWorksPlaySessions
	{
	public:
		unsigned char                                              UnknownData_7RCK[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksRequiredKVTags
	 * Size -> 0x0001
	 */
	struct FUWorksRequiredKVTags
	{
	public:
		unsigned char                                              UnknownData_HR1O[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAssociatedWorkshopFiles
	 * Size -> 0x0001
	 */
	struct FUWorksAssociatedWorkshopFiles
	{
	public:
		unsigned char                                              UnknownData_V5PG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksPartnerAccounts
	 * Size -> 0x0001
	 */
	struct FUWorksPartnerAccounts
	{
	public:
		unsigned char                                              UnknownData_96YL[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksLanguages
	 * Size -> 0x0001
	 */
	struct FUWorksLanguages
	{
	public:
		unsigned char                                              UnknownData_M734[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebApps
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebApps
	{
	public:
		unsigned char                                              UnknownData_9VRC[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebBroadcast
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebBroadcast
	{
	public:
		unsigned char                                              UnknownData_R7N5[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebCheatReporting
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebCheatReporting
	{
	public:
		unsigned char                                              UnknownData_EHC6[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebCommunity
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebCommunity
	{
	public:
		unsigned char                                              UnknownData_059G[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebEcon
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebEcon
	{
	public:
		unsigned char                                              UnknownData_L72J[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebEconMarket
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebEconMarket
	{
	public:
		unsigned char                                              UnknownData_NJGA[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebEconomy
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebEconomy
	{
	public:
		unsigned char                                              UnknownData_KRQQ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebGameInventory
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebGameInventory
	{
	public:
		unsigned char                                              UnknownData_7BNZ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebGameNotifications
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebGameNotifications
	{
	public:
		unsigned char                                              UnknownData_6I8G[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebGameServers
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebGameServers
	{
	public:
		unsigned char                                              UnknownData_96QV[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebGameServerStats
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebGameServerStats
	{
	public:
		unsigned char                                              UnknownData_J3MC[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebInventory
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebInventory
	{
	public:
		unsigned char                                              UnknownData_1PCB[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebLeaderboards
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebLeaderboards
	{
	public:
		unsigned char                                              UnknownData_97AB[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebMicroTxn
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebMicroTxn
	{
	public:
		unsigned char                                              UnknownData_DJ9B[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebNews
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebNews
	{
	public:
		unsigned char                                              UnknownData_EC07[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebPlayer
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebPlayer
	{
	public:
		unsigned char                                              UnknownData_0SWJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebPublishedFile
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebPublishedFile
	{
	public:
		unsigned char                                              UnknownData_79YB[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebPublishedItemSearch
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebPublishedItemSearch
	{
	public:
		unsigned char                                              UnknownData_1DQW[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebPublishedItemVoting
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebPublishedItemVoting
	{
	public:
		unsigned char                                              UnknownData_I5SX[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebRemoteStorage
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebRemoteStorage
	{
	public:
		unsigned char                                              UnknownData_7IQN[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebUser
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebUser
	{
	public:
		unsigned char                                              UnknownData_RGS1[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebUserAuth
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebUserAuth
	{
	public:
		unsigned char                                              UnknownData_VKQE[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebUserStats
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebUserStats
	{
	public:
		unsigned char                                              UnknownData_2JWL[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorksWeb.UWorksAnnexWebWorkshop
	 * Size -> 0x0001
	 */
	struct FUWorksAnnexWebWorkshop
	{
	public:
		unsigned char                                              UnknownData_10ND[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
