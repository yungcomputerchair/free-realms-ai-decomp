// addr: 0x01456320
// name: STLMapIterator_next
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void STLMapIterator_next(void * iterator) */

void __fastcall STLMapIterator_next(void *iterator)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Advances a tree/map iterator to the in-order successor, handling
                       right-subtree descent and parent climb cases with sentinel checks. */
  if (*(int *)iterator == 0) {
    FUN_00d83c2d();
  }
  iVar2 = *(int *)((int)iterator + 4);
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
      while ((cVar1 == '\0' && (*(int *)((int)iterator + 4) == *(int *)(iVar2 + 8)))) {
        *(int *)((int)iterator + 4) = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x15);
      }
      *(int *)((int)iterator + 4) = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x15);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x15);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    *(int **)((int)iterator + 4) = piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

