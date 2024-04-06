#ifndef UE4SS_SDK_StyledSliderSetting_HPP
#define UE4SS_SDK_StyledSliderSetting_HPP

class UStyledSliderSetting_C : public UNativeSliderSetting
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UEditableTextBox* TextBox;                                                  // 0x02D0 (size: 0x8)
    float LabelMultiplier;                                                            // 0x02D8 (size: 0x4)
    int32 LabelFractionalDigits;                                                      // 0x02DC (size: 0x4)

    void Construct();
    void TextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__StyledSliderSetting_HSlider_C_63_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_StyledSliderSetting(int32 EntryPoint);
}; // Size: 0x2E0

#endif
