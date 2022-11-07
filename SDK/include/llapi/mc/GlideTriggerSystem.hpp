// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GlideTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDETRIGGERSYSTEM
public:
    class GlideTriggerSystem& operator=(class GlideTriggerSystem const &) = delete;
    GlideTriggerSystem(class GlideTriggerSystem const &) = delete;
    GlideTriggerSystem() = delete;
#endif

public:
    /*0*/ virtual ~GlideTriggerSystem();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, struct PlayerInputRequestComponent>, struct Read<struct AABBShapeComponent, struct AbilitiesComponent, class FlagComponent<struct ArmorFlyEnabledFlag>, struct ConstBlockSourceComponent, struct FallFlyTicksComponent, struct MoveInputComponent, struct StateVectorComponent, struct SynchedActorDataComponent, struct VanillaClientGameplayComponent, class FlagComponent<struct InWaterFlag>>, struct Write<>, struct AddRemove<class FlagComponent<struct StopGlidingRequestFlag>>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GLIDETRIGGERSYSTEM
#endif
    MCAPI static void _tickGlideTriggerSystem(class StrictEntityContext &, struct AABBShapeComponent const &, struct AbilitiesComponent const &, struct ConstBlockSourceComponent const &, struct FallFlyTicksComponent const &, struct MoveInputComponent const &, struct StateVectorComponent const &, struct SynchedActorDataComponent const &, struct VanillaClientGameplayComponent const &, class Optional<class FlagComponent<struct ArmorFlyEnabledFlag> const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct StopGlidingRequestFlag>> &);
    MCAPI static struct TickingSystemWithInfo createSystem();

};