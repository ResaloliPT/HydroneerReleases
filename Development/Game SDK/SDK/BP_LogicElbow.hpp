#ifndef UE4SS_SDK_BP_LogicElbow_HPP
#define UE4SS_SDK_BP_LogicElbow_HPP

class ABP_LogicElbow_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Y+Box;
    class UBoxComponent* X+Box;

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicElbow(int32 EntryPoint);
};

#endif
