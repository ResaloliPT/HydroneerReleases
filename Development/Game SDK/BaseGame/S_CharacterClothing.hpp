#ifndef UE4SS_SDK_S_CharacterClothing_HPP
#define UE4SS_SDK_S_CharacterClothing_HPP

struct FS_CharacterClothing
{
    TSoftObjectPtr<USkeletalMesh> Mesh_16_72D0A517426BD3A330494EA6D6E0AFC8;           // 0x0000 (size: 0x28)
    TArray<TEnumAsByte<E_MeshParts::Type>> HideMeshes_9_FA85043147784D4D2DEEECB7CB33D73A; // 0x0028 (size: 0x10)
    FText Name_31_2D372E924DA7AEB6DBD263AF728EC999;                                   // 0x0038 (size: 0x18)
    TSoftObjectPtr<UTexture2D> Icon_28_A99889F44D1E5F74E7FA3580A5AF5D90;              // 0x0050 (size: 0x28)
    bool DisplayAsOption_33_DE61712547069989232F27989BDDC929;                         // 0x0078 (size: 0x1)

}; // Size: 0x79

#endif
