#ifndef UE4SS_SDK_BP_ParentMasterwork_HPP
#define UE4SS_SDK_BP_ParentMasterwork_HPP

class ABP_ParentMasterwork_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class USceneComponent* AdditionalBuffer;                                          // 0x0238 (size: 0x8)
    class USceneComponent* ItemSpawnLocation;                                         // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Lever;                                                // 0x0248 (size: 0x8)
    class UStaticMeshComponent* LeverRoot;                                            // 0x0250 (size: 0x8)
    class USceneComponent* AdditionalBar2;                                            // 0x0258 (size: 0x8)
    class USceneComponent* AdditionalBar;                                             // 0x0260 (size: 0x8)
    class UBoxComponent* DesignBox;                                                   // 0x0268 (size: 0x8)
    class ABP_MasterworkDesign_C* DesignToMake;                                       // 0x0270 (size: 0x8)
    TArray<FS_ResourceEnumAndWeight> Contents;                                        // 0x0278 (size: 0x10)
    bool Ready?;                                                                      // 0x0288 (size: 0x1)
    float DelaySpawnItem;                                                             // 0x028C (size: 0x4)
    TArray<TEnumAsByte<E_Buffs::Type>> AppliedBuffs;                                  // 0x0290 (size: 0x10)
    bool VarySpawnPosition?;                                                          // 0x02A0 (size: 0x1)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void IsBuffed?(bool& Buffed?);
    void CheckForAchievements();
    void BounceItemOut(class ABP_ParentItem_C* Item);
    void PostSpawnItem();
    void SpawnItem(TSubclassOf<class AActor> Class);
    void SpitOutBars(bool TrySpitBuffer?);
    void RemoveMatsFromContents();
    void Add to Contents(FS_ResourceEnumAndWeight Resource);
    void IsClassInOurRequirements?(TSubclassOf<class ABP_ParentResource_C> Resource, bool& IsRequired?, TEnumAsByte<E_MetalType::Type>& Type);
    void FindWeightNeededOfSpecific(TEnumAsByte<E_MetalType::Type> Type, float& Weight);
    void Has All Required Contents?(bool& HasAllRequirements?);
    void BndEvt__BP_ParentMasterwork_DesignBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_ParentMasterwork_DesignBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OverrideSetLiquidMeshVis(bool Visibility);
    void ActorLoaded();
    void ResetAll();
    void ItemAddedToCrucible(class AActor* Actor);
    void ActorSaved();
    void OverridePlayAnimAndSounds();
    void OverridePlayEmptyingAnimAndSounds();
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void ActorPreSave();
    void ExecuteUbergraph_BP_ParentMasterwork(int32 EntryPoint);
}; // Size: 0x2A1

#endif
