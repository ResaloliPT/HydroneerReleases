#ifndef UE4SS_SDK_BTT_WaitAtNode_HPP
#define UE4SS_SDK_BTT_WaitAtNode_HPP

class UBTT_WaitAtNode_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FBlackboardKeySelector Time;                                                      // 0x00B0 (size: 0x28)
    FBlackboardKeySelector TargetNode;                                                // 0x00D8 (size: 0x28)
    float MinWait;                                                                    // 0x0100 (size: 0x4)
    float MaxWait;                                                                    // 0x0104 (size: 0x4)
    class ABP_AI_Node_C* Node;                                                        // 0x0108 (size: 0x8)
    class ABP_NPC_C* NPC;                                                             // 0x0110 (size: 0x8)
    FVector StartLocation;                                                            // 0x0118 (size: 0xC)
    class UABP_HydroGuy_C* AnimBP;                                                    // 0x0128 (size: 0x8)
    FTimerHandle WaitTimer;                                                           // 0x0130 (size: 0x8)

    void ClearNode();
    void ClearPose();
    void SetCharacterVelocity(bool Start?);
    void EndTask();
    void CanFindNewNode?(bool& Result);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void TimerWait();
    void WaitAtNode();
    void InitAnimNode();
    void AbortMove();
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void StopWait();
    void ExecuteUbergraph_BTT_WaitAtNode(int32 EntryPoint);
}; // Size: 0x138

#endif
