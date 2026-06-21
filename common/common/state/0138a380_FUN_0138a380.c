// addr: 0x0138a380
// name: FUN_0138a380
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0138a380(int param_1)

{
                    /* Returns field 0x60 from a card/play element object. Many card and command
                       paths use it, but the exact field purpose is not identifiable from this
                       context. */
  return *(undefined4 *)(param_1 + 0x60);
}

