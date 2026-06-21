// addr: 0x005df9f6
// name: CheckedTreeIterator_derefValue_nodeFlag21B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall CheckedTreeIterator_derefValue_nodeFlag21B(int *param_1)

{
                    /* Validates a checked tree iterator and returns current node +0x0c as the
                       stored value. This is another +0x21-node tree iterator dereference
                       instantiation. */
  if (*param_1 == 0) {
    FUN_00d83c2d();
  }
  if (param_1[1] == *(int *)(*param_1 + 4)) {
    FUN_00d83c2d();
  }
  return param_1[1] + 0xc;
}

