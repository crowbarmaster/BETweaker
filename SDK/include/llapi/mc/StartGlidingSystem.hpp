// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StartGlidingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTGLIDINGSYSTEM
public:
    class StartGlidingSystem& operator=(class StartGlidingSystem const &) = delete;
    StartGlidingSystem(class StartGlidingSystem const &) = delete;
    StartGlidingSystem() = delete;
#endif

public:
    /*0*/ virtual ~StartGlidingSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PlayerComponentFlag>, struct PlayerInputRequestComponent, class FlagComponent<struct UsesECSMovementFlag>>, struct Read<struct AbilitiesComponent, class FlagComponent<struct ArmorFlyEnabledFlag>, struct CollisionBoxDefinitionComponent, struct MoveInputComponent, class FlagComponent<struct OnGroundFlag>, struct PassengerComponent, struct StateVectorComponent, struct VanillaClientGameplayComponent>, struct Write<struct AABBShapeComponent, struct OffsetsComponent, struct PlayerActionComponent, struct SynchedActorDataComponent>, struct AddRemove<class FlagComponent<struct WasPenetratingLastFrameFlag>>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STARTGLIDINGSYSTEM
#endif
    MCAPI static struct TickingSystemWithInfo createStartGlidingSystem();

};