#ifndef UE4SS_SDK_BP_ConstructionHammer_HPP
#define UE4SS_SDK_BP_ConstructionHammer_HPP

class ABP_ConstructionHammer_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    bool Locking?;

    void ConstructItem(class ABP_ParentBuild_C* Item, class ABP_GameController_C* Controller, bool Lock?);
    void SwingTimer();
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void LMBUpWhileCarrying();
    void RMBUpWhileCarrying();
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void ExecuteUbergraph_BP_ConstructionHammer(int32 EntryPoint);
};

#endif
