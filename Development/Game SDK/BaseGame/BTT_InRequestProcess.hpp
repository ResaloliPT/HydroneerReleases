#ifndef UE4SS_SDK_BTT_InRequestProcess_HPP
#define UE4SS_SDK_BTT_InRequestProcess_HPP

class UBTT_InRequestProcess_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FBlackboardKeySelector RequestActor;                                              // 0x00B0 (size: 0x28)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void FinishRequestProcess();
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_InRequestProcess(int32 EntryPoint);
}; // Size: 0xD8

#endif
