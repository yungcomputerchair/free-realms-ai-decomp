// addr: 0x006abb03
// name: RbTreeIterator_ctorFromNode_006a
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall RbTreeIterator_ctorFromNode_006a(int *param_1,int param_2,int param_3)

{
                    /* Initializes the 006a tree-iterator instantiation with current node and owner
                       tree, rejecting a null owner. */
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == 0) {
    FUN_00d83c2d();
  }
  *param_1 = param_3;
  return param_1;
}

