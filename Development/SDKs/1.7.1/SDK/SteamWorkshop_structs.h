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
// Enums
//---------------------------------------------------------------------------

// Enum SteamWorkshop.ESteamItemVisibility
enum class SteamWorkshop_ESteamItemVisibility : uint8_t
{
	ESteamItemVisibility__SIV_Public = 0,
	ESteamItemVisibility__SIV_FriendsOnly = 1,
	ESteamItemVisibility__SIV_Private = 2,
	ESteamItemVisibility__SIV_MAX  = 3,

};

// Enum SteamWorkshop.EVoteType
enum class SteamWorkshop_EVoteType : uint8_t
{
	EVoteType__VT_Skipped          = 0,
	EVoteType__VT_Up               = 1,
	EVoteType__VT_Down             = 2,
	EVoteType__VT_MAX              = 3,

};

// Enum SteamWorkshop.EItemPreviewTypeBP
enum class SteamWorkshop_EItemPreviewTypeBP : uint8_t
{
	EItemPreviewTypeBP__PT_Image   = 0,
	EItemPreviewTypeBP__PT_YouTubeVideo = 1,
	EItemPreviewTypeBP__PT_Sketchfab = 2,
	EItemPreviewTypeBP__PT_EnvironmentMap_HorizontalCross = 3,
	EItemPreviewTypeBP__PT_EnvironmentMap_LatLong = 4,
	EItemPreviewTypeBP__PT_ReservedMax = 5,
	EItemPreviewTypeBP__PT_MAX     = 6,

};

// Enum SteamWorkshop.EWorkshopFileTypeBP
enum class SteamWorkshop_EWorkshopFileTypeBP : uint8_t
{
	EWorkshopFileTypeBP__WFT_First = 0,
	EWorkshopFileTypeBP__WFT_Community = 1,
	EWorkshopFileTypeBP__WFT_Microtransaction = 2,
	EWorkshopFileTypeBP__WFT_Collection = 3,
	EWorkshopFileTypeBP__WFT_Art   = 4,
	EWorkshopFileTypeBP__WFT_Video = 5,
	EWorkshopFileTypeBP__WFT_Screenshot = 6,
	EWorkshopFileTypeBP__WFT_Game  = 7,
	EWorkshopFileTypeBP__WFT_Software = 8,
	EWorkshopFileTypeBP__WFT_Concept = 9,
	EWorkshopFileTypeBP__WFT_WebGuide = 10,
	EWorkshopFileTypeBP__WFT_IntegratedGuide = 11,
	EWorkshopFileTypeBP__WFT_Merch = 12,
	EWorkshopFileTypeBP__WFT_ControllerBinding = 13,
	EWorkshopFileTypeBP__WFT_SteamworksAccessInvite = 14,
	EWorkshopFileTypeBP__WFT_SteamVideo = 15,
	EWorkshopFileTypeBP__WFT_GameManagedItem = 16,
	EWorkshopFileTypeBP__WFT_Max   = 17,

};

// Enum SteamWorkshop.EUGCMatchingUGCTypeBP
enum class SteamWorkshop_EUGCMatchingUGCTypeBP : uint8_t
{
	EUGCMatchingUGCTypeBP__T_Items = 0,
	EUGCMatchingUGCTypeBP__T_Items_Mtx = 1,
	EUGCMatchingUGCTypeBP__T_Items_ReadyToUse = 2,
	EUGCMatchingUGCTypeBP__T_Collections = 3,
	EUGCMatchingUGCTypeBP__T_Artwork = 4,
	EUGCMatchingUGCTypeBP__T_Videos = 5,
	EUGCMatchingUGCTypeBP__T_Screenshots = 6,
	EUGCMatchingUGCTypeBP__T_AllGuides = 7,
	EUGCMatchingUGCTypeBP__T_WebGuides = 8,
	EUGCMatchingUGCTypeBP__T_IntegratedGuides = 9,
	EUGCMatchingUGCTypeBP__T_UsableInGame = 10,
	EUGCMatchingUGCTypeBP__T_ControllerBindings = 11,
	EUGCMatchingUGCTypeBP__T_GameManagedItems = 12,
	EUGCMatchingUGCTypeBP__T_All   = 13,
	EUGCMatchingUGCTypeBP__T_MAX   = 14,

};

