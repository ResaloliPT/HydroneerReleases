#ifndef UE4SS_SDK_BP_BuildStoneDoorway_HPP
#define UE4SS_SDK_BP_BuildStoneDoorway_HPP

class ABP_BuildStoneDoorway_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0490 (size: 0x8)
    class UStaticMeshComponent* Door;                                                 // 0x0498 (size: 0x8)
    bool DoorOpen?;                                                                   // 0x04A0 (size: 0x1)

    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void OverrideLoaded();
    void ExecuteUbergraph_BP_BuildStoneDoorway(int32 EntryPoint);
}; // Size: 0x4A1

#endif
