// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SemVersion {

#define AFTER_EXTRA
    // Add Member There
public:
    enum MatchType;
    enum ParseOption;
    struct any_version_constructor {
        any_version_constructor() = delete;
        any_version_constructor(any_version_constructor const&) = delete;
        any_version_constructor(any_version_constructor const&&) = delete;
    };
    unsigned short major{}, minor{}, patch{};     // 0, 2, 4
    std::string pre_release, build_meta, full_version_string;  // 8, 40, 72
    bool valid_version{}, any_version{};          // 104, 105

#undef AFTER_EXTRA
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SEMVERSION
#endif
    MCAPI SemVersion();
    MCAPI SemVersion(struct SemVersion::any_version_constructor);
    MCAPI SemVersion(unsigned short, unsigned short, unsigned short, std::string const &, std::string const &);
    MCAPI SemVersion(class SemVersion const &);
    MCAPI std::string const & asString() const;
    MCAPI unsigned short getMajor() const;
    MCAPI unsigned short getMinor() const;
    MCAPI unsigned short getPatch() const;
    MCAPI std::string const & getPreRelease() const;
    MCAPI bool isAnyVersion() const;
    MCAPI bool isValid() const;
    MCAPI bool operator<(class SemVersion const &) const;
    MCAPI bool operator<=(class SemVersion const &) const;
    MCAPI class SemVersion & operator=(class SemVersion const &);
    MCAPI bool operator==(class SemVersion const &) const;
    MCAPI bool operator>(class SemVersion const &) const;
    MCAPI bool operator>=(class SemVersion const &) const;
    MCAPI bool satisfies(class SemVersion const &) const;
    MCAPI ~SemVersion();
    MCAPI static struct SemVersion::any_version_constructor const AnyVersionConstructor;
    MCAPI static enum SemVersion::MatchType fromJson(class Json::Value const &, class SemVersion &, enum SemVersion::ParseOption);
    MCAPI static enum SemVersion::MatchType fromJsonArray(class Json::Value const &, class SemVersion &);
    MCAPI static enum SemVersion::MatchType fromString(std::string const &, class SemVersion &, enum SemVersion::ParseOption);

//private:
    MCAPI void _parseVersionToString();

private:

};