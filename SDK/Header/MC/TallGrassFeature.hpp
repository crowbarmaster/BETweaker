// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TallGrassFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TALLGRASSFEATURE
public:
    class TallGrassFeature& operator=(class TallGrassFeature const &) = delete;
    TallGrassFeature(class TallGrassFeature const &) = delete;
    TallGrassFeature() = delete;
#endif

public:
    /*0*/ virtual ~TallGrassFeature();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TALLGRASSFEATURE
#endif
    MCAPI bool place(class BlockSource &, class BlockPos const &, class Random &, int, int) const;

};