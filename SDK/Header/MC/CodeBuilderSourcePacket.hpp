// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CodeBuilderSourcePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERSOURCEPACKET
public:
    class CodeBuilderSourcePacket& operator=(class CodeBuilderSourcePacket const&) = delete;
    CodeBuilderSourcePacket(class CodeBuilderSourcePacket const&) = delete;
#endif

public:
    /*0*/ virtual ~CodeBuilderSourcePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    MCAPI CodeBuilderSourcePacket();

protected:

private:

};