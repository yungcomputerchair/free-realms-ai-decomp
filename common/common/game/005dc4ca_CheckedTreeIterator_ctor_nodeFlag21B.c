// addr: 0x005dc4ca
// name: CheckedTreeIterator_ctor_nodeFlag21B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall CheckedTreeIterator_ctor_nodeFlag21B(int *param_1,int param_2,int param_3)

{
                    /* Constructs another checked tree iterator instantiation by storing container
                       and current node after a null-node check. Generic container support. */
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == 0) {
    FUN_00d83c2d();
  }
  *param_1 = param_3;
  return param_1;
}

