// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LightBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIGHTBLOCK
public:
    class LightBlock& operator=(class LightBlock const &) = delete;
    LightBlock(class LightBlock const &) = delete;
    LightBlock() = delete;
#endif


public:
    /*0*/ virtual ~LightBlock();
    /*5*/ virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*11*/ virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /*19*/ virtual void __unk_vfn_19();
    /*22*/ virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
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
    /*80*/ virtual bool isFilteredOut(enum BlockRenderLayer) const;
    /*88*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*89*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*91*/ virtual bool tryToPlace(class BlockSource &, class BlockPos const &, class Block const &, struct ActorBlockSyncMessage const *) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*114*/ virtual bool canBeBuiltOver(class BlockSource &, class BlockPos const &, class BlockItem const &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*135*/ virtual bool isAuxValueRelevantForPicking() const;
    /*148*/ virtual void __unk_vfn_148();
    /*153*/ virtual class BlockLegacy & init();
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*187*/ virtual void __unk_vfn_187();
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*195*/ virtual struct Brightness getLightEmission(class Block const &) const;
    /*199*/ virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIGHTBLOCK
public:
#endif
    MCAPI LightBlock(std::string const &, int, class Material const &);


};