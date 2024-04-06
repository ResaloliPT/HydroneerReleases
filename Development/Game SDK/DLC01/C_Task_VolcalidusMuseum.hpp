#ifndef UE4SS_SDK_C_Task_VolcalidusMuseum_HPP
#define UE4SS_SDK_C_Task_VolcalidusMuseum_HPP

class UC_Task_VolcalidusMuseum_C : public UC_Task_C
{
    int32 BonesDeposited;                                                             // 0x00F0 (size: 0x4)
    int32 BonesRequired;                                                              // 0x00F4 (size: 0x4)
    class UUI_MuseumNote_C* NoteWidget;                                               // 0x00F8 (size: 0x8)
    class UW_RequestBubble_Museum_C* BubbleContentWidget;                             // 0x0100 (size: 0x8)
    TSubclassOf<class ABP_ParentItem_C> Reward Class;                                 // 0x0108 (size: 0x8)
    class ABP_MuseumDisplay_C* MuseumDisplay;                                         // 0x0110 (size: 0x8)

    void SpawnReward(TSubclassOf<class ABP_ParentItem_C> RewardClass, int32 RewardAmount, class ABP_ParentItem_C*& Reward);
    void DetermineRewardAmount(int32& Amount);
    void DetermineRequirementAmount(int32 Max, int32& Amount);
    void UpdateBonesDeposited(int32 BonesDeposited, int32 BonesRequired);
    void Init(class ABP_NPC_C* NPC, FName TaskID, FRandomStream& Stream);
    void SetupBubbleWidget(class UWidgetComponent* WidgetComponent);
    void SetupNoteWidget(class UWidgetComponent* WidgetComponent);
    void Evaluate(class UObject* Payload, bool& Result);
}; // Size: 0x118

#endif
