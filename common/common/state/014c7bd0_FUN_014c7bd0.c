// addr: 0x014c7bd0
// name: FUN_014c7bd0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_014c7bd0(void)

{
                    /* Small forwarding/thunk-style helper that calls FUN_0042c155 on the first
                       stack argument and FUN_014c7a40 on the second. No subsystem-specific identity
                       is available. */
  FUN_0042c155(&stack0x00000004);
  FUN_014c7a40(&stack0x00000008);
  return;
}

