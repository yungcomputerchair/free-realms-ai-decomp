// addr: 0x012a0d20
// name: MessageDB_RbTreeIterator_next
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_RbTreeIterator_next(void * iterator) */

void __fastcall MessageDB_RbTreeIterator_next(void *iterator)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Advances a red-black-tree iterator to the next in-order node, with debug
                       checks on invalid/sentinel iterators. It is shared by MessageDB scans and
                       unrelated serializers. */
  if (*(int *)iterator == 0) {
    FUN_00d83c2d();
  }
  iVar2 = *(int *)((int)iterator + 4);
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x2d) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x2d);
      while ((cVar1 == '\0' && (*(int *)((int)iterator + 4) == *(int *)(iVar2 + 8)))) {
        *(int *)((int)iterator + 4) = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x2d);
      }
      *(int *)((int)iterator + 4) = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x2d);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x2d);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    *(int **)((int)iterator + 4) = piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

