// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct OnDeathDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONDEATHDESCRIPTION
public:
    struct OnDeathDescription& operator=(struct OnDeathDescription const &) = delete;
    OnDeathDescription(struct OnDeathDescription const &) = delete;
    OnDeathDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getNodeName();
    /*1*/ virtual char const * getJsonName() const;
    /*2*/ virtual char const * getDescription() const;
    /*3*/ virtual void getDocumentation(struct Documentation::Node &);
    /*4*/ virtual ~OnDeathDescription();
    /*5*/ virtual void deserializeData(class Json::Value &);
    /*6*/ virtual void serializeData(class Json::Value &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONDEATHDESCRIPTION
#endif

};