// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WeakStorageFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKSTORAGEFEATURE
public:
    class WeakStorageFeature& operator=(class WeakStorageFeature const &) = delete;
    WeakStorageFeature(class WeakStorageFeature const &) = delete;
    WeakStorageFeature() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEAKSTORAGEFEATURE
public:
#endif

//protected:
    MCAPI WeakStorageFeature(class WeakStorageFeature &&);
    MCAPI WeakStorageFeature(class OwnerStorageFeature const &);
    MCAPI WeakStorageFeature(enum WeakStorageFeature::EmptyInit);
    MCAPI bool _isSet() const;
    MCAPI class WeakStorageFeature & operator=(class WeakStorageFeature &&);

protected:


};