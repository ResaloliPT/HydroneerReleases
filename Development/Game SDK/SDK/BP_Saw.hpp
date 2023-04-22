#ifndef UE4SS_SDK_BP_Saw_HPP
#define UE4SS_SDK_BP_Saw_HPP

class ABP_Saw_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Splitter_C* AC_Splitter;
    class UAC_Animator_C* AC_Animator;

    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void SawObject(class ABP_ParentBar_C* Bar);
    void Animate();
    void ExecuteUbergraph_BP_Saw(int32 EntryPoint);
};

#endif
