// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Layer.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RiverLayer : public Layer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIVERLAYER
public:
    class RiverLayer& operator=(class RiverLayer const &) = delete;
    RiverLayer(class RiverLayer const &) = delete;
    RiverLayer() = delete;
#endif

public:
    /*0*/ virtual ~RiverLayer();
    /*2*/ virtual void fillArea(class LayerData &, int, int, int, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RIVERLAYER
#endif

};