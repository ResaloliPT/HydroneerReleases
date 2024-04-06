#ifndef UE4SS_SDK_BTT_Initialize_HPP
#define UE4SS_SDK_BTT_Initialize_HPP

class UBTT_Initialize_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FBlackboardKeySelector Initialized?;                                              // 0x00B0 (size: 0x28)
    FBlackboardKeySelector SpawnLocation;                                             // 0x00D8 (size: 0x28)
    FBlackboardKeySelector SpawnRotation;                                             // 0x0100 (size: 0x28)
    FBlackboardKeySelector RequestActor;                                              // 0x0128 (size: 0x28)
    FBlackboardKeySelector PatrolPath;                                                // 0x0150 (size: 0x28)
    FBlackboardKeySelector State;                                                     // 0x0178 (size: 0x28)
    FBlackboardKeySelector HasRequest?;                                               // 0x01A0 (size: 0x28)
    FBlackboardKeySelector LookAtActor;                                               // 0x01C8 (size: 0x28)
    class ABP_NPC_C* NPC;                                                             // 0x01F0 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void RequestProcessStarted(class AActor* Target);
    void RequestInit();
    void RequestComplete();
    void RequestLookAt(class AActor* Actor);
    void ExecuteUbergraph_BTT_Initialize(int32 EntryPoint);
}; // Size: 0x1F8

#endif
