#ifndef UE4SS_SDK_L_GameWorld_HPP
#define UE4SS_SDK_L_GameWorld_HPP

class AL_GameWorld_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_L_GameWorld(int32 EntryPoint);
}; // Size: 0x230

#endif
