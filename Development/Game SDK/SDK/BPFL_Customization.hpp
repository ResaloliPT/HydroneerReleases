#ifndef UE4SS_SDK_BPFL_Customization_HPP
#define UE4SS_SDK_BPFL_Customization_HPP

class UBPFL_Customization_C : public UBlueprintFunctionLibrary
{

    void RandomStyle(class UObject* __WorldContext, FS_CharacterStyle& Style);
    void RandomSkinColor(class UObject* __WorldContext, FName& SkinColor);
    void RandomHairColor(class UObject* __WorldContext, FName& HairColor);
    void RandomBeardMesh(FS_CharacterStyle Style, class UObject* __WorldContext, int32& BeardIndex);
    void RandomHairMesh(FS_CharacterStyle Style, class UObject* __WorldContext, int32& HairIndex);
    void GetCurrentHead(FS_CharacterStyle Style, class UObject* __WorldContext, class UPData_Head_C*& HeadData);
    void RandomClothingColor(class UObject* __WorldContext, FName& ClothingColor);
    void RandomClothingMesh(FS_CharacterStyle Style, class UObject* __WorldContext, int32& ClothingIndex);
    void GetRelevantCustomizationOptions(FS_CharacterStyle Style, class UObject* __WorldContext, TArray<class UPData_Head_C*>& Heads, TArray<class UPData_Hair_C*>& Hair, TArray<class UPData_Beard_C*>& Beards, TArray<class UPData_ClothingSet_C*>& ClothingSets);
    void GetCustomizationOptions(FS_CharacterStyle Style, class UObject* __WorldContext, FS_Character_Customization& Options);
};

#endif
