// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TeleportPositionModeEventSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTPOSITIONMODEEVENTSYSTEM
public:
    class TeleportPositionModeEventSystem& operator=(class TeleportPositionModeEventSystem const &) = delete;
    TeleportPositionModeEventSystem(class TeleportPositionModeEventSystem const &) = delete;
    TeleportPositionModeEventSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TELEPORTPOSITIONMODEEVENTSYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createTeleportPositionModeEventSystem();

};