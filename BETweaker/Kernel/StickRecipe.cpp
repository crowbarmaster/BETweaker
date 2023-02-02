#include "../pch.h"
#include "../Global.h"
#include <llapi/mc/Recipes.hpp>
#include <llapi/mc/ItemRegistry.hpp>
#include <llapi/mc/CreativeItemRegistry.hpp>
#include <llapi/mc/SortItemInstanceIdAux.hpp>
#include <llapi/mc/ItemInstance.hpp>
#include <llapi/mc/Recipe.hpp>
THook(void, "?_loadHardcodedRecipes@Recipes@@AEAAXXZ", Recipes& recipes) {
    original(recipes);
    vector<string> shapeMatrix{"AAA","ABA","AAA",};
    vector<Recipes::Type> types{ 
        Recipes::Type("minecraft:stick", 'A', 1, 0),
        Recipes::Type("minecraft:diamond", 'B', 1, 0)
    };
    vector<HashedString> craftingTags{ "crafting_table" };
    recipes.addShapedRecipe("betweaker::betskick", Helper::cteateBetStick(), shapeMatrix, types, craftingTags, 2, nullptr);
}
#include <llapi/mc/ItemRegistryManager.hpp>
#include <llapi/mc/ItemRegistryRef.hpp>
void regtest() {
	auto& recipes = Global<Level>->getRecipes();
    vector<HashedString> fTags{ "furnace" };
    recipes.addFurnaceRecipeAuxData(ItemInstance(*ItemRegistryManager::getItemRegistry().lookupByName("minecraft:stick"), 0, 0, 0), Helper::cteateBetStick(), fTags);
}

THook(void, "?addLooseCreativeItems@Item@@SAX_NAEBVBaseGameVersion@@@Z", void* a1) {
    original(a1);
    Item::addCreativeItem(Helper::cteateBetStick());
}
