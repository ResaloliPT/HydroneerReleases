#ifndef UE4SS_SDK_InputRow_HPP
#define UE4SS_SDK_InputRow_HPP

class UInputRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* AlternatingRowBorder;
    class UNamedSlot* Content1;
    class UNamedSlot* Content2;
    class UNamedSlot* Content2_1;
    class UNamedSlot* Content2_2;
    class UTextBlock* LabelText;
    FText Label;
    int32 Index;
    float MinDesiredWidth;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_InputRow(int32 EntryPoint);
};

#endif
