// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDBLOCKTARGET
public:
    class WorldBlockTarget& operator=(class WorldBlockTarget const &) = delete;
    WorldBlockTarget(class WorldBlockTarget const &) = delete;
    WorldBlockTarget() = delete;
#endif


public:
    /*0*/ virtual ~WorldBlockTarget();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual class LevelChunk * getChunk(class ChunkPos const &);
    /*3*/ virtual class Block const * tryGetLiquidBlock(class BlockPos const &) const;
    /*4*/ virtual class Block const & getBlock(class BlockPos const &) const;
    /*5*/ virtual class Block const & getBlockNoBoundsCheck(class BlockPos const &) const;
    /*6*/ virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /*7*/ virtual class gsl::span<class BlockDataFetchResult<class Block> const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    /*8*/ virtual bool hasBiomeTag(unsigned __int64, class BlockPos const &) const;
    /*9*/ virtual bool setBlock(class BlockPos const &, class Block const &, int);
    /*10*/ virtual bool setBlockSimple(class BlockPos const &, class Block const &);
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual bool placeStructure(class BlockPos const &, class StructureTemplate &, class StructureSettings &);
    /*13*/ virtual bool mayPlace(class BlockPos const &, class Block const &) const;
    /*14*/ virtual bool canSurvive(class BlockPos const &, class Block const &) const;
    /*15*/ virtual short getMaxHeight() const;
    /*16*/ virtual short getMinHeight() const;
    /*17*/ virtual bool shimPlaceForOldFeatures(class Feature const &, class BlockPos const &, class Random &) const;
    /*18*/ virtual short getHeightmap(int, int);
    /*19*/ virtual bool isLegacyLevel();
    /*20*/ virtual class Biome const * getBiome(class BlockPos const &) const;
    /*21*/ virtual bool isInBounds(class Pos const &) const;
    /*22*/ virtual short getLocalWaterLevel(class BlockPos const &) const;
    /*23*/ virtual class LevelData const & getLevelData() const;
    /*24*/ virtual struct WorldGenContext const & getContext();
    /*25*/ virtual void disableBlockSimple();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDBLOCKTARGET
public:
    MCVAPI bool apply() const;
    MCVAPI bool canGetChunk() const;
#endif
    MCAPI WorldBlockTarget(class BlockSource &, struct WorldGenContext const &);


};