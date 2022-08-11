// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ThinFenceBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THINFENCEBLOCK
public:
    class ThinFenceBlock& operator=(class ThinFenceBlock const &) = delete;
    ThinFenceBlock(class ThinFenceBlock const &) = delete;
    ThinFenceBlock() = delete;
#endif

public:
    /*0*/ virtual ~ThinFenceBlock();
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*11*/ virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /*14*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*19*/ virtual void __unk_vfn_19();
    /*25*/ virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
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
    /*61*/ virtual bool canContainLiquid() const;
    /*64*/ virtual bool canBeUsedInCommands(class BaseGameVersion const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*80*/ virtual void __unk_vfn_80();
    /*94*/ virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /*100*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*105*/ virtual void __unk_vfn_105();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*143*/ virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /*148*/ virtual void __unk_vfn_148();
    /*157*/ virtual void __unk_vfn_157();
    /*168*/ virtual void __unk_vfn_168();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*177*/ virtual void __unk_vfn_177();
    /*188*/ virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THINFENCEBLOCK
    MCVAPI bool isThinFenceBlock() const;
#endif
    MCAPI ThinFenceBlock(std::string const &, int, class Material const &, bool, bool, bool);

//private:

private:
    MCAPI static class BaseGameVersion const THIN_FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION;

};