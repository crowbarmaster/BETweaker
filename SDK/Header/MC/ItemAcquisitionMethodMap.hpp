// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemAcquisitionMethodMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMACQUISITIONMETHODMAP
public:
    class ItemAcquisitionMethodMap& operator=(class ItemAcquisitionMethodMap const &) = delete;
    ItemAcquisitionMethodMap(class ItemAcquisitionMethodMap const &) = delete;
    ItemAcquisitionMethodMap() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMACQUISITIONMETHODMAP
public:
#endif

//private:

private:
    MCAPI static class BidirectionalUnorderedMap<enum ItemAcquisitionMethod, std::string> const mMap;


};