// addr: 0x012d6610
// name: PropertyTreeIterator39_decrement
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTreeIterator39_decrement(int * iterator) */

void __fastcall PropertyTreeIterator39_decrement(int *iterator)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* Moves a tree iterator to the previous node for the node layout with sentinel
                       flag at +0x39. It handles the end sentinel by moving to the rightmost node
                       and otherwise climbs or descends to find the predecessor. */
  if (*iterator == 0) {
    FUN_00d83c2d();
  }
  piVar2 = (int *)iterator[1];
  if (*(char *)((int)piVar2 + 0x39) == '\0') {
    iVar3 = *piVar2;
    if (*(char *)(iVar3 + 0x39) == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x39);
      iVar4 = *(int *)(iVar3 + 8);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x39);
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
      iterator[1] = iVar3;
      return;
    }
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x39);
    while ((cVar1 == '\0' && (iterator[1] == *piVar2))) {
      iterator[1] = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x39);
    }
    if (*(char *)(iterator[1] + 0x39) != '\0') {
      FUN_00d83c2d();
      return;
    }
    iterator[1] = (int)piVar2;
  }
  else {
    iVar3 = piVar2[2];
    iterator[1] = iVar3;
    if (*(char *)(iVar3 + 0x39) != '\0') {
      FUN_00d83c2d();
      return;
    }
  }
  return;
}

