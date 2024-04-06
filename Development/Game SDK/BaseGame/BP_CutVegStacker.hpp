#ifndef UE4SS_SDK_BP_CutVegStacker_HPP
#define UE4SS_SDK_BP_CutVegStacker_HPP

class ABP_CutVegStacker_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UBoxComponent* UpperBox;                                                    // 0x04C8 (size: 0x8)
    class UBoxComponent* LowerBox;                                                    // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* WaterNub;                                             // 0x04D8 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04E0 (size: 0x8)
    bool CanUseLever?;                                                                // 0x04E8 (size: 0x1)
    class ABP_ParentResource_C* CompressedTarget;                                     // 0x04F0 (size: 0x8)

    void Combine Cut Veg(class ABP_ParentResource_C* Item);
    void FindTotalWeight(TArray<class ABP_ParentResource_C*>& Gems, float& TotalWeight);
    void BndEvt__BP_LogicCompressor_LowerBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_LogicCompressor_LowerBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void FlashLowerCollisions();
    void BndEvt__BP_CutVegStacker_UpperBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OverrideNewLiquid();
    void ExecuteUbergraph_BP_CutVegStacker(int32 EntryPoint);
}; // Size: 0x4F8

#endif
