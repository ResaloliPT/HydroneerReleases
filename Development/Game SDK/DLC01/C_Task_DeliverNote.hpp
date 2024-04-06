#ifndef UE4SS_SDK_C_Task_DeliverNote_HPP
#define UE4SS_SDK_C_Task_DeliverNote_HPP

class UC_Task_DeliverNote_C : public UC_Task_C
{
    class UDataTable* DeliveryDT;                                                     // 0x00F0 (size: 0x8)
    FST_NPC_Request_Delivery Delivery;                                                // 0x00F8 (size: 0x48)

    void Evaluate(class UObject* Payload, bool& Result);
    void SetupNoteWidget(class UWidgetComponent* WidgetComponent);
    void SetupBubbleWidget(class UWidgetComponent* WidgetComponent);
    void ReactivateTask(FRandomStream& Stream, FName TaskID);
}; // Size: 0x140

#endif
