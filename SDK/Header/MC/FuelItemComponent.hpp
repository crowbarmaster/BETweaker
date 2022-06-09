// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FuelItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FUELITEMCOMPONENT
public:
    class FuelItemComponent& operator=(class FuelItemComponent const &) = delete;
    FuelItemComponent(class FuelItemComponent const &) = delete;
    FuelItemComponent() = delete;
#endif


public:
    /*0*/ virtual ~FuelItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual bool initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FUELITEMCOMPONENT
public:
#endif
    MCAPI FuelItemComponent(class ComponentItem *);
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();


};