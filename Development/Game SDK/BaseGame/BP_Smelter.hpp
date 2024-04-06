#ifndef UE4SS_SDK_BP_Smelter_HPP
#define UE4SS_SDK_BP_Smelter_HPP

class ABP_Smelter_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UNiagaraComponent* NS_Smelter_Fire;                                         // 0x0490 (size: 0x8)
    class UNiagaraComponent* NS_Ore_Bubbling;                                         // 0x0498 (size: 0x8)
    class UStaticMeshComponent* SM_BarMould;                                          // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* LiquidMesh;                                           // 0x04B0 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x04B8 (size: 0x8)
    class USceneComponent* Spawnpoint;                                                // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* Pot;                                                  // 0x04C8 (size: 0x8)
    class UAudioComponent* FurnaceFireSound;                                          // 0x04D0 (size: 0x8)
    TArray<class TSubclassOf<ABP_ParentResource_C>> AllowedItems;                     // 0x04D8 (size: 0x10)
    TEnumAsByte<E_MetalType::Type> CurrentLiquidType;                                 // 0x04E8 (size: 0x1)
    float OreContent;                                                                 // 0x04EC (size: 0x4)
    bool CanUse?;                                                                     // 0x04F0 (size: 0x1)

    void CreateBar(TSubclassOf<class ABP_ParentResource_C> Bar);
    void SetLiquidHeight();
    void SetNewLiquidType(TEnumAsByte<E_MetalType::Type> Type, float OreContent);
    void FindLiquidClass(class ABP_ParentResource_C* Resource, TEnumAsByte<E_MetalType::Type>& Type);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverridePickedup();
    void OverrideLoaded();
    void NewItemInPot(class ABP_ParentResource_C* Item);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SpawnBar();
    void PlayPourAnim();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_Smelter(int32 EntryPoint);
}; // Size: 0x4F1

#endif
