// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlayerCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERCOMMANDORIGIN
public:
    class PlayerCommandOrigin& operator=(class PlayerCommandOrigin const &) = delete;
    PlayerCommandOrigin(class PlayerCommandOrigin const &) = delete;
    PlayerCommandOrigin() = delete;
#endif

public:
    /*0*/ virtual ~PlayerCommandOrigin();
    /*1*/ virtual std::string const & getRequestId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual class BlockPos getBlockPosition() const;
    /*4*/ virtual class Vec3 getWorldPosition() const;
    /*5*/ virtual class std::optional<class Vec2> getRotation() const;
    /*6*/ virtual class Level * getLevel() const;
    /*7*/ virtual class Dimension * getDimension() const;
    /*8*/ virtual class Actor * getEntity() const;
    /*9*/ virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /*10*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*11*/ virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /*12*/ virtual class std::optional<class Vec3> getCursorHitPos() const;
    /*15*/ virtual bool canUseAbility(enum AbilitiesIndex) const;
    /*18*/ virtual bool isSelectorExpansionAllowed() const;
    /*19*/ virtual class NetworkIdentifier const & getSourceId() const;
    /*20*/ virtual enum SubClientId getSourceSubId() const;
    /*22*/ virtual struct CommandOriginIdentity getIdentity() const;
    /*23*/ virtual enum CommandOriginType getOriginType() const;
    /*29*/ virtual class CompoundTag serialize() const;
    /*30*/ virtual bool isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERCOMMANDORIGIN
#endif
    MCAPI PlayerCommandOrigin(class Player &);
    MCAPI static std::unique_ptr<class PlayerCommandOrigin> load(class CompoundTag const &, class Level &);

};