#ifndef UE4SS_SDK_BP_LogicCompressor_HPP
#define UE4SS_SDK_BP_LogicCompressor_HPP

class ABP_LogicCompressor_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* EntryBox;
    class UStaticMeshComponent* DoorR;
    class UStaticMeshComponent* DoorL;
    class UStaticMeshComponent* Piston;
    class UBoxComponent* LowerBox;
    class UStaticMeshComponent* WaterNub;
    class UStaticMeshComponent* LogicNub;
    class UAC_Animator_C* AC_Animator;
    class UBoxComponent* Y-Box;
    class UBoxComponent* X-Box;
    float DoorMovement_AnimF_5205D1E649D25DBBC170C38A6C32608C;
    TEnumAsByte<ETimelineDirection::Type> DoorMovement__Direction_5205D1E649D25DBBC170C38A6C32608C;
    class UTimelineComponent* DoorMovement;
    bool Water?;
    bool CanUseLever?;
    class ABP_ParentResource_C* CompressedTarget;

    void IsGem?(const class UObject* Object, bool& IsGem??);
    void Combine Gem(class ABP_ParentResource_C* Item);
    void FindTotalWeight(TArray<class ABP_ParentResource_C*>& Gems, float& TotalWeight);
    void DoorMovement__FinishedFunc();
    void DoorMovement__UpdateFunc();
    void TimerTillEmpty();
    void OverrideLogicIn(class USceneComponent* Component);
    void BndEvt__BP_LogicCompressor_LowerBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_LogicCompressor_LowerBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void PlayDoorAnim();
    void BndEvt__BP_LogicCompressor_EntryBox_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void FlashLowerCollisions();
    void OverrideWaterIn(class USceneComponent* Component, int32 Quality, float Pressure);
    void ExecuteUbergraph_BP_LogicCompressor(int32 EntryPoint);
};

#endif
