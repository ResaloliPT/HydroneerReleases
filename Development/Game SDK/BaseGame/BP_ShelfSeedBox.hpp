#ifndef UE4SS_SDK_BP_ShelfSeedBox_HPP
#define UE4SS_SDK_BP_ShelfSeedBox_HPP

class ABP_ShelfSeedBox_C : public ABP_ParentShelf_C
{
    class USC_ShelfLocation_C* SC_ShelfLocation9;                                     // 0x04E0 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation8;                                     // 0x04E8 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation7;                                     // 0x04F0 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation6;                                     // 0x04F8 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation5;                                     // 0x0500 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation4;                                     // 0x0508 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation3;                                     // 0x0510 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation2;                                     // 0x0518 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation1;                                     // 0x0520 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation;                                      // 0x0528 (size: 0x8)

    void SetAttachedMeshCollisionProfile(class UStaticMeshComponent* Mesh, FName CollisionProfile);
    void UserConstructionScript();
}; // Size: 0x530

#endif
