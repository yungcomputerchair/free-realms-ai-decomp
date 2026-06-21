// addr: 0x012b9f80
// name: ActionDB_Tree_rotateRight
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActionDB_Tree_rotateRight(void * this, void * node) */

void __thiscall ActionDB_Tree_rotateRight(void *this,void *node)

{
  int iVar1;
  int *piVar2;
  
                    /* Performs a right rotation in a red-black/tree structure, updating child,
                       parent, and root/sentinel links. Evidence is the standard rotation pattern
                       moving node->left up and fixing parent links with sentinel flag offset 0x15.
                        */
  iVar1 = *(int *)node;
  *(undefined4 *)node = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x15) == '\0') {
    *(void **)(*(int *)(iVar1 + 8) + 4) = node;
  }
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)node + 4);
  if (node == *(void **)(*(int *)((int)this + 4) + 4)) {
    *(int *)(*(int *)((int)this + 4) + 4) = iVar1;
    *(void **)(iVar1 + 8) = node;
    *(int *)((int)node + 4) = iVar1;
    return;
  }
  piVar2 = *(int **)((int)node + 4);
  if (node == (void *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(void **)(iVar1 + 8) = node;
    *(int *)((int)node + 4) = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(void **)(iVar1 + 8) = node;
  *(int *)((int)node + 4) = iVar1;
  return;
}

