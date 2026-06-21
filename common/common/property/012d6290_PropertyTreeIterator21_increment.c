// addr: 0x012d6290
// name: PropertyTreeIterator21_increment
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTreeIterator21_increment(int * iterator) */

void __fastcall PropertyTreeIterator21_increment(int *iterator)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Advances an in-order tree iterator for the node layout whose sentinel flag is
                       at +0x21. It walks to the leftmost node of the right subtree or climbs
                       parents, with invalid/end checks via FUN_00d83c2d. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  iVar2 = iterator[1];
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
      while ((cVar1 == '\0' && (iterator[1] == *(int *)(iVar2 + 8)))) {
        iterator[1] = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x21);
      }
      iterator[1] = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x21);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x21);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    iterator[1] = (int)piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

