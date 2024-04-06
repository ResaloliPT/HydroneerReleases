#ifndef UE4SS_SDK_C_Task_ReceiveNote_HPP
#define UE4SS_SDK_C_Task_ReceiveNote_HPP

class UC_Task_ReceiveNote_C : public UC_Task_C
{
    FST_NPC_Request_Delivery Delivery;                                                // 0x00F0 (size: 0x48)
    class UDataTable* DeliveryDT;                                                     // 0x0138 (size: 0x8)

    void ClearDeliveryTask();
    void SpawnReward(TSubclassOf<class ABP_ParentItem_C> RewardClass, int32 RewardAmount, class ABP_ParentItem_C*& Reward);
    void Evaluate(class UObject* Payload, bool& Result);
    void SetupNoteWidget(class UWidgetComponent* WidgetComponent);
    void SetupBubbleWidget(class UWidgetComponent* WidgetComponent);
    void ReactivateTask(FRandomStream& Stream, FName TaskID);
}; // Size: 0x140

#endif
