#ifndef UE4SS_SDK_BP_Cave_HPP
#define UE4SS_SDK_BP_Cave_HPP

class ABP_Cave_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* FireOuchie;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Pillar1;
    class UStaticMeshComponent* Pillar3;
    class UStaticMeshComponent* Pillar4;
    class UStaticMeshComponent* Pillar2;
    class USphereComponent* P3Sphere;
    class USphereComponent* P4Sphere;
    class USphereComponent* P2Sphere;
    class USphereComponent* P1Sphere;
    class UStaticMeshComponent* Rubble;
    float Timeline_0_NewTrack_0_6423BBB9462404AA2F0113B9EDB1C22D;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6423BBB9462404AA2F0113B9EDB1C22D;
    class UTimelineComponent* Timeline_0;
    class ABP_RelicParent_C* Relic1;
    class ABP_RelicParent_C* Relic2;
    class ABP_RelicParent_C* Relic3;
    class ABP_RelicParent_C* Relic4;
    bool Opened?;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void TestForSameRelic(bool& AllGood?);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__P1Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__P2Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__P2Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__P4Sphere_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__P4Sphere_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__P3Sphere_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__P3Sphere_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void NewRelicEntered();
    void BndEvt__P1Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ActorSaved();
    void ActorPreSave();
    void ActorLoaded();
    void BndEvt__BP_Cave_FireOuchie_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Cave(int32 EntryPoint);
};

#endif
