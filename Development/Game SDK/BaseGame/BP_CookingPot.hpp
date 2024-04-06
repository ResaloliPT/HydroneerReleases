#ifndef UE4SS_SDK_BP_CookingPot_HPP
#define UE4SS_SDK_BP_CookingPot_HPP

class ABP_CookingPot_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UStaticMeshComponent* VegMesh2;                                             // 0x0458 (size: 0x8)
    class UStaticMeshComponent* VegMesh1;                                             // 0x0460 (size: 0x8)
    class UStaticMeshComponent* VegMesh0;                                             // 0x0468 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x0470 (size: 0x8)
    class UAC_Heat_C* AC_Heat;                                                        // 0x0478 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x0480 (size: 0x8)
    class UStaticMeshComponent* LiquidMesh;                                           // 0x0488 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0490 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0498 (size: 0x8)
    TArray<FS_CookingPotContents> SoupContents;                                       // 0x04A0 (size: 0x10)
    bool HasWater?;                                                                   // 0x04B0 (size: 0x1)
    TArray<class TSubclassOf<ABP_ParentCutVeg_C>> DebugToppers;                       // 0x04B8 (size: 0x10)

    void GetChildReaction(TEnumAsByte<E_PhyReact::Type> Reaction, TEnumAsByte<E_PhyReact::Type>& ChildReaction);
    void AddToExisting(class ABP_ParentCutVeg_C* VegToAdd, bool& Added);
    void SetBroth();
    void RandomiseContents();
    void CanStoreMoreVeg?(class ABP_ParentCutVeg_C* CutVeg, bool& CanStore?);
    void GetRandXY(float& ReturnValue_X, float& ReturnValue_Y);
    void RuinSoup();
    void SetVegMesh();
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void UserConstructionScript();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void HasNoWater();
    void HasWater();
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PlayPourAnim();
    void HeatUpdated(float Heat);
    void FullHeat();
    void InFire(bool SlowBurn?);
    void OutOfFire();
    void InLiquid(bool LiquidBody?, class UPrimitiveComponent* Comp, TEnumAsByte<E_LiquidType::Type> Type?);
    void ItemStored(class ABP_ParentItem_C* Item);
    void BndEvt__BP_Crucible_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorLoaded();
    void NewItemOnFullHeat(class ABP_ParentCutVeg_C* CutVeg);
    void ExecuteUbergraph_BP_CookingPot(int32 EntryPoint);
}; // Size: 0x4C8

#endif
