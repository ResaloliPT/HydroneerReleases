#ifndef UE4SS_SDK_BP_ParentHarvester_HPP
#define UE4SS_SDK_BP_ParentHarvester_HPP

class ABP_ParentHarvester_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class USceneComponent* SpawnLocation;                                             // 0x04C8 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x04D0 (size: 0x8)
    class UBoxComponent* Harvesting;                                                  // 0x04D8 (size: 0x8)
    class USceneComponent* SparksLocation;                                            // 0x04E0 (size: 0x8)
    class UBoxComponent* IntakeBox;                                                   // 0x04E8 (size: 0x8)
    class UAC_Durability_C* AC_Durability;                                            // 0x04F0 (size: 0x8)
    class UAudioComponent* HarvesterSound;                                            // 0x04F8 (size: 0x8)
    int32 MaxDrillingDepth;                                                           // 0x0500 (size: 0x4)
    class USoundBase* Harvesting Sound;                                               // 0x0508 (size: 0x8)
    class USoundBase* Crushing Sound;                                                 // 0x0510 (size: 0x8)
    class UParticleSystemComponent* HarvestingDirtCloud;                              // 0x0518 (size: 0x8)
    class UNiagaraComponent* HarvestingParticles;                                     // 0x0520 (size: 0x8)
    TArray<class TSubclassOf<ABP_ParentResource_C>> HarvestingResource;               // 0x0528 (size: 0x10)
    TEnumAsByte<E_Buffs::Type> SizeBoostBuff;                                         // 0x0538 (size: 0x1)
    TEnumAsByte<E_Buffs::Type> VeinBoostBuff;                                         // 0x0539 (size: 0x1)

    void CheckForBlockingResources();
    void CalcPressureBoost(int32 Quality, int32& QualityOut);
    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void OnCompleted_F7B2E75E4468FB2AFF0507BF1AEBE14B();
    void DoneRepair();
    void ReturnDurability(float DurabilityAmount);
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void FindDurability(class ABP_ParentItem_C* Item);
    void OverrideLiquidIn(class USceneComponent* Component, float RootPressure);
    void OverrideEmptyLiquidPipe();
    void OverridePickedup();
    void ToggleHarvester(bool On?);
    void BndEvt__Harvesting_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void RefreshHarvestingCollision();
    void ActorLoaded();
    void OverrideNewLiquid();
    void OverrideHarvestedItem(class ABP_ParentResource_C* Resource);
    void ExecuteUbergraph_BP_ParentHarvester(int32 EntryPoint);
}; // Size: 0x53A

#endif
