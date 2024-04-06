#ifndef UE4SS_SDK_AC_Storage_HPP
#define UE4SS_SDK_AC_Storage_HPP

class UAC_Storage_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FTimerHandle StorageTimerHandle;
    TArray<class ABP_ParentItem_C*> InStorageZone;
    TArray<class ABP_ParentItem_C*> Stored;
    TEnumAsByte<E_PhyReact::Type> LockedPhysicalReaction;
    FAC_Storage_CItemAttached ItemAttached;
    void ItemAttached();
    FAC_Storage_CItemDetached ItemDetached;
    void ItemDetached();

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
    void UnbindAttachOnGrounded(class ABP_ParentItem_C* Item);
    void AttachGrounded(class ABP_ParentItem_C* Target);
    void CheckStorageConflict(class ABP_ParentItem_C* Item, class UAC_Storage_C* Storage);
    void ExecuteUbergraph_AC_Storage(int32 EntryPoint);
    void ItemDetached__DelegateSignature();
    void ItemAttached__DelegateSignature();
};

#endif
