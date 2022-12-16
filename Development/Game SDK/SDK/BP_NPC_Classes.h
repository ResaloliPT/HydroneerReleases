#pragma once

/**
 * Name: Hydroneer
 * Version: 2.1.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------

	/**
	 * BlueprintGeneratedClass BP_NPC.BP_NPC_C
	 * Size -> 0x01A8 (FullSize[0x0A50] - InheritedSize[0x08A8])
	 */
	class ABP_NPC_C : public ABP_Character_HydroGuy_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x08A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UAudioComponent*                                   Audio;                                                   // 0x08B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USphereComponent*                                  ProximityTrigger;                                        // 0x08B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UWidgetComponent*                                  Widget;                                                  // 0x08C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UTextRenderComponent*                              TextRender;                                              // 0x08C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		TArray<class UDataTable*>                                RequestTables;                                           // 0x08D0(0x0010) Edit, BlueprintVisible


		struct FST_NPC_Request                                   Request;                                                 // 0x08E0(0x0030) Edit, BlueprintVisible, HasGetValueTypeHash


		struct FRandomStream                                     RequestStream;                                           // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NoDestructor


		bool                                                     HasRequest;                                              // 0x0918(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor


		bool                                                     RequestResult;                                           // 0x0919(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_TRI3[0x6];                                   // 0x091A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class FScriptMulticastDelegate                           OnTaskComplete;                                          // 0x0920(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


		class ABP_PatrolSpline_C*                                PatrolPath;                                              // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class FScriptMulticastDelegate                           OnRequestProcessStart;                                   // 0x0938(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


		class FScriptMulticastDelegate                           OnRequestProcessEnd;                                     // 0x0948(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


		unsigned char                                            UnknownData_CSS5[0x8];                                   // 0x0958(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FTransform                                        SpawnTransform;                                          // 0x0960(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor


		TArray<class AActor*>                                    PlayersInProximity;                                      // 0x0990(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		class FScriptMulticastDelegate                           OnRequestInit;                                           // 0x09A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


		class FScriptMulticastDelegate                           OnRequestComplete;                                       // 0x09B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


		bool                                                     ShowingRequest;                                          // 0x09C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_0RXB[0x3];                                   // 0x09C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class FName                                              Name;                                                    // 0x09C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class FName                                              NPC_ID;                                                  // 0x09CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_ZFUF[0x4];                                   // 0x09D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UBehaviorTree*                                     BehaviorTree;                                            // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		TArray<class ABP_AI_Node_C*>                             Nodes;                                                   // 0x09E0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate


		bool                                                     CanMakeRandomRequests;                                   // 0x09F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_IU7O[0x7];                                   // 0x09F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class ABP_TaskNote_C*                                    RequestNote;                                             // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      IdleSoundTimer;                                          // 0x0A00(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		class UPData_VoiceLines_C*                               Voicelines_Idle;                                         // 0x0A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UPData_VoiceLines_C*                               Voicelines_Request;                                      // 0x0A10(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      RequestNoteClearTimer;                                   // 0x0A18(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		int32_t                                                  RequestDifficulty;                                       // 0x0A20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_8LFO[0x4];                                   // 0x0A24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UAnimSequence*                                     StaticPose;                                              // 0x0A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class FScriptMulticastDelegate                           OnRequestLookAt;                                         // 0x0A30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable


		class USoundBase*                                        LastVoiceLine;                                           // 0x0A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		struct FTimerHandle                                      RequestCancelTimer;                                      // 0x0A48(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


	public:

		void ComponentsToSave(
TArray<class UActorComponent*>* Components
);

		void Handle_Request_Note_Destroyed(
class AActor* DestroyedActor
);

		void SetRequestNote(
class ABP_TaskNote_C* RequestNote
);

		void DestroyRequestNote();

		void ToggleRequestCancelTimerPause();

		void StopRequestCancelTimer();

		void CancelRequest();

		void InitRequestCancelTimer();

		void Hrrm(
float PlayerVoicePitch
);

		void RollVoiceline(
class UPData_VoiceLines_C* VoiceLines
, 
E_VoiceContext Context
, 
class USoundBase** VoiceLine
);

		void PlayDefaultVoiceline();

		void EditorConstruct();

		void NewNPC_ID();

		void InitNPC_ID();

		void HandleOptimizationTimer();

		void InitOptimizationTimer();

		bool CanPlayIdleSound();

		void SoundFadeOut();

		void PlaySound(
class USoundBase* Sound
);

		void UpdateNodes();

		void ClearNodes();

		void FindRequestNote(
class ABP_TaskNote_C** RequestNote
);

		void SetLookAtActor();

		void ToggleRequestNotice(
bool Visible
);

		void ToggleRequestBubble();

		void InitBehavior();

		void CombineMatchingResources(
TArray<struct FS_ResourceClassAndWeight>* Contents
, 
TArray<struct FS_ResourceClassAndWeight>* CombinedContents
);

		void CombineMatchingContents(
TArray<struct FST_NPC_RequestContents>* Contents
, 
TArray<struct FST_NPC_RequestContents>* CombinedContents
);

		void ConsumeSoup(
class ABP_SoupBowl_C* Soup
);

		void DebugText(
const class FName& DebugName
);

		void ClearRequest();

		void SetRewardAmount(
class ABP_ParentItem_C* Reward
);

		void PickUpItem(
class ABP_ParentItem_C* Item
, 
bool CaneBeTaken
);

		void SpawnReward();

		void ConsumeItem();

		void DropItem();

		void ToggleDropDecal(
class UStaticMeshComponent* ValidMeshIfTrue
);

		bool Has_Valid_Request();

		void MaterialsToContents(
TArray<struct FS_ResourceClassAndWeight>* CraftedMaterials
, 
TArray<struct FST_NPC_RequestContents>* RequestContents
);

		void EvalReceivedContent(
TArray<struct FS_ResourceClassAndWeight>* Contents
, 
bool* Result
);

		void EvalReceivedItem(
class ABP_ParentItem_C* Item
, 
bool* Result
);

		void ReceiveItem(
class ABP_ParentItem_C* Item
, 
class AActor* ReceivedFrom
, 
bool* Result
);

		void SetRequestContents(
const struct FST_NPC_Request& RequestIn
, 
struct FST_NPC_Request* Request
);

		void RollRequest();

		void RollNewRequest(
int32_t RequestDifficulty
);

		void UserConstructionScript();

		void OnNotifyEnd_731509EF45769C0577121694BD873863(
const class FName& NotifyName
);

		void OnNotifyBegin_731509EF45769C0577121694BD873863(
const class FName& NotifyName
);

		void OnInterrupted_731509EF45769C0577121694BD873863(
const class FName& NotifyName
);

		void OnBlendOut_731509EF45769C0577121694BD873863(
const class FName& NotifyName
);

		void OnCompleted_731509EF45769C0577121694BD873863(
const class FName& NotifyName
);

		void OnNotifyEnd_25A083C14E323A971D60D5963C246BF2(
const class FName& NotifyName
);

		void OnNotifyBegin_25A083C14E323A971D60D5963C246BF2(
const class FName& NotifyName
);

		void OnInterrupted_25A083C14E323A971D60D5963C246BF2(
const class FName& NotifyName
);

		void OnBlendOut_25A083C14E323A971D60D5963C246BF2(
const class FName& NotifyName
);

		void OnCompleted_25A083C14E323A971D60D5963C246BF2(
const class FName& NotifyName
);

		void OnNotifyEnd_364C0FBF4337767BB253D08BC93C2C0B(
const class FName& NotifyName
);

		void OnNotifyBegin_364C0FBF4337767BB253D08BC93C2C0B(
const class FName& NotifyName
);

		void OnInterrupted_364C0FBF4337767BB253D08BC93C2C0B(
const class FName& NotifyName
);

		void OnBlendOut_364C0FBF4337767BB253D08BC93C2C0B(
const class FName& NotifyName
);

		void OnCompleted_364C0FBF4337767BB253D08BC93C2C0B(
const class FName& NotifyName
);

		void OnNotifyEnd_D85A57774BFE590EA2BB32BD2AAAAD28(
const class FName& NotifyName
);

		void OnNotifyBegin_D85A57774BFE590EA2BB32BD2AAAAD28(
const class FName& NotifyName
);

		void OnInterrupted_D85A57774BFE590EA2BB32BD2AAAAD28(
const class FName& NotifyName
);

		void OnBlendOut_D85A57774BFE590EA2BB32BD2AAAAD28(
const class FName& NotifyName
);

		void OnCompleted_D85A57774BFE590EA2BB32BD2AAAAD28(
const class FName& NotifyName
);

		void OnCompleted_D09AF30142853F731559FC9526B33E50();

		void ItemStored(
class ABP_ParentItem_C* Item
);

		void ActorSaved();

		void ActorLoaded();

		void RejectItem();

		void AcceptItem();

		void StoredItemPickedUp(
class ABP_ParentItem_C* ItemPickedUp
);

		void UseItem();

		void ReceiveBeginPlay();

		void ActorPreSave();

		void StartTask(
class UAnimMontage* Montage
, 
float MaxDuration
);

		void TaskTimeout();

		void BndEvt__BP_NPC_ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
