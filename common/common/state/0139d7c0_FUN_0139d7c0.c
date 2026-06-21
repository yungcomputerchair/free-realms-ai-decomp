// addr: 0x0139d7c0
// name: FUN_0139d7c0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0139d7c0(int param_1)

{
                    /* Returns field 0x50 from a play-area/card-related object. It is used by
                       CWGame_getPlayArea and draw/target code, but the field's semantic name is
                       unresolved. */
  return *(undefined4 *)(param_1 + 0x50);
}

