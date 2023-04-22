#ifndef UE4SS_SDK_BTT_Rotate_HPP
#define UE4SS_SDK_BTT_Rotate_HPP

class UBTT_Rotate_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetRotation;
    float RotateTime;
    FRotator StartRotation;
    FRotator EndRotation;
    FTimerHandle RotationTimer;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void RotationComplete();
    void ExecuteUbergraph_BTT_Rotate(int32 EntryPoint);
};

#endif
