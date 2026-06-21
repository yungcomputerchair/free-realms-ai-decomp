// addr: 0x012a88d0
// name: StringKeyTreeIterator_next
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StringKeyTreeIterator_next(int * iterator) */

void __fastcall StringKeyTreeIterator_next(int *iterator)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Advances an RB-tree iterator to the in-order successor for nodes with a
                       string key payload. It checks the sentinel byte at node+0x2d and walks
                       right-subtree-leftmost or climbs parents. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  iVar2 = iterator[1];
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x2d) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x2d);
      while ((cVar1 == '\0' && (iterator[1] == *(int *)(iVar2 + 8)))) {
        iterator[1] = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x2d);
      }
      iterator[1] = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x2d);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x2d);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    iterator[1] = (int)piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

