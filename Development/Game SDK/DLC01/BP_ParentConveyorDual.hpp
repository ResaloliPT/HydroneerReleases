#ifndef UE4SS_SDK_BP_ParentConveyorDual_HPP
#define UE4SS_SDK_BP_ParentConveyorDual_HPP

class ABP_ParentConveyorDual_C : public ABP_ParentConveyor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0500 (size: 0x8)
    class UBoxComponent* ExitBox;                                                     // 0x0508 (size: 0x8)
    class UBoxComponent* EntryBox;                                                    // 0x0510 (size: 0x8)
    TArray<class ABP_ParentItem_C*> ItemsToMove;                                      // 0x0518 (size: 0x10)
    FTimerHandle ConveyorTimerHandle;                                                 // 0x0528 (size: 0x8)
    TArray<class ABP_ParentItem_C*> ItemsToMoveRight;                                 // 0x0530 (size: 0x10)
    TArray<class ABP_GameCharacter_C*> CharactersToMoveRight;                         // 0x0540 (size: 0x10)
    FTimerHandle ConveyorTimerHandle2;                                                // 0x0550 (size: 0x8)
    float ConveyorPlayerBoost;                                                        // 0x0558 (size: 0x4)
    FVector EntryDelta;                                                               // 0x055C (size: 0xC)
    FVector ExitDelta;                                                                // 0x0568 (size: 0xC)
    bool UseEntry?;                                                                   // 0x0574 (size: 0x1)
    bool UseExit?;                                                                    // 0x0575 (size: 0x1)

    void GetBeltBoxes(TArray<class UPrimitiveComponent*>& Boxes);
    void ChangeBeltSpeed();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__ExitBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ExitBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExitEntryBox(class AActor* Actor);
    void ExecuteUbergraph_BP_ParentConveyorDual(int32 EntryPoint);
}; // Size: 0x576

#endif
