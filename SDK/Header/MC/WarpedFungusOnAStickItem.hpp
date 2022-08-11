// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WarpedFungusOnAStickItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARPEDFUNGUSONASTICKITEM
public:
    class WarpedFungusOnAStickItem& operator=(class WarpedFungusOnAStickItem const &) = delete;
    WarpedFungusOnAStickItem(class WarpedFungusOnAStickItem const &) = delete;
    WarpedFungusOnAStickItem() = delete;
#endif

public:
    /*0*/ virtual ~WarpedFungusOnAStickItem();
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*50*/ virtual bool isHandEquipped() const;
    /*52*/ virtual void __unk_vfn_52();
    /*54*/ virtual void __unk_vfn_54();
    /*60*/ virtual bool requiresInteract() const;
    /*63*/ virtual int getEnchantSlot() const;
    /*64*/ virtual int getEnchantValue() const;
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*94*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WARPEDFUNGUSONASTICKITEM
#endif
    MCAPI WarpedFungusOnAStickItem(std::string const &, int);

};