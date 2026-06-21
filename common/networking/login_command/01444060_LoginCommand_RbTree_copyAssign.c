// addr: 0x01444060
// name: LoginCommand_RbTree_copyAssign
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RbTree_copyAssign(void * this, void * source) */

void __thiscall LoginCommand_RbTree_copyAssign(void *this,void *source)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
                    /* Assigns/copies a red-black-tree-style container from another tree by cloning
                       the source subtree, copying the size, and recomputing begin/end header links.
                       It is used by cloneInto methods for login command embedded containers. */
  iVar2 = *(int *)((int)this + 4);
  uVar7 = LoginCommand_RbTree_cloneSubtree(*(undefined4 *)(*(int *)((int)source + 4) + 4),iVar2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = *(int **)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)source + 8);
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

