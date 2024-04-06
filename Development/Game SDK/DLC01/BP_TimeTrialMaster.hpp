#ifndef UE4SS_SDK_BP_TimeTrialMaster_HPP
#define UE4SS_SDK_BP_TimeTrialMaster_HPP

class ABP_TimeTrialMaster_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UTextRenderComponent* TopScoreText;                                         // 0x0228 (size: 0x8)
    class UTextRenderComponent* PreviousTimeText;                                     // 0x0230 (size: 0x8)
    class UStaticMeshComponent* SM_NoticeBoard_Plain;                                 // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    FTimerHandle TimerHandle;                                                         // 0x0250 (size: 0x8)
    float ElapsedTime;                                                                // 0x0258 (size: 0x4)
    float BestTime;                                                                   // 0x025C (size: 0x4)
    bool Debug?;                                                                      // 0x0260 (size: 0x1)
    TArray<bool> GatesStatus;                                                         // 0x0268 (size: 0x10)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void AchievementCheck();
    void SetCurrentTimeText();
    void SetBestTimeText();
    void UserConstructionScript();
    void ActorPreSave();
    void ActorSaved();
    void GatePassed(int32 Gate);
    void BndEvt__BP_TimeTrialGate_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void TrialTimer();
    void StopTimer();
    void ActorLoaded();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TimeTrialMaster(int32 EntryPoint);
}; // Size: 0x278

#endif
