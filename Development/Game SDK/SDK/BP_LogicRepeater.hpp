#ifndef UE4SS_SDK_BP_LogicRepeater_HPP
#define UE4SS_SDK_BP_LogicRepeater_HPP

class ABP_LogicRepeater_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Animator_C* AC_Animator;
    class UStaticMeshComponent* ARM;
    class UBoxComponent* X+Box;
    FTimerHandle RepeatTimer;

    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ItemPickedUp(class ABP_GameCharacter_C* Player);
    void Repeat();
    void LoadCompleted();
    void ExecuteUbergraph_BP_LogicRepeater(int32 EntryPoint);
};

#endif
