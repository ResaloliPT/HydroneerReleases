#ifndef UE4SS_SDK_BP_ParentHat_HPP
#define UE4SS_SDK_BP_ParentHat_HPP

class ABP_ParentHat_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_ParentHat_C* ProxyHat;
    FTransform HatOffset;

    void CreateProxyHat();
    void ToggleProxyHat(bool On?);
    void OverrideHatOn(class ABP_GameCharacter_C* Character);
    void OverrideHatOff(class ABP_GameCharacter_C* Character);
    void Equip(bool Equiped?, class ABP_GameCharacter_C* Character);
    void BPI_Unhighlight(class ABP_GameController_C* Controller);
    void BPI_Highlight(class ABP_GameController_C* Controller);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_ParentHat(int32 EntryPoint);
};

#endif
