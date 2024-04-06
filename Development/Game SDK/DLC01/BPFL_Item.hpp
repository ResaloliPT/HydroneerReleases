#ifndef UE4SS_SDK_BPFL_Item_HPP
#define UE4SS_SDK_BPFL_Item_HPP

class UBPFL_Item_C : public UBlueprintFunctionLibrary
{

    void IsRootComponent(class AActor* Actor, class USceneComponent* Component, class UObject* __WorldContext, bool& Result);
    void SetHighlight(class ABP_GameController_C* Controller, class AActor* Target, class UObject* __WorldContext);
    void ForceStopHighlight(class ABP_GameController_C* Controller, class AActor* Target, class UObject* __WorldContext);
    void ToggleHighlightSpecific(bool Highlight?, int32 StencilValue, class ABP_GameController_C* Controller, class AActor* Target, class UObject* __WorldContext);
    void ToggleHighlightPlayer(bool Highlight?, class ABP_GameController_C* Controller, class AActor* Target, class UObject* __WorldContext);
}; // Size: 0x28

#endif
