#ifndef UE4SS_SDK_BP_HookMerger_HPP
#define UE4SS_SDK_BP_HookMerger_HPP

class ABP_HookMerger_C : public ABP_ParentConveyor_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    TArray<class ABP_ParentItem_C*> ItemsToMove;
    FVector BeltDelta;

    void GetBeltBoxes(TArray<class UPrimitiveComponent*>& Boxes);
    void ChangeBeltSpeed();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_HookMerger(int32 EntryPoint);
};

#endif
