#ifndef UE4SS_SDK_BP_ParentCrop_HPP
#define UE4SS_SDK_BP_ParentCrop_HPP

class ABP_ParentCrop_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* CropVisual;                                           // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    bool PlacedDown?;                                                                 // 0x0238 (size: 0x1)
    class UMaterialInterface* OriginalMat;                                            // 0x0240 (size: 0x8)
    TSubclassOf<class ABP_ParentVeg_C> VegToSpawn;                                    // 0x0248 (size: 0x8)
    TSubclassOf<class ABP_ParentSeedBag_C> SeedBag;                                   // 0x0250 (size: 0x8)
    int32 TimesToWater;                                                               // 0x0258 (size: 0x4)
    float GrowthRemaining;                                                            // 0x025C (size: 0x4)
    float GrowthTotal;                                                                // 0x0260 (size: 0x4)
    float WaterTime;                                                                  // 0x0264 (size: 0x4)
    float WaterTimeRemaining;                                                         // 0x0268 (size: 0x4)
    float LightValue;                                                                 // 0x026C (size: 0x4)
    float LightThreshold;                                                             // 0x0270 (size: 0x4)
    FTimerHandle GrowthTimer;                                                         // 0x0278 (size: 0x8)
    FTimerHandle GrowthCheckTimer;                                                    // 0x0280 (size: 0x8)
    FTimerHandle WaterTimer;                                                          // 0x0288 (size: 0x8)
    class UNiagaraSystem* DestroyParticle;                                            // 0x0290 (size: 0x8)
    TArray<int32> HighlightArray;                                                     // 0x0298 (size: 0x10)
    bool AboveGroundCrop?;                                                            // 0x02A8 (size: 0x1)
    class ADirectionalLight* Sun;                                                     // 0x02B0 (size: 0x8)
    TMap<AActor*, float> Lights;                                                      // 0x02B8 (size: 0x50)
    int32 VegSpawnCount;                                                              // 0x0308 (size: 0x4)
    class ABP_DayNightCycle_C* DayNight;                                              // 0x0310 (size: 0x8)

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
    void HasNoWater();
    void HasWater();
    void ActorSaved();
    void PlacedDown();
    void ActorLoaded();
    void SpawnVeg();
    void ActorPreSave();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ParentCrop(int32 EntryPoint);
}; // Size: 0x318

#endif
