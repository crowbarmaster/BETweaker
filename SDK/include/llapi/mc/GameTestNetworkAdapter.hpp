// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GameTestNetworkAdapter {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTNETWORKADAPTER
public:
    class GameTestNetworkAdapter& operator=(class GameTestNetworkAdapter const &) = delete;
    GameTestNetworkAdapter(class GameTestNetworkAdapter const &) = delete;
    GameTestNetworkAdapter() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETESTNETWORKADAPTER
#endif
    MCAPI GameTestNetworkAdapter(class MinecraftGameTest &);
    MCAPI void rungametest(class gsl::not_null<class PacketSender *>, std::string const &, class Dimension &, struct gametest::TestParameters const &);

};