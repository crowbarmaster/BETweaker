// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SculkShriekerBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSHRIEKERBLOCK
public:
    class SculkShriekerBlock& operator=(class SculkShriekerBlock const &) = delete;
    SculkShriekerBlock(class SculkShriekerBlock const &) = delete;
    SculkShriekerBlock() = delete;
#endif


public:
    /*0*/ virtual ~SculkShriekerBlock();
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
    /*76*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*95*/ virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*99*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*101*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*103*/ virtual void trySpawnResourcesOnExplosion(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*113*/ virtual int getExperienceDrop(class Random &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*153*/ virtual class BlockLegacy & init();
    /*165*/ virtual void __unk_vfn_165();
    /*166*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*175*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*178*/ virtual void onStepOn(class Actor &, class BlockPos const &) const;
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*199*/ virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKSHRIEKERBLOCK
public:
    MCVAPI bool canBeSilkTouched() const;
#endif
    MCAPI SculkShriekerBlock(std::string const &, int, class Material const &);
    MCAPI bool provokePotentialShriek(class BlockSource &, class BlockPos, class Actor *) const;

//private:
    MCAPI static void _shriek(class BlockSource &, class BlockPos, class Actor *);
    MCAPI static void _tryProcessQueuedThreatResponse(class BlockSource &, class BlockPos const &);

private:


};