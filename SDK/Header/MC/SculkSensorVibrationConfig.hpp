// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "VibrationListenerConfig.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SculkSensorVibrationConfig : public VibrationListenerConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKSENSORVIBRATIONCONFIG
public:
    class SculkSensorVibrationConfig& operator=(class SculkSensorVibrationConfig const &) = delete;
    SculkSensorVibrationConfig(class SculkSensorVibrationConfig const &) = delete;
    SculkSensorVibrationConfig() = delete;
#endif


public:
    /*0*/ virtual ~SculkSensorVibrationConfig();
    /*1*/ virtual void onSignalReceive(class BlockSource &, class BlockPos, class GameEvent const &, class Actor *, float, class Actor *);
    /*2*/ virtual bool isValidVibration(class GameEvent const &);
    /*3*/ virtual bool shouldListen(class BlockSource &, class GameEvent const &, struct GameEventContext const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKSENSORVIBRATIONCONFIG
public:
#endif


};