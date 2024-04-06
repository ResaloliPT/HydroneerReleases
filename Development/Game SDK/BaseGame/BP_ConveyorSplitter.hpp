#ifndef UE4SS_SDK_BP_ConveyorSplitter_HPP
#define UE4SS_SDK_BP_ConveyorSplitter_HPP

class ABP_ConveyorSplitter_C : public ABP_ParentConveyor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0500 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x0508 (size: 0x8)
    class UBoxComponent* CheckerBox;                                                  // 0x0510 (size: 0x8)
    class UBoxComponent* SplitBox;                                                    // 0x0518 (size: 0x8)
    class UBoxComponent* StraightBox;                                                 // 0x0520 (size: 0x8)
    TArray<class ABP_ParentItem_C*> ItemsToMove;                                      // 0x0528 (size: 0x10)
    FTimerHandle ConveyorTimerHandle;                                                 // 0x0538 (size: 0x8)
    TArray<class ABP_ParentItem_C*> ItemsToSplit;                                     // 0x0540 (size: 0x10)
    TArray<class ABP_GameCharacter_C*> CharactersToSplit;                             // 0x0550 (size: 0x10)
    FTimerHandle ConveyorTimerHandle2;                                                // 0x0560 (size: 0x8)
    TArray<class TSubclassOf<ABP_ParentItem_C>> TestClasses;                          // 0x0568 (size: 0x10)
    TArray<FString> TestTypes;                                                        // 0x0578 (size: 0x10)
    FVector SplitDelta;                                                               // 0x0588 (size: 0xC)
    FVector StraightDelta;                                                            // 0x0594 (size: 0xC)
    bool UseStraight?;                                                                // 0x05A0 (size: 0x1)
    bool UseSplit?;                                                                   // 0x05A1 (size: 0x1)

    void AddCheckClass(class ABP_ParentItem_C* ItemToAdd);
    void FindIndexToRemove(class ABP_ParentItem_C* ItemToRemove, int32& Index);
    void RemoveCheckClass(class ABP_ParentItem_C* ItemToRemove);
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
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_ConveyorSplitter(int32 EntryPoint);
}; // Size: 0x5A2

#endif
