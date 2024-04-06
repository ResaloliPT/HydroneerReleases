#ifndef UE4SS_SDK_BP_ConstructionHammer_HPP
#define UE4SS_SDK_BP_ConstructionHammer_HPP

class ABP_ConstructionHammer_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0458 (size: 0x8)
    bool Locking?;                                                                    // 0x0460 (size: 0x1)

    void ConstructItem(class ABP_ParentBuild_C* Item, class ABP_GameController_C* Controller, bool Lock?);
    void SwingTimer();
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void LMBUpWhileCarrying();
    void RMBUpWhileCarrying();
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void ExecuteUbergraph_BP_ConstructionHammer(int32 EntryPoint);
}; // Size: 0x461

#endif
