// addr: 0x013228c0
// name: FUN_013228c0
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __fastcall FUN_013228c0(int param_1)

{
                    /* Returns the byte stored at offset 0x14 of a small action-related object; only
                       observed in CWActionPlayedState update. Semantics are unclear from this
                       isolated getter. */
  return *(undefined1 *)(param_1 + 0x14);
}

