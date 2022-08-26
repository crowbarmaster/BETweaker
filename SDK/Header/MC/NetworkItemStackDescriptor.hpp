// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ItemDescriptor.hpp"
#include "ItemStackNetIdVariant.hpp"

#undef BEFORE_EXTRA

class NetworkItemStackDescriptor {

#define AFTER_EXTRA
// Add Member There
public:
    ItemDescriptor mDescriptor;//0
    char filler[80];
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKITEMSTACKDESCRIPTOR
public:
    class NetworkItemStackDescriptor& operator=(class NetworkItemStackDescriptor const &) = delete;
    NetworkItemStackDescriptor(class NetworkItemStackDescriptor const &) = delete;
    NetworkItemStackDescriptor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKITEMSTACKDESCRIPTOR
#endif
    MCAPI NetworkItemStackDescriptor(class ItemStackDescriptor const &);
    MCAPI NetworkItemStackDescriptor(class ItemStack const &);
    MCAPI NetworkItemStackDescriptor(class NetworkItemStackDescriptor &&);
    MCAPI void read(class ReadOnlyBinaryStream &);
    MCAPI void setIncludeNetIds(bool) const;
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const * tryGetServerNetId() const;
    MCAPI void write(class BinaryStream &) const;
    MCAPI ~NetworkItemStackDescriptor();

//private:
    MCAPI class ItemStack getItemStack(class BlockPalette const &) const;

private:

};