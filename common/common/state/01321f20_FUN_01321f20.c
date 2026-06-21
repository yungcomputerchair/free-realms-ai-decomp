// addr: 0x01321f20
// name: FUN_01321f20
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01321f20(int param_1)

{
                    /* Returns the dword at offset 0x18 from an action/card-related object. The
                       field is widely used, but the owning class and semantic name are not proven
                       by this ctx. */
  return *(undefined4 *)(param_1 + 0x18);
}

