#ifndef UE4SS_SDK_BP_ParentCart_HPP
#define UE4SS_SDK_BP_ParentCart_HPP

class ABP_ParentCart_C : public ABP_ParentItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x0448 (size: 0x8)
    class UBoxComponent* StorageBox;                                                  // 0x0450 (size: 0x8)
    class UStaticMeshComponent* Wheels;                                               // 0x0458 (size: 0x8)
    float PlayerMovementSpeed;                                                        // 0x0460 (size: 0x4)
    float CartRotSpeed;                                                               // 0x0464 (size: 0x4)
    class UAudioComponent* MovementSoundRef;                                          // 0x0468 (size: 0x8)
    FTimerHandle MovementTimerRef;                                                    // 0x0470 (size: 0x8)
    class UMaterialInstanceDynamic* WheelsDynamicMaterial;                            // 0x0478 (size: 0x8)
    FVector LastLocation;                                                             // 0x0480 (size: 0xC)
    float RotationAngle;                                                              // 0x048C (size: 0x4)

    void GetChildReaction(TEnumAsByte<E_PhyReact::Type> Reaction, TEnumAsByte<E_PhyReact::Type>& ChildReaction);
    void CalculateWheelTurn(float DeltaSeconds);
    void ScanForDropCollision(bool& Can Drop?);
    void ToggleProxyItem(bool Enabled?);
    void UserConstructionScript();
    void OnCompleted_2BE4533747F6C74629003980D5B62B52();
    void ItemStored(class ABP_ParentItem_C* Item);
    void Movement Sound();
    void ToggleMovementSound(bool Condition);
    void BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void OverrideLockedPhysics();
    void ChangeAttachedReactionss(TEnumAsByte<E_PhyReact::Type> New Reaction);
    void BndEvt__BP_ParentCart_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ActorLoaded();
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature(class ABP_ParentItem_C* Item);
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature(class ABP_ParentItem_C* Item);
    void ResetMass();
    void OverridePickedupPreCarry();
    void OverridePickedup();
    void ExecuteUbergraph_BP_ParentCart(int32 EntryPoint);
}; // Size: 0x490

#endif
