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
	 * UserDefinedStruct S_SavedCart.S_SavedCart
	 * Size -> 0x0040
	 */
	struct FS_SavedCart
	{
	public:
		class UClass*                                              Item_11_1F85D05B4280BC5D178F66A0E8252E5A;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2R5B[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform_6_B7B609E04890DE3FA5EB05A78687282A;            // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif