#ifndef UE4SS_SDK_BP_LogicDualEquals_HPP
#define UE4SS_SDK_BP_LogicDualEquals_HPP

class ABP_LogicDualEquals_C : public ABP_ParentDualLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicDualEquals(int32 EntryPoint);
};

#endif
