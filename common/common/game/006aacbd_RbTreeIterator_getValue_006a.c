// addr: 0x006aacbd
// name: RbTreeIterator_getValue_006a
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall RbTreeIterator_getValue_006a(int *param_1)

{
                    /* Validates a tree iterator and returns the payload address following its node
                       header. */
  if (*param_1 == 0) {
    FUN_00d83c2d();
  }
  if (param_1[1] == *(int *)(*param_1 + 4)) {
    FUN_00d83c2d();
  }
  return param_1[1] + 0xc;
}

