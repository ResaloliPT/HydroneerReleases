#ifndef UE4SS_SDK_BP_LogicLamp_HPP
#define UE4SS_SDK_BP_LogicLamp_HPP

class ABP_LogicLamp_C : public ABP_ParentLogic_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UPointLightComponent* PointLight;
    class UBoxComponent* X-Box;
    float Timeline_1_Alpha_84368258460F6123A22817984FC3F5D3;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_84368258460F6123A22817984FC3F5D3;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_NewTrack_0_C2C9A124406F1D886A4A548612A6B781;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C2C9A124406F1D886A4A548612A6B781;
    class UTimelineComponent* Timeline_0;
    FString PreviousLogic;
    class UMaterialInstanceDynamic* DynamicMaterial;

    float GetLightValue();
    void LightPlants(const float& LightValue);
    void UpdateLight(bool Loading?);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OverrideLogicIn(class USceneComponent* Component);
    void OverridePickedup();
    void RaiseBrightness(bool Up?);
    void ChangeColor(FVector A);
    void ActorLoaded();
    void BndEvt__BP_LogicLamp_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_LogicLamp_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_LogicLamp(int32 EntryPoint);
};

#endif
