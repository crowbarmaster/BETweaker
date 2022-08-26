// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RegionHillsOperationNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REGIONHILLSOPERATIONNODE
public:
    class RegionHillsOperationNode& operator=(class RegionHillsOperationNode const &) = delete;
    RegionHillsOperationNode(class RegionHillsOperationNode const &) = delete;
    RegionHillsOperationNode() = delete;
#endif

public:
    /*0*/ virtual ~RegionHillsOperationNode();
    /*3*/ virtual void _fillArea(class OperationNodeDetails::WorkingData<class Biome *, class Biome *> &, class Pos2d const &, class Pos2d const &, int) const;
    /*4*/ virtual class std::tuple<class Pos2d, class Pos2d> _getAreaRead(class Pos2d const &, class Pos2d const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REGIONHILLSOPERATIONNODE
#endif
    MCAPI RegionHillsOperationNode(unsigned int, class std::shared_ptr<class OperationNode<class Biome *, class Pos2d>> &, class std::shared_ptr<class OperationNode<int, class Pos2d>> &, class BiomeRegistry const &);

};