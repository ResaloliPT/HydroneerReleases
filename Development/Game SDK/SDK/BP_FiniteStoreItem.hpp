#ifndef UE4SS_SDK_BP_FiniteStoreItem_HPP
#define UE4SS_SDK_BP_FiniteStoreItem_HPP

class ABP_FiniteStoreItem_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* ItemLocks;
    class UStaticMeshComponent* StaticMesh;
    TSubclassOf<class ABP_ParentItem_C> ItemToSell;
    class ABP_ParentItem_C* SpawnedStoreItem;
    bool SoldItem?;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ActorPreSave();
    void ActorSaved();
    void ItemStored(class ABP_ParentItem_C* Item);
    void ReceiveBeginPlay();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void RestockItem();
    void CheckIfItemSold(const TArray<class ABP_ParentItem_C*>& Items);
    void ActorLoaded();
    void ExecuteUbergraph_BP_FiniteStoreItem(int32 EntryPoint);
};

#endif
