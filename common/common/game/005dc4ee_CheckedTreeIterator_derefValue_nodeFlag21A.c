// addr: 0x005dc4ee
// name: CheckedTreeIterator_derefValue_nodeFlag21A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall CheckedTreeIterator_derefValue_nodeFlag21A(int *param_1)

{
                    /* Validates a checked tree iterator is not end and returns the value at current
                       node +0x0c. This variant corresponds to +0x21 flag tree nodes. */
  if (*param_1 == 0) {
    FUN_00d83c2d();
  }
  if (param_1[1] == *(int *)(*param_1 + 4)) {
    FUN_00d83c2d();
  }
  return param_1[1] + 0xc;
}

