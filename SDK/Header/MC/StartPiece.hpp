// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Well.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StartPiece : public Well {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STARTPIECE
public:
    class StartPiece& operator=(class StartPiece const &) = delete;
    StartPiece(class StartPiece const &) = delete;
    StartPiece() = delete;
#endif

public:
    /*0*/ virtual ~StartPiece();
    /*2*/ virtual enum StructurePieceType getType() const;
    /*3*/ virtual void addChildren(class StructurePiece *, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STARTPIECE
#endif
    MCAPI StartPiece(class BiomeSource *, class Random &, int, int, std::vector<class PieceWeight> &, int, bool);

};