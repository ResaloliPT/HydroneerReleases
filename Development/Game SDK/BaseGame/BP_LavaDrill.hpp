#ifndef UE4SS_SDK_BP_LavaDrill_HPP
#define UE4SS_SDK_BP_LavaDrill_HPP

class ABP_LavaDrill_C : public ABP_ParentDrill_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0540 (size: 0x8)
    class UStaticMeshComponent* PistonWheel;                                          // 0x0548 (size: 0x8)
    class UStaticMeshComponent* PistonBottom;                                         // 0x0550 (size: 0x8)
    class UStaticMeshComponent* PistonTop;                                            // 0x0558 (size: 0x8)
    class UStaticMeshComponent* Nub;                                                  // 0x0560 (size: 0x8)
    class UStaticMeshComponent* DrillBit;                                             // 0x0568 (size: 0x8)
    class UAudioComponent* DrillSound;                                                // 0x0570 (size: 0x8)
    FTimerHandle DrillSpinTimerHandle;                                                // 0x0578 (size: 0x8)
    float TimeStopped;                                                                // 0x0580 (size: 0x4)
    float TimeStarted;                                                                // 0x0584 (size: 0x4)
    float TimeElapsed;                                                                // 0x0588 (size: 0x4)

    void OverrideDrillStart();
    void OverrideDrillStop();
    void AnimTimer();
    void ExecuteUbergraph_BP_LavaDrill(int32 EntryPoint);
}; // Size: 0x58C

#endif
