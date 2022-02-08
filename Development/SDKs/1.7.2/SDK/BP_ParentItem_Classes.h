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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_ParentItem.BP_ParentItem_C
	 * Size -> 0x0141 (FullSize[0x0471] - InheritedSize[0x0330])
	 */
	class ABP_ParentItem_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      LerpPickup_NewTrack_0_8733DE97472CBCA25D2C5F90BC955C10;  // 0x0340(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  LerpPickup__Direction_8733DE97472CBCA25D2C5F90BC955C10;  // 0x0344(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DJEF[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  LerpPickup;                                              // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StoreSellPrice;                                          // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PaidFor_;                                                // 0x0354(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       BeingCarried_;                                           // 0x0355(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       Stored_;                                                 // 0x0356(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_ItemType_E_ItemType                                      itemType;                                                // 0x0357(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              BeingStoredBy;                                           // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                Name;                                                    // 0x0360(0x0018) Edit, BlueprintVisible
		class FText                                                Description;                                             // 0x0378(0x0018) Edit, BlueprintVisible
		class UStaticMesh*                                         StorageItemMesh;                                         // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InWater_;                                                // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UOBO[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TargetTrans;                                             // 0x03A0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          StartingTrans;                                           // 0x03D0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class ABP_ParentItem_C*>                            AntiLock;                                                // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       IgnoreAntiLock_;                                         // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F7CD[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        BPhysicsLockTimer;                                       // 0x0418(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UActorComponent*>                             ConveyorsColliding;                                      // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             DirectionalVector;                                       // 0x0430(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterPressure;                                           // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  OriginalMaterial;                                        // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                URL_Extension;                                           // 0x0448(0x0018) Edit, BlueprintVisible
		TArray<struct FTimerHandle>                                ConveyorTimerHandles;                                    // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       LockOutConveyor;                                         // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ClearConveyorTimers();
		void ConveyorTimerLoop();
		void SetAdditionalMeshesNewResponse(Engine_ECollisionResponse NewResponse);
		void ScanForDropCollision(bool* Can_Drop_);
		void ScanForItems();
		void LerpPickup__FinishedFunc();
		void LerpPickup__UpdateFunc();
		void ItemPickedUp(class ABP_GameCharacter_C* Player);
		void ItemDropped();
		void AttachToStorage(class AActor* Storage, class USceneComponent* MeshToAttachTo, Engine_ECollisionChannel Channel);
		void OverrideInWater();
		void OverrideClickNoTarget(class ABP_GameController_C* Controller, class AActor* Hit_Actor);
		void OverrideDroppedItem();
		void OverrideRightClickNoTarget(class ABP_GameController_C* Controller, class AActor* Hit_Actor);
		void OverrideLoaded();
		void OverridePickedup();
		void DetachFromStorage();
		void ItemFreeDropping(class ABP_GameCharacter_C* Player);
		void OverrideStopClicking();
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void OverrideHighlighted();
		void OverrideUnhighlighted();
		void TryAttachToStorage(class AActor* BeingStoredBy, class USceneComponent* Component);
		void StorageLoop();
		void TypeBPhysicsLock();
		void TriggerTypeBLock();
		void OverrideRightClickIsTarget(class UPrimitiveComponent* Component);
		void LerpToCharacter(class USceneComponent* Component);
		void EnteredConveyor(class UActorComponent* Collision_Comp, const struct FVector& VecDirection, float WaterPressure, bool LockOut_);
		void ExitConveyor(class UActorComponent* Collision_Comp, bool RemoveLockout);
		void OverrideLockedPhysics();
		void FlashRed();
		void FlashRedTimer();
		void AutoLock();
		void ExecuteUbergraph_BP_ParentItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
