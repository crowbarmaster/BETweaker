// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Npc : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPC
public:
    class Npc& operator=(class Npc const &) = delete;
    Npc(class Npc const &) = delete;
    Npc() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*10*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~Npc();
    /*41*/ virtual void __unk_vfn_41();
    /*60*/ virtual bool canShowNameTag() const;
    /*61*/ virtual void __unk_vfn_61();
    /*65*/ virtual std::string getFormattedNameTag() const;
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual void __unk_vfn_99();
    /*106*/ virtual void __unk_vfn_106();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*182*/ virtual void __unk_vfn_182();
    /*194*/ virtual bool canBePulledIntoVehicle() const;
    /*196*/ virtual void __unk_vfn_196();
    /*203*/ virtual void buildDebugInfo(std::string &) const;
    /*212*/ virtual bool canBeAffected(class MobEffectInstance const &) const;
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*253*/ virtual void die(class ActorDamageSource const &);
    /*269*/ virtual void __unk_vfn_269();
    /*270*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*277*/ virtual void __unk_vfn_277();
    /*284*/ virtual void _onSizeUpdated();
    /*285*/ virtual void __unk_vfn_285();
    /*286*/ virtual void knockback(class Actor *, int, float, float, float, float, float);
    /*313*/ virtual void __unk_vfn_313();
    /*317*/ virtual void __unk_vfn_317();
    /*350*/ virtual bool canExistWhenDisallowMob() const;
    /*351*/ virtual void __unk_vfn_351();
    /*360*/ virtual void newServerAiStep();
    /*361*/ virtual void _serverAiMobStep();
    /*365*/ virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPC
    MCVAPI bool breaksFallingBlocks() const;
    MCVAPI bool interactPreventDefault();
    MCVAPI bool isFishable() const;
    MCVAPI bool isTargetable() const;
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Npc(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI static std::string const SKIN_ID_TAG;
    MCAPI static std::vector<struct std::pair<std::string, std::string>> const Skins;

};