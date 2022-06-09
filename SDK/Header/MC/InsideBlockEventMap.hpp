// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InsideBlockEventMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKEVENTMAP
public:
    class InsideBlockEventMap& operator=(class InsideBlockEventMap const &) = delete;
    InsideBlockEventMap() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INSIDEBLOCKEVENTMAP
public:
#endif
    MCAPI InsideBlockEventMap(class InsideBlockEventMap const &);
    MCAPI InsideBlockEventMap(class Block const &, bool, bool, bool, class DefinitionTrigger const &, class DefinitionTrigger const &);
    MCAPI class gsl::not_null<class Block const *> getBlock() const;
    MCAPI class DefinitionTrigger const & getEnteredEvent() const;
    MCAPI class DefinitionTrigger const & getExitedEvent() const;
    MCAPI bool isActorCurrentlyInside() const;
    MCAPI bool isIgnoringStates() const;
    MCAPI bool isWatchingIfActorEnters() const;
    MCAPI bool isWatchingIfActorExits() const;
    MCAPI void setCurrentlyInside(bool);
    MCAPI void setWasInside(bool);
    MCAPI bool wasActorInsideLastTick() const;
    MCAPI ~InsideBlockEventMap();


};