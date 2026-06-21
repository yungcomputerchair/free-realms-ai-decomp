// addr: 0x01299120
// name: StdRbTreeIterator32_advance
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdRbTreeIterator32_advance(int * iter) */

void __fastcall StdRbTreeIterator32_advance(int *iter)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Advances an rb-tree iterator with a larger node layout to its in-order
                       successor, using a nil flag at offset 0x1d. It asserts on invalid/end
                       iterators. */
  if (*iter == 0) {
    FUN_00d83c2d();
  }
  iVar2 = iter[1];
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x1d) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x1d);
      while ((cVar1 == '\0' && (iter[1] == *(int *)(iVar2 + 8)))) {
        iter[1] = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x1d);
      }
      iter[1] = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x1d);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x1d);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    iter[1] = (int)piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

