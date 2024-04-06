#ifndef UE4SS_SDK_BTS_GetLocationDistance_HPP
#define UE4SS_SDK_BTS_GetLocationDistance_HPP

class UBTS_GetLocationDistance_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    FBlackboardKeySelector TargetLocation;                                            // 0x00A0 (size: 0x28)
    FBlackboardKeySelector Distance;                                                  // 0x00C8 (size: 0x28)

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_GetLocationDistance(int32 EntryPoint);
}; // Size: 0xF0

#endif