// Enum SteamWorkshop.EUGCQueryBP
enum class SteamWorkshop_EUGCQueryBP : uint8_t
{
	EUGCQueryBP__UQ_RankedByVote   = 0,
	EUGCQueryBP__UQ_RankedByPublicationDate = 1,
	EUGCQueryBP__UQ_AcceptedForGameRankedByAcceptanceDate = 2,
	EUGCQueryBP__UQ_RankedByTrend  = 3,
	EUGCQueryBP__UQ_FavoritedByFriendsRankedByPublicationDate = 4,
	EUGCQueryBP__UQ_CreatedByFriendsRankedByPublicationDate = 5,
	EUGCQueryBP__UQ_RankedByNumTimesReported = 6,
	EUGCQueryBP__UQ_CreatedByFollowedUsersRankedByPublicationDate = 7,
	EUGCQueryBP__UQ_NotYetRated    = 8,
	EUGCQueryBP__UQ_RankedByTotalVotesAsc = 9,
	EUGCQueryBP__UQ_RankedByVotesUp = 10,
	EUGCQueryBP__UQ_RankedByTextSearch = 11,
	EUGCQueryBP__UQ_RankedByTotalUniqueSubscriptions = 12,
	EUGCQueryBP__UQ_RankedByPlaytimeTrend = 13,
	EUGCQueryBP__UQ_RankedByTotalPlaytime = 14,
	EUGCQueryBP__UQ_RankedByAveragePlaytimeTrend = 15,
	EUGCQueryBP__UQ_RankedByLifetimeAveragePlaytime = 16,
	EUGCQueryBP__UQ_RankedByPlaytimeSessionsTrend = 17,
	EUGCQueryBP__UQ_RankedByLifetimePlaytimeSessions = 18,
	EUGCQueryBP__UQ_MAX            = 19,

};

// Enum SteamWorkshop.EUserUGCListSortOrderBP
enum class SteamWorkshop_EUserUGCListSortOrderBP : uint8_t
{
	EUserUGCListSortOrderBP__SO_CreationOrderDesc = 0,
	EUserUGCListSortOrderBP__SO_CreationOrderAsc = 1,
	EUserUGCListSortOrderBP__SO_TitleAsc = 2,
	EUserUGCListSortOrderBP__SO_LastUpdatedDesc = 3,
	EUserUGCListSortOrderBP__SO_SubscriptionDateDesc = 4,
	EUserUGCListSortOrderBP__SO_VoteScoreDesc = 5,
	EUserUGCListSortOrderBP__SO_ForModeration = 6,
	EUserUGCListSortOrderBP__SO_MAX = 7,

};

// Enum SteamWorkshop.EUserUGCListBP
enum class SteamWorkshop_EUserUGCListBP : uint8_t
{
	EUserUGCListBP__L_Published    = 0,
	EUserUGCListBP__L_VotedOn      = 1,
	EUserUGCListBP__L_VotedUp      = 2,
	EUserUGCListBP__L_VotedDown    = 3,
	EUserUGCListBP__L_WillVoteLater = 4,
	EUserUGCListBP__L_Favorited    = 5,
	EUserUGCListBP__L_Subscribed   = 6,
	EUserUGCListBP__L_UsedOrPlayed = 7,
	EUserUGCListBP__L_Followed     = 8,
	EUserUGCListBP__L_MAX          = 9,

};

