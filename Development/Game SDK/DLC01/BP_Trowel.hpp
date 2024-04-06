#ifndef UE4SS_SDK_BP_Trowel_HPP
#define UE4SS_SDK_BP_Trowel_HPP

class ABP_Trowel_C : public ABP_ParentTool_C
{
    class UAC_Animator_C* AC_Animator;                                                // 0x0450 (size: 0x8)
    float Pitch Multiplier;                                                           // 0x0458 (size: 0x4)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
}; // Size: 0x45C

#endif
