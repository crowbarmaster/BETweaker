// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ShulkerBullet : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBULLET
public:
    class ShulkerBullet& operator=(class ShulkerBullet const &) = delete;
    ShulkerBullet(class ShulkerBullet const &) = delete;
    ShulkerBullet() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~ShulkerBullet();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*81*/ virtual void __unk_vfn_81();
    /*84*/ virtual void __unk_vfn_84();
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual bool isPickable();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*103*/ virtual bool isOnFire() const;
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*110*/ virtual void __unk_vfn_110();
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*247*/ virtual void __unk_vfn_247();
    /*250*/ virtual void __unk_vfn_250();
    /*268*/ virtual void __unk_vfn_268();
    /*272*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*273*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*276*/ virtual void __unk_vfn_276();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKERBULLET
#endif
    MCAPI ShulkerBullet(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};