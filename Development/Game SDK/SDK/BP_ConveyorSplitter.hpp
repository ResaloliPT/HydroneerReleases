#ifndef UE4SS_SDK_BP_ConveyorSplitter_HPP
#define UE4SS_SDK_BP_ConveyorSplitter_HPP

class ABP_ConveyorSplitter_C : public ABP_ParentConveyor_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Storage_C* AC_Storage;
    class UBoxComponent* CheckerBox;
    class UBoxComponent* SplitBox;
    class UBoxComponent* StraightBox;
    TArray<class ABP_ParentItem_C*> ItemsToMove;
    FTimerHandle ConveyorTimerHandle;
    TArray<class ABP_ParentItem_C*> ItemsToSplit;
    TArray<class ABP_GameCharacter_C*> CharactersToSplit;
    FTimerHandle ConveyorTimerHandle2;
    TArray<class TSubclassOf<ABP_ParentItem_C>> TestClasses;
    FVector SplitDelta;
    FVector StraightDelta;
    bool UseStraight?;
    bool UseSplit?;
    TEnumAsByte<E_FishType::Type> FishToSplit;

    void GetBeltBoxes(TArray<class UPrimitiveComponent*>& Boxes);
    void ChangeBeltSpeed();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__ExitBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ExitBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__CheckerBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CheckerBox_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void RemoveFromStraight(class AActor* Actor);
    void ExecuteUbergraph_BP_ConveyorSplitter(int32 EntryPoint);
};

#endif
