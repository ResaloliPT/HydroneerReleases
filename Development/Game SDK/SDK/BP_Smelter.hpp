#ifndef UE4SS_SDK_BP_Smelter_HPP
#define UE4SS_SDK_BP_Smelter_HPP

class ABP_Smelter_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_BarMould;
    class UStaticMeshComponent* Cylinder;
    class UStaticMeshComponent* LiquidMesh;
    class UAC_Animator_C* AC_Animator;
    class USceneComponent* Spawnpoint;
    class UStaticMeshComponent* Pot;
    class UParticleSystemComponent* Fire3;
    class UParticleSystemComponent* Fire2;
    class UParticleSystemComponent* Fire1;
    class UAudioComponent* FurnaceFireSound;
    TArray<class TSubclassOf<ABP_ParentResource_C>> AllowedItems;
    TEnumAsByte<E_MetalType::Type> CurrentLiquidType;
    float OreContent;
    bool CanUse?;

    void CreateBar(TSubclassOf<class ABP_ParentResource_C> Bar);
    void SetLiquidHeight();
    void SetNewLiquidType(TEnumAsByte<E_MetalType::Type> Type, float OreContent);
    void FindLiquidClass(class ABP_ParentResource_C* Resource, TEnumAsByte<E_MetalType::Type>& Type);
    void OverridePickedup();
    void OverrideLoaded();
    void NewItemInPot(class ABP_ParentResource_C* Item);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SpawnBar();
    void PlayPourAnim();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_Smelter(int32 EntryPoint);
};

#endif
