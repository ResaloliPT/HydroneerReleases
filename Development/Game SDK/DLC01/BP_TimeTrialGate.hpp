#ifndef UE4SS_SDK_BP_TimeTrialGate_HPP
#define UE4SS_SDK_BP_TimeTrialGate_HPP

class ABP_TimeTrialGate_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* SM_Prop_Timetrial_Checkpoint_Flag1;                   // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Flag1;                                                // 0x0230 (size: 0x8)
    class UStaticMeshComponent* SM_Prop_Timetrial_Checkpoint_Flag;                    // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x0248 (size: 0x8)
    int32 GateNumber;                                                                 // 0x0250 (size: 0x4)
    class ABP_TimeTrialMaster_C* Master;                                              // 0x0258 (size: 0x8)

    void BndEvt__BP_TimeTrialGate_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_TimeTrialGate(int32 EntryPoint);
}; // Size: 0x260

#endif
