#ifndef UE4SS_SDK_UI_Menu_NewGame_HPP
#define UE4SS_SDK_UI_Menu_NewGame_HPP

class UUI_Menu_NewGame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* SlapUpUI;                                                 // 0x0268 (size: 0x8)
    class UWidgetAnimation* ShakeNewGameText;                                         // 0x0270 (size: 0x8)
    class UHCheckbox_C* CloudSaveCheckBox;                                            // 0x0278 (size: 0x8)
    class UHCheckbox_C* CreativeCheckBox;                                             // 0x0280 (size: 0x8)
    class UH_Background500x350_C* H_Background500x350_C_0;                            // 0x0288 (size: 0x8)
    class UH_Midground400x40_C* H_Midground400x40_C_0;                                // 0x0290 (size: 0x8)
    class UH_ButtonMetal1_C* NewGameCancelButton;                                     // 0x0298 (size: 0x8)
    class UH_ButtonMetal1_C* NewGameConfirmButton;                                    // 0x02A0 (size: 0x8)
    class UH_EditableText_C* NewGameText;                                             // 0x02A8 (size: 0x8)
    class UUI_CanAchieve_C* UI_CanAchieve;                                            // 0x02B0 (size: 0x8)
    class UUserWidget* OpenWidget;                                                    // 0x02B8 (size: 0x8)
    class UCanvasPanel* OpenPanel;                                                    // 0x02C0 (size: 0x8)

    void BndEvt__UI_Menu_NewGame_NewGameConfirmButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__UI_Menu_NewGame_NewGameText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__UI_Menu_NewGame_NewGameText_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__NewGameConfirmButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Menu_NewGame_CreativeCheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_UI_Menu_NewGame(int32 EntryPoint);
}; // Size: 0x2C8

#endif
