// addr: 0x005644ef
// name: CheckedVector_ushort_at_constB
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall CheckedVector_ushort_at_constB(int param_1,uint param_2)

{
                    /* Bounds-checks a vector of 16-bit elements and returns element[index]. It is
                       another duplicated vector<ushort> accessor helper. */
  if ((*(int *)(param_1 + 4) == 0) ||
     ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1) <= param_2)) {
    FUN_00d83c2d();
  }
  return *(int *)(param_1 + 4) + param_2 * 2;
}

