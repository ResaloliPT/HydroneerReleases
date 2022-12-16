﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 2.1.1
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
	 * UserDefinedStruct S_Character_Customization.S_Character_Customization
	 * Size -> 0x0128
	 */
	struct FS_Character_Customization
	{
	public:

		struct FS_Character_Body                                 Body_50_B1E586F14C5B7AB5EAA170854BD38BBF;                // 0x0000(0x00E0) Edit, BlueprintVisible, HasGetValueTypeHash


		TArray<class UPData_Head_C*>                             Heads_60_AD94BBEA4E9D060DD0D42987B5EC3A98;               // 0x00E0(0x0010) Edit, BlueprintVisible


		TArray<class UPData_ClothingSet_C*>                      ClothingSets_55_6851D82140EE23C2079EF1800E44A916;        // 0x00F0(0x0010) Edit, BlueprintVisible


		unsigned char                                            BaseSkeleton_64_57E7EC65437BAB2C25DC80A985E9FCEC[0x28];  // 0x0100(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
