#ifndef UE4SS_SDK_BP_DrillT2_HPP
#define UE4SS_SDK_BP_DrillT2_HPP

class ABP_DrillT2_C : public ABP_ParentDrill_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0540 (size: 0x8)
    class UStaticMeshComponent* Nub;                                                  // 0x0548 (size: 0x8)
    class UStaticMeshComponent* DrillBit;                                             // 0x0550 (size: 0x8)
    class UAudioComponent* DrillSound;                                                // 0x0558 (size: 0x8)
    FTimerHandle DrillSpinTimerHandle;                                                // 0x0560 (size: 0x8)

    void OverrideDrillStart();
    void OverrideDrillStop();
    void OverridePickedup();
    void ExecuteUbergraph_BP_DrillT2(int32 EntryPoint);
}; // Size: 0x568

#endif
