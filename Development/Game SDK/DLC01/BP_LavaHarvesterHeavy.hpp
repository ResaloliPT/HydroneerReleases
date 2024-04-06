#ifndef UE4SS_SDK_BP_LavaHarvesterHeavy_HPP
#define UE4SS_SDK_BP_LavaHarvesterHeavy_HPP

class ABP_LavaHarvesterHeavy_C : public ABP_ParentHarvester_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0540 (size: 0x8)
    class UNiagaraComponent* NS_HeavyLargeHarvester_Lava_Four;                        // 0x0548 (size: 0x8)
    class UStaticMeshComponent* Drum2;                                                // 0x0550 (size: 0x8)
    class UStaticMeshComponent* Drum1;                                                // 0x0558 (size: 0x8)
    class UBoxComponent* Y+Box;                                                       // 0x0560 (size: 0x8)
    class UStaticMeshComponent* NubLogic;                                             // 0x0568 (size: 0x8)
    class UStaticMeshComponent* CogSideRight;                                         // 0x0570 (size: 0x8)
    class UStaticMeshComponent* CogSideLeft;                                          // 0x0578 (size: 0x8)
    class UStaticMeshComponent* CogFrontRight;                                        // 0x0580 (size: 0x8)
    class UStaticMeshComponent* CogFrontLeft;                                         // 0x0588 (size: 0x8)
    class UStaticMeshComponent* DrumMiddle;                                           // 0x0590 (size: 0x8)
    class USceneComponent* WaterExit;                                                 // 0x0598 (size: 0x8)
    class UStaticMeshComponent* NubWater;                                             // 0x05A0 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x05A8 (size: 0x8)
    class UC_LiftPoint_C* C_LiftPoint;                                                // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* FunnelDepthFade;                                      // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* ChuteDepthFade;                                       // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* Nub;                                                  // 0x05C8 (size: 0x8)
    float StoredWater;                                                                // 0x05D0 (size: 0x4)
    bool TapOpen?;                                                                    // 0x05D4 (size: 0x1)

    void FindTracePivots(TArray<FVector>& Pivots);
    void CanOutputWater?(class ABP_ParentPipe_C* Pipe, bool& CanPass?);
    void WaterOut();
    void OverrideHarvestedItem(class ABP_ParentResource_C* Resource);
    void StartSpin();
    void StopSpin();
    void ToggleHarvester(bool On?);
    void OverrideCraneLifted();
    void OverrideLogicIn(class UPrimitiveComponent* Component, FString Logic);
    void ActorLoaded();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_LavaHarvesterHeavy(int32 EntryPoint);
}; // Size: 0x5D5

#endif
