#ifndef UE4SS_SDK_BP_HarvesterT3_HPP
#define UE4SS_SDK_BP_HarvesterT3_HPP

class ABP_HarvesterT3_C : public ABP_ParentHarvester_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* FunnelShadow;
    class UStaticMeshComponent* Nub;

    void SpinTimer();
    void ToggleHarvester(bool On?);
    void ExecuteUbergraph_BP_HarvesterT3(int32 EntryPoint);
};

#endif
