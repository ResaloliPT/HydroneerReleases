#ifndef UE4SS_SDK_UI_PlayerShelf_HPP
#define UE4SS_SDK_UI_PlayerShelf_HPP

class UUI_PlayerShelf_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_AddPlayer;
    class UHorizontalBox* HorizontalBox_Thumbnails;
    class UMenuAnchor* MenuAnchor_AddPlayer;
    FUI_PlayerShelf_COnThumbnailSelected OnThumbnailSelected;
    void OnThumbnailSelected(class APlayerController* PlayerController, int32 SessionID, class UUI_PlayerThumbnail_C* Thumbnail);

    void ThumbnailSelected(class APlayerController* PlayerController, int32 SessionID, class UUI_PlayerThumbnail_C* Thumbnail);
    void AddPlayer(class APlayerController* PlayerController, int32 SessionID);
    void BndEvt__UI_MenuPlayers_Button_AddPlayer_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_UI_PlayerShelf(int32 EntryPoint);
    void OnThumbnailSelected__DelegateSignature(class APlayerController* PlayerController, int32 SessionID, class UUI_PlayerThumbnail_C* Thumbnail);
};

#endif
