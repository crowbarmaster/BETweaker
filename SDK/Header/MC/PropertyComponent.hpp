// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PropertyComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYCOMPONENT
public:
    class PropertyComponent& operator=(class PropertyComponent const &) = delete;
    PropertyComponent(class PropertyComponent const &) = delete;
    PropertyComponent() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROPERTYCOMPONENT
public:
#endif
    MCAPI PropertyComponent(class PropertyComponent &&);
    MCAPI PropertyComponent(class gsl::not_null<class std::shared_ptr<class PropertyGroup const>>);
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI void applyQueuedChanges(class QueuedPropertyChangesComponent const &);
    MCAPI bool getMolangValue(unsigned __int64, struct MolangScriptArg &) const;
    MCAPI bool hasProperty(unsigned __int64) const;
    MCAPI class PropertyComponent & operator=(class PropertyComponent &&);
    MCAPI void readLoadedProperties(class CompoundTag const &);
    MCAPI void setAliasProperties(class std::unordered_map<class HashedString, class std::shared_ptr<class Tag>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::shared_ptr<class Tag>>>> const &, std::string const &, std::string const &);
    MCAPI class CompoundTag updateDirtyProperties();
    MCAPI ~PropertyComponent();


};