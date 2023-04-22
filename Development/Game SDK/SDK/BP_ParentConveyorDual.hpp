#ifndef UE4SS_SDK_BP_ParentConveyorDual_HPP
#define UE4SS_SDK_BP_ParentConveyorDual_HPP

class ABP_ParentConveyorDual_C : public ABP_ParentConveyor_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* ExitBox;
    class UBoxComponent* EntryBox;
    TArray<class ABP_ParentItem_C*> ItemsToMove;
    FTimerHandle ConveyorTimerHandle;
    TArray<class ABP_ParentItem_C*> ItemsToMoveRight;
    TArray<class ABP_GameCharacter_C*> CharactersToMoveRight;
    FTimerHandle ConveyorTimerHandle2;
    float ConveyorPlayerBoost;
    FVector EntryDelta;
    FVector ExitDelta;
    bool UseEntry?;
    bool UseExit?;

    void GetBeltBoxes(TArray<class UPrimitiveComponent*>& Boxes);
    void ChangeBeltSpeed();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BeltTimer1();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ExitBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ExitBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ParentConveyorDual(int32 EntryPoint);
};

#endif
