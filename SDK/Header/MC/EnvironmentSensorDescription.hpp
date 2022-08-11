// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct EnvironmentSensorDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENVIRONMENTSENSORDESCRIPTION
public:
    struct EnvironmentSensorDescription& operator=(struct EnvironmentSensorDescription const &) = delete;
    EnvironmentSensorDescription(struct EnvironmentSensorDescription const &) = delete;
    EnvironmentSensorDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getNodeName();
    /*1*/ virtual char const * getJsonName() const;
    /*2*/ virtual char const * getDescription() const;
    /*3*/ virtual void getDocumentation(struct Documentation::Node &) const;
    /*4*/ virtual ~EnvironmentSensorDescription();
    /*5*/ virtual void deserializeData(class Json::Value &);
    /*6*/ virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENVIRONMENTSENSORDESCRIPTION
#endif

//private:
    MCAPI void parseEnvironment(class Json::Value &);

};