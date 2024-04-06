#ifndef UE4SS_SDK_UI_RequestIcon_HPP
#define UE4SS_SDK_UI_RequestIcon_HPP

class UUI_RequestIcon_C : public UUserWidget
{
    class UH_TextBody_C* H_TextBody_Weight;
    class UH_TextSubTitle_C* H_TextSubTitle_X;
    class UH_TextTitle_C* H_TextTitle_Amount;
    class UImage* Image_Icon;
    class UOverlay* Overlay_1;

    void SetIcon(TSoftObjectPtr<UTexture2D> Texture, float Amount, bool isReward?, float ImageScale);
};

#endif
