// addr: 0x013228d0
// name: FUN_013228d0
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013228d0(int param_1,undefined1 param_2)

{
                    /* Sets the byte stored at offset 0x14 of a small action-related object; only
                       observed in CWActionPlayedState update. Semantics are unclear from this
                       isolated setter. */
  *(undefined1 *)(param_1 + 0x14) = param_2;
  return;
}

