// addr: 0x014569d0
// name: IntPointerMap_copyTreeFrom
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void IntPointerMap_copyTreeFrom(void * this, void * sourceMap) */

void __thiscall IntPointerMap_copyTreeFrom(void *this,void *sourceMap)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
                    /* Copies the red-black-tree storage from another int-keyed pointer/value map
                       and recomputes the leftmost and rightmost header links. The source map count
                       is copied from offset +8. */
  iVar2 = *(int *)((int)this + 4);
  uVar7 = FUN_014568e0(*(undefined4 *)(*(int *)((int)sourceMap + 4) + 4),iVar2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = *(int **)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)sourceMap + 8);
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

