// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct SettingsScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTINGSSCREENCAPABILITIES
public:
    struct SettingsScreenCapabilities& operator=(struct SettingsScreenCapabilities const &) = delete;
    SettingsScreenCapabilities() = delete;
#endif
public:
    /*0*/ virtual ~SettingsScreenCapabilities();
    /*1*/ virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETTINGSSCREENCAPABILITIES
#endif
    MCAPI SettingsScreenCapabilities(struct SettingsScreenCapabilities const &);

};