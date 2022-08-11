// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Layer.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RareBiomeSpotLayer : public Layer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAREBIOMESPOTLAYER
public:
    class RareBiomeSpotLayer& operator=(class RareBiomeSpotLayer const &) = delete;
    RareBiomeSpotLayer(class RareBiomeSpotLayer const &) = delete;
    RareBiomeSpotLayer() = delete;
#endif

public:
    /*0*/ virtual ~RareBiomeSpotLayer();
    /*2*/ virtual void fillArea(class LayerData &, int, int, int, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAREBIOMESPOTLAYER
#endif
    MCAPI RareBiomeSpotLayer(unsigned int, class std::shared_ptr<class Layer> &, int, int, int);

};