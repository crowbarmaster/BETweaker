// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct TriggerDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIGGERDESCRIPTION
public:
    struct TriggerDescription& operator=(struct TriggerDescription const &) = delete;
    TriggerDescription(struct TriggerDescription const &) = delete;
    TriggerDescription() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIGGERDESCRIPTION
    MCVAPI void deserializeData(class Json::Value &);
    MCVAPI void getDocumentation(struct Documentation::Node &) const;
    MCVAPI char const * getNodeName() const;
    MCVAPI void serializeData(class Json::Value &) const;
    MCVAPI ~TriggerDescription();
#endif

};