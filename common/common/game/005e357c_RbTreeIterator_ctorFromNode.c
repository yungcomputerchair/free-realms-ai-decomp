// addr: 0x005e357c
// name: RbTreeIterator_ctorFromNode
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall RbTreeIterator_ctorFromNode(int *param_1,int param_2,int param_3)

{
                    /* Initializes a tree iterator with a current node and owner tree, validating
                       that the owner tree is not null. */
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == 0) {
    FUN_00d83c2d();
  }
  *param_1 = param_3;
  return param_1;
}

