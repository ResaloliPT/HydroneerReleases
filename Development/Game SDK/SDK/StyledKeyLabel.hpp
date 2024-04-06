#ifndef UE4SS_SDK_StyledKeyLabel_HPP
#define UE4SS_SDK_StyledKeyLabel_HPP

class UStyledKeyLabel_C : public UKeyLabel
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* IconImage;
    class UTextBlock* LabelText;

    FSlateBrush GetIconBrush();
    FText GetDisplayNameUpper();
    void UpdateKeyLabel();
    void ExecuteUbergraph_StyledKeyLabel(int32 EntryPoint);
};

#endif
