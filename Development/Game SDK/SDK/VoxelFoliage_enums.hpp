enum class EVoxelFoliageScaling {
    Uniform = 0,
    Free = 1,
    LockXY = 2,
    EVoxelFoliageScaling_MAX = 3,
};

enum class EVoxelFoliageRotation {
    AlignToSurface = 0,
    AlignToWorldUp = 1,
    RandomAlign = 2,
    EVoxelFoliageRotation_MAX = 3,
};

enum class EVoxelFoliageCustomDataType {
    ColorGeneratorOutput = 0,
    FloatGeneratorOutput = 1,
    MaterialColor = 2,
    MaterialSingleIndex = 3,
    MaterialUV = 4,
    EVoxelFoliageCustomDataType_MAX = 5,
};

enum class EVoxelFoliageDensityType {
    Constant = 0,
    GeneratorOutput = 1,
    MaterialRGBA = 2,
    MaterialUVs = 3,
    MaterialFiveWayBlend = 4,
    SingleIndex = 5,
    MultiIndex = 6,
    EVoxelFoliageDensityType_MAX = 7,
};

enum class EVoxelFoliageRandomGenerator {
    Sobol = 0,
    Halton = 1,
    EVoxelFoliageRandomGenerator_MAX = 2,
};

enum class EVoxelFoliageSpawnType {
    Ray = 0,
    Height = 1,
    EVoxelFoliageSpawnType_MAX = 2,
};

