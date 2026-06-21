// addr: 0x013a1080
// name: STLTree_copyNodesFrom
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void STLTree_copyNodesFrom(void * this, void * other) */

void __thiscall STLTree_copyNodesFrom(void *this,void *other)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
                    /* Copies the node tree from another STL-style tree/map into this container,
                       then recalculates the header's leftmost and rightmost node links. It calls
                       the recursive node clone helper and walks sentinel-marked children to set
                       begin/end metadata. */
  iVar2 = *(int *)((int)this + 4);
  uVar7 = FUN_013a0c70(*(undefined4 *)(*(int *)((int)other + 4) + 4),iVar2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = *(int **)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)other + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x15) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0x15);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x15);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)((int)this + 4) + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x15);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x15);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)((int)this + 4) + 8) = iVar2;
  return;
}

