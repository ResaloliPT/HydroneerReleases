#ifndef UE4SS_SDK_BP_ShelfFishingPot_HPP
#define UE4SS_SDK_BP_ShelfFishingPot_HPP

class ABP_ShelfFishingPot_C : public ABP_ParentShelf_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;                                      // 0x04E8 (size: 0x8)
    class USC_ShelfLocation_C* SC_ShelfLocation;                                      // 0x04F0 (size: 0x8)
    FTimerHandle FishingTimer;                                                        // 0x04F8 (size: 0x8)

    void UserConstructionScript();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void CatchFish();
    void OverrideLoaded();
    void ExecuteUbergraph_BP_ShelfFishingPot(int32 EntryPoint);
}; // Size: 0x500

#endif
