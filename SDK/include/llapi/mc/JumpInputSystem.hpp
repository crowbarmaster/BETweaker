// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class JumpInputSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPINPUTSYSTEM
public:
    class JumpInputSystem& operator=(class JumpInputSystem const &) = delete;
    JumpInputSystem(class JumpInputSystem const &) = delete;
    JumpInputSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPINPUTSYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createJumpInputSystem();

};