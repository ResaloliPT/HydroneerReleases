#ifndef UE4SS_SDK_BP_IcehelmLava_HPP
#define UE4SS_SDK_BP_IcehelmLava_HPP

class ABP_IcehelmLava_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0230 (size: 0x8)

    void BndEvt__BP_Lava_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_IcehelmLava(int32 EntryPoint);
}; // Size: 0x238

#endif
