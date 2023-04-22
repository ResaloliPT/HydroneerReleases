#ifndef UE4SS_SDK_BP_Pan_HPP
#define UE4SS_SDK_BP_Pan_HPP

class ABP_Pan_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UAC_Storage_C* AC_Storage;
    class UAC_Animator_C* AC_Animator;
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;
    class UStaticMeshComponent* Cylinder;
    class UStaticMeshComponent* WaterMesh;
    class UStaticMeshComponent* DirtMesh;
    bool HasWater?;
    int32 DirtQualityAverage;
    int32 DirtLoads;
    TEnumAsByte<E_MetalType::Type> Vein;

    FName GetAttachedMeshCollisionProfile(TEnumAsByte<E_PhyReact::Type> Index);
    void SetAttachedMeshCollisionProfile(class UStaticMeshComponent* Mesh, FName CollisionProfile);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void GetRandXY(float& ReturnValue_X, float& ReturnValue_Y);
    void OverlappedDirtParticle(class ABP_DirtResource_C* Dirt);
    void GenerateGems();
    void ItemStored(class ABP_ParentItem_C* Item);
    void HasNoWater();
    void HasWater();
    void AddDirt(int32 DirtQualityAverage, int32 DirtLoads, TEnumAsByte<E_MetalType::Type> Vein);
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EmptyWater();
    void DevTest();
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void WaterParticleHit();
    void EmptyDirt();
    void Scrubbed();
    void BndEvt__BP_Pan_Cylinder_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void TipOut();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_1_ItemAttached__DelegateSignature();
    void BndEvt__BP_Pan_AC_Storage_K2Node_ComponentBoundEvent_2_ItemDetached__DelegateSignature();
    void OverridePickedupPreCarry();
    void ExecuteUbergraph_BP_Pan(int32 EntryPoint);
};

#endif
