#ifndef UE4SS_SDK_UI_CustomizationMenu_HPP
#define UE4SS_SDK_UI_CustomizationMenu_HPP

class UUI_CustomizationMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* EaseIn;                                                   // 0x0268 (size: 0x8)
    class UButton* Button_Randomize;                                                  // 0x0270 (size: 0x8)
    class UHSlider_C* HSlider_VoicePitch;                                             // 0x0278 (size: 0x8)
    class UImage* Image_150;                                                          // 0x0280 (size: 0x8)
    class UImage* Image_CharacterPlaceholder;                                         // 0x0288 (size: 0x8)
    class UTextBlock* Text_Description;                                               // 0x0290 (size: 0x8)
    class UTextBlock* Text_Randomize;                                                 // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_PlayerName;                                           // 0x02A0 (size: 0x8)
    class UUI_BodyPanel_C* UI_BodyPanel;                                              // 0x02A8 (size: 0x8)
    class UUI_CustomizationTab_C* UI_CustomizationOption_Face;                        // 0x02B0 (size: 0x8)
    class UUI_CustomizationTab_C* UI_CustomizationOption_Hair;                        // 0x02B8 (size: 0x8)
    class UUI_CustomizationTab_C* UI_CustomizationOption_Pants;                       // 0x02C0 (size: 0x8)
    class UUI_CustomizationTab_C* UI_CustomizationOption_Shirt;                       // 0x02C8 (size: 0x8)
    class UUI_StylePanel_C* UI_StylePanel_Face;                                       // 0x02D0 (size: 0x8)
    class UUI_StylePanel_C* UI_StylePanel_FacialHair;                                 // 0x02D8 (size: 0x8)
    class UUI_StylePanel_C* UI_StylePanel_Hair;                                       // 0x02E0 (size: 0x8)
    class UUI_StylePanel_C* UI_StylePanel_Pants;                                      // 0x02E8 (size: 0x8)
    class UUI_StylePanel_C* UI_StylePanel_Shirt;                                      // 0x02F0 (size: 0x8)
    class UUI_SwatchPanel_C* UI_SwatchPanel_EyeColor;                                 // 0x02F8 (size: 0x8)
    class UUI_SwatchPanel_C* UI_SwatchPanel_HairColor;                                // 0x0300 (size: 0x8)
    class UUI_SwatchPanel_C* UI_SwatchPanel_PantsColor;                               // 0x0308 (size: 0x8)
    class UUI_SwatchPanel_C* UI_SwatchPanel_ShirtColor;                               // 0x0310 (size: 0x8)
    class UUI_SwatchPanel_C* UI_SwatchPanel_SkinColor;                                // 0x0318 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_CustomizationOptionPanels;                  // 0x0320 (size: 0x8)
    class ABP_Dummy_HydroGuy_C* Dummy;                                                // 0x0328 (size: 0x8)
    FTransform DummyTransform;                                                        // 0x0330 (size: 0x30)
    FS_CharacterStyle Style;                                                          // 0x0360 (size: 0x4C)
    class ABP_Character_HydroGuy_C* TargetCharacter;                                  // 0x03B0 (size: 0x8)
    int32 SessionID;                                                                  // 0x03B8 (size: 0x4)
    FString SteamID;                                                                  // 0x03C0 (size: 0x10)
    FUI_CustomizationMenu_CUpdateAll UpdateAll;                                       // 0x03D0 (size: 0x10)
    void UpdateAll(FS_CharacterStyle Style);
    class UUI_PlayerThumbnail_C* ActiveThumbnail;                                     // 0x03E0 (size: 0x8)
    bool isSaving;                                                                    // 0x03E8 (size: 0x1)

    void CharacterVoicePitchTest(float InputPin);
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
}; // Size: 0x3E9

#endif
