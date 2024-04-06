#ifndef UE4SS_SDK_DefaultKeyLabel_HPP
#define UE4SS_SDK_DefaultKeyLabel_HPP

class UDefaultKeyLabel_C : public UKeyLabel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* IconImage;                                                          // 0x02D8 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x02E0 (size: 0x8)

    void UpdateKeyLabel();
    void ExecuteUbergraph_DefaultKeyLabel(int32 EntryPoint);
}; // Size: 0x2E8

#endif
