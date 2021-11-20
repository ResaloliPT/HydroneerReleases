// Name: Hydroneer, Version: 1.7.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FMovieSceneMediaSectionParams::AfterRead()
{
	READ_PTR_FULL(MediaSoundComponent, UMediaSoundComponent);
	READ_PTR_FULL(MediaSource, UMediaSource);
	READ_PTR_FULL(MediaTexture, UMediaTexture);
	READ_PTR_FULL(MediaPlayer, UMediaPlayer);
}

void FMovieSceneMediaSectionParams::BeforeDelete()
{
	DELE_PTR_FULL(MediaSoundComponent);
	DELE_PTR_FULL(MediaSource);
	DELE_PTR_FULL(MediaTexture);
	DELE_PTR_FULL(MediaPlayer);
}

void FMovieSceneMediaSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneMediaSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void UMovieSceneMediaSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(MediaSource, UMediaSource);
	READ_PTR_FULL(MediaTexture, UMediaTexture);
	READ_PTR_FULL(MediaSoundComponent, UMediaSoundComponent);
	READ_PTR_FULL(ExternalMediaPlayer, UMediaPlayer);
}

void UMovieSceneMediaSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(MediaSource);
	DELE_PTR_FULL(MediaTexture);
	DELE_PTR_FULL(MediaSoundComponent);
	DELE_PTR_FULL(ExternalMediaPlayer);
}

void UMovieSceneMediaTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneMediaTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
