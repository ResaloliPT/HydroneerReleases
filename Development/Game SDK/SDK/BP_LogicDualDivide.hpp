#ifndef UE4SS_SDK_BP_LogicDualDivide_HPP
#define UE4SS_SDK_BP_LogicDualDivide_HPP

class ABP_LogicDualDivide_C : public ABP_ParentDualLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicDualDivide(int32 EntryPoint);
};

#endif
