#ifndef UE4SS_SDK_BP_ParentShelf_HPP
#define UE4SS_SDK_BP_ParentShelf_HPP

class ABP_ParentShelf_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FS_ShelfItem> Accepted Items;
    FVector StoredItemBoxTrace;
    TArray<class USC_ShelfLocation_C*> ShelfLocations;
    TArray<FS_SavedShelfItem> SavedShelfItems;

    void ContainsSpecial?(FS_SavedShelfItem ItemInfo, int32& Index, bool& Contains?);
    void Attach Item(class USceneComponent* ShelfLocation, class ABP_ParentItem_C* Item, const FS_ShelfItem& S_ShelfItem);
    void Shelf Trace(TArray<FHitResult>& Hits);
    void TraceForStoredItems();
    void CanStore?(class ABP_ParentItem_C* Item, bool& CanStore?, class USC_ShelfLocation_C*& Location, FS_ShelfItem& ItemData);
    void OnCompleted_671D6CD54910B7E9A078748F04436CA4();
    void NewItemToShelf(class ABP_ParentItem_C* Item);
    void ActorLoaded();
    void ActorPreSave();
    void LoadItemToShelf(class ABP_ParentItem_C* Item, class USceneComponent* Location);
    void ExecuteUbergraph_BP_ParentShelf(int32 EntryPoint);
};

#endif
