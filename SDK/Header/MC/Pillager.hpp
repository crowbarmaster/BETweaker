// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Pillager : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PILLAGER
public:
    class Pillager& operator=(class Pillager const &) = delete;
    Pillager(class Pillager const &) = delete;
    Pillager() = delete;
#endif

public:
    /*14*/ virtual ~Pillager();
    /*41*/ virtual void __unk_vfn_41();
    /*61*/ virtual void __unk_vfn_61();
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
    /*196*/ virtual void __unk_vfn_196();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*267*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*269*/ virtual void __unk_vfn_269();
    /*273*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*277*/ virtual void __unk_vfn_277();
    /*285*/ virtual void __unk_vfn_285();
    /*313*/ virtual void __unk_vfn_313();
    /*317*/ virtual void __unk_vfn_317();
    /*349*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*351*/ virtual void __unk_vfn_351();
    /*365*/ virtual void __unk_vfn_365();
    /*367*/ virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PILLAGER
#endif
    MCAPI Pillager(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};