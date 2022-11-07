// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PathBlockSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATHBLOCKSOURCE
public:
    class PathBlockSource& operator=(class PathBlockSource const &) = delete;
    PathBlockSource(class PathBlockSource const &) = delete;
    PathBlockSource() = delete;
#endif

public:
    /*0*/ virtual ~PathBlockSource();
    /*1*/ virtual bool isInWater() const;
    /*2*/ virtual bool isInLava() const;
    /*3*/ virtual bool isWaterBlock(class BlockPos const &) const;
    /*4*/ virtual bool isLavaBlock(class BlockPos const &) const;
    /*5*/ virtual bool isSolidBlock(class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PATHBLOCKSOURCE
#endif

};