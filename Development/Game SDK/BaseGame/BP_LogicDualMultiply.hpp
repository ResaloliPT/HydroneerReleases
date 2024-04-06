#ifndef UE4SS_SDK_BP_LogicDualMultiply_HPP
#define UE4SS_SDK_BP_LogicDualMultiply_HPP

class ABP_LogicDualMultiply_C : public ABP_ParentDualLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E8 (size: 0x8)

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicDualMultiply(int32 EntryPoint);
}; // Size: 0x4F0

#endif
