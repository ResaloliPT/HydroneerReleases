#ifndef UE4SS_SDK_PData_Customizable_Base_HPP
#define UE4SS_SDK_PData_Customizable_Base_HPP

class UPData_Customizable_Base_C : public UPrimaryDataAsset
{
    FText Name;
    TSoftObjectPtr<UTexture2D> Icon;

};

#endif
