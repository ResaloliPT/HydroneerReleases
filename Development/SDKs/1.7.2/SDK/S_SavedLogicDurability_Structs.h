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
	 * UserDefinedStruct S_SavedLogicDurability.S_SavedLogicDurability
	 * Size -> 0x0061
	 */
	struct FS_SavedLogicDurability
	{
	public:
		class UClass*                                              Item_23_1F85D05B4280BC5D178F66A0E8252E5A;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KV9O[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform_11_82DA4B5E46D0AA194976E2BBE8A4C5C2;           // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool                                                       PlacedDown__9_2A03037C418863B1500206942BA16924;          // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4DIH[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Durability_16_CB8E9AC44EBD53ABEC235F9DD44E3F7C;          // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Locked__18_496BB37F40306FF59AD330AACFE28FDF;             // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LMZI[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Logic_26_C580C4A04B8A07FE556B778BF26F80DB;               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       Legs__28_69088D6E44CABBE35BBE32AE6A01DEC6;               // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
