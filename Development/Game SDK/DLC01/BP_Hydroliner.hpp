#ifndef UE4SS_SDK_BP_Hydroliner_HPP
#define UE4SS_SDK_BP_Hydroliner_HPP

class ABP_Hydroliner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* S_Hydroliner_Motor_Front;                                  // 0x0228 (size: 0x8)
    class USceneComponent* RelocatePoint;                                             // 0x0230 (size: 0x8)
    class UStaticMeshComponent* PlayerBounds;                                         // 0x0238 (size: 0x8)
    class UBoxComponent* Blocker41;                                                   // 0x0240 (size: 0x8)
    class UBoxComponent* Blocker40;                                                   // 0x0248 (size: 0x8)
    class UBoxComponent* Blocker39;                                                   // 0x0250 (size: 0x8)
    class UBoxComponent* Blocker38;                                                   // 0x0258 (size: 0x8)
    class UBoxComponent* EntranceBlockerLeft;                                         // 0x0260 (size: 0x8)
    class UBoxComponent* EntranceBlockerRight;                                        // 0x0268 (size: 0x8)
    class UBoxComponent* Blocker37;                                                   // 0x0270 (size: 0x8)
    class UBoxComponent* Blocker36;                                                   // 0x0278 (size: 0x8)
    class UBoxComponent* Blocker35;                                                   // 0x0280 (size: 0x8)
    class UBoxComponent* Blocker34;                                                   // 0x0288 (size: 0x8)
    class UBoxComponent* Blocker33;                                                   // 0x0290 (size: 0x8)
    class UBoxComponent* Blocker32;                                                   // 0x0298 (size: 0x8)
    class UBoxComponent* Blocker31;                                                   // 0x02A0 (size: 0x8)
    class UBoxComponent* Blocker30;                                                   // 0x02A8 (size: 0x8)
    class UBoxComponent* Blocker29;                                                   // 0x02B0 (size: 0x8)
    class UBoxComponent* Blocker28;                                                   // 0x02B8 (size: 0x8)
    class UBoxComponent* Blocker27;                                                   // 0x02C0 (size: 0x8)
    class UBoxComponent* Blocker26;                                                   // 0x02C8 (size: 0x8)
    class UBoxComponent* Blocker25;                                                   // 0x02D0 (size: 0x8)
    class UBoxComponent* Blocker24;                                                   // 0x02D8 (size: 0x8)
    class UBoxComponent* Blocker23;                                                   // 0x02E0 (size: 0x8)
    class UBoxComponent* Blocker22;                                                   // 0x02E8 (size: 0x8)
    class UBoxComponent* Blocker21;                                                   // 0x02F0 (size: 0x8)
    class UBoxComponent* Blocker20;                                                   // 0x02F8 (size: 0x8)
    class UBoxComponent* Blocker19;                                                   // 0x0300 (size: 0x8)
    class UBoxComponent* Blocker18;                                                   // 0x0308 (size: 0x8)
    class UBoxComponent* Blocker17;                                                   // 0x0310 (size: 0x8)
    class UBoxComponent* Blocker16;                                                   // 0x0318 (size: 0x8)
    class UBoxComponent* Blocker15;                                                   // 0x0320 (size: 0x8)
    class UBoxComponent* Blocker14;                                                   // 0x0328 (size: 0x8)
    class UBoxComponent* Blocker13;                                                   // 0x0330 (size: 0x8)
    class UBoxComponent* Blocker12;                                                   // 0x0338 (size: 0x8)
    class UBoxComponent* Blocker11;                                                   // 0x0340 (size: 0x8)
    class UBoxComponent* Blocker10;                                                   // 0x0348 (size: 0x8)
    class UBoxComponent* Blocker9;                                                    // 0x0350 (size: 0x8)
    class UBoxComponent* Blocker8;                                                    // 0x0358 (size: 0x8)
    class UBoxComponent* Blocker7;                                                    // 0x0360 (size: 0x8)
    class UBoxComponent* Blocker6;                                                    // 0x0368 (size: 0x8)
    class UBoxComponent* Blocker5;                                                    // 0x0370 (size: 0x8)
    class UBoxComponent* Blocker4;                                                    // 0x0378 (size: 0x8)
    class UBoxComponent* Blocker3;                                                    // 0x0380 (size: 0x8)
    class UBoxComponent* Blocker2;                                                    // 0x0388 (size: 0x8)
    class UBoxComponent* Blocker1;                                                    // 0x0390 (size: 0x8)
    class UBoxComponent* Blocker;                                                     // 0x0398 (size: 0x8)
    class UAC_Storage_C* AC_Storage;                                                  // 0x03A0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x03A8 (size: 0x8)
    class UAudioComponent* S_Hydroliner_Motor_Travel;                                 // 0x03B0 (size: 0x8)
    class UAudioComponent* S_Hydroliner_Start;                                        // 0x03B8 (size: 0x8)
    class UAudioComponent* S_Hydroliner_Motor_Rear;                                   // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03C8 (size: 0x8)
    float Timeline_LerpToTravel_Alpha_3007991344D7F2A2EF4516AB36225D85;               // 0x03D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_LerpToTravel__Direction_3007991344D7F2A2EF4516AB36225D85; // 0x03D4 (size: 0x1)
    class UTimelineComponent* Timeline_LerpToTravel;                                  // 0x03D8 (size: 0x8)
    float Timeline_Travel_Alpha_AD4019D34F7AD26658BD0B8143228698;                     // 0x03E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Travel__Direction_AD4019D34F7AD26658BD0B8143228698; // 0x03E4 (size: 0x1)
    class UTimelineComponent* Timeline_Travel;                                        // 0x03E8 (size: 0x8)
    int32 CurrentPoint;                                                               // 0x03F0 (size: 0x4)
    int32 TargetPoint;                                                                // 0x03F4 (size: 0x4)
    int32 LastStopPoint;                                                              // 0x03F8 (size: 0x4)
    float Speed;                                                                      // 0x03FC (size: 0x4)
    float MaxSpeed;                                                                   // 0x0400 (size: 0x4)
    class ABP_HydrolinerRoute_C* Route;                                               // 0x0408 (size: 0x8)
    TArray<class ABP_Hydroliner_C*> LinkedHydroliners;                                // 0x0410 (size: 0x10)
    FTransform StartTransform;                                                        // 0x0420 (size: 0x30)
    float BeginDistance;                                                              // 0x0450 (size: 0x4)
    float TravelDistance;                                                             // 0x0454 (size: 0x4)
    float LastDistance;                                                               // 0x0458 (size: 0x4)
    float TargetDistance;                                                             // 0x045C (size: 0x4)
    float CurrentDistance;                                                            // 0x0460 (size: 0x4)
    float LastStopDistance;                                                           // 0x0464 (size: 0x4)
    float NextStopDistance;                                                           // 0x0468 (size: 0x4)
    float SpeedCap;                                                                   // 0x046C (size: 0x4)
    bool BrakeOnStop;                                                                 // 0x0470 (size: 0x1)
    bool BrakeOnDestination;                                                          // 0x0471 (size: 0x1)
    bool IsTraveling;                                                                 // 0x0472 (size: 0x1)
    bool TravelEnabled;                                                               // 0x0473 (size: 0x1)
    bool TravelOnStart;                                                               // 0x0474 (size: 0x1)
    bool IsStopped;                                                                   // 0x0475 (size: 0x1)
    bool QueueTravel;                                                                 // 0x0476 (size: 0x1)
    bool CanPressButton;                                                              // 0x0477 (size: 0x1)
    FVector Location;                                                                 // 0x0478 (size: 0xC)
    FVector Velocity;                                                                 // 0x0484 (size: 0xC)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void LMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* HitActor, FVector HitLocation, bool& ConsumeInput?);
    void ResetRoute();
    void HandleBeginOverlapPlayerBounds(class AActor* Actor, class UPrimitiveComponent* Component);
    void HandleEndOverlapPlayerBounds(class AActor* Actor, class USceneComponent* Component);
    void ToggleEntranceBlockers(bool Blocking);
    void CalcVelocity();
    void InitArrive();
    void InitTravel();
    void ResetButton();
    void TryTravelButton(bool& Result);
    void InitButtonState();
    void UpdateButtonState(uint8 State);
    bool IsAtStop();
    bool IsTargetTheDestination();
    void SetTravelDistance();
    bool IsGoingToStop();
    void Accelerate(float TargetSpeed, float AccelSpeed);
    void ProgressTravel(bool& AtDestination);
    void SetTravelTransform(float Alpha);
    void SetTravelSpeed(float Alpha);
    void Timeline_Travel__FinishedFunc();
    void Timeline_Travel__UpdateFunc();
    void Timeline_LerpToTravel__FinishedFunc();
    void Timeline_LerpToTravel__UpdateFunc();
    void OnCompleted_D2EBE6BF454C5B8EF5C96EBB78F6CB9D();
    void ItemStored(class ABP_ParentItem_C* Item);
    void StoredItemPickedUp(class ABP_ParentItem_C* ItemPickedUp);
    void ActorLoaded();
    void ActorPreSave();
    void ActorSaved();
    void LMBUpWhileCarrying();
    void RMBDownWhileCarrying(class ABP_GameController_C* Controller, class AActor* Hit Actor, FVector HitLocation);
    void RMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Instigator);
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void RMBUpWhileCarrying();
    void Travel();
    void StopReached();
    void RouteComplete();
    void BeginTravel();
    void ReceiveBeginPlay();
    void ButtonBeginTravel();
    void StartLinkedTravel();
    void LoadComplete();
    void ContinueTravel();
    void BndEvt__BP_Hydroliner_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void LinkedBeginTravel();
    void BndEvt__BP_Hydroliner_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_Hydroliner_PlayerBounds_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_Hydroliner_PlayerBounds_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ButtonContinueTravel();
    void ExecuteUbergraph_BP_Hydroliner(int32 EntryPoint);
}; // Size: 0x490

#endif
