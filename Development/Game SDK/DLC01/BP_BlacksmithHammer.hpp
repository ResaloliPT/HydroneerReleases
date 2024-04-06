#ifndef UE4SS_SDK_BP_BlacksmithHammer_HPP
#define UE4SS_SDK_BP_BlacksmithHammer_HPP

class ABP_BlacksmithHammer_C : public ABP_ParentTool_C
{
    class UAC_Animator_C* AC_Animator;                                                // 0x0450 (size: 0x8)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
}; // Size: 0x458

#endif
