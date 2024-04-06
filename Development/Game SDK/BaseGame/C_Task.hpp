#ifndef UE4SS_SDK_C_Task_HPP
#define UE4SS_SDK_C_Task_HPP

class UC_Task_C : public UActorComponent
{
    FName TaskID;                                                                     // 0x00B0 (size: 0x8)
    TEnumAsByte<E_NPC_RequestType::Type> RequestType;                                 // 0x00B8 (size: 0x1)
    TEnumAsByte<E_NPC_TaskType::Type> TaskType;                                       // 0x00B9 (size: 0x1)
    class ABP_GameState_C* GameState;                                                 // 0x00C0 (size: 0x8)
    class ABP_NPC_C* NPC;                                                             // 0x00C8 (size: 0x8)
    FName ActionKey;                                                                  // 0x00D0 (size: 0x8)
    TSubclassOf<class AActor> TaskNoteClass;                                          // 0x00D8 (size: 0x8)
    bool CanReceiveItems;                                                             // 0x00E0 (size: 0x1)
    bool ShouldSpawnReward;                                                           // 0x00E1 (size: 0x1)
    class ABP_ParentItem_C* SpawnedReward;                                            // 0x00E8 (size: 0x8)

    void TrySpawnReward(class ABP_ParentItem_C*& Reward);
    void SpawnReward(TSubclassOf<class ABP_ParentItem_C> RewardClass, int32 RewardAmount, class ABP_ParentItem_C*& Reward);
    void SpawnTaskNote(class ABP_TaskNote_C*& TaskNote);
    void SendTrackedAction();
    void Complete();
    void SetupNoteWidget(class UWidgetComponent* WidgetComponent);
    void SetupBubbleWidget(class UWidgetComponent* WidgetComponent);
    void GetProgression(int32& Value);
    void Evaluate(class UObject* Payload, bool& Result);
    void ReactivateTask(FRandomStream& Stream, FName TaskID);
    void ActivateNewTask(FRandomStream& Stream);
    void Init(class ABP_NPC_C* NPC, FName TaskID, FRandomStream& Stream);
}; // Size: 0xF0

#endif
