#ifndef UE4SS_SDK_C_Task_Crafting_HPP
#define UE4SS_SDK_C_Task_Crafting_HPP

class UC_Task_Crafting_C : public UC_Task_C
{
    class UDataTable* DataTable;                                                      // 0x00F0 (size: 0x8)
    FST_NPC_Request Request;                                                          // 0x00F8 (size: 0x38)

    void SpawnReward(TSubclassOf<class ABP_ParentItem_C> RewardClass, int32 RewardAmount, class ABP_ParentItem_C*& Reward);
    void EvalReceivedContent(TArray<FS_ResourceClassAndWeight>& Contents, class ABP_ParentItem_C* Item, bool& Result);
    void Evaluate(class UObject* Payload, bool& Result);
    void SetupBubbleWidget(class UWidgetComponent* WidgetComponent);
    void SetupNoteWidget(class UWidgetComponent* WidgetComponent);
    void RandomizeContents(TArray<FST_NPC_RequestContents>& InContents, FRandomStream& Stream, TArray<FST_NPC_RequestContents>& OutContents);
    void ReactivateTask(FRandomStream& Stream, FName TaskID);
    void CombineMatchingContents(TArray<FST_NPC_RequestContents>& Contents, TArray<FST_NPC_RequestContents>& CombinedContents);
    void SetContentWeight(TArray<FST_NPC_RequestContents>& InContents, FRandomStream& Stream, float WeightMultiplier, TArray<FST_NPC_RequestContents>& OutContents, int32& ContentReward);
    void SetRequestContents(FST_NPC_Request RequestIn, FRandomStream& Stream, float WeightMultiplier, float RewardMultiplier, FST_NPC_Request& RequestOut);
    bool CheckRequestLevel(const FST_NPC_Request& Request);
    void ActivateNewTask(FRandomStream& Stream);
    void GetRandomRequest(FRandomStream& Stream);
}; // Size: 0x130

#endif
