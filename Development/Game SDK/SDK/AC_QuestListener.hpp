#ifndef UE4SS_SDK_AC_QuestListener_HPP
#define UE4SS_SDK_AC_QuestListener_HPP

class UAC_QuestListener_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAC_QuestListener_COnQuestPartComplete OnQuestPartComplete;
    void OnQuestPartComplete(FName QuestID, FName QuestPartID);
    FAC_QuestListener_COnQuestComplete OnQuestComplete;
    void OnQuestComplete(FName QuestID);

    void ReceiveBeginPlay();
    void QuestPartComplete(FName QuestID, FName QuestPartID);
    void QuestComplete(FName QuestID);
    void ExecuteUbergraph_AC_QuestListener(int32 EntryPoint);
    void OnQuestComplete__DelegateSignature(FName QuestID);
    void OnQuestPartComplete__DelegateSignature(FName QuestID, FName QuestPartID);
};

#endif
