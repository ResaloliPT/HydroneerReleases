#ifndef UE4SS_SDK_BTS_GetLocationDistance_HPP
#define UE4SS_SDK_BTS_GetLocationDistance_HPP

class UBTS_GetLocationDistance_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector TargetLocation;
    FBlackboardKeySelector Distance;

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_GetLocationDistance(int32 EntryPoint);
};

#endif
