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
	 * BlueprintGeneratedClass BP_ParentCart.BP_ParentCart_C
	 * Size -> 0x0050 (FullSize[0x0410] - InheritedSize[0x03C0])
	 */
	class ABP_ParentCart_C : public ABP_ParentItem_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UAC_Storage_C*                                     AC_Storage;                                              // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UBoxComponent*                                     StorageBox;                                              // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              Wheels;                                                  // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		float                                                    PlayerMovementSpeed;                                     // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    CartRotSpeed;                                            // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UAudioComponent*                                   MovementSoundRef;                                        // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      MovementTimerRef;                                        // 0x03F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		class UMaterialInstanceDynamic*                          WheelsDynamicMaterial;                                   // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FVector                                           LastLocation;                                            // 0x0400(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    RotationAngle;                                           // 0x040C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		class FName GetAttachedMeshCollisionProfile(
E_PhyReact Index
);

		void CalculateWheelTurn(
float DeltaSeconds
);

		void ScanForDropCollision(
bool* Can_Drop
);

		void ToggleProxyItem(
bool Enabled
);

		void UserConstructionScript();

		void OnCompleted_2BE4533747F6C74629003980D5B62B52();

		void ItemStored(
class ABP_ParentItem_C* Item
);

		void Movement_Sound();

		void ToggleMovementSound(
bool Condition
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

		void OverrideDroppedItem(
class ABP_GameCharacter_C* Character
);

		void OverrideLockedPhysics();

		void ChangeAttachedReactionss(
E_PhyReact New_Reaction
);

		void BndEvt__BP_ParentCart_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void StoredItemPickedUp(
class ABP_ParentItem_C* ItemPickedUp
);

		void ReceiveDestroyed();

		void ReceiveTick(
float DeltaSeconds
);

		void ActorLoaded();

		void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature();

		void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature();

		void ResetMass();

		void OverridePickedupPreCarry();

		void OverridePickedup();

		void ExecuteUbergraph_BP_ParentCart(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
