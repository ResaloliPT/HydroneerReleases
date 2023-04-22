#ifndef UE4SS_SDK_BP_ParentPipeElbow_HPP
#define UE4SS_SDK_BP_ParentPipeElbow_HPP

class ABP_ParentPipeElbow_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Y+Box;
    class UBoxComponent* X+Box;

    void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
    void ExecuteUbergraph_BP_ParentPipeElbow(int32 EntryPoint);
};

#endif
