#ifndef UE4SS_SDK_TemplateSequence_HPP
#define UE4SS_SDK_TemplateSequence_HPP

struct FTemplateSequenceBindingOverrideData
{
    TWeakObjectPtr<class UObject> Object;                                             // 0x0000 (size: 0x8)
    bool bOverridesDefault;                                                           // 0x0008 (size: 0x1)

}; // Size: 0xC

class ATemplateSequenceActor : public AActor
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x0228 (size: 0x14)
    class UTemplateSequencePlayer* SequencePlayer;                                    // 0x0240 (size: 0x8)
    FSoftObjectPath TemplateSequence;                                                 // 0x0248 (size: 0x18)
    FTemplateSequenceBindingOverrideData BindingOverride;                             // 0x0260 (size: 0xC)

    void SetSequence(class UTemplateSequence* InSequence);
    void SetBinding(class AActor* Actor);
    class UTemplateSequence* LoadSequence();
    class UTemplateSequencePlayer* GetSequencePlayer();
    class UTemplateSequence* GetSequence();
}; // Size: 0x270

class UCameraAnimationSequence : public UTemplateSequence
{
}; // Size: 0x108

class USequenceCameraShake : public UCameraShakeBase
{
    class UCameraAnimationSequence* Sequence;                                         // 0x0098 (size: 0x8)
    float PlayRate;                                                                   // 0x00A0 (size: 0x4)
    float Scale;                                                                      // 0x00A4 (size: 0x4)
    float BlendInTime;                                                                // 0x00A8 (size: 0x4)
    float BlendOutTime;                                                               // 0x00AC (size: 0x4)
    float RandomSegmentDuration;                                                      // 0x00B0 (size: 0x4)
    bool bRandomSegment;                                                              // 0x00B4 (size: 0x1)
    class USequenceCameraShakeSequencePlayer* Player;                                 // 0x00B8 (size: 0x8)
    class USequenceCameraShakeCameraStandIn* CameraStandIn;                           // 0x00C0 (size: 0x8)

}; // Size: 0xD0

class USequenceCameraShakeCameraStandIn : public UObject
{
    float FieldOfView;                                                                // 0x0030 (size: 0x4)

}; // Size: 0x70

class USequenceCameraShakeSequencePlayer : public UObject
{
    class UObject* BoundObjectOverride;                                               // 0x0480 (size: 0x8)
    class UMovieSceneSequence* Sequence;                                              // 0x0488 (size: 0x8)
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                   // 0x0490 (size: 0xE8)

}; // Size: 0x5D8

class UTemplateSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x0060 (size: 0x8)
    TSoftClassPtr<AActor> BoundActorClass;                                            // 0x0068 (size: 0x28)
    TSoftObjectPtr<AActor> BoundPreviewActor;                                         // 0x0090 (size: 0x28)
    TMap<class FGuid, class FName> BoundActorComponents;                              // 0x00B8 (size: 0x50)

}; // Size: 0x108

class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{

    class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor);
}; // Size: 0x688

class UTemplateSequenceSection : public UMovieSceneSubSection
{
}; // Size: 0x168

class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
}; // Size: 0xB0

class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
}; // Size: 0x88

#endif
