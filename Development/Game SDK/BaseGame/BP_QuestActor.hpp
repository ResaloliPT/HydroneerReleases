#ifndef UE4SS_SDK_BP_QuestActor_HPP
#define UE4SS_SDK_BP_QuestActor_HPP

class ABP_QuestActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAC_QuestListener_C* AC_QuestListener;                                      // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    FName TriggeringQuest;                                                            // 0x0238 (size: 0x8)
    FName TriggeringQuestPart;                                                        // 0x0240 (size: 0x8)
    bool TriggerOnLoad;                                                               // 0x0248 (size: 0x1)

    void OnCompleted_B3BB3DB54141C302F6A5CA8B845A44F9();
    void ReceiveBeginPlay();
    void Trigger();
    void BndEvt__BP_QuestActor_ToggleCollisions_AC_QuestListener_K2Node_ComponentBoundEvent_1_OnQuestComplete__DelegateSignature(FName QuestID);
    void BndEvt__BP_QuestActor_ToggleCollisions_AC_QuestListener_K2Node_ComponentBoundEvent_0_OnQuestPartComplete__DelegateSignature(FName QuestID, FName QuestPartID);
    void ExecuteUbergraph_BP_QuestActor(int32 EntryPoint);
}; // Size: 0x249

#endif
