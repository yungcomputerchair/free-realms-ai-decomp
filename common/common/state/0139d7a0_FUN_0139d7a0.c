// addr: 0x0139d7a0
// name: FUN_0139d7a0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0139d7a0(int param_1)

{
                    /* Returns field 0x48 from a play-area/card-related object. Callers use it
                       during node target/card list resolution, but the exact field name is not
                       proven. */
  return *(undefined4 *)(param_1 + 0x48);
}

