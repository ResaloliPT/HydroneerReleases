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
	 * BlueprintGeneratedClass BP_ItemPallet.BP_ItemPallet_C
	 * Size -> 0x0028 (FullSize[0x0430] - InheritedSize[0x0408])
	 */
	class ABP_ItemPallet_C : public ABP_ParentBuild_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0408(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UAC_Storage_C*                                     AC_Storage;                                              // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     StorageBox;                                              // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		TArray<class UClass*>                                    BannedItems;                                             // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


	public:

		class FName GetAttachedMeshCollisionProfile(
E_PhyReact Index
);

		void SetAttachedMeshCollisionProfile(
class UStaticMeshComponent* Mesh
, 
const class FName& CollisionProfile
);

		void ItemStored(
class ABP_ParentItem_C* Item
);

		void BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
, 
bool bFromSweep
, 
const struct FHitResult& SweepResult
);

		void OverridePlacedDown(
class ABP_GameCharacter_C* Character
);

		void BndEvt__BP_ItemPallet_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void ActorLoaded();

		void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature();

		void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature();

		void StoredItemPickedUp(
class ABP_ParentItem_C* ItemPickedUp
);

		void ResetPalletMass();

		void OverridePickedupPreCarry();

		void OverridePickedup();

		void OverrideDroppedItem(
class ABP_GameCharacter_C* Character
);

		void AttachedItemDropReaction();

		void ChangeAttachedReactions(
E_PhyReact New_Reaction
);

		void ExecuteUbergraph_BP_ItemPallet(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
