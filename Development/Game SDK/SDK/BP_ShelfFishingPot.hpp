#ifndef UE4SS_SDK_BP_ShelfFishingPot_HPP
#define UE4SS_SDK_BP_ShelfFishingPot_HPP

class ABP_ShelfFishingPot_C : public ABP_ParentShelf_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_ResourceSpawn_C* AC_ResourceSpawn;
    class USC_ShelfLocation_C* SC_ShelfLocation;
    FTimerHandle FishingTimer;

    void UserConstructionScript();
    void OverridePlacedDown(class ABP_GameCharacter_C* Character);
    void CatchFish();
    void OverrideLoaded();
    void ExecuteUbergraph_BP_ShelfFishingPot(int32 EntryPoint);
};

#endif
