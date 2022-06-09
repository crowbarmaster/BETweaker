// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CraftHandlerTrade {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERTRADE
public:
    class CraftHandlerTrade& operator=(class CraftHandlerTrade const &) = delete;
    CraftHandlerTrade(class CraftHandlerTrade const &) = delete;
    CraftHandlerTrade() = delete;
#endif


public:
    /*0*/ virtual ~CraftHandlerTrade();
    /*1*/ virtual enum ItemStackNetResult handleConsumedItem(enum ContainerEnumName, unsigned char, class ItemStack const &);
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /*5*/ virtual void _postCraftRequest(bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTHANDLERTRADE
public:
#endif
    MCAPI CraftHandlerTrade(class ContainerScreenContext const &, class ItemStackRequestActionCraftHandler &);

//private:
    MCAPI class std::tuple<enum ItemStackNetResult, class MerchantRecipe const *> _getMerchantRecipeFromNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    MCAPI enum ItemStackNetResult _handleTrade1(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 12> const &);
    MCAPI enum ItemStackNetResult _initResultItem(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    MCAPI enum ItemStackNetResult _initTrade2Consumes();
    MCAPI bool _matchesAuxValueTrade2(class ItemStackBase const &, class ItemStackBase const &) const;

private:


};