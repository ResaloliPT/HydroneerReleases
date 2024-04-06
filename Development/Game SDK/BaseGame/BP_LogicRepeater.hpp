#ifndef UE4SS_SDK_BP_LogicRepeater_HPP
#define UE4SS_SDK_BP_LogicRepeater_HPP

class ABP_LogicRepeater_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UAC_Animator_C* AC_Animator;                                                // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* ARM;                                                  // 0x04C8 (size: 0x8)
    class UBoxComponent* X+Box;                                                       // 0x04D0 (size: 0x8)
    FTimerHandle RepeatTimer;                                                         // 0x04D8 (size: 0x8)

    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void ItemPickedUp(class ABP_GameCharacter_C* Player);
    void Repeat();
    void LoadCompleted();
    void ExecuteUbergraph_BP_LogicRepeater(int32 EntryPoint);
}; // Size: 0x4E0

#endif
