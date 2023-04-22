#ifndef UE4SS_SDK_TemplateSequence_HPP
#define UE4SS_SDK_TemplateSequence_HPP

class UTemplateSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;
    TSoftClassPtr<AActor> BoundActorClass;
    TSoftObjectPtr<AActor> BoundPreviewActor;
    TMap<class FGuid, class FName> BoundActorComponents;

};

class UCameraAnimationSequence : public UTemplateSequence
{
};

class USequenceCameraShakeCameraStandIn : public UObject
{
    float FieldOfView;

};

class USequenceCameraShake : public UCameraShakeBase
{
    class UCameraAnimationSequence* Sequence;
    float PlayRate;
    float Scale;
    float BlendInTime;
    float BlendOutTime;
    float RandomSegmentDuration;
    bool bRandomSegment;
    class USequenceCameraShakeSequencePlayer* Player;
    class USequenceCameraShakeCameraStandIn* CameraStandIn;

};

class USequenceCameraShakeSequencePlayer : public UObject
{
    class UObject* BoundObjectOverride;
    class UMovieSceneSequence* Sequence;
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;

};

struct FTemplateSequenceBindingOverrideData
{
    TWeakObjectPtr<class UObject> Object;
    bool bOverridesDefault;

};

class ATemplateSequenceActor : public AActor
{
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    class UTemplateSequencePlayer* SequencePlayer;
    FSoftObjectPath TemplateSequence;
    FTemplateSequenceBindingOverrideData BindingOverride;

    void SetSequence(class UTemplateSequence* InSequence);
    void SetBinding(class AActor* Actor);
    class UTemplateSequence* LoadSequence();
    class UTemplateSequencePlayer* GetSequencePlayer();
    class UTemplateSequence* GetSequence();
};

class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{

    class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor);
};

class UTemplateSequenceSection : public UMovieSceneSubSection
{
};

class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
};

class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
};

#endif
