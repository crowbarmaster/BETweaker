// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FinalizeMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINALIZEMOVESYSTEM
public:
    class FinalizeMoveSystem& operator=(class FinalizeMoveSystem const &) = delete;
    FinalizeMoveSystem(class FinalizeMoveSystem const &) = delete;
    FinalizeMoveSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FINALIZEMOVESYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo create();

};