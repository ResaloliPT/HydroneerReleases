#ifndef UE4SS_SDK_BP_CreativeWand_HPP
#define UE4SS_SDK_BP_CreativeWand_HPP

class ABP_CreativeWand_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0458 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0460 (size: 0x8)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void Animate();
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void LMBDown(class AActor* Hit Actor);
    void ExecuteUbergraph_BP_CreativeWand(int32 EntryPoint);
}; // Size: 0x468

#endif
