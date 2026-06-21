// addr: 0x01419a20
// name: MersenneTwister_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MersenneTwister_dtor(void * this) */

void __cdecl MersenneTwister_dtor(void *this)

{
                    /* No-op destructor for the Mersenne Twister RNG object. It is paired with the
                       MT constructor/seed routines and has no owned heap state to release. */
  return;
}

