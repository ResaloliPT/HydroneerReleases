#ifndef UE4SS_SDK_BTT_Initialize_HPP
#define UE4SS_SDK_BTT_Initialize_HPP

class UBTT_Initialize_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector Initialized?;
    FBlackboardKeySelector SpawnLocation;
    FBlackboardKeySelector SpawnRotation;
    FBlackboardKeySelector RequestActor;
    FBlackboardKeySelector PatrolPath;
    FBlackboardKeySelector State;
    FBlackboardKeySelector HasRequest?;
    FBlackboardKeySelector LookAtActor;
    class ABP_NPC_C* NPC;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void RequestProcessStarted(class AActor* Target);
    void RequestInit();
    void RequestComplete();
    void RequestLookAt(class AActor* Actor);
    void ExecuteUbergraph_BTT_Initialize(int32 EntryPoint);
};

#endif
