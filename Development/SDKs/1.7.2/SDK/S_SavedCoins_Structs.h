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
	 * UserDefinedStruct S_SavedCoins.S_SavedCoins
	 * Size -> 0x0044
	 */
	struct FS_SavedCoins
	{
	public:
		class UClass*                                              Coins_2_CEF8A6694169245B46C0479B95A83165;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9D8Y[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform_5_3CBB7919481C7C5B35AAC4BC68166F40;            // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		int32_t                                                    Amount_10_1CD48CE04820D6899B818FBC2449F19D;              // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
