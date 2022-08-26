// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StructureAnimationAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREANIMATIONACTION
public:
    class StructureAnimationAction& operator=(class StructureAnimationAction const &) = delete;
    StructureAnimationAction(class StructureAnimationAction const &) = delete;
    StructureAnimationAction() = delete;
#endif

public:
    /*0*/ virtual ~StructureAnimationAction();
    /*1*/ virtual void execute(class ServerLevel &, class Dimension &);
    /*2*/ virtual void serialize(class CompoundTag &);
    /*3*/ virtual bool operator==(class IRequestAction &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREANIMATIONACTION
#endif
    MCAPI StructureAnimationAction(std::unique_ptr<class StructureAnimationData>, class AutomaticID<class Dimension, int>);
    MCAPI StructureAnimationAction(class StructureSettings const &, class AutomaticID<class Dimension, int>, class BlockPos const &, std::string const &);
    MCAPI static bool isValidTag(class CompoundTag const &);
    MCAPI static std::unique_ptr<class StructureAnimationAction> load(class CompoundTag const &, std::string const &);

};