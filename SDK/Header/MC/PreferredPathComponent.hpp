// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PreferredPathComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREFERREDPATHCOMPONENT
public:
    class PreferredPathComponent& operator=(class PreferredPathComponent const &) = delete;
    PreferredPathComponent(class PreferredPathComponent const &) = delete;
    PreferredPathComponent() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PREFERREDPATHCOMPONENT
public:
#endif
    MCAPI struct PreferredPathDescription const & getPreferredPath(class Actor &);
    MCAPI void initFromDefinition(class Actor &);


};