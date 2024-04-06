#ifndef UE4SS_SDK_BP_HookVegDicer_HPP
#define UE4SS_SDK_BP_HookVegDicer_HPP

class ABP_HookVegDicer_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* BladeR2;                                              // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* BladeR1;                                              // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* BladeL3;                                              // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* BladeL2;                                              // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* BladeL1;                                              // 0x04E0 (size: 0x8)
    class UBoxComponent* ShredBox;                                                    // 0x04E8 (size: 0x8)
    float AnimationTimeline_Track3_C3958A4747FD4797740C3BB469185897;                  // 0x04F0 (size: 0x4)
    float AnimationTimeline_Track2_C3958A4747FD4797740C3BB469185897;                  // 0x04F4 (size: 0x4)
    float AnimationTimeline_Track1_C3958A4747FD4797740C3BB469185897;                  // 0x04F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> AnimationTimeline__Direction_C3958A4747FD4797740C3BB469185897; // 0x04FC (size: 0x1)
    class UTimelineComponent* AnimationTimeline;                                      // 0x0500 (size: 0x8)

    void CutVeg(class AActor* Actor);
    void HookFunctionality(class ABP_ParentItem_C* HookedTo, class USceneComponent* Component, bool& CanPass?);
    void AnimationTimeline__FinishedFunc();
    void AnimationTimeline__UpdateFunc();
    void OverridePickedup();
    void OverrideParentNoWater();
    void BndEvt__ShredBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ToggleCut(bool Toggle);
    void Anim();
    void ExecuteUbergraph_BP_HookVegDicer(int32 EntryPoint);
}; // Size: 0x508

#endif
