// addr: 0x00806ca0
// name: FUN_00806ca0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void unknown_treeNode_advanceOffset48_fourth(void * node) */

void unknown_treeNode_advanceOffset48_fourth(void *node)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  
                    /* Duplicate tree traversal helper over offsets +0x44/+0x48/+0x4c. */
  if (*(int *)((int)node + 0x48) == 0) {
    pvVar2 = *(void **)((int)node + 0x44);
    while ((pvVar1 = pvVar2, pvVar1 != (void *)0x0 && (*(void **)((int)pvVar1 + 0x48) == node))) {
      node = pvVar1;
      pvVar2 = *(void **)((int)pvVar1 + 0x44);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)((int)node + 0x48) + 0x4c);
    if (iVar3 != 0) {
      do {
        iVar3 = *(int *)(iVar3 + 0x4c);
      } while (iVar3 != 0);
      return;
    }
  }
  return;
}

