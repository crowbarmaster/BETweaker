// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct OnStoreSideBySideResult {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSTORESIDEBYSIDERESULT
public:
    struct OnStoreSideBySideResult& operator=(struct OnStoreSideBySideResult const &) = delete;
    OnStoreSideBySideResult(struct OnStoreSideBySideResult const &) = delete;
    OnStoreSideBySideResult() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONSTORESIDEBYSIDERESULT
#endif
    MCAPI OnStoreSideBySideResult(class std::optional<enum SideBySideExtractionId>, class StrictEntityContext const &, class gsl::not_null<class EntityRegistryBase *>, struct SideBySideResult);
    MCAPI struct SideBySideResultSystemContext createContext() const;
    MCAPI ~OnStoreSideBySideResult();

};