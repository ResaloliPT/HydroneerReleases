#ifndef UE4SS_SDK_DefaultKeyLabel_HPP
#define UE4SS_SDK_DefaultKeyLabel_HPP

class UDefaultKeyLabel_C : public UKeyLabel
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* IconImage;
    class UTextBlock* LabelText;

    void UpdateKeyLabel();
    void ExecuteUbergraph_DefaultKeyLabel(int32 EntryPoint);
};

#endif
