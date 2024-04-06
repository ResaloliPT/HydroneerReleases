#ifndef UE4SS_SDK_StyledSpinner_HPP
#define UE4SS_SDK_StyledSpinner_HPP

class UStyledSpinner_C : public USpinner
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* LabelTextBlock;
    class UImage* LeftArrow;
    class UButton* LeftButton;
    class UImage* RightArrow;
    class UButton* RightButton;

    void OnSelectionChanged(FSettingOption SelectedOption);
    FLinearColor GetRightArrowColorAndOpacity();
    FLinearColor GetLeftArrowColorAndOpacity();
    FText GetLabelText();
    void BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_StyledSpinner(int32 EntryPoint);
};

#endif
