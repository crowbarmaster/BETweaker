// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PackMetadata {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKMETADATA
public:
    class PackMetadata& operator=(class PackMetadata const &) = delete;
    PackMetadata(class PackMetadata const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKMETADATA
#endif
    MCAPI PackMetadata();
    MCAPI PackMetadata(std::unique_ptr<struct EducationMetadata>);

};