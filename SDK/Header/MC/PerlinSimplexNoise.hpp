// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PerlinSimplexNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERLINSIMPLEXNOISE
public:
    class PerlinSimplexNoise& operator=(class PerlinSimplexNoise const &) = delete;
    PerlinSimplexNoise() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PERLINSIMPLEXNOISE
#endif
    MCAPI PerlinSimplexNoise(unsigned int, int);
    MCAPI PerlinSimplexNoise(class IRandom &, int, bool);
    MCAPI PerlinSimplexNoise(class PerlinSimplexNoise const &);
    MCAPI float * getRegion(float *, class Vec2 const &, int, int, class Vec2 const &, float, float) const;
    MCAPI float getValue(class Vec3 const &) const;
    MCAPI float getValue(float, float) const;
    MCAPI float getValueNormalized(class Vec3 const &) const;
    MCAPI float getValueNormalized(float, float) const;
    MCAPI ~PerlinSimplexNoise();

//private:
    MCAPI void _init(class IRandom &, bool);

private:

};