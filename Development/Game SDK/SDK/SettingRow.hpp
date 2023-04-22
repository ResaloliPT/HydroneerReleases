#ifndef UE4SS_SDK_SettingRow_HPP
#define UE4SS_SDK_SettingRow_HPP

class USettingRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* AlternatingRowBorder;
    class USizeBox* ContentSize;
    class UTextBlock* LabelText;
    class UNamedSlot* SettingContent;
    FText Label;
    int32 Index;
    float MinDesiredWidth;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_SettingRow(int32 EntryPoint);
};

#endif
