#ifndef UE4SS_SDK_BP_LogicDurabilityReader_HPP
#define UE4SS_SDK_BP_LogicDurabilityReader_HPP

class ABP_LogicDurabilityReader_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* X-Box;
    class USceneComponent* Lazer;
    FTimerHandle ReadTimer;

    void TryRepair(class ABP_ParentItem_C* RepairingTool);
    void DoneRepair();
    void FindDurability(class ABP_ParentItem_C* Item);
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void OverridePickedup();
    void ReadTime();
    void ReturnDurability(float DurabilityAmount);
    void LoadCompleted();
    void ExecuteUbergraph_BP_LogicDurabilityReader(int32 EntryPoint);
};

#endif
