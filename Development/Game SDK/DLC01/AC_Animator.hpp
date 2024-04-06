#ifndef UE4SS_SDK_AC_Animator_HPP
#define UE4SS_SDK_AC_Animator_HPP

class UAC_Animator_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    float AnimationMaxTime;                                                           // 0x00B8 (size: 0x4)
    FTimerHandle AnimTimer;                                                           // 0x00C0 (size: 0x8)

    void SetToAnimationTime(class UMeshComponent* Mesh, class UCurveVector* MovementCurve, class UCurveVector* RotationCurve, float CurveTime);
    void PlayAnimation(float Seconds, class UMeshComponent* Mesh, class UCurveVector* MovementCurve, class UCurveVector* RotationCurve, bool UseOptimization?);
    void ReceiveTick(float DeltaSeconds);
    void TimerFinish();
    void ExecuteUbergraph_AC_Animator(int32 EntryPoint);
}; // Size: 0xC8

#endif
