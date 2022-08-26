// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JumpControlComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROLCOMPONENT
#endif
    MCAPI JumpControlComponent();
    MCAPI JumpControlComponent(class JumpControlComponent const &);
    MCAPI int getAnimationDuration() const;
    MCAPI float getDistanceScale() const;
    MCAPI int getJumpDelay() const;
    MCAPI float getJumpPower() const;
    MCAPI bool getJumping() const;
    MCAPI bool getSwimming() const;
    MCAPI void initMultiTypeJumpComponent(class Mob &, class ActorDefinitionDescriptor &);
    MCAPI void initializeFromDefinition(class Mob &, struct JumpControlDescription *);
    MCAPI class JumpControlComponent & operator=(class JumpControlComponent const &);
    MCAPI void resetSpeedModifier(class Mob &);
    MCAPI void setInternalType(std::unique_ptr<class JumpControl>);
    MCAPI void setJumpType(enum JumpType);
    MCAPI void setJumping(bool);
    MCAPI void setSwimming(bool);
    MCAPI void update(class Mob &);
    MCAPI ~JumpControlComponent();

//private:
    MCAPI float _getDelayInternal() const;
    MCAPI float _getHeightInternal() const;

private:

};