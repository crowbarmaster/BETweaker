#include "../pch.h"
#include "../Global.h"
#include <llapi/mc/ActorFactory.hpp>
#include <llapi/mc/ActorDefinitionIdentifier.hpp>
#include <llapi/mc/Minecart.hpp>
#include <llapi/mc/Spawner.hpp>
#include <llapi/mc/Types.hpp>

namespace Module {
    std::unordered_set<string> minecartItem{
        "minecraft:chest",
        "minecraft:hopper",
        "minecraft:tnt"
    };

    ActorType getMinecartActorType(const string& a1) {
        using enum ActorType;
        switch (H(a1))
        {
        //case(H("minecraft:chest")):
        //    return ChestMinecart;
        //case(H("minecraft:hopper")):
        //    return HopperMinecart;
        //case(H("minecraft:tnt")):
        //    return TntMinecart;

        default:
            break;
        }
    }

    bool FastSetMinecart(Player* pl, Actor* ac) {
        auto item = pl->getHandSlot();
        //if (minecartItem.count(item->getTypeName())) {
        //    item->remove(1);
        //    pl->sendInventory(1);
        //    auto& af = Global<Level>->getActorFactory();
        //    Global<Level>->addEntity(*pl->getBlockSource(), af.createTransformedActor(ActorDefinitionIdentifier(getMinecartActorType(item->getTypeName())), ac));
        //    return true;
        //}
        return false;
    }
}