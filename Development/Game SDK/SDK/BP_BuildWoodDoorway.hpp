#ifndef UE4SS_SDK_BP_BuildWoodDoorway_HPP
#define UE4SS_SDK_BP_BuildWoodDoorway_HPP

class ABP_BuildWoodDoorway_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* Door;
    bool DoorOpen?;

    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void OverrideLoaded();
    void ExecuteUbergraph_BP_BuildWoodDoorway(int32 EntryPoint);
};

#endif
