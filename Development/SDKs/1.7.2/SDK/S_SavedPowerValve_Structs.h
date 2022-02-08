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
	 * UserDefinedStruct S_SavedPowerValve.S_SavedPowerValve
	 * Size -> 0x0044
	 */
	struct FS_SavedPowerValve
	{
	public:
		class UClass*                                              Item_40_1F85D05B4280BC5D178F66A0E8252E5A;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WFLH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform_11_82DA4B5E46D0AA194976E2BBE8A4C5C2;           // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool                                                       PlacedDown__9_2A03037C418863B1500206942BA16924;          // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Locked__18_496BB37F40306FF59AD330AACFE28FDF;             // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Legs__38_B1040FB3408098FCE8F4B3B0D68D365B;               // 0x0042(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SwitchStatus_43_7DF7A7264CCDD626DDBDD984D60AEDEF;        // 0x0043(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
