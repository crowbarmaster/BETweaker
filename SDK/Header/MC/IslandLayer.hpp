// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Layer.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class IslandLayer : public Layer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISLANDLAYER
public:
    class IslandLayer& operator=(class IslandLayer const &) = delete;
    IslandLayer(class IslandLayer const &) = delete;
    IslandLayer() = delete;
#endif

public:
    /*0*/ virtual ~IslandLayer();
    /*2*/ virtual void fillArea(class LayerData &, int, int, int, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISLANDLAYER
#endif

};