#ifndef UE4SS_SDK_BP_ParentLogic_HPP
#define UE4SS_SDK_BP_ParentLogic_HPP

class ABP_ParentLogic_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    bool OverflowPrevent?;                                                            // 0x0490 (size: 0x1)
    FString Logic;                                                                    // 0x0498 (size: 0x10)
    bool ReceivedOverflow?;                                                           // 0x04A8 (size: 0x1)
    FTimerHandle OverflowWaitTimer;                                                   // 0x04B0 (size: 0x8)

    void AttachmentFunctionalityCheck(class USceneComponent* Component, bool& CanPass?);
    void CastLogicOut(class USceneComponent* OutComponent, FString Logic);
    void OverrideLogicIn(class USceneComponent* Component);
    void SpawnLogic(FVector SpawnLocation, FRotator SpawnRotation);
    void StackOverflowPrevention();
    void LogicIn(class USceneComponent* Component, FString Logic);
    void OverrideLiquidIn(class USceneComponent* Component, int32 Quality, float Pressure, TEnumAsByte<E_LiquidType::Type> LiquidType);
    void OverridePickedup();
    void ExecuteUbergraph_BP_ParentLogic(int32 EntryPoint);
}; // Size: 0x4B8

#endif
