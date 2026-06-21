// addr: 0x00821990
// name: FUN_00821990
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00821990(int param_1)

{
                    /* Returns a secondary value from the owned pointer at this+0x50 when state bits
                       1 and 2 are set; otherwise returns 0. Class and field meaning are unknown. */
  if (((byte)*(undefined4 *)(param_1 + 0x4c) & 6) == 6) {
    return *(undefined4 *)(*(int *)(param_1 + 0x50) + 4);
  }
  return 0;
}

