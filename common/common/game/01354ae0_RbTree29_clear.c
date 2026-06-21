// addr: 0x01354ae0
// name: RbTree29_clear
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RbTree29_clear(void * tree) */

void __fastcall RbTree29_clear(void *tree)

{
                    /* Clears a red-black tree whose node sentinel flag is at offset 0x1d, resets
                       the header links to itself, and zeroes the node count. It uses the matching
                       recursive node free helper. */
  RbTreeNode29_freeRightSpine(*(void **)(*(int *)((int)tree + 4) + 4));
  *(int *)(*(int *)((int)tree + 4) + 4) = *(int *)((int)tree + 4);
  *(undefined4 *)((int)tree + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)tree + 4) = *(undefined4 *)((int)tree + 4);
  *(int *)(*(int *)((int)tree + 4) + 8) = *(int *)((int)tree + 4);
  return;
}

