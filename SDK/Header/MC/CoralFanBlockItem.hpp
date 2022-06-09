// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BlockItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CoralFanBlockItem : public BlockItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALFANBLOCKITEM
public:
    class CoralFanBlockItem& operator=(class CoralFanBlockItem const &) = delete;
    CoralFanBlockItem(class CoralFanBlockItem const &) = delete;
    CoralFanBlockItem() = delete;
#endif


public:
    /*0*/ virtual ~CoralFanBlockItem();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*45*/ virtual int getLevelDataForAuxValue(int) const;
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual bool isValidAuxValue(int) const;
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*75*/ virtual void __unk_vfn_75();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*132*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORALFANBLOCKITEM
public:
#endif
    MCAPI CoralFanBlockItem(std::string const &, int);


};