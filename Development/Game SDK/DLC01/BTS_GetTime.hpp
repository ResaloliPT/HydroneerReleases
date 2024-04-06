#ifndef UE4SS_SDK_BTS_GetTime_HPP
#define UE4SS_SDK_BTS_GetTime_HPP

class UBTS_GetTime_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    FBlackboardKeySelector Time;                                                      // 0x00A0 (size: 0x28)
    class ABP_DayNightCycle_C* DayNightCycle;                                         // 0x00C8 (size: 0x8)

    void CalcTimeChunk(TEnumAsByte<E_TimeChunks::Type>& TimeChunk);
    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_GetTime(int32 EntryPoint);
}; // Size: 0xD0

#endif
