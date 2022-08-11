// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WSConnectPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WSCONNECTPACKET
public:
    class WSConnectPacket& operator=(class WSConnectPacket const &) = delete;
    WSConnectPacket(class WSConnectPacket const &) = delete;
    WSConnectPacket() = delete;
#endif

public:
    /*0*/ virtual ~WSConnectPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum PacketReadResult read(class BinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WSCONNECTPACKET
#endif

};