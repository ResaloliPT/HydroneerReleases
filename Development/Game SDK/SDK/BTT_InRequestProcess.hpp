#ifndef UE4SS_SDK_BTT_InRequestProcess_HPP
#define UE4SS_SDK_BTT_InRequestProcess_HPP

class UBTT_InRequestProcess_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector RequestActor;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void FinishRequestProcess();
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_InRequestProcess(int32 EntryPoint);
};

#endif
