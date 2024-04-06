#ifndef UE4SS_SDK_BP_ParentResource_HPP
#define UE4SS_SDK_BP_ParentResource_HPP

class ABP_ParentResource_C : public ABP_ParentItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    float Weight;                                                                     // 0x0448 (size: 0x4)
    int32 BaseValue;                                                                  // 0x044C (size: 0x4)
    bool DoNotClear;                                                                  // 0x0450 (size: 0x1)
    float MinScaleSize;                                                               // 0x0454 (size: 0x4)
    float MaxScaleSize;                                                               // 0x0458 (size: 0x4)
    float ScaleMultiplyer;                                                            // 0x045C (size: 0x4)

    void SetDoNotClear(bool DoNotClear);
    void CreateProxyItem();
    void SetResourceSize();
    void UserConstructionScript();
    void LoadCompleted();
    void ExecuteUbergraph_BP_ParentResource(int32 EntryPoint);
}; // Size: 0x460

#endif
