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
	 * UserDefinedStruct S_SavedFish.S_SavedFish
	 * Size -> 0x004C
	 */
	struct FS_SavedFish
	{
	public:
		class UClass*                                              Item_16_1F85D05B4280BC5D178F66A0E8252E5A;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EUZ7[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform_6_ABCCA98F4E659FB9E20F738C5BEF6A25;            // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		float                                                      Size_8_275B187A451757CE2A7D2DBB58CF7DAD;                 // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_FishType_E_FishType                                      Type_12_CCD0DA3C44FC814305AA0E9FC7FF1CF7;                // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UWIY[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Cookedness_15_A869E02643753DB30B82C1A93DBBB97C;          // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
