// addr: 0x01355820
// name: RbTree25_initHeader
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree25_initHeader(void * tree) */

void __fastcall RbTree25_initHeader(void *tree)

{
  void *pvVar1;
  
                    /* Initializes a red-black-tree object by allocating its 0x28-byte header,
                       marking it as the sentinel, pointing all header links to itself, and clearing
                       the node count. The tree node layout uses the sentinel byte at 0x25. */
  pvVar1 = RbTreeNode25_allocHeader();
  *(void **)((int)tree + 4) = pvVar1;
  *(undefined1 *)((int)pvVar1 + 0x25) = 1;
  *(int *)(*(int *)((int)tree + 4) + 4) = *(int *)((int)tree + 4);
  *(undefined4 *)*(undefined4 *)((int)tree + 4) = *(undefined4 *)((int)tree + 4);
  *(int *)(*(int *)((int)tree + 4) + 8) = *(int *)((int)tree + 4);
  *(undefined4 *)((int)tree + 8) = 0;
  return;
}

