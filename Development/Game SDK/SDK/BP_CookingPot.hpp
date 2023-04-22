#ifndef UE4SS_SDK_BP_CookingPot_HPP
#define UE4SS_SDK_BP_CookingPot_HPP

class ABP_CookingPot_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* VegMesh2;
    class UStaticMeshComponent* VegMesh1;
    class UStaticMeshComponent* VegMesh0;
    class UAC_Storage_C* AC_Storage;
    class UAC_Heat_C* AC_Heat;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* LiquidMesh;
    class UStaticMeshComponent* Cylinder;
    class UMaterialInstanceDynamic* DynamicMaterial;
    TArray<FS_CookingPotContents> SoupContents;
    bool HasWater?;
    TArray<class TSubclassOf<ABP_ParentCutVeg_C>> DebugToppers;

    void AddToExisting(class ABP_ParentCutVeg_C* VegToAdd, bool& Added);
    FName GetAttachedMeshCollisionProfile(TEnumAsByte<E_PhyReact::Type> Index);
    void SetBroth();
    void RandomiseContents();
    void CanStoreMoreVeg?(class ABP_ParentCutVeg_C* CutVeg, bool& CanStore?);
    void GetRandXY(float& ReturnValue_X, float& ReturnValue_Y);
    void RuinSoup();
    void SetVegMesh();
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void UserConstructionScript();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void WaterParticleHit();
    void HasNoWater();
    void HasWater();
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PlayPourAnim();
    void HeatUpdated(float Heat);
    void FullHeat();
    void InFire(bool SlowBurn?);
    void OutOfFire();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void ItemStored(class ABP_ParentItem_C* Item);
    void BndEvt__BP_Crucible_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorLoaded();
    void NewItemOnFullHeat(class ABP_ParentCutVeg_C* CutVeg);
    void ExecuteUbergraph_BP_CookingPot(int32 EntryPoint);
};

#endif
