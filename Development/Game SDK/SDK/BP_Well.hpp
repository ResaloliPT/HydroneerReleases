#ifndef UE4SS_SDK_BP_Well_HPP
#define UE4SS_SDK_BP_Well_HPP

class ABP_Well_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Scene;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh;

    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Well(int32 EntryPoint);
};

#endif
