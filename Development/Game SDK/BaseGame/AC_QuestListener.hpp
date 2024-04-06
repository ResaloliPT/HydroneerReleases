#ifndef UE4SS_SDK_AC_QuestListener_HPP
#define UE4SS_SDK_AC_QuestListener_HPP

class UAC_QuestListener_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FAC_QuestListener_COnQuestPartComplete OnQuestPartComplete;                       // 0x00B8 (size: 0x10)
    void OnQuestPartComplete(FName QuestID, FName QuestPartID);
    FAC_QuestListener_COnQuestComplete OnQuestComplete;                               // 0x00C8 (size: 0x10)
    void OnQuestComplete(FName QuestID);

    void ReceiveBeginPlay();
    void QuestPartComplete(FName QuestID, FName QuestPartID);
    void QuestComplete(FName QuestID);
    void ExecuteUbergraph_AC_QuestListener(int32 EntryPoint);
    void OnQuestComplete__DelegateSignature(FName QuestID);
    void OnQuestPartComplete__DelegateSignature(FName QuestID, FName QuestPartID);
}; // Size: 0xD8

#endif
