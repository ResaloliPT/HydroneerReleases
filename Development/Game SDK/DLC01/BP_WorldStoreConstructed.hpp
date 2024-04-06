#ifndef UE4SS_SDK_BP_WorldStoreConstructed_HPP
#define UE4SS_SDK_BP_WorldStoreConstructed_HPP

class ABP_WorldStoreConstructed_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Button;                                               // 0x0238 (size: 0x8)
    class UStaticMeshComponent* ConstructionCrate;                                    // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Board;                                                // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Store;                                                // 0x0250 (size: 0x8)
    class UStaticMeshComponent* CrateLid;                                             // 0x0258 (size: 0x8)
    class UStaticMeshComponent* CrateIcon;                                            // 0x0260 (size: 0x8)
    class UTextRenderComponent* TextMat3;                                             // 0x0268 (size: 0x8)
    class UTextRenderComponent* TextMat2;                                             // 0x0270 (size: 0x8)
    class UTextRenderComponent* TextMat1;                                             // 0x0278 (size: 0x8)
    class UTextRenderComponent* RequirementsText;                                     // 0x0280 (size: 0x8)
    class UBoxComponent* ConstructionCrateMaterials;                                  // 0x0288 (size: 0x8)
    bool Constructed?;                                                                // 0x0290 (size: 0x1)
    TEnumAsByte<E_ConstructionStoreType::Type> StoreType;                             // 0x0291 (size: 0x1)
    TArray<FS_ResourceClassAndWeight> Requirements;                                   // 0x0298 (size: 0x10)
    TArray<FS_ResourceClassAndWeight> Contents;                                       // 0x02A8 (size: 0x10)
    TArray<class ABP_ParentResource_C*> CurrentResources;                             // 0x02B8 (size: 0x10)
    class ULevelStreamingDynamic* CurrentStreamedLevel;                               // 0x02C8 (size: 0x8)
    TArray<class TSubclassOf<ABP_ParentItem_C>> FiniteItemsSold;                      // 0x02D0 (size: 0x10)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void RemoveResourceFromContentBox(class ABP_ParentResource_C* InputPin);
    void Find Contents Index(TSubclassOf<class ABP_ParentResource_C> Class, bool& Found, int32& Index);
    void DestroyRequiredResources();
    void BuildComplete(bool Loading?);
    void PrepareForBuilding(TEnumAsByte<E_ConstructionStoreType::Type> StoreType);
    void FindFunctionlessItem(FString Item String, TEnumAsByte<E_Functionless::Type>& FunctionlessType);
    void FindCurrentResourceWeight(TSubclassOf<class ABP_ParentResource_C> Class, float& Weight);
    void UpdateRequirementTexts();
    void ConditionsMet?(bool& Met?);
    void AddOrRemoveResource(class ABP_ParentResource_C* Resource, bool Add?);
    void ToggleConstructionBoxGhosting(bool Show?);
    void ActorPreSave();
    void ActorSaved();
    void BndEvt__BP_WorldStoreConstructed_ConstructionCrateMaterials_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ActorLoaded();
    void BndEvt__BP_WorldStoreConstructed_ConstructionCrateMaterials_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void ExecuteUbergraph_BP_WorldStoreConstructed(int32 EntryPoint);
}; // Size: 0x2E0

#endif
