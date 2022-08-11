// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SpikeFeature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TheEndBiomeDecorator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THEENDBIOMEDECORATOR
public:
    class TheEndBiomeDecorator& operator=(class TheEndBiomeDecorator const &) = delete;
    TheEndBiomeDecorator(class TheEndBiomeDecorator const &) = delete;
    TheEndBiomeDecorator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THEENDBIOMEDECORATOR
#endif
    MCAPI void decorate(class BlockSource *, class Random &, class Biome *, class BlockPos const &, bool, float);
    MCAPI static std::vector<class SpikeFeature::EndSpike> getSpikesForLevel(class Level &);

//private:
    MCAPI static std::vector<class SpikeFeature::EndSpike> _loadSpikes(class Random &);

private:

};