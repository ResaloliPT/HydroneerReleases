#ifndef UE4SS_SDK_BP_Crucible_HPP
#define UE4SS_SDK_BP_Crucible_HPP

class ABP_Crucible_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UNiagaraComponent* NS_Ore_Bubbling;                                         // 0x0458 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x0460 (size: 0x8)
    class UAC_Heat_C* AC_Heat;                                                        // 0x0468 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0470 (size: 0x8)
    class UStaticMeshComponent* LiquidMesh;                                           // 0x0478 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0480 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0488 (size: 0x8)
    float TotalOreContentSize;                                                        // 0x0490 (size: 0x4)
    TSubclassOf<class ABP_ParentResource_C> TestClass;                                // 0x0498 (size: 0x8)
    TEnumAsByte<E_MetalType::Type> CurrentLiquidType;                                 // 0x04A0 (size: 0x1)
    TArray<class TSubclassOf<ABP_ParentResource_C>> AllowedResources;                 // 0x04A8 (size: 0x10)
    TEnumAsByte<E_MetalType::Type> WorkingOnType;                                     // 0x04B8 (size: 0x1)

    void GetChildReaction(TEnumAsByte<E_PhyReact::Type> Reaction, TEnumAsByte<E_PhyReact::Type>& ChildReaction);
    void FindTypeByClass(TSubclassOf<class ABP_ParentResource_C> Resource, TEnumAsByte<E_MetalType::Type>& Type);
    void MeltResources();
    FName GetAttachedMeshCollisionProfile(TEnumAsByte<E_PhyReact::Type> Index);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void LoopResourcesForTargets(TSubclassOf<class ABP_ParentResource_C> Ore, TSubclassOf<class ABP_ParentResource_C> Bar, TArray<class ABP_ParentResource_C*>& Items);
    void FindTestClass(TEnumAsByte<E_MetalType::Type> CurrentMoltenType, TArray<class ABP_ParentResource_C*>& Class, int32& BarOut);
    void UserConstructionScript();
    void PlayPourAnim();
    void SpawnBar(class ABP_Mould_C* Mould);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void UpdateVisuals();
    void HasWater();
    void HeatUpdated(float Heat);
    void FullHeat();
    void HasNoWater();
    void InFire(bool SlowBurn?);
    void OutOfFire();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void ItemStored(class ABP_ParentItem_C* Item);
    void BndEvt__BP_Crucible_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorLoaded();
    void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_1_ItemAttached__DelegateSignature(class ABP_ParentItem_C* Item);
    void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_2_ItemDetached__DelegateSignature(class ABP_ParentItem_C* Item);
    void OverridePickedupPreCarry();
    void ExecuteUbergraph_BP_Crucible(int32 EntryPoint);
}; // Size: 0x4B9

#endif
