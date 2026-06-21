// addr: 0x01354c90
// name: RbTree21_clear
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree21_clear(void * tree) */

void __fastcall RbTree21_clear(void *tree)

{
                    /* Clears a red-black tree whose node sentinel flag is at offset 0x15, resets
                       the header links to itself, and zeroes the node count. This is the tree clear
                       helper for that node layout. */
  RbTreeNode21_freeRightSpine(*(void **)(*(int *)((int)tree + 4) + 4));
  *(int *)(*(int *)((int)tree + 4) + 4) = *(int *)((int)tree + 4);
  *(undefined4 *)((int)tree + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)tree + 4) = *(undefined4 *)((int)tree + 4);
  *(int *)(*(int *)((int)tree + 4) + 8) = *(int *)((int)tree + 4);
  return;
}

