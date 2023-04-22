#ifndef UE4SS_SDK_UI_PlayerThumbnail_HPP
#define UE4SS_SDK_UI_PlayerThumbnail_HPP

class UUI_PlayerThumbnail_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Player;
    class UImage* Image_ColorBar;
    class UImage* Image_Head;
    class UImage* Image_ThumbnailMP;
    class UImage* Image_ThumbnailSP;
    class UWidgetSwitcher* WidgetSwitcher_Thumbnail;
    int32 PlayerIndex;
    int32 SessionID;
    FUI_PlayerThumbnail_COnThumbnailSelected OnThumbnailSelected;
    void OnThumbnailSelected(class APlayerController* PlayerController, int32 SessionID, class UUI_PlayerThumbnail_C* Thumbnail);
    class UTextureRenderTarget2D* RenderTargetThumbnail;
    class UMaterialInstanceDynamic* DynamicMaterial;

    void GetSteamID(FString& Output);
    void SetThumbnailTexture(class UTexture* Texture);
    void CreateAndSetRenderTarget();
    void SetBarColor();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_CharacterThumbnail_Button_Player_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void OnPlayerDestroyed(class AActor* DestroyedActor);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_PlayerThumbnail_Button_Player_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_PlayerThumbnail(int32 EntryPoint);
    void OnThumbnailSelected__DelegateSignature(class APlayerController* PlayerController, int32 SessionID, class UUI_PlayerThumbnail_C* Thumbnail);
};

#endif
