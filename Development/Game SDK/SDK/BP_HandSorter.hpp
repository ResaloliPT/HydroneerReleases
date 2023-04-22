#ifndef UE4SS_SDK_BP_HandSorter_HPP
#define UE4SS_SDK_BP_HandSorter_HPP

class ABP_HandSorter_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Storage_C* AC_Storage;
    class UStaticMeshComponent* SM_ResourceSplitter_Net;
    class USceneComponent* SplitExitOthers;
    class UBoxComponent* IntakeBox;
    class UStaticMeshComponent* Pipe;
    class USceneComponent* SplitExit;
    class UBoxComponent* InputBox;
    class UBoxComponent* CheckerBox;
    TArray<class TSubclassOf<ABP_ParentResource_C>> TestClasses;

    void OnCompleted_E8393DDE412E9FABCB578F9C14E6ADCC();
    void BndEvt__BP_HandSorter_CheckerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HandSorter_InputBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HandSorter_CheckerBox_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorLoaded();
    void ExecuteUbergraph_BP_HandSorter(int32 EntryPoint);
};

#endif
