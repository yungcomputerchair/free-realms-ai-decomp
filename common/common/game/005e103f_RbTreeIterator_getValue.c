// addr: 0x005e103f
// name: RbTreeIterator_getValue
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall RbTreeIterator_getValue(int *param_1)

{
                    /* Validates that the iterator has an owning tree and is not at the header/end
                       node, then returns the payload stored after the red-black tree node header.
                        */
  if (*param_1 == 0) {
    FUN_00d83c2d();
  }
  if (param_1[1] == *(int *)(*param_1 + 4)) {
    FUN_00d83c2d();
  }
  return param_1[1] + 0xc;
}

