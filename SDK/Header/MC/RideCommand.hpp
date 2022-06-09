// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RideCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDECOMMAND
public:
    class RideCommand& operator=(class RideCommand const &) = delete;
    RideCommand(class RideCommand const &) = delete;
    RideCommand() = delete;
#endif


public:
    /*0*/ virtual ~RideCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RIDECOMMAND
public:
#endif
    MCAPI static void setup(class CommandRegistry &);

//private:
    MCAPI void evictPassengers(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI void startRiding(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI void stopRiding(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI void summonPassenger(class CommandOrigin const &, class CommandOutput &) const;
    MCAPI void summonVehicle(class CommandOrigin const &, class CommandOutput &) const;

private:


};