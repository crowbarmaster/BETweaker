// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackRequestActionTransferBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackRequestActionSwap : public ItemStackRequestActionTransferBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONSWAP
public:
    class ItemStackRequestActionSwap& operator=(class ItemStackRequestActionSwap const &) = delete;
    ItemStackRequestActionSwap(class ItemStackRequestActionSwap const &) = delete;
#endif

public:
    /*0*/ virtual ~ItemStackRequestActionSwap();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    MCAPI ItemStackRequestActionSwap();

protected:

private:

};