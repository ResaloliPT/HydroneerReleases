#ifndef UE4SS_SDK_StyledKeyLabelBold_HPP
#define UE4SS_SDK_StyledKeyLabelBold_HPP

class UStyledKeyLabelBold_C : public UKeyLabel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* IconImage;                                                          // 0x02D8 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x02E0 (size: 0x8)

    FSlateBrush GetIconBrush();
    FText GetDisplayNameUpper();
    void UpdateKeyLabel();
    void ExecuteUbergraph_StyledKeyLabelBold(int32 EntryPoint);
}; // Size: 0x2E8

#endif
