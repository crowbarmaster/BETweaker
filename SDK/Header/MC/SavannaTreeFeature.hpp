// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SavannaTreeFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVANNATREEFEATURE
public:
    class SavannaTreeFeature& operator=(class SavannaTreeFeature const &) = delete;
    SavannaTreeFeature(class SavannaTreeFeature const &) = delete;
    SavannaTreeFeature() = delete;
#endif

public:
    /*0*/ virtual ~SavannaTreeFeature();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAVANNATREEFEATURE
#endif

//private:
    MCAPI void _placeLeafAt(class BlockSource &, class BlockPos const &) const;

private:

};