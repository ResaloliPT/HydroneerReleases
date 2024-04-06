#ifndef UE4SS_SDK_BP_Saw_HPP
#define UE4SS_SDK_BP_Saw_HPP

class ABP_Saw_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UAC_Splitter_C* AC_Splitter;                                                // 0x0458 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0460 (size: 0x8)

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void Animate();
    void ExecuteUbergraph_BP_Saw(int32 EntryPoint);
}; // Size: 0x468

#endif
