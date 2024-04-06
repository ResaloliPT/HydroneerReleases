#ifndef UE4SS_SDK_AC_Magnet_HPP
#define UE4SS_SDK_AC_Magnet_HPP

class UAC_Magnet_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    TArray<class ABP_ParentItem_C*> Resources;                                        // 0x00B8 (size: 0x10)
    FTimerHandle MagTimerHandle;                                                      // 0x00C8 (size: 0x8)
    class USceneComponent* NewVar_0;                                                  // 0x00D0 (size: 0x8)

    void SetItemToMagnet(class ABP_ParentItem_C* Item);
    void NewItem(class ABP_ParentItem_C* Item);
    void RemoveItem(class ABP_ParentItem_C* Item);
    void StartMagnet(class USceneComponent* AttractLocation);
    void StopMagnet();
    void MagnetTimer();
    void PrepItemsMag();
    void PrepItemsDrop();
    void ExecuteUbergraph_AC_Magnet(int32 EntryPoint);
}; // Size: 0xD8

#endif
