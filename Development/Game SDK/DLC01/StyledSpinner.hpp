#ifndef UE4SS_SDK_StyledSpinner_HPP
#define UE4SS_SDK_StyledSpinner_HPP

class UStyledSpinner_C : public USpinner
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UTextBlock* LabelTextBlock;                                                 // 0x0298 (size: 0x8)
    class UImage* LeftArrow;                                                          // 0x02A0 (size: 0x8)
    class UButton* LeftButton;                                                        // 0x02A8 (size: 0x8)
    class UImage* RightArrow;                                                         // 0x02B0 (size: 0x8)
    class UButton* RightButton;                                                       // 0x02B8 (size: 0x8)

    void OnSelectionChanged(FSettingOption SelectedOption);
    FLinearColor GetRightArrowColorAndOpacity();
    FLinearColor GetLeftArrowColorAndOpacity();
    FText GetLabelText();
    void BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_StyledSpinner(int32 EntryPoint);
}; // Size: 0x2C0

#endif
