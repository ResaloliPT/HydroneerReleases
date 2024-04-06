#ifndef UE4SS_SDK_Footstep_AnimNotify_HPP
#define UE4SS_SDK_Footstep_AnimNotify_HPP

class UFootstep_AnimNotify_C : public UAnimNotify
{
    class USoundBase* Sound;
    FName AttachPointName;
    TEnumAsByte<FootstepType::Type> FootstepType;
    float VolumeMultiplier;
    float PitchMultiplier;
    bool OverrideMaskCurve;

    void FindFootstepType(class USkeletalMeshComponent* CharacterMesh, int32& Type);
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

#endif
