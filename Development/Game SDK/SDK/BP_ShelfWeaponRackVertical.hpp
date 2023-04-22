#ifndef UE4SS_SDK_BP_ShelfWeaponRackVertical_HPP
#define UE4SS_SDK_BP_ShelfWeaponRackVertical_HPP

class ABP_ShelfWeaponRackVertical_C : public ABP_ParentShelf_C
{
    class USC_ShelfLocation_C* SC_ShelfLocation4;
    class USC_ShelfLocation_C* SC_ShelfLocation3;
    class USC_ShelfLocation_C* SC_ShelfLocation2;
    class USC_ShelfLocation_C* SC_ShelfLocation1;
    class USC_ShelfLocation_C* SC_ShelfLocation;

    void SetAttachedMeshCollisionProfile(class UStaticMeshComponent* Mesh, FName CollisionProfile);
    void UserConstructionScript();
};

#endif
