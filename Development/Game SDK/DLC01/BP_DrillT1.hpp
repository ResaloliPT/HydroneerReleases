#ifndef UE4SS_SDK_BP_DrillT1_HPP
#define UE4SS_SDK_BP_DrillT1_HPP

class ABP_DrillT1_C : public ABP_ParentDrill_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0540 (size: 0x8)
    class UAC_Animator_C* AC_Animator1;                                               // 0x0548 (size: 0x8)
    class UStaticMeshComponent* Nub;                                                  // 0x0550 (size: 0x8)
    class UStaticMeshComponent* Ram;                                                  // 0x0558 (size: 0x8)

    void OverridePlayOneShotAnim();
    void ExecuteUbergraph_BP_DrillT1(int32 EntryPoint);
}; // Size: 0x560

#endif
