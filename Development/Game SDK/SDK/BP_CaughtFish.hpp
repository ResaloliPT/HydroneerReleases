#ifndef UE4SS_SDK_BP_CaughtFish_HPP
#define UE4SS_SDK_BP_CaughtFish_HPP

class ABP_CaughtFish_C : public ABP_ParentResource_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAC_Heat_C* AC_Heat;
    TEnumAsByte<E_FishType::Type> Type;
    class UMaterialInstanceDynamic* DynamicMaterial;

    void CreateProxyItem();
    void UserConstructionScript();
    void InFire(bool SlowBurn?);
    void OutOfFire();
    void FullHeat();
    void HeatUpdated(float Heat);
    void ActorLoaded();
    void LoadFishType();
    void ExecuteUbergraph_BP_CaughtFish(int32 EntryPoint);
};

#endif
