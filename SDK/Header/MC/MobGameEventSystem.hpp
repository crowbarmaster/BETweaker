// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MobGameEventSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBGAMEEVENTSYSTEM
public:
    class MobGameEventSystem& operator=(class MobGameEventSystem const &) = delete;
    MobGameEventSystem(class MobGameEventSystem const &) = delete;
    MobGameEventSystem() = delete;
#endif


public:
    /*0*/ virtual ~MobGameEventSystem();
    /*1*/ virtual void registerEvents(class entt::basic_dispatcher<class std::allocator<void>> &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBGAMEEVENTSYSTEM
public:
#endif

//private:
    MCAPI static void _onActorDie(struct ActorDieEvent &);

private:


};