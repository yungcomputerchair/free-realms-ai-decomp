// addr: 0x01301f30
// name: FUN_01301f30
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01301f30(int param_1)

{
                    /* Returns the dword at offset 0x18 from a widely used object. It is probably a
                       small getter, but class ownership is unresolved here. */
  return *(undefined4 *)(param_1 + 0x18);
}

