#ifndef UE4SS_SDK_BP_CutVegStacker_HPP
#define UE4SS_SDK_BP_CutVegStacker_HPP

class ABP_CutVegStacker_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* UpperBox;
    class UBoxComponent* LowerBox;
    class UStaticMeshComponent* WaterNub;
    class UBoxComponent* X-Box;
    bool Water?;
    bool CanUseLever?;
    class ABP_ParentResource_C* CompressedTarget;

    void Combine Cut Veg(class ABP_ParentResource_C* Item);
    void FindTotalWeight(TArray<class ABP_ParentResource_C*>& Gems, float& TotalWeight);
    void TimerTillEmpty();
    void BndEvt__BP_LogicCompressor_LowerBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_LogicCompressor_LowerBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
    void FlashLowerCollisions();
    void BndEvt__BP_CutVegStacker_UpperBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_CutVegStacker(int32 EntryPoint);
};

#endif
