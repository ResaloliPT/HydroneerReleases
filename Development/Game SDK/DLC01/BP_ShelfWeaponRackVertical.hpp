#ifndef UE4SS_SDK_BP_ShelfWeaponRackVertical_HPP
#define UE4SS_SDK_BP_ShelfWeaponRackVertical_HPP

class ABP_ShelfWeaponRackVertical_C : public ABP_ParentShelf_C
{
    class USC_ShelfLocation_C* SC_ShelfLocation4;                                     // 0x04E0 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation3;                                     // 0x04E8 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation2;                                     // 0x04F0 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation1;                                     // 0x04F8 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation;                                      // 0x0500 (size: 0x8)

    void SetAttachedMeshCollisionProfile(class UStaticMeshComponent* Mesh, FName CollisionProfile);
    void UserConstructionScript();
}; // Size: 0x508

#endif
