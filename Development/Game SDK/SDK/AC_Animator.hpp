#ifndef UE4SS_SDK_AC_Animator_HPP
#define UE4SS_SDK_AC_Animator_HPP

class UAC_Animator_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float AnimationTime;
    float AnimationMaxTime;
    FTimerHandle AnimTimer;

    void SetToAnimationTime(class UMeshComponent* Mesh, class UCurveVector* MovementCurve, class UCurveVector* RotationCurve, float CurveTime);
    void PlayAnimation(float Seconds, class UMeshComponent* Mesh, class UCurveVector* MovementCurve, class UCurveVector* RotationCurve, bool UseOptimization?);
    void ReceiveTick(float DeltaSeconds);
    void TimerFinish();
    void ExecuteUbergraph_AC_Animator(int32 EntryPoint);
};

#endif
