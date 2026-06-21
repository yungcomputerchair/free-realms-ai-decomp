// addr: 0x005efe63
// name: StdRbTree_node21A_eraseRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
StdRbTree_node21A_eraseRange(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int local_c;
  int iStack_8;
  
                    /* Erases a range from a nodeFlag21A red-black tree, optimizing full-range
                       deletion into a clear and otherwise incrementing and erasing each node.
                       Evidence is iterator equality helpers and call to 005ec695 eraseNode. */
  local_c = param_1;
  iStack_8 = param_1;
  CheckedTreeIterator_ctor_nodeFlag21A(**(undefined4 **)(param_1 + 4),param_1);
  bVar3 = CheckedTreeIterator_equals_nodeFlag21A(&param_3,&local_c);
  if (bVar3) {
    CheckedTreeIterator_ctor_nodeFlag21A(*(undefined4 *)(param_1 + 4),param_1);
    bVar3 = CheckedTreeIterator_equals_nodeFlag21A(&stack0x00000010,&local_c);
    if (bVar3) {
      FUN_005e7bd1();
      RbTreeIterator_makeFromOwnerDc39f(param_2);
      return param_2;
    }
  }
  bVar3 = CheckedTreeIterator_equals_nodeFlag21A(&param_3,&stack0x00000010);
  uVar1 = param_3;
  uVar2 = param_4;
  while (!bVar3) {
    param_3 = uVar1;
    param_4 = uVar2;
    RbTreeIterator_increment(&param_3);
    StdRbTree_node17_eraseNode(&local_c,uVar1,uVar2);
    bVar3 = CheckedTreeIterator_equals_nodeFlag21A(&param_3,&stack0x00000010);
    uVar1 = param_3;
    uVar2 = param_4;
  }
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return param_2;
}

