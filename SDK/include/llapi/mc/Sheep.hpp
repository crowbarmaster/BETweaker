// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Sheep : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHEEP
public:
    class Sheep& operator=(class Sheep const &) = delete;
    Sheep(class Sheep const &) = delete;
    Sheep() = delete;
#endif

public:
    /*14*/ virtual ~Sheep();
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
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*247*/ virtual void __unk_vfn_247();
    /*250*/ virtual void __unk_vfn_250();
    /*268*/ virtual void __unk_vfn_268();
    /*276*/ virtual void __unk_vfn_276();
    /*283*/ virtual void __unk_vfn_283();
    /*297*/ virtual void aiStep();
    /*310*/ virtual void __unk_vfn_310();
    /*314*/ virtual void __unk_vfn_314();
    /*348*/ virtual void __unk_vfn_348();
    /*354*/ virtual void jumpFromGround();
    /*357*/ virtual void newServerAiStep();
    /*362*/ virtual void __unk_vfn_362();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHEEP
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Sheep(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI bool isGrazing() const;

//private:

private:
    MCAPI static int const EAT_ANIMATION_TICKS;

};