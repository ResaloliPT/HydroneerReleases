#ifndef UE4SS_SDK_BP_ItemPallet_HPP
#define UE4SS_SDK_BP_ItemPallet_HPP

class ABP_ItemPallet_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Storage_C* AC_Storage;
    class UBoxComponent* StorageBox;
    TArray<class TSubclassOf<ABP_ParentItem_C>> BannedItems;

    FName GetAttachedMeshCollisionProfile(TEnumAsByte<E_PhyReact::Type> Index);
    void SetAttachedMeshCollisionProfile(class UStaticMeshComponent* Mesh, FName CollisionProfile);
    void ItemStored(class ABP_ParentItem_C* Item);
    void BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void BndEvt__BP_ItemPallet_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorLoaded();
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature();
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void ResetPalletMass();
    void OverridePickedupPreCarry();
    void OverridePickedup();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void AttachedItemDropReaction();
    void ChangeAttachedReactions(TEnumAsByte<E_PhyReact::Type> New Reaction);
    void ExecuteUbergraph_BP_ItemPallet(int32 EntryPoint);
};

#endif
