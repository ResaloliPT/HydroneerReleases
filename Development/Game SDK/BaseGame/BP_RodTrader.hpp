#ifndef UE4SS_SDK_BP_RodTrader_HPP
#define UE4SS_SDK_BP_RodTrader_HPP

class ABP_RodTrader_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0248 (size: 0x8)
    class UStaticMeshComponent* DisplayBox;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* SellButton;                                           // 0x0258 (size: 0x8)
    class UStaticMeshComponent* FishExample;                                          // 0x0260 (size: 0x8)
    class USceneComponent* RodSpawnLoc;                                               // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Rod;                                                  // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Bucket;                                               // 0x0278 (size: 0x8)
    class USphereComponent* FishSphere;                                               // 0x0280 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0288 (size: 0x8)
    float Timeline_0_NewTrack_0_80C98A824FF68D8EB6D38BACDC93B9C5;                     // 0x0290 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_80C98A824FF68D8EB6D38BACDC93B9C5; // 0x0294 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0298 (size: 0x8)
    TArray<class ABP_CaughtFish_C*> Fishes;                                           // 0x02A0 (size: 0x10)
    TEnumAsByte<E_FishType::Type> TargetFish;                                         // 0x02B0 (size: 0x1)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ChangeMeshes();
    void ChangeTargetFish();
    void DoWeHaveFish?(bool& HaveFish?, int32& ArrayIndex);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ActorPreSave();
    void ActorSaved();
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ButtonSound();
    void ReleaseTheRod();
    void SpawnRod();
    void Animate();
    void ActorLoaded();
    void ExecuteUbergraph_BP_RodTrader(int32 EntryPoint);
}; // Size: 0x2B1

#endif
