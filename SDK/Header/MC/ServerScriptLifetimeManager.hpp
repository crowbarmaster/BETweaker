// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerScriptLifetimeManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSCRIPTLIFETIMEMANAGER
public:
    class ServerScriptLifetimeManager& operator=(class ServerScriptLifetimeManager const&) = delete;
    ServerScriptLifetimeManager(class ServerScriptLifetimeManager const&) = delete;
    ServerScriptLifetimeManager() = delete;
#endif

public:
    /*0*/ virtual ~ServerScriptLifetimeManager();
    /*1*/ virtual enum EventResult onServerLevelInitialized(class ServerInstance&, class Level&);
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();
    /*5*/ virtual enum EventResult onServerUpdateStart(class ServerInstance&);
    /*6*/ virtual void __unk_vfn_3();
    /*7*/ virtual void __unk_vfn_4();
    /*8*/ virtual void __unk_vfn_5();
    /*9*/ virtual enum EventResult onServerThreadStarted(class ServerInstance&);
    /*10*/ virtual enum EventResult onServerThreadStopped(class ServerInstance&);
    /*
    inline  ~ServerScriptLifetimeManager(){
         (ServerScriptLifetimeManager::*rv)();
        *((void**)&rv) = dlsym("??1ServerScriptLifetimeManager@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ServerScriptLifetimeManager(class std::optional<struct ScriptSettings>&&);
    MCAPI void onMainThreadStartLeaveGame();

protected:

private:
    MCAPI void _registerEventHandlers(class Level&) const;

};