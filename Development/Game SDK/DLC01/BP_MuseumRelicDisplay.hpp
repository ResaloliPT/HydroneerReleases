#ifndef UE4SS_SDK_BP_MuseumRelicDisplay_HPP
#define UE4SS_SDK_BP_MuseumRelicDisplay_HPP

class ABP_MuseumRelicDisplay_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* SM_Museum_Wand_Arm1;                                  // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_Museum_Wand_Arm;                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* SM_Museum_StoneDecor;                                 // 0x0238 (size: 0x8)
    class UBoxComponent* Box6;                                                        // 0x0240 (size: 0x8)
    class UBoxComponent* Box5;                                                        // 0x0248 (size: 0x8)
    class UBoxComponent* Box4;                                                        // 0x0250 (size: 0x8)
    class UBoxComponent* Box3;                                                        // 0x0258 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x0260 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x0268 (size: 0x8)
    class UStaticMeshComponent* SM_Museum_Plinth5;                                    // 0x0270 (size: 0x8)
    class UStaticMeshComponent* SM_Museum_Plinth4;                                    // 0x0278 (size: 0x8)
    class UStaticMeshComponent* SM_Museum_Plinth3;                                    // 0x0280 (size: 0x8)
    class UStaticMeshComponent* SM_Museum_Plinth2;                                    // 0x0288 (size: 0x8)
    class UStaticMeshComponent* SM_Museum_Plinth1;                                    // 0x0290 (size: 0x8)
    class UStaticMeshComponent* SM_Museum_Plinth;                                     // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Wand;                                                 // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    TArray<class ABP_RelicParent_C*> Relics;                                          // 0x02B0 (size: 0x10)
    bool HasSpawnedWand?;                                                             // 0x02C0 (size: 0x1)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void NewRelicEntered();
    void ActorPreSave();
    void ActorSaved();
    void BndEvt__BP_MuseumRelicDisplay_Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_MuseumRelicDisplay_Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_MuseumRelicDisplay_Box2_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_MuseumRelicDisplay_Box2_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_MuseumRelicDisplay_Box3_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_MuseumRelicDisplay_Box3_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_MuseumRelicDisplay_Box4_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_MuseumRelicDisplay_Box4_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_MuseumRelicDisplay_Box5_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_MuseumRelicDisplay_Box5_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_MuseumRelicDisplay_Box6_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_MuseumRelicDisplay_Box6_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActorLoaded();
    void ExecuteUbergraph_BP_MuseumRelicDisplay(int32 EntryPoint);
}; // Size: 0x2C1

#endif
