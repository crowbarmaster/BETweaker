// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Layer.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SmoothLayer : public Layer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMOOTHLAYER
public:
    class SmoothLayer& operator=(class SmoothLayer const &) = delete;
    SmoothLayer(class SmoothLayer const &) = delete;
    SmoothLayer() = delete;
#endif

public:
    /*0*/ virtual ~SmoothLayer();
    /*2*/ virtual void fillArea(class LayerData &, int, int, int, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SMOOTHLAYER
#endif

};