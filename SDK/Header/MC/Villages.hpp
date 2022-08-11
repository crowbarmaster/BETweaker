// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Villages {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGES
public:
    class Villages& operator=(class Villages const &) = delete;
    Villages(class Villages const &) = delete;
    Villages() = delete;
#endif

public:
    /*0*/ virtual ~Villages();
    /*1*/ virtual void deserialize(class CompoundTag const &);
    /*2*/ virtual void serialize(class CompoundTag &) const;
    /*3*/ virtual void setLevel(class Level *);
    /*4*/ virtual void tick();
    /*5*/ virtual class std::weak_ptr<class Village> fetchClosestVillage(class BlockPos const &, int);
    /*6*/ virtual class std::weak_ptr<class Village> fetchClosestVillage2D(class BlockPos const &, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGES
#endif
    MCAPI class DoorInfo * getDoorInfo(class BlockPos const &);
    MCAPI void insertDoorInfo(std::unique_ptr<class DoorInfo> &&);
    MCAPI static int const MAX_DOOR_DIST;
    MCAPI static std::string const VILLAGE_FILE_ID;

//private:
    MCAPI class std::weak_ptr<class Village> _fetchClosestVillage(class BlockPos const &, int, bool);
    MCAPI void addDoorInfoWithinRadius(class BlockPos &);
    MCAPI bool assignDoorOrCreateVillage(std::unique_ptr<class DoorInfo> &&);
    MCAPI void createDoorInfo(class BlockPos const &);

private:

};