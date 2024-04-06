#ifndef UE4SS_SDK_BTT_WaitAtNode_HPP
#define UE4SS_SDK_BTT_WaitAtNode_HPP

class UBTT_WaitAtNode_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector Time;
    FBlackboardKeySelector TargetNode;
    float MinWait;
    float MaxWait;
    class ABP_AI_Node_C* Node;
    class ABP_NPC_C* NPC;
    FVector StartLocation;
    class UABP_HydroGuy_C* AnimBP;
    FTimerHandle WaitTimer;

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
};

#endif
