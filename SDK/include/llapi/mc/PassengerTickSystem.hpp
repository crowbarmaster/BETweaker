// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PassengerTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PASSENGERTICKSYSTEM
public:
    class PassengerTickSystem& operator=(class PassengerTickSystem const &) = delete;
    PassengerTickSystem(class PassengerTickSystem const &) = delete;
    PassengerTickSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PASSENGERTICKSYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createMobPostPassengerTickSystem();
    MCAPI static struct TickingSystemWithInfo createPlayerPostPassengerTickSystem();
    MCAPI static struct TickingSystemWithInfo createPlayerPrePassengerTickSystem();

};