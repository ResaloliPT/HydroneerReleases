#ifndef UE4SS_SDK_BP_HandSorter_HPP
#define UE4SS_SDK_BP_HandSorter_HPP

class ABP_HandSorter_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* SM_ResourceSplitter_Net;                              // 0x04D0 (size: 0x8)
    class USceneComponent* SplitExitOthers;                                           // 0x04D8 (size: 0x8)
    class UBoxComponent* IntakeBox;                                                   // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* Pipe;                                                 // 0x04E8 (size: 0x8)
    class USceneComponent* SplitExit;                                                 // 0x04F0 (size: 0x8)
    class UBoxComponent* InputBox;                                                    // 0x04F8 (size: 0x8)
    class UBoxComponent* CheckerBox;                                                  // 0x0500 (size: 0x8)
    TArray<class TSubclassOf<ABP_ParentResource_C>> TestClasses;                      // 0x0508 (size: 0x10)

    void InitLiquidType();
    void UserConstructionScript();
    void OnCompleted_E8393DDE412E9FABCB578F9C14E6ADCC();
    void BndEvt__BP_HandSorter_CheckerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HandSorter_InputBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_HandSorter_CheckerBox_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorLoaded();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HandSorter(int32 EntryPoint);
}; // Size: 0x518

#endif
