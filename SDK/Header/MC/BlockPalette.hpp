// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockPalette {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPALETTE
public:
    class BlockPalette& operator=(class BlockPalette const &) = delete;
    BlockPalette(class BlockPalette const &) = delete;
    BlockPalette() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKPALETTE
#endif
    MCAPI BlockPalette(struct BlockPalette::ConstructorToken);
    MCAPI BlockPalette(class Level &);
    MCAPI void cacheBlockComponentData();
    MCAPI class Block const & convertLegacyBlock(struct BlockID, unsigned short) const;
    MCAPI bool convertLegacyBlocks(class buffer_span_mut<class Block const *>, class buffer_span<struct BlockID>, class buffer_span<struct NibblePair>, unsigned __int64) const;
    MCAPI class Block const & getBlock(unsigned int const &) const;
    MCAPI class Block const & getBlock(class CompoundTag const &) const;
    MCAPI class Block const & getBlockFromLegacyData(struct NewBlockID, unsigned int) const;
    MCAPI class BlockLegacy const * getBlockLegacy(std::string const &) const;
    MCAPI void initFromBlockDefinitions();
    MCAPI class Block const & switchBlock(class Block const &, class BlockLegacy const &) const;
    MCAPI ~BlockPalette();

//private:
    MCAPI bool shouldWarnFor(struct NewBlockID, unsigned short) const;

private:

};