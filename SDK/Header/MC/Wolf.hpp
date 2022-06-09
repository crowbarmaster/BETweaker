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
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*118*/ virtual void setSitting(bool);
    /*132*/ virtual enum LevelSoundEvent getAmbientSound() const;
    /*140*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*166*/ virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /*180*/ virtual void __unk_vfn_180();
    /*189*/ virtual void onSynchedDataUpdate(int);
    /*194*/ virtual void __unk_vfn_194();
    /*219*/ virtual void __unk_vfn_219();
    /*220*/ virtual void __unk_vfn_220();
    /*245*/ virtual void __unk_vfn_245();
    /*248*/ virtual void __unk_vfn_248();
    /*264*/ virtual void __unk_vfn_264();
    /*265*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*272*/ virtual void __unk_vfn_272();
    /*281*/ virtual void __unk_vfn_281();
    /*310*/ virtual void __unk_vfn_310();
    /*312*/ virtual bool isAlliedTo(class Mob *);
    /*314*/ virtual void __unk_vfn_314();
    /*341*/ virtual void onBorn(class Actor &, class Actor &);
    /*348*/ virtual void __unk_vfn_348();
    /*357*/ virtual void newServerAiStep();
    /*362*/ virtual void __unk_vfn_362();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WOLF
public:
#endif
    MCAPI Wolf(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI float getHeadRollAngle(float);
    MCAPI float getShakeAnim() const;
    MCAPI float getTailAngle();
    MCAPI bool isShaking() const;

//private:
    MCAPI void _avoidSnowBury();

private:


};