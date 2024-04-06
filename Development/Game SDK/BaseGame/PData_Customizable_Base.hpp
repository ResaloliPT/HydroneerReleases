#ifndef UE4SS_SDK_PData_Customizable_Base_HPP
#define UE4SS_SDK_PData_Customizable_Base_HPP

class UPData_Customizable_Base_C : public UPrimaryDataAsset
{
    FText Name;                                                                       // 0x0030 (size: 0x18)
    TSoftObjectPtr<UTexture2D> Icon;                                                  // 0x0048 (size: 0x28)

    void GetIcon(uint8 Context, TSoftObjectPtr<UTexture2D>& Icon, bool& Display);
}; // Size: 0x70

#endif
