// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SilverfishWakeUpFriendsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SILVERFISHWAKEUPFRIENDSGOAL
public:
    class SilverfishWakeUpFriendsGoal& operator=(class SilverfishWakeUpFriendsGoal const &) = delete;
    SilverfishWakeUpFriendsGoal(class SilverfishWakeUpFriendsGoal const &) = delete;
    SilverfishWakeUpFriendsGoal() = delete;
#endif


public:
    /*0*/ virtual ~SilverfishWakeUpFriendsGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SILVERFISHWAKEUPFRIENDSGOAL
public:
#endif
    MCAPI SilverfishWakeUpFriendsGoal(class Silverfish &);


};