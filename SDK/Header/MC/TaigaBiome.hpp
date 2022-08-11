// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Biome.hpp"
#include "OverworldBiome.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TaigaBiome : public OverworldBiome {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAIGABIOME
public:
    class TaigaBiome& operator=(class TaigaBiome const &) = delete;
    TaigaBiome(class TaigaBiome const &) = delete;
    TaigaBiome() = delete;
#endif

public:
    /*3*/ virtual ~TaigaBiome();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*22*/ virtual std::unique_ptr<class Biome> createMutatedCopy(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TAIGABIOME
#endif
    MCAPI TaigaBiome(int, int);

};