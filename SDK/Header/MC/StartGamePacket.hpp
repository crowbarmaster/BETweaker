// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StartGamePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTGAMEPACKET
public:
    class StartGamePacket& operator=(class StartGamePacket const &) = delete;
    StartGamePacket(class StartGamePacket const &) = delete;
#endif


public:
    /*0*/ virtual ~StartGamePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STARTGAMEPACKET
public:
#endif
    MCAPI StartGamePacket(class LevelSettings const &, struct ActorUniqueID, class ActorRuntimeID, enum GameType, bool, class Vec3 const &, class Vec2 const &, std::string const &, std::string const &, class ContentIdentity const &, std::string const &, class BlockDefinitionGroup const &, bool, class CompoundTag, struct PlayerMovementSettings const &, std::string const &, class mce::UUID const &, unsigned __int64, int, unsigned __int64);
    MCAPI StartGamePacket();


};