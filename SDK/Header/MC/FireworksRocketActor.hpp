// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FireworksRocketActor : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKSROCKETACTOR
public:
    class FireworksRocketActor& operator=(class FireworksRocketActor const &) = delete;
    FireworksRocketActor(class FireworksRocketActor const &) = delete;
    FireworksRocketActor() = delete;
#endif


public:
    /*14*/ virtual ~FireworksRocketActor();
    /*40*/ virtual void __unk_vfn_40();
    /*46*/ virtual void lerpMotion(class Vec3 const &);
    /*48*/ virtual void normalTick();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*79*/ virtual float getShadowRadius() const;
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual void __unk_vfn_94();
    /*97*/ virtual void __unk_vfn_97();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*140*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*180*/ virtual void __unk_vfn_180();
    /*189*/ virtual void onSynchedDataUpdate(int);
    /*194*/ virtual void __unk_vfn_194();
    /*219*/ virtual void __unk_vfn_219();
    /*220*/ virtual void __unk_vfn_220();
    /*245*/ virtual void __unk_vfn_245();
    /*248*/ virtual void __unk_vfn_248();
    /*264*/ virtual void __unk_vfn_264();
    /*268*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*269*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*272*/ virtual void __unk_vfn_272();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIREWORKSROCKETACTOR
public:
#endif
    MCAPI FireworksRocketActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void init(class Level &, class Vec3 const &, class CompoundTag const &, class Vec3 const &, struct ActorUniqueID, bool);
    MCAPI bool isAttachedToEntity() const;
    MCAPI void setDispensed(bool);

//private:
    MCAPI void checkAchievement() const;
    MCAPI void dealExplosionDamage();
    MCAPI void initTagData(class Random &);

private:


};