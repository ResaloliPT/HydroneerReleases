#ifndef UE4SS_SDK_BP_LogicT_HPP
#define UE4SS_SDK_BP_LogicT_HPP

class ABP_LogicT_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Y+Box;
    class UBoxComponent* X-Box;
    class UBoxComponent* X+Box;

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicT(int32 EntryPoint);
};

#endif
