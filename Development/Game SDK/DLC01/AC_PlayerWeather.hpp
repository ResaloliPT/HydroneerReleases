#ifndef UE4SS_SDK_AC_PlayerWeather_HPP
#define UE4SS_SDK_AC_PlayerWeather_HPP

class UAC_PlayerWeather_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UNiagaraComponent* Snow;                                                    // 0x00B8 (size: 0x8)
    TEnumAsByte<E_WeatherType::Type> GlobalWeather;                                   // 0x00C0 (size: 0x1)
    TEnumAsByte<E_WeatherType::Type> LocalWeather;                                    // 0x00C1 (size: 0x1)
    TEnumAsByte<E_WeatherType::Type> AppliedWeather;                                  // 0x00C2 (size: 0x1)
    class UNiagaraComponent* Ash;                                                     // 0x00C8 (size: 0x8)

    void InitAsh();
    void CleanupWeather();
    void InitSnow();
    void HandleWeather();
    void ApplyWeather(TEnumAsByte<E_WeatherType::Type> WeatherType);
    void SetLocalWeather(TEnumAsByte<E_WeatherType::Type> LocalWeather);
    void SetGlobalWeather(TEnumAsByte<E_WeatherType::Type> WeatherType);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_AC_PlayerWeather(int32 EntryPoint);
}; // Size: 0xD0

#endif
