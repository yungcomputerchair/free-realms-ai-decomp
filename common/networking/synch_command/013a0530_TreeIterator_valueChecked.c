// addr: 0x013a0530
// name: TreeIterator_valueChecked
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall TreeIterator_valueChecked(int *param_1)

{
                    /* Returns the value payload of a checked tree/map iterator. It rejects null
                       containers and the end node, then returns node + 0xc. */
  if (*param_1 == 0) {
    FUN_00d83c2d();
  }
  if (param_1[1] == *(int *)(*param_1 + 4)) {
    FUN_00d83c2d();
  }
  return param_1[1] + 0xc;
}

