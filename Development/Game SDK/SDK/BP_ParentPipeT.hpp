#ifndef UE4SS_SDK_BP_ParentPipeT_HPP
#define UE4SS_SDK_BP_ParentPipeT_HPP

class ABP_ParentPipeT_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Y+Box;
    class UBoxComponent* X-Box;
    class UBoxComponent* X+Box;

    void OverrideWaterIn(class USceneComponent* Component, float RootPressure);
    void ExecuteUbergraph_BP_ParentPipeT(int32 EntryPoint);
};

#endif
