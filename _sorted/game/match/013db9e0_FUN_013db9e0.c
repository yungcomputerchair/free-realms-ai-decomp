// addr: 0x013db9e0
// name: FUN_013db9e0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013db9e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
                    /* Stores two dword fields into an existing 8-byte queue item used by nearby
                       synchronized enqueue routines. Exact owning class/name is unclear. */
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

