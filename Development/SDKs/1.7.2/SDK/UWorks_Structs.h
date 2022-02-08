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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UWorks.UWorksSteamID
	 * Size -> 0x0008
	 */
	struct FUWorksSteamID
	{
	public:
		unsigned char                                              UnknownData_BHN6[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorks.UWorksGameID
	 * Size -> 0x0008
	 */
	struct FUWorksGameID
	{
	public:
		unsigned char                                              UnknownData_ZV03[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorks.UWorksPublishedFileID
	 * Size -> 0x0008
	 */
	struct FUWorksPublishedFileID
	{
	public:
		unsigned char                                              UnknownData_ND0W[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct UWorks.UWorksSteamItemDef
	 * Size -> 0x0004
	 */
	struct FUWorksSteamItemDef
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct UWorks.UWorksSteamItemInstanceID
	 * Size -> 0x0008
	 */
	struct FUWorksSteamItemInstanceID
	{
	public:
		unsigned char                                              UnknownData_VG4Z[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
