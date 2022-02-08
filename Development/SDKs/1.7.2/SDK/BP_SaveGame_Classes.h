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
	 * BlueprintGeneratedClass BP_SaveGame.BP_SaveGame_C
	 * Size -> 0x0411 (FullSize[0x0439] - InheritedSize[0x0028])
	 */
	class UBP_SaveGame_C : public FEngine_USaveGame
	{
	public:
		unsigned char                                              UnknownData_I2F0[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PlayerTransformSave;                                     // 0x0030(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		TArray<struct FS_SavedBuildItem>                           Saved_Build_items;                                       // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedResource>                            Saved_Resources;                                         // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedTool>                                Saved_Tools;                                             // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TMap<class ABP_ForSaleSign_C*, bool>                       SavedParcels;                                            // 0x0090(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		struct FVoxelCompressedWorldSave                           Voxel1;                                                  // 0x00E0(0x0020) Edit, BlueprintVisible
		struct FVoxelCompressedWorldSave                           Voxel2;                                                  // 0x0100(0x0020) Edit, BlueprintVisible
		struct FVoxelCompressedWorldSave                           Voxel3;                                                  // 0x0120(0x0020) Edit, BlueprintVisible
		struct FVoxelCompressedWorldSave                           Voxel4;                                                  // 0x0140(0x0020) Edit, BlueprintVisible
		TArray<struct FS_SavedLantern>                             Saved_Lanterns;                                          // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedRelic>                               Saved_Relics;                                            // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       CaveOpened_;                                             // 0x0180(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RZ4A[0x3];                                   // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Hour;                                                    // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class UClass*, bool>                                  RelicSpawners;                                           // 0x0188(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedDirt>                                Saved_Dirts;                                             // 0x01D8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedCoins>                               SavedCoins;                                              // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedVehicle>                             SavedVehicles;                                           // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedConveyer>                            SavedConveyers;                                          // 0x0208(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedBuildStorage>                        SavedBuildStorage;                                       // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedWaterDurabilityItem>                 SavedWaterDurabilityItem;                                // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedToolUses>                            SavedToolUses;                                           // 0x0238(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedBuildLighting>                       SavedBuildLighting;                                      // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedPlant>                               SavedPlant;                                              // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TMap<class ABP_SeedSpawner_C*, bool>                       SavedSeedSpawners;                                       // 0x0268(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		TArray<struct FS_SavedConveyerSplitter>                    SavedSplitters;                                          // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedBuildWall>                           SavedBuildWalls;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedCrucible>                            SavedCrucibles;                                          // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedSmelterItem>                         SavedSmelters;                                           // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedWaterDurabilitySwitch>               SavedWaterDuraSwitch;                                    // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedBuildValve>                          SavedWaterValve;                                         // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedCart>                                SavedCarts;                                              // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TMap<E_Stocks_E_Stocks, int32_t>                           SavedStocks;                                             // 0x0328(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedLogic>                               SavedLogic;                                              // 0x0378(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<struct FS_SavedLogicDurability>                     SavedLogicDurability;                                    // 0x0388(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<struct FS_SavedLogicDual>                           SavedLogicDual;                                          // 0x0398(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		TArray<struct FS_SavedPowerBattery>                        SavedPowerBattery;                                       // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedLogicSmelter>                        SavedLogicSmelter;                                       // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedPower>                               SavedPower;                                              // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedLogicRepair>                         SavedLogicRepair;                                        // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedLogicSymbols>                        SavedLogicSymbols;                                       // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedLogicValve>                          SavedLogicValve;                                         // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedPowerValve>                          SavedPowerValves;                                        // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedFish>                                SavedFish;                                               // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FS_SavedRod>                                 SavedRod;                                                // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor
		E_FishType_E_FishType                                      SavedFishProgress;                                       // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
