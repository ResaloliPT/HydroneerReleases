#ifndef UE4SS_SDK_BP_HarvesterT1_HPP
#define UE4SS_SDK_BP_HarvesterT1_HPP

class ABP_HarvesterT1_C : public ABP_ParentHarvester_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0540 (size: 0x8)
    class UStaticMeshComponent* Drum4;                                                // 0x0548 (size: 0x8)
    class UStaticMeshComponent* Drum3;                                                // 0x0550 (size: 0x8)
    class UStaticMeshComponent* Nub;                                                  // 0x0558 (size: 0x8)
    FTimerHandle SpinTimeHandle;                                                      // 0x0560 (size: 0x8)

    void ToggleHarvester(bool On?);
    void Spinner();
    void ExecuteUbergraph_BP_HarvesterT1(int32 EntryPoint);
}; // Size: 0x568

#endif
