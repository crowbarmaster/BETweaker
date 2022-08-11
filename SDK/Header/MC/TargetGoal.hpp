// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETGOAL
public:
    class TargetGoal& operator=(class TargetGoal const &) = delete;
    TargetGoal(class TargetGoal const &) = delete;
    TargetGoal() = delete;
#endif

public:
    /*0*/ virtual ~TargetGoal();
    /*1*/ virtual bool canUse() = 0;
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual bool isTargetGoal() const;
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual bool _canAttack(class Mob *, class Actor *, bool, bool, struct MobDescriptor const **);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TARGETGOAL
#endif
    MCAPI TargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, bool, int, bool, float, bool, int);
    MCAPI TargetGoal(class Mob &, bool, int, bool, float, bool, int);

//protected:
    MCAPI bool _canAttack(class Actor *, bool, struct MobDescriptor const **);
    MCAPI bool _canReach(class Actor &);
    MCAPI bool _canReachAfterDelay(class Actor &);
    MCAPI bool _matchesTargetTypes(class Mob *, class Actor *, bool, struct MobDescriptor const **);
    MCAPI bool _withinRange(class Actor const &);

protected:

};