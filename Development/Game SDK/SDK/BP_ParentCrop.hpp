#ifndef UE4SS_SDK_BP_ParentCrop_HPP
#define UE4SS_SDK_BP_ParentCrop_HPP

class ABP_ParentCrop_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* CropVisual;
    class UStaticMeshComponent* StaticMesh;
    bool PlacedDown?;
    class UMaterialInterface* OriginalMat;
    TSubclassOf<class ABP_ParentVeg_C> VegToSpawn;
    TSubclassOf<class ABP_ParentSeedBag_C> SeedBag;
    int32 TimesToWater;
    float GrowthRemaining;
    float GrowthTotal;
    float WaterTime;
    float WaterTimeRemaining;
    float LightValue;
    float LightThreshold;
    FTimerHandle GrowthTimer;
    FTimerHandle GrowthCheckTimer;
    FTimerHandle WaterTimer;
    class UNiagaraSystem* DestroyParticle;
    TArray<int32> HighlightArray;
    bool AboveGroundCrop?;
    class ADirectionalLight* Sun;
    TMap<AActor*, float> Lights;
    int32 VegSpawnCount;
    class ABP_DayNightCycle_C* DayNight;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void CanGrow(bool& Result);
    void HandleTimeChange(float HourDelta, float ActualSecondsDelta);
    void SetDayNightRef();
    void CheckHasSunlight(bool& HasSunlight?);
    void UpdateLight(const class AActor*& Light, const float& LightValue);
    void GrowPlant(float Growth);
    void TryAttachToFoundation(TArray<class AActor*>& Foundations);
    void FindAttachedCrops();
    void SetDefaultCollision();
    float GetWaterRatio();
    float GetGrowthRatio();
    void DestroyCrop();
    void ResetWaterTimeRemaining();
    void CalcWaterTime();
    void WaterTimerComplete();
    void InitWaterTimer();
    void GrowthCheck();
    void InitGrowthCheckTimer();
    void GrowthTimerComplete();
    void InitGrowthTimer();
    void LoadedFindFoundation();
    void BPI_GetHighlightArray(TArray<int32>& HighlightArray);
    void BPI_SetHighlightArray(TArray<int32>& HighlightArray, bool& Result);
    void BPI_GetCanHighlight(bool& CanHighlight?);
    void UserConstructionScript();
    void OnCompleted_9EE516934F983A203E512EBE8969D80F();
    void WaterParticleHit();
    void HasNoWater();
    void HasWater();
    void ActorSaved();
    void PlacedDown();
    void ActorLoaded();
    void SpawnVeg();
    void ActorPreSave();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ParentCrop(int32 EntryPoint);
};

#endif
