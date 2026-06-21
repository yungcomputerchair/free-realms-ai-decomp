// addr: 0x012cada0
// name: FUN_012cada0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_012cada0(int param_1)

{
                    /* Clears three consecutive fields at offsets 4, 8, and 0xc on a small object.
                       Class ownership is not evident from this isolated helper. */
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

