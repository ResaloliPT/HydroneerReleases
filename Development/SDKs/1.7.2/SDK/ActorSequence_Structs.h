﻿#pragma once

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
	 * Enum ActorSequence.EActorSequenceObjectReferenceType
	 */
	enum class ActorSequence_EActorSequenceObjectReferenceType : uint8_t
	{
		EActorSequenceObjectReferenceType__ContextActor                          = 0,
		EActorSequenceObjectReferenceType__ExternalActor                         = 1,
		EActorSequenceObjectReferenceType__Component                             = 2,
		EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ActorSequence.ActorSequenceObjectReference
	 * Size -> 0x0028
	 */
	struct FActorSequenceObjectReference
	{
	public:
		ActorSequence_EActorSequenceObjectReferenceType            Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_70MG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ActorId;                                                 // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UP9A[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PathToComponent;                                         // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct ActorSequence.ActorSequenceObjectReferences
	 * Size -> 0x0010
	 */
	struct FActorSequenceObjectReferences
	{
	public:
		TArray<struct FActorSequenceObjectReference>               Array;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
	 * Size -> 0x0020
	 */
	struct FActorSequenceObjectReferenceMap
	{
	public:
		TArray<struct FGuid>                                       BindingIds;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FActorSequenceObjectReferences>              References;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif