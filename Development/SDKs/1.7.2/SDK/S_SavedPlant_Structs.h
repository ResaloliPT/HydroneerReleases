﻿#pragma once

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
	 * UserDefinedStruct S_SavedPlant.S_SavedPlant
	 * Size -> 0x0044
	 */
	struct FS_SavedPlant
	{
	public:
		class UClass*                                              Class_4_E72AD27E43FB7D95CBD0E48ECF1A2A55;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9IRJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform_6_542E88924FB6589211171EA028713F47;            // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		float                                                      Size_8_EFB31F2B48CA979F41C9F8B891B3069A;                 // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif