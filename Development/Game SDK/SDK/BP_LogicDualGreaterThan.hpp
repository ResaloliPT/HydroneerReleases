#ifndef UE4SS_SDK_BP_LogicDualGreaterThan_HPP
#define UE4SS_SDK_BP_LogicDualGreaterThan_HPP

class ABP_LogicDualGreaterThan_C : public ABP_ParentDualLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicDualGreaterThan(int32 EntryPoint);
};

#endif
