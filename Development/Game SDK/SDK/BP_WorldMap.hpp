#ifndef UE4SS_SDK_BP_WorldMap_HPP
#define UE4SS_SDK_BP_WorldMap_HPP

class ABP_WorldMap_C : public ABP_ParentTool_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;

    void OverridePickedup();
    void OverrideDroppedItem(class ABP_GameCharacter_C* Character);
    void ExecuteUbergraph_BP_WorldMap(int32 EntryPoint);
};

#endif
