// addr: 0x014199e0
// name: MersenneTwister_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall MersenneTwister_ctor(void *param_1)

{
                    /* Initializes a Mersenne Twister RNG object by clearing state and setting
                       index/control fields near +0x9c0. Game setup allocates 0x9cc-byte instances
                       and seeds them immediately afterward. */
  _memset(param_1,0,0x270);
  *(undefined4 *)((int)param_1 + 0x9c0) = 1;
  *(undefined4 *)((int)param_1 + 0x9c4) = 0;
  *(undefined4 *)((int)param_1 + 0x9c8) = 0;
  return param_1;
}

