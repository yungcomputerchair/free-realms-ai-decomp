// addr: 0x013101b0
// name: RBTreeIterator_increment
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RBTreeIterator_increment(void * iter) */

void __fastcall RBTreeIterator_increment(void *iter)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Advances a red-black-tree iterator to the next node, with sentinel/end
                       validation. */
  if (*(int *)iter == 0) {
    FUN_00d83c2d();
  }
  iVar2 = *(int *)((int)iter + 4);
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
      while ((cVar1 == '\0' && (*(int *)((int)iter + 4) == *(int *)(iVar2 + 8)))) {
        *(int *)((int)iter + 4) = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x15);
      }
      *(int *)((int)iter + 4) = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x15);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x15);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    *(int **)((int)iter + 4) = piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

