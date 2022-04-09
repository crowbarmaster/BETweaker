#include "../Global.h"

std::map<FishingHook*, int>fishingHook;
namespace Module {
	bool AutoFish(FishingHook* a1) {
        auto pl = a1->getPlayerOwner();
        if (a1->serverHooked() && !fishingHook.count(a1))
        {
            if (!fishingHook.count(a1)) {
                fishingHook[a1] = 0;
                return true;
            }
        }
        else if (a1->serverHooked() && fishingHook[a1] == 0)
        {
            fishingHook[a1] = 1;
            return true;
        }
        else if ( !a1->serverHooked() && fishingHook[a1] == 1)
        {
            ItemStack* item = pl->getHandSlot();
            item->getItem()->use(*item, *pl);
            fishingHook.erase(a1);
            pl->refreshInventory();
            Schedule::delay([pl]() {
                if (pl) {
                    ItemStack* item = pl->getHandSlot();
                    if (!item->isNull()) {
                        if (item->getTypeName() == "minecraft:fishing_rod") {
                            item->getItem()->use(*item, *pl);
                        }
                    }
                }
                }, 10);
        }
	}
}