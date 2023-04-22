#ifndef UE4SS_SDK_BP_ParentDualLogic_HPP
#define UE4SS_SDK_BP_ParentDualLogic_HPP

class ABP_ParentDualLogic_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Y+Box;
    class UBoxComponent* X-Box;
    class UBoxComponent* X+Box;
    FString LogicB;

    void AddZeros(FString Logic, FString& Output);
    void LogicIn(class USceneComponent* Component, FString Logic);
    void ExecuteUbergraph_BP_ParentDualLogic(int32 EntryPoint);
};

#endif
