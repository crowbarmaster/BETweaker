// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DwellerComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum DwellingType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DWELLERCOMPONENT
public:
    class DwellerComponent& operator=(class DwellerComponent const &) = delete;
    DwellerComponent(class DwellerComponent const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DWELLERCOMPONENT
#endif
    MCAPI void DecrementDwellingUpdateInterval();
    MCAPI DwellerComponent();
    MCAPI DwellerComponent(class DwellerComponent &&);
    MCAPI void addAdditionalSaveData(class CompoundTag &, class Actor const &) const;
    MCAPI void checkandUpdateDwellingStatus(class Actor const &, class Village *);
    MCAPI void clearPreferredProfession();
    MCAPI void fixupProfession(class Actor const &, class Village *);
    MCAPI bool getCanFindPOI() const;
    MCAPI enum DwellerRole getDwellerRole() const;
    MCAPI class mce::UUID getDwellingUniqueID() const;
    MCAPI unsigned __int64 getDwellingUpdateInterval() const;
    MCAPI bool getFixUpRole() const;
    MCAPI class HashedString const & getPreferredProfession() const;
    MCAPI unsigned __int64 getUpdateIntervalBase() const;
    MCAPI int getUpdateIntervalVariant() const;
    MCAPI class std::weak_ptr<class Village> const getVillage(class Actor const &) const;
    MCAPI class BlockPos getVillageCenter(class Actor const &) const;
    MCAPI bool hasDwelling() const;
    MCAPI bool hasPreferredProfession(class Actor const &) const;
    MCAPI void initFromDefinition(class Actor &);
    MCAPI bool isWithinRestriction(class Actor const &) const;
    MCAPI bool needsToFixupProfession(class Actor const &) const;
    MCAPI bool needsToFixupVillageRole(class Actor const &, class Village *) const;
    MCAPI void onDeath(class Actor &, class ActorDamageSource const &);
    MCAPI void onDimensionChange(class Actor &);
    MCAPI void onRemove(class Actor &);
    MCAPI class DwellerComponent & operator=(class DwellerComponent &&);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void setDwellingUniqueID(class Actor &, class mce::UUID);
    MCAPI void setDwellingUpdateInterval(unsigned __int64);
    MCAPI void setFixUpRole(bool);
    MCAPI void setLastHurtByMob(class Actor &, class Mob *);
    MCAPI bool trySetPreferredProfession(class Actor const &, class HashedString const &);
    MCAPI bool tryToFixupRole(class Actor const &, class Village *);
    MCAPI bool tryToMigrate(class Actor &, class Village *, class Village *);
    MCAPI bool wantsToMigrate(class Actor const &, class Village *) const;
    MCAPI ~DwellerComponent();

//private:
    MCAPI bool _isLockedInToProfession(class Actor const &) const;

private:
    MCAPI static class std::unordered_map<std::string, enum DwellerRole, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum DwellerRole>>> const DWELLING_ROLES;
    MCAPI static class std::unordered_map<std::string, enum DwellerComponent::DwellingType, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum DwellerComponent::DwellingType>>> const DWELLING_TYPES;

};