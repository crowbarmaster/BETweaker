// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct IsShakingDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSHAKINGDESCRIPTION
public:
    struct IsShakingDescription& operator=(struct IsShakingDescription const &) = delete;
    IsShakingDescription(struct IsShakingDescription const &) = delete;
    IsShakingDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getNodeName();
    /*1*/ virtual char const * getJsonName() const;
    /*2*/ virtual char const * getDescription() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISSHAKINGDESCRIPTION
    MCVAPI void deserializeData(class Json::Value &);
    MCVAPI void getDocumentation(struct Documentation::Node &) const;
    MCVAPI void serializeData(class Json::Value &) const;
#endif

};