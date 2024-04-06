#ifndef UE4SS_SDK_BP_LogicDurabilityReader_HPP
#define UE4SS_SDK_BP_LogicDurabilityReader_HPP

class ABP_LogicDurabilityReader_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B8 (size: 0x8)
    class UBoxComponent* X-Box;                                                       // 0x04C0 (size: 0x8)
    class USceneComponent* Lazer;                                                     // 0x04C8 (size: 0x8)
    FTimerHandle ReadTimer;                                                           // 0x04D0 (size: 0x8)

    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void DoneRepair();
    void FindDurability(class ABP_ParentItem_C* Item);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverridePickedup();
    void ReadTime();
    void ReturnDurability(float DurabilityAmount);
    void LoadCompleted();
    void ExecuteUbergraph_BP_LogicDurabilityReader(int32 EntryPoint);
}; // Size: 0x4D8

#endif
