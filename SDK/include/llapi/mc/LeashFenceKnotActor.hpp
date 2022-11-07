// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HangingActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LeashFenceKnotActor : public HangingActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEASHFENCEKNOTACTOR
public:
    class LeashFenceKnotActor& operator=(class LeashFenceKnotActor const &) = delete;
    LeashFenceKnotActor(class LeashFenceKnotActor const &) = delete;
    LeashFenceKnotActor() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~LeashFenceKnotActor();
    /*17*/ virtual void remove();
    /*40*/ virtual void __unk_vfn_40();
    /*43*/ virtual void teleportTo(class Vec3 const &, bool, int, int, bool);
    /*60*/ virtual void __unk_vfn_60();
    /*67*/ virtual void __unk_vfn_67();
    /*79*/ virtual float getShadowRadius() const;
    /*81*/ virtual void __unk_vfn_81();
    /*84*/ virtual void __unk_vfn_84();
    /*87*/ virtual void __unk_vfn_87();
    /*94*/ virtual bool isPickable();
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
    /*237*/ virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /*247*/ virtual void __unk_vfn_247();
    /*250*/ virtual void __unk_vfn_250();
    /*268*/ virtual void __unk_vfn_268();
    /*272*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*273*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*276*/ virtual void __unk_vfn_276();
    /*282*/ virtual void _onSizeUpdated();
    /*283*/ virtual void __unk_vfn_283();
    /*284*/ virtual void setDir(int);
    /*285*/ virtual int getWidth() const;
    /*286*/ virtual int getHeight() const;
    /*287*/ virtual void dropItem();
    /*289*/ virtual bool wouldSurvive(class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEASHFENCEKNOTACTOR
#endif
    MCAPI LeashFenceKnotActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI int numberofAnimalsAttached();

};