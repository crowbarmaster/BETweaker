// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Biome.hpp"
#include "OverworldBiome.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RiverBiome : public OverworldBiome {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIVERBIOME
public:
    class RiverBiome& operator=(class RiverBiome const &) = delete;
    RiverBiome(class RiverBiome const &) = delete;
    RiverBiome() = delete;
#endif

public:
    /*3*/ virtual ~RiverBiome();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*8*/ virtual float getCreatureProbability();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RIVERBIOME
#endif

};