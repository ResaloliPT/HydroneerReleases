#ifndef UE4SS_SDK_BP_IcehelmElevator_HPP
#define UE4SS_SDK_BP_IcehelmElevator_HPP

class ABP_IcehelmElevator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* S_IceH_LiftCog;
    class UAudioComponent* S_IceH_LiftPlatform;
    class UAudioComponent* S_IceH_LiftPulley;
    class ULocalCableComponent* CableLocalWeight2;
    class ULocalCableComponent* CableLocalWeight1;
    class ULocalCableComponent* CableLocalPlatform2;
    class ULocalCableComponent* CableLocalPlatform1;
    class ULocalCableComponent* LocalCable2;
    class ULocalCableComponent* LocalCable3;
    class ULocalCableComponent* LocalCable1;
    class ULocalCableComponent* LocalCable;
    class UStaticMeshComponent* Support2;
    class UStaticMeshComponent* Support1;
    class UStaticMeshComponent* Weight2;
    class UStaticMeshComponent* Weight1;
    class USceneComponent* WeightRoot;
    class UStaticMeshComponent* Cog8;
    class UStaticMeshComponent* Cog7;
    class UStaticMeshComponent* Cog6;
    class UStaticMeshComponent* Cog5;
    class UStaticMeshComponent* Cog4;
    class UStaticMeshComponent* Cog3;
    class UStaticMeshComponent* Cog2;
    class UStaticMeshComponent* Cog1;
    class USceneComponent* Bottom;
    class USceneComponent* Top;
    class UStaticMeshComponent* Platform;
    class UStaticMeshComponent* StaticMesh1;
    float Movement_Lerp_91F91C7943318ED9E2C22A98ADD4E335;
    TEnumAsByte<ETimelineDirection::Type> Movement__Direction_91F91C7943318ED9E2C22A98ADD4E335;
    class UTimelineComponent* Movement;

    void SetCableLength(float Lerp);
    void Movement__FinishedFunc();
    void Movement__UpdateFunc();
    void ReceiveBeginPlay();
    void MovePlatform(bool Direction);
    void ExecuteUbergraph_BP_IcehelmElevator(int32 EntryPoint);
};

#endif
