#ifndef UE4SS_SDK_BP_ParentPipeT_HPP
#define UE4SS_SDK_BP_ParentPipeT_HPP

class ABP_ParentPipeT_C : public ABP_ParentPipe_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UBoxComponent* Y+Box;                                                       // 0x04C8 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04D0 (size: 0x8)
    class UBoxComponent* X+Box;                                                       // 0x04D8 (size: 0x8)

    void OverrideLiquidIn(class USceneComponent* Component, float RootPressure);
    void ExecuteUbergraph_BP_ParentPipeT(int32 EntryPoint);
}; // Size: 0x4E0

#endif
