// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SpatialActorNetworkData {

#define AFTER_EXTRA
// Add Member There
public:
struct DebugSpatialPacketModifiers {
    DebugSpatialPacketModifiers() = delete;
    DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&) = delete;
    DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&&) = delete;
};
struct DebugSendRateModifiers {
    DebugSendRateModifiers() = delete;
    DebugSendRateModifiers(DebugSendRateModifiers const&) = delete;
    DebugSendRateModifiers(DebugSendRateModifiers const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPATIALACTORNETWORKDATA
public:
    class SpatialActorNetworkData& operator=(class SpatialActorNetworkData const &) = delete;
    SpatialActorNetworkData(class SpatialActorNetworkData const &) = delete;
    SpatialActorNetworkData() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPATIALACTORNETWORKDATA
public:
#endif
    MCAPI SpatialActorNetworkData(class Actor &);
    MCAPI void enableAutoSend(bool);
    MCAPI class Vec3 getLastSentPositionForAddingEntity();
    MCAPI class Vec2 getLastSentRotationForAddingEntity();
    MCAPI float getLastSentYHeadRotationForAddingEntity();
    MCAPI void handleClientData(class MoveActorAbsoluteData const &);
    MCAPI bool isAutoSendEnabled() const;
    MCAPI void sendUpdate(bool, bool, bool);
    MCAPI bool shouldSendMotionPredictionHintsPacket() const;
    MCAPI bool shouldSendUpdate(bool, bool) const;
    MCAPI void teleportEntity(class Vec3 const &, class Vec2 const &, float);
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers & getDebugSpatialPacketModifiers();

//private:
    MCAPI std::vector<struct NetworkIdentifierWithSubId> _findRelevantPlayersToSendUpdate();
    MCAPI unsigned __int64 _getOptimizationScore(struct ActorUniqueID const &) const;
    MCAPI void _initializeLastSentValues();
    MCAPI bool _shouldUpdateBasedOptimizationOnScore(struct ActorUniqueID const &) const;

private:
    MCAPI static struct SpatialActorNetworkData::DebugSendRateModifiers mDebugSendRateModifiers;
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers mDebugSpatialPacketModifiers;


};