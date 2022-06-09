// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OceanMonumentSimpleRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTSIMPLEROOM
public:
    class OceanMonumentSimpleRoom& operator=(class OceanMonumentSimpleRoom const &) = delete;
    OceanMonumentSimpleRoom(class OceanMonumentSimpleRoom const &) = delete;
    OceanMonumentSimpleRoom() = delete;
#endif


public:
    /*0*/ virtual ~OceanMonumentSimpleRoom();
    /*2*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCEANMONUMENTSIMPLEROOM
public:
#endif


};