#ifndef UE4SS_SDK_BP_IcehelmEntryChute_HPP
#define UE4SS_SDK_BP_IcehelmEntryChute_HPP

class ABP_IcehelmEntryChute_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* TeleportBox;
    class UBoxComponent* Box;
    class UStaticMeshComponent* SM_Chute_Entry_ConveyerBelt;
    class UStaticMeshComponent* SM_Chute_Entry_Attachment;
    class USceneComponent* DefaultSceneRoot;
    TArray<class ABP_ParentItem_C*> ItemsToMove;
    FTimerHandle ConveyorTimerHandle;
    class ABP_IcehelmExitChute_C* Exit;

    void BndEvt__BP_IcehelmEntryChute_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_IcehelmEntryChute_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BeltTimer();
    void BndEvt__BP_IcehelmEntryChute_Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_IcehelmEntryChute(int32 EntryPoint);
};

#endif
