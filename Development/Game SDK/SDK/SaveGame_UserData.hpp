#ifndef UE4SS_SDK_SaveGame_UserData_HPP
#define UE4SS_SDK_SaveGame_UserData_HPP

class USaveGame_UserData_C : public USaveGame
{
    TArray<FString> DisabledModIDs;
    TMap<class FString, class FS_CharacterStyle> PlayerStyles;

};

#endif
