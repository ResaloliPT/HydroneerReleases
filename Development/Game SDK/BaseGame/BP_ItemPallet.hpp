#ifndef UE4SS_SDK_BP_ItemPallet_HPP
#define UE4SS_SDK_BP_ItemPallet_HPP

class ABP_ItemPallet_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x0490 (size: 0x8)
    class UBoxComponent* StorageBox;                                                  // 0x0498 (size: 0x8)
    TArray<class TSubclassOf<ABP_ParentItem_C>> BannedItems;                          // 0x04A0 (size: 0x10)

    void GetChildReaction(TEnumAsByte<E_PhyReact::Type> Reaction, TEnumAsByte<E_PhyReact::Type>& ChildReaction);
    void BndEvt__StorageBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ItemStored(class ABP_ParentItem_C* Item);
    void BndEvt__BP_ItemPallet_StorageBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorLoaded();
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_0_ItemAttached__DelegateSignature(class ABP_ParentItem_C* Item);
    void BndEvt__BP_HydroTruck_AC_Storage_K2Node_ComponentBoundEvent_1_ItemDetached__DelegateSignature(class ABP_ParentItem_C* Item);
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void ResetPalletMass();
    void OverridePickedupPreCarry();
    void OverridePickedup();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_ItemPallet(int32 EntryPoint);
}; // Size: 0x4B0

#endif
