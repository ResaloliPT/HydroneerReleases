#ifndef UE4SS_SDK_BP_DrillT3_HPP
#define UE4SS_SDK_BP_DrillT3_HPP

class ABP_DrillT3_C : public ABP_ParentDrill_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Nub;
    class UStaticMeshComponent* DrillBit;
    class UAudioComponent* DrillSound;
    FTimerHandle DrillSpinTimerHandle;

    void OverrideDrillStart();
    void OverrideDrillStop();
    void AnimTimer();
    void ExecuteUbergraph_BP_DrillT3(int32 EntryPoint);
};

#endif
