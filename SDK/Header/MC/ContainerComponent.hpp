// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ContainerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERCOMPONENT
public:
    class ContainerComponent& operator=(class ContainerComponent const &) = delete;
    ContainerComponent(class ContainerComponent const &) = delete;
#endif

public:
    /*0*/ virtual void containerContentChanged(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERCOMPONENT
#endif
    MCAPI ContainerComponent();
    MCAPI ContainerComponent(class ContainerComponent &&);
    MCAPI class FillingContainer * _getRawContainerPtr();
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI bool addItem(class BlockSource &, class ItemStack &, int, int);
    MCAPI bool addItem(class ItemActor &);
    MCAPI bool addItem(class ItemStack &);
    MCAPI bool canBeSiphonedFrom() const;
    MCAPI bool canOpenContainer(class Actor const &, class Player &) const;
    MCAPI int countItemsOfType(class ItemStack const &) const;
    MCAPI void dropContents(class BlockSource &, class Vec3 const &, bool);
    MCAPI int findFirstSlotForItem(class ItemStack const &) const;
    MCAPI int getContainerSize() const;
    MCAPI class ItemStack const & getItem(int) const;
    MCAPI std::vector<class ItemStack const *> const getSlots() const;
    MCAPI bool hasRoomForItem(class ItemActor const &);
    MCAPI bool hasRoomForItem(class ItemStack const &);
    MCAPI void initFromDefinition(class Actor &);
    MCAPI void initFromDefinition(class Actor &, struct ContainerDescription const &);
    MCAPI bool isEmpty() const;
    MCAPI bool isPrivate() const;
    MCAPI bool openContainer(class Actor &, class Player &);
    MCAPI class ContainerComponent & operator=(class ContainerComponent &&);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void rebuildContainer(class Actor &, enum ContainerType, int, bool, int, bool);
    MCAPI void removeItem(int, int);
    MCAPI void removeItemsOfType(class ItemStack const &, int);
    MCAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    MCAPI void setCustomName(std::string const &);
    MCAPI bool setItem(int, class ItemStack const &);
    MCAPI void setLootTable(std::string const &, int);
    MCAPI void unpackLootTable(class Level &, class AutomaticID<class Dimension, int>);

//private:
    MCAPI bool _tryMoveInItem(class BlockSource &, class ItemStack &, int, int, int);

private:

};