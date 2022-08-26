// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChunkBlockPos {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBLOCKPOS
public:
char x;
char z;
short y; // ChunkLocalHeight
ChunkBlockPos()
    : x(0)
    , y(0)
    , z(0){};

ChunkBlockPos(char x, short y, char z)
    : x(x)
    , y(y)
    , z(z){};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBLOCKPOS
public:
    class ChunkBlockPos& operator=(class ChunkBlockPos const &) = delete;
    ChunkBlockPos(class ChunkBlockPos const &) = delete;
    ChunkBlockPos() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKBLOCKPOS
#endif
    MCAPI ChunkBlockPos(unsigned char, class ChunkLocalHeight, unsigned char);
    MCAPI ChunkBlockPos(class BlockPos const &, short);
    MCAPI class Pos toPos() const;
    MCAPI static class ChunkBlockPos from2D(unsigned char, unsigned char);
    MCAPI static class ChunkBlockPos fromLegacyIndex(unsigned short);

};