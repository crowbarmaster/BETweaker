// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct SlotDescriptor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLOTDESCRIPTOR
public:
    struct SlotDescriptor& operator=(struct SlotDescriptor const &) = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLOTDESCRIPTOR
#endif
    MCAPI SlotDescriptor();
    MCAPI SlotDescriptor(struct SlotDescriptor const &);
    MCAPI void addAcceptedItem(class ItemDescriptor const &);
    MCAPI ~SlotDescriptor();

};