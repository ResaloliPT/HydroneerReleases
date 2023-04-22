#ifndef UE4SS_SDK_BP_LogicDualAdd_HPP
#define UE4SS_SDK_BP_LogicDualAdd_HPP

class ABP_LogicDualAdd_C : public ABP_ParentDualLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicDualAdd(int32 EntryPoint);
};

#endif
