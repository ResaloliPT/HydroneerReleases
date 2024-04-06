#ifndef UE4SS_SDK_BP_GrindingWheel_HPP
#define UE4SS_SDK_BP_GrindingWheel_HPP

class ABP_GrindingWheel_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0490 (size: 0x8)
    class UStaticMeshComponent* GrindWheel;                                           // 0x0498 (size: 0x8)

    void GrindGem(const class ABP_ParentResource_C* UncutGem);
    void SpinWheel();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ExecuteUbergraph_BP_GrindingWheel(int32 EntryPoint);
}; // Size: 0x4A0

#endif
