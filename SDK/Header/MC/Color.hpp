// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Color {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLOR
public:
    class Color& operator=(class Color const &) = delete;
    Color(class Color const &) = delete;
    Color() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COLOR
#endif
    MCAPI bool operator==(class Color const &) const;
    MCAPI static class Color const BLACK;
    MCAPI static class Color const BLUE;
    MCAPI static class Color const CYAN;
    MCAPI static class Color const GREEN;
    MCAPI static class Color const GREY;
    MCAPI static class Color const NIL;
    MCAPI static class Color const ORANGE;
    MCAPI static class Color const PINK;
    MCAPI static class Color const PURPLE;
    MCAPI static class Color const RED;
    MCAPI static class Color const SHADE_DOWN;
    MCAPI static class Color const SHADE_NORTH_SOUTH;
    MCAPI static class Color const SHADE_UP;
    MCAPI static class Color const SHADE_WEST_EAST;
    MCAPI static class Color const WHITE;
    MCAPI static class Color const YELLOW;
    MCAPI static class Color fromARGB(int);

};