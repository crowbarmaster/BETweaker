// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptPlayerAttackedActorEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLAYERATTACKEDACTOREVENT
public:
    struct ScriptPlayerAttackedActorEvent& operator=(struct ScriptPlayerAttackedActorEvent const &) = delete;
    ScriptPlayerAttackedActorEvent(struct ScriptPlayerAttackedActorEvent const &) = delete;
    ScriptPlayerAttackedActorEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptPlayerAttackedActorEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLAYERATTACKEDACTOREVENT
#endif

};