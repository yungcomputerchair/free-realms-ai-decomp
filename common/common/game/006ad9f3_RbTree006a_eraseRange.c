// addr: 0x006ad9f3
// name: RbTree006a_eraseRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
RbTree006a_eraseRange(void *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  void *local_c;
  void *pvStack_8;
  
                    /* Erases a range from the 006a red-black tree variant, clearing the entire tree
                       when the range is begin-to-end and otherwise deleting nodes one at a time.
                       Evidence is iterator equality, increment, clear, and erase-node helper calls.
                        */
  local_c = param_1;
  pvStack_8 = param_1;
  RbTreeIterator_ctorFromNode_006a(**(undefined4 **)((int)param_1 + 4),param_1);
  bVar3 = RbTreeIterator_equalsChecked(&param_3,&local_c);
  if (bVar3) {
    RbTreeIterator_ctorFromNode_006a(*(undefined4 *)((int)param_1 + 4),param_1);
    bVar3 = RbTreeIterator_equalsChecked(&stack0x00000010,&local_c);
    if (bVar3) {
      RbTree_clear_006a(param_1);
      RbTreeIterator_makeFromOwner006a(param_2);
      return param_2;
    }
  }
  bVar3 = RbTreeIterator_equalsChecked(&param_3,&stack0x00000010);
  uVar1 = param_3;
  uVar2 = param_4;
  while (!bVar3) {
    param_3 = uVar1;
    param_4 = uVar2;
    FUN_006aacfd();
    FUN_006ad77d(&local_c,uVar1,uVar2);
    bVar3 = RbTreeIterator_equalsChecked(&param_3,&stack0x00000010);
    uVar1 = param_3;
    uVar2 = param_4;
  }
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return param_2;
}

