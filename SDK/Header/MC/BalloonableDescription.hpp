// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct BalloonableDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BALLOONABLEDESCRIPTION
public:
    struct BalloonableDescription& operator=(struct BalloonableDescription const &) = delete;
    BalloonableDescription(struct BalloonableDescription const &) = delete;
    BalloonableDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getNodeName();
    /*1*/ virtual char const * getJsonName() const;
    /*2*/ virtual char const * getDescription() const;
    /*3*/ virtual void getDocumentation(struct Documentation::Node &) const;
    /*4*/ virtual ~BalloonableDescription();
    /*5*/ virtual void deserializeData(class Json::Value &);
    /*6*/ virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BALLOONABLEDESCRIPTION
#endif

};