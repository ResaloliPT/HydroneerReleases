#ifndef UE4SS_SDK_BTT_FindNode_HPP
#define UE4SS_SDK_BTT_FindNode_HPP

class UBTT_FindNode_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FBlackboardKeySelector TargetNode;                                                // 0x00B0 (size: 0x28)
    FBlackboardKeySelector DefaultLocation;                                           // 0x00D8 (size: 0x28)
    FBlackboardKeySelector TargetLocation;                                            // 0x0100 (size: 0x28)
    FBlackboardKeySelector TargetNodeType;                                            // 0x0128 (size: 0x28)
    FBlackboardKeySelector Time;                                                      // 0x0150 (size: 0x28)
    TArray<TEnumAsByte<E_AI_NodeType::Type>> NodeTypes;                               // 0x0178 (size: 0x10)
    class ABP_AI_Node_C* Node;                                                        // 0x0188 (size: 0x8)
    TArray<class ABP_AI_Node_C*> PreviousNodes;                                       // 0x0190 (size: 0x10)
    class APawn* Pawn;                                                                // 0x01A0 (size: 0x8)
    class ABP_NPC_C* NPC;                                                             // 0x01A8 (size: 0x8)

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
}; // Size: 0x1B0

#endif
