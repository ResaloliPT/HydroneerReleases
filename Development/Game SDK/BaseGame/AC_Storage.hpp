#ifndef UE4SS_SDK_AC_Storage_HPP
#define UE4SS_SDK_AC_Storage_HPP

class UAC_Storage_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FTimerHandle StorageTimerHandle;                                                  // 0x00B8 (size: 0x8)
    TArray<class ABP_ParentItem_C*> InStorageZone;                                    // 0x00C0 (size: 0x10)
    TArray<class ABP_ParentItem_C*> Stored;                                           // 0x00D0 (size: 0x10)
    TEnumAsByte<E_PhyReact::Type> LockedPhysicalReaction;                             // 0x00E0 (size: 0x1)
    FAC_Storage_CItemAttached ItemAttached;                                           // 0x00E8 (size: 0x10)
    void ItemAttached(class ABP_ParentItem_C* Item);
    FAC_Storage_CItemDetached ItemDetached;                                           // 0x00F8 (size: 0x10)
    void ItemDetached(class ABP_ParentItem_C* Item);

    void SetMeshOverlapEvent(class ABP_ParentItem_C* Item);
    bool IsItemAttached?(const class AActor*& ItemToFind);
    void CanStoreItem?(class ABP_ParentItem_C* Item, bool& Result);
    void ReturnAllContents(TArray<class ABP_ParentItem_C*>& AllItemsInside);
    void ItemStored(class ABP_ParentItem_C* Item);
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void AddItemToStorage(class ABP_ParentItem_C* Item);
    void TryAttachItem(class ABP_ParentItem_C* Item);
    void LockAllIn();
    void RemoveItemFromStorage(class ABP_ParentItem_C* Item);
    void ItemLeftStorageZone(class ABP_ParentItem_C* Item);
    void DetachStorageItem(class ABP_ParentItem_C* Item);
    void AttachOnGrounded(class ABP_ParentItem_C* Item);
    void UnbindAttachOnGrounded(class ABP_ParentItem_C* Item, bool Remove);
    void AttachGrounded(class ABP_ParentItem_C* Target);
    void CheckStorageConflict(class ABP_ParentItem_C* Item, class UAC_Storage_C* Storage);
    void HandleStoredItemDestroyed(class AActor* DestroyedActor);
    void ExecuteUbergraph_AC_Storage(int32 EntryPoint);
    void ItemDetached__DelegateSignature(class ABP_ParentItem_C* Item);
    void ItemAttached__DelegateSignature(class ABP_ParentItem_C* Item);
}; // Size: 0x108

#endif
