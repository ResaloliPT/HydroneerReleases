#ifndef UE4SS_SDK_BP_LogicSmelter_HPP
#define UE4SS_SDK_BP_LogicSmelter_HPP

class ABP_LogicSmelter_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* LogicNub;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* Bar;
    class UStaticMeshComponent* ARM;
    class UParticleSystemComponent* PourParticle;
    class UStaticMeshComponent* LiquidMesh;
    class UBoxComponent* OreBox;
    class UParticleSystemComponent* FlameParticles;
    class UStaticMeshComponent* Door2;
    class UStaticMeshComponent* Door1;
    class UBoxComponent* Y+Box;
    float Timeline_1_Tip_94E748E74C0F968A13398B83E95E002C;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_94E748E74C0F968A13398B83E95E002C;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_NewTrack_0_09EEB7DC4D40DA927DF839A36F849DCE;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_09EEB7DC4D40DA927DF839A36F849DCE;
    class UTimelineComponent* Timeline_0;
    TEnumAsByte<E_MetalType::Type> CurrentLiquidType;
    float OreContent;
    TArray<class TSubclassOf<ABP_ParentResource_C>> AllowedItems;
    TEnumAsByte<E_LogicSmelterStages::Type> SmelterStage;
    class UAudioComponent* FlameSound;
    class ABP_ParentBar_C* SpawnedBar;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void SetNewLiquidType(TEnumAsByte<E_MetalType::Type> InputPin);
    void FindLiquidClass(class ABP_ParentResource_C* NewParam, TEnumAsByte<E_MetalType::Type>& Type);
    void SetLiquidHeight();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__Create Bar__EventFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OverrideLoaded();
    void BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void NewItemInPot(class ABP_ParentResource_C* Item);
    void OverridePickedup();
    void ReturnDurability(float DurabilityAmount);
    void RotateDoors(bool Open?);
    void CreateBar();
    void TipBar(bool Up?);
    void FindDurability(class ABP_ParentItem_C* Item);
    void PourParticles();
    void DoneRepair();
    void ToggleFlame(bool On?);
    void DropBar();
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void OverrideLogicIn(class USceneComponent* Component);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_LogicSmelter(int32 EntryPoint);
};

#endif