, 
bool bFromSweep
, 
const struct FHitResult& SweepResult
);

		void BndEvt__BP_NPC_ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(
class UPrimitiveComponent* OverlappedComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
int32_t OtherBodyIndex
);

		void BndEvt__BP_NPC_CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(
class UPrimitiveComponent* HitComponent
, 
class AActor* OtherActor
, 
class UPrimitiveComponent* OtherComp
, 
const struct FVector& NormalImpulse
, 
const struct FHitResult& Hit
);

		void IdleSoundTimerEnd();

		void IdleSoundCooldown();

		void RequestNoteClear();

		void BndEvt__BP_NPC_Audio_K2Node_ComponentBoundEvent_3_OnAudioPlayStateChanged__DelegateSignature(
EAudioComponentPlayState PlayState
);

		void ReceiveTick(
float DeltaSeconds
);

		void ExecuteUbergraph_BP_NPC(
int32_t EntryPoint
);

		void OnRequestLookAt__DelegateSignature(
class AActor* Actor
);

		void OnRequestComplete__DelegateSignature();

		void OnRequestInit__DelegateSignature();

		void OnRequestProcessEnd__DelegateSignature();

		void OnRequestProcessStart__DelegateSignature(
class AActor* Target
);

		void OnTaskComplete__DelegateSignature();

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
