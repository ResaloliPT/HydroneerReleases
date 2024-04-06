#ifndef UE4SS_SDK_BP_TaskNote_HPP
#define UE4SS_SDK_BP_TaskNote_HPP

class ABP_TaskNote_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0458 (size: 0x8)
    FName NPC Tag;                                                                    // 0x0460 (size: 0x8)
    TEnumAsByte<E_NPC_RequestType::Type> RequestType;                                 // 0x0468 (size: 0x1)
    class UUIW_RequestNote_C* RequestWidget;                                          // 0x0470 (size: 0x8)
    bool Save?;                                                                       // 0x0478 (size: 0x1)
    FTimerHandle UnfurlTimer;                                                         // 0x0480 (size: 0x8)
    class UC_Task_C* Task;                                                            // 0x0488 (size: 0x8)

    FVector GetRequestColor(TEnumAsByte<E_NPC_RequestType::Type> Index);
    void SetToUnrolledMesh();
    void SetToRolledMesh();
    void CreateProxyItem();
    void DestroyRequest();
    void InitRequest(class UC_Task_C* TaskPayload, FName NPC ID);
    void OnCompleted_5929EB464363BF53FC91A1A6517F2BF2();
    void ItemPickedUp(class ABP_GameCharacter_C* Player);
    void ItemDropped();
    void ActorLoaded();
    void DelayedUnroll();
    void Unroll();
    void ToggleSave(bool Save);
    void ExecuteUbergraph_BP_TaskNote(int32 EntryPoint);
}; // Size: 0x490

#endif
