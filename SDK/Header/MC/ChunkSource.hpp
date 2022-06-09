// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChunkSource {

#define AFTER_EXTRA
// Add Member There
public:
enum LoadMode;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKSOURCE
public:
    class ChunkSource& operator=(class ChunkSource const &) = delete;
    ChunkSource(class ChunkSource const &) = delete;
    ChunkSource() = delete;
#endif


public:
    /*0*/ virtual ~ChunkSource();
    /*1*/ virtual void shutdown();
    /*2*/ virtual bool isShutdownDone();
    /*3*/ virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /*4*/ virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random &);
    /*5*/ virtual bool isChunkKnown(class ChunkPos const &);
    /*6*/ virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum ChunkSource::LoadMode, bool);
    /*7*/ virtual class std::shared_ptr<class LevelChunk> getOrLoadChunk(class ChunkPos const &, enum ChunkSource::LoadMode, bool);
    /*8*/ virtual bool postProcess(class ChunkViewSource &);
    /*9*/ virtual void checkAndReplaceChunk(class ChunkViewSource &, class LevelChunk &);
    /*10*/ virtual void loadChunk(class LevelChunk &, bool);
    /*11*/ virtual void postProcessMobsAt(class BlockSource &, int, int, class Random &);
    /*12*/ virtual bool saveLiveChunk(class LevelChunk &);
    /*13*/ virtual void writeEntityChunkTransfer(class LevelChunk &);
    /*14*/ virtual void writeEntityChunkTransfersToUnloadedChunk(class ChunkKey const &, std::vector<struct ActorUnloadedChunkTransferEntry> const &);
    /*15*/ virtual void hintDiscardBatchBegin();
    /*16*/ virtual void hintDiscardBatchEnd();
    /*17*/ virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
    /*18*/ virtual void compact();
    /*19*/ virtual void flushPendingDiscardedChunkWrites();
    /*20*/ virtual void flushThreadBatch();
    /*21*/ virtual bool isWithinWorldLimit(class ChunkPos const &) const;
    /*22*/ virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const * getChunkMap();
    /*23*/ virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const & getStorage() const;
    /*24*/ virtual void clearDeletedEntities();
    /*25*/ virtual bool canCreateViews() const;
    /*26*/ virtual std::unique_ptr<class BlendingDataProvider> tryGetBlendingDataProvider();
    /*27*/ virtual class std::shared_ptr<class LevelChunkMetaDataDictionary> loadLevelChunkMetaDataDictionary();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKSOURCE
public:
#endif
    MCAPI ChunkSource(class Dimension *, int);
    MCAPI ChunkSource(std::unique_ptr<class ChunkSource>);
    MCAPI void checkAndLaunchChunkGenerationTasks(bool);
    MCAPI class GridArea<class std::shared_ptr<class LevelChunk>> createEmptyView(enum ChunkSource::LoadMode, bool, class std::function<void (class buffer_span_mut<class std::shared_ptr<class LevelChunk>>, class buffer_span<unsigned int>)>);
    MCAPI class std::shared_ptr<class LevelChunk> getAvailableChunk(class ChunkPos const &);
    MCAPI class std::shared_ptr<class LevelChunk> getAvailableChunkAt(class BlockPos const &);
    MCAPI int getChunkSide() const;
    MCAPI class Dimension & getDimension() const;
    MCAPI class std::shared_ptr<class LevelChunk> getGeneratedChunk(class ChunkPos const &);
    MCAPI class Level & getLevel() const;
    MCAPI void setShuttingDown(bool);

//protected:
    MCAPI bool _checkAndDispatchTaskForLevelChunk(struct std::pair<class ChunkPos, enum ChunkState> const &, bool);
    MCAPI void _checkForReplacementDataTask(class LevelChunk &, class ChunkViewSource &);
    MCAPI void _checkForUnblockingChunks(class LevelChunk const &);
    MCAPI void _checkLevelChunkForNextStage(class LevelChunk const &, class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk>> &, enum ChunkState);
    MCAPI void _checkLevelChunkForPostProcessing(class LevelChunk const &, class LevelChunkGridAreaElement<class std::weak_ptr<class LevelChunk>> &);
    MCAPI bool _chunkAtStage(class std::weak_ptr<class LevelChunk>, enum ChunkState);
    MCAPI void _freeChunkGenerationGridMap(class ChunkPos const &);
    MCAPI void _launchGenerationTask(class std::shared_ptr<class LevelChunk> const &, bool);
    MCAPI void _launchLightingTask(class std::shared_ptr<class LevelChunk> const &, class std::shared_ptr<class ChunkViewSource> const &, bool);
    MCAPI void _launchPostProcessingTask(class std::shared_ptr<class LevelChunk> const &, class std::shared_ptr<class ChunkViewSource> const &, bool);
    MCAPI void _launchReplacementDataTask(class std::shared_ptr<class LevelChunk> const &, class std::shared_ptr<class ChunkViewSource> const &, bool);
    MCAPI void _lightingTask(class std::shared_ptr<class LevelChunk> const &, class ChunkViewSource &);
    MCAPI void _loadChunkTask(class LevelChunk &);
    MCAPI void _postProcessingTask(class LevelChunk &, class ChunkViewSource &);
    MCAPI void _spawnChunkGenerationTasks(int, bool);

protected:


};