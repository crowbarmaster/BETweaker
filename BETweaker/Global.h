#pragma once
#include "Version.h"

#define JsonFile "plugins/BETweaker/config.json"
#define VERSION ll::Version{PLUGIN_VERSION_MAJOR, PLUGIN_VERSION_MINOR, PLUGIN_VERSION_REVISION, PLUGIN_LLVERSION_STATUS}
#define VERSION_RES ll::Version{PLUGIN_VERSION_MAJOR, PLUGIN_VERSION_MINOR, PLUGIN_VERSION_REVISION}
#define BDSP TARGET_BDS_PROTOCOL_VERSION
#define toStr(x) std::to_string(x)
#define getI18n(x,n) I18n::get(x,n)
#define H(x) do_hash2(x)

#include <iostream>
#include <llapi/Global.h>
#include "Main/setting.h"
#include <llapi/mc/Player.hpp>
#include <llapi/mc/BlockInstance.hpp>
#include <llapi/mc/Block.hpp>
#include <llapi/mc/CropBlock.hpp>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/ItemStack.hpp>
#include <llapi/EventAPI.h>
#include <llapi/LoggerAPI.h>
#include <llapi/mc/ItemInstance.hpp>
#include <llapi/mc/CompoundTag.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/Randomize.hpp>
#include <llapi/mc/Random.hpp>
#include <llapi/mc/Container.hpp>
#include <llapi/mc/Item.hpp>
#include <llapi/mc/BlockSource.hpp>
#include <llapi/mc/ResourcePack.hpp>
#include <llapi/mc/PackSourceFactory.hpp>
#include <llapi/mc/Core.hpp>
#include <llapi/mc/ResourcePackManager.hpp>
#include <llapi/mc/PackIdVersion.hpp>
#include <llapi/mc/VanillaBlocks.hpp>
#include <llapi/mc/LeafBlock.hpp>
#include <llapi/mc/SemVersion.hpp>
#include <llapi/mc/DispenserBlock.hpp>
#include <llapi/mc/LogBlock.hpp>
#include <llapi/mc/FallingBlock.hpp>
#include <llapi/mc/FishingHook.hpp>
#include <llapi/mc/DoorBlock.hpp>
#include <llapi/mc/Facing.hpp>
#include <llapi/mc/BlockStateVariant.hpp>
#include <llapi/mc/BlockStateGroup.hpp>
#include <llapi/mc/EnchantUtils.hpp>
#include <llapi/mc/EnchantmentInstance.hpp>
#include <llapi/mc/VanillaStates.hpp>
#include <llapi/mc/ItemState.hpp>
#include <llapi/mc/DispenserBlockActor.hpp>
#include "Main/Helper.hpp"
#include <llapi/FormUI.h>
#include <llapi/ScheduleAPI.h>
#include <set>

extern Logger logger;
extern ScheduleTask hubinfo;

bool CheckAutoUpdate(bool isUpdateManually, bool forceUpdate = false);

/////////////////////// LL AutoUpgrade ///////////////////////

#define LL_RELAY_INDEX "https://upgrade.litebds.com/id.json"
#define LL_UPDATE_URL_PREFIX "https://cdn.jsdelivr.net/gh/LiteLDev/Upgrade"
#define LL_UPDATE_URL_PATH "/BETweaker/BETweaker.json"

#define LL_UPDATE_CHECK_INTERVAL (10 * 60)
#define LL_UPDATE_CONNECTION_TIMEOUT 60

#define LL_UPDATE_PROGRAM "plugins/LiteLoader/LLAutoUpdate.dll"

#define LL_UPDATE_CACHE_PATH "plugins/LiteLoader/Update/"
#define LL_UPDATE_INFO_RECORD "plugins/LiteLoader/Update/Update.ini"

#define LL_UPDATE_OTHER_FILES_RECORD "plugins/BETweaker/Versions.ini"

extern void loadCfg();
//extern void checkUpdate();
extern std::set<std::string> sleepList;
