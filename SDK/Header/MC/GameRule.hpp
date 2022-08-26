// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GameRule {

#define AFTER_EXTRA
// Add Member There
public:
union Value;
class ValidationError {
public:
    ValidationError() = delete;
    ValidationError(ValidationError const&) = delete;
    ValidationError(ValidationError const&&) = delete;
};
enum Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULE
public:
    class GameRule& operator=(class GameRule const &) = delete;
    GameRule() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMERULE
#endif
    MCAPI GameRule(std::string const &, bool);
    MCAPI GameRule(class GameRule &&);
    MCAPI GameRule(class GameRule const &);
    MCAPI bool allowUseInCommand() const;
    MCAPI bool canBeModifiedByPlayer() const;
    MCAPI bool getBool() const;
    MCAPI float getFloat() const;
    MCAPI int getInt() const;
    MCAPI std::string const & getName() const;
    MCAPI enum GameRule::Type getType() const;
    MCAPI union GameRule::Value const & getValue() const;
    MCAPI class GameRule & operator=(class GameRule &&);
    MCAPI bool requiresCheats() const;
    MCAPI void resetType(enum GameRule::Type);
    MCAPI bool setBool(bool, bool *, class GameRule::ValidationError *);
    MCAPI bool setFloat(float, bool *, class GameRule::ValidationError *);
    MCAPI bool setInt(int, bool *, class GameRule::ValidationError *);
    MCAPI class GameRule & setTagDataNotFoundCallback(class std::function<void (class GameRule &)>);
    MCAPI class GameRule & setValidateValueCallback(class std::function<bool (union GameRule::Value const &, class GameRule::ValidationError *)>);
    MCAPI ~GameRule();

//protected:
    MCAPI class GameRule & _setDefaultValue(int);
    MCAPI class GameRule & _setDefaultValue(bool);

//private:
    MCAPI bool _set(union GameRule::Value const &, bool *, class GameRule::ValidationError *);

protected:

private:

};