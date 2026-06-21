// addr: 0x012ba140
// name: PropertyTreeIterator15_increment
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTreeIterator15_increment(int * iterator) */

void __fastcall PropertyTreeIterator15_increment(int *iterator)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Advances an in-order tree iterator to the next node using left/right/parent
                       links and a sentinel flag at node+0x15. It asserts via FUN_00d83c2d when
                       incrementing an invalid/end iterator. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  iVar2 = iterator[1];
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
      while ((cVar1 == '\0' && (iterator[1] == *(int *)(iVar2 + 8)))) {
        iterator[1] = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x15);
      }
      iterator[1] = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x15);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x15);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    iterator[1] = (int)piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

