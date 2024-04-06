#ifndef UE4SS_SDK_UI_PlayerThumbnail_HPP
#define UE4SS_SDK_UI_PlayerThumbnail_HPP

class UUI_PlayerThumbnail_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_Player;                                                     // 0x0268 (size: 0x8)
    class UImage* Image_ColorBar;                                                     // 0x0270 (size: 0x8)
    class UImage* Image_Head;                                                         // 0x0278 (size: 0x8)
    class UImage* Image_ThumbnailMP;                                                  // 0x0280 (size: 0x8)
    class UImage* Image_ThumbnailSP;                                                  // 0x0288 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_Thumbnail;                                  // 0x0290 (size: 0x8)
    int32 PlayerIndex;                                                                // 0x0298 (size: 0x4)
    int32 SessionID;                                                                  // 0x029C (size: 0x4)
    FUI_PlayerThumbnail_COnThumbnailSelected OnThumbnailSelected;                     // 0x02A0 (size: 0x10)
    void OnThumbnailSelected(class APlayerController* PlayerController, int32 SessionID, class UUI_PlayerThumbnail_C* Thumbnail);
    class UTextureRenderTarget2D* RenderTargetThumbnail;                              // 0x02B0 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x02B8 (size: 0x8)

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
}; // Size: 0x2C0

#endif
