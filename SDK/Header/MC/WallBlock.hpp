// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WallBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALLBLOCK
public:
    class WallBlock& operator=(class WallBlock const &) = delete;
    WallBlock(class WallBlock const &) = delete;
    WallBlock() = delete;
#endif


public:
    /*0*/ virtual ~WallBlock();
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*14*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*19*/ virtual void __unk_vfn_19();
    /*22*/ virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /*25*/ virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
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
    /*60*/ virtual bool canContainLiquid() const;
    /*72*/ virtual void __unk_vfn_72();
    /*74*/ virtual void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /*75*/ virtual void onStructureNeighborBlockPlace(class BlockSource &, class BlockPos const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*93*/ virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*105*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*134*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*135*/ virtual bool isAuxValueRelevantForPicking() const;
    /*143*/ virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*198*/ virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*199*/ virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WALLBLOCK
public:
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool isWallBlock() const;
#endif
    MCAPI WallBlock(std::string const &, int, class BlockLegacy const &);
    MCAPI WallBlock(std::string const &, int, class Material const &);
    MCAPI void tryFixWallStates(class BlockSource &, class BlockPos const &, int) const;
    MCAPI static float const POST_HEIGHT;
    MCAPI static float const POST_WIDTH;
    MCAPI static float const WALL_HEIGHT;
    MCAPI static class std::array<std::string, 14> const WALL_NAMES;
    MCAPI static float const WALL_WIDTH;

//private:
    MCAPI enum WallConnectionType _desiredConnectionState(class BlockSource &, class BlockPos const &, unsigned char) const;
    MCAPI bool _isCovered(class BlockSource &, class BlockPos const &, class AABB const &) const;
    MCAPI bool _shouldBePost(class BlockSource &, class BlockPos const &, class Block const &) const;
    MCAPI bool _tryAddToTickingQueue(class BlockSource &, class BlockPos const &) const;

private:
    MCAPI static class BaseGameVersion const WALL_DOESNT_BREAK_FALLING_BLOCK_VERSION;


};