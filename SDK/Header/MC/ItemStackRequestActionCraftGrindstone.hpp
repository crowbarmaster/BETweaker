// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackRequestActionCraftGrindstone {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTGRINDSTONE
public:
    class ItemStackRequestActionCraftGrindstone& operator=(class ItemStackRequestActionCraftGrindstone const &) = delete;
    ItemStackRequestActionCraftGrindstone(class ItemStackRequestActionCraftGrindstone const &) = delete;
#endif


public:
    /*0*/ virtual ~ItemStackRequestActionCraftGrindstone();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void _write(class BinaryStream &) const;
    /*5*/ virtual bool _read(class ReadOnlyBinaryStream &);
    /*6*/ virtual struct ItemStackNetIdVariant const & getRecipeNetId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCRAFTGRINDSTONE
public:
#endif
    MCAPI ItemStackRequestActionCraftGrindstone();
    MCAPI int getRepairCost() const;


};