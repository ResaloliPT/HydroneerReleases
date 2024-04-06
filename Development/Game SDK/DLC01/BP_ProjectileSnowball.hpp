#ifndef UE4SS_SDK_BP_ProjectileSnowball_HPP
#define UE4SS_SDK_BP_ProjectileSnowball_HPP

class ABP_ProjectileSnowball_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)

    void AchievementCheck(class AActor* Actor);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ProjectileSnowball(int32 EntryPoint);
}; // Size: 0x230

#endif
