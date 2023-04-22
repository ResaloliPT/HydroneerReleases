#ifndef UE4SS_SDK_BP_ParentPipe_HPP
#define UE4SS_SDK_BP_ParentPipe_HPP

class ABP_ParentPipe_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 Quality;
    float Pressure;
    bool OverflowPrevent?;
    float PressureDecrement;
    bool ReceivedOverflow?;
    FTimerHandle EmptyPipeTimerHandle;
    float TimeoutEmpty;
    float MaximumPressure;
    FTimerHandle OverflowWaitTimer;

    void PipeDebug(const FVector DebugLoc, FLinearColor LineColor);
    void ConveyPressure(float Pressure);
    void Pressure Check(class ABP_ParentPipe_C* Pipe, float PressureToPass, class USceneComponent* WaterOut);
    void AttachmentFunctionalityCheck(class USceneComponent* Component, bool& CanPass?);
    void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
    void SpawnWater(FVector SpawnLocation, FRotator SpawnRotation);
    void StackOverflowPrevention();
    void TimerTillEmpty();
    void OverrideEmptyWaterPipe();
    void WaterIn(class USceneComponent* Component, float RootPressure);
    void OverridePickedup();
    void CastWaterOut(class USceneComponent* OutComponent, int32 Quality, float Pressure, float RootPressure);
    void ReceiveOverflowWait();
    void ExecuteUbergraph_BP_ParentPipe(int32 EntryPoint);
};

#endif
