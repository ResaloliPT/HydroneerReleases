#ifndef UE4SS_SDK_BP_ProjectileSpanner_HPP
#define UE4SS_SDK_BP_ProjectileSpanner_HPP

class ABP_ProjectileSpanner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0230 (size: 0x8)

    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void DoneRepair();
    void FindDurability(class ABP_ParentItem_C* Item);
    void ReturnDurability(float DurabilityAmount);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ProjectileSpanner(int32 EntryPoint);
}; // Size: 0x238

#endif
