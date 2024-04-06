#ifndef UE4SS_SDK_BP_IceMelter_HPP
#define UE4SS_SDK_BP_IceMelter_HPP

class ABP_IceMelter_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UBoxComponent* LogicEntrance;                                               // 0x04C8 (size: 0x8)
    class UBoxComponent* X+Box;                                                       // 0x04D0 (size: 0x8)
    class USceneComponent* WaterExit;                                                 // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* NubLogic;                                             // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* NubLava;                                              // 0x04E8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04F0 (size: 0x8)
    class UStaticMeshComponent* IceLevel;                                             // 0x04F8 (size: 0x8)
    class UStaticMeshComponent* NubWater;                                             // 0x0500 (size: 0x8)
    FTimerHandle LiquidFlowHandle;                                                    // 0x0508 (size: 0x8)
    class UAudioComponent* IntakeSound;                                               // 0x0510 (size: 0x8)
    float StoredWater;                                                                // 0x0518 (size: 0x4)
    FVector2D IceMeshZHeightRange;                                                    // 0x051C (size: 0x8)
    bool Dev?;                                                                        // 0x0524 (size: 0x1)
    bool TapOpen?;                                                                    // 0x0525 (size: 0x1)

    void LineTraceFromComponent(class USceneComponent* SceneComp, class AActor*& OutHit_HitActor, class UPrimitiveComponent*& Out Hit Hit Component);
    void CanOutputWater?(class ABP_ParentPipe_C* Pipe, bool& CanPass?);
    void SetIceMeshHeight();
    void CreateProxyItem();
    void UserConstructionScript();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void LiquidFlow();
    void OverridePickedup();
    void BndEvt__BP_ParentPipeIceMelter_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideNewLiquid();
    void OverrideLogicIn(class UPrimitiveComponent* Component, FString Logic);
    void ActorLoaded();
    void StartTryWaterFlow();
    void StopWaterFlow();
    void ExecuteUbergraph_BP_IceMelter(int32 EntryPoint);
}; // Size: 0x526

#endif
