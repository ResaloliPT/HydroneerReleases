#ifndef UE4SS_SDK_BP_QuestActor_HPP
#define UE4SS_SDK_BP_QuestActor_HPP

class ABP_QuestActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_QuestListener_C* AC_QuestListener;
    class USceneComponent* DefaultSceneRoot;
    FName TriggeringQuest;
    FName TriggeringQuestPart;
    bool TriggerOnLoad;

    void OnCompleted_B3BB3DB54141C302F6A5CA8B845A44F9();
    void ReceiveBeginPlay();
    void Trigger();
    void BndEvt__BP_QuestActor_ToggleCollisions_AC_QuestListener_K2Node_ComponentBoundEvent_1_OnQuestComplete__DelegateSignature(FName QuestID);
    void BndEvt__BP_QuestActor_ToggleCollisions_AC_QuestListener_K2Node_ComponentBoundEvent_0_OnQuestPartComplete__DelegateSignature(FName QuestID, FName QuestPartID);
    void ExecuteUbergraph_BP_QuestActor(int32 EntryPoint);
};

#endif
