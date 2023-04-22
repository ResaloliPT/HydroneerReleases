#ifndef UE4SS_SDK_BP_Lava_HPP
#define UE4SS_SDK_BP_Lava_HPP

class ABP_Lava_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Plane;

    void BndEvt__BP_Lava_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Lava(int32 EntryPoint);
};

#endif
