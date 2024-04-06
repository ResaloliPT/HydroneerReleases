#ifndef UE4SS_SDK_BP_ParentCart_HPP
#define UE4SS_SDK_BP_ParentCart_HPP

class ABP_ParentCart_C : public ABP_ParentItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Storage_C* AC_Storage;
    class UBoxComponent* StorageBox;
    class UStaticMeshComponent* Wheels;
    float PlayerMovementSpeed;
    float CartRotSpeed;
    class UAudioComponent* MovementSoundRef;
    FTimerHandle MovementTimerRef;
    class UMaterialInstanceDynamic* WheelsDynamicMaterial;
    FVector LastLocation;
    float RotationAngle;

    FName GetAttachedMeshCollisionProfile(TEnumAsByte<E_PhyReact::Type> Index);
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
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature();
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature();
    void ResetMass();
    void OverridePickedupPreCarry();
    void OverridePickedup();
    void ExecuteUbergraph_BP_ParentCart(int32 EntryPoint);
};

#endif
