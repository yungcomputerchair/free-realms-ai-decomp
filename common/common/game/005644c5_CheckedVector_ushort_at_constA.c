// addr: 0x005644c5
// name: CheckedVector_ushort_at_constA
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall CheckedVector_ushort_at_constA(int param_1,uint param_2)

{
                    /* Bounds-checks a vector of 16-bit elements and returns element[index]. This is
                       a duplicate template/helper instantiation used by command/state code. */
  if ((*(int *)(param_1 + 4) == 0) ||
     ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1) <= param_2)) {
    FUN_00d83c2d();
  }
  return *(int *)(param_1 + 4) + param_2 * 2;
}

