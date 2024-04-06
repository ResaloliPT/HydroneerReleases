#ifndef UE4SS_SDK_BP_NPC_HPP
#define UE4SS_SDK_BP_NPC_HPP

class ABP_NPC_C : public ABP_Character_HydroGuy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0878 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0880 (size: 0x8)
    class USphereComponent* ProximityTrigger;                                         // 0x0888 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0890 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0898 (size: 0x8)
    TMap<TEnumAsByte<E_NPC_RequestType::Type>, FST_NPC_Task> TaskObjects;             // 0x08A0 (size: 0x50)
    FRandomStream RequestStream;                                                      // 0x08F0 (size: 0x8)
    bool HasRequest?;                                                                 // 0x08F8 (size: 0x1)
    bool RequestResult;                                                               // 0x08F9 (size: 0x1)
    FBP_NPC_COnTaskComplete OnTaskComplete;                                           // 0x0900 (size: 0x10)
    void OnTaskComplete();
    class ABP_PatrolSpline_C* PatrolPath;                                             // 0x0910 (size: 0x8)
    FBP_NPC_COnRequestProcessStart OnRequestProcessStart;                             // 0x0918 (size: 0x10)
    void OnRequestProcessStart(class AActor* Target);
    FBP_NPC_COnRequestProcessEnd OnRequestProcessEnd;                                 // 0x0928 (size: 0x10)
    void OnRequestProcessEnd();
    FTransform SpawnTransform;                                                        // 0x0940 (size: 0x30)
    TArray<class AActor*> PlayersInProximity;                                         // 0x0970 (size: 0x10)
    FBP_NPC_COnRequestInit OnRequestInit;                                             // 0x0980 (size: 0x10)
    void OnRequestInit();
    FBP_NPC_COnRequestComplete OnRequestComplete;                                     // 0x0990 (size: 0x10)
    void OnRequestComplete();
    bool ShowingRequest?;                                                             // 0x09A0 (size: 0x1)
    FName Name;                                                                       // 0x09A4 (size: 0x8)
    FName NPC ID;                                                                     // 0x09AC (size: 0x8)
    class UBehaviorTree* BehaviorTree;                                                // 0x09B8 (size: 0x8)
    TArray<class ABP_AI_Node_C*> Nodes;                                               // 0x09C0 (size: 0x10)
    bool CanMakeRandomRequests?;                                                      // 0x09D0 (size: 0x1)
    FTimerHandle IdleSoundTimer;                                                      // 0x09D8 (size: 0x8)
    class UPData_VoiceLines_C* Voicelines_Idle;                                       // 0x09E0 (size: 0x8)
    class UPData_VoiceLines_C* Voicelines_Request;                                    // 0x09E8 (size: 0x8)
    FTimerHandle RequestNoteClearTimer;                                               // 0x09F0 (size: 0x8)
    class UAnimSequence* StaticPose;                                                  // 0x09F8 (size: 0x8)
    FBP_NPC_COnRequestLookAt OnRequestLookAt;                                         // 0x0A00 (size: 0x10)
    void OnRequestLookAt(class AActor* Actor);
    class USoundBase* LastVoiceLine;                                                  // 0x0A10 (size: 0x8)
    FTimerHandle RequestCancelTimer;                                                  // 0x0A18 (size: 0x8)
    TEnumAsByte<E_NPC_RequestType::Type> RequestType;                                 // 0x0A20 (size: 0x1)
    TEnumAsByte<E_NPC_TaskType::Type> TaskType;                                       // 0x0A21 (size: 0x1)
    FName RequestID;                                                                  // 0x0A24 (size: 0x8)
    class ABP_Character_HydroGuy_C* LookAtPlayer;                                     // 0x0A30 (size: 0x8)
    FText Location;                                                                   // 0x0A38 (size: 0x18)
    class UC_Task_C* Task;                                                            // 0x0A50 (size: 0x8)
    class ABP_TaskNote_C* RequestNote;                                                // 0x0A58 (size: 0x8)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void SetAnimLookAtActor(class AActor* Actor);
    void CheckIfNoteTaken(class ABP_ParentItem_C* Item);
    void CheckIfRewardTaken(class ABP_ParentItem_C* Item);
    void CheckForPlayers();
    void RemoveTask();
    void GetVoicelineConditions(TArray<FName>& Conditions);
    void InitStaticPose();
    void SetUniqueRequest(FName RequestID, TEnumAsByte<E_NPC_TaskType::Type> TaskType, bool ForceSpawnNote);
    void Handle Request Note Destroyed(class AActor* DestroyedActor);
    void SetRequestNote(class ABP_TaskNote_C* RequestNote);
    void DestroyRequestNote();
    void ToggleRequestCancelTimerPause();
    void StopRequestCancelTimer();
    void CancelRequest();
    void InitRequestCancelTimer();
    void Hrrm(float PlayerVoicePitch);
    void RollVoiceline(class UPData_VoiceLines_C* VoiceLines, TEnumAsByte<E_VoiceContext::Type> Context, TArray<FName>& Conditions, class USoundBase*& VoiceLine);
    void PlayDefaultVoiceline();
    void EditorConstruct();
    void NewNPC_ID();
    void InitNPC_ID();
    void HandleOptimizationTimer();
    void InitOptimizationTimer();
    bool CanPlayIdleSound();
    void SoundFadeOut();
    void PlaySound(class USoundBase* Sound);
    void UpdateNodes();
    void ClearNodes();
    void FindRequestNote(class ABP_TaskNote_C*& RequestNote);
    void LookAtPlayerInProximity();
    void ToggleRequestNotice(bool Visible?);
    void ToggleRequestBubble();
    void InitBehavior();
    void CombineMatchingResources(TArray<FS_ResourceClassAndWeight>& Contents, TArray<FS_ResourceClassAndWeight>& CombinedContents);
    void CombineMatchingContents(TArray<FST_NPC_RequestContents>& Contents, TArray<FST_NPC_RequestContents>& CombinedContents);
    void ConsumeSoup(class ABP_SoupBowl_C* Soup);
    void DebugText(FName DebugName);
    void ClearRequest();
    void PickUpItem(class ABP_ParentItem_C* Item, bool CanBeTaken?);
    void ConsumeItem();
    void DropItem();
    void ToggleDropDecal(class UStaticMeshComponent* ValidMeshIfTrue);
    bool Has Valid Request?();
    void ReceiveItem(class ABP_ParentItem_C* Item, class AActor* ReceivedFrom, bool& Result);
    void RollRequest();
    void RollNewRequest(TMap<TEnumAsByte<E_NPC_RequestType::Type>, int32> RequestProgression);
    void InitTask(const TEnumAsByte<E_NPC_RequestType::Type>& RequestType, TEnumAsByte<E_NPC_TaskType::Type> TaskType, FName TaskID, FRandomStream& Stream, FName& NewTaskID);
    void UserConstructionScript();
    void OnNotifyEnd_731509EF45769C0577121694BD873863(FName NotifyName);
    void OnNotifyBegin_731509EF45769C0577121694BD873863(FName NotifyName);
    void OnInterrupted_731509EF45769C0577121694BD873863(FName NotifyName);
    void OnBlendOut_731509EF45769C0577121694BD873863(FName NotifyName);
    void OnCompleted_731509EF45769C0577121694BD873863(FName NotifyName);
    void OnNotifyEnd_25A083C14E323A971D60D5963C246BF2(FName NotifyName);
    void OnNotifyBegin_25A083C14E323A971D60D5963C246BF2(FName NotifyName);
    void OnInterrupted_25A083C14E323A971D60D5963C246BF2(FName NotifyName);
    void OnBlendOut_25A083C14E323A971D60D5963C246BF2(FName NotifyName);
    void OnCompleted_25A083C14E323A971D60D5963C246BF2(FName NotifyName);
    void OnNotifyEnd_364C0FBF4337767BB253D08BC93C2C0B(FName NotifyName);
    void OnNotifyBegin_364C0FBF4337767BB253D08BC93C2C0B(FName NotifyName);
    void OnInterrupted_364C0FBF4337767BB253D08BC93C2C0B(FName NotifyName);
    void OnBlendOut_364C0FBF4337767BB253D08BC93C2C0B(FName NotifyName);
    void OnCompleted_364C0FBF4337767BB253D08BC93C2C0B(FName NotifyName);
    void OnNotifyEnd_D85A57774BFE590EA2BB32BD2AAAAD28(FName NotifyName);
    void OnNotifyBegin_D85A57774BFE590EA2BB32BD2AAAAD28(FName NotifyName);
    void OnInterrupted_D85A57774BFE590EA2BB32BD2AAAAD28(FName NotifyName);
    void OnBlendOut_D85A57774BFE590EA2BB32BD2AAAAD28(FName NotifyName);
    void OnCompleted_D85A57774BFE590EA2BB32BD2AAAAD28(FName NotifyName);
    void OnCompleted_D09AF30142853F731559FC9526B33E50();
    void ItemStored(class ABP_ParentItem_C* Item);
    void ActorSaved();
    void ActorLoaded();
    void RejectItem();
    void AcceptItem();
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void UseItem();
    void ReceiveBeginPlay();
    void ActorPreSave();
    void StartTask(class UAnimMontage* Montage, float MaxDuration);
    void TaskTimeout();
    void BndEvt__BP_NPC_ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_NPC_ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_NPC_CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void IdleSoundTimerEnd();
    void IdleSoundCooldown(float Time);
    void RequestNoteClear();
    void BndEvt__BP_NPC_Audio_K2Node_ComponentBoundEvent_3_OnAudioPlayStateChanged__DelegateSignature(EAudioComponentPlayState PlayState);
    void ReceiveTick(float DeltaSeconds);
    void CompleteTask(bool Track);
    void TrySpawnRequestNote();
    void ExecuteUbergraph_BP_NPC(int32 EntryPoint);
    void OnRequestLookAt__DelegateSignature(class AActor* Actor);
    void OnRequestComplete__DelegateSignature();
    void OnRequestInit__DelegateSignature();
    void OnRequestProcessEnd__DelegateSignature();
    void OnRequestProcessStart__DelegateSignature(class AActor* Target);
    void OnTaskComplete__DelegateSignature();
}; // Size: 0xA60

#endif
