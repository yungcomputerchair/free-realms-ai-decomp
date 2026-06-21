// addr: 0x00dd00b0
// name: FUN_00dd00b0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00dd00b0(int param_1)

{
                    /* Synchronizes object flag 0x10000 from bit 26 in the global per-index flag
                       table. Exact flag meaning is unknown. */
  if ((*(uint *)(DAT_01bf3f78 + *(int *)(*(int *)(param_1 + 8) + 4) * 4) >> 0x1a & 1) != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
  return;
}

