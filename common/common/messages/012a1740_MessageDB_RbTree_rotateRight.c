// addr: 0x012a1740
// name: MessageDB_RbTree_rotateRight
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MessageDB_RbTree_rotateRight(void * tree, void * node) */

void __thiscall MessageDB_RbTree_rotateRight(void *this,void *tree,void *node)

{
  int *piVar1;
  int *piVar2;
  
                    /* Performs a red-black-tree right rotation around the supplied node, updating
                       parent and header links. This supports STL maps used by MessageDB. */
  piVar1 = *(int **)((int)tree + 8);
  *(int *)((int)tree + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x2d) == '\0') {
    *(void **)(*piVar1 + 4) = tree;
  }
  piVar1[1] = *(int *)((int)tree + 4);
  if (tree == *(void **)(*(int *)((int)this + 4) + 4)) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar1;
    *piVar1 = (int)tree;
    *(int **)((int)tree + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)((int)tree + 4);
  if (tree == (void *)*piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = (int)tree;
    *(int **)((int)tree + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = (int)tree;
  *(int **)((int)tree + 4) = piVar1;
  return;
}

