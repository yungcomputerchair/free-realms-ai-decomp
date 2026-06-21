// addr: 0x01520fd0
// name: FUN_01520fd0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_01520fd0(int param_1,uint param_2)

{
                    /* Reads a boolean-like value from a member vector at offsets +0x10/+0x14 after
                       bounds checking. Exact owning class is unclear. */
  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2) <= param_2)) {
    FUN_00d83c2d();
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4) != 0);
}

