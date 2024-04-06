#ifndef UE4SS_SDK_BP_ShelfSafe_HPP
#define UE4SS_SDK_BP_ShelfSafe_HPP

class ABP_ShelfSafe_C : public ABP_ParentShelf_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USC_ShelfLocation_C* SC_ShelfLocation7;
    class USC_ShelfLocation_C* SC_ShelfLocation6;
    class USC_ShelfLocation_C* SC_ShelfLocation5;
    class USC_ShelfLocation_C* SC_ShelfLocation4;
    class USC_ShelfLocation_C* SC_ShelfLocation3;
    class USC_ShelfLocation_C* SC_ShelfLocation2;
    class USC_ShelfLocation_C* SC_ShelfLocation1;
    class USC_ShelfLocation_C* SC_ShelfLocation;
    class UStaticMeshComponent* Shelves;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* Door;
    bool DoorOpen?;

    void UserConstructionScript();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ExecuteUbergraph_BP_ShelfSafe(int32 EntryPoint);
};

#endif
