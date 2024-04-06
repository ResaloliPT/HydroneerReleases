#ifndef UE4SS_SDK_BP_RodTrader_HPP
#define UE4SS_SDK_BP_RodTrader_HPP

class ABP_RodTrader_C : public ABP_WorldInteractable_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* Lid;
    class UStaticMeshComponent* DisplayBox;
    class UStaticMeshComponent* SellButton;
    class UStaticMeshComponent* FishExample;
    class USceneComponent* RodSpawnLoc;
    class UStaticMeshComponent* Rod;
    class UStaticMeshComponent* Bucket;
    class USphereComponent* FishSphere;
    class UStaticMeshComponent* StaticMesh;
    float Timeline_0_NewTrack_0_80C98A824FF68D8EB6D38BACDC93B9C5;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_80C98A824FF68D8EB6D38BACDC93B9C5;
    class UTimelineComponent* Timeline_0;
    TArray<class ABP_CaughtFish_C*> Fishes;
    TEnumAsByte<E_FishType::Type> TargetFish;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ChangeMeshes();
    void ChangeTargetFish();
    void DoWeHaveFish?(bool& HaveFish?, int32& ArrayIndex);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OverrideMouseClicked(class UActorComponent* Component, class ABP_GameController_C* Controller);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ButtonSound();
    void ActorSaved();
    void ReleaseTheRod();
    void SpawnRod();
    void ActorPreSave();
    void Animate();
    void ActorLoaded();
    void ExecuteUbergraph_BP_RodTrader(int32 EntryPoint);
};

#endif
