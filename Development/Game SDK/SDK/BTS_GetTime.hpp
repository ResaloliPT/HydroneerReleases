#ifndef UE4SS_SDK_BTS_GetTime_HPP
#define UE4SS_SDK_BTS_GetTime_HPP

class UBTS_GetTime_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector Time;
    class ABP_DayNightCycle_C* DayNightCycle;

    void CalcTimeChunk(TEnumAsByte<E_TimeChunks::Type>& TimeChunk);
    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_GetTime(int32 EntryPoint);
};

#endif
