#ifndef UE4SS_SDK_GameplaySettingsPage_HPP
#define UE4SS_SDK_GameplaySettingsPage_HPP

class UGameplaySettingsPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UHorizontalBox* HorizontalBox_DropSwatches;                                 // 0x0268 (size: 0x8)
    class UDefaultRadioSelectSetting_C* RadioSelectSetting_DropColor;                 // 0x0270 (size: 0x8)
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch;                  // 0x0278 (size: 0x8)
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_1;                // 0x0280 (size: 0x8)
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_2;                // 0x0288 (size: 0x8)
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_55;               // 0x0290 (size: 0x8)
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_138;              // 0x0298 (size: 0x8)
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_213;              // 0x02A0 (size: 0x8)
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_267;              // 0x02A8 (size: 0x8)
    class UUI_LocationIndicatorSwatch_C* UI_LocationIndicatorSwatch_319;              // 0x02B0 (size: 0x8)

    void Construct();
    void LocationIndicatorSwatchSelected(FString Value);
    void ExecuteUbergraph_GameplaySettingsPage(int32 EntryPoint);
}; // Size: 0x2B8

#endif
