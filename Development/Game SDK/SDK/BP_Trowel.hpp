#ifndef UE4SS_SDK_BP_Trowel_HPP
#define UE4SS_SDK_BP_Trowel_HPP

class ABP_Trowel_C : public ABP_ParentTool_C
{
    class UAC_Animator_C* AC_Animator;
    float Pitch Multiplier;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
};

#endif
