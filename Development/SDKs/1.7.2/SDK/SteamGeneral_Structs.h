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
	 * Enum SteamGeneral.EResultBP
	 */
	enum class SteamGeneral_EResultBP : uint8_t
	{
		EResultBP__R_OK                                      = 0,
		EResultBP__R_Fail                                    = 1,
		EResultBP__R_NoConnection                            = 2,
		EResultBP__R_InvalidPassword                         = 3,
		EResultBP__R_LoggedInElsewhere                       = 4,
		EResultBP__R_InvalidProtocolVer                      = 5,
		EResultBP__R_InvalidParam                            = 6,
		EResultBP__R_FileNotFound                            = 7,
		EResultBP__R_Busy                                    = 8,
		EResultBP__R_InvalidState                            = 9,
		EResultBP__R_InvalidName                             = 10,
		EResultBP__R_InvalidEmail                            = 11,
		EResultBP__R_DuplicateName                           = 12,
		EResultBP__R_AccessDenied                            = 13,
		EResultBP__R_Timeout                                 = 14,
		EResultBP__R_Banned                                  = 15,
		EResultBP__R_AccountNotFound                         = 16,
		EResultBP__R_InvalidSteamID                          = 17,
		EResultBP__R_ServiceUnavailable                      = 18,
		EResultBP__R_NotLoggedOn                             = 19,
		EResultBP__R_Pending                                 = 20,
		EResultBP__R_EncryptionFailure                       = 21,
		EResultBP__R_InsufficientPrivilege                   = 22,
		EResultBP__R_LimitExceeded                           = 23,
		EResultBP__R_Revoked                                 = 24,
		EResultBP__R_Expired                                 = 25,
		EResultBP__R_AlreadyRedeemed                         = 26,
		EResultBP__R_DuplicateRequest                        = 27,
		EResultBP__R_AlreadyOwned                            = 28,
		EResultBP__R_IPNotFound                              = 29,
		EResultBP__R_PersistFailed                           = 30,
		EResultBP__R_LockingFailed                           = 31,
		EResultBP__R_LogonSessionReplaced                    = 32,
		EResultBP__R_ConnectFailed                           = 33,
		EResultBP__R_HandshakeFailed                         = 34,
		EResultBP__R_IOFailure                               = 35,
		EResultBP__R_RemoteDisconnect                        = 36,
		EResultBP__R_ShoppingCartNotFound                    = 37,
		EResultBP__R_Blocked                                 = 38,
		EResultBP__R_Ignored                                 = 39,
		EResultBP__R_NoMatch                                 = 40,
		EResultBP__R_AccountDisabled                         = 41,
		EResultBP__R_ServiceReadOnly                         = 42,
		EResultBP__R_AccountNotFeatured                      = 43,
		EResultBP__R_AdministratorOK                         = 44,
		EResultBP__R_ContentVersion                          = 45,
		EResultBP__R_TryAnotherCM                            = 46,
		EResultBP__R_PasswordRequiredToKickSession           = 47,
		EResultBP__R_AlreadyLoggedInElsewhere                = 48,
		EResultBP__R_Suspended                               = 49,
		EResultBP__R_Cancelled                               = 50,
		EResultBP__R_DataCorruption                          = 51,
		EResultBP__R_DiskFull                                = 52,
		EResultBP__R_RemoteCallFailed                        = 53,
		EResultBP__R_PasswordUnset                           = 54,
		EResultBP__R_ExternalAccountUnlinked                 = 55,
		EResultBP__R_PSNTicketInvalid                        = 56,
		EResultBP__R_ExternalAccountAlreadyLinked            = 57,
		EResultBP__R_RemoteFileConflict                      = 58,
		EResultBP__R_IllegalPassword                         = 59,
		EResultBP__R_SameAsPreviousValue                     = 60,
		EResultBP__R_AccountLogonDenied                      = 61,
		EResultBP__R_CannotUseOldPassword                    = 62,
		EResultBP__R_InvalidLoginAuthCode                    = 63,
		EResultBP__R_AccountLogonDeniedNoMail                = 64,
		EResultBP__R_HardwareNotCapableOfIPT                 = 65,
		EResultBP__R_IPTInitError                            = 66,
		EResultBP__R_ParentalControlRestricted               = 67,
		EResultBP__R_FacebookQueryError                      = 68,
		EResultBP__R_ExpiredLoginAuthCode                    = 69,
		EResultBP__R_IPLoginRestrictionFailed                = 70,
		EResultBP__R_AccountLockedDown                       = 71,
		EResultBP__R_AccountLogonDeniedVerifiedEmailRequired = 72,
		EResultBP__R_NoMatchingURL                           = 73,
		EResultBP__R_BadResponse                             = 74,
		EResultBP__R_RequirePasswordReEntry                  = 75,
		EResultBP__R_ValueOutOfRange                         = 76,
		EResultBP__R_UnexpectedError                         = 77,
		EResultBP__R_Disabled                                = 78,
		EResultBP__R_InvalidCEGSubmission                    = 79,
		EResultBP__R_RestrictedDevice                        = 80,
		EResultBP__R_RegionLocked                            = 81,
		EResultBP__R_RateLimitExceeded                       = 82,
		EResultBP__R_AccountLoginDeniedNeedTwoFactor         = 83,
		EResultBP__R_ItemDeleted                             = 84,
		EResultBP__R_AccountLoginDeniedThrottle              = 85,
		EResultBP__R_TwoFactorCodeMismatch                   = 86,
		EResultBP__R_TwoFactorActivationCodeMismatch         = 87,
		EResultBP__R_AccountAssociatedToMultiplePartners     = 88,
		EResultBP__R_NotModified                             = 89,
		EResultBP__R_NoMobileDevice                          = 90,
		EResultBP__R_TimeNotSynced                           = 91,
		EResultBP__R_SmsCodeFailed                           = 92,
		EResultBP__R_AccountLimitExceeded                    = 93,
		EResultBP__R_AccountActivityLimitExceeded            = 94,
		EResultBP__R_PhoneActivityLimitExceeded              = 95,
		EResultBP__R_RefundToWallet                          = 96,
		EResultBP__R_EmailSendFailure                        = 97,
		EResultBP__R_NotSettled                              = 98,
		EResultBP__R_NeedCaptcha                             = 99,
		EResultBP__R_GSLTDenied                              = 100,
		EResultBP__R_GSOwnerDenied                           = 101,
		EResultBP__R_InvalidItemType                         = 102,
		EResultBP__R_IPBanned                                = 103,
		EResultBP__R_GSLTExpired                             = 104,
		EResultBP__R_InsufficientFunds                       = 105,
		EResultBP__R_TooManyPending                          = 106,
		EResultBP__R_MAX                                     = 107
	};

	/**
	 * Enum SteamGeneral.ESteamSupportedLanguages
	 */
	enum class SteamGeneral_ESteamSupportedLanguages : uint8_t
	{
		ESteamSupportedLanguages__Arabic                       = 0,
		ESteamSupportedLanguages__Bulgarian                    = 1,
		ESteamSupportedLanguages__ChineseSimplified            = 2,
		ESteamSupportedLanguages__ChineseTraditional           = 3,
		ESteamSupportedLanguages__Czech                        = 4,
		ESteamSupportedLanguages__Danish                       = 5,
		ESteamSupportedLanguages__Dutch                        = 6,
		ESteamSupportedLanguages__English                      = 7,
		ESteamSupportedLanguages__Finnish                      = 8,
		ESteamSupportedLanguages__French                       = 9,
		ESteamSupportedLanguages__German                       = 10,
		ESteamSupportedLanguages__Greek                        = 11,
		ESteamSupportedLanguages__Hungarian                    = 12,
		ESteamSupportedLanguages__Italian                      = 13,
		ESteamSupportedLanguages__Japanese                     = 14,
		ESteamSupportedLanguages__Korean                       = 15,
		ESteamSupportedLanguages__Norwegian                    = 16,
		ESteamSupportedLanguages__Polish                       = 17,
		ESteamSupportedLanguages__Portuguese                   = 18,
		ESteamSupportedLanguages__PortugueseBrazil             = 19,
		ESteamSupportedLanguages__Romanian                     = 20,
		ESteamSupportedLanguages__Russian                      = 21,
		ESteamSupportedLanguages__Spanish                      = 22,
		ESteamSupportedLanguages__Swedish                      = 23,
		ESteamSupportedLanguages__Thai                         = 24,
		ESteamSupportedLanguages__Turkish                      = 25,
		ESteamSupportedLanguages__Ukrainian                    = 26,
		ESteamSupportedLanguages__ESteamSupportedLanguages_MAX = 27
	};

	/**
	 * Enum SteamGeneral.EPersonaStateBP
	 */
	enum class SteamGeneral_EPersonaStateBP : uint8_t
	{
		EPersonaStateBP__PS_Offline        = 0,
		EPersonaStateBP__PS_Online         = 1,
		EPersonaStateBP__PS_Busy           = 2,
		EPersonaStateBP__PS_Away           = 3,
		EPersonaStateBP__PS_Snooze         = 4,
		EPersonaStateBP__PS_LookingToTrade = 5,
		EPersonaStateBP__PS_LookingToPlay  = 6,
		EPersonaStateBP__PS_Max            = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SteamGeneral.UInt64
	 * Size -> 0x0008
	 */
	struct FUInt64
	{
	public:
		uint64_t                                                   Value;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamGeneral.UInt32
	 * Size -> 0x0004
	 */
	struct FUInt32
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamGeneral.SteamUGCItemId
	 * Size -> 0x0008
	 */
	struct FSteamUGCItemId
	{
	public:
		struct FUInt64                                             ID;                                                      // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamGeneral.SteamDepotId
	 * Size -> 0x0004
	 */
	struct FSteamDepotId
	{
	public:
		struct FUInt32                                             ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamGeneral.SteamAppId
	 * Size -> 0x0004
	 */
	struct FSteamAppId
	{
	public:
		struct FUInt32                                             ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamGeneral.SteamUGCUpdateHandle
	 * Size -> 0x0008
	 */
	struct FSteamUGCUpdateHandle
	{
	public:
		struct FUInt64                                             handle;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamGeneral.SteamUGCHandle
	 * Size -> 0x0008
	 */
	struct FSteamUGCHandle
	{
	public:
		struct FUInt64                                             handle;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamGeneral.SteamUGCQueryHandle
	 * Size -> 0x0008
	 */
	struct FSteamUGCQueryHandle
	{
	public:
		struct FUInt64                                             handle;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct SteamGeneral.SteamKeyValuePair
	 * Size -> 0x0020
	 */
	struct FSteamKeyValuePair
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
