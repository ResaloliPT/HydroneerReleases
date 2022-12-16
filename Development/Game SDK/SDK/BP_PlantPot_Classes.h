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
	 * BlueprintGeneratedClass BP_PlantPot.BP_PlantPot_C
	 * Size -> 0x0008 (FullSize[0x0410] - InheritedSize[0x0408])
	 */
	class ABP_PlantPot_C : public ABP_ParentBuild_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0408(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


	public:

		class FName GetAttachedMeshCollisionProfile(
E_PhyReact Index
);

		void ItemStored(
class ABP_ParentItem_C* Item
);

		void WaterParticleHit();

		void InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
);

		void HasNoWater();

		void HasWater();

		void StoredItemPickedUp(
class ABP_ParentItem_C* ItemPickedUp
);

		void ExecuteUbergraph_BP_PlantPot(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
