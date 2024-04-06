#ifndef UE4SS_SDK_BTT_Rotate_HPP
#define UE4SS_SDK_BTT_Rotate_HPP

class UBTT_Rotate_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FBlackboardKeySelector TargetRotation;                                            // 0x00B0 (size: 0x28)
    float RotateTime;                                                                 // 0x00D8 (size: 0x4)
    FRotator StartRotation;                                                           // 0x00DC (size: 0xC)
    FRotator EndRotation;                                                             // 0x00E8 (size: 0xC)
    FTimerHandle RotationTimer;                                                       // 0x00F8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void RotationComplete();
    void ExecuteUbergraph_BTT_Rotate(int32 EntryPoint);
}; // Size: 0x100

#endif
