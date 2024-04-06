#ifndef UE4SS_SDK_BP_LogicStraight_HPP
#define UE4SS_SDK_BP_LogicStraight_HPP

class ABP_LogicStraight_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04C0 (size: 0x8)
    class UBoxComponent* X+Box;                                                       // 0x04C8 (size: 0x8)

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicStraight(int32 EntryPoint);
}; // Size: 0x4D0

#endif
