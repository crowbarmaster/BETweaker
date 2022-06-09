// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EntityContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCONTEXT
public:
    class EntityContext& operator=(class EntityContext const &) = delete;
    EntityContext(class EntityContext const &) = delete;
    EntityContext() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYCONTEXT
public:
#endif
    MCAPI EntityContext(class EntityRegistry &, class EntityId);
    MCAPI class WeakRefT<struct EntityRefTraits> getWeakRef() const;

//protected:
    MCAPI class EntityRegistry & _registry() const;

protected:


};