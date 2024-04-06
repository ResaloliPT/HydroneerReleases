#ifndef UE4SS_SDK_BTS_FocusAtNode_HPP
#define UE4SS_SDK_BTS_FocusAtNode_HPP

class UBTS_FocusAtNode_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    FBlackboardKeySelector Node;                                                      // 0x00A0 (size: 0x28)
    class ABP_AI_Node_C* TargetNode;                                                  // 0x00C8 (size: 0x8)
    class AAIController* Controller;                                                  // 0x00D0 (size: 0x8)
    class APawn* Pawn;                                                                // 0x00D8 (size: 0x8)

    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTS_FocusAtNode(int32 EntryPoint);
}; // Size: 0xE0

#endif
