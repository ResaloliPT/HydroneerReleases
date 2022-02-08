#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MovieScene.EMovieSceneKeyInterpolation
	 */
	enum class MovieScene_EMovieSceneKeyInterpolation : uint8_t
	{
		EMovieSceneKeyInterpolation__Auto                            = 0,
		EMovieSceneKeyInterpolation__User                            = 1,
		EMovieSceneKeyInterpolation__Break                           = 2,
		EMovieSceneKeyInterpolation__Linear                          = 3,
		EMovieSceneKeyInterpolation__Constant                        = 4,
		EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5
	};

	/**
	 * Enum MovieScene.EMovieSceneBlendType
	 */
	enum class MovieScene_EMovieSceneBlendType : uint8_t
	{
		EMovieSceneBlendType__Absolute                 = 0,
		EMovieSceneBlendType__Additive                 = 1,
		EMovieSceneBlendType__Relative                 = 2,
		EMovieSceneBlendType__EMovieSceneBlendType_MAX = 3
	};

	/**
	 * Enum MovieScene.EMovieSceneBuiltInEasing
	 */
	enum class MovieScene_EMovieSceneBuiltInEasing : uint8_t
	{
		EMovieSceneBuiltInEasing__Linear                       = 0,
		EMovieSceneBuiltInEasing__SinIn                        = 1,
		EMovieSceneBuiltInEasing__SinOut                       = 2,
		EMovieSceneBuiltInEasing__SinInOut                     = 3,
		EMovieSceneBuiltInEasing__QuadIn                       = 4,
		EMovieSceneBuiltInEasing__QuadOut                      = 5,
		EMovieSceneBuiltInEasing__QuadInOut                    = 6,
		EMovieSceneBuiltInEasing__CubicIn                      = 7,
		EMovieSceneBuiltInEasing__CubicOut                     = 8,
		EMovieSceneBuiltInEasing__CubicInOut                   = 9,
		EMovieSceneBuiltInEasing__QuartIn                      = 10,
		EMovieSceneBuiltInEasing__QuartOut                     = 11,
		EMovieSceneBuiltInEasing__QuartInOut                   = 12,
		EMovieSceneBuiltInEasing__QuintIn                      = 13,
		EMovieSceneBuiltInEasing__QuintOut                     = 14,
		EMovieSceneBuiltInEasing__QuintInOut                   = 15,
		EMovieSceneBuiltInEasing__ExpoIn                       = 16,
		EMovieSceneBuiltInEasing__ExpoOut                      = 17,
		EMovieSceneBuiltInEasing__ExpoInOut                    = 18,
		EMovieSceneBuiltInEasing__CircIn                       = 19,
		EMovieSceneBuiltInEasing__CircOut                      = 20,
		EMovieSceneBuiltInEasing__CircInOut                    = 21,
		EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX = 22
	};

	/**
	 * Enum MovieScene.EEvaluationMethod
	 */
	enum class MovieScene_EEvaluationMethod : uint8_t
	{
		EEvaluationMethod__Static                = 0,
		EEvaluationMethod__Swept                 = 1,
		EEvaluationMethod__EEvaluationMethod_MAX = 2
	};

	/**
	 * Enum MovieScene.EUpdateClockSource
	 */
	enum class MovieScene_EUpdateClockSource : uint8_t
	{
		EUpdateClockSource__Tick                   = 0,
		EUpdateClockSource__Platform               = 1,
		EUpdateClockSource__Audio                  = 2,
		EUpdateClockSource__Timecode               = 3,
		EUpdateClockSource__EUpdateClockSource_MAX = 4
	};

	/**
	 * Enum MovieScene.EMovieSceneEvaluationType
	 */
	enum class MovieScene_EMovieSceneEvaluationType : uint8_t
	{
		EMovieSceneEvaluationType__FrameLocked                   = 0,
		EMovieSceneEvaluationType__WithSubFrames                 = 1,
		EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX = 2
	};

	/**
	 * Enum MovieScene.EMovieScenePlayerStatus
	 */
	enum class MovieScene_EMovieScenePlayerStatus : uint8_t
	{
		EMovieScenePlayerStatus__Stopped   = 0,
		EMovieScenePlayerStatus__Playing   = 1,
		EMovieScenePlayerStatus__Recording = 2,
		EMovieScenePlayerStatus__Scrubbing = 3,
		EMovieScenePlayerStatus__Jumping   = 4,
		EMovieScenePlayerStatus__Stepping  = 5,
		EMovieScenePlayerStatus__Paused    = 6,
		EMovieScenePlayerStatus__MAX       = 7
	};

	/**
	 * Enum MovieScene.EMovieSceneObjectBindingSpace
	 */
	enum class MovieScene_EMovieSceneObjectBindingSpace : uint8_t
	{
		EMovieSceneObjectBindingSpace__Local                             = 0,
		EMovieSceneObjectBindingSpace__Root                              = 1,
		EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 2
	};

	/**
	 * Enum MovieScene.EMovieSceneCompletionMode
	 */
	enum class MovieScene_EMovieSceneCompletionMode : uint8_t
	{
		EMovieSceneCompletionMode__KeepState                     = 0,
		EMovieSceneCompletionMode__RestoreState                  = 1,
		EMovieSceneCompletionMode__ProjectDefault                = 2,
		EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 3
	};

	/**
	 * Enum MovieScene.ESectionEvaluationFlags
	 */
	enum class MovieScene_ESectionEvaluationFlags : uint8_t
	{
		ESectionEvaluationFlags__None                        = 0,
		ESectionEvaluationFlags__PreRoll                     = 1,
		ESectionEvaluationFlags__PostRoll                    = 2,
		ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3
	};

	/**
	 * Enum MovieScene.EUpdatePositionMethod
	 */
	enum class MovieScene_EUpdatePositionMethod : uint8_t
	{
		EUpdatePositionMethod__Play                      = 0,
		EUpdatePositionMethod__Jump                      = 1,
		EUpdatePositionMethod__Scrub                     = 2,
		EUpdatePositionMethod__EUpdatePositionMethod_MAX = 3
	};

	/**
	 * Enum MovieScene.ESpawnOwnership
	 */
	enum class MovieScene_ESpawnOwnership : uint8_t
	{
		ESpawnOwnership__InnerSequence       = 0,
		ESpawnOwnership__MasterSequence      = 1,
		ESpawnOwnership__External            = 2,
		ESpawnOwnership__ESpawnOwnership_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieScene.MovieSceneTrackEvalOptions
	 * Size -> 0x0004
	 */
	struct FMovieSceneTrackEvalOptions
	{
	public:
		unsigned char                                              bCanEvaluateNearestSection : 1;                          // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvalNearestSection : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluateInPreroll : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluateInPostroll : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEvaluateNearestSection : 1;                             // 0x0000(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GLB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSectionEvalOptions
	 * Size -> 0x0002
	 */
	struct FMovieSceneSectionEvalOptions
	{
	public:
		bool                                                       bCanEditCompletionMode;                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MovieScene_EMovieSceneCompletionMode                       CompletionMode;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEasingSettings
	 * Size -> 0x0038
	 */
	struct FMovieSceneEasingSettings
	{
	public:
		int32_t                                                    AutoEaseInDuration;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AutoEaseOutDuration;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EaseIn[0x10];                                            // 0x0008(0x0010) UNKNOWN PROPERTY: InterfaceProperty MovieScene.MovieSceneEasingSettings.EaseIn
		bool                                                       bManualEaseIn;                                           // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UM47[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ManualEaseInDuration;                                    // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EaseOut[0x10];                                           // 0x0020(0x0010) UNKNOWN PROPERTY: InterfaceProperty MovieScene.MovieSceneEasingSettings.EaseOut
		bool                                                       bManualEaseOut;                                          // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O948[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ManualEaseOutDuration;                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFrameRange
	 * Size -> 0x0010
	 */
	struct FMovieSceneFrameRange
	{
	public:
		unsigned char                                              UnknownData_O2MX[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.OptionalMovieSceneBlendType
	 * Size -> 0x0002
	 */
	struct FOptionalMovieSceneBlendType
	{
	public:
		MovieScene_EMovieSceneBlendType                            BlendType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsValid;                                                // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackIdentifier
	 * Size -> 0x0004
	 */
	struct FMovieSceneTrackIdentifier
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSegment
	 * Size -> 0x0058
	 */
	struct FMovieSceneSegment
	{
	public:
		unsigned char                                              UnknownData_C609[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.SectionEvaluationDataTree
	 * Size -> 0x0060
	 */
	struct FSectionEvaluationDataTree
	{
	public:
		unsigned char                                              UnknownData_QYG1[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
	 * Size -> 0x0038
	 */
	struct FMovieSceneEvalTemplatePtr
	{
	public:
		unsigned char                                              UnknownData_I3RM[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
	 * Size -> 0x0038
	 */
	struct FMovieSceneTrackImplementationPtr
	{
	public:
		unsigned char                                              UnknownData_8PCM[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
	 * Size -> 0x000C
	 */
	struct FMovieSceneEvaluationGroupLUTIndex
	{
	public:
		int32_t                                                    LUTOffset;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumInitPtrs;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumEvalPtrs;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceID
	 * Size -> 0x0004
	 */
	struct FMovieSceneSequenceID
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
	 * Size -> 0x0008
	 */
	struct FMovieSceneEvaluationFieldTrackPtr
	{
	public:
		struct FMovieSceneSequenceID                               SequenceID;                                              // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneTrackIdentifier                          TrackIdentifier;                                         // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSegmentIdentifier
	 * Size -> 0x0004
	 */
	struct FMovieSceneSegmentIdentifier
	{
	public:
		int32_t                                                    IdentifierIndex;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
	 * Size -> 0x0004 (FullSize[0x000C] - InheritedSize[0x0008])
	 */
	struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
	{
	public:
		struct FMovieSceneSegmentIdentifier                        SegmentID;                                               // 0x0008(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationKey
	 * Size -> 0x000C
	 */
	struct FMovieSceneEvaluationKey
	{
	public:
		struct FMovieSceneSequenceID                               SequenceID;                                              // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneTrackIdentifier                          TrackIdentifier;                                         // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SectionIndex;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
	 * Size -> 0x0010
	 */
	struct FMovieSceneOrderedEvaluationKey
	{
	public:
		struct FMovieSceneEvaluationKey                            Key;                                                     // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   EvaluationIndex;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceTransform
	 * Size -> 0x000C
	 */
	struct FMovieSceneSequenceTransform
	{
	public:
		float                                                      TimeScale;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameTime                                          Offset;                                                  // 0x0004(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
	 * Size -> 0x0018
	 */
	struct FMovieSceneSequenceInstanceDataPtr
	{
	public:
		unsigned char                                              UnknownData_DM8S[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSubSequenceData
	 * Size -> 0x00A8
	 */
	struct FMovieSceneSubSequenceData
	{
	public:
		struct FSoftObjectPath                                     Sequence;                                                // 0x0000(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceTransform                        RootToSequenceTransform;                                 // 0x0018(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FFrameRate                                          TickResolution;                                          // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceID                               DeterministicSequenceID;                                 // 0x002C(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               PlayRange;                                               // 0x0030(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               PreRollRange;                                            // 0x0040(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               PostRollRange;                                           // 0x0050(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    HierarchicalBias;                                        // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFAZ[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequenceInstanceDataPtr                  InstanceData;                                            // 0x0068(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E92U[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               SubSectionSignature;                                     // 0x0088(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneSequenceTransform                        OuterToInnerTransform;                                   // 0x0098(0x000C) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8MDT[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
	 * Size -> 0x0004
	 */
	struct FMovieSceneEvaluationTemplateSerialNumber
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackFieldData
	 * Size -> 0x0060
	 */
	struct FMovieSceneTrackFieldData
	{
	public:
		unsigned char                                              UnknownData_MVN6[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSubSectionFieldData
	 * Size -> 0x0060
	 */
	struct FMovieSceneSubSectionFieldData
	{
	public:
		unsigned char                                              UnknownData_67U0[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
	 * Size -> 0x0020
	 */
	struct FMovieSceneEvaluationTrackSegments
	{
	public:
		TArray<int32_t>                                            SegmentIdentifierToIndex;                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneSegment>                          SortedSegments;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationTrack
	 * Size -> 0x00F8
	 */
	struct FMovieSceneEvaluationTrack
	{
	public:
		struct FGuid                                               ObjectBindingId;                                         // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   EvaluationPriority;                                      // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		MovieScene_EEvaluationMethod                               EvaluationMethod;                                        // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RK40[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEvaluationTrackSegments                  Segments;                                                // 0x0018(0x0020) NativeAccessSpecifierPrivate
		class UMovieSceneTrack*                                    SourceTrack;                                             // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSectionEvaluationDataTree                          EvaluationTree;                                          // 0x0040(0x0060) NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneEvalTemplatePtr>                  ChildTemplates;                                          // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FMovieSceneTrackImplementationPtr                   TrackTemplate;                                           // 0x00B0(0x0038) NativeAccessSpecifierPrivate
		class FName                                                EvaluationGroup;                                         // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEvaluateInPreroll : 1;                                  // 0x00F0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEvaluateInPostroll : 1;                                 // 0x00F0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZNZU[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
	 * Size -> 0x0018
	 */
	struct FMovieSceneSequenceHierarchyNode
	{
	public:
		struct FMovieSceneSequenceID                               ParentID;                                                // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8DE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovieSceneSequenceID>                       Children;                                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceHierarchy
	 * Size -> 0x00A0
	 */
	struct FMovieSceneSequenceHierarchy
	{
	public:
		TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;                                            // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                               // 0x0050(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationGroup
	 * Size -> 0x0020
	 */
	struct FMovieSceneEvaluationGroup
	{
	public:
		TArray<struct FMovieSceneEvaluationGroupLUTIndex>          LUTIndices;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneEvaluationFieldSegmentPtr>        SegmentPtrLUT;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneChannel
	 * Size -> 0x0008
	 */
	struct FMovieSceneChannel
	{
	public:
		unsigned char                                              UnknownData_LMNL[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneBoolChannel
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FMovieSceneBoolChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       DefaultValue;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7CHS[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WRLZ[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTangentData
	 * Size -> 0x0014
	 */
	struct FMovieSceneTangentData
	{
	public:
		float                                                      ArriveTangent;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangent;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveTangentWeightMode                         TangentWeightMode;                                       // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VLA6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArriveTangentWeight;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangentWeight;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFloatValue
	 * Size -> 0x001C
	 */
	struct FMovieSceneFloatValue
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveInterpMode                                InterpMode;                                              // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveTangentMode                               TangentMode;                                             // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2A9[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTangentData                              Tangent;                                                 // 0x0008(0x0014) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyHandleMap
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
	{
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFloatChannel
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FMovieSceneFloatChannel : public FMovieSceneChannel
	{
	public:
		Engine_ERichCurveExtrapolation                             PreInfinityExtrap;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Engine_ERichCurveExtrapolation                             PostInfinityExtrap;                                      // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RS92[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneFloatValue>                       Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      DefaultValue;                                            // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CU81[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneKeyHandleMap                             KeyHandles;                                              // 0x0038(0x0060) Transient, NativeAccessSpecifierPrivate
		struct FFrameRate                                          TickResolution;                                          // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
	 * Size -> 0x00A8
	 */
	struct FMovieSceneTemplateGenerationLedger
	{
	public:
		struct FMovieSceneTrackIdentifier                          LastTrackIdentifier;                                     // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGOJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGuid, struct FMovieSceneTrackIdentifier>      TrackSignatureToTrackIdentifier;                         // 0x0008(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<struct FGuid, struct FMovieSceneFrameRange>           SubSectionRanges;                                        // 0x0058(0x0050) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationMetaData
	 * Size -> 0x0070
	 */
	struct FMovieSceneEvaluationMetaData
	{
	public:
		TArray<struct FMovieSceneSequenceID>                       ActiveSequences;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneOrderedEvaluationKey>             ActiveEntities;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<struct FMovieSceneSequenceID, uint32_t>               SubTemplateSerialNumbers;                                // 0x0020(0x0050) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationField
	 * Size -> 0x0030
	 */
	struct FMovieSceneEvaluationField
	{
	public:
		TArray<struct FMovieSceneFrameRange>                       Ranges;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneEvaluationGroup>                  Groups;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneEvaluationMetaData>               MetaData;                                                // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSpawnable
	 * Size -> 0x0090
	 */
	struct FMovieSceneSpawnable
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		TArray<class FName>                                        tags;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FGuid                                               Guid;                                                    // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Name;                                                    // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject*                                             ObjectTemplate;                                          // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGuid>                                       ChildPossessables;                                       // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		MovieScene_ESpawnOwnership                                 Ownership;                                               // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_64P3[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LevelName;                                               // 0x007C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLNY[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneObjectBindingID
	 * Size -> 0x0018
	 */
	struct FMovieSceneObjectBindingID
	{
	public:
		int32_t                                                    SequenceID;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		MovieScene_EMovieSceneObjectBindingSpace                   Space;                                                   // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DIA9[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneBindingOverrideData
	 * Size -> 0x0024
	 */
	struct FMovieSceneBindingOverrideData
	{
	public:
		struct FMovieSceneObjectBindingID                          ObjectBindingId;                                         // 0x0000(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              Object;                                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridesDefault;                                       // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3V0X[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationTemplate
	 * Size -> 0x02F0
	 */
	struct FMovieSceneEvaluationTemplate
	{
	public:
		TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;                                                  // 0x0000(0x0050) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JL72[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEvaluationField                          EvaluationField;                                         // 0x00A0(0x0030) NativeAccessSpecifierPublic
		struct FMovieSceneSequenceHierarchy                        Hierarchy;                                               // 0x00D0(0x00A0) NativeAccessSpecifierPublic
		struct FGuid                                               SequenceSignature;                                       // 0x0170(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneEvaluationTemplateSerialNumber           TemplateSerialNumber;                                    // 0x0180(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VSBD[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTemplateGenerationLedger                 TemplateLedger;                                          // 0x0188(0x00A8) NativeAccessSpecifierPrivate
		struct FMovieSceneTrackFieldData                           TrackFieldData;                                          // 0x0230(0x0060) NativeAccessSpecifierPrivate
		struct FMovieSceneSubSectionFieldData                      SubSectionFieldData;                                     // 0x0290(0x0060) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceLoopCount
	 * Size -> 0x0004
	 */
	struct FMovieSceneSequenceLoopCount
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
	 * Size -> 0x0014
	 */
	struct FMovieSceneSequencePlaybackSettings
	{
	public:
		unsigned char                                              bAutoPlay : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5MD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequenceLoopCount                        LoopCount;                                               // 0x0004(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRandomStartTime : 1;                                    // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRestoreState : 1;                                       // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableMovementInput : 1;                               // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableLookAtInput : 1;                                 // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHidePlayer : 1;                                         // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHideHud : 1;                                            // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableCameraCuts : 1;                                  // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPauseAtEnd : 1;                                         // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7O8C[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceReplProperties
	 * Size -> 0x0010
	 */
	struct FMovieSceneSequenceReplProperties
	{
	public:
		struct FFrameTime                                          LastKnownPosition;                                       // 0x0000(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MovieScene_EMovieScenePlayerStatus                         LastKnownStatus;                                         // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VC2Z[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastKnownNumLoops;                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieScenePossessable
	 * Size -> 0x0048
	 */
	struct FMovieScenePossessable
	{
	public:
		TArray<class FName>                                        tags;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FGuid                                               Guid;                                                    // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Name;                                                    // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              PossessedObjectClass;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ParentGuid;                                              // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneBinding
	 * Size -> 0x0030
	 */
	struct FMovieSceneBinding
	{
	public:
		struct FGuid                                               ObjectGuid;                                              // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              BindingName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMovieSceneTrack*>                            Tracks;                                                  // 0x0020(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneMarkedFrame
	 * Size -> 0x0018
	 */
	struct FMovieSceneMarkedFrame
	{
	public:
		struct FFrameNumber                                        FrameNumber;                                             // 0x0000(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUBA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Label;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSectionParameters
	 * Size -> 0x0018
	 */
	struct FMovieSceneSectionParameters
	{
	public:
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x0000(0x0004) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeScale;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HierarchicalBias;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartOffset;                                             // 0x000C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrerollTime;                                             // 0x0010(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostrollTime;                                            // 0x0014(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplateBase
	 * Size -> 0x0010
	 */
	struct FMovieSceneEvalTemplateBase
	{
	public:
		unsigned char                                              UnknownData_88TO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplate
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
	{
	public:
		MovieScene_EMovieSceneCompletionMode                       CompletionMode;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JC8P[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UMovieSceneSection>                   SourceSectionPtr;                                        // 0x0014(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_75XF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
	 * Size -> 0x0300
	 */
	struct FMovieSceneRootEvaluationTemplateInstance
	{
	public:
		unsigned char                                              UnknownData_JDFF[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FMovieSceneSequenceID, class UObject*>         DirectorInstances;                                       // 0x0018(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UBL6[0x298];                                 // 0x0068(0x0298) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneIntegerChannel
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FMovieSceneIntegerChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t                                                    DefaultValue;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XGUQ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TN9H[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackImplementation
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
	{
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackLabels
	 * Size -> 0x0010
	 */
	struct FMovieSceneTrackLabels
	{
	public:
		TArray<class FString>                                      Strings;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneExpansionState
	 * Size -> 0x0001
	 */
	struct FMovieSceneExpansionState
	{
	public:
		bool                                                       bExpanded;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEditorData
	 * Size -> 0x00E0
	 */
	struct FMovieSceneEditorData
	{
	public:
		TMap<class FString, struct FMovieSceneExpansionState>      ExpansionStates;                                         // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		double                                                     ViewStart;                                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ViewEnd;                                                 // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     WorkStart;                                               // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     WorkEnd;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MarkedFrames[0x50];                                      // 0x0070(0x0050) UNKNOWN PROPERTY: SetProperty MovieScene.MovieSceneEditorData.MarkedFrames
		struct FFloatRange                                         WorkingRange;                                            // 0x00C0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         ViewRange;                                               // 0x00D0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTimecodeSource
	 * Size -> 0x0018
	 */
	struct FMovieSceneTimecodeSource
	{
	public:
		struct FTimecode                                           Timecode;                                                // 0x0000(0x0014) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        DeltaFrame;                                              // 0x0014(0x0004) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneByteChannel
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FMovieSceneByteChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              DefaultValue;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NERY[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UEnum*                                               Enum;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0RK2[0x60];                                  // 0x0038(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEmptyStruct
	 * Size -> 0x0001
	 */
	struct FMovieSceneEmptyStruct
	{
	public:
		unsigned char                                              UnknownData_371M[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationOperand
	 * Size -> 0x0014
	 */
	struct FMovieSceneEvaluationOperand
	{
	public:
		struct FGuid                                               ObjectBindingId;                                         // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceID                               SequenceID;                                              // 0x0010(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSubSectionData
	 * Size -> 0x001C
	 */
	struct FMovieSceneSubSectionData
	{
	public:
		TWeakObjectPtr<class UMovieSceneSubSection>                Section;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ObjectBindingId;                                         // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MovieScene_ESectionEvaluationFlags                         Flags;                                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8XD[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyStruct
	 * Size -> 0x0008
	 */
	struct FMovieSceneKeyStruct
	{
	public:
		unsigned char                                              UnknownData_KM4N[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyTimeStruct
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
	{
	public:
		struct FFrameNumber                                        Time;                                                    // 0x0008(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7ED[0x1C];                                  // 0x000C(0x001C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
	 * Size -> 0x0050
	 */
	struct FGeneratedMovieSceneKeyStruct
	{
	public:
		unsigned char                                              UnknownData_5S9V[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
	 * Size -> 0x0030
	 */
	struct FMovieSceneObjectPathChannelKeyValue
	{
	public:
		unsigned char                                              SoftPtr[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty MovieScene.MovieSceneObjectPathChannelKeyValue.SoftPtr
		class UObject*                                             HardPtr;                                                 // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneObjectPathChannel
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
	{
	public:
		class UClass*                                              PropertyClass;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneObjectPathChannelKeyValue>        Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FMovieSceneObjectPathChannelKeyValue                DefaultValue;                                            // 0x0030(0x0030) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RJMO[0x60];                                  // 0x0060(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieScenePropertySectionData
	 * Size -> 0x0028
	 */
	struct FMovieScenePropertySectionData
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PropertyPath;                                            // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NotifyFunctionName;                                      // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MovieScene.MovieScenePropertySectionTemplate
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0020(0x0028) Protected, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct MovieScene.SectionEvaluationData
	 * Size -> 0x000C
	 */
	struct FSectionEvaluationData
	{
	public:
		int32_t                                                    ImplIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        ForcedTime;                                              // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MovieScene_ESectionEvaluationFlags                         Flags;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NM6Q[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceInstanceData
	 * Size -> 0x0008
	 */
	struct FMovieSceneSequenceInstanceData
	{
	public:
		unsigned char                                              UnknownData_KO0D[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct MovieScene.TestMovieSceneEvalTemplate
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
	{
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
	 * Size -> 0x0004
	 */
	struct FMovieSceneTrackDisplayOptions
	{
	public:
		unsigned char                                              bShowVerticalFrames : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_THU4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
