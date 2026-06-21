// addr: 0x004deb7a
// name: CheckedTreeIterator_derefValue_nodeFlag15
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall CheckedTreeIterator_derefValue_nodeFlag15(int *param_1)

{
                    /* Validates a checked tree iterator is dereferenceable and returns the value
                       stored at node +0x0c. This instantiation uses sentinel flag byte +0x15. */
  if (*param_1 == 0) {
    FUN_00d83c2d();
  }
  if (param_1[1] == *(int *)(*param_1 + 4)) {
    FUN_00d83c2d();
  }
  return param_1[1] + 0xc;
}

