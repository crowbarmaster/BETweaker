// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptEquipmentComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTEQUIPMENTCOMPONENT
public:
    class ScriptEquipmentComponent& operator=(class ScriptEquipmentComponent const &) = delete;
    ScriptEquipmentComponent(class ScriptEquipmentComponent const &) = delete;
    ScriptEquipmentComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptEquipmentComponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual bool applyComponentTo(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, class Actor &, class ScriptApi::ScriptObjectHandle const &) const;
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, class Actor &, class ScriptApi::ScriptObjectHandle &) const;
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, class Actor &, bool &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTEQUIPMENTCOMPONENT
#endif

};