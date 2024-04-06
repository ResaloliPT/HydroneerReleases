#ifndef UE4SS_SDK_UI_HUD_HPP
#define UE4SS_SDK_UI_HUD_HPP

class UUI_HUD_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* SaveIconAnim;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* ToolTipAnim;                                              // 0x0270 (size: 0x8)
    class UCanvasPanel* BuffPanel;                                                    // 0x0278 (size: 0x8)
    class UCanvasPanel* BuffPanelStore;                                               // 0x0280 (size: 0x8)
    class UCanvasPanel* CanvasPanel_PlayerName;                                       // 0x0288 (size: 0x8)
    class UImage* Crosshair;                                                          // 0x0290 (size: 0x8)
    class UDefaultActionLabel_C* DefaultActionLabel;                                  // 0x0298 (size: 0x8)
    class UHorizontalBox* GenBadgeBox_1;                                              // 0x02A0 (size: 0x8)
    class UH_TextTitle_C* GenToolTipName;                                             // 0x02A8 (size: 0x8)
    class UH_TextTitle_C* GenToolTipName_1;                                           // 0x02B0 (size: 0x8)
    class UH_TextTitle_C* H_TextTitle_PlayerName;                                     // 0x02B8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_209;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image_PlayerNameBG;                                                 // 0x02F0 (size: 0x8)
    class UImage* ImageBuff1;                                                         // 0x02F8 (size: 0x8)
    class UImage* ImageBuff2;                                                         // 0x0300 (size: 0x8)
    class UImage* ImageBuffStore1;                                                    // 0x0308 (size: 0x8)
    class UImage* ImageBuffStore2;                                                    // 0x0310 (size: 0x8)
    class USizeBox* SizeBox_Subtitles;                                                // 0x0318 (size: 0x8)
    class UHorizontalBox* StoreBadgeBox;                                              // 0x0320 (size: 0x8)
    class UCanvasPanel* StorePriceContainer;                                          // 0x0328 (size: 0x8)
    class UCanvasPanel* StoreTooltipV2;                                               // 0x0330 (size: 0x8)
    class UHTextBlockDELETE_C* StoreTooltipV2_Description;                            // 0x0338 (size: 0x8)
    class UHTextBlockDELETE_C* StoreTooltipV2_Price;                                  // 0x0340 (size: 0x8)
    class UH_TextTitle_C* StoreTooltipV2_Title;                                       // 0x0348 (size: 0x8)
    class UTextBlock* TextBlock_SpeakerName;                                          // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock_Subtitles;                                            // 0x0358 (size: 0x8)
    class UHTextBlockDELETE_C* TextBuff1;                                             // 0x0360 (size: 0x8)
    class UHTextBlockDELETE_C* TextBuff2;                                             // 0x0368 (size: 0x8)
    class UHTextBlockDELETE_C* TextBuffStore1;                                        // 0x0370 (size: 0x8)
    class UHTextBlockDELETE_C* TextBuffStore2;                                        // 0x0378 (size: 0x8)
    class UCanvasPanel* TooltipV2;                                                    // 0x0380 (size: 0x8)
    class UHTextBlockDELETE_C* TooltipV2_Description;                                 // 0x0388 (size: 0x8)
    class UH_TextTitle_C* TooltipV2_Title_1;                                          // 0x0390 (size: 0x8)
    class UH_TextBody_C* TutorialText;                                                // 0x0398 (size: 0x8)
    class UVerticalBox* VehicleActionBox;                                             // 0x03A0 (size: 0x8)
    class UCanvasPanel* VehicleTipBox;                                                // 0x03A8 (size: 0x8)
    bool GenToolTipOut?;                                                              // 0x03B0 (size: 0x1)
    int32 PlayerIndex;                                                                // 0x03B4 (size: 0x4)
    int32 SubtitleIndex;                                                              // 0x03B8 (size: 0x4)
    TArray<FSubtitleCue> ActiveSubtitles;                                             // 0x03C0 (size: 0x10)
    FTimerHandle SubtitleQueueTimer;                                                  // 0x03D0 (size: 0x8)
    float SubtitleTime;                                                               // 0x03D8 (size: 0x4)

    void SetBuffPanelStore(TArray<FS_MasterWorkBuffDetails>& Buffs);
    void SetBuffPanel(TArray<FS_MasterWorkBuffDetails>& Buffs);
    void Toggle Vehicle Action Box(bool Open?, TArray<FS_VehicleActions>& Actions);
    void SetTextFontSize(class UTextBlock* Text, int32 FontSize);
    void Callback_SubtitleSize(int32 NewValue);
    void ClearSubtitles();
    void Display NPC Dialogue(FText NPC Name, class USoundWave* Sound);
    void Callback_EnableSubtitles(bool NewValue);
    void Callback_ToggleNamePlates(bool NewValue);
    void SetShowPlayerName();
    void AddBadges(TArray<TEnumAsByte<E_Badges::Type>>& Badges, class UPanelWidget* Target);
    void SetCrosshair(TEnumAsByte<E_Crosshairs::Type> Type);
    void SetPriceBox(int32 Amount, FText Name, FText Description, const TArray<TEnumAsByte<E_Badges::Type>>& Badges, TEnumAsByte<E_CurrencyType::Type> Currency, const TArray<FS_MasterWorkBuffDetails>& Buffs, bool PaidFor?);
    void NewItemPickedUp(FText Name, FText Description, const TArray<TEnumAsByte<E_Badges::Type>>& Badges, const TArray<FS_MasterWorkBuffDetails>& Buffs);
    void ItemDropped();
    void VehicleTipBoxShow(bool Show?);
    void Saving?(bool Saving?);
    void ToggleCrosshair(bool Show?);
    void Construct();
    void QueueSubtitles();
    void NextSubtitleLine();
    void ExecuteUbergraph_UI_HUD(int32 EntryPoint);
}; // Size: 0x3DC

#endif
