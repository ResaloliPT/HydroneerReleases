#ifndef UE4SS_SDK_UI_EscMenu_HPP
#define UE4SS_SDK_UI_EscMenu_HPP

class UUI_EscMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* SlapUpConfirmSkipSaveFirst;                               // 0x0268 (size: 0x8)
    class UWidgetAnimation* SlapUpConfirmSkipSaveFinal;                               // 0x0270 (size: 0x8)
    class UWidgetAnimation* SlapUpConfirmMainMenu;                                    // 0x0278 (size: 0x8)
    class UWidgetAnimation* SlapUpConfirmDesktop;                                     // 0x0280 (size: 0x8)
    class UWidgetAnimation* SlapUpConfirmClear;                                       // 0x0288 (size: 0x8)
    class UH_ButtonMetal3_C* CancelClearButton;                                       // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0298 (size: 0x8)
    class UCanvasPanel* CanvasPanel_RemotePlay;                                       // 0x02A0 (size: 0x8)
    class UH_ButtonMetal1_C* ClearConfirmButton;                                      // 0x02A8 (size: 0x8)
    class UH_ButtonWood1_C* ClearDirtChunks;                                          // 0x02B0 (size: 0x8)
    class UH_ButtonWood3_C* ClearRawResources;                                        // 0x02B8 (size: 0x8)
    class UCanvasPanel* ConfirmClearCanvas;                                           // 0x02C0 (size: 0x8)
    class UH_TextSubTitle_C* ConfirmClearText;                                        // 0x02C8 (size: 0x8)
    class UCanvasPanel* ConfirmDesktopCanvas;                                         // 0x02D0 (size: 0x8)
    class UCanvasPanel* ConfirmSkipSaveCanvasFinal;                                   // 0x02D8 (size: 0x8)
    class UCanvasPanel* ConfirmSkipSaveCanvasFirst;                                   // 0x02E0 (size: 0x8)
    class UHSmallButton2_C* DesktopButton;                                            // 0x02E8 (size: 0x8)
    class UH_ButtonMetal2_C* DesktopCancelButton;                                     // 0x02F0 (size: 0x8)
    class UH_ButtonMetal3_C* DesktopConfirmButton;                                    // 0x02F8 (size: 0x8)
    class UButton* DiscordButton;                                                     // 0x0300 (size: 0x8)
    class UImage* EscMenu_Footer;                                                     // 0x0308 (size: 0x8)
    class UImage* EscMenu_Header;                                                     // 0x0310 (size: 0x8)
    class UH_Background400x200_C* H_Background400x200_C;                              // 0x0318 (size: 0x8)
    class UH_Background400x200_C* H_Background400x200_C_0;                            // 0x0320 (size: 0x8)
    class UH_Background400x200_C* H_Background400x200_C_1;                            // 0x0328 (size: 0x8)
    class UH_Background400x200_C* H_Background400x200_C_2;                            // 0x0330 (size: 0x8)
    class UH_Background400x200_C* H_Background400x200_C_3;                            // 0x0338 (size: 0x8)
    class UH_ButtonWood3_C* H_ButtonWood3_UnstuckP2;                                  // 0x0340 (size: 0x8)
    class UH_ButtonWood3_C* H_ButtonWood3_UnstuckP3;                                  // 0x0348 (size: 0x8)
    class UH_ButtonWood3_C* H_ButtonWood3_UnstuckP4;                                  // 0x0350 (size: 0x8)
    class UH_Midground300x70_C* H_Midground300x70_C_0;                                // 0x0358 (size: 0x8)
    class UH_TextSubTitle_C* H_TextSubTitle_Instructions;                             // 0x0360 (size: 0x8)
    class UHCheckbox_C* HCheckbox_Player1Gamepad;                                     // 0x0368 (size: 0x8)
    class UHorizontalBox* HorizontalBox_UnstuckSplitscreen;                           // 0x0370 (size: 0x8)
    class UImage* Image_132;                                                          // 0x0378 (size: 0x8)
    class UImage* Image_controllerconfig;                                             // 0x0380 (size: 0x8)
    class UImage* Image_kbmcontroller;                                                // 0x0388 (size: 0x8)
    class UButton* InstagramButton;                                                   // 0x0390 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0398 (size: 0x8)
    class UHSmallButton2_C* MainMenuButton;                                           // 0x03A0 (size: 0x8)
    class UH_ButtonMetal3_C* MainMenuCancelButton;                                    // 0x03A8 (size: 0x8)
    class UH_ButtonMetal2_C* MainMenuConfirmButton;                                   // 0x03B0 (size: 0x8)
    class UImage* QuickActionFooter-SocialsBG;                                        // 0x03B8 (size: 0x8)
    class UImage* QuickActionHeader;                                                  // 0x03C0 (size: 0x8)
    class UH_ButtonWood2_C* RecallButton;                                             // 0x03C8 (size: 0x8)
    class UHSmallButton1_C* ReturnButton;                                             // 0x03D0 (size: 0x8)
    class UCanvasPanel* ReturnMainMenuCanvas;                                         // 0x03D8 (size: 0x8)
    class UHSmallButton1_C* SaveButton;                                               // 0x03E0 (size: 0x8)
    class UH_TextTitle_C* SaveReturnToMenuText;                                       // 0x03E8 (size: 0x8)
    class UHSmallButton1_C* ScreenshotCameraButton;                                   // 0x03F0 (size: 0x8)
    class UHSmallButton1_C* SettingsButton;                                           // 0x03F8 (size: 0x8)
    class USizeBox* SizeBox_UnstuckP2;                                                // 0x0400 (size: 0x8)
    class USizeBox* SizeBox_UnstuckP3;                                                // 0x0408 (size: 0x8)
    class USizeBox* SizeBox_UnstuckP4;                                                // 0x0410 (size: 0x8)
    class UHSmallButton2_C* SkipSaveButton;                                           // 0x0418 (size: 0x8)
    class UH_ButtonMetal2_C* SkipSaveCancelButton;                                    // 0x0420 (size: 0x8)
    class UH_ButtonMetal2_C* SkipSaveCancelButton_1;                                  // 0x0428 (size: 0x8)
    class UH_ButtonMetal3_C* SkipSaveConfirmButton;                                   // 0x0430 (size: 0x8)
    class UH_ButtonMetal3_C* SkipSaveNextPanelButton;                                 // 0x0438 (size: 0x8)
    class UButton* TikTokButton;                                                      // 0x0440 (size: 0x8)
    class UButton* TwitterButton_1;                                                   // 0x0448 (size: 0x8)
    class UUI_CanAchieve_C* UI_CanAchieve;                                            // 0x0450 (size: 0x8)
    class UH_ButtonWood1_C* UnstuckButton;                                            // 0x0458 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_remoteplayconfig;                           // 0x0460 (size: 0x8)
    class UButton* WikiButton_1;                                                      // 0x0468 (size: 0x8)
    class UButton* YTButton_1;                                                        // 0x0470 (size: 0x8)
    class UObject* SettingsMenu;                                                      // 0x0478 (size: 0x8)
    bool ClearDirt?;                                                                  // 0x0480 (size: 0x1)
    bool Tutorial?;                                                                   // 0x0481 (size: 0x1)

    void ClearDirt();
    void ClearResources();
    ESlateVisibility Get_CanvasPanel_RemotePlay_Visibility_0();
    void ConfigureRemotePlayMenu(bool P1Controller?);
    void SetUnstuckSplitscreenVisibility();
    void UnstuckPlayer(int32 PlayerIndex);
    void OnCompleted_E672DCBE4C9A6FF7427E0FB1F8B565BF();
    void OnCompleted_B320C3EA4954BDB22F95C5AE19682279();
    void OnCompleted_086F6F3343773BDA3AE3899DC68FFE04();
    void BndEvt__RecallButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MainMenuConfirmButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SaveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ScreenshotCameraButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ClearConfirmButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CancelClearButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MainMenuCancelButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ClearRawResources_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ClearDirtChunks_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UnstuckButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_DesktopButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_DesktopCancelButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_DesktopConfirmButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ReturnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__UI_EscMenu_HCheckbox_C_176_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__UI_EscMenu_H_ButtonWood3_UnstuckP2_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_H_ButtonWood3_UnstuckP3_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_H_ButtonWood3_UnstuckP4_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_TwitterButton_1_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_WikiButton_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_YTButton_1_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_TikTokButton_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_InstagramButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_DiscordButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
    void Destruct();
    void OnInitialized();
    void BndEvt__UI_EscMenu_SkipSaveButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_SkipSaveCancelButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_SkipSaveConfirmButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_SkipSaveCancelButton_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_EscMenu_SkipSaveNextPanelButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_EscMenu(int32 EntryPoint);
}; // Size: 0x482

#endif
