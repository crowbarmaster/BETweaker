// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HorseEquipContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEEQUIPCONTAINERVALIDATION
public:
    class HorseEquipContainerValidation& operator=(class HorseEquipContainerValidation const &) = delete;
    HorseEquipContainerValidation(class HorseEquipContainerValidation const &) = delete;
    HorseEquipContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~HorseEquipContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /*3*/ virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /*4*/ virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /*5*/ virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /*6*/ virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /*7*/ virtual bool canDestroy(class ContainerScreenContext const &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HORSEEQUIPCONTAINERVALIDATION
#endif
    MCAPI HorseEquipContainerValidation(class ContainerScreenContext const &);

};