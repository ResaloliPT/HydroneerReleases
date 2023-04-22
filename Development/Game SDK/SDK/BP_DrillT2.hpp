#ifndef UE4SS_SDK_BP_DrillT2_HPP
#define UE4SS_SDK_BP_DrillT2_HPP

class ABP_DrillT2_C : public ABP_ParentDrill_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Nub;
    class UStaticMeshComponent* DrillBit;
    class UAudioComponent* DrillSound;
    FTimerHandle DrillSpinTimerHandle;

    void OverrideDrillStart();
    void OverrideDrillStop();
    void OverridePickedup();
    void ExecuteUbergraph_BP_DrillT2(int32 EntryPoint);
};

#endif
