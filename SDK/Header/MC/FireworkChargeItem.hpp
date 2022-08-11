// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FireworkChargeItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
enum Shape;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKCHARGEITEM
public:
    class FireworkChargeItem& operator=(class FireworkChargeItem const &) = delete;
    FireworkChargeItem(class FireworkChargeItem const &) = delete;
    FireworkChargeItem() = delete;
#endif

public:
    /*0*/ virtual ~FireworkChargeItem();
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*18*/ virtual bool isDyeable() const;
    /*52*/ virtual void __unk_vfn_52();
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual bool isValidAuxValue(int) const;
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*74*/ virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*117*/ virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREWORKCHARGEITEM
#endif
    MCAPI FireworkChargeItem(std::string const &, int);
    MCAPI static std::string const TAG_EXPLOSION;
    MCAPI static std::string const TAG_E_COLORS;
    MCAPI static std::string const TAG_E_FADECOLORS;
    MCAPI static std::string const TAG_E_FLICKER;
    MCAPI static std::string const TAG_E_TRAIL;
    MCAPI static std::string const TAG_E_TYPE;
    MCAPI static void getFormattedHoverText(class CompoundTag const &, std::string &, std::string const &);
    MCAPI static class ItemInstance const & initFireworkChargeItem(class ItemInstance &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    MCAPI static class ItemStack const & initFireworkChargeItem(class ItemStack &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    MCAPI static void setColor(class ItemStackBase &);

//private:
    MCAPI static void _initFireworkChargeItem(class ItemStackBase &, enum FireworkChargeItem::Shape, std::vector<unsigned char>, std::vector<unsigned char>, bool, bool);
    MCAPI static void appendColors(std::string &, std::vector<unsigned char>);

private:

};