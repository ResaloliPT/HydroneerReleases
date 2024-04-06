#ifndef UE4SS_SDK_BP_IcehelmEntryChute_HPP
#define UE4SS_SDK_BP_IcehelmEntryChute_HPP

class ABP_IcehelmEntryChute_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* TeleportBox;                                                 // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class UStaticMeshComponent* SM_Chute_Entry_ConveyerBelt;                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* SM_Chute_Entry_Attachment;                            // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    TArray<class ABP_ParentItem_C*> ItemsToMove;                                      // 0x0250 (size: 0x10)
    FTimerHandle ConveyorTimerHandle;                                                 // 0x0260 (size: 0x8)
    class ABP_IcehelmExitChute_C* Exit;                                               // 0x0268 (size: 0x8)

    void BndEvt__BP_IcehelmEntryChute_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_IcehelmEntryChute_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BeltTimer();
    void BndEvt__BP_IcehelmEntryChute_Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_IcehelmEntryChute(int32 EntryPoint);
}; // Size: 0x270

#endif
