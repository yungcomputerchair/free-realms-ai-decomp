// addr: 0x012404b0
// name: RbTreeIterator_incrementLargeNode
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTreeIterator_incrementLargeNode(void * this) */

void __fastcall RbTreeIterator_incrementLargeNode(void *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Advances an RB-tree iterator whose node sentinel flag lives at offset 0x21,
                       using standard in-order successor logic. */
  if (*(int *)this == 0) {
    FUN_00d83c2d();
  }
  iVar2 = *(int *)((int)this + 4);
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
      while ((cVar1 == '\0' && (*(int *)((int)this + 4) == *(int *)(iVar2 + 8)))) {
        *(int *)((int)this + 4) = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x21);
      }
      *(int *)((int)this + 4) = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x21);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x21);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    *(int **)((int)this + 4) = piVar3;
    return;
  }
  FUN_00d83c2d();
  return;
}

