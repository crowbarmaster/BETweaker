// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TaskStatus {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKSTATUS
public:
    class TaskStatus& operator=(class TaskStatus const &) = delete;
    TaskStatus(class TaskStatus const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TASKSTATUS
public:
#endif
    MCAPI TaskStatus();
    MCAPI bool isComplete() const;
    MCAPI operator enum TaskStatus::Value() const;
    MCAPI enum Bedrock::Threading::AsyncStatus toAsyncStatus() const;
    MCAPI class std::error_code toErrorCode() const;


};