// addr: 0x005f4934
// name: StdRbTree_node21B_eraseRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
StdRbTree_node21B_eraseRange(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int local_c;
  int iStack_8;
  
                    /* Erases a range from a nodeFlag21B red-black tree, clearing the whole
                       container when first/last span the full tree and otherwise deleting nodes
                       sequentially. Evidence is iterator equality and clear/erase helper calls. */
  local_c = param_1;
  iStack_8 = param_1;
  CheckedTreeIterator_ctor_nodeFlag21B(**(undefined4 **)(param_1 + 4),param_1);
  bVar3 = CheckedTreeIterator_equals_nodeFlag21B(&param_3,&local_c);
  if (bVar3) {
    CheckedTreeIterator_ctor_nodeFlag21B(*(undefined4 *)(param_1 + 4),param_1);
    bVar3 = CheckedTreeIterator_equals_nodeFlag21B(&stack0x00000010,&local_c);
    if (bVar3) {
      FUN_005f3b27();
      RbTreeIterator_makeFromOwnerDc4ca(param_2);
      return param_2;
    }
  }
  bVar3 = CheckedTreeIterator_equals_nodeFlag21B(&param_3,&stack0x00000010);
  uVar1 = param_3;
  uVar2 = param_4;
  while (!bVar3) {
    param_3 = uVar1;
    param_4 = uVar2;
    FUN_005e2133();
    FUN_005f17ae(&local_c,uVar1,uVar2);
    bVar3 = CheckedTreeIterator_equals_nodeFlag21B(&param_3,&stack0x00000010);
    uVar1 = param_3;
    uVar2 = param_4;
  }
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return param_2;
}

