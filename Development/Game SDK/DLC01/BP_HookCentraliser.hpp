#ifndef UE4SS_SDK_BP_HookCentraliser_HPP
#define UE4SS_SDK_BP_HookCentraliser_HPP

class ABP_HookCentraliser_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UBoxComponent* CentraliserBox;                                              // 0x04C0 (size: 0x8)
    float ShredderMaximumWeight;                                                      // 0x04C8 (size: 0x4)

    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void OverridePickedup();
    void OverrideParentNoWater();
    void BndEvt__ShredBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_HookCentraliser(int32 EntryPoint);
}; // Size: 0x4CC

#endif
