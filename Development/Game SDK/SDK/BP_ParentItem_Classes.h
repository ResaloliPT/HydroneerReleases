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
	 * BlueprintGeneratedClass BP_ParentItem.BP_ParentItem_C
	 * Size -> 0x01A0 (FullSize[0x03C0] - InheritedSize[0x0220])
	 */
	class ABP_ParentItem_C : public AActor
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UStaticMeshComponent*                              StaticMesh;                                              // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		int32_t                                                  StoreSellPrice;                                          // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     PaidFor;                                                 // 0x0234(0x0001) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn


		E_ItemType                                               ItemType;                                                // 0x0235(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_68QD[0x2];                                   // 0x0236(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class AActor*                                            BeingStoredBy;                                           // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class FText                                              Name;                                                    // 0x0240(0x0018) Edit, BlueprintVisible


		class FText                                              Description;                                             // 0x0258(0x0018) Edit, BlueprintVisible


		bool                                                     PreventLock;                                             // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_BAQ2[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class FText                                              URL_Extension;                                           // 0x0278(0x0018) Edit, BlueprintVisible


		bool                                                     InWater;                                                 // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_WQ2D[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TArray<struct FS_MeshMaterials>                          MeshMats;                                                // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference


		class USoundBase*                                        DropSound;                                               // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class ABP_GameCharacter_C*                               BeingCarriedBy;                                          // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		TArray<E_Badges>                                         Badges;                                                  // 0x02B8(0x0010) Edit, BlueprintVisible


		bool                                                     PreventPickup;                                           // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		E_ItemSpawnType                                          SpawnType;                                               // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


		unsigned char                                            UnknownData_WJ5I[0x6];                                   // 0x02CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class ABP_ParentItem_C*                                  ProxyItem;                                               // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class FName                                              Socket;                                                  // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UAnimSequence*                                     HoldPose;                                                // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UAnimMontage*                                      PrimaryUseAnim;                                          // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UAnimMontage*                                      SecondaryUseAnim;                                        // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UAnimMontage*                                      NPC_UseAnim;                                             // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UAnimMontage*                                      NPC_AcceptAnim;                                          // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UAnimMontage*                                      NPC_RejectAnim;                                          // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     CreateProxy;                                             // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_N134[0xF];                                   // 0x0311(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FTransform                                        ProxyOffset;                                             // 0x0320(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor


		TArray<int32_t>                                          HighlightArray;                                          // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		class FScriptMulticastDelegate                           OnGrounded;                                              // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


		float                                                    DefaultMass;                                             // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_I35Q[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class FScriptMulticastDelegate                           OnStored;                                                // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


		unsigned char                                            Icon[0x28];                                              // 0x0388(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


		E_CurrencyType                                           CurrencyType;                                            // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_X428[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FTimerHandle                                      FlashRedTimerHandle;                                     // 0x03B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


	public:

		void BPI_GetCanHighlight(
bool* CanHighlight
);

		void BPI_GetHighlightArray(
TArray<int32_t>* HighlightArray
);

		void BPI_SetHighlightArray(
TArray<int32_t>* HighlightArray
, 
bool* Result
);

		void ComponentsToSave(
TArray<class UActorComponent*>* Components
);

		void StoreMeshMats();

		class FName GetAttachedMeshCollisionProfile(
E_PhyReact Index
);

		void SetAttachedMeshCollisionProfile(
class UStaticMeshComponent* Mesh
, 
const class FName& CollisionProfile
);

		void MassReset(
class UPrimitiveComponent* Mesh
);

		void RemoveFromStorage();

		void CanChangeMeshCollisions(
class UPrimitiveComponent* Primitive
, 
bool* Result
);

		void ToggleHighlight(
bool Highlight
);

		void PlaySecondaryUseAnim();

		void PlayPrimaryUseAnim();

		void ToggleOnlyOwnerSee(
bool OnlyOwnerSee
);

		void SetProxyCollisionVisibility();

		void ToggleProxyItem(
bool Enabled
);

		void CreateProxyItem();

		void SetMeshPhysicalReaction(
E_PhyReact New_Reaction
, 
class UStaticMeshComponent* Mesh
);

		void RevertMaterials();

		void Change_Materials(
class UMaterialInterface* Material
);

		void LockPhysics();

		void PhysicsLockTimer();

		void Set_Item_Physical_Reactions(
E_PhyReact New_Reaction
);

		void SetAllResponseToChannel(
ECollisionResponse NewResponse
, 
ECollisionChannel Channel
);

		void ScanForDropCollision(
bool* Can_Drop
);

		void Scan_for_Items_on_Top();

		void UserConstructionScript();

		void OnCompleted_593CCD554D56E956B025F79362EFAA8E();

		void OverrideDroppedItem(
class ABP_GameCharacter_C* Character
);

		void OverrideLoaded();

		void OverridePickedup();

		void ItemPrecisionPlace(
class ABP_GameCharacter_C* Player
);

		void OverrideHighlighted();

		void OverrideUnhighlighted();

		void ItemDropped();

		void ItemPickedUp(
class ABP_GameCharacter_C* Player
);

		void TriggerPhysics(
float LockoutTime
);

		void OverrideLockedPhysics();

		void FlashRed();

		void FlashRedTimer();

		void ActorSaved();

		void ActorPreSave();

		void Cooldown();

		void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(
class UPrimitiveComponent* HitComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
const struct FVector& NormalImpulse
, 
const struct FHitResult& Hit
);

		void BPI_ToggleLookAt(
class ABP_GameController_C* Controller
, 
bool LookingAt
);

		void OverrideAnimFinished();

		void OverrideHit(
class AActor* OtherActor
);

		void ShelfItem(
class AActor* BeingStoredBy
);

		void ReceiveBeginPlay();

		void PaidForItem();

		void ActorLoaded();

		void ReceiveDestroyed();

		void BPI_Unhighlight(
class ABP_GameController_C* Controller
);

		void BPI_Highlight(
class ABP_GameController_C* Controller
);

		void TriggerPhysicsKeepReact();

		void OverrideBeginPlay();

		void LoadCompleted();

		void OverridePickedupPreCarry();

		void ExecuteUbergraph_BP_ParentItem(
int32_t EntryPoint
);

		void OnStored__DelegateSignature(
class ABP_ParentItem_C* Item
, 
class UAC_Storage_C* Storage
);

		void OnGrounded__DelegateSignature(
class ABP_ParentItem_C* Item
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
