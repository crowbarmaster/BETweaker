// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ChunkLocalNoiseCache {

#define AFTER_EXTRA
// Add Member There
public:
struct CacheEntry {
    CacheEntry() = delete;
    CacheEntry(CacheEntry const&) = delete;
    CacheEntry(CacheEntry const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOCALNOISECACHE
public:
    class ChunkLocalNoiseCache& operator=(class ChunkLocalNoiseCache const &) = delete;
    ChunkLocalNoiseCache(class ChunkLocalNoiseCache const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKLOCALNOISECACHE
#endif
    MCAPI ChunkLocalNoiseCache();
    MCAPI ChunkLocalNoiseCache(class DividedPos2d<4>, int);
    MCAPI struct ChunkLocalNoiseCache::CacheEntry const & getCacheEntry(class DividedPos2d<4> const &) const;
    MCAPI void setCacheEntry(class DividedPos2d<4> const &, struct ChunkLocalNoiseCache::CacheEntry const &);
    MCAPI ~ChunkLocalNoiseCache();

};