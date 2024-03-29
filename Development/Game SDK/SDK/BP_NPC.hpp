#ifndef UE4SS_SDK_BP_NPC_HPP
#define UE4SS_SDK_BP_NPC_HPP

class ABP_NPC_C : public ABP_Character_HydroGuy_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class USphereComponent* ProximityTrigger;
    class UWidgetComponent* Widget;
    class UTextRenderComponent* TextRender;
    TMap<TEnumAsByte<E_NPC_RequestType::Type>, UDataTable*> RequestTables;
    TMap<TEnumAsByte<E_NPC_RequestType::Type>, int32> RequestProgression;
    FST_NPC_Request Request;
    FRandomStream RequestStream;
    bool HasRequest?;
    bool RequestResult;
    FBP_NPC_COnTaskComplete OnTaskComplete;
    void OnTaskComplete();
    class ABP_PatrolSpline_C* PatrolPath;
    FBP_NPC_COnRequestProcessStart OnRequestProcessStart;
    void OnRequestProcessStart(class AActor* Target);
    FBP_NPC_COnRequestProcessEnd OnRequestProcessEnd;
    void OnRequestProcessEnd();
    FTransform SpawnTransform;
    TArray<class AActor*> PlayersInProximity;
    FBP_NPC_COnRequestInit OnRequestInit;
    void OnRequestInit();
    FBP_NPC_COnRequestComplete OnRequestComplete;
    void OnRequestComplete();
    bool ShowingRequest?;
    FName Name;
    FName NPC ID;
    class UBehaviorTree* BehaviorTree;
    TArray<class ABP_AI_Node_C*> Nodes;
    bool CanMakeRandomRequests?;
    class ABP_TaskNote_C* RequestNote;
    FTimerHandle IdleSoundTimer;
    class UPData_VoiceLines_C* Voicelines_Idle;
    class UPData_VoiceLines_C* Voicelines_Request;
    FTimerHandle RequestNoteClearTimer;
    class UAnimSequence* StaticPose;
    FBP_NPC_COnRequestLookAt OnRequestLookAt;
    void OnRequestLookAt(class AActor* Actor);
    class USoundBase* LastVoiceLine;
    FTimerHandle RequestCancelTimer;
    TEnumAsByte<E_NPC_RequestType::Type> RequestType;
    FName RequestID;
    int32 RequestDifficulty;
    class ABP_Character_HydroGuy_C* LookAtPlayer;
    FText Location;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    bool CheckRequestLevel(const FST_NPC_Request& Request);
    void GetVoicelineConditions(TArray<FName>& Conditions);
    void InitStaticPose();
    void SendTrackedAction();
    void SetUniqueRequest(FName RequestID);
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
    void SetLookAtActor();
    void ToggleRequestNotice(bool Visible?);
    void ToggleRequestBubble();
    void InitBehavior();
    void CombineMatchingResources(TArray<FS_ResourceClassAndWeight>& Contents, TArray<FS_ResourceClassAndWeight>& CombinedContents);
    void CombineMatchingContents(TArray<FST_NPC_RequestContents>& Contents, TArray<FST_NPC_RequestContents>& CombinedContents);
    void ConsumeSoup(class ABP_SoupBowl_C* Soup);
    void DebugText(FName DebugName);
    void ClearRequest();
    void SetRewardAmount(class ABP_ParentItem_C* Reward);
    void PickUpItem(class ABP_ParentItem_C* Item, bool CaneBeTaken?);
    void SpawnReward();
    void ConsumeItem();
    void DropItem();
    void ToggleDropDecal(class UStaticMeshComponent* ValidMeshIfTrue);
    bool Has Valid Request?();
    void MaterialsToContents(TArray<FS_ResourceClassAndWeight>& CraftedMaterials, TArray<FST_NPC_RequestContents>& RequestContents);
    void EvalReceivedContent(TArray<FS_ResourceClassAndWeight>& Contents, class ABP_ParentItem_C* Item, bool& Result);
    void EvalReceivedItem(const class ABP_ParentItem_C* Item, bool& Result);
    void ReceiveItem(class ABP_ParentItem_C* Item, class AActor* ReceivedFrom, bool& Result);
    void SetRequestContents(FST_NPC_Request RequestIn, FST_NPC_Request& Request);
    void RollRequest();
    void RollNewRequest(TMap<TEnumAsByte<E_NPC_RequestType::Type>, int32> RequestProgression);
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
    void IdleSoundCooldown();
    void RequestNoteClear();
    void BndEvt__BP_NPC_Audio_K2Node_ComponentBoundEvent_3_OnAudioPlayStateChanged__DelegateSignature(EAudioComponentPlayState PlayState);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_NPC(int32 EntryPoint);
    void OnRequestLookAt__DelegateSignature(class AActor* Actor);
    void OnRequestComplete__DelegateSignature();
    void OnRequestInit__DelegateSignature();
    void OnRequestProcessEnd__DelegateSignature();
    void OnRequestProcessStart__DelegateSignature(class AActor* Target);
    void OnTaskComplete__DelegateSignature();
};

#endif
