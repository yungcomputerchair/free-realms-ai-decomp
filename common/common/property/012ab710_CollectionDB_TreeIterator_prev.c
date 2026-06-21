// addr: 0x012ab710
// name: CollectionDB_TreeIterator_prev
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_TreeIterator_prev(int * iterator) */

void __fastcall CollectionDB_TreeIterator_prev(int *iterator)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* Moves a CollectionDB RB-tree iterator to the in-order predecessor, handling
                       end/sentinel nodes and invalid iterator checks. It mirrors the successor
                       routine over the same node layout. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  piVar2 = (int *)iterator[1];
  if (*(char *)((int)piVar2 + 0x2d) == '\0') {
    iVar3 = *piVar2;
    if (*(char *)(iVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x2d);
      iVar4 = *(int *)(iVar3 + 8);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x2d);
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
      iterator[1] = iVar3;
      return;
    }
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x2d);
    while ((cVar1 == '\0' && (iterator[1] == *piVar2))) {
      iterator[1] = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x2d);
    }
    if (*(char *)(iterator[1] + 0x2d) != '\0') {
      FUN_00d83c2d();
      return;
    }
    iterator[1] = (int)piVar2;
  }
  else {
    iVar3 = piVar2[2];
    iterator[1] = iVar3;
    if (*(char *)(iVar3 + 0x2d) != '\0') {
      FUN_00d83c2d();
      return;
    }
  }
  return;
}

