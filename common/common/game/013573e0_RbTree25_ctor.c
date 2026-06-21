// addr: 0x013573e0
// name: RbTree25_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * RbTree25_ctor(void * tree) */

void * __fastcall RbTree25_ctor(void *tree)

{
  void *pvVar1;
  
                    /* Constructs a red-black-tree object using the node layout with sentinel byte
                       at 0x25 and returns this. It allocates the header and initializes header
                       self-links/count. */
  pvVar1 = RbTreeNode25_allocHeader();
  *(void **)((int)tree + 4) = pvVar1;
  *(undefined1 *)((int)pvVar1 + 0x25) = 1;
  *(int *)(*(int *)((int)tree + 4) + 4) = *(int *)((int)tree + 4);
  *(undefined4 *)*(undefined4 *)((int)tree + 4) = *(undefined4 *)((int)tree + 4);
  *(int *)(*(int *)((int)tree + 4) + 8) = *(int *)((int)tree + 4);
  *(undefined4 *)((int)tree + 8) = 0;
  return tree;
}

