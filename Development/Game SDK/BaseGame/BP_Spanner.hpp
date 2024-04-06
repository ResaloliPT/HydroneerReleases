#ifndef UE4SS_SDK_BP_Spanner_HPP
#define UE4SS_SDK_BP_Spanner_HPP

class ABP_Spanner_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0458 (size: 0x8)
    class UAC_Finite_C* AC_Finite;                                                    // 0x0460 (size: 0x8)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void FindDurability(class ABP_ParentItem_C* Item);
    void ReturnDurability(float DurabilityAmount);
    void DoneRepair();
    void OverrideAnimFinished();
    void OverrideHit(class AActor* OtherActor);
    void ExecuteUbergraph_BP_Spanner(int32 EntryPoint);
}; // Size: 0x468

#endif
