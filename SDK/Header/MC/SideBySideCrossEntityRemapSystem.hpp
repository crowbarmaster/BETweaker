// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SideBySideCrossEntityRemapSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECROSSENTITYREMAPSYSTEM
public:
    class SideBySideCrossEntityRemapSystem& operator=(class SideBySideCrossEntityRemapSystem const &) = delete;
    SideBySideCrossEntityRemapSystem(class SideBySideCrossEntityRemapSystem const &) = delete;
    SideBySideCrossEntityRemapSystem() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIDEBYSIDECROSSENTITYREMAPSYSTEM
public:
#endif
    MCAPI static void _remapContext(class StrictEntityContext &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct UsesSideBySideComparisonComponent const> const &);

//private:
    MCAPI static void _removeNullStrictEntityContexts(std::vector<class StrictEntityContext> &);

private:


};