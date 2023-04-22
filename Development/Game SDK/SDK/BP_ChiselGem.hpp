#ifndef UE4SS_SDK_BP_ChiselGem_HPP
#define UE4SS_SDK_BP_ChiselGem_HPP

class ABP_ChiselGem_C : public ABP_ParentTool_C
{
    class UAC_Splitter_C* AC_Splitter;
    class UAC_Animator_C* AC_Animator;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void SplitGem(class ABP_ParentBar_C* Bar);
};

#endif
