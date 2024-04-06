#ifndef UE4SS_SDK_UI_MapPlayerLocation_HPP
#define UE4SS_SDK_UI_MapPlayerLocation_HPP

class UUI_MapPlayerLocation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_PlayerIcon;
    class UImage* Image_PlayerIconHighlight;
    int32 PlayerIndex;

    void UpdateSelection(int32 PlayerIndex);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_MapPlayerLocation(int32 EntryPoint);
};

#endif
