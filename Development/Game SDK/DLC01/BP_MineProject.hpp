#ifndef UE4SS_SDK_BP_MineProject_HPP
#define UE4SS_SDK_BP_MineProject_HPP

class ABP_MineProject_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Drill;                                                // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Option1;                                              // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Option2;                                              // 0x0248 (size: 0x8)
    class UStaticMeshComponent* SelectionNeedle;                                      // 0x0250 (size: 0x8)
    class USceneComponent* WithdrawLocation;                                          // 0x0258 (size: 0x8)
    class UStaticMeshComponent* WithdrawButton;                                       // 0x0260 (size: 0x8)
    class UStaticMeshComponent* PercentMarker;                                        // 0x0268 (size: 0x8)
    class UBoxComponent* ConstructionCrateMaterials;                                  // 0x0270 (size: 0x8)
    class UStaticMeshComponent* ConstructButton;                                      // 0x0278 (size: 0x8)
    class UStaticMeshComponent* CrateLid;                                             // 0x0280 (size: 0x8)
    class UStaticMeshComponent* ConstructionCrate;                                    // 0x0288 (size: 0x8)
    class UTextRenderComponent* RequirementsText;                                     // 0x0290 (size: 0x8)
    class UTextRenderComponent* TextMat3;                                             // 0x0298 (size: 0x8)
    class UTextRenderComponent* TextMat2;                                             // 0x02A0 (size: 0x8)
    class UTextRenderComponent* TextMat1;                                             // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Board;                                                // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x02B8 (size: 0x8)
    TSubclassOf<class ABP_ParentResource_C> CurrentSelected;                          // 0x02C0 (size: 0x8)
    TArray<class TSubclassOf<ABP_ParentResource_C>> ResourceOptions;                  // 0x02C8 (size: 0x10)
    TArray<FS_ResourceClassAndWeight> Requirements;                                   // 0x02D8 (size: 0x10)
    bool Constructed?;                                                                // 0x02E8 (size: 0x1)
    TArray<FS_ResourceClassAndWeight> Contents;                                       // 0x02F0 (size: 0x10)
    TArray<class ABP_ParentResource_C*> CurrentResources;                             // 0x0300 (size: 0x10)
    float MaxMinedAmount;                                                             // 0x0310 (size: 0x4)
    float CurrentMinedAmount;                                                         // 0x0314 (size: 0x4)
    float MiningRatePerSec;                                                           // 0x0318 (size: 0x4)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void RemoveItemFromContentBox(class ABP_ParentResource_C* InputPin);
    void SetSelectionNeedle();
    void FindResourceMaterial(TSubclassOf<class ABP_ParentResource_C> Resource, class UStaticMesh*& StaticMesh, class UMaterialInterface*& Material);
    void ChangeSelector();
    void SpawnWithdraw();
    void UpdatePercentageDial();
    void MineTick();
    void Find Contents Index(TSubclassOf<class ABP_ParentResource_C> Class, int32& Index);
    void AddOrRemoveResource(class ABP_ParentResource_C* Resource, bool Add?);
    void UpdateRequirementTexts();
    void FindCurrentResourceWeight(TSubclassOf<class ABP_ParentResource_C> Class, float& Weight);
    void BuildComplete(bool Loading?);
    void DestroyRequiredResources();
    void ConditionsMet?(bool& Met?);
    void UserConstructionScript();
    void ActorPreSave();
    void ActorSaved();
    void ActorLoaded();
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void BndEvt__BP_MineProject_ConstructionCrateMaterials_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_MineProject_ConstructionCrateMaterials_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_MineProject(int32 EntryPoint);
}; // Size: 0x31C

#endif
