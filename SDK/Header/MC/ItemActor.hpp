// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemActor : public Actor {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI ItemStack* getItemStack();
    LIAPI int getDespawnTime();
    LIAPI bool setDespawnTime(int);
    LIAPI int getLatestSpawnTime();
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMACTOR
public:
    class ItemActor& operator=(class ItemActor const &) = delete;
    ItemActor(class ItemActor const &) = delete;
    ItemActor() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~ItemActor();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*40*/ virtual bool isFireImmune() const;
    /*41*/ virtual void __unk_vfn_41();
    /*48*/ virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /*49*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual void playerTouch(class Player &);
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual void __unk_vfn_99();
    /*106*/ virtual void __unk_vfn_106();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*135*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*142*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*176*/ virtual class AABB getLiquidAABB(enum MaterialType) const;
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*199*/ virtual bool canSynchronizeNewEntity() const;
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*269*/ virtual void __unk_vfn_269();
    /*270*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*273*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*274*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*277*/ virtual void __unk_vfn_277();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMACTOR
    MCVAPI bool canMakeStepSound() const;
#endif
    MCAPI ItemActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void postNormalTick();
    MCAPI void setSourceEntity(class Actor const *);
    MCAPI static class ItemActor * tryGetFromEntity(class EntityContext &, bool);

//private:
    MCAPI void _addComponents();
    MCAPI void _dropContents();
    MCAPI bool _merge(class ItemActor *);
    MCAPI void _validateItem();

private:
    MCAPI static int const LIFETIME;

};