#ifndef UE4SS_SDK_BP_LogicT_HPP
#define UE4SS_SDK_BP_LogicT_HPP

class ABP_LogicT_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UBoxComponent* Y+Box;                                                       // 0x04C0 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04C8 (size: 0x8)
    class UBoxComponent* X+Box;                                                       // 0x04D0 (size: 0x8)

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicT(int32 EntryPoint);
}; // Size: 0x4D8

#endif
