#ifndef UE4SS_SDK_BP_MasterworkDesign_HPP
#define UE4SS_SDK_BP_MasterworkDesign_HPP

class ABP_MasterworkDesign_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextRenderComponent* TextRender1;
    class UTextRenderComponent* TextRender;
    FName DesignName;
    TSubclassOf<class ABP_ParentItem_C> Craftable Class;
    TArray<FS_ResourceEnumAndWeight> Requirements;

    void InitDesign();
    void UserConstructionScript();
    void OnCompleted_08306E344BE5DF1240B6FB9320551895();
    void ActorLoaded();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MasterworkDesign(int32 EntryPoint);
};

#endif
