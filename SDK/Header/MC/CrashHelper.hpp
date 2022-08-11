// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CrashHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHHELPER
public:
    class CrashHelper& operator=(class CrashHelper const &) = delete;
    CrashHelper(class CrashHelper const &) = delete;
    CrashHelper() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRASHHELPER
#endif
    MCAPI static void dumpHockeyAppCrashLog(std::string const &, std::string const &, std::string const &, std::string const &);
    MCAPI static class std::basic_string<wchar_t, struct std::char_traits<wchar_t>, class std::allocator<wchar_t>> const & getHockeyAppUri();

};