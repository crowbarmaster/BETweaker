// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "HeavyBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScaffoldingBlock : public HeavyBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCAFFOLDINGBLOCK
public:
    class ScaffoldingBlock& operator=(class ScaffoldingBlock const &) = delete;
    ScaffoldingBlock(class ScaffoldingBlock const &) = delete;
    ScaffoldingBlock() = delete;
#endif

public:
    /*0*/ virtual ~ScaffoldingBlock();
    /*5*/ virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*19*/ virtual void __unk_vfn_19();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual bool isWaterBlocking() const;
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
    /*53*/ virtual bool canBeAscendedByJumping(class Actor const &, class BlockPos const &) const;
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual bool canContainLiquid() const;
    /*67*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*80*/ virtual void __unk_vfn_80();
    /*90*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*94*/ virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /*98*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*106*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*129*/ virtual bool canSlide(class BlockSource &, class BlockPos const &) const;
    /*132*/ virtual void __unk_vfn_132();
    /*148*/ virtual void __unk_vfn_148();
    /*152*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*157*/ virtual void __unk_vfn_157();
    /*168*/ virtual void __unk_vfn_168();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*171*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*174*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*177*/ virtual void __unk_vfn_177();
    /*178*/ virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /*188*/ virtual void __unk_vfn_188();
    /*192*/ virtual class mce::Color getDustColor(class Block const &) const;
    /*193*/ virtual std::string getDustParticleName(class Block const &) const;
    /*194*/ virtual void __unk_vfn_194();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCAFFOLDINGBLOCK
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    MCAPI ScaffoldingBlock(std::string const &, int);
    MCAPI static int const MAX_STABILITY;

//protected:
    MCAPI int calculateStability(class BlockSource const &, class BlockPos const &) const;

//private:
    MCAPI bool _updateBlockStability(class BlockSource &, class BlockPos const &) const;

protected:

private:

};