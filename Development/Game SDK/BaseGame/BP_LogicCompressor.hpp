#ifndef UE4SS_SDK_BP_LogicCompressor_HPP
#define UE4SS_SDK_BP_LogicCompressor_HPP

class ABP_LogicCompressor_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UBoxComponent* EntryBox;                                                    // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* DoorR;                                                // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* DoorL;                                                // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* Piston;                                               // 0x04D8 (size: 0x8)
    class UBoxComponent* LowerBox;                                                    // 0x04E0 (size: 0x8)
    class UStaticMeshComponent* WaterNub;                                             // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* LogicNub;                                             // 0x04F0 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x04F8 (size: 0x8)
    class UBoxComponent* Y-Box;                                                       // 0x0500 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x0508 (size: 0x8)
    float DoorMovement_AnimF_5205D1E649D25DBBC170C38A6C32608C;                        // 0x0510 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DoorMovement__Direction_5205D1E649D25DBBC170C38A6C32608C; // 0x0514 (size: 0x1)
    class UTimelineComponent* DoorMovement;                                           // 0x0518 (size: 0x8)
    bool Water?;                                                                      // 0x0520 (size: 0x1)
    bool CanUseLever?;                                                                // 0x0521 (size: 0x1)
    class ABP_ParentResource_C* CompressedTarget;                                     // 0x0528 (size: 0x8)
    TEnumAsByte<E_LiquidType::Type> LiquidType;                                       // 0x0530 (size: 0x1)

    void InitLiquidType();
    void IsGem?(const class UObject* Object, bool& IsGem??);
    void Combine Gem(class ABP_ParentResource_C* Item);
    void FindTotalWeight(TArray<class ABP_ParentResource_C*>& Gems, float& TotalWeight);
    void UserConstructionScript();
    void DoorMovement__FinishedFunc();
    void DoorMovement__UpdateFunc();
    void OverrideLiquidIn(class USceneComponent* Component, int32 Quality, float Pressure, TEnumAsByte<E_LiquidType::Type> LiquidType);
    void TimerTillEmpty();
    void OverrideLogicIn(class USceneComponent* Component);
    void BndEvt__BP_LogicCompressor_LowerBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_LogicCompressor_LowerBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void PlayDoorAnim();
    void BndEvt__BP_LogicCompressor_EntryBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void FlashLowerCollisions();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LogicCompressor(int32 EntryPoint);
}; // Size: 0x531

#endif
