// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "AbstractArrow.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ThrownTrident : public AbstractArrow {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWNTRIDENT
public:
    class ThrownTrident& operator=(class ThrownTrident const &) = delete;
    ThrownTrident(class ThrownTrident const &) = delete;
    ThrownTrident() = delete;
#endif

public:
    /*7*/ virtual void outOfWorld();
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~ThrownTrident();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*81*/ virtual void __unk_vfn_81();
    /*84*/ virtual void __unk_vfn_84();
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player &);
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*110*/ virtual void __unk_vfn_110();
    /*129*/ virtual bool isEnchanted() const;
    /*149*/ virtual void despawn();
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*247*/ virtual void __unk_vfn_247();
    /*250*/ virtual void __unk_vfn_250();
    /*268*/ virtual void __unk_vfn_268();
    /*269*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*272*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*273*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*276*/ virtual void __unk_vfn_276();
    /*283*/ virtual void __unk_vfn_283();
    /*284*/ virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /*286*/ virtual class ItemStack _getPickupItem() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THROWNTRIDENT
#endif
    MCAPI ThrownTrident(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI class ItemStack getPickupItem() const;
    MCAPI void returnWithLoyalty(int);
    MCAPI void setTridentItem(class ItemStack const &);

};