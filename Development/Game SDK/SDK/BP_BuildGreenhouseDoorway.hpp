#ifndef UE4SS_SDK_BP_BuildGreenhouseDoorway_HPP
#define UE4SS_SDK_BP_BuildGreenhouseDoorway_HPP

class ABP_BuildGreenhouseDoorway_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* Door;
    bool DoorOpen?;

    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ExecuteUbergraph_BP_BuildGreenhouseDoorway(int32 EntryPoint);
};

#endif
