// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EvocationIllager : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVOCATIONILLAGER
public:
    class EvocationIllager& operator=(class EvocationIllager const &) = delete;
    EvocationIllager(class EvocationIllager const &) = delete;
    EvocationIllager() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~EvocationIllager();
    /*40*/ virtual void __unk_vfn_40();
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
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*247*/ virtual void __unk_vfn_247();
    /*250*/ virtual void __unk_vfn_250();
    /*252*/ virtual void die(class ActorDamageSource const &);
    /*268*/ virtual void __unk_vfn_268();
    /*276*/ virtual void __unk_vfn_276();
    /*283*/ virtual void __unk_vfn_283();
    /*297*/ virtual void aiStep();
    /*310*/ virtual void __unk_vfn_310();
    /*312*/ virtual bool isAlliedTo(class Mob *);
    /*314*/ virtual void __unk_vfn_314();
    /*319*/ virtual int getArmorValue() const;
    /*348*/ virtual void __unk_vfn_348();
    /*362*/ virtual void __unk_vfn_362();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EVOCATIONILLAGER
    MCVAPI bool canExistInPeaceful() const;
    MCVAPI bool useNewAi() const;
#endif
    MCAPI EvocationIllager(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};