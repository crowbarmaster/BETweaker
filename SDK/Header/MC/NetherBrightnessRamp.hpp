// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "DimensionBrightnessRamp.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NetherBrightnessRamp : public DimensionBrightnessRamp {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERBRIGHTNESSRAMP
public:
    class NetherBrightnessRamp& operator=(class NetherBrightnessRamp const &) = delete;
    NetherBrightnessRamp(class NetherBrightnessRamp const &) = delete;
    NetherBrightnessRamp() = delete;
#endif


public:
    /*0*/ virtual ~NetherBrightnessRamp();
    /*2*/ virtual float getBaseAmbientValue() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERBRIGHTNESSRAMP
public:
#endif


};