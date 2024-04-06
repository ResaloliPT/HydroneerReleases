#ifndef UE4SS_SDK_SaveGame_GameData_HPP
#define UE4SS_SDK_SaveGame_GameData_HPP

class USaveGame_GameData_C : public UEMSCustomSaveGame
{
    TEnumAsByte<E_GameType::Type> CurrentGameType;                                    // 0x0040 (size: 0x1)
    bool CloudSave;                                                                   // 0x0041 (size: 0x1)
    bool CreativeMode;                                                                // 0x0042 (size: 0x1)

}; // Size: 0x43

#endif
