#ifndef UE4SS_SDK_BTT_FindNode_HPP
#define UE4SS_SDK_BTT_FindNode_HPP

class UBTT_FindNode_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetNode;
    FBlackboardKeySelector DefaultLocation;
    FBlackboardKeySelector TargetLocation;
    FBlackboardKeySelector TargetNodeType;
    FBlackboardKeySelector Time;
    TArray<TEnumAsByte<E_AI_NodeType::Type>> NodeTypes;
    class ABP_AI_Node_C* Node;
    TArray<class ABP_AI_Node_C*> PreviousNodes;
    class APawn* Pawn;
    class ABP_NPC_C* NPC;

    void SetNodeValues();
    void CheckLastNodes(class ABP_AI_Node_C* Node, bool& Result);
    void CheckNodeValidity(class ABP_AI_Node_C* Node, bool& Result);
    void Default();
    void EvaluateNodes(TArray<class ABP_AI_Node_C*>& Array, TArray<float>& Modifier, class ABP_AI_Node_C*& Node);
    void CommitNode();
    void FindCloseNode(class ABP_AI_Node_C*& Node);
    void FindNextNode(class ABP_AI_Node_C*& Node);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_FindNode(int32 EntryPoint);
};

#endif
