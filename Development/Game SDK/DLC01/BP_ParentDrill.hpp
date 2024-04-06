#ifndef UE4SS_SDK_BP_ParentDrill_HPP
#define UE4SS_SDK_BP_ParentDrill_HPP

class ABP_ParentDrill_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UVoxelSimpleInvokerComponent* VoxelSimpleInvoker;                           // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* Light;                                                // 0x04D0 (size: 0x8)
    class USceneComponent* DrillBottomLocation;                                       // 0x04D8 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x04E0 (size: 0x8)
    class USceneComponent* DirtSpawnPoint;                                            // 0x04E8 (size: 0x8)
    class USceneComponent* SparksLocation;                                            // 0x04F0 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x04F8 (size: 0x8)
    class UStaticMeshComponent* Lever;                                                // 0x0500 (size: 0x8)
    class USceneComponent* LeverRoot;                                                 // 0x0508 (size: 0x8)
    class UAC_Durability_C* AC_Durability;                                            // 0x0510 (size: 0x8)
    class UBoxComponent* IntakeBox;                                                   // 0x0518 (size: 0x8)
    bool On?;                                                                         // 0x0520 (size: 0x1)
    bool ReadyToDrill?;                                                               // 0x0521 (size: 0x1)
    int32 MaxDrillingDepth;                                                           // 0x0524 (size: 0x4)
    float DirtSpawnDelay;                                                             // 0x0528 (size: 0x4)
    TEnumAsByte<E_Buffs::Type> SpeedBuff;                                             // 0x052C (size: 0x1)
    TEnumAsByte<E_Buffs::Type> OutputSizeBuff;                                        // 0x052D (size: 0x1)
    FTimerHandle DrillTimer;                                                          // 0x0530 (size: 0x8)
    bool Drilling?;                                                                   // 0x0538 (size: 0x1)
    float WeightMultiplier;                                                           // 0x053C (size: 0x4)

    float CalcSpawnWeight();
    void PostSpawnVelocities(class ABP_ParentItem_C* Item);
    void LineTraceForVeins(TEnumAsByte<E_MetalType::Type>& VeinType);
    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    float CalcDrillCooldown();
    float CalcNewDurability();
    void DirtHitCheck(bool& HitDirt?, int32& DQA);
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void FindDurability(class ABP_ParentItem_C* Item);
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void OverrideLiquidIn(class USceneComponent* Component, float RootPressure);
    void DrillCooldown();
    void OverridePlayOneShotAnim();
    void ToggleLight(bool On?);
    void OverridePickedup();
    void ReturnDurability(float DurabilityAmount);
    void SpawnDirt(int32 DirtQuality, float Weight, TEnumAsByte<E_MetalType::Type> Vein);
    void DoneRepair();
    void OverrideDrillStop();
    void OverrideDrillStart();
    void OverrideEmptyLiquidPipe();
    void ActorLoaded();
    void StartDrill();
    void StopDrill();
    void BeginSpawnDirt(int32 DirtQuality, float Weight);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_ParentDrill(int32 EntryPoint);
}; // Size: 0x540

#endif
