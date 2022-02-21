// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace PlayerCapabilities {

#define AFTER_EXTRA
// Add Member There
struct ISharedController {
    ISharedController() = delete;
    ISharedController(ISharedController const&) = delete;
    ISharedController(ISharedController const&&) = delete;
};

#undef AFTER_EXTRA
    MCAPI std::unique_ptr<struct PlayerCapabilities::ISharedController> createController(class Level const&);

};