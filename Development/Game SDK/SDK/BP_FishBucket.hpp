#ifndef UE4SS_SDK_BP_FishBucket_HPP
#define UE4SS_SDK_BP_FishBucket_HPP

class ABP_FishBucket_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Storage_C* AC_Storage;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* Cylinder;

    FName GetAttachedMeshCollisionProfile(TEnumAsByte<E_PhyReact::Type> Index);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void InWater(bool WaterBody?, class UPrimitiveComponent* Comp);
    void WaterParticleHit();
    void HasNoWater();
    void HasWater();
    void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Bucket_Cylinder_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Empty();
    void OverridePickedupPreCarry();
    void ExecuteUbergraph_BP_FishBucket(int32 EntryPoint);
};

#endif
