// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CropBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PotatoBlock : public CropBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POTATOBLOCK
public:
    class PotatoBlock& operator=(class PotatoBlock const &) = delete;
    PotatoBlock(class PotatoBlock const &) = delete;
    PotatoBlock() = delete;
#endif

public:
    /*0*/ virtual ~PotatoBlock();
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*19*/ virtual void __unk_vfn_19();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void __unk_vfn_60();
    /*73*/ virtual void __unk_vfn_73();
    /*80*/ virtual void __unk_vfn_80();
    /*103*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /*105*/ virtual void __unk_vfn_105();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*157*/ virtual void __unk_vfn_157();
    /*168*/ virtual void __unk_vfn_168();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*177*/ virtual void __unk_vfn_177();
    /*188*/ virtual void __unk_vfn_188();
    /*193*/ virtual class ItemInstance const getBaseSeed() const;
    /*194*/ virtual class ItemInstance const getBaseCrop() const;
    /*196*/ virtual int getCropNum(class Randomize &, int, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POTATOBLOCK
#endif
    MCAPI PotatoBlock(std::string const &, int);

};