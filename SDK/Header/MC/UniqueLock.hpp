// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class UniqueLock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNIQUELOCK
public:
    class UniqueLock& operator=(class UniqueLock const &) = delete;
    UniqueLock(class UniqueLock const &) = delete;
    UniqueLock() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UNIQUELOCK
#endif
    MCAPI ~UniqueLock();

};