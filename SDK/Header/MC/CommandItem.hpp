// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CommandItem {

#define AFTER_EXTRA
#define DISABLE_CONSTRUCTOR_PREVENTION_COMMANDITEM
// Add Member There
    short unk0; //0
    bool unk2;  //2
    int itemId; //4

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDITEM
public:
    class CommandItem& operator=(class CommandItem const &) = delete;
    CommandItem(class CommandItem const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDITEM
#endif
    MCAPI CommandItem();
    MCAPI CommandItem(int, short, bool);
    MCAPI CommandItem(unsigned __int64);
    MCAPI class std::optional<class ItemInstance> createInstance(int, int, class CommandOutput *, bool) const;
    MCAPI int getId() const;
    MCAPI operator bool() const;
    MCAPI operator unsigned __int64() const;

};