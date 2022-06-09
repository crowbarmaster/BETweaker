// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MinecraftEventing.hpp"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CauldronBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAULDRONBLOCK
public:
    class CauldronBlock& operator=(class CauldronBlock const &) = delete;
    CauldronBlock(class CauldronBlock const &) = delete;
    CauldronBlock() = delete;
#endif


public:
    /*0*/ virtual ~CauldronBlock();
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
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
    /*60*/ virtual bool canContainLiquid() const;
    /*62*/ virtual void handlePrecipitation(class BlockSource &, class BlockPos const &, float, float) const;
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*93*/ virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*104*/ virtual void __unk_vfn_104();
    /*109*/ virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*128*/ virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /*132*/ virtual void __unk_vfn_132();
    /*148*/ virtual void __unk_vfn_148();
    /*152*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*165*/ virtual void __unk_vfn_165();
    /*166*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*189*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*193*/ virtual int getExtraRenderLayers() const;
    /*199*/ virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAULDRONBLOCK
public:
    MCVAPI bool hasComparatorSignal() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI CauldronBlock(std::string const &, int);
    MCAPI int getLiquidLevel(int) const;
    MCAPI void setLiquidLevel(class BlockSource &, class BlockPos const &, int, enum CauldronLiquidType) const;
    MCAPI static int const FILL_LEVEL_PER_DRIP;
    MCAPI static bool canReceiveStalactiteDrip(class BlockSource &, class BlockPos const &, enum MaterialType);
    MCAPI static void spawnPotionParticles(class Level &, class Vec3 const &, class Random &, int, int);

//private:
    MCAPI void _explodeCauldronContents(class BlockSource &, class BlockPos const &, unsigned short) const;
    MCAPI bool const _mayUpdateLiquidLevel(class BlockSource &, class BlockPos const &) const;
    MCAPI void _sendCauldronUsedEventToClient(class Player const &, short, enum MinecraftEventing::POIBlockInteractionType) const;
    MCAPI void _spawnCauldronEvent(class BlockSource &, class BlockPos const &, enum LevelEvent) const;
    MCAPI bool _useDyeableComponent(class ItemStack &, class Player &, class BlockPos const &, class CauldronBlockActor &, class BlockSource &, int, bool, bool, bool) const;
    MCAPI void _useInventory(class Player &, class ItemStack &, class ItemStack &, int) const;

private:
    MCAPI static int const BASE_WATER_PIXEL;
    MCAPI static class BaseGameVersion const CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION;
    MCAPI static int const PIXEL_PER_LEVEL;


};