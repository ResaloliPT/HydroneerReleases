#ifndef UE4SS_SDK_VideoSettingsPage_HPP
#define UE4SS_SDK_VideoSettingsPage_HPP

class UVideoSettingsPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UH_ButtonWood1_C* H_ButtonWood1_C_156;                                      // 0x0268 (size: 0x8)
    bool Autosave;                                                                    // 0x0270 (size: 0x1)
    bool AutoApply;                                                                   // 0x0271 (size: 0x1)

    bool Get_AutoApplyCheckbox_bIsEnabled_0();
    bool Get_ApplyButton_bIsEnabled_0();
    bool Get_SaveButton_bIsEnabled_0();
    void BndEvt__VideoSettingsPage_H_ButtonWood1_C_156_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_VideoSettingsPage(int32 EntryPoint);
}; // Size: 0x272

#endif
