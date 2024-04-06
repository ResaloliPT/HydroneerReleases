#ifndef UE4SS_SDK_BP_LogicHardstoneRefiner_HPP
#define UE4SS_SDK_BP_LogicHardstoneRefiner_HPP

class ABP_LogicHardstoneRefiner_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* ChuteDepthFade;                                       // 0x04C0 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x04C8 (size: 0x8)
    class UAC_Animator_C* AC_Animator1;                                               // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x04D8 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* Door;                                                 // 0x04E8 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x04F0 (size: 0x8)
    class USceneComponent* ResourceExit;                                              // 0x04F8 (size: 0x8)
    class UBoxComponent* RefineBox;                                                   // 0x0500 (size: 0x8)
    class UStaticMeshComponent* WaterNub;                                             // 0x0508 (size: 0x8)
    class UStaticMeshComponent* LogicNub;                                             // 0x0510 (size: 0x8)
    class UBoxComponent* Y-Box;                                                       // 0x0518 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x0520 (size: 0x8)
    bool Lava?;                                                                       // 0x0528 (size: 0x1)
    float TotalResource;                                                              // 0x052C (size: 0x4)
    int32 LogicValue;                                                                 // 0x0530 (size: 0x4)
    class UNiagaraComponent* HarvestingParticles;                                     // 0x0538 (size: 0x8)

    void SetAmountText();
    void UserConstructionScript();
    void OverrideLiquidIn(class USceneComponent* Component, int32 Quality, float Pressure, TEnumAsByte<E_LiquidType::Type> LiquidType);
    void TimerTillEmpty();
    void OverrideLogicIn(class USceneComponent* Component);
    void FlashRefinerCollisions();
    void SpitResource();
    void BndEvt__BP_LogicHardstoneRefiner_RefineBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ActorLoaded();
    void OverridePickedup();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_LogicHardstoneRefiner(int32 EntryPoint);
}; // Size: 0x540

#endif
