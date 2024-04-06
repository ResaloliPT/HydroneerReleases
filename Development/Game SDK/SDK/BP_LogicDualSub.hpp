#ifndef UE4SS_SDK_BP_LogicDualSub_HPP
#define UE4SS_SDK_BP_LogicDualSub_HPP

class ABP_LogicDualSub_C : public ABP_ParentDualLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicDualSub(int32 EntryPoint);
};

#endif
