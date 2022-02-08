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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_SceneRoot.BP_SceneRoot_C
	 * Size -> 0x0160 (FullSize[0x0490] - InheritedSize[0x0330])
	 */
	class ABP_SceneRoot_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<class FString, struct FArrayOfSwitch>                 SwitchMap;                                               // 0x0340(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       bDebug;                                                  // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7PC5[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UMaterialInterface*>             MaterialMap;                                             // 0x0398(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TMap<class FName, struct FArrayOfActor>                    Name2Node;                                               // 0x03E8(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TMap<class ABP_SceneNode_C*, class FName>                  Node2Name;                                               // 0x0438(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UDataTable*                                          ActorsTable;                                             // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitializeMaps();
		void GetAllActiveActors(TArray<class AActor*>* Actors);
		void RegisterSceneNode(class ABP_SceneNode_C* Node, const class FName& NameID);
		void SetSwitch(const class FString& Name, int32_t Value);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_SceneRoot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
