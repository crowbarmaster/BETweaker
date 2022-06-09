// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AquiferNoises {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AQUIFERNOISES
public:
    class AquiferNoises& operator=(class AquiferNoises const &) = delete;
    AquiferNoises() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AQUIFERNOISES
public:
#endif
    MCAPI AquiferNoises(class AquiferNoises const &);
    MCAPI ~AquiferNoises();
    MCAPI static class AquiferNoises make(class XoroshiroPositionalRandomFactory const &);

//private:
    MCAPI AquiferNoises(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class XoroshiroPositionalRandomFactory);

private:


};