// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptInventoryComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTINVENTORYCOMPONENT
public:
    class ScriptInventoryComponent& operator=(class ScriptInventoryComponent const &) = delete;
    ScriptInventoryComponent(class ScriptInventoryComponent const &) = delete;
    ScriptInventoryComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptInventoryComponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual bool applyComponentTo(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, class Actor &, class ScriptApi::ScriptObjectHandle const &) const;
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual bool retrieveComponentFrom(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, class Actor &, class ScriptApi::ScriptObjectHandle &) const;
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual bool hasComponent(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, class Actor &, bool &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTINVENTORYCOMPONENT
#endif

};