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
	 * BlueprintGeneratedClass BP_ShelfFishingPot.BP_ShelfFishingPot_C
	 * Size -> 0x0020 (FullSize[0x0470] - InheritedSize[0x0450])
	 */
	class ABP_ShelfFishingPot_C : public ABP_ParentShelf_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UAC_ResourceSpawn_C*                               AC_ResourceSpawn;                                        // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USC_ShelfLocation_C*                               SC_ShelfLocation;                                        // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      FishingTimer;                                            // 0x0468(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


	public:

		void UserConstructionScript();

		void OverridePlacedDown(
class ABP_GameCharacter_C* Character
);

		void CatchFish();

		void OverrideLoaded();

		void ExecuteUbergraph_BP_ShelfFishingPot(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