// Enum SteamWorkshop.EItemStatisticBP
enum class SteamWorkshop_EItemStatisticBP : uint8_t
{
	IStat_NumSubscriptions         = 0,
	IStat_NumFavorites             = 1,
	IStat_NumFollowers             = 2,
	IStat_NumUniqueSubscriptions   = 3,
	IStat_NumUniqueFavorites       = 4,
	IStat_NumUniqueFollowers       = 5,
	IStat_NumUniqueWebsiteViews    = 6,
	IStat_ReportScore              = 7,
	IStat_NumSecondsPlayed         = 8,
	IStat_NumPlaytimeSessions      = 9,
	IStat_NumComments              = 10,
	IStat_NumSecondsPlayedDuringTimePeriod = 11,
	IStat_NumPlaytimeSessionsDuringTimePeriod = 12,
	IStat_MAX                      = 13,

};

// Enum SteamWorkshop.EItemUpdateStatusBP
enum class SteamWorkshop_EItemUpdateStatusBP : uint8_t
{
	EItemUpdateStatusBP__US_Invalid = 0,
	EItemUpdateStatusBP__US_PreparingConfig = 1,
	EItemUpdateStatusBP__US_PreparingContent = 2,
	EItemUpdateStatusBP__US_UploadingContent = 3,
	EItemUpdateStatusBP__US_UploadingPreviewFile = 4,
	EItemUpdateStatusBP__US_CommittingChanges = 5,
	EItemUpdateStatusBP__US_MAX    = 6,

};

