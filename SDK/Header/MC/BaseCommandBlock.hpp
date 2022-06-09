// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BaseCommandBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECOMMANDBLOCK
public:
    class BaseCommandBlock& operator=(class BaseCommandBlock const &) = delete;
    BaseCommandBlock(class BaseCommandBlock const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECOMMANDBLOCK
public:
#endif
    MCAPI BaseCommandBlock();
    MCAPI std::string const & getCommand() const;
    MCAPI std::string getLastOutput() const;
    MCAPI std::string const & getName() const;
    MCAPI std::string const & getRawName() const;
    MCAPI int getSuccessCount() const;
    MCAPI int getTickDelay() const;
    MCAPI bool getTrackOutput() const;
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    MCAPI bool performCommand(class BlockSource &, struct ActorUniqueID const &);
    MCAPI bool performCommand(class BlockSource &, class BlockPos const &, bool &);
    MCAPI bool save(class CompoundTag &) const;
    MCAPI void setCommand(class BlockSource &, struct ActorUniqueID const &, std::string const &);
    MCAPI void setCommand(class BlockSource &, class BlockPos const &, std::string const &);
    MCAPI void setLastOutput(std::string const &, std::vector<std::string> const &);
    MCAPI void setName(std::string const &);
    MCAPI void setShouldExecuteOnFirstTick(bool);
    MCAPI void setSuccessCount(int);
    MCAPI void setTickDelay(int);
    MCAPI void setTrackOutput(bool);
    MCAPI bool shouldExecuteOnFirstTick() const;
    MCAPI ~BaseCommandBlock();

//private:
    MCAPI bool _performCommand(class BlockSource &, class CommandOrigin const &, bool &);
    MCAPI void _setCommand(class BlockSource &, class CommandOrigin const &, std::string const &);
    MCAPI void compile(class CommandOrigin const &, class Level &);

private:
    MCAPI static std::string const DefaultCommandBlockName;


};