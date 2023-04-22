#ifndef UE4SS_SDK_StyledKeyLabelBold_HPP
#define UE4SS_SDK_StyledKeyLabelBold_HPP

class UStyledKeyLabelBold_C : public UKeyLabel
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* IconImage;
    class UTextBlock* LabelText;

    FSlateBrush GetIconBrush();
    FText GetDisplayNameUpper();
    void UpdateKeyLabel();
    void ExecuteUbergraph_StyledKeyLabelBold(int32 EntryPoint);
};

#endif
