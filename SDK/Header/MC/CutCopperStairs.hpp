// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StairBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CutCopperStairs : public StairBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CUTCOPPERSTAIRS
public:
    class CutCopperStairs& operator=(class CutCopperStairs const &) = delete;
    CutCopperStairs(class CutCopperStairs const &) = delete;
    CutCopperStairs() = delete;
#endif


public:
    /*0*/ virtual ~CutCopperStairs();
    /*16*/ virtual void onLightningHit(class BlockSource &, class BlockPos const &) const;
    /*19*/ virtual void __unk_vfn_19();
    /*27*/ virtual class CopperBehavior const * tryGetCopperBehavior() const;
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*104*/ virtual void __unk_vfn_104();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*185*/ virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*199*/ virtual void __unk_vfn_199();
    /*203*/ virtual void __unk_vfn_203();
    /*204*/ virtual void __unk_vfn_204();
    /*205*/ virtual void __unk_vfn_205();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*208*/ MCAPI std::string const & getDescriptionId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CUTCOPPERSTAIRS
public:
#endif
    MCAPI CutCopperStairs(std::string const &, int, class BlockLegacy const &, enum CopperType, class WeakPtr<class BlockLegacy> &, class WeakPtr<class BlockLegacy> &, class WeakPtr<class BlockLegacy> &);
    MCAPI CutCopperStairs(std::string const &, int, class BlockLegacy const &, enum CopperType, class WeakPtr<class BlockLegacy> &);


};