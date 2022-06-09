// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BlockItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SaplingBlockItem : public BlockItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAPLINGBLOCKITEM
public:
    class SaplingBlockItem& operator=(class SaplingBlockItem const &) = delete;
    SaplingBlockItem(class SaplingBlockItem const &) = delete;
    SaplingBlockItem() = delete;
#endif


public:
    /*0*/ virtual ~SaplingBlockItem();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*45*/ virtual int getLevelDataForAuxValue(int) const;
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*66*/ virtual void __unk_vfn_66();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*75*/ virtual void __unk_vfn_75();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*95*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAPLINGBLOCKITEM
public:
#endif


};