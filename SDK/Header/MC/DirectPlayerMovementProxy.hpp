// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DirectPlayerMovementProxy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTPLAYERMOVEMENTPROXY
public:
    class DirectPlayerMovementProxy& operator=(class DirectPlayerMovementProxy const &) = delete;
    DirectPlayerMovementProxy(class DirectPlayerMovementProxy const &) = delete;
    DirectPlayerMovementProxy() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTPLAYERMOVEMENTPROXY
    MCVAPI class Player * _getPlayer();
    MCVAPI void _onMovePlayerPacketNormal(class Vec3 const &, class Vec2 const &, float);
    MCVAPI void _resetPos(bool);
    MCVAPI void _setPositionMode(int);
    MCVAPI bool areHandsBusy() const;
    MCVAPI void checkMovementStats(class Vec3 const &);
    MCVAPI void fireEventPersonaEmotePlayed(bool);
    MCVAPI class LayeredAbilities const & getAbilities() const;
    MCVAPI bool getAbilityBool(enum AbilitiesIndex) const;
    MCVAPI float getAbilityFloat(enum AbilitiesIndex) const;
    MCVAPI float getBob() const;
    MCVAPI struct IClientInstanceProxy * getClientInstance();
    MCVAPI struct IClientInstanceProxy const * getClientInstance() const;
    MCVAPI struct Tick const & getCurrentTick() const;
    MCVAPI int getGlidingTicks() const;
    MCVAPI enum InputMode getInputMode() const;
    MCVAPI float getItemUseMovementModifier() const;
    MCVAPI float getJumpRidingScale();
    MCVAPI float getLastBob() const;
    MCVAPI class Vec3 getLastDelta() const;
    MCVAPI class Vec3 getLastPos() const;
    MCVAPI enum LoadingState getLoadingState() const;
    MCVAPI class MoveInputHandler * getMoveInputHandler();
    MCVAPI enum ClientPlayMode getPlayMode() const;
    MCVAPI float getPlayerPaddleForce(enum Side) const;
    MCVAPI float getVRMoveAdjustAngle() const;
    MCVAPI bool hasMoveInput() const;
    MCVAPI bool isAdventureSettingsAutoJump();
    MCVAPI bool isArmorFlyEnabled() const;
    MCVAPI bool isAutoJumpEnabled() const;
    MCVAPI bool isAutoJumping() const;
    MCVAPI bool isEmoting();
    MCVAPI bool isFlying() const;
    MCVAPI bool isLocalPlayer() const;
    MCVAPI bool isPaddling(enum Side) const;
    MCVAPI bool isServerAuthoritativeMovement() const;
    MCVAPI bool isSleeping() const;
    MCVAPI bool isSlowedByItemUse() const;
    MCVAPI bool isSpectator() const;
    MCVAPI bool isUsingItem() const;
    MCVAPI void registerFramewiseActionOrStop();
    MCVAPI void sendAdventureSettingsPacket();
    MCVAPI void sendClientAuthInput();
    MCVAPI void sendInput();
    MCVAPI void sendPacket(class PlayerActionPacket &);
    MCVAPI void sendPacket(class PassengerJumpPacket &);
    MCVAPI void sendPlayerInput();
    MCVAPI void sendPlayerMove();
    MCVAPI void sendPosition();
    MCVAPI void sendRequestAbilityPacket(enum AbilitiesIndex, bool);
    MCVAPI void setAbilityBool(enum AbilitiesIndex, bool);
    MCVAPI void setAbilityFloat(enum AbilitiesIndex, float);
    MCVAPI void setAutoJumping(bool);
    MCVAPI void setBob(float);
    MCVAPI void setCurrentLocalMoveVelocity(class Vec2 const &);
    MCVAPI void setEmotingStatus(bool);
    MCVAPI void setHandsBusy(bool);
    MCVAPI void setHasMoveInput(bool);
    MCVAPI void setJumpRidingScale(float);
    MCVAPI void setLastBob(float);
    MCVAPI void setLastDelta(class Vec3 const &);
    MCVAPI void setLastPos(class Vec3 const &);
    MCVAPI void setPlayerPaddleForce(enum Side, float);
    MCVAPI void setWasAutoJumping(bool);
    MCVAPI bool shouldSendPosition() const;
    MCVAPI void startGliding();
    MCVAPI void stopGliding();
    MCVAPI struct IPlayerMovementProxy const * tryAsPlayer() const;
    MCVAPI struct IPlayerMovementProxy * tryAsPlayer();
    MCVAPI struct PlayerActionComponent * tryGetPlayerActionComponent();
    MCVAPI void updateClientPlayerInputState();
    MCVAPI void updateTouch();
    MCVAPI bool wasAutoJumping() const;
#endif

};