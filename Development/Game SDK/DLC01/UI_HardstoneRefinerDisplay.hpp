#ifndef UE4SS_SDK_UI_HardstoneRefinerDisplay_HPP
#define UE4SS_SDK_UI_HardstoneRefinerDisplay_HPP

class UUI_HardstoneRefinerDisplay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UProgressBar* ProgressBar_0;                                                // 0x0268 (size: 0x8)
    class UTextBlock* ValueText;                                                      // 0x0270 (size: 0x8)

    void UpdateDisplay(float CurrentValue, int32 MaxValue);
    void ExecuteUbergraph_UI_HardstoneRefinerDisplay(int32 EntryPoint);
}; // Size: 0x278

#endif
