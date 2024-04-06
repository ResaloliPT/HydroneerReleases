#ifndef UE4SS_SDK_S_Character_Customization_HPP
#define UE4SS_SDK_S_Character_Customization_HPP

struct FS_Character_Customization
{
    FS_Character_Body Body_50_B1E586F14C5B7AB5EAA170854BD38BBF;                       // 0x0000 (size: 0xE0)
    TArray<TSoftObjectPtr<UPData_Head_C>> Heads_66_AD94BBEA4E9D060DD0D42987B5EC3A98;  // 0x00E0 (size: 0x10)
    TArray<TSoftObjectPtr<UPData_ClothingSet_C>> ClothingSets_65_6851D82140EE23C2079EF1800E44A916; // 0x00F0 (size: 0x10)
    TSoftObjectPtr<USkeletalMesh> BaseSkeleton_64_57E7EC65437BAB2C25DC80A985E9FCEC;   // 0x0100 (size: 0x28)

}; // Size: 0x128

#endif
