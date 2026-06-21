// addr: 0x00806be0
// name: FUN_00806be0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void unknown_treeNode_advanceOffset38_alt(void * node) */

void unknown_treeNode_advanceOffset38_alt(void *node)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  
                    /* Duplicate tree traversal helper over offsets +0x34/+0x38/+0x3c, likely
                       returning a neighboring node despite the void decompile. */
  if (*(int *)((int)node + 0x38) == 0) {
    pvVar2 = *(void **)((int)node + 0x34);
    while ((pvVar1 = pvVar2, pvVar1 != (void *)0x0 && (*(void **)((int)pvVar1 + 0x38) == node))) {
      node = pvVar1;
      pvVar2 = *(void **)((int)pvVar1 + 0x34);
    }
  }
  else {
    iVar3 = *(int *)(*(int *)((int)node + 0x38) + 0x3c);
    if (iVar3 != 0) {
      do {
        iVar3 = *(int *)(iVar3 + 0x3c);
      } while (iVar3 != 0);
      return;
    }
  }
  return;
}

