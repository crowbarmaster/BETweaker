// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"
#include "MovementScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptMovementJumpComponent : public MovementScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMOVEMENTJUMPCOMPONENT
public:
    class ScriptMovementJumpComponent& operator=(class ScriptMovementJumpComponent const&) = delete;
    ScriptMovementJumpComponent(class ScriptMovementJumpComponent const&) = delete;
    ScriptMovementJumpComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptMovementJumpComponent();
    /*
    inline  ~ScriptMovementJumpComponent(){
         (ScriptMovementJumpComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptMovementJumpComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptMovementJumpComponent> bind(struct Scripting::Version);

protected:

private:

};