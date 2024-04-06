#ifndef UE4SS_SDK_BP_ModActorBase_HPP
#define UE4SS_SDK_BP_ModActorBase_HPP

class ABP_ModActorBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    FString ModName;                                                                  // 0x0230 (size: 0x10)
    FString ModDescription;                                                           // 0x0240 (size: 0x10)
    FString ModAuthor;                                                                // 0x0250 (size: 0x10)
    FString ModVersion;                                                               // 0x0260 (size: 0x10)
    TArray<FString> ModButtons;                                                       // 0x0270 (size: 0x10)

    void PrintToModLoader(FString Message);
    void ExecuteUbergraph_BP_ModActorBase(int32 EntryPoint);
}; // Size: 0x280

#endif
