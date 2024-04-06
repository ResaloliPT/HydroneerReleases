#ifndef UE4SS_SDK_StyledRadioButton_HPP
#define UE4SS_SDK_StyledRadioButton_HPP

class UStyledRadioButton_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* LabelText;
    class UButton* MainButton;

    FSlateColor GetColour();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_StyledRadioButton(int32 EntryPoint);
};

#endif
