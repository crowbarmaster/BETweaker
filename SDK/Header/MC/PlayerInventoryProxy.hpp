// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PlayerInventoryProxy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINVENTORYPROXY
public:
    class PlayerInventoryProxy& operator=(class PlayerInventoryProxy const &) = delete;
    PlayerInventoryProxy(class PlayerInventoryProxy const &) = delete;
    PlayerInventoryProxy() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERINVENTORYPROXY
    MCVAPI void containerContentChanged(int);
    MCVAPI void containerSizeChanged(int);
    MCVAPI void createTransactionContext(class std::function<void (class Container &, int, class ItemInstance const &, class ItemInstance const &)>, class std::function<void (void)>);
#endif
    MCAPI bool removeResource(int);

};