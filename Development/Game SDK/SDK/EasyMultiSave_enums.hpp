enum class ENextStepType {
    SaveLevel = 0,
    FinishSave = 1,
    ENextStepType_MAX = 2,
};

enum class ELoadTypeFlags {
    LF_Player = 0,
    LF_Level = 1,
    LF_MAX = 2,
};

enum class ESaveTypeFlags {
    SF_Player = 0,
    SF_Level = 1,
    SF_MAX = 2,
};

enum class EFileSaveMethod {
    FM_Legacy = 0,
    FM_Optimized = 1,
    FM_MAX = 2,
};

enum class ELoadMethod {
    LM_Default = 0,
    LM_Deferred = 1,
    LM_Thread = 2,
    LM_MAX = 3,
};

enum class ESaveGameMode {
    MODE_Player = 0,
    MODE_Level = 1,
    MODE_All = 2,
    MODE_MAX = 3,
};

enum class EActorType {
    AT_Runtime = 0,
    AT_Placed = 1,
    AT_LevelScript = 2,
    AT_Player = 3,
    AT_GameObject = 4,
    AT_Persistent = 5,
    AT_MAX = 6,
};

enum class EDataLoadType {
    DATA_Level = 0,
    DATA_Player = 1,
    DATA_Object = 2,
    DATA_MAX = 3,
};

enum class EUpdateActorResult {
    RES_Success = 0,
    RES_Skip = 1,
    RES_ShouldSpawnNewActor = 2,
    RES_MAX = 3,
};

