// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EntityOptionalOwnerRef {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYOPTIONALOWNERREF
public:
    class EntityOptionalOwnerRef& operator=(class EntityOptionalOwnerRef const &) = delete;
    EntityOptionalOwnerRef(class EntityOptionalOwnerRef const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYOPTIONALOWNERREF
public:
#endif
    MCAPI EntityOptionalOwnerRef();
    MCAPI bool isSet() const;
    MCAPI void setOwnedRef(class OwnerPtrT<struct EntityRefTraits>);
    MCAPI void setWeakRef(class WeakRefT<struct EntityRefTraits>);
    MCAPI class StackRefResultT<struct EntityRefTraits> tryGet() const;


};