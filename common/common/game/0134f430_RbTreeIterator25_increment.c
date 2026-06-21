// addr: 0x0134f430
// name: RbTreeIterator25_increment
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTreeIterator25_increment(int * iterator) */

void __fastcall RbTreeIterator25_increment(int *iterator)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Advances a red-black-tree iterator to its in-order successor using
                       parent/left/right links and the sentinel byte at node+0x25. It asserts/aborts
                       on null or end iterators. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  iVar2 = iterator[1];
  if (*(char *)(iVar2 + 0x25) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x25) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x25);
      while ((cVar1 == '\0' && (iterator[1] == *(int *)(iVar2 + 8)))) {
        iterator[1] = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x25);
      }
      iterator[1] = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x25);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x25);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    iterator[1] = (int)piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

