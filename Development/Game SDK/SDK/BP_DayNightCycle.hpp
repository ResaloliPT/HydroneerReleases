#ifndef UE4SS_SDK_BP_DayNightCycle_HPP
#define UE4SS_SDK_BP_DayNightCycle_HPP

class ABP_DayNightCycle_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class ABP_Clouds_C* WorldClouds;
    class ADirectionalLight* Sun;
    class UCurveFloat* LightCurve;
    class ABP_Sky_Sphere_C* Sky;
    float Minutes Per Day;
    float One Day;
    float One Hour;
    float Hour;
    float Sun Angle;
    class ASkyLight* SkyLight;
    class AExponentialHeightFog* ExpoHeightFog;
    bool Day?;
    FTimerHandle MainTimer;
    class UCurveLinearColor* FogColor;
    bool Paused?;
    FBP_DayNightCycle_COnChangeTime OnChangeTime;
    void OnChangeTime(float HourDelta, float ActualSecondsDelta);
    FTimerHandle SkipTimeTimer;

    void ComponentsToSave(TArray<class UActorComponent*>& Components);
    void ChangeTime(float Delta, bool GrowCrops?);
    void UnpauseTime();
    void PauseTime();
    void SetDayModePostLoad();
    void SetDayMode();
    void ActorSaved();
    void ReceiveBeginPlay();
    void ActorPreSave();
    void SpeedUpToSunrise(class ABP_ParentBed_C* Bed, class ABP_GameController_C* Controller);
    void SunRiseTimerCheck();
    void SetNewRate();
    void Update();
    void ActorLoaded();
    void ExecuteUbergraph_BP_DayNightCycle(int32 EntryPoint);
    void OnChangeTime__DelegateSignature(float HourDelta, float ActualSecondsDelta);
};

#endif
