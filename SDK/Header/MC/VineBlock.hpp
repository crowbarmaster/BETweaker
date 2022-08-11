// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VineBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VINEBLOCK
public:
    class VineBlock& operator=(class VineBlock const &) = delete;
    VineBlock(class VineBlock const &) = delete;
    VineBlock() = delete;
#endif

public:
    /*0*/ virtual ~VineBlock();
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
    /*89*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*98*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*100*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*105*/ virtual void __unk_vfn_105();
    /*106*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*136*/ virtual int getColor(class Block const &) const;
    /*137*/ virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*143*/ virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /*148*/ virtual void __unk_vfn_148();
    /*157*/ virtual void __unk_vfn_157();
    /*168*/ virtual void __unk_vfn_168();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*173*/ virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*174*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*175*/ virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*177*/ virtual void __unk_vfn_177();
    /*187*/ virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*188*/ virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VINEBLOCK
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    MCAPI VineBlock(std::string const &, int);
    MCAPI void growDown(class BlockSource &, class BlockPos const &, int) const;
    MCAPI void growSideways(class BlockSource &, class BlockPos const &, int) const;
    MCAPI void growUp(class BlockSource &, class BlockPos const &, int) const;
    MCAPI static int const VINE_ALL;
    MCAPI static int const VINE_EAST;
    MCAPI static int const VINE_NORTH;
    MCAPI static int const VINE_SOUTH;
    MCAPI static int const VINE_WEST;
    MCAPI static class Block const & getBlockForFace(unsigned char);
    MCAPI static bool isAcceptableNeighbour(class Block const &);

//private:
    MCAPI bool _canGrowDown(class BlockSource &, class BlockPos const &) const;
    MCAPI bool _canSideSpread(class BlockSource &, class BlockPos const &) const;
    MCAPI int _nextVineDirections(class BlockSource &, class BlockPos const &) const;

private:

};