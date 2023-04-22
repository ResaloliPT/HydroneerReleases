#ifndef UE4SS_SDK_BP_ParentBuildLighting_HPP
#define UE4SS_SDK_BP_ParentBuildLighting_HPP

class ABP_ParentBuildLighting_C : public ABP_ParentBuild_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Audio;
    class UPointLightComponent* PointLight;
    float Timeline_0_NewTrack_0_23B1F0AF49440E398514958D3E73E062;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_23B1F0AF49440E398514958D3E73E062;
    class UTimelineComponent* Timeline_0;
    bool On?;
    class UMaterialInstanceDynamic* DynamicMaterial;

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void LMBDownIsTarget(class UPrimitiveComponent* Component, class ABP_ParentItem_C* CarryingItem, class ABP_GameController_C* Insigator);
    void ActorLoaded();
    void ReceiveBeginPlay();
    void OverrideLightOn();
    void OverrideLightOff();
    void ExecuteUbergraph_BP_ParentBuildLighting(int32 EntryPoint);
};

#endif
