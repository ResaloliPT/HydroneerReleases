#ifndef UE4SS_SDK_AC_Magnet_HPP
#define UE4SS_SDK_AC_Magnet_HPP

class UAC_Magnet_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class ABP_ParentItem_C*> Resources;
    FTimerHandle MagTimerHandle;
    class USceneComponent* NewVar_0;

    void SetItemToMagnet(class ABP_ParentItem_C* Item);
    void NewItem(class ABP_ParentItem_C* Item);
    void RemoveItem(class ABP_ParentItem_C* Item);
    void StartMagnet(class USceneComponent* AttractLocation);
    void StopMagnet();
    void MagnetTimer();
    void PrepItemsMag();
    void PrepItemsDrop();
    void ExecuteUbergraph_AC_Magnet(int32 EntryPoint);
};

#endif
