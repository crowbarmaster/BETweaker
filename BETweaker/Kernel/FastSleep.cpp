#include "../pch.h"
#include "../Global.h"
#include <llapi/mc/ServerLevel.hpp>
#include <llapi/mc/GameRules.hpp>
#include <llapi/mc/LevelSettings.hpp>
#include <llapi/mc/GameRuleId.hpp>
#include <llapi/mc/SetTimePacket.hpp>
#include <llapi/mc/LevelData.hpp>
#include <llapi/ScheduleAPI.h>
#include <llapi/mc/AttributeInstance.hpp>
#include <llapi/mc/Weather.hpp>
#include <llapi/mc/Attribute.hpp>
#include <llapi/mc/Dimension.hpp>
#include <llapi/mc/SharedAttributes.hpp>

static ScheduleTask temp;
namespace Module {
    bool canFastSleep() {
        auto Probability = Settings::FastSleepProbability;
        auto sleepPlayerCount = sleepList.size();
        auto ActivePlayerCount = Global<Level>->getActivePlayerCount();
        if ((float)ActivePlayerCount * Probability <= (float)sleepPlayerCount) {
            return true;
        }
        return false;
    }
    void cancelSleep() {
        if (!canFastSleep()) {
            temp.cancel();
        }
    }
	
    void FastSleep() {
        Global<Level>->forEachPlayer([](Player& sp)->bool {
            if (sp.isSleeping()) {
                if (canFastSleep()) {
                    temp.cancel();
                    temp = Schedule::delay([]() {
                    Level* level = Global<Level>;
                    auto& gameRule = level->getGameRules();
                    if (gameRule.getBool(GameRuleId(1), 0)) {
                            //level->setTime((unsigned int)(24000 * ((level->getTime() + 24000) / 24000)));
                           // auto pkt = SetTimePacket(level->getTime());
                           // level->getPacketSender()->send(pkt);
                            Global<Level>->forEachPlayer([](Player& pl)->bool {
                                if (pl.isSleeping()) {
                                    pl.stopSleepInBed(0, 0);
                                    if (!(unsigned int)pl.getLevel().getLevelData().getGameDifficulty())
                                    {
                                        auto att = pl.getMutableAttribute(SharedAttributes::HEALTH);
                                        att->resetToMaxValue();
                                        *((int*)&pl + 172) = 20;
                                        pl._sendDirtyActorData();
                                    }
                                    Level& level = pl.getLevel();
                                    int timeToSet = (level.getTime() + 24000) / 24000;
                                    string command = "time set morning";
                                    level.runcmd(command);
                                }
                                return true;
                                });
                            *(bool*)(level + 10408) = 0;
                            level->forEachDimension([](Dimension& dim)->bool {
                                
                                dim.getWeather().stop();
                                return true;
                                });
                        }

                        sleepList.clear();
                        }, 80);
                }
            }
            return true;
         });
    }
}
