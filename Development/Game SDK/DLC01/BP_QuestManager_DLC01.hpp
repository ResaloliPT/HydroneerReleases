#ifndef UE4SS_SDK_BP_QuestManager_DLC01_HPP
#define UE4SS_SDK_BP_QuestManager_DLC01_HPP

class ABP_QuestManager_DLC01_C : public ABP_QuestManager_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)

    void QuestPartStarted(FName QuestID, FName QuestPartID);
    void LoadComplete();
    void SendDelivery(FName NPC ID, FName RequestID);
    void SendMuseumTask(FName RequestID);
    void ExecuteUbergraph_BP_QuestManager_DLC01(int32 EntryPoint);
}; // Size: 0x2D0

#endif
