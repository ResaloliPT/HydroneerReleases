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
	 * UserDefinedStruct S_SavedSmelterItem.S_SavedSmelterItem
	 * Size -> 0x0048
	 */
	struct FS_SavedSmelterItem
	{
	public:
		class UClass*                                              Item_12_1F85D05B4280BC5D178F66A0E8252E5A;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4ZOU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform_11_82DA4B5E46D0AA194976E2BBE8A4C5C2;           // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool                                                       PlacedDown__9_2A03037C418863B1500206942BA16924;          // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Locked__14_2744027540013250BAD915800BDFBF1F;             // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_MoltenType_E_MoltenType                                  MoltenType_17_244DA78240304FC6DA16C99F7DFCF7C2;          // 0x0042(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8LOM[0x1];                                   // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ContentOreSize_20_8D9CA2F04A56F5C14A1384A295F499D9;      // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
