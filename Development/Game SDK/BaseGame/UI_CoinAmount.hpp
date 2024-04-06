#ifndef UE4SS_SDK_UI_CoinAmount_HPP
#define UE4SS_SDK_UI_CoinAmount_HPP

class UUI_CoinAmount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x0268 (size: 0x8)
    TEnumAsByte<E_CurrencyType::Type> CurrencyType;                                   // 0x0270 (size: 0x1)

    void SetText(FText InText);
    void Construct();
    void ExecuteUbergraph_UI_CoinAmount(int32 EntryPoint);
}; // Size: 0x271

#endif
