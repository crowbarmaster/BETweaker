// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VillagerBase : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERBASE
public:
    class VillagerBase& operator=(class VillagerBase const &) = delete;
    VillagerBase(class VillagerBase const &) = delete;
    VillagerBase() = delete;
#endif


public:
    /*11*/ virtual void reloadComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~VillagerBase();
    /*40*/ virtual void __unk_vfn_40();
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
    /*137*/ virtual void onLightningHit();
    /*140*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*180*/ virtual void __unk_vfn_180();
    /*194*/ virtual void __unk_vfn_194();
    /*219*/ virtual void __unk_vfn_219();
    /*220*/ virtual void __unk_vfn_220();
    /*245*/ virtual void __unk_vfn_245();
    /*248*/ virtual void __unk_vfn_248();
    /*264*/ virtual void __unk_vfn_264();
    /*268*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*269*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*272*/ virtual void __unk_vfn_272();
    /*280*/ virtual void _onSizeUpdated();
    /*281*/ virtual void __unk_vfn_281();
    /*310*/ virtual void __unk_vfn_310();
    /*314*/ virtual void __unk_vfn_314();
    /*348*/ virtual void __unk_vfn_348();
    /*358*/ virtual void _serverAiMobStep();
    /*362*/ virtual void __unk_vfn_362();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGERBASE
public:
    MCVAPI bool interactPreventDefault();
    MCVAPI bool useNewAi() const;
#endif
    MCAPI VillagerBase(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void consumeLoveFood();
    MCAPI int getBreedingStackIndex() const;
    MCAPI bool isChasing() const;
    MCAPI bool isWillingToBreed(bool);
    MCAPI void setChasing(bool);
    MCAPI void setWillingToBreed(bool);
    MCAPI void stopGoals();
    MCAPI static enum VillagerBase::BiomeType BiomeStrToEnum(std::string const &);

//private:
    MCAPI void _addParticlesAroundSelf(enum ParticleType);

private:


};