#ifndef UE4SS_SDK_BP_ParentDrill_HPP
#define UE4SS_SDK_BP_ParentDrill_HPP

class ABP_ParentDrill_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVoxelSimpleInvokerComponent* VoxelSimpleInvoker;
    class UStaticMeshComponent* Light;
    class USceneComponent* DrillBottomLocation;
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;
    class USceneComponent* DirtSpawnPoint;
    class USceneComponent* SparksLocation;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* Lever;
    class USceneComponent* LeverRoot;
    class UAC_Durability_C* AC_Durability;
    class UBoxComponent* IntakeBox;
    bool On?;
    bool ReadyToDrill?;
    int32 MaxDrillingDepth;
    float DirtSpawnDelay;

    void LineTraceForVeins(TEnumAsByte<E_MetalType::Type>& VeinType);
    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    float CalcDrillCooldown();
    float CalcNewDurability();
    void DirtHitCheck(bool& HitDirt?, int32& DQA);
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void FindDurability(class ABP_ParentItem_C* Item);
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
    void DrillCooldown();
    void OverridePlayOneShotAnim();
    void ToggleLight(bool On?);
    void OverridePickedup();
    void ReturnDurability(float DurabilityAmount);
    void SpawnDirt(int32 DirtQuality, float Weight, TEnumAsByte<E_MetalType::Type> Vein);
    void DoneRepair();
    void OverrideDrillStop();
    void OverrideDrillStart();
    void OverrideEmptyWaterPipe();
    void ActorLoaded();
    void ExecuteUbergraph_BP_ParentDrill(int32 EntryPoint);
};

#endif
