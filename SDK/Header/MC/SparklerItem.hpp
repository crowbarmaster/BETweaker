// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ChemistryStickItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SparklerItem : public ChemistryStickItem {

#define AFTER_EXTRA
// Add Member There
public:
struct ColorInfo {
    ColorInfo() = delete;
    ColorInfo(ColorInfo const&) = delete;
    ColorInfo(ColorInfo const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARKLERITEM
public:
    class SparklerItem& operator=(class SparklerItem const &) = delete;
    SparklerItem(class SparklerItem const &) = delete;
    SparklerItem() = delete;
#endif

public:
    /*0*/ virtual ~SparklerItem();
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*50*/ virtual bool isHandEquipped() const;
    /*52*/ virtual void __unk_vfn_52();
    /*54*/ virtual void __unk_vfn_54();
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*96*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*102*/ virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /*122*/ virtual struct Brightness getLightEmission(int) const;
    /*123*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*125*/ virtual class Item & setIcon(std::string const &, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPARKLERITEM
#endif
    MCAPI SparklerItem(std::string const &, int);
    MCAPI static struct SparklerItem::ColorInfo const COLORS[];
    MCAPI static int const MAX_ACTIVE_TICKS;

};