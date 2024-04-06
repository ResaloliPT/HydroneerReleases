#ifndef UE4SS_SDK_BP_Cave_HPP
#define UE4SS_SDK_BP_Cave_HPP

class ABP_Cave_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* FireOuchie;                                               // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Pillar1;                                              // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Pillar3;                                              // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Pillar4;                                              // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Pillar2;                                              // 0x0250 (size: 0x8)
    class USphereComponent* P3Sphere;                                                 // 0x0258 (size: 0x8)
    class USphereComponent* P4Sphere;                                                 // 0x0260 (size: 0x8)
    class USphereComponent* P2Sphere;                                                 // 0x0268 (size: 0x8)
    class USphereComponent* P1Sphere;                                                 // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Rubble;                                               // 0x0278 (size: 0x8)
    float Timeline_0_NewTrack_0_6423BBB9462404AA2F0113B9EDB1C22D;                     // 0x0280 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6423BBB9462404AA2F0113B9EDB1C22D; // 0x0284 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0288 (size: 0x8)
    class ABP_RelicParent_C* Relic1;                                                  // 0x0290 (size: 0x8)
    class ABP_RelicParent_C* Relic2;                                                  // 0x0298 (size: 0x8)
    class ABP_RelicParent_C* Relic3;                                                  // 0x02A0 (size: 0x8)
    class ABP_RelicParent_C* Relic4;                                                  // 0x02A8 (size: 0x8)
    bool Opened?;                                                                     // 0x02B0 (size: 0x1)

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
}; // Size: 0x2B1

#endif
