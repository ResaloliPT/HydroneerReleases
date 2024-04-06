#ifndef UE4SS_SDK_BP_ParentLogic_HPP
#define UE4SS_SDK_BP_ParentLogic_HPP

class ABP_ParentLogic_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool OverflowPrevent?;
    FString Logic;
    bool ReceivedOverflow?;
    FTimerHandle OverflowWaitTimer;

    void AttachmentFunctionalityCheck(class USceneComponent* Component, bool& CanPass?);
    void CastLogicOut(class USceneComponent* OutComponent, FString Logic);
    void OverrideLogicIn(class USceneComponent* Component);
    void SpawnLogic(FVector SpawnLocation, FRotator SpawnRotation);
    void StackOverflowPrevention();
    void LogicIn(class USceneComponent* Component, FString Logic);
    void OverrideWaterIn(class USceneComponent* Component, int32 Quality, float Pressure);
    void OverridePickedup();
    void ExecuteUbergraph_BP_ParentLogic(int32 EntryPoint);
};

#endif
