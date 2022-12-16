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
	// # Classes
	// --------------------------------------------------

	/**
	 * BlueprintGeneratedClass AC_Splitter.AC_Splitter_C
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UAC_Splitter_C : public UActorComponent
	{
	public:

		void SplitSeedBag(
class ABP_ParentSeedBag_C* SeedBag
);

		void SplitCutVeg(
class ABP_ParentCutVeg_C* CutVeg
);

		void SplitTokens(
class ABP_FarmGuildToken_C* Tokens
);

		void SplitDirt(
class ABP_DirtResource_C* Dirt
);

		void SplitCoins(
class ABP_Coin_C* Coins
);

		void SplitBar(
class ABP_ParentBar_C* Bar
);

		void TrySplitItem(
class ABP_ParentItem_C* Item
, 
bool* Splitted
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
