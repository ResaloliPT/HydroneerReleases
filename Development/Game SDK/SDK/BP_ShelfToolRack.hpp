#ifndef UE4SS_SDK_BP_ShelfToolRack_HPP
#define UE4SS_SDK_BP_ShelfToolRack_HPP

class ABP_ShelfToolRack_C : public ABP_ParentShelf_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USC_ShelfLocation_C* SC_ShelfLocation3;
    class USC_ShelfLocation_C* SC_ShelfLocation2;
    class USC_ShelfLocation_C* SC_ShelfLocation1;
    class USC_ShelfLocation_C* SC_ShelfLocation;

    void SetAttachedMeshCollisionProfile(class UStaticMeshComponent* Mesh, FName CollisionProfile);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ShelfToolRack(int32 EntryPoint);
};

#endif
