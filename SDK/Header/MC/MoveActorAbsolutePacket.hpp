// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum class Flags : uint8_t {
    GROUND = 0x1,
    TELEPORT = 0x2,
    FORCE_MOVE = 0x4
};
#undef BEFORE_EXTRA

class MoveActorAbsolutePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    unsigned long long mRuntimeId;
    uint8_t mFlags = 0x1;
    Vec3 mPos;
    uint8_t mRotX = 0;
    uint8_t mRotY = 0;
    uint8_t mRotYHead = 0;
	
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEACTORABSOLUTEPACKET
public:
    class MoveActorAbsolutePacket& operator=(class MoveActorAbsolutePacket const &) = delete;
    MoveActorAbsolutePacket(class MoveActorAbsolutePacket const &) = delete;
#endif


public:
    /*0*/ virtual ~MoveActorAbsolutePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEACTORABSOLUTEPACKET
public:
#endif
    MCAPI MoveActorAbsolutePacket(class MoveActorAbsoluteData const &);
    MCAPI MoveActorAbsolutePacket();


};