#ifndef UE4SS_SDK_BP_QuestManager_HPP
#define UE4SS_SDK_BP_QuestManager_HPP

class ABP_QuestManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard;
    TArray<FName> CompletedQuests;
    TMap<class FName, class FST_ActiveQuest> ActiveQuests;
    FBP_QuestManager_COnQuestStarted OnQuestStarted;
    void OnQuestStarted(FName QuestID);
    FBP_QuestManager_COnQuestPartComplete OnQuestPartComplete;
    void OnQuestPartComplete(FName QuestID, FName QuestPartID);
    FBP_QuestManager_COnQuestComplete OnQuestComplete;
    void OnQuestComplete(FName QuestID);

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void SendUniqueRequest(FName NPC ID, FName RequestID);
    void QuestPartStarted(FName QuestID, FName QuestPartID);
    void AllPartConditionsTrue?(const TMap<class FName, class bool>& QuestPartConditions, bool& Result);
    void CompleteQuest(FName QuestID);
    void AdvanceQuest(const FName& QuestID);
    void CheckActiveQuestConditions(FName ActionKey);
    void ConditionArrayToMap(TArray<FName>& ConditionArray, bool ConditionState, TMap<class FName, class bool>& ConditionMap);
    void AddToActiveQuests(const FName& QuestID);
    void StartQuest(FName QuestID);
    void OnCompleted_1BC139DD4AEE37C94B8A32AC2EF3E3CA();
    void ReceiveTick(float DeltaSeconds);
    void HandleTrackedAction(FName ActionKey, int32 Amount);
    void ReceiveBeginPlay();
    void ActorSaved();
    void ActorPreSave();
    void ActorLoaded();
    void ExecuteUbergraph_BP_QuestManager(int32 EntryPoint);
    void OnQuestStarted__DelegateSignature(FName QuestID);
    void OnQuestPartComplete__DelegateSignature(FName QuestID, FName QuestPartID);
    void OnQuestComplete__DelegateSignature(FName QuestID);
};

#endif
