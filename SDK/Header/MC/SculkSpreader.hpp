// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SculkSpreader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSPREADER
public:
    class SculkSpreader& operator=(class SculkSpreader const &) = delete;
    SculkSpreader(class SculkSpreader const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKSPREADER
#endif
    MCAPI SculkSpreader(bool, int, int, int, int);
    MCAPI SculkSpreader();
    MCAPI void addCursors(class BlockPos const &, int);
    MCAPI void clearCursors();
    MCAPI int getAdditionalDecayRate() const;
    MCAPI int getChargeDecayRate() const;
    MCAPI class BlockPos getCursorPosition(int) const;
    MCAPI int getGrowthSpawnCost() const;
    MCAPI int getMaxCharge() const;
    MCAPI int getNoGrowthRadius() const;
    MCAPI int getNumberOfCursors() const;
    MCAPI class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const & getSculkReplaceableBlocks();
    MCAPI int getTotalCharge() const;
    MCAPI bool isWorldGen() const;
    MCAPI void load(class CompoundTag const &);
    MCAPI void save(class CompoundTag &) const;
    MCAPI void updateCursors(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, bool);
    MCAPI ~SculkSpreader();

};