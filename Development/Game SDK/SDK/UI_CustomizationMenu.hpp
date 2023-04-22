#ifndef UE4SS_SDK_UI_CustomizationMenu_HPP
#define UE4SS_SDK_UI_CustomizationMenu_HPP

class UUI_CustomizationMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* EaseIn;
    class UButton* Button_Randomize;
    class UHSlider_C* HSlider_VoicePitch;
    class UImage* Image_150;
    class UImage* Image_CharacterPlaceholder;
    class UTextBlock* Text_Description;
    class UTextBlock* Text_Randomize;
    class UTextBlock* TextBlock_PlayerName;
    class UUI_BodyPanel_C* UI_BodyPanel;
    class UUI_CustomizationTab_C* UI_CustomizationOption_Face;
    class UUI_CustomizationTab_C* UI_CustomizationOption_Hair;
    class UUI_CustomizationTab_C* UI_CustomizationOption_Pants;
    class UUI_CustomizationTab_C* UI_CustomizationOption_Shirt;
    class UUI_StylePanel_C* UI_StylePanel_Face;
    class UUI_StylePanel_C* UI_StylePanel_FacialHair;
    class UUI_StylePanel_C* UI_StylePanel_Hair;
    class UUI_StylePanel_C* UI_StylePanel_Pants;
    class UUI_StylePanel_C* UI_StylePanel_Shirt;
    class UUI_SwatchPanel_C* UI_SwatchPanel_EyeColor;
    class UUI_SwatchPanel_C* UI_SwatchPanel_HairColor;
    class UUI_SwatchPanel_C* UI_SwatchPanel_PantsColor;
    class UUI_SwatchPanel_C* UI_SwatchPanel_ShirtColor;
    class UUI_SwatchPanel_C* UI_SwatchPanel_SkinColor;
    class UWidgetSwitcher* WidgetSwitcher_CustomizationOptionPanels;
    class ABP_Dummy_HydroGuy_C* Dummy;
    FTransform DummyTransform;
    FS_CharacterStyle Style;
    class ABP_Character_HydroGuy_C* TargetCharacter;
    int32 SessionID;
    FString SteamID;
    FUI_CustomizationMenu_CUpdateAll UpdateAll;
    void UpdateAll(FS_CharacterStyle Style);
    class UUI_PlayerThumbnail_C* ActiveThumbnail;
    bool isSaving;

    void UI_CustomizationMenu_AutoGenFunc(bool bSuccess);
    void RefreshHairStyleOptions();
    void UpdateDummyStyle();
    void GetSteamID();
    void SetDummyVisibility(ESlateVisibility Visibility);
    void SpawnDummy(class UTextureRenderTarget2D* RenderTarget);
    void SetDisplayName();
    void OpenMenu(class APlayerController* PlayerController, int32 SessionID, class UUI_PlayerThumbnail_C* Thumbnail);
    void UpdateTargetCharacterStyle();
    void InitDefaultStyleOptions();
    void Finished_DDC461F0456D8CA100CA1FA61D25A4F0();
    void BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Face_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
    void BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Hair_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
    void BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Shirt_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature();
    void BndEvt__UI_CustomizationMenu_UI_CustomizationOption_Pants_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature();
    void BndEvt__UI_CustomizationMenu_UI_StylePanel_Hair_K2Node_ComponentBoundEvent_5_OnUpdateStyle__DelegateSignature(int32 StyleIndex);
    void BndEvt__UI_CustomizationMenu_UI_StylePanel_Face_K2Node_ComponentBoundEvent_6_OnUpdateStyle__DelegateSignature(int32 StyleIndex);
    void BndEvt__UI_CustomizationMenu_UI_StylePanel_FacialHair_K2Node_ComponentBoundEvent_7_OnUpdateStyle__DelegateSignature(int32 StyleIndex);
    void BndEvt__UI_CustomizationMenu_UI_StylePanel_Shirt_K2Node_ComponentBoundEvent_8_OnUpdateStyle__DelegateSignature(int32 StyleIndex);
    void BndEvt__UI_CustomizationMenu_UI_StylePanel_Pants_K2Node_ComponentBoundEvent_9_OnUpdateStyle__DelegateSignature(int32 StyleIndex);
    void BndEvt__UI_CustomizationMenu_UI_SwatchPanel_C_143_K2Node_ComponentBoundEvent_10_OnUpdate__DelegateSignature(FName ColorID);
    void BndEvt__UI_CustomizationMenu_UI_SwatchPanel_HairColor_K2Node_ComponentBoundEvent_11_OnUpdate__DelegateSignature(FName ColorID);
    void BndEvt__UI_CustomizationMenu_UI_SwatchPanel_ShirtColor_K2Node_ComponentBoundEvent_12_OnUpdate__DelegateSignature(FName ColorID);
    void BndEvt__UI_CustomizationMenu_UI_SwatchPanel_PantsColor_K2Node_ComponentBoundEvent_16_OnUpdate__DelegateSignature(FName ColorID);
    void Destruct();
    void CloseMenu();
    void Construct();
    void VisibilityChanged(ESlateVisibility InVisibility);
    void BndEvt__UI_CustomizationMenu_HSlider_C_274_K2Node_ComponentBoundEvent_13_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__UI_CustomizationMenu_HSlider_VoicePitch_K2Node_ComponentBoundEvent_14_OnControllerCaptureEndEvent__DelegateSignature();
    void BndEvt__UI_CustomizationMenu_Button_Randomize_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_CustomizationMenu_UI_BodyPanel_K2Node_ComponentBoundEvent_17_OnUpdateBody__DelegateSignature(FName BodyID);
    void SaveThumbnail();
    void ExecuteUbergraph_UI_CustomizationMenu(int32 EntryPoint);
    void UpdateAll__DelegateSignature(FS_CharacterStyle Style);
};

#endif
