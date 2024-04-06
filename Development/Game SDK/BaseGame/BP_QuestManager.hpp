#ifndef UE4SS_SDK_BP_QuestManager_HPP
#define UE4SS_SDK_BP_QuestManager_HPP

class ABP_QuestManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    TArray<FName> CompletedQuests;                                                    // 0x0230 (size: 0x10)
    TMap<class FName, class FST_ActiveQuest> ActiveQuests;                            // 0x0240 (size: 0x50)
    FBP_QuestManager_COnQuestStarted OnQuestStarted;                                  // 0x0290 (size: 0x10)
    void OnQuestStarted(FName QuestID);
    FBP_QuestManager_COnQuestPartComplete OnQuestPartComplete;                        // 0x02A0 (size: 0x10)
    void OnQuestPartComplete(FName QuestID, FName QuestPartID);
    FBP_QuestManager_COnQuestComplete OnQuestComplete;                                // 0x02B0 (size: 0x10)
    void OnQuestComplete(FName QuestID);
    class UDataTable* QuestDT;                                                        // 0x02C0 (size: 0x8)

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void TryBeginQuest(FName QuestID);
    void Debug();
    void SendUniqueRequest(FName NPC ID, FName RequestID, TEnumAsByte<E_NPC_TaskType::Type> TaskType, bool ForceSpawnNote);
    void QuestPartStarted(FName QuestID, FName QuestPartID);
    void AllPartConditionsTrue?(const TMap<class FName, class bool>& QuestPartConditions, bool& Result);
    void CompleteQuest(FName QuestID);
    void AdvanceQuest(const FName& QuestID);
    void CheckActiveQuestConditions(FName ActionKey);
    void ConditionArrayToMap(TArray<FName>& ConditionArray, bool ConditionState, TMap<class FName, class bool>& ConditionMap);
    void AddToActiveQuests(const FName& QuestID);
    void StartQuest(FName QuestID);
    void OnCompleted_1BC139DD4AEE37C94B8A32AC2EF3E3CA();
    void ActorLoaded();
    void ActorPreSave();
    void ActorSaved();
    void ReceiveBeginPlay();
    void HandleTrackedAction(FName ActionKey, int32 Amount);
    void ReceiveTick(float DeltaSeconds);
    void LoadComplete();
    void ExecuteUbergraph_BP_QuestManager(int32 EntryPoint);
    void OnQuestStarted__DelegateSignature(FName QuestID);
    void OnQuestPartComplete__DelegateSignature(FName QuestID, FName QuestPartID);
    void OnQuestComplete__DelegateSignature(FName QuestID);
}; // Size: 0x2C8

#endif
