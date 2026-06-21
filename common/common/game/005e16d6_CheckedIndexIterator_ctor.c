// addr: 0x005e16d6
// name: CheckedIndexIterator_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall CheckedIndexIterator_ctor(int *param_1,uint param_2,int param_3)

{
                    /* Initializes a checked index iterator from a container/range descriptor after
                       verifying the index is within the range bounds. */
  *param_1 = 0;
  if (((param_3 == 0) || (param_2 < *(uint *)(param_3 + 4))) || (*(uint *)(param_3 + 8) < param_2))
  {
    FUN_00d83c2d();
  }
  *param_1 = param_3;
  param_1[1] = param_2;
  return param_1;
}

