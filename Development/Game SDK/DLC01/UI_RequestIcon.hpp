#ifndef UE4SS_SDK_UI_RequestIcon_HPP
#define UE4SS_SDK_UI_RequestIcon_HPP

class UUI_RequestIcon_C : public UUserWidget
{
    class UH_TextBody_C* H_TextBody_Weight;                                           // 0x0260 (size: 0x8)
    class UH_TextSubTitle_C* H_TextSubTitle_X;                                        // 0x0268 (size: 0x8)
    class UH_TextTitle_C* H_TextTitle_Amount;                                         // 0x0270 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0278 (size: 0x8)
    class UOverlay* Overlay_1;                                                        // 0x0280 (size: 0x8)

    void SetIcon(TSoftObjectPtr<UTexture2D> Texture, float Amount, bool isReward?, float ImageScale, FString Name);
}; // Size: 0x288

#endif
