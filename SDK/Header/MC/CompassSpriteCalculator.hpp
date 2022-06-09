// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompassSpriteCalculator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPASSSPRITECALCULATOR
public:
    class CompassSpriteCalculator& operator=(class CompassSpriteCalculator const &) = delete;
    CompassSpriteCalculator(class CompassSpriteCalculator const &) = delete;
    CompassSpriteCalculator() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPASSSPRITECALCULATOR
public:
#endif
    MCAPI CompassSpriteCalculator(class std::function<class BlockPos (class BlockSource const *, class Actor *)>, class std::function<bool (class BlockSource const *, class Actor *)>, float, float);
    MCAPI int getFrame() const;
    MCAPI int update(class Actor &, bool);
    MCAPI int updateFromPosition(class BlockSource const *, class BlockPos const &, float, float, float, bool, bool, bool);
    MCAPI int updateFromPosition(class BlockSource const *, class Actor *, float, float, float, bool, bool);
    MCAPI ~CompassSpriteCalculator();
    MCAPI static class std::function<bool (class BlockSource const *, class Actor *)> isInLastDeathDimension();
    MCAPI static class std::function<bool (class BlockSource const *, class Actor *)> isInOverworldDimension();
    MCAPI static class std::function<class BlockPos (class BlockSource const *, class Actor *)> pointTowardsLastDeathLocation();
    MCAPI static class std::function<class BlockPos (class BlockSource const *, class Actor *)> pointTowardsSpawnPoint();


};