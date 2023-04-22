#ifndef UE4SS_SDK_BTS_FocusAtNode_HPP
#define UE4SS_SDK_BTS_FocusAtNode_HPP

class UBTS_FocusAtNode_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector Node;
    class ABP_AI_Node_C* TargetNode;
    class AAIController* Controller;
    class APawn* Pawn;

    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTS_FocusAtNode(int32 EntryPoint);
};

#endif
