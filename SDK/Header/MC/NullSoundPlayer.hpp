// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NullSoundPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLSOUNDPLAYER
public:
    class NullSoundPlayer& operator=(class NullSoundPlayer const &) = delete;
    NullSoundPlayer(class NullSoundPlayer const &) = delete;
    NullSoundPlayer() = delete;
#endif

public:
    /*0*/ virtual ~NullSoundPlayer();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual unsigned __int64 registerLoop(std::string const &, class std::function<void (struct LoopingSoundState &)>, float, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSOUNDPLAYER
    MCVAPI void fadeOut(unsigned __int64, float);
    MCVAPI void fadeToStopMusic(float);
    MCVAPI bool getItem(std::string const &, class Core::Path const &, class SoundItem &) const;
    MCVAPI bool isLoadingMusic() const;
    MCVAPI bool isPlayingMusic(class Core::Path const &) const;
    MCVAPI bool isPlayingMusicEvent(std::string const &) const;
    MCVAPI bool isPlayingSound(unsigned __int64) const;
    MCVAPI unsigned __int64 play(std::string const &, class Vec3 const &, float, float);
    MCVAPI unsigned __int64 playAttached(std::string const &, class std::function<void (struct SoundInstanceProperties &)> &&);
    MCVAPI void playMusic(std::string const &, float, unsigned int &);
    MCVAPI void playMusic(std::string const &, float);
    MCVAPI unsigned __int64 playUI(std::string const &, float, float);
    MCVAPI void setMusicVolumeMultiplier(float);
    MCVAPI void stop(std::string const &);
    MCVAPI void stop(unsigned __int64);
    MCVAPI void stopAllDelayedSoundActions();
    MCVAPI void stopAllSounds();
    MCVAPI void stopMusic();
    MCVAPI class std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(unsigned __int64) const;
    MCVAPI class std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(unsigned __int64) const;
    MCVAPI void unregisterLoop(unsigned __int64, bool);
#endif

};