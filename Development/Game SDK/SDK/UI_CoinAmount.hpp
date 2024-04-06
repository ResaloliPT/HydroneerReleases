#ifndef UE4SS_SDK_UI_CoinAmount_HPP
#define UE4SS_SDK_UI_CoinAmount_HPP

class UUI_CoinAmount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text;
    TEnumAsByte<E_CurrencyType::Type> CurrencyType;

    void SetText(FText InText);
    void Construct();
    void ExecuteUbergraph_UI_CoinAmount(int32 EntryPoint);
};

#endif
