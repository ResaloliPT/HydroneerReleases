#ifndef UE4SS_SDK_BP_ParentHarvester_HPP
#define UE4SS_SDK_BP_ParentHarvester_HPP

class ABP_ParentHarvester_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Drum2;
    class UStaticMeshComponent* Drum1;
    class USceneComponent* SpawnLocation;
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;
    class UBoxComponent* Harvesting;
    class USceneComponent* SparksLocation;
    class UBoxComponent* IntakeBox;
    class UAC_Durability_C* AC_Durability;
    FTimerHandle SpinTimerHandle;
    class UAudioComponent* HarvesterSound;
    int32 MaxDrillingDepth;
    class USoundBase* Harvesting Sound;
    class USoundBase* Crushing Sound;
    class UParticleSystemComponent* HarvestingDirtCloud;
    class UNiagaraComponent* HarvestingParticles;

    void CheckForBlockingResources();
    void CalcPressureBoost(int32 Quality, int32& QualityOut);
    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void OnCompleted_F7B2E75E4468FB2AFF0507BF1AEBE14B();
    void DoneRepair();
    void ReturnDurability(float DurabilityAmount);
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void FindDurability(class ABP_ParentItem_C* Item);
    void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
    void OverrideEmptyWaterPipe();
    void OverridePickedup();
    void ToggleHarvester(bool On?);
    void SpinTimer();
    void BndEvt__Harvesting_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void RefreshHarvestingCollision();
    void ActorLoaded();
    void ExecuteUbergraph_BP_ParentHarvester(int32 EntryPoint);
};

#endif
