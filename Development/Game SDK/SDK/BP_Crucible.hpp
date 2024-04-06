#ifndef UE4SS_SDK_BP_Crucible_HPP
#define UE4SS_SDK_BP_Crucible_HPP

class ABP_Crucible_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Storage_C* AC_Storage;
    class UAC_Heat_C* AC_Heat;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* LiquidMesh;
    class UStaticMeshComponent* Cylinder;
    class UMaterialInstanceDynamic* DynamicMaterial;
    float TotalOreContentSize;
    TSubclassOf<class ABP_ParentResource_C> TestClass;
    TEnumAsByte<E_MetalType::Type> CurrentLiquidType;
    TArray<class TSubclassOf<ABP_ParentResource_C>> AllowedResources;

    FName GetAttachedMeshCollisionProfile(TEnumAsByte<E_PhyReact::Type> Index);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void LoopResourcesForTargets(TSubclassOf<class ABP_ParentResource_C> Ore, TSubclassOf<class ABP_ParentResource_C> Bar, TArray<class ABP_ParentResource_C*>& Items);
    void FindTestClass(TEnumAsByte<E_MetalType::Type> CurrentMoltenType, TArray<class ABP_ParentResource_C*>& Class, int32& BarOut);
    void UserConstructionScript();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void WaterParticleHit();
    void HasNoWater();
    void HasWater();
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SpawnBar(class ABP_Mould_C* Mould);
    void PlayPourAnim();
    void UpdateVisuals();
    void HeatUpdated(float Heat);
    void FullHeat();
    void InFire(bool SlowBurn?);
    void OutOfFire();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void ItemStored(class ABP_ParentItem_C* Item);
    void BndEvt__BP_Crucible_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorLoaded();
    void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_1_ItemAttached__DelegateSignature();
    void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_2_ItemDetached__DelegateSignature();
    void OverridePickedupPreCarry();
    void ExecuteUbergraph_BP_Crucible(int32 EntryPoint);
};

#endif
