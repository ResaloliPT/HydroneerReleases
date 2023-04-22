#ifndef UE4SS_SDK_BP_ProjectileSpanner_HPP
#define UE4SS_SDK_BP_ProjectileSpanner_HPP

class ABP_ProjectileSpanner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class UParticleSystemComponent* ParticleSystem;

    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void DoneRepair();
    void FindDurability(class ABP_ParentItem_C* Item);
    void ReturnDurability(float DurabilityAmount);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ProjectileSpanner(int32 EntryPoint);
};

#endif
