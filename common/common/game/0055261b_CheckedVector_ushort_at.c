// addr: 0x0055261b
// name: CheckedVector_ushort_at
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall CheckedVector_ushort_at(int param_1,uint param_2)

{
                    /* Bounds-checks a vector of 16-bit elements and returns the address of
                       element[index]. Calls the debug handler if the vector is empty or the index
                       is out of range. */
  if ((*(int *)(param_1 + 4) == 0) ||
     ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1) <= param_2)) {
    FUN_00d83c2d();
  }
  return *(int *)(param_1 + 4) + param_2 * 2;
}

