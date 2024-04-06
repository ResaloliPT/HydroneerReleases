#ifndef UE4SS_SDK_BP_LavaDrillHeavy_HPP
#define UE4SS_SDK_BP_LavaDrillHeavy_HPP

class ABP_LavaDrillHeavy_C : public ABP_ParentDrill_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0540 (size: 0x8)
    class UAC_Animator_C* AC_Animator2;                                               // 0x0548 (size: 0x8)
    class USceneComponent* RootBit3;                                                  // 0x0550 (size: 0x8)
    class USceneComponent* RootBit2;                                                  // 0x0558 (size: 0x8)
    class UStaticMeshComponent* DrillBit3;                                            // 0x0560 (size: 0x8)
    class UStaticMeshComponent* DrillBit2;                                            // 0x0568 (size: 0x8)
    class UStaticMeshComponent* DrillBit;                                             // 0x0570 (size: 0x8)
    class USceneComponent* RootBit1;                                                  // 0x0578 (size: 0x8)
    class UAC_Animator_C* AC_Animator1;                                               // 0x0580 (size: 0x8)
    class UC_LiftPoint_C* C_LiftPoint;                                                // 0x0588 (size: 0x8)
    class UStaticMeshComponent* DrillTop;                                             // 0x0590 (size: 0x8)
    class UStaticMeshComponent* Nub;                                                  // 0x0598 (size: 0x8)
    class UAudioComponent* DrillSound;                                                // 0x05A0 (size: 0x8)
    int32 RotStage;                                                                   // 0x05A8 (size: 0x4)
    class UNiagaraComponent* DigEffect;                                               // 0x05B0 (size: 0x8)
    FTimerHandle SpawnTimer;                                                          // 0x05B8 (size: 0x8)
    bool AnimActive?;                                                                 // 0x05C0 (size: 0x1)
    bool SpittingDirt?;                                                               // 0x05C1 (size: 0x1)

    float CalcDrillCooldown();
    void FindTracePivots(TArray<FVector>& Pivots);
    void LoopDirtSpawns(int32 Quality, float Weight);
    void OverrideDrillStop();
    void StartDrillEffect();
    void OverrideCraneLifted();
    void BeginSpawnDirt(int32 DirtQuality, float Weight);
    void OverridePlayOneShotAnim();
    void StopDrill();
    void ExecuteUbergraph_BP_LavaDrillHeavy(int32 EntryPoint);
}; // Size: 0x5C2

#endif
