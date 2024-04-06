#ifndef UE4SS_SDK_BP_CaughtFish_HPP
#define UE4SS_SDK_BP_CaughtFish_HPP

class ABP_CaughtFish_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UAC_Heat_C* AC_Heat;                                                        // 0x0468 (size: 0x8)
    TEnumAsByte<E_FishType::Type> Type;                                               // 0x0470 (size: 0x1)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0478 (size: 0x8)

    void GetSpecialType(FString& Type);
    void CreateProxyItem();
    void UserConstructionScript();
    void InFire(bool SlowBurn?);
    void OutOfFire();
    void FullHeat();
    void HeatUpdated(float Heat);
    void ActorLoaded();
    void LoadFishType();
    void ExecuteUbergraph_BP_CaughtFish(int32 EntryPoint);
}; // Size: 0x480

#endif
