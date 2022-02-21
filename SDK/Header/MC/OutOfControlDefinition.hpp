// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OutOfControlDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OUTOFCONTROLDEFINITION
public:
    class OutOfControlDefinition& operator=(class OutOfControlDefinition const&) = delete;
    OutOfControlDefinition(class OutOfControlDefinition const&) = delete;
    OutOfControlDefinition() = delete;
#endif

public:
    MCAPI void initialize(class EntityContext&, class OutOfControlComponent&) const;
    MCAPI void uninitialize(class EntityContext&, class OutOfControlComponent&) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OutOfControlDefinition> >&);

protected:

private:

};