// addr: 0x01521060
// name: FUN_01521060
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01521060(int param_1,uint param_2,byte param_3)

{
                    /* Stores a boolean byte as a 4-byte value in a member vector at offsets
                       +0x10/+0x14 after bounds checking. Exact owning class is unclear. */
  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2) <= param_2)) {
    FUN_00d83c2d();
  }
  *(uint *)(*(int *)(param_1 + 0x10) + param_2 * 4) = (uint)param_3;
  return;
}

