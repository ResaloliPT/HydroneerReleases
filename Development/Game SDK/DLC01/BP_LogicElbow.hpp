#ifndef UE4SS_SDK_BP_LogicElbow_HPP
#define UE4SS_SDK_BP_LogicElbow_HPP

class ABP_LogicElbow_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UBoxComponent* Y+Box;                                                       // 0x04C0 (size: 0x8)
    class UBoxComponent* X+Box;                                                       // 0x04C8 (size: 0x8)

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicElbow(int32 EntryPoint);
}; // Size: 0x4D0

#endif
