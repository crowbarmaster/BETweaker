// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Skeleton : public HumanoidMonster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETON
public:
    class Skeleton& operator=(class Skeleton const &) = delete;
    Skeleton(class Skeleton const &) = delete;
    Skeleton() = delete;
#endif

public:
    /*14*/ virtual ~Skeleton();
    /*16*/ virtual void resetUserPos(bool);
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*50*/ virtual void vehicleTick();
    /*52*/ virtual float getRidingHeight();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual bool canInteractWithOtherEntitiesInGame() const;
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual void playerTouch(class Player &);
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*101*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*112*/ virtual void setTarget(class Actor *);
    /*114*/ virtual bool isValidTarget(class Actor *) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*130*/ virtual void vehicleLanded(class Vec3 const &, class Vec3 const &);
    /*139*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*151*/ virtual void awardKillScore(class Actor &, int);
    /*171*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*173*/ virtual bool canFreeze() const;
    /*178*/ virtual int getPortalWaitTime() const;
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void __unk_vfn_181();
    /*183*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*192*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*193*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual void __unk_vfn_195();
    /*198*/ virtual bool canSynchronizeNewEntity() const;
    /*211*/ virtual bool canBeAffected(class MobEffectInstance const &) const;
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*222*/ virtual void getDebugText(std::vector<std::string> &);
    /*228*/ virtual bool isWorldBuilder() const;
    /*229*/ virtual bool isCreative() const;
    /*230*/ virtual bool isAdventure() const;
    /*231*/ virtual bool isSurvival() const;
    /*232*/ virtual bool isSpectator() const;
    /*237*/ virtual bool canDestroyBlock(class Block const &) const;
    /*238*/ virtual void setAuxValue(int);
    /*244*/ virtual void stopSpinAttack();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*251*/ virtual void die(class ActorDamageSource const &);
    /*261*/ virtual void __unk_vfn_261();
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void spawnAnim();
    /*303*/ virtual float getItemUseStartupProgress() const;
    /*304*/ virtual float getItemUseIntervalProgress() const;
    /*307*/ virtual void __unk_vfn_307();
    /*309*/ virtual bool isAlliedTo(class Mob *);
    /*310*/ virtual bool doHurtTarget(class Actor *, enum ActorDamageCause const &);
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void sendArmorDamage(class std::bitset<4> const &);
    /*338*/ virtual void onBorn(class Actor &, class Actor &);
    /*345*/ virtual void __unk_vfn_345();
    /*355*/ virtual void _serverAiMobStep();
    /*359*/ virtual void __unk_vfn_359();
    /*
    inline bool useNewAi() const{
        bool (Skeleton::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Skeleton@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Skeleton(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void setWitherParent(class WitherBoss *);

protected:

private:
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

};