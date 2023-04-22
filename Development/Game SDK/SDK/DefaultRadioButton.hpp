#ifndef UE4SS_SDK_DefaultRadioButton_HPP
#define UE4SS_SDK_DefaultRadioButton_HPP

class UDefaultRadioButton_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* MainButton;
    class UTextBlock* TextBlock_0;
    FDefaultRadioButton_CClicked Clicked;
    void Clicked(int32 Value);

    FSlateColor GetTextColor();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_DefaultRadioButton(int32 EntryPoint);
    void Clicked__DelegateSignature(int32 Value);
};

#endif
