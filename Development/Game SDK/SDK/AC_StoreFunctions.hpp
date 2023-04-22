#ifndef UE4SS_SDK_AC_StoreFunctions_HPP
#define UE4SS_SDK_AC_StoreFunctions_HPP

class UAC_StoreFunctions_C : public UActorComponent
{
    TArray<class ABP_ParentCurrency_C*> Currency;

    void CalcWeight(TArray<class ABP_ParentResource_C*>& Resources, float& Weight);
    void CalcPrice(TArray<class ABP_ParentResource_C*>& Array, int32& Total);
    void CalculateCraftedPrice(class ABP_ParentCraftedResource_C* CraftedItem, int32& Price);
    void CalculateFishPrice(class ABP_CaughtFish_C* Fish, int32& Cost);
    void ReplaceCoinsWithNewValue(int32 NewValue, FTransform SpawnLocation, TEnumAsByte<E_CurrencyType::Type> CurrencyType);
    void GetTotalCoinValue(TEnumAsByte<E_CurrencyType::Type> CurrencyType, int32& Price);
};

#endif
