#ifndef UE4SS_SDK_BP_CreativeWand_HPP
#define UE4SS_SDK_BP_CreativeWand_HPP

class ABP_CreativeWand_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UParticleSystemComponent* ParticleSystem;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void Animate();
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void LMBDown(class AActor* Hit Actor);
    void ExecuteUbergraph_BP_CreativeWand(int32 EntryPoint);
};

#endif
