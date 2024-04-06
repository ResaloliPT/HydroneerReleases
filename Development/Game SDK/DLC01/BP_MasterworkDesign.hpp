#ifndef UE4SS_SDK_BP_MasterworkDesign_HPP
#define UE4SS_SDK_BP_MasterworkDesign_HPP

class ABP_MasterworkDesign_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0450 (size: 0x8)
    class UTextRenderComponent* TextRender1;                                          // 0x0458 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0460 (size: 0x8)
    FName DesignName;                                                                 // 0x0468 (size: 0x8)
    TSubclassOf<class ABP_ParentItem_C> Craftable Class;                              // 0x0470 (size: 0x8)
    TArray<FS_ResourceEnumAndWeight> Requirements;                                    // 0x0478 (size: 0x10)
    bool CanBuff?;                                                                    // 0x0488 (size: 0x1)

    void GetSpecialType(FString& Type);
    void InitDesign();
    void UserConstructionScript();
    void OnCompleted_08306E344BE5DF1240B6FB9320551895();
    void ActorLoaded();
    void OverrideBeginPlay();
    void ExecuteUbergraph_BP_MasterworkDesign(int32 EntryPoint);
}; // Size: 0x489

#endif
