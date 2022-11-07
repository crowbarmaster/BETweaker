// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Wolf : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOLF
public:
    class Wolf& operator=(class Wolf const &) = delete;
    Wolf(class Wolf const &) = delete;
    Wolf() = delete;
#endif

public:
    /*14*/ virtual ~Wolf();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*53*/ virtual void addPassenger(class Actor &);
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*81*/ virtual void __unk_vfn_81();
    /*84*/ virtual void __unk_vfn_84();
    /*87*/ virtual void __unk_vfn_87();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*110*/ virtual void __unk_vfn_110();
    /*119*/ virtual void setSitting(bool);
    /*133*/ virtual enum LevelSoundEvent getAmbientSound() const;
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*167*/ virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /*181*/ virtual void __unk_vfn_181();
    /*190*/ virtual void onSynchedDataUpdate(int);
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*247*/ virtual void __unk_vfn_247();
    /*250*/ virtual void __unk_vfn_250();
    /*268*/ virtual void __unk_vfn_268();
    /*269*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*276*/ virtual void __unk_vfn_276();
    /*283*/ virtual void __unk_vfn_283();
    /*310*/ virtual void __unk_vfn_310();
    /*312*/ virtual bool isAlliedTo(class Mob *);
    /*314*/ virtual void __unk_vfn_314();
    /*341*/ virtual void onBorn(class Actor &, class Actor &);
    /*348*/ virtual void __unk_vfn_348();
    /*357*/ virtual void newServerAiStep();
    /*362*/ virtual void __unk_vfn_362();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WOLF
#endif
    MCAPI Wolf(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI float getHeadRollAngle(float);
    MCAPI float getShakeAnim() const;
    MCAPI float getTailAngle();
    MCAPI bool isShaking() const;
    MCAPI void postNormalTick();

//private:
    MCAPI void _avoidSnowBury();

private:

};