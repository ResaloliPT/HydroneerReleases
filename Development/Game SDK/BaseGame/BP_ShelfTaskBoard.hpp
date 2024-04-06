#ifndef UE4SS_SDK_BP_ShelfTaskBoard_HPP
#define UE4SS_SDK_BP_ShelfTaskBoard_HPP

class ABP_ShelfTaskBoard_C : public ABP_ParentShelf_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation1;                                     // 0x04E8 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation;                                      // 0x04F0 (size: 0x8)
    class USceneComponent* Loc2Root;                                                  // 0x04F8 (size: 0x8)
    class USceneComponent* Loc1Root;                                                  // 0x0500 (size: 0x8)

    void SetAttachedMeshCollisionProfile(class UStaticMeshComponent* Mesh, FName CollisionProfile);
    void UserConstructionScript();
    void OverrideNewItemToShelf(class ABP_ParentItem_C* Item);
    void ExecuteUbergraph_BP_ShelfTaskBoard(int32 EntryPoint);
}; // Size: 0x508

#endif
