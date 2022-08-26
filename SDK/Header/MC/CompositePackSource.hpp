// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CompositePackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSITEPACKSOURCE
public:
    class CompositePackSource& operator=(class CompositePackSource const &) = delete;
    CompositePackSource(class CompositePackSource const &) = delete;
#endif

public:
    /*0*/ virtual ~CompositePackSource();
    /*1*/ virtual void forEachPackConst(class std::function<void (class Pack const &)>) const;
    /*2*/ virtual void forEachPack(class std::function<void (class Pack &)>);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOSITEPACKSOURCE
#endif
    MCAPI CompositePackSource();
    MCAPI CompositePackSource(std::vector<class PackSource *> &&);
    MCAPI void addPackSource(class PackSource *);
    MCAPI void clear();

};