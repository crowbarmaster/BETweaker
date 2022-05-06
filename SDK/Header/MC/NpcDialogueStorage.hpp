// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NpcDialogueStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDIALOGUESTORAGE
public:
    class NpcDialogueStorage& operator=(class NpcDialogueStorage const &) = delete;
    NpcDialogueStorage(class NpcDialogueStorage const &) = delete;
    NpcDialogueStorage() = delete;
#endif

public:
    MCAPI struct NpcDialogueScene const * getScene(std::string const &) const;
    MCAPI struct NpcDialogueScene * getScene(std::string const &);
    MCAPI void init(class ResourcePackManager &);
    MCAPI bool parseFile(std::string const &, std::string const &, enum CurrentCmdVersion);

protected:

private:

};