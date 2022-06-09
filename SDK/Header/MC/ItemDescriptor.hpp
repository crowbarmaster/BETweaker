// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemDescriptor {

#define AFTER_EXTRA
// Add Member There
    char filler[72];

#define DISABLE_CONSTRUCTOR_PREVENTION_ITEMDESCRIPTOR
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMDESCRIPTOR
public:
    class ItemDescriptor& operator=(class ItemDescriptor const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMDESCRIPTOR
public:
#endif
    MCAPI ItemDescriptor(class ItemDescriptor &&);
    MCAPI ItemDescriptor(class ItemDescriptor const &);
    MCAPI ItemDescriptor(class Block const &);
    MCAPI ItemDescriptor(class BlockLegacy const &);
    MCAPI ItemDescriptor(class Item const &, int);
    MCAPI ItemDescriptor(class gsl::basic_string_span<char const, -1>, int);
    MCAPI ItemDescriptor();
    MCAPI short getAuxValue() const;
    MCAPI class Block const * getBlock() const;
    MCAPI std::string const & getFullName() const;
    MCAPI short getId() const;
    MCAPI int getIdAux() const;
    MCAPI class Item const * getItem() const;
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    MCAPI std::string getRawNameId() const;
    MCAPI std::string getSerializedNameAndAux() const;
    MCAPI bool isDefinedAsItemName() const;
    MCAPI bool isNull() const;
    MCAPI bool isValid() const;
    MCAPI void operator=(class ItemDescriptor &&);
    MCAPI void operator=(class ItemDescriptor const &);
    MCAPI bool operator==(class ItemDescriptor const &) const;
    MCAPI bool sameItemAndAux(class ItemDescriptor const &) const;
    MCAPI bool sameItemAndAux(class ItemStack const &) const;
    MCAPI class std::optional<class CompoundTag> save() const;
    MCAPI ~ItemDescriptor();
    MCAPI static void bindType();
    MCAPI static class ItemDescriptor fromTagExpression(std::string const &, enum MolangVersion);

//private:
    MCAPI ItemDescriptor(int, int);
    MCAPI bool _hasTagOfItem(class Item const *) const;
    MCAPI void _initFromBlockLegacy(class BlockLegacy const &, class WeakPtr<class Item>) const;
    MCAPI void _initFromItem(class WeakPtr<class Item>, short) const;
    MCAPI void _resolveImpl() const;

private:


};