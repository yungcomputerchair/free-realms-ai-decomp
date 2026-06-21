// addr: 0x013d0f10
// name: FUN_013d0f10
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013d0f10(int param_1)

{
                    /* Returns the dword at offset 8 from a small lobby/trade-related object. The
                       class/field identity is not evident from this getter alone. */
  return *(undefined4 *)(param_1 + 8);
}

