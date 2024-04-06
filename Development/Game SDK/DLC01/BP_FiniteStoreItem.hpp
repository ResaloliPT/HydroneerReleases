#ifndef UE4SS_SDK_BP_FiniteStoreItem_HPP
#define UE4SS_SDK_BP_FiniteStoreItem_HPP

class ABP_FiniteStoreItem_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* ItemLocks;                                            // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    TSubclassOf<class ABP_ParentItem_C> ItemToSell;                                   // 0x0238 (size: 0x8)
    class ABP_ParentItem_C* SpawnedStoreItem;                                         // 0x0240 (size: 0x8)
    bool SoldItem?;                                                                   // 0x0248 (size: 0x1)
    TEnumAsByte<E_CurrencyType::Type> Currency Type;                                  // 0x0249 (size: 0x1)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void FindWorldStoreConstructed(class ABP_WorldStoreConstructed_C*& WorldStoreConstructed);
    void UnLockItem();
    void LockItem();
    void OnCompleted_2B13B75B4B073E41E15E599E369D8E3C();
    void ActorPreSave();
    void ActorSaved();
    void ItemStored(class ABP_ParentItem_C* Item);
    void ReceiveBeginPlay();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void ActorLoaded();
    void SoldItem();
    void ExecuteUbergraph_BP_FiniteStoreItem(int32 EntryPoint);
}; // Size: 0x24A

#endif
