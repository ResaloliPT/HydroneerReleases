#pragma once

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
	 * UserDefinedStruct S_SaveCropper.S_SaveCropper
	 * Size -> 0x0098
	 */
	struct FS_SaveCropper
	{
	public:

		class UClass*                                            Vehicle_13_4D024F97495B2D37C6BF659480232C6E;             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_VK4D[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FTransform                                        Trans_5_1FCEAA98434951214AAC6EB444B18B64;                // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor


		float                                                    Fuel_12_D858E7C3473209BAF2BF548068060773;                // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_T4D8[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TMap<class UClass*, float>                               VegContents_17_EDBD4AE642ABBE1A3F2EF0A819CA1BB3;         // 0x0048(0x0050) Edit, BlueprintVisible

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
