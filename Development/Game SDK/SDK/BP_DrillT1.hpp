#ifndef UE4SS_SDK_BP_DrillT1_HPP
#define UE4SS_SDK_BP_DrillT1_HPP

class ABP_DrillT1_C : public ABP_ParentDrill_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator1;
    class UStaticMeshComponent* Nub;
    class UStaticMeshComponent* Ram;

    void OverridePlayOneShotAnim();
    void ExecuteUbergraph_BP_DrillT1(int32 EntryPoint);
};

#endif
