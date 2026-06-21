// addr: 0x00791790
// name: FUN_00791790
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void unknown_treeNode_advanceA(void * node) */

void unknown_treeNode_advanceA(void *node)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  
                    /* Walks parent/child links in a tree-like node structure to find the next
                       traversal position, though the decompiler lost the returned pointer. */
  if (*(int *)((int)node + 0xc) == 0) {
    pvVar2 = *(void **)((int)node + 8);
    while ((pvVar1 = pvVar2, pvVar1 != (void *)0x0 && (*(void **)((int)pvVar1 + 0xc) == node))) {
      node = pvVar1;
      pvVar2 = *(void **)((int)pvVar1 + 8);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)((int)node + 0xc) + 0x10);
    if (iVar3 != 0) {
      do {
        iVar3 = *(int *)(iVar3 + 0x10);
      } while (iVar3 != 0);
      return;
    }
  }
  return;
}

