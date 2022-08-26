// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class UserEntityIdentifierComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_USERENTITYIDENTIFIERCOMPONENT
public:
    class UserEntityIdentifierComponent& operator=(class UserEntityIdentifierComponent const &) = delete;
    UserEntityIdentifierComponent(class UserEntityIdentifierComponent const &) = delete;
    UserEntityIdentifierComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_USERENTITYIDENTIFIERCOMPONENT
#endif
    MCAPI UserEntityIdentifierComponent(class NetworkIdentifier const &, enum SubClientId, class mce::UUID, std::string const &, std::unique_ptr<class Certificate>);
    MCAPI UserEntityIdentifierComponent(class UserEntityIdentifierComponent &&);
    MCAPI bool isPrimaryClient() const;
    MCAPI class UserEntityIdentifierComponent & operator=(class UserEntityIdentifierComponent &&);
    MCAPI ~UserEntityIdentifierComponent();
    MCAPI static class UserEntityIdentifierComponent * tryGetFromEntity(class EntityContext &);

};