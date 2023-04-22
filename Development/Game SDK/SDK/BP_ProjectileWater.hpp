#ifndef UE4SS_SDK_BP_ProjectileWater_HPP
#define UE4SS_SDK_BP_ProjectileWater_HPP

class ABP_ProjectileWater_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    bool IgnoreDelay?;
    FVector LastLocation;

    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ProjectileWater(int32 EntryPoint);
};

#endif
