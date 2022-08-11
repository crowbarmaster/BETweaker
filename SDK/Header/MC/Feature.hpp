// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Feature : public IFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURE
public:
    class Feature& operator=(class Feature const &) = delete;
    Feature(class Feature const &) = delete;
    Feature() = delete;
#endif

public:
    /*0*/ virtual ~Feature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /*2*/ virtual bool isValidPlacement(std::string const &);
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FEATURE
#endif
    MCAPI Feature(class Actor *);

//protected:
    MCAPI bool _placeBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    MCAPI void _setManuallyPlaced(class Actor *);

protected:

};