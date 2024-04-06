#ifndef UE4SS_SDK_BP_LogicSmelter_HPP
#define UE4SS_SDK_BP_LogicSmelter_HPP

class ABP_LogicSmelter_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UNiagaraComponent* NS_Ore_Bubbling;                                         // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* LogicNub;                                             // 0x04C8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* Bar;                                                  // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* ARM;                                                  // 0x04E0 (size: 0x8)
    class UParticleSystemComponent* PourParticle;                                     // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* LiquidMesh;                                           // 0x04F0 (size: 0x8)
    class UBoxComponent* OreBox;                                                      // 0x04F8 (size: 0x8)
    class UParticleSystemComponent* FlameParticles;                                   // 0x0500 (size: 0x8)
    class UStaticMeshComponent* Door2;                                                // 0x0508 (size: 0x8)
    class UStaticMeshComponent* Door1;                                                // 0x0510 (size: 0x8)
    class UBoxComponent* Y+Box;                                                       // 0x0518 (size: 0x8)
    float Timeline_1_Tip_94E748E74C0F968A13398B83E95E002C;                            // 0x0520 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_94E748E74C0F968A13398B83E95E002C; // 0x0524 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0528 (size: 0x8)
    float Timeline_0_NewTrack_0_09EEB7DC4D40DA927DF839A36F849DCE;                     // 0x0530 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_09EEB7DC4D40DA927DF839A36F849DCE; // 0x0534 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0538 (size: 0x8)
    TEnumAsByte<E_MetalType::Type> CurrentLiquidType;                                 // 0x0540 (size: 0x1)
    float OreContent;                                                                 // 0x0544 (size: 0x4)
    TArray<class TSubclassOf<ABP_ParentResource_C>> AllowedItems;                     // 0x0548 (size: 0x10)
    TEnumAsByte<E_LogicSmelterStages::Type> SmelterStage;                             // 0x0558 (size: 0x1)
    class UAudioComponent* FlameSound;                                                // 0x0560 (size: 0x8)
    class ABP_ParentBar_C* SpawnedBar;                                                // 0x0568 (size: 0x8)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void SetNewLiquidType(TEnumAsByte<E_MetalType::Type> InputPin);
    void FindLiquidClass(class ABP_ParentResource_C* NewParam, TEnumAsByte<E_MetalType::Type>& Type);
    void SetLiquidHeight();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__Create Bar__EventFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void DoneRepair();
    void FindDurability(class ABP_ParentItem_C* Item);
    void ReturnDurability(float DurabilityAmount);
    void OverridePickedup();
    void OverrideLoaded();
    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void BndEvt__OreBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void NewItemInPot(class ABP_ParentResource_C* Item);
    void RotateDoors(bool Open?);
    void CreateBar();
    void TipBar(bool Up?);
    void PourParticles();
    void ToggleFlame(bool On?);
    void DropBar();
    void OverrideLogicIn(class USceneComponent* Component);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_LogicSmelter(int32 EntryPoint);
}; // Size: 0x570

#endif
