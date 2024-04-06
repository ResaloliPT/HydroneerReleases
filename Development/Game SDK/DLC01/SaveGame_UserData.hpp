#ifndef UE4SS_SDK_SaveGame_UserData_HPP
#define UE4SS_SDK_SaveGame_UserData_HPP

class USaveGame_UserData_C : public USaveGame
{
    TArray<FString> DisabledModIDs;                                                   // 0x0028 (size: 0x10)
    TMap<class FString, class FS_CharacterStyle> PlayerStyles;                        // 0x0038 (size: 0x50)

}; // Size: 0x88

#endif
