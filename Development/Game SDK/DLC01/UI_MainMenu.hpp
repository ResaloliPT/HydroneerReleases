#ifndef UE4SS_SDK_UI_MainMenu_HPP
#define UE4SS_SDK_UI_MainMenu_HPP

class UUI_MainMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* ARButton;                                                          // 0x0268 (size: 0x8)
    class UH_ButtonMetal1_C* CancelQuitButton;                                        // 0x0270 (size: 0x8)
    class UCanvasPanel* ConfirmQuitPanel;                                             // 0x0278 (size: 0x8)
    class UButton* CreditsButton;                                                     // 0x0280 (size: 0x8)
    class UCanvasPanel* CustomizationPanel;                                           // 0x0288 (size: 0x8)
    class UButton* CZButton;                                                          // 0x0290 (size: 0x8)
    class UButton* DAButton;                                                          // 0x0298 (size: 0x8)
    class UButton* DEButton;                                                          // 0x02A0 (size: 0x8)
    class UButton* DiscordButton;                                                     // 0x02A8 (size: 0x8)
    class UButton* ESButton;                                                          // 0x02B0 (size: 0x8)
    class UButton* FRButton;                                                          // 0x02B8 (size: 0x8)
    class UH_Background500x350_C* H_Background500x350_C_0;                            // 0x02C0 (size: 0x8)
    class UH_Midground400x100_C* H_Midground400x100_C_0;                              // 0x02C8 (size: 0x8)
    class UImage* Image_91;                                                           // 0x02D0 (size: 0x8)
    class UButton* InstagramButton;                                                   // 0x02D8 (size: 0x8)
    class UButton* ItButton;                                                          // 0x02E0 (size: 0x8)
    class UButton* JAButton;                                                          // 0x02E8 (size: 0x8)
    class UButton* KOButton;                                                          // 0x02F0 (size: 0x8)
    class UButton* MerchButton;                                                       // 0x02F8 (size: 0x8)
    class UButton* ModsButton;                                                        // 0x0300 (size: 0x8)
    class UButton* NewGameButton;                                                     // 0x0308 (size: 0x8)
    class UButton* NLButton;                                                          // 0x0310 (size: 0x8)
    class UButton* NOButton;                                                          // 0x0318 (size: 0x8)
    class UButton* PatchNotesButton;                                                  // 0x0320 (size: 0x8)
    class UButton* PirateButton;                                                      // 0x0328 (size: 0x8)
    class UButton* PLButton;                                                          // 0x0330 (size: 0x8)
    class UButton* PTButton;                                                          // 0x0338 (size: 0x8)
    class UH_ButtonMetal1_C* QuitConfirmButton;                                       // 0x0340 (size: 0x8)
    class UButton* QuitPanelButton;                                                   // 0x0348 (size: 0x8)
    class UButton* RoButton;                                                          // 0x0350 (size: 0x8)
    class UButton* RUButton;                                                          // 0x0358 (size: 0x8)
    class UButton* SaveManagerButton;                                                 // 0x0360 (size: 0x8)
    class UButton* SettingsPanelButton;                                               // 0x0368 (size: 0x8)
    class UButton* SVButton;                                                          // 0x0370 (size: 0x8)
    class UButton* TikTokButton;                                                      // 0x0378 (size: 0x8)
    class UImage* TitleLogo;                                                          // 0x0380 (size: 0x8)
    class UButton* TRButton;                                                          // 0x0388 (size: 0x8)
    class UButton* TutorialButton;                                                    // 0x0390 (size: 0x8)
    class UButton* TwitterButton;                                                     // 0x0398 (size: 0x8)
    class UUI_CustomizationMenu_C* UI_CustomizationMenu;                              // 0x03A0 (size: 0x8)
    class UUI_PlayerShelf_C* UI_PlayerShelf;                                          // 0x03A8 (size: 0x8)
    class UButton* UKButton;                                                          // 0x03B0 (size: 0x8)
    class UButton* WikiButton;                                                        // 0x03B8 (size: 0x8)
    class UButton* YTButton;                                                          // 0x03C0 (size: 0x8)
    class UButton* ZHButton;                                                          // 0x03C8 (size: 0x8)
    class UUserWidget* OpenWidget;                                                    // 0x03D0 (size: 0x8)
    class UWidget* OpenPanel;                                                         // 0x03D8 (size: 0x8)

    void OpenPersistentWidget(class UWidget* Widget);
    void CloseUI();
    void OpenSpawnedWidget(class UUserWidget* Widget);
    void BndEvt__UKButton_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__RUButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PirateButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PTButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__DEButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__FRButton_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TRButton_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__NLButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PLButton_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WikiButton_K2Node_ComponentBoundEvent_52_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ESButton_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CZButton_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ZHButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__RoButton_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__KOButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TwitterButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__YTButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ItButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ModsButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__FutureUpdatesButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ARButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_MainMenu_ContinueButton_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void Destruct();
    void BndEvt__QuitPanelButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_MainMenu_UI_PlayerShelf_K2Node_ComponentBoundEvent_1_OnThumbnailSelected__DelegateSignature(class APlayerController* PlayerController, int32 SessionID, class UUI_PlayerThumbnail_C* Thumbnail);
    void BndEvt__UI_MainMenu_NewGameCancelButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_MainMenu_NewGameConfirmButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__DiscordButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PatchNotesButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__NewGameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_MainMenu_MerchButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SettingsPanelButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_MainMenu_JAButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_MainMenu_InstagramButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_MainMenu_TikTokButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_MainMenu_NOButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_MainMenu_SVButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_MainMenu_DAButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_MainMenu(int32 EntryPoint);
}; // Size: 0x3E0

#endif
