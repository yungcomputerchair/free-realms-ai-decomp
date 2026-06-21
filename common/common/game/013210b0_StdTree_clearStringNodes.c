// addr: 0x013210b0
// name: StdTree_clearStringNodes
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdTree_clearStringNodes(void * tree) */

void __fastcall StdTree_clearStringNodes(void *tree)

{
                    /* Clears a tree by destroying all non-sentinel nodes, then resets the header
                       links and node count. The child destroyer 013207a0 frees string-containing
                       tree nodes. */
  StdTree_destroyStringNodes(*(void **)(*(int *)((int)tree + 4) + 4));
  *(int *)(*(int *)((int)tree + 4) + 4) = *(int *)((int)tree + 4);
  *(undefined4 *)((int)tree + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)tree + 4) = *(undefined4 *)((int)tree + 4);
  *(int *)(*(int *)((int)tree + 4) + 8) = *(int *)((int)tree + 4);
  return;
}

