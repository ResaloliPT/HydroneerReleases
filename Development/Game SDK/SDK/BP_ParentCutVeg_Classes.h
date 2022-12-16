#pragma once

/**
 * Name: Hydroneer
 * Version: 2.1.1
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
	 * BlueprintGeneratedClass BP_ParentCutVeg.BP_ParentCutVeg_C
	 * Size -> 0x0030 (FullSize[0x0418] - InheritedSize[0x03E8])
	 */
	class ABP_ParentCutVeg_C : public ABP_ParentResource_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UStaticMesh*                                       SoupTopperMesh;                                          // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UClass*                                            SeedBag;                                                 // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		TArray<class UStaticMesh*>                               MeshLevels;                                              // 0x0400(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		class UNiagaraSystem*                                    CutNiagaraSystem;                                        // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void SetResourceMesh();

		void UserConstructionScript();

		void InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
);

		void WaterParticleHit();

		void HasNoWater();

		void HasWater();

		void HeatUpdated(
float Heat
);

		void FullHeat();

		void InFire(
bool SlowBurn
);

		void OutOfFire();

		void ReceiveHit(
class UPrimitiveComponent* MyComp
, 
class AActor* Other
, 
class UPrimitiveComponent* OtherComp
, 
bool bSelfMoved
, 
const struct FVector& HitLocation
, 
const struct FVector& HitNormal
, 
const struct FVector& NormalImpulse
, 
const struct FHitResult& Hit
);

		void ActorLoaded();

		void ExecuteUbergraph_BP_ParentCutVeg(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
