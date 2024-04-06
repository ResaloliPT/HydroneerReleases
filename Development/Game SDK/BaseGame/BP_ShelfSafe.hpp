#ifndef UE4SS_SDK_BP_ShelfSafe_HPP
#define UE4SS_SDK_BP_ShelfSafe_HPP

class ABP_ShelfSafe_C : public ABP_ParentShelf_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation7;                                     // 0x04E8 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation6;                                     // 0x04F0 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation5;                                     // 0x04F8 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation4;                                     // 0x0500 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation3;                                     // 0x0508 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation2;                                     // 0x0510 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation1;                                     // 0x0518 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation;                                      // 0x0520 (size: 0x8)
    class UStaticMeshComponent* Shelves;                                              // 0x0528 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0530 (size: 0x8)
    class UStaticMeshComponent* Door;                                                 // 0x0538 (size: 0x8)
    bool DoorOpen?;                                                                   // 0x0540 (size: 0x1)

    void UserConstructionScript();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ExecuteUbergraph_BP_ShelfSafe(int32 EntryPoint);
}; // Size: 0x541

#endif
