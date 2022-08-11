// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "VillagePiece.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SmallTemple : public VillagePiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMALLTEMPLE
public:
    class SmallTemple& operator=(class SmallTemple const &) = delete;
    SmallTemple(class SmallTemple const &) = delete;
    SmallTemple() = delete;
#endif

public:
    /*0*/ virtual ~SmallTemple();
    /*2*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual bool postProcess(class BlockSource *, class Random &, class BoundingBox const &);
    /*5*/ virtual void postProcessMobsAt(class BlockSource *, class Random &, class BoundingBox const &);
    /*11*/ virtual int getVillagerProfession(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SMALLTEMPLE
#endif

};