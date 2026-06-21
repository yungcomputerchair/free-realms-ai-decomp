// addr: 0x00999b80
// name: FUN_00999b80
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00999b80(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* Rebalances a min-heap/priority queue after an item's priority changes, using
                       node index at +0x18 and priority at +0x1c. It bubbles upward first, then
                       downward if needed. */
  iVar5 = *(int *)(param_2 + 0x18);
  bVar3 = true;
  if (0 < iVar5) {
    while (iVar4 = (iVar5 + -1) / 2,
          *(int *)(*(int *)(*(int *)(param_1 + 4) + iVar5 * 4) + 0x1c) <
          *(int *)(*(int *)(*(int *)(param_1 + 4) + iVar4 * 4) + 0x1c)) {
      iVar6 = *(int *)(param_1 + 4);
      uVar2 = *(undefined4 *)(iVar6 + iVar5 * 4);
      *(undefined4 *)(iVar6 + iVar5 * 4) = *(undefined4 *)(iVar6 + iVar4 * 4);
      *(undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4) = uVar2;
      *(int *)(*(int *)(*(int *)(param_1 + 4) + iVar5 * 4) + 0x18) = iVar5;
      bVar3 = false;
      *(int *)(*(int *)(*(int *)(param_1 + 4) + iVar4 * 4) + 0x18) = iVar4;
      iVar5 = iVar4;
      if (iVar4 < 1) {
        return;
      }
    }
    if (!bVar3) {
      return;
    }
  }
  iVar6 = *(int *)(param_1 + 8);
  iVar4 = iVar5 * 2 + 1;
  if (iVar4 < iVar6) {
    do {
      iVar1 = iVar5 * 2 + 2;
      if ((iVar1 < iVar6) &&
         (*(int *)(*(int *)(*(int *)(param_1 + 4) + iVar1 * 4) + 0x1c) <=
          *(int *)(*(int *)(*(int *)(param_1 + 4) + iVar4 * 4) + 0x1c))) {
        if (*(int *)(*(int *)(*(int *)(param_1 + 4) + iVar5 * 4) + 0x1c) <=
            *(int *)(*(int *)(*(int *)(param_1 + 4) + iVar1 * 4) + 0x1c)) {
          return;
        }
        iVar4 = *(int *)(param_1 + 4);
        uVar2 = *(undefined4 *)(iVar4 + iVar5 * 4);
        *(undefined4 *)(iVar4 + iVar5 * 4) = *(undefined4 *)(iVar4 + iVar1 * 4);
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar1 * 4) = uVar2;
        *(int *)(*(int *)(*(int *)(param_1 + 4) + iVar5 * 4) + 0x18) = iVar5;
        *(int *)(*(int *)(*(int *)(param_1 + 4) + iVar1 * 4) + 0x18) = iVar1;
        iVar5 = iVar1;
      }
      else {
        if (*(int *)(*(int *)(*(int *)(param_1 + 4) + iVar5 * 4) + 0x1c) <=
            *(int *)(*(int *)(*(int *)(param_1 + 4) + iVar4 * 4) + 0x1c)) {
          return;
        }
        iVar6 = *(int *)(param_1 + 4);
        uVar2 = *(undefined4 *)(iVar6 + iVar5 * 4);
        *(undefined4 *)(iVar6 + iVar5 * 4) = *(undefined4 *)(iVar6 + iVar4 * 4);
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4) = uVar2;
        *(int *)(*(int *)(*(int *)(param_1 + 4) + iVar5 * 4) + 0x18) = iVar5;
        *(int *)(*(int *)(*(int *)(param_1 + 4) + iVar4 * 4) + 0x18) = iVar4;
        iVar5 = iVar4;
      }
      iVar6 = *(int *)(param_1 + 8);
      iVar4 = iVar5 * 2 + 1;
    } while (iVar4 < iVar6);
  }
  return;
}

