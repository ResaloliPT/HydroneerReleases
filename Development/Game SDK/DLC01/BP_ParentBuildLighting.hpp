#ifndef UE4SS_SDK_BP_ParentBuildLighting_HPP
#define UE4SS_SDK_BP_ParentBuildLighting_HPP

class ABP_ParentBuildLighting_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0490 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0498 (size: 0x8)
    float Timeline_0_NewTrack_0_23B1F0AF49440E398514958D3E73E062;                     // 0x04A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_23B1F0AF49440E398514958D3E73E062; // 0x04A4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x04A8 (size: 0x8)
    bool On?;                                                                         // 0x04B0 (size: 0x1)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x04B8 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ActorLoaded();
    void ReceiveBeginPlay();
    void OverrideLightOn();
    void OverrideLightOff();
    void ExecuteUbergraph_BP_ParentBuildLighting(int32 EntryPoint);
}; // Size: 0x4C0

#endif
