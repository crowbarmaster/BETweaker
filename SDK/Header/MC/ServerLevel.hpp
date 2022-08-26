// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerLevel {

#define AFTER_EXTRA
// Add Member There
#define ENABLE_VIRTUAL_FAKESYMBOL_SERVERLEVEL
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLEVEL
public:
    class ServerLevel& operator=(class ServerLevel const &) = delete;
    ServerLevel(class ServerLevel const &) = delete;
    ServerLevel() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLEVEL
    MCVAPI void consolidateLevelChunkMetaData(class LevelChunk &);
    MCVAPI class Dimension * createDimension(class AutomaticID<class Dimension, int>);
    MCVAPI void decrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    MCVAPI class ResourcePackManager * getClientResourcePackManager() const;
    MCVAPI class std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;
    MCVAPI class LevelEventCoordinator & getLevelEventCoordinator();
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer * getPositionTrackerDBServer() const;
    MCVAPI class ResourcePackManager * getServerResourcePackManager() const;
    MCVAPI class Random & getThreadRandom() const;
    MCVAPI class TradeTables * getTradeTables();
    MCVAPI void incrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    MCVAPI bool initialize(std::string const &, class LevelSettings const &, class LevelData *, class Experiments const &, std::string const *);
    MCVAPI void initializeLevelChunkMetaData(class LevelChunk &);
    MCVAPI void loadFunctionManager();
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    MCVAPI void registerEventCoordinators();
    MCVAPI void runCommand(class Command &, class CommandOrigin &, enum CommandOriginSystem);
    MCVAPI void runCommand(class HashedString const &, class CommandOrigin &, enum CommandOriginSystem, enum CurrentCmdVersion);
    MCVAPI void saveAdditionalData();
    MCVAPI void saveDynamicProperties();
    MCVAPI void setCommandsEnabled(bool);
    MCVAPI void setServerTickOffset(__int64);
    MCVAPI void setWorldTemplateOptionsUnlocked();
    MCVAPI void tick();
    MCVAPI void updateSleepingPlayerList();
#endif
    MCAPI ServerLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const &, std::unique_ptr<class LevelStorage>, std::unique_ptr<class LevelLooseFileStorage>, class IMinecraftEventing &, class ResourcePackManager &, class ResourcePackManager &, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class MinecraftCommands &, class Scheduler &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> const &, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, class std::weak_ptr<class BlockTypeRegistry>);
    MCAPI class MinecraftCommands & getCommands();
    MCAPI class DynamicPropertiesDefinition & getDynamicPropertiesDefinition();
    MCAPI class FunctionManager & getFunctionManager();
    MCAPI class MobEvents & getMobEvents();
    MCAPI class MobEvents const & getMobEvents() const;
    MCAPI class DynamicProperties & getOrAddDynamicProperties();
    MCAPI void setShouldSendSleepMessage(bool);
    MCAPI bool shouldSendSleepMessage() const;
    MCAPI class Bedrock::NonOwnerPointer<class VolumeEntityManagerServer> tryGetVolumeEntityManager() const;

};