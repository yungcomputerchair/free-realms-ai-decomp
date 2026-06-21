// addr: 0x00804030
// name: TreeNode_findTraversalNeighbor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TreeNode_findTraversalNeighbor(void * node) */

void TreeNode_findTraversalNeighbor(void *node)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  
                    /* Partial tree-node traversal helper that walks parent/child links at
                       +0x14/+0x18/+0x1c to find a neighboring node. The decompile drops the
                       returned value, so behavior is inferred from link traversal. */
  if (*(int *)((int)node + 0x18) == 0) {
    pvVar2 = *(void **)((int)node + 0x14);
    while ((pvVar1 = pvVar2, pvVar1 != (void *)0x0 && (*(void **)((int)pvVar1 + 0x18) == node))) {
      node = pvVar1;
      pvVar2 = *(void **)((int)pvVar1 + 0x14);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)((int)node + 0x18) + 0x1c);
    if (iVar3 != 0) {
      do {
        iVar3 = *(int *)(iVar3 + 0x1c);
      } while (iVar3 != 0);
      return;
    }
  }
  return;
}

