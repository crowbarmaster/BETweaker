// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlaySoundPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[56];
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYSOUNDPACKET
public:
    class PlaySoundPacket& operator=(class PlaySoundPacket const &) = delete;
    PlaySoundPacket(class PlaySoundPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~PlaySoundPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYSOUNDPACKET
#endif
    MCAPI PlaySoundPacket();
    MCAPI PlaySoundPacket(std::string, class Vec3 const &, float, float);

};