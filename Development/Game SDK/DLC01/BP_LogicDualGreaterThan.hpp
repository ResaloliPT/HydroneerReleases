#ifndef UE4SS_SDK_BP_LogicDualGreaterThan_HPP
#define UE4SS_SDK_BP_LogicDualGreaterThan_HPP

class ABP_LogicDualGreaterThan_C : public ABP_ParentDualLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E8 (size: 0x8)

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicDualGreaterThan(int32 EntryPoint);
}; // Size: 0x4F0

#endif
