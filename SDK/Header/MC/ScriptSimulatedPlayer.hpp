// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptSimulatedPlayer : public ScriptObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSIMULATEDPLAYER
public:
    class ScriptSimulatedPlayer& operator=(class ScriptSimulatedPlayer const &) = delete;
    ScriptSimulatedPlayer(class ScriptSimulatedPlayer const &) = delete;
    ScriptSimulatedPlayer() = delete;
#endif


public:
    /*0*/ virtual ~ScriptSimulatedPlayer();
    /*4*/ virtual class Scripting::Result<std::string> getNameTag() const;
    /*5*/ virtual class Scripting::Result<void> setNameTag(std::string const &) const;
    /*6*/ virtual class Scripting::Result<bool> getSneaking() const;
    /*7*/ virtual class Scripting::Result<void> setSneaking(bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSIMULATEDPLAYER
public:
#endif
    MCAPI ScriptSimulatedPlayer(class Player const &, class Scripting::WeakLifetimeScope const &);
    MCAPI class Scripting::Result<bool> addExperience(int) const;
    MCAPI class Scripting::Result<bool> attack() const;
    MCAPI class Scripting::Result<bool> attackEntity(class ScriptActor const &) const;
    MCAPI class Scripting::Result<bool> breakBlock(class BlockPos const &, int) const;
    MCAPI class Scripting::Result<struct ScriptXYRotation> getHeadRotation();
    MCAPI class Scripting::Result<bool> giveItem(class ScriptItemStack const &, bool) const;
    MCAPI class Scripting::Result<bool> interact() const;
    MCAPI class Scripting::Result<bool> interactWithBlock(class BlockPos const &, int) const;
    MCAPI class Scripting::Result<bool> interactWithEntity(class ScriptActor const &) const;
    MCAPI class Scripting::Result<bool> jump() const;
    MCAPI class Scripting::Result<void> lookAtBlock(class BlockPos const &) const;
    MCAPI class Scripting::Result<void> lookAtEntity(class ScriptActor const &) const;
    MCAPI class Scripting::Result<void> lookAtLocation(class Vec3 const &) const;
    MCAPI class Scripting::Result<void> move(float, float, float) const;
    MCAPI class Scripting::Result<void> moveRelative(float, float, float) const;
    MCAPI class Scripting::Result<void> moveToBlock(class BlockPos const &, float) const;
    MCAPI class Scripting::Result<void> moveToLocation(class Vec3 const &, float) const;
    MCAPI class Scripting::Result<struct ScriptNavigationResult> navigateToBlock(class BlockPos const &, float) const;
    MCAPI class Scripting::Result<struct ScriptNavigationResult> navigateToEntity(class ScriptActor const &, float) const;
    MCAPI class Scripting::Result<struct ScriptNavigationResult> navigateToLocation(class Vec3 const &, float) const;
    MCAPI class Scripting::Result<void> navigateToLocations(std::vector<class Vec3> const &, float) const;
    MCAPI class Scripting::Result<void> rotateBody(float) const;
    MCAPI class Scripting::Result<void> setBodyRotation(float) const;
    MCAPI class Scripting::Result<void> setGameMode(enum GameType);
    MCAPI class Scripting::Result<bool> setItem(class ScriptItemStack const &, int, bool) const;
    MCAPI class Scripting::Result<void> stopBreakingBlock() const;
    MCAPI class Scripting::Result<void> stopInteracting() const;
    MCAPI class Scripting::Result<void> stopMoving() const;
    MCAPI class Scripting::Result<void> stopUsingItem() const;
    MCAPI class SimulatedPlayer * tryGetSimulatedPlayer() const;
    MCAPI class Scripting::Result<bool> useItem(class ScriptItemStack const &) const;
    MCAPI class Scripting::Result<bool> useItemInSlot(int) const;
    MCAPI class Scripting::Result<bool> useItemInSlotOnBlock(int, class BlockPos const &, int, float, float) const;
    MCAPI class Scripting::Result<bool> useItemOnBlock(class ScriptItemStack const &, class BlockPos const &, int, float, float) const;
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptSimulatedPlayer> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptSimulatedPlayer> getHandle(class Player const &, class Scripting::WeakLifetimeScope const &);

//private:
    MCAPI static class gametest::BaseGameTestHelper const * _getHelper(class SimulatedPlayer const &);
    MCAPI static class std::optional<struct gametest::GameTestError> _toWorld(class SimulatedPlayer &, class BlockPos *, unsigned char *, class Vec3 *);
    MCAPI static struct ScriptNavigationResult _worldToLocalNavigationResult(class SimulatedPlayer &, struct ScriptNavigationResult);

private:


};