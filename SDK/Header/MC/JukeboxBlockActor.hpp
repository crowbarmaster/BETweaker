// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JukeboxBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUKEBOXBLOCKACTOR
public:
    class JukeboxBlockActor& operator=(class JukeboxBlockActor const&) = delete;
    JukeboxBlockActor(class JukeboxBlockActor const&) = delete;
    JukeboxBlockActor() = delete;
#endif

public:
    /*
    inline void startOpen(class Player& a0){
        void (JukeboxBlockActor::*rv)(class Player&);
        *((void**)&rv) = dlsym("?startOpen@JukeboxBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0));
    }
    inline void stopOpen(class Player& a0){
        void (JukeboxBlockActor::*rv)(class Player&);
        *((void**)&rv) = dlsym("?stopOpen@JukeboxBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player&>(a0));
    }
    inline int getMaxStackSize() const{
        int (JukeboxBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxStackSize@JukeboxBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline int getContainerSize() const{
        int (JukeboxBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainerSize@JukeboxBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline class ItemStack const& getItem(int a0) const{
        class ItemStack const& (JukeboxBlockActor::*rv)(int) const;
        *((void**)&rv) = dlsym("?getItem@JukeboxBlockActor@@UEBAAEBVItemStack@@H@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline class Container* getContainer(){
        class Container* (JukeboxBlockActor::*rv)();
        *((void**)&rv) = dlsym("?getContainer@JukeboxBlockActor@@UEAAPEAVContainer@@XZ");
        return (this->*rv)();
    }
    inline class Container const* getContainer() const{
        class Container const* (JukeboxBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainer@JukeboxBlockActor@@UEBAPEBVContainer@@XZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& a0){
        std::unique_ptr<class BlockActorDataPacket> (JukeboxBlockActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?_getUpdatePacket@JukeboxBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    inline void _onUpdatePacket(class CompoundTag const& a0, class BlockSource& a1){
        void (JukeboxBlockActor::*rv)(class CompoundTag const&, class BlockSource&);
        *((void**)&rv) = dlsym("?_onUpdatePacket@JukeboxBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const&>(a0), std::forward<class BlockSource&>(a1));
    }
    inline bool canPullOutItem(class BlockSource& a0, int a1, int a2, class ItemInstance const& a3) const{
        bool (JukeboxBlockActor::*rv)(class BlockSource&, int, int, class ItemInstance const&) const;
        *((void**)&rv) = dlsym("?canPullOutItem@JukeboxBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int>(a1), std::forward<int>(a2), std::forward<class ItemInstance const&>(a3));
    }
    inline bool canPushInItem(class BlockSource& a0, int a1, int a2, class ItemInstance const& a3) const{
        bool (JukeboxBlockActor::*rv)(class BlockSource&, int, int, class ItemInstance const&) const;
        *((void**)&rv) = dlsym("?canPushInItem@JukeboxBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<int>(a1), std::forward<int>(a2), std::forward<class ItemInstance const&>(a3));
    }
    inline void load(class Level& a0, class CompoundTag const& a1, class DataLoadHelper& a2){
        void (JukeboxBlockActor::*rv)(class Level&, class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) = dlsym("?load@JukeboxBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class Level&>(a0), std::forward<class CompoundTag const&>(a1), std::forward<class DataLoadHelper&>(a2));
    }
    inline void onChanged(class BlockSource& a0){
        void (JukeboxBlockActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?onChanged@JukeboxBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    inline bool save(class CompoundTag& a0) const{
        bool (JukeboxBlockActor::*rv)(class CompoundTag&) const;
        *((void**)&rv) = dlsym("?save@JukeboxBlockActor@@UEBA_NAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag&>(a0));
    }
    inline void serverInitItemStackIds(int a0, int a1, class std::function<void (int, class ItemStack const& )> a2){
        void (JukeboxBlockActor::*rv)(int, int, class std::function<void (int, class ItemStack const& )>);
        *((void**)&rv) = dlsym("?serverInitItemStackIds@JukeboxBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1), std::forward<class std::function<void (int, class ItemStack const& )>>(a2));
    }
    inline void setItem(int a0, class ItemStack const& a1){
        void (JukeboxBlockActor::*rv)(int, class ItemStack const&);
        *((void**)&rv) = dlsym("?setItem@JukeboxBlockActor@@UEAAXHAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const&>(a1));
    }
    inline void tick(class BlockSource& a0){
        void (JukeboxBlockActor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?tick@JukeboxBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0));
    }
    */
    MCAPI JukeboxBlockActor(class BlockPos const&);
    MCAPI class ItemStack const& getRecord() const;
    MCAPI bool isRecordPlaying() const;
    MCAPI void setRecord(class ItemStack const&);
    MCAPI void stopPlayingRecord(class BlockSource&) const;

protected:

private:
    MCAPI void _onChanged(class BlockSource&, enum LevelSoundEvent);
    MCAPI void _spawnMusicParticles(class Level&, float);

};