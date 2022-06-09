// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VibrationDataComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONDATACOMPONENT
public:
    class VibrationDataComponent& operator=(class VibrationDataComponent const &) = delete;
    VibrationDataComponent(class VibrationDataComponent const &) = delete;
    VibrationDataComponent() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VIBRATIONDATACOMPONENT
public:
#endif
    MCAPI void clearLastVibrationPos();
    MCAPI class std::optional<class BlockPos> const & getLastVibrationPos() const;
    MCAPI class std::optional<unsigned __int64> getTicksSinceLastVibration(class ILevel const &) const;
    MCAPI void setLastVibrationPos(class BlockPos, struct Tick);


};