// Enum SteamWorkshop.EItemStateBP
enum class SteamWorkshop_EItemStateBP : uint8_t
{
	EItemStateBP__IS_None          = 0,
	EItemStateBP__IS_Subscribed    = 1,
	EItemStateBP__IS_LegacyItem    = 2,
	EItemStateBP__IS_Installed     = 3,
	EItemStateBP__IS_NeedsUpdate   = 4,
	EItemStateBP__IS_Downloading   = 5,
	EItemStateBP__IS_DownloadPending = 6,
	EItemStateBP__IS_MAX           = 7,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SteamWorkshop.SteamWorkshopUpdateDetails
// 0x00D0
struct FSteamWorkshopUpdateDetails
{
	struct FString                                     title;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     updateNotice;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamGeneral_ESteamSupportedLanguages              updateLanguage;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_84A3[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MetaData;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamWorkshop_ESteamItemVisibility                 Visibility;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_THSI[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             tags;                                                      // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FSteamKeyValuePair>                  keyValueTags;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FString                                     contentDirectory;                                          // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     previewImage;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             additionalImages;                                          // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FString>                             youtubeVideoIDs;                                           // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FString>                             keysOfKeyValueTagsToRemove;                                // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int>                                        indexOfPreviewToRemove;                                    // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.SteamUGCQueryParameterAllUserDetails
// 0x0014
struct FSteamUGCQueryParameterAllUserDetails
{
	int                                                pageId;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamGeneral_ESteamSupportedLanguages              Language;                                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2Q8Z[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                allowedCacheResponseTime;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numDaysPlaytime;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReturnPreviewUrl : 1;                                     // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReturnKeyValueTags : 1;                                   // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReturnFullDescription : 1;                                // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReturnMetaData : 1;                                       // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReturnChildIds : 1;                                       // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReturnAdditionalPreviews : 1;                             // 0x0010(0x0001) BIT_FIELD (Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EI93[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.SteamUGCQueryParameterTagsAllUserDetails
// 0x0010
struct FSteamUGCQueryParameterTagsAllUserDetails
{
	TArray<struct FSteamKeyValuePair>                  requiredKeyValueTags;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.SteamUGCQueryParameterTagsAllUser
// 0x0020 (0x0030 - 0x0010)
struct FSteamUGCQueryParameterTagsAllUser : public FSteamUGCQueryParameterTagsAllUserDetails
{
	TArray<struct FString>                             requiredTags;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FString>                             excludedTags;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.SteamUGCQueryParameterAllUser
// 0x003C (0x0050 - 0x0014)
struct FSteamUGCQueryParameterAllUser : public FSteamUGCQueryParameterAllUserDetails
{
	unsigned char                                      UnknownData_PTZ3[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSteamUGCQueryParameterTagsAllUser          tagParameter;                                              // 0x0018(0x0030) (Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	bool                                               bReturnTotalOnly;                                          // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnIdsOnly;                                            // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_90G4[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.SteamUGCQueryParameterAll
// 0x0018 (0x0068 - 0x0050)
struct FSteamUGCQueryParameterAll : public FSteamUGCQueryParameterAllUser
{
	struct FString                                     searchText;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                rankedByTrendDays;                                         // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchAnyTag;                                              // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamWorkshop_EUGCQueryBP                          queryType;                                                 // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamWorkshop_EUGCMatchingUGCTypeBP                fileType;                                                  // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZBT[0x1];                                     // 0x0067(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.SteamUGCQueryParameterDetails
// 0x0024 (0x0038 - 0x0014)
struct FSteamUGCQueryParameterDetails : public FSteamUGCQueryParameterAllUserDetails
{
	unsigned char                                      UnknownData_N337[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSteamUGCQueryParameterTagsAllUserDetails   tagParameter;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FSteamUGCItemId>                     workshopItemIds;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.SteamUGCQueryParameterUser
// 0x0018 (0x0068 - 0x0050)
struct FSteamUGCQueryParameterUser : public FSteamUGCQueryParameterAllUser
{
	struct FString                                     filenameFilter;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamWorkshop_EUserUGCListBP                       list;                                                      // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamWorkshop_EUGCMatchingUGCTypeBP                Type;                                                      // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamWorkshop_EUserUGCListSortOrderBP              sortOrder;                                                 // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GIP4[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.WorkshopItemDownloadInfo
// 0x0020
struct FWorkshopItemDownloadInfo
{
	struct FUInt64                                     bytesCurrent;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FUInt64                                     bytesTotal;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int                                                megaBytesCurrent;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                megaBytesTotal;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              percentageFinished;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FULK[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.WorkshopItemUpdateInfo
// 0x0008 (0x0028 - 0x0020)
struct FWorkshopItemUpdateInfo : public FWorkshopItemDownloadInfo
{
	SteamWorkshop_EItemUpdateStatusBP                  status;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PCY1[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.ItemPreviewDetails
// 0x0028
struct FItemPreviewDetails
{
	struct FString                                     urlOrVideoId;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     originalFileName;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamWorkshop_EItemPreviewTypeBP                   itemType;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KM1L[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.SteamWorkshopItemDetails
// 0x0110
struct FSteamWorkshopItemDetails
{
	SteamGeneral_EResultBP                             result;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WMZM[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSteamUGCItemId                             workshopItemID;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	SteamWorkshop_EWorkshopFileTypeBP                  fileType;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CK5Z[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSteamAppId                                 appIdCreatingApp;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamAppId                                 appIdUsingApp;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VQ7U[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     title;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUInt64                                     userIdItemCreator;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   timeStampCreated;                                          // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   timeStampUpdated;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   timeStampAddedToUserList;                                  // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamWorkshop_ESteamItemVisibility                 Visibility;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bItemIsBanned;                                             // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bItemWasAcceptedByDevelopers;                              // 0x0062(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTagsTruncated;                                            // 0x0063(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F6QI[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             tags;                                                      // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FSteamUGCHandle                             primaryFileHandle;                                         // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FSteamUGCHandle                             previewImageHandle;                                        // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     primaryFileCloudFilename;                                  // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                primaryFileSize;                                           // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                previewImageSize;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     websiteURL;                                                // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                votesUp;                                                   // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                votesDown;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              score;                                                     // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUInt32                                     numChildren;                                               // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     previewUrl;                                                // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemPreviewDetails>                 additionalPreviews;                                        // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FSteamUGCItemId>                     childItemIds;                                              // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FSteamKeyValuePair>                  keyValueTags;                                              // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FString                                     MetaData;                                                  // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.SteamWorkshopItemInstallInfo
// 0x0028
struct FSteamWorkshopItemInstallInfo
{
	struct FUInt64                                     sizeOnDiskBytes;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int                                                sizeOnDiskMBytes;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0VW0[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Directory;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   timeStampLastUpdate;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.SteamResult
// 0x0001
struct FSteamResult
{
	SteamGeneral_EResultBP                             result;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.GeneralWorkshopItemResult
// 0x000F (0x0010 - 0x0001)
struct FGeneralWorkshopItemResult : public FSteamResult
{
	unsigned char                                      UnknownData_0EYS[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSteamUGCItemId                             workshopItemID;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.DownloadItemResult
// 0x0008 (0x0018 - 0x0010)
struct FDownloadItemResult : public FGeneralWorkshopItemResult
{
	struct FUInt32                                     AppID;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N1J1[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.UserFavoriteItemChangedResult
// 0x0008 (0x0018 - 0x0010)
struct FUserFavoriteItemChangedResult : public FGeneralWorkshopItemResult
{
	bool                                               bWasAddRequest;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SWJ6[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.UpdateWorkshopItemResult
// 0x0008 (0x0018 - 0x0010)
struct FUpdateWorkshopItemResult : public FGeneralWorkshopItemResult
{
	bool                                               bUserNeedsToAcceptWorkshopLegalAgreement;                  // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BRCX[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.QueryWorkshopForItemsResult
// 0x002F (0x0030 - 0x0001)
struct FQueryWorkshopForItemsResult : public FSteamResult
{
	unsigned char                                      UnknownData_IFJ5[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSteamUGCQueryHandle                        queryHandle;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FUInt32                                     numResultsReturned;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FUInt32                                     numMatchingResults;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHasMorePages;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRetrievedDataWasCached;                                   // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZWZ9[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSteamWorkshopItemDetails>           items;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.QueryWorkshopForItemDetailsResult
// 0x0038 (0x0068 - 0x0030)
struct FQueryWorkshopForItemDetailsResult : public FQueryWorkshopForItemsResult
{
	struct FSteamUGCQueryParameterDetails              queryParams;                                               // 0x0030(0x0038) (Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.CreateWorkshopItemResult
// 0x00D0 (0x00E8 - 0x0018)
struct FCreateWorkshopItemResult : public FUpdateWorkshopItemResult
{
	struct FSteamWorkshopUpdateDetails                 itemDetails;                                               // 0x0018(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.GetUserVoteOnWorkshopItemResult
// 0x0008 (0x0018 - 0x0010)
struct FGetUserVoteOnWorkshopItemResult : public FGeneralWorkshopItemResult
{
	SteamWorkshop_EVoteType                            userVoteType;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2HIJ[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.QueryWorkshopForAllItemsResult
// 0x0068 (0x0098 - 0x0030)
struct FQueryWorkshopForAllItemsResult : public FQueryWorkshopForItemsResult
{
	struct FSteamUGCQueryParameterAll                  queryParams;                                               // 0x0030(0x0068) (Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.QueryWorkshopForUserItemsResult
// 0x0068 (0x0098 - 0x0030)
struct FQueryWorkshopForUserItemsResult : public FQueryWorkshopForItemsResult
{
	struct FSteamUGCQueryParameterUser                 queryParams;                                               // 0x0030(0x0068) (Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.SetUserVoteOnWorkshopItemResult
// 0x0008 (0x0018 - 0x0010)
struct FSetUserVoteOnWorkshopItemResult : public FGeneralWorkshopItemResult
{
	bool                                               bVoteUp;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EEW3[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.GetAppdependencyResult
// 0x0018 (0x0028 - 0x0010)
struct FGetAppdependencyResult : public FGeneralWorkshopItemResult
{
	TArray<struct FSteamAppId>                         dependencyApps;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                               bAllAppDependenciesReturned;                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FO9G[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.AddRemoveItemDependencyResult
// 0x0010 (0x0020 - 0x0010)
struct FAddRemoveItemDependencyResult : public FGeneralWorkshopItemResult
{
	struct FSteamUGCItemId                             dependendItemId;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAddDependency;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XJ84[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SteamWorkshop.AddRemoveAppDependencyResult
// 0x0008 (0x0020 - 0x0018)
struct FAddRemoveAppDependencyResult : public FDownloadItemResult
{
	bool                                               bAddDependency;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C74P[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
