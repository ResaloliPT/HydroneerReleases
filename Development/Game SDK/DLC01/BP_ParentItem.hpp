#ifndef UE4SS_SDK_BP_ParentItem_HPP
#define UE4SS_SDK_BP_ParentItem_HPP

class ABP_ParentItem_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    int32 StoreSellPrice;                                                             // 0x0230 (size: 0x4)
    bool PaidFor?;                                                                    // 0x0234 (size: 0x1)
    TEnumAsByte<E_ItemType::Type> ItemType;                                           // 0x0235 (size: 0x1)
    class AActor* BeingStoredBy;                                                      // 0x0238 (size: 0x8)
    FText Name;                                                                       // 0x0240 (size: 0x18)
    FText Description;                                                                // 0x0258 (size: 0x18)
    bool PreventLock?;                                                                // 0x0270 (size: 0x1)
    FText URL Extension;                                                              // 0x0278 (size: 0x18)
    bool InWater?;                                                                    // 0x0290 (size: 0x1)
    TArray<FS_MeshMaterials> MeshMats;                                                // 0x0298 (size: 0x10)
    class USoundBase* DropSound;                                                      // 0x02A8 (size: 0x8)
    class ABP_GameCharacter_C* BeingCarriedBy;                                        // 0x02B0 (size: 0x8)
    TArray<TEnumAsByte<E_Badges::Type>> Badges;                                       // 0x02B8 (size: 0x10)
    bool PreventPickup?;                                                              // 0x02C8 (size: 0x1)
    TEnumAsByte<E_ItemSpawnType::Type> SpawnType;                                     // 0x02C9 (size: 0x1)
    class ABP_ParentItem_C* ProxyItem;                                                // 0x02D0 (size: 0x8)
    FName Socket;                                                                     // 0x02D8 (size: 0x8)
    class UAnimSequence* HoldPose;                                                    // 0x02E0 (size: 0x8)
    class UAnimMontage* PrimaryUseAnim;                                               // 0x02E8 (size: 0x8)
    class UAnimMontage* SecondaryUseAnim;                                             // 0x02F0 (size: 0x8)
    class UAnimMontage* NPC_UseAnim;                                                  // 0x02F8 (size: 0x8)
    class UAnimMontage* NPC_AcceptAnim;                                               // 0x0300 (size: 0x8)
    class UAnimMontage* NPC_RejectAnim;                                               // 0x0308 (size: 0x8)
    bool CreateProxy?;                                                                // 0x0310 (size: 0x1)
    FTransform ProxyOffset;                                                           // 0x0320 (size: 0x30)
    TArray<int32> HighlightArray;                                                     // 0x0350 (size: 0x10)
    FBP_ParentItem_COnGrounded OnGrounded;                                            // 0x0360 (size: 0x10)
    void OnGrounded(class ABP_ParentItem_C* Item);
    float DefaultMass;                                                                // 0x0370 (size: 0x4)
    FBP_ParentItem_COnStored OnStored;                                                // 0x0378 (size: 0x10)
    void OnStored(class ABP_ParentItem_C* Item, class UAC_Storage_C* Storage);
    TSoftObjectPtr<UTexture2D> Icon;                                                  // 0x0388 (size: 0x28)
    TEnumAsByte<E_CurrencyType::Type> CurrencyType;                                   // 0x03B0 (size: 0x1)
    FTimerHandle FlashRedTimerHandle;                                                 // 0x03B8 (size: 0x8)
    TArray<class UBoxComponent*> ConveyorsColliding;                                  // 0x03C0 (size: 0x10)
    FVector SavedVelocity;                                                            // 0x03D0 (size: 0xC)
    TSoftObjectPtr<UTexture2D> Icon_Chalk;                                            // 0x03E0 (size: 0x28)
    TEnumAsByte<E_LiquidType::Type> InLiquid?;                                        // 0x0408 (size: 0x1)
    bool Heavy?;                                                                      // 0x0409 (size: 0x1)
    FTransform HoldOffset;                                                            // 0x0410 (size: 0x30)

    void Crane_CanPlace(bool& Result, FVector& Location);
    void Crane_TryLift(class AActor* LiftingActor, class ACharacter* ControllingCharacter, bool& Result);
    void Crane_TryPlace(bool& Result);
    void Crane_TryDrop(bool& Result);
    void BPI_GetCanHighlight(bool& CanHighlight?);
    void BPI_GetHighlightArray(TArray<int32>& HighlightArray);
    void BPI_SetHighlightArray(TArray<int32>& HighlightArray, bool& Result);
    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ChildReactionToCollision(TEnumAsByte<E_PhyReact::Type> Reaction, FName& Profile);
    void GetChildReaction(TEnumAsByte<E_PhyReact::Type> Reaction, TEnumAsByte<E_PhyReact::Type>& ChildReaction);
    void SetChildMeshCollisions(bool SetRoot, TEnumAsByte<E_PhyReact::Type> Reaction);
    void ToggleComponentTick(bool bEnabled);
    void GetSpecialType(FString& Type);
    void BoundsCheck();
    void StoreMeshMats();
    FName GetAttachedMeshCollisionProfile(TEnumAsByte<E_PhyReact::Type> Index);
    void SetAttachedMeshCollisionProfile(class UStaticMeshComponent* Mesh, FName CollisionProfile);
    void MassReset(class UPrimitiveComponent* Mesh);
    void RemoveFromStorage();
    void CanChangeMeshCollisions?(class UPrimitiveComponent* Primitive, bool& Result);
    void ToggleHighlight(bool Highlight?);
    void PlaySecondaryUseAnim();
    void PlayPrimaryUseAnim();
    void ToggleOnlyOwnerSee(bool OnlyOwnerSee);
    void SetProxyCollisionVisibility();
    void ToggleProxyItem(bool Enabled?);
    void CreateProxyItem();
    void SetMeshPhysicalReaction(TEnumAsByte<E_PhyReact::Type> New Reaction, class UStaticMeshComponent* Mesh);
    void RevertMaterials();
    void Change Materials(class UMaterialInterface* Material);
    void LockPhysics();
    void PhysicsLockTimer();
    void Set Item Physical Reactions(TEnumAsByte<E_PhyReact::Type> New Reaction);
    void SetAllResponseToChannel(TEnumAsByte<ECollisionResponse> NewResponse, TEnumAsByte<ECollisionChannel> Channel);
    void ScanForDropCollision(bool& Can Drop?);
    void Scan for Items on Top();
    void UserConstructionScript();
    void OnCompleted_593CCD554D56E956B025F79362EFAA8E();
    void OverrideLoaded();
    void OverridePickedup();
    void ItemPrecisionPlace(class ABP_GameCharacter_C* Player);
    void OverrideHighlighted();
    void OverrideUnhighlighted();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void TriggerPhysics(float LockoutTime);
    void OverrideLockedPhysics();
    void FlashRed();
    void FlashRedTimer();
    void ItemDropped();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ItemPickedUp(class ABP_GameCharacter_C* Player);
    void OverrideAnimFinished();
    void OverrideHit(class AActor* OtherActor);
    void ShelfItem(class AActor* BeingStoredBy);
    void ActorSaved();
    void ReceiveBeginPlay();
    void PaidForItem();
    void BPI_ToggleLookAt(class ABP_GameController_C* Controller, bool LookingAt?);
    void ActorLoaded();
    void ReceiveDestroyed();
    void BPI_Unhighlight(class ABP_GameController_C* Controller);
    void BPI_Highlight(class ABP_GameController_C* Controller);
    void TriggerPhysicsKeepReact();
    void OverrideBeginPlay();
    void LoadCompleted();
    void OverridePickedupPreCarry();
    void ActorPreSave();
    void OverrideCraneLifted();
    void ToggleSave(bool Save);
    void OverrideVelocity(FVector NewVelocity);
    void OverrideItemStored(class UAC_Storage_C* Storage);
    void HandleItemStored(class UAC_Storage_C* Storage);
    void Crane_HandleRetract(bool Retracting);
    void ItemHeld();
    void ExecuteUbergraph_BP_ParentItem(int32 EntryPoint);
    void OnStored__DelegateSignature(class ABP_ParentItem_C* Item, class UAC_Storage_C* Storage);
    void OnGrounded__DelegateSignature(class ABP_ParentItem_C* Item);
}; // Size: 0x440

#endif
