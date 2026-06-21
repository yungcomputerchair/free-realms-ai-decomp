// addr: 0x005eddb7
// name: StdRbTree_node16_eraseRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
StdRbTree_node16_eraseRange(void *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  void *local_c;
  void *pvStack_8;
  
                    /* Erases a range from a red-black tree variant, clearing the whole tree when
                       the range spans begin to end and otherwise erasing nodes one by one. Evidence
                       is begin/end iterator checks and call to RbTree_clear. */
  local_c = param_1;
  pvStack_8 = param_1;
  RbTreeIterator_ctorFromNode(**(undefined4 **)((int)param_1 + 4),param_1);
  bVar3 = CheckedTreeIterator_equals_nodeFlag21C(&param_3,&local_c);
  if (bVar3) {
    RbTreeIterator_ctorFromNode(*(undefined4 *)((int)param_1 + 4),param_1);
    bVar3 = CheckedTreeIterator_equals_nodeFlag21C(&stack0x00000010,&local_c);
    if (bVar3) {
      RbTree_clear(param_1);
      RbTreeIterator_makeFromOwnerE357c(param_2);
      return param_2;
    }
  }
  bVar3 = CheckedTreeIterator_equals_nodeFlag21C(&param_3,&stack0x00000010);
  uVar1 = param_3;
  uVar2 = param_4;
  while (!bVar3) {
    param_3 = uVar1;
    param_4 = uVar2;
    FUN_005dfa36();
    FUN_005edb41(&local_c,uVar1,uVar2);
    bVar3 = CheckedTreeIterator_equals_nodeFlag21C(&param_3,&stack0x00000010);
    uVar1 = param_3;
    uVar2 = param_4;
  }
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return param_2;
}

