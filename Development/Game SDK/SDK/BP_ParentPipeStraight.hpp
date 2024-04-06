#ifndef UE4SS_SDK_BP_ParentPipeStraight_HPP
#define UE4SS_SDK_BP_ParentPipeStraight_HPP

class ABP_ParentPipeStraight_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* X-Box;
    class UBoxComponent* X+Box;

    void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
    void ExecuteUbergraph_BP_ParentPipeStraight(int32 EntryPoint);
};

#endif
