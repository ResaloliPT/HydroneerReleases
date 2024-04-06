#ifndef UE4SS_SDK_BP_ParentPipe_HPP
#define UE4SS_SDK_BP_ParentPipe_HPP

class ABP_ParentPipe_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    int32 Quality;                                                                    // 0x0490 (size: 0x4)
    float Pressure;                                                                   // 0x0494 (size: 0x4)
    bool OverflowPrevent?;                                                            // 0x0498 (size: 0x1)
    float PressureDecrement;                                                          // 0x049C (size: 0x4)
    FTimerHandle EmptyPipeTimerHandle;                                                // 0x04A0 (size: 0x8)
    float TimeoutEmpty;                                                               // 0x04A8 (size: 0x4)
    float MaximumPressure;                                                            // 0x04AC (size: 0x4)
    FTimerHandle OverflowWaitTimer;                                                   // 0x04B0 (size: 0x8)
    TEnumAsByte<E_LiquidType::Type> LiquidType;                                       // 0x04B8 (size: 0x1)
    bool Water?;                                                                      // 0x04B9 (size: 0x1)

    void PipeDebug(const FVector DebugLoc, FLinearColor LineColor);
    void ConveyPressure(float Pressure);
    void Pressure Check(class ABP_ParentPipe_C* Pipe, float PressureToPass, class USceneComponent* WaterOut);
    void AttachmentFunctionalityCheck(class USceneComponent* Component, bool& CanPass?);
    void OverrideLiquidIn(class USceneComponent* Component, float RootPressure);
    void SpawnLiquid(FVector SpawnLocation, FRotator SpawnRotation);
    void StackOverflowPrevention();
    void TimerTillEmpty();
    void OverrideEmptyLiquidPipe();
    void LiquidIn(class USceneComponent* Component, float RootPressure);
    void CastLiquidOut(class USceneComponent* OutComponent, int32 Quality, float Pressure, float RootPressure, TEnumAsByte<E_LiquidType::Type> Liquid);
    void OverridePickedup();
    void OverrideNewLiquid();
    void OverrideLogicIn(class UPrimitiveComponent* Component, FString Logic);
    void ExecuteUbergraph_BP_ParentPipe(int32 EntryPoint);
}; // Size: 0x4BA

#endif
