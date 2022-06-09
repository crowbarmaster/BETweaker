// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FlockingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOCKINGDEFINITION
public:
    class FlockingDefinition& operator=(class FlockingDefinition const &) = delete;
    FlockingDefinition(class FlockingDefinition const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOCKINGDEFINITION
public:
#endif
    MCAPI FlockingDefinition();
    MCAPI void initialize(class EntityContext &, class FlockingComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FlockingDefinition>> &);


};