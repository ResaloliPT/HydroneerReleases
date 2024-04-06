#ifndef UE4SS_SDK_UI_PlayerShelf_HPP
#define UE4SS_SDK_UI_PlayerShelf_HPP

class UUI_PlayerShelf_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_AddPlayer;                                                  // 0x0268 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Thumbnails;                                   // 0x0270 (size: 0x8)
    class UMenuAnchor* MenuAnchor_AddPlayer;                                          // 0x0278 (size: 0x8)
    FUI_PlayerShelf_COnThumbnailSelected OnThumbnailSelected;                         // 0x0280 (size: 0x10)
    void OnThumbnailSelected(class APlayerController* PlayerController, int32 SessionID, class UUI_PlayerThumbnail_C* Thumbnail);

    void ThumbnailSelected(class APlayerController* PlayerController, int32 SessionID, class UUI_PlayerThumbnail_C* Thumbnail);
    void AddPlayer(class APlayerController* PlayerController, int32 SessionID);
    void BndEvt__UI_MenuPlayers_Button_AddPlayer_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_UI_PlayerShelf(int32 EntryPoint);
    void OnThumbnailSelected__DelegateSignature(class APlayerController* PlayerController, int32 SessionID, class UUI_PlayerThumbnail_C* Thumbnail);
}; // Size: 0x290

#endif
