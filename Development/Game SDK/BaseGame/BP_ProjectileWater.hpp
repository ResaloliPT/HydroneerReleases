#ifndef UE4SS_SDK_BP_ProjectileWater_HPP
#define UE4SS_SDK_BP_ProjectileWater_HPP

class ABP_ProjectileWater_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    bool IgnoreDelay?;                                                                // 0x0230 (size: 0x1)
    FVector LastLocation;                                                             // 0x0234 (size: 0xC)

    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ProjectileWater(int32 EntryPoint);
}; // Size: 0x240

#endif
