#ifndef UE4SS_SDK_BP_BuildStoneDoorway_HPP
#define UE4SS_SDK_BP_BuildStoneDoorway_HPP

class ABP_BuildStoneDoorway_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* Door;
    bool DoorOpen?;

    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void OverrideLoaded();
    void ExecuteUbergraph_BP_BuildStoneDoorway(int32 EntryPoint);
};

#endif
