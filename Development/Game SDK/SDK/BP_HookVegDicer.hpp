#ifndef UE4SS_SDK_BP_HookVegDicer_HPP
#define UE4SS_SDK_BP_HookVegDicer_HPP

class ABP_HookVegDicer_C : public ABP_ParentHook_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* BladeR2;
    class UStaticMeshComponent* BladeR1;
    class UStaticMeshComponent* BladeL3;
    class UStaticMeshComponent* BladeL2;
    class UStaticMeshComponent* BladeL1;
    class UBoxComponent* ShredBox;
    float AnimationTimeline_Track3_C3958A4747FD4797740C3BB469185897;
    float AnimationTimeline_Track2_C3958A4747FD4797740C3BB469185897;
    float AnimationTimeline_Track1_C3958A4747FD4797740C3BB469185897;
    TEnumAsByte<ETimelineDirection::Type> AnimationTimeline__Direction_C3958A4747FD4797740C3BB469185897;
    class UTimelineComponent* AnimationTimeline;

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
};

#endif
