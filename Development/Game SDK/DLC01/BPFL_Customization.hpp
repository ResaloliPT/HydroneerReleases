#ifndef UE4SS_SDK_BPFL_Customization_HPP
#define UE4SS_SDK_BPFL_Customization_HPP

class UBPFL_Customization_C : public UBlueprintFunctionLibrary
{

    void GetRelevantCustomizationOptions(class UDataTable* DataTable, FS_CharacterStyle Style, class UObject* __WorldContext, TArray<class UPData_Head_C*>& Heads, TArray<class UPData_Hair_C*>& Hair, TArray<class UPData_Beard_C*>& Beards, TArray<class UPData_ClothingSet_C*>& ClothingSets);
    void GetCustomizationOptions(class UDataTable* DataTable, FS_CharacterStyle Style, class UObject* __WorldContext, FS_Character_Customization& Options);
}; // Size: 0x28

#endif
