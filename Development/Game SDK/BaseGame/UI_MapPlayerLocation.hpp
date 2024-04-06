#ifndef UE4SS_SDK_UI_MapPlayerLocation_HPP
#define UE4SS_SDK_UI_MapPlayerLocation_HPP

class UUI_MapPlayerLocation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_PlayerDirection;                                              // 0x0268 (size: 0x8)
    class UImage* Image_PlayerIcon;                                                   // 0x0270 (size: 0x8)
    class UImage* Image_PlayerIconHighlight;                                          // 0x0278 (size: 0x8)
    int32 PlayerIndex;                                                                // 0x0280 (size: 0x4)

    void UpdateSelection(int32 PlayerIndex);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_MapPlayerLocation(int32 EntryPoint);
}; // Size: 0x284

#endif
