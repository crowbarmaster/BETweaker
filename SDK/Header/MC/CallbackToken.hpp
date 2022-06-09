// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CallbackToken {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CALLBACKTOKEN
public:
    class CallbackToken& operator=(class CallbackToken const &) = delete;
    CallbackToken(class CallbackToken const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CALLBACKTOKEN
public:
#endif
    MCAPI CallbackToken();
    MCAPI CallbackToken(class CallbackToken &&);
    MCAPI CallbackToken(class std::weak_ptr<class CallbackTokenCancelState>);
    MCAPI void cancelCallback();
    MCAPI class CallbackToken & operator=(class CallbackToken &&);
    MCAPI void release();
    MCAPI ~CallbackToken();


};