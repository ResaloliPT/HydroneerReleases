#ifndef UE4SS_SDK_C_Task_Farming_HPP
#define UE4SS_SDK_C_Task_Farming_HPP

class UC_Task_Farming_C : public UC_Task_Crafting_C
{

    void RandomizeContents(TArray<FST_NPC_RequestContents>& InContents, FRandomStream& Stream, TArray<FST_NPC_RequestContents>& OutContents);
    void SetRequestContents(FST_NPC_Request RequestIn, FRandomStream& Stream, float WeightMultiplier, float RewardMultiplier, FST_NPC_Request& RequestOut);
}; // Size: 0x130

#endif
