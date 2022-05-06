// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BeaconBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEACONBLOCKACTOR
public:
    class BeaconBlockActor& operator=(class BeaconBlockActor const &) = delete;
    BeaconBlockActor(class BeaconBlockActor const &) = delete;
    BeaconBlockActor() = delete;
#endif

public:
    /*
    inline bool hasAlphaLayer() const{
        bool (BeaconBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?hasAlphaLayer@BeaconBlockActor@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void setItem(int a0, class ItemStack const & a1){
        void (BeaconBlockActor::*rv)(int, class ItemStack const &);
        *((void**)&rv) = dlsym("?setItem@BeaconBlockActor@@UEAAXHAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<class ItemStack const &>(a1));
    }
    inline void startOpen(class Player & a0){
        void (BeaconBlockActor::*rv)(class Player &);
        *((void**)&rv) = dlsym("?startOpen@BeaconBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player &>(a0));
    }
    inline void stopOpen(class Player & a0){
        void (BeaconBlockActor::*rv)(class Player &);
        *((void**)&rv) = dlsym("?stopOpen@BeaconBlockActor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player &>(a0));
    }
    inline void removeItem(int a0, int a1){
        void (BeaconBlockActor::*rv)(int, int);
        *((void**)&rv) = dlsym("?removeItem@BeaconBlockActor@@UEAAXHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline int getContainerSize() const{
        int (BeaconBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainerSize@BeaconBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline class ItemStack const & getItem(int a0) const{
        class ItemStack const & (BeaconBlockActor::*rv)(int) const;
        *((void**)&rv) = dlsym("?getItem@BeaconBlockActor@@UEBAAEBVItemStack@@H@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline void serverInitItemStackIds(int a0, int a1, class std::function<void (int, class ItemStack const &)> a2){
        void (BeaconBlockActor::*rv)(int, int, class std::function<void (int, class ItemStack const &)>);
        *((void**)&rv) = dlsym("?serverInitItemStackIds@BeaconBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1), std::forward<class std::function<void (int, class ItemStack const &)>>(a2));
    }
    inline int getMaxStackSize() const{
        int (BeaconBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxStackSize@BeaconBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline class Container const * getContainer() const{
        class Container const * (BeaconBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getContainer@BeaconBlockActor@@UEBAPEBVContainer@@XZ");
        return (this->*rv)();
    }
    inline class Container * getContainer(){
        class Container * (BeaconBlockActor::*rv)();
        *((void**)&rv) = dlsym("?getContainer@BeaconBlockActor@@UEAAPEAVContainer@@XZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource & a0){
        std::unique_ptr<class BlockActorDataPacket> (BeaconBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?_getUpdatePacket@BeaconBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline void _onUpdatePacket(class CompoundTag const & a0, class BlockSource & a1){
        void (BeaconBlockActor::*rv)(class CompoundTag const &, class BlockSource &);
        *((void**)&rv) = dlsym("?_onUpdatePacket@BeaconBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const &>(a0), std::forward<class BlockSource &>(a1));
    }
    inline std::string getName() const{
        std::string (BeaconBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getName@BeaconBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline void load(class Level & a0, class CompoundTag const & a1, class DataLoadHelper & a2){
        void (BeaconBlockActor::*rv)(class Level &, class CompoundTag const &, class DataLoadHelper &);
        *((void**)&rv) = dlsym("?load@BeaconBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class Level &>(a0), std::forward<class CompoundTag const &>(a1), std::forward<class DataLoadHelper &>(a2));
    }
    inline bool save(class CompoundTag & a0) const{
        bool (BeaconBlockActor::*rv)(class CompoundTag &) const;
        *((void**)&rv) = dlsym("?save@BeaconBlockActor@@UEBA_NAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag &>(a0));
    }
    inline void tick(class BlockSource & a0){
        void (BeaconBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?tick@BeaconBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    */
    MCAPI BeaconBlockActor(class BlockPos const &);
    MCAPI void checkShapeAndAchievement(class BlockSource &);
    MCAPI class CompoundTag getBeaconData();
    MCAPI bool isEffectAvailable(int) const;
    MCAPI bool isSecondaryAvailable() const;
    MCAPI bool setPrimaryEffect(int);
    MCAPI bool setSecondaryEffect(int);
    MCAPI static bool isPaymentItem(class ItemDescriptor const &);

protected:

private:
    MCAPI void _applyEffects(class BlockSource &);
    MCAPI int _getEffectTier(int) const;
    MCAPI bool _isEffectValid(int) const;
    MCAPI bool _isSecondaryEffectValid(int) const;
    MCAPI void _loadClientSideState(class Level &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI bool _saveClientSideState(class CompoundTag &) const;

};