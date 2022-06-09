// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "RecipeIngredient.hpp"
#include "Item.hpp"
#include "Block.hpp"
#include "ShapedRecipe.hpp"
#include "ShapelessRecipe.hpp"
#include "ItemDescriptorCount.hpp"
#include "RecipeIngredient.hpp"

typedef function<std::unique_ptr<ShapedRecipe>(string, int, int, vector<RecipeIngredient> const&, vector<ItemInstance> const&, HashedString)> AddShapedRecipeCallback_t;
typedef function<std::unique_ptr<ShapelessRecipe>(string, vector<RecipeIngredient> const&, vector<ItemInstance> const&, HashedString)> AddShaplessRecipeCallback_t;

#undef BEFORE_EXTRA

class Recipes {

#define AFTER_EXTRA
// Add Member There
public:
class Type {
public:
    Item const* item;
    Block const* block;
    RecipeIngredient ingredient;
    char label;
public:
    class Type& operator=(class Type const&) = default;

    inline Type(string const& name, char label, int aux, unsigned short count) :ingredient(name, aux, count), label(label) {
        item = ingredient.mDescriptor.getItem();
        block = ingredient.mDescriptor.getBlock();
    }
	
};


struct FurnaceRecipeKey {
public:	
    int mIdAux;
    HashedString mTag;
public:

    inline FurnaceRecipeKey(int aux, HashedString tag) :mIdAux(aux), mTag(tag) {
    }
};

inline void addFurnaceRecipeAuxData(ItemInstance const& inputItem, ItemInstance const& outputItem, vector<HashedString> const& FurnaceTags) {
    auto IdAux = inputItem.getIdAux();
    _Smtx_t* v124[2];
	for(auto& v7 : FurnaceTags){
        SymCall("??$_Emplace@UFurnaceRecipeKey@Recipes@@AEBVItemInstance@@@?$_Tree@V?$_Tmap_traits@UFurnaceRecipeKey@Recip"
            "es@@VItemInstance@@U?$less@UFurnaceRecipeKey@Recipes@@@std@@V?$allocator@U?$pair@$$CBUFurnaceRecipeKey@Recipes"
            "@@VItemInstance@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUFurnaceRecipeKey@Recipe"
            "s@@VItemInstance@@@std@@PEAX@std@@_N@1@$$QEAUFurnaceRecipeKey@Recipes@@AEBVItemInstance@@@Z",
            void* , char* , _Smtx_t** , Recipes::FurnaceRecipeKey ,const ItemInstance&)((char*)this + 32 ,v124, FurnaceRecipeKey(IdAux, v7), outputItem);
    }
}

struct NormalizedRectangularRecipeResults {
    NormalizedRectangularRecipeResults() = delete;
    NormalizedRectangularRecipeResults(NormalizedRectangularRecipeResults const&) = delete;
    NormalizedRectangularRecipeResults(NormalizedRectangularRecipeResults const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPES
public:
    class Recipes& operator=(class Recipes const &) = delete;
    Recipes(class Recipes const &) = delete;
    Recipes() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECIPES
public:
#endif
    MCAPI Recipes(class Level *);
    MCAPI void addShapedRecipe(std::string, std::vector<class ItemInstance> const &, std::vector<std::string> const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::string const &, std::string const &, std::string const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::string const &, std::string const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::string const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    MCAPI void addShapedRecipe(std::string, class ItemInstance const &, std::vector<std::string> const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapedRecipe> (std::string, int, int, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    MCAPI void addShapelessRecipe(std::string, class ItemInstance const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &, int, class std::function<std::unique_ptr<class ShapelessRecipe> (std::string, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString)>);
    MCAPI void addShulkerBoxRecipe(std::string &, class ItemInstance const &, std::vector<class Recipes::Type> const &, std::vector<class HashedString> const &);
    MCAPI void clearRecipes();
    MCAPI struct std::pair<std::string, class Json::Value> extractRecipeObjInfo(class Json::Value const &);
    MCAPI class ItemInstance getFurnaceRecipeResult(class ItemStackBase const &, class HashedString const &) const;
    MCAPI class Recipe const * getRecipeByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &) const;
    MCAPI class Recipe * getRecipeFor(class ItemInstance const &, class HashedString const &) const;
    MCAPI class std::map<class HashedString, class std::map<std::string, class std::shared_ptr<class Recipe>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, class std::shared_ptr<class Recipe>>>>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::map<std::string, class std::shared_ptr<class Recipe>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, class std::shared_ptr<class Recipe>>>>>>> const & getRecipesAllTags() const;
    MCAPI void init(class ResourcePackManager &, class ExternalRecipeStore &);
    MCAPI bool loadRecipe(struct std::pair<std::string, class Json::Value> const &, class SemVersion const &);
    MCAPI ~Recipes();
    MCAPI static int const RECIPE_MAXIMUM_HEIGHT;
    MCAPI static int const RECIPE_MAXIMUM_WIDTH;
    MCAPI static std::vector<std::string> Shape(std::string const &, std::string const &, std::string const &);

//protected:
    MCAPI void _loadDataDrivenRecipes(std::vector<class PackInstance> const &);
    MCAPI static struct Recipes::NormalizedRectangularRecipeResults _normalizeRectangularRecipe(std::vector<std::string> const &);

//private:
    MCAPI void _addItemRecipe(std::unique_ptr<class Recipe>);
    MCAPI void _addMapRecipes();
    MCAPI bool _isRecipeValidToAdd(class Recipe const &);
    MCAPI class ItemInstance _itemInstanceFromIngredient(class RecipeIngredient const &) const;
    MCAPI bool _loadBrewingMix(class Json::Value const &, class SemVersion const &);
    MCAPI void _loadHardcodedRecipes();
    MCAPI class RecipeIngredient const _loadIngredientFromJson(class Json::Value const &, class SemVersion const &) const;

protected:

private:


};