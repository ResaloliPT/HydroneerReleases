#ifndef UE4SS_SDK_L_DLC1_Persistent_HPP
#define UE4SS_SDK_L_DLC1_Persistent_HPP

class AL_DLC1_Persistent_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_L_DLC1_Persistent(int32 EntryPoint);
}; // Size: 0x230

#endif
