#ifndef UE4SS_SDK_UI_Menu_NewGame_HPP
#define UE4SS_SDK_UI_Menu_NewGame_HPP

class UUI_Menu_NewGame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SlapUpUI;
    class UWidgetAnimation* ShakeNewGameText;
    class UHCheckbox_C* CloudSaveCheckBox;
    class UHCheckbox_C* CreativeCheckBox;
    class UH_Background500x350_C* H_Background500x350_C_0;
    class UH_Midground400x40_C* H_Midground400x40_C_0;
    class UH_ButtonMetal1_C* NewGameCancelButton;
    class UH_ButtonMetal1_C* NewGameConfirmButton;
    class UH_EditableText_C* NewGameText;
    class UUserWidget* OpenWidget;
    class UCanvasPanel* OpenPanel;

    void BndEvt__UI_Menu_NewGame_NewGameConfirmButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__UI_Menu_NewGame_NewGameText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__UI_Menu_NewGame_NewGameText_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__NewGameConfirmButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Menu_NewGame(int32 EntryPoint);
};

#endif
