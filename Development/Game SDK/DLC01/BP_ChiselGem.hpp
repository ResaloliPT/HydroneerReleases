#ifndef UE4SS_SDK_BP_ChiselGem_HPP
#define UE4SS_SDK_BP_ChiselGem_HPP

class ABP_ChiselGem_C : public ABP_ParentTool_C
{
    class UAC_Splitter_C* AC_Splitter;                                                // 0x0450 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0458 (size: 0x8)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void SplitGem(class ABP_ParentBar_C* Bar);
}; // Size: 0x460

#endif
