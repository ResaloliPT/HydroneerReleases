#ifndef UE4SS_SDK_BP_ParentRawResource_HPP
#define UE4SS_SDK_BP_ParentRawResource_HPP

class ABP_ParentRawResource_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SetDoNotClear(bool DoNotClear);
    void ToggleSaveRawResourcesChanged(bool NewValue);
    void OverrideLoaded();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ParentRawResource(int32 EntryPoint);
};

#endif
