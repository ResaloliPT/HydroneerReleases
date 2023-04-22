#ifndef UE4SS_SDK_BP_TaskNote_HPP
#define UE4SS_SDK_BP_TaskNote_HPP

class ABP_TaskNote_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    FName NPC Tag;
    FST_NPC_Request RequestData;
    TEnumAsByte<E_NPC_RequestType::Type> RequestType;
    class UUIW_RequestNote_C* RequestWidget;
    bool Save?;
    bool WasInitialized?;

    void SetToUnrolledMesh();
    void SetToRolledMesh();
    void CreateProxyItem();
    void DestroyRequest();
    void ToggleSave(bool Save?);
    void InitRequest(FST_NPC_Request RequestData, FName NPC ID, FName NPC Name, TEnumAsByte<E_NPC_RequestType::Type> RequestType);
    void OnCompleted_5929EB464363BF53FC91A1A6517F2BF2();
    void ItemPickedUp(class ABP_GameCharacter_C* Player);
    void ItemDropped();
    void ActorLoaded();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TaskNote(int32 EntryPoint);
};

#endif
