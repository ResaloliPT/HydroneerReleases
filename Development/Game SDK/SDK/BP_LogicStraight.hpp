#ifndef UE4SS_SDK_BP_LogicStraight_HPP
#define UE4SS_SDK_BP_LogicStraight_HPP

class ABP_LogicStraight_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* X-Box;
    class UBoxComponent* X+Box;

    void OverrideLogicIn(class USceneComponent* Component);
    void ExecuteUbergraph_BP_LogicStraight(int32 EntryPoint);
};

#endif
