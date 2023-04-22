#ifndef UE4SS_SDK_BP_Sickle_HPP
#define UE4SS_SDK_BP_Sickle_HPP

class ABP_Sickle_C : public ABP_ParentTool_C
{
    class UAC_Animator_C* AC_Animator;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
};

#endif
