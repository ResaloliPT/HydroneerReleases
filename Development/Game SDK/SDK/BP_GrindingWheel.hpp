#ifndef UE4SS_SDK_BP_GrindingWheel_HPP
#define UE4SS_SDK_BP_GrindingWheel_HPP

class ABP_GrindingWheel_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* GrindWheel;

    void GrindGem(const class ABP_ParentResource_C* UncutGem);
    void SpinWheel();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ExecuteUbergraph_BP_GrindingWheel(int32 EntryPoint);
};

#endif